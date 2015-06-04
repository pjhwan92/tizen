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

#ifndef __VCONF_INTERNAL_TESTMODE_KEYS_H__
#define __VCONF_INTERNAL_TESTMODE_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-testmode-keys.h
 * @defgroup    vconf_internal_testmode_key Definitions of internal shared Keys for Testmode
 * @ingroup     vconf_internal_key
 * @author      Inho Oh <inho48.oh@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Testmode \n
 */

/* ========================== Testmode Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_testmode_key
 * @{
 * @brief Testmode Keys & Values\n
 *        Maintainer : Inho Oh <inho48.oh@samsung.com>
 */

#define VCONFKEY_TESTMODE_PREFIX                    "db/testmode"

/**
 * @brief Auto answer flag
 *
 * 0: Auto answer Off \n
 * 1: Auto answer On \n
 */
#define VCONFKEY_TESTMODE_AUTO_ANSWER               VCONFKEY_TESTMODE_PREFIX"/auto_answer"
enum {
	VCONFKEY_TESTMODE_OFF = 0,
	VCONFKEY_TESTMODE_ON
};

/**
 * @brief Video call Camera Setting
 *
 * VCONFKEY_TESTMODE_CAM_FRONT: Front camera \n
 * VCONFKEY_TESTMODE_CAM_EXTERNAL: External camera \n
 */
#define VCONFKEY_TESTMODE_VT_CAM_SETTING            VCONFKEY_TESTMODE_PREFIX"/vt_cam_setting"
enum {
	VCONFKEY_TESTMODE_CAM_FRONT = 0,
	VCONFKEY_TESTMODE_CAM_EXTERNAL,
	VCONFKEY_TESTMODE_CAM_MAX
};

/**
 * @brief Power off popup Setting
 *
 * type : bool
 * VCONFKEY_TESTMODE_POWER_OFF_POPUP_ENABLE: Enable to shutdown with popup
 * VCONFKEY_TESTMODE_POWER_OFF_POPUP_DISABLE: Enable to shutdown without popup
 */
#define VCONFKEY_TESTMODE_POWER_OFF_POPUP            VCONFKEY_TESTMODE_PREFIX"/pwr_off_popup"
enum {
	VCONFKEY_TESTMODE_POWER_OFF_POPUP_ENABLE = 0,
	VCONFKEY_TESTMODE_POWER_OFF_POPUP_DISABLE
};

/**
 * @brief Low battery popup Setting
 *
 * type : bool
 * VCONFKEY_TESTMODE_LOW_BATT_POPUP_ENABLE: Enable to low battery popup
 * VCONFKEY_TESTMODE_LOW_BATT_POPUP_DISABLE: Disable to low battery popup
 */
#define VCONFKEY_TESTMODE_LOW_BATT_POPUP            VCONFKEY_TESTMODE_PREFIX"/low_batt_popup"
enum {
	VCONFKEY_TESTMODE_LOW_BATT_POPUP_ENABLE = 0,
	VCONFKEY_TESTMODE_LOW_BATT_POPUP_DISABLE
};


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_TESTMODE_KEYS_H__ */

