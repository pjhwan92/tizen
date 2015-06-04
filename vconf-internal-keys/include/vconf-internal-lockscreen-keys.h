/*
 * vconf-internal-lockscreen-keys
 *
 * Copyright (c) 2000 - 2012 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Seungtaek Chung <seungtaek.chung@samsung.com>, Mi-Ju Lee <miju52.lee@samsung.com>, Xi Zhichan <zhichan.xi@samsung.com>, YoungSub Ko <ys4610.ko@samsung.com>
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

#ifndef __VCONF_INTERNAL_LOCKSCREEN_KEYS_H__
#define __VCONF_INTERNAL_LOCKSCREEN_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-lockscreen-keys.h
 * @defgroup    vconf_internal_lockscreen-key Definitions of internal shared Keys for lockscreen
 * @ingroup     vconf_internal_key
 * @author      Seungtaek Chung <seungtaek.chung@samsung.com>, Mi-Ju Lee <miju52.lee@samsung.com>, Xi Zhichan <zhichan.xi@samsung.com>, youngsub Ko <ys4610.ko@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for lockscreen \n
 */

/* ========================== lockscreen Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_lockscreen_key
 * @{
 * @brief lockscreen Keys & Values\n
 *        Maintainer : Seungtaek Chung <seungtaek.chung@samsung.com>, Mi-Ju Lee <miju52.lee@samsung.com>, Xi Zhichan <zhichan.xi@samsung.com>, YoungSub Ko <ys4610.ko@samsung.com>
 */

/**
 * @brief whether phone lock is verified
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_PHONE_LOCK_VERIFICATION	"memory/lockscreen/phone_lock_verification"

/**
 * @brief whether shorcut is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_SHORTCUT_DISPLAY	"db/lockscreen/shortcut_display"

/**
 * @brief whether event notification is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_EVENT_NOTIFICATION_DISPLAY	"db/lockscreen/event_notification_display"

/**
 * @brief whether context aware notification is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_CONTEXT_AWARE_NOTIFICATION_DISPLAY	"db/lockscreen/context_aware_notification_display"

/**
 * @brief whether clock is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_CLOCK_DISPLAY	"db/lockscreen/clock_display"

/**
 * @brief whether weather is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_WEATHER_DISPLAY	"db/lockscreen/weather_display"

/**
 * @brief whether help text is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_HELP_TEXT_DISPLAY	"db/lockscreen/help_text_display"

/**
 * @brief first package name displayed  in shortcut
 *
 * type : string
*/
#define VCONFKEY_LOCKSCREEN_SHORTCUT1	"file/lockscreen/shortcut1"

/**
 * @brief second package name displayed  in shortcut
 *
 * type : string
*/
#define VCONFKEY_LOCKSCREEN_SHORTCUT2	"file/lockscreen/shortcut2"

/**
 * @brief third package name displayed  in shortcut
 *
 * type : string
*/
#define VCONFKEY_LOCKSCREEN_SHORTCUT3	"file/lockscreen/shortcut3"

/**
 * @brief fourth package name displayed  in shortcut
 *
 * type : string
*/
#define VCONFKEY_LOCKSCREEN_SHORTCUT4	"file/lockscreen/shortcut4"

#endif	/* __VCONF_INTERNAL_LOCKSCREEN_KEYS_H__ */
