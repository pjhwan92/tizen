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

#ifndef __VCONF_INTERNAL_WIFI_KEYS_H__
#define __VCONF_INTERNAL_WIFI_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-wifi-keys.h
 * @defgroup    vconf_internal_wifi_key Definitions of internal shared Keys for wifi
 * @ingroup     vconf_internal_key
 * @author      s.seo@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for wifi \n
 */

/* ========================== Wifi Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_wifi_key
 * @{
 * @brief Wifi Keys & Values\n
 *        Maintainer : s.seo@samsung.com
 */

/**
 * @brief Wi-Fi state
 *
 * 0: power off \n
 * 1: power on \n
 * 2: connected \n
 */
#define VCONFKEY_WIFI_STATE                 "memory/wifi/state"
enum {
	VCONFKEY_WIFI_OFF = 0x00,
	VCONFKEY_WIFI_UNCONNECTED,
	VCONFKEY_WIFI_CONNECTED,
	VCONFKEY_WIFI_TRANSFER,
	VCONFKEY_WIFI_STATE_MAX
};

/**
 * @brief Wi-Fi signal strength
 *
 * 0 ~ 4 integer value of signal strength
 */
#define VCONFKEY_WIFI_STRENGTH              "memory/wifi/strength"
enum {
	VCONFKEY_WIFI_STRENGTH_MIN = 0,
	VCONFKEY_WIFI_STRENGTH_MAX = 4
};

/**
 * @brief State of Wi-Fi QS terminated
 *
 * 1: Wi-Fi connected and terminated
 * 2: 3G connected and terminated
 */
#define VCONFKEY_WIFI_QS_EXIT               "memory/wifi/wifi_qs_exit"
enum {
	VCONFKEY_WIFI_QS_CANCEL = 0x00,
	VCONFKEY_WIFI_QS_WIFI_CONNECTED,
	VCONFKEY_WIFI_QS_3G
};

/**
 * @brief Network notification state
 *
 * 0: disabled
 * 1: enabled
 */
#define VCONFKEY_WIFI_ENABLE_QS             "db/wifi/enable_quick_start"
enum {
	VCONFKEY_WIFI_QS_DISABLE = 0x00,
	VCONFKEY_WIFI_QS_ENABLE = 0x01
};

/**
 * @brief The name of Wi-Fi AP connected
 *
 */
#define VCONFKEY_WIFI_CONNECTED_AP_NAME     "memory/wifi/connected_ap_name"

/**
 * @brief Wi-Fi setting UG state
 *
 * 0: not running
 * 1: foreground
 * 2: background
 * 3: off
 */
#define VCONFKEY_WIFI_UG_RUN_STATE          "memory/wifi/ug_run_state"
enum {
	/** Not running */
	VCONFKEY_WIFI_UG_RUN_STATE_NULL = 0x00,
	/** Foreground */
	VCONFKEY_WIFI_UG_RUN_STATE_ON_FOREGROUND,
	/** Background */
	VCONFKEY_WIFI_UG_RUN_STATE_ON_BACKGROUND,
	/** Off */
	VCONFKEY_WIFI_UG_RUN_STATE_OFF,
	VCONFKEY_WIFI_UG_RUN_STATE_MAX
};

/** @brief Local Wi-Fi MAC address */
#define VCONFKEY_WIFI_BSSID_ADDRESS   "db/wifi/bssid_address"

/**
 * @}
 */


/* ========================== Wifi Direct Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_wifi_key
 * @{
 * @brief Wifi Direct Keys & Values\n
 *        Maintainer : dwmax.lee@samsung.com, dwmax.lee, taeksu.shin, sungsik.jang
 */

/**
 * @brief WIFI DIRECT DATA TRANSFER STATE VALUE FOR DISPLAYING INDICATOR ICON
 *
 * 0: File transfer is started
 * 1: File transfer is failed
 * 2: File transfer is finished
*/
#define VCONFKEY_WIFI_DIRECT_TRANSFER_STATE    "memory/wifi_direct/transfer_state"
enum {
 /** File transfer is started */
 VCONFKEY_WIFI_DIRECT_TRANSFER_START = 0,
 /** File transfer is failed */
 VCONFKEY_WIFI_DIRECT_TRANSFER_FAIL,
 /** File transfer is finished */
 VCONFKEY_WIFI_DIRECT_TRANSFER_FINISH
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_MOBEX_KEYS_H__ */

