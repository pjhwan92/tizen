/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Hakjoo Ko <hakjoo.ko@samsung.com>
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

#ifndef __VCONF_INTERNAL_SYNCML_KEYS_H__
#define __VCONF_INTERNAL_SYNCML_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-setting-keys.h
 * @defgroup    vconf_internal_setting_key Definitions of internal shared Keys for setting
 * @ingroup     vconf_internal_key
 * @author      Junhyul Lee(junhyuk.lee@samsung.com)
 * @version     0.1
 * @brief       This file has the definitions of shared keys for syncml engine , ui \n
 */

/* ========================== SyncML engine & UI Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_syncml_key
 * @{
 * @brief Syncml vconf Keys & Values for oma-dm, oma-ds engine & ui \n
 *        Maintainer : junhyuk7.lee@samsung.com
 */
#define VCONFKEY_SYNCML_DM_PREFIX                                 "db/SyncML/oma-dm-service"
#define VCONFKEY_SYNCML_DS_PREFIX                                 "db/SyncML/oma-ds-service"

/* SyncML DM */

/** @brief profile count number (int type)**/
#define  VCONFKEY_CSC_SYNCMLDM_NBFIELD             "db/SyncML/oma-dm-service/DevManagement/NbDevManagement"

/** @brief profile server  name (string) **/
#define  VCONFKEY_CSC_SYNCMLDM_ACCNAME             "db/SyncML/oma-dm-service/DevManagement/%d/AccName"

/** @brief profile server auth type  (int) **/
#define  VCONFKEY_CSC_SYNCMLDM_AUTHTYPE            "db/SyncML/oma-dm-service/DevManagement/%d/AuthType"

/** @brief profile client Nonce (string) **/
#define  VCONFKEY_CSC_SYNCMLDM_CLIENTNONCE         "db/SyncML/oma-dm-service/DevManagement/%d/ClientNonce"

/** @brief profile server address (string) **/
#define  VCONFKEY_CSC_SYNCMLDM_SERVADDR            "db/SyncML/oma-dm-service/DevManagement/%d/ServAddr"

/** @brief profile server ID (string) **/
#define  VCONFKEY_CSC_SYNCMLDM_SERVID              "db/SyncML/oma-dm-service/DevManagement/%d/ServID"

/** @brief profile server nonce (string) **/
#define  VCONFKEY_CSC_SYNCMLDM_SERVNONCE           "db/SyncML/oma-dm-service/DevManagement/%d/ServNonce"

/** @brief profile port type  (int) **/
#define  VCONFKEY_CSC_SYNCMLDM_SERVPORT            "db/SyncML/oma-dm-service/DevManagement/%d/Port"

/** @brief profile server password (string) **/
#define  VCONFKEY_CSC_SYNCMLDM_SERVPWD				"db/SyncML/oma-dm-service/DevManagement/%d/ServPwd"

/** @brief profile user password (string) **/
#define  VCONFKEY_CSC_SYNCMLDM_PASSWORD			"db/SyncML/oma-dm-service/DevManagement/%d/Password"



/* SyncML DS */

/** @brief ds profile count number (int type)**/
#define VCONFKEY_CSC_SYNCMLDS_NBDATASYNC	        "db/SyncML/oma-ds-service/DS/Accounts/NbDataSync"

/** @brief ds profile netework name  (string) **/
#define VCONFKEY_CSC_SYNCMLDS_NETWORK		        "db/SyncML/oma-ds-service/DS/Accounts/Sync%d/NetworkName"

/** @brief ds version  (string) **/
#define VCONFKEY_CSC_SYNCMLDS_VERSION		        "db/SyncML/oma-ds-service/DS/Accounts/Sync%d/DSVersion"

/** @brief ds profile sync name   (string) **/
#define VCONFKEY_CSC_SYNCMLDS_NAME                 "db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Name"

/** @brief ds profile sync name   (string) **/
#define VCONFKEY_CSC_SYNCMLDS_ADDR		            "db/SyncML/oma-ds-service/DS/Accounts/Sync%d/AppAddr/Addr"

/** @brief ds profile client Uer ID   (string) **/
#define VCONFKEY_CSC_SYNCMLDS_AUTHNAME	        	"db/SyncML/oma-ds-service/DS/Accounts/Sync%d/AuthInfo/Client/AuthName"

/** @brief ds profile client Uer password   (string) **/
#define VCONFKEY_CSC_SYNCMLDS_AUTHPWD	        	"db/SyncML/oma-ds-service/DS/Accounts/Sync%d/AuthInfo/Client/AuthPWD"

/** @brief ds profile sync type  (string) **/
/* ex) refresh from server */
#define VCONFKEY_CSC_SYNCMLDS_SYNCTYPE             "db/SyncML/oma-ds-service/DS/Accounts/Sync%d/GUI/SyncType"

/** @brief ds profile sync mode (string) **/
/* ex) push */
#define VCONFKEY_CSC_SYNCMLDS_SYNCMODE             "db/SyncML/oma-ds-service/DS/Accounts/Sync%d/GUI/SyncMode"

/** @brief ds profile contact enable (int) **/
/* ex) 1: enable  0: disable*/
#define VCONFKEY_CSC_SYNCMLDS_CONTACTS_ENABLED		"db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Resource/Contacts/Enabled"

/** @brief ds profile contact target uri (string) **/
/* ex) card */
#define VCONFKEY_CSC_SYNCMLDS_CONTACTS_TGTURI		"db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Resource/Contacts/TgtURI"

/** @brief ds profile contact user id  (string) **/
#define VCONFKEY_CSC_SYNCMLDS_CONTACTS_AUTHNAME	"db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Resource/Contacts/AuthInfo/Server/AuthName"

/** @brief ds profile contact user password  (string) **/
#define VCONFKEY_CSC_SYNCMLDS_CONTACTS_AUTHPWD		"db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Resource/Contacts/AuthInfo/Server/AuthPWD"

/** @brief ds profile Calendar enable (int) **/
/* ex) 1: enable  0: disable */
#define VCONFKEY_CSC_SYNCMLDS_CALENDAR_ENABLED		"db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Resource/Calendar/Enabled"

/** @brief ds profile Calendar target uri  **/
/* ex) cal */
#define VCONFKEY_CSC_SYNCMLDS_CALENDAR_TGTURI		"db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Resource/Calendar/TgtURI"

/** @brief ds profile calendar user id  (string) **/
#define VCONFKEY_CSC_SYNCMLDS_CALENDAR_AUTHNAME	"db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Resource/Calendar/AuthInfo/Server/AuthName"

/** @brief ds profile calendar user password  (string) **/
#define VCONFKEY_CSC_SYNCMLDS_CALENDAR_AUTHPWD		"db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Resource/Calendar/AuthInfo/Server/AuthPWD"

/** @brief ds profile Memo enable (int) **/
/* ex) 1: enable  0: disable */
#define VCONFKEY_CSC_SYNCMLDS_MEMO_ENABLED	    	"db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Resource/Memo/Enabled"

/** @brief ds profile Memo target uri  (string) **/
#define VCONFKEY_CSC_SYNCMLDS_MEMO_TGTURI		    "db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Resource/Memo/TgtURI"

/** @brief ds profile Memo auth id (string) **/
#define VCONFKEY_CSC_SYNCMLDS_MEMO_AUTHNAME		"db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Resource/Memo/AuthInfo/Server/AuthName"

/** @brief ds profile Memo auth pwd (string) **/
#define VCONFKEY_CSC_SYNCMLDS_MEMO_AUTHPWD		    "db/SyncML/oma-ds-service/DS/Accounts/Sync%d/Resource/Memo/AuthInfo/Server/AuthPWD"




/** @brief dm software update wifi only on/off (int)  **/
#define VCONFKEY_SYNCML_DM_SW_UPDATE_WIFI_ONLY     "db/SyncML/oma-dm-service/software_update/wifionly/setting"

/** @brief dm software update push message on/off (int) **/
#define VCONFKEY_SYNCML_DM_SW_UPDATE_PUSH_MSG      "db/SyncML/oma-dm-service/software_update/pushmessage/setting"

/** @brief dm software update auto update  only on/off (int) **/
#define VCONFKEY_SYNCML_DM_SW_UPDATE_AUTH_UPDATE   "db/SyncML/oma-dm-service/software_update/autoupdate/setting"

#endif
