/*
 *  RUA
 *
 * Copyright (c) 2000 - 2012 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Jayoun Lee <airjany@samsung.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/*
 * @file    rua.c
 * @version 0.1
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <db-util.h>

#include "rua.h"
#include "db-schema.h"
#include "perf-measure.h"

#include <dlog.h>
/***********************************************************/
#include <vconf/vconf.h>
/***********************************************************/

#ifdef LOG_TAG
#undef LOG_TAG
#endif

#define LOG_TAG "RUA"

#define RUA_DB_PATH	"/opt/dbspace"
#define RUA_DB_NAME	".rua.db"
#define RUA_HISTORY	"rua_history"
#define QUERY_MAXLEN	4096
#define Q_LATEST \
	"select pkg_name from rua_history " \
	"order by launch_time desc limit 1 "

static sqlite3 *_db = NULL;

static int __exec(sqlite3 *db, char *query);
static int __create_table(sqlite3 *db);
static sqlite3 *__db_init(char *root);

char flag = 0;

int rua_clear_history(void)
{
	int r;
	char query[QUERY_MAXLEN];

	if (_db == NULL) {
		LOGE("rua is not inited.");
		return -1;
	}

	LOGD("rua clear history is invoked");

	snprintf(query, QUERY_MAXLEN, "delete from %s;", RUA_HISTORY);

	r = __exec(_db, query);

	return r;
}

int rua_delete_history_with_pkgname(char *pkg_name)
{
	int r;
	char query[QUERY_MAXLEN];

	if (_db == NULL) {
		LOGE("rua is not inited.");
		return -1;
	}

	if (pkg_name == NULL) {
		LOGE("pkg_name is null");
		return -1;
	}

	LOGD("rua delete history with name(%s) is invoked", pkg_name);

	snprintf(query, QUERY_MAXLEN, "delete from %s where pkg_name = '%s';",
		RUA_HISTORY, pkg_name);

	r = __exec(_db, query);

	return r;
}

int rua_delete_history_with_apppath(char *app_path)
{
	int r;
	char query[QUERY_MAXLEN];

	if (_db == NULL) {
		LOGE("rua is not inited.");
		return -1;
	}

	if (app_path == NULL) {
		LOGE("app_path is null");
		return -1;
	}

	LOGD("rua delete history with path(%s) is invoked", app_path);

	snprintf(query, QUERY_MAXLEN, "delete from %s where app_path = '%s';",
		RUA_HISTORY, app_path);

	r = __exec(_db, query);

	return r;
}

int rua_add_history(struct rua_rec *rec)
{
	int r;
	int cnt = 0;
	char query[QUERY_MAXLEN];
	sqlite3_stmt *stmt;

	unsigned int timestamp;
	timestamp = PERF_MEASURE_START("RUA");

	LOGD("rua_add_history invoked");

	if (_db == NULL) {
		LOGE("rua is not inited.");
		return -1;
	}

	if (rec == NULL) {
		LOGE("rec is null");
		return -1;
	}

	snprintf(query, QUERY_MAXLEN,
		"select count(*) from %s where pkg_name = '%s';", RUA_HISTORY,
		rec->pkg_name);

	r = sqlite3_prepare(_db, query, sizeof(query), &stmt, NULL);
	if (r != SQLITE_OK) {
		LOGE("query prepare error(%d)", r);
		return -1;
	}

	r = sqlite3_step(stmt);
	if (r == SQLITE_ROW) {
		cnt = sqlite3_column_int(stmt, 0);
	}
	sqlite3_finalize(stmt);

	/****************************************************/
	if (!flag) {
		vconf_unset_recursive ("db/rua_data");
		flag = 1;
	}
	if(strcmp(rec->pkg_name, "org.tizen.menu-screen") && strcmp(rec->pkg_name, "org.tizen.volume") && strcmp(rec->pkg_name, "org.tizen.lockscreen") && strcmp(rec->pkg_name, "org.tizen.pwlock")){
		int total = 0;
		int apps;
		char key[255], *key2 = "db/rua_data/apps";
		sprintf (key, "db/rua_data/%s", "tizen_total_cnt");
		if (vconf_get_int (key, &total) < 0)
			total = 0;
		vconf_set_int (key, total + 1);
		memset (key, 0, 255);
		sprintf (key, "db/rua_data/%s", rec->pkg_name);
		if (vconf_get_int (key, &total) < 0) {
			total = 0;
			if (vconf_get_int (key2, &apps) < 0)
				apps = 0;
			vconf_set_int (key2, apps + 1);
		}
		vconf_set_int (key, total + 1);
	}
	/****************************************************/
	if (cnt == 0) {
		/* insert */
		snprintf(query, QUERY_MAXLEN,
			"insert into %s ( pkg_name, app_path, arg, launch_time ) "
			" values ( \"%s\", \"%s\", \"%s\", %d ) ",
			RUA_HISTORY,
			rec->pkg_name ? rec->pkg_name : "",
			rec->app_path ? rec->app_path : "",
			rec->arg ? rec->arg : "", (int)time(NULL));
	}
	else {
		/* update */
		snprintf(query, QUERY_MAXLEN,
			"update %s set arg='%s', launch_time='%d' where pkg_name = '%s';",
			RUA_HISTORY,
			rec->arg ? rec->arg : "", (int)time(NULL), rec->pkg_name);
	}

	r = __exec(_db, query);
	if (r == -1) {
		LOGE("[RUA ADD HISTORY ERROR] %s\n", query);
		return -1;
	}

	PERF_MEASURE_END("RUA", timestamp);

	return r;
}

int rua_history_load_db(char ***table, int *nrows, int *ncols)
{
	int r;
	char query[QUERY_MAXLEN];
	char *db_err = NULL;
	char **db_result = NULL;

	LOGD("rua_history_load_db invoked");

	if (table == NULL) {
		LOGE("table is null");
		return -1;
	}
	if (nrows == NULL) {
		LOGE("nrows is null");
		return -1;
	}
	if (ncols == NULL) {
		LOGE("ncols is null");
		return -1;
	}

	snprintf(query, QUERY_MAXLEN,
		 "select * from %s order by launch_time desc;", RUA_HISTORY);

	r = sqlite3_get_table(_db, query, &db_result, nrows, ncols, &db_err);

	if (r == SQLITE_OK)
		*table = db_result;
	else {
		LOGE("get table error(%d)", r);
		sqlite3_free_table(db_result);
	}

	return r;
}

int rua_history_unload_db(char ***table)
{
	if (*table) {
		sqlite3_free_table(*table);
		*table = NULL;
		return 0;
	}
	return -1;
}

int rua_history_get_rec(struct rua_rec *rec, char **table, int nrows, int ncols,
			int row)
{
	char **db_result = NULL;
	char *tmp = NULL;

	LOGD("rua_history_get_rec invoked");

	if (rec == NULL) {
		LOGE("rec is null");
		return -1;
	}
	if (table == NULL) {
		LOGE("table is null");
		return -1;
	}
	if (row >= nrows) {
		LOGE("row is bigger than nrows");
		return -1;
	}

	db_result = table + ((row + 1) * ncols);

	tmp = db_result[RUA_COL_ID];
	if (tmp) {
		rec->id = atoi(tmp);
	}

	tmp = db_result[RUA_COL_PKGNAME];
	if (tmp) {
		rec->pkg_name = tmp;
	}

	tmp = db_result[RUA_COL_APPPATH];
	if (tmp) {
		rec->app_path = tmp;
	}

	tmp = db_result[RUA_COL_ARG];
	if (tmp) {
		rec->arg = tmp;
	}

	tmp = db_result[RUA_COL_LAUNCHTIME];
	if (tmp) {
		rec->launch_time = atoi(tmp);
	}

	return 0;
}

int rua_is_latest_app(const char *pkg_name)
{
	int r;
	sqlite3_stmt *stmt;
	const unsigned char *ct;

	LOGD("rua_is_latest_app invoked");

	if (!pkg_name || !_db) {
		LOGE("invalid param . init error");
		return -1;
	}

	r = sqlite3_prepare(_db, Q_LATEST, sizeof(Q_LATEST), &stmt, NULL);
	if (r != SQLITE_OK) {
		LOGE("query prepare error(%d)", r);
		return -1;
	}

	r = sqlite3_step(stmt);
	if (r == SQLITE_ROW) {
		ct = sqlite3_column_text(stmt, 0);
		if (ct == NULL || ct[0] == '\0') {
			LOGE("text is null");
			sqlite3_finalize(stmt);
			return -1;
		}

		if (strncmp(pkg_name, (const char*)ct, strlen(pkg_name)) == 0) {
			sqlite3_finalize(stmt);
			return 0;
		}
	}

	sqlite3_finalize(stmt);
	return -1;
}

int rua_init(void)
{
	unsigned int timestamp;
	timestamp = PERF_MEASURE_START("RUA");

	LOGD("rua_init invoked");

	if (_db) {
		return 0;
	}

	char defname[FILENAME_MAX];
	snprintf(defname, sizeof(defname), "%s/%s", RUA_DB_PATH, RUA_DB_NAME);
	_db = __db_init(defname);

	if (_db == NULL) {
		LOGE("db handle is null");
		return -1;
	}

	PERF_MEASURE_END("RUA", timestamp);

	return 0;
}

int rua_fini(void)
{
	unsigned int timestamp;
	timestamp = PERF_MEASURE_START("RUA");

	LOGD("rua_fini invoked");

	if (_db) {
		db_util_close(_db);
		_db = NULL;
	}

	PERF_MEASURE_END("RUA", timestamp);
	return 0;
}

static int __exec(sqlite3 *db, char *query)
{
	int r;
	char *errmsg = NULL;

	if (db == NULL)
		return -1;

	r = sqlite3_exec(db, query, NULL, NULL, &errmsg);

	if (r != SQLITE_OK) {
		LOGE("query error(%d)(%s)", r, errmsg);
		sqlite3_free(errmsg);
		return -1;
	}

	return 0;
}

static int __create_table(sqlite3 *db)
{
	int r;

	r = __exec(db, CREATE_RUA_HISTORY_TABLE);
	if (r == -1) {
		LOGE("create table error");
		return -1;
	}

	return 0;
}

static sqlite3 *__db_init(char *root)
{
	int r;
	sqlite3 *db = NULL;

	r = db_util_open(root, &db, 0);
	if (r) {
		LOGE("db util open error(%d)", r);
		db_util_close(db);
		return NULL;
	}

	r = __create_table(db);
	if (r) {
		LOGE("create table error(%d)", r);
		db_util_close(db);
		return NULL;
	}

	return db;
}
