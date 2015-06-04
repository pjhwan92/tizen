/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2012 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Jeesun Kim <iamjs.kim@samsung.com>
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

#ifndef __VCONF_INTERNAL_UG_SETTING_CRASH_EFL_KEYS_H__
#define __VCONF_INTERNAL_UG_SETTING_CRASH_EFL_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-ug-setting-crash-efl-keys.h
 * @defgroup    vconf_internal_ug_setting_crash_efl_key Definitions of internal shared Keys for crash
 * @ingroup     vconf_internal_key
 * @author      Jeesun Kim <iamjs.kim@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for crash \n
 */

/* ========================== Crash Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_ug_setting_crash_efl_key
 * @{
 * @brief Crash Keys & Values\n
 *        Maintainer : Jeesun Kim <iamjs.kim@samsung.com>
 */

#define VCONFKEY_UG_SETTING_CRASH_EFL_PREFIX "db/ug-setting-crash-efl"

/**
 * @brief Flag for automatically send when crash occurs.
 * 0(int): off
 * 1(int): on
 */
#define VCONFKEY_UG_SETTING_CRASH_EFL_AUTOSEND VCONFKEY_UG_SETTING_CRASH_EFL_PREFIX"/autosend"

/**
 * @brief Flag for showing popup when crash occurs.
 * 0(int): off
 * 1(int): on
 */
#define VCONFKEY_UG_SETTING_CRASH_EFL_POPUP VCONFKEY_UG_SETTING_CRASH_EFL_PREFIX"/popup"

/**
 * @brief Flag for showing progress in indicator.
 * 0(int): off
 * 1(int): on
 */
#define VCONFKEY_UG_SETTING_CRASH_EFL_PROGRESS VCONFKEY_UG_SETTING_CRASH_EFL_PREFIX"/progress"

/**
 * @brief Set flag on when crash occured in unable network environment.
 * 0(int): off
 * 1(int): on
 */
#define VCONFKEY_UG_SETTING_CRASH_EFL_SENDFLAG VCONFKEY_UG_SETTING_CRASH_EFL_PREFIX"/sendflag"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_UG_SETTING_CRASH_EFL_KEYS_H__ */

