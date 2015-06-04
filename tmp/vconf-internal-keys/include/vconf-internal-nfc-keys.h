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

#ifndef __VCONF_INTERNAL_NFC_KEYS_H__
#define __VCONF_INTERNAL_NFC_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-nfc-keys.h
 * @defgroup    vconf_internal_nfc_key Definitions of internal shared Keys for NFC
 * @ingroup     vconf_internal_key
 * @author      wonkyu.kwon@samsung.com, sc.sohn@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for NFC \n
 */

/* ========================== NFC Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_nfc_key
 * @{
 * @brief NFC Keys & Values\n
 *        Maintainer : wonkyu.kwon@samsung.com, sc.sohn@samsung.com
 */

/**
 * @brief Indicates whether NFC is supported used by setting & app using share via
 *
 * 0 : Not Supported \n
 * 1 : Supported  \n
 */
#define  VCONFKEY_NFC_FEATURE "db/nfc/feature"
enum
{
 /** Not Supported */
 VCONFKEY_NFC_FEATURE_OFF = 0x00,
 /** Supported */
 VCONFKEY_NFC_FEATURE_ON,
 VCONFKEY_NFC_FEATURE_MAX
};


/**
 * @brief NFC Activation state
 *
 * 0 : OFF \n
 * 1 : ON \n
 */
#define  VCONFKEY_NFC_STATE                         "db/nfc/enable"
enum
{
    VCONFKEY_NFC_STATE_OFF = 0x00,
    VCONFKEY_NFC_STATE_ON,
    VCONFKEY_NFC_STATE_MAX
};



/**
 * @brief NFC S-BEAM state. When this feature is turned on, you can beam files to other NFC and WLAN Direct devices by holding the devices close together.
 *
 * 0 : OFF \n
 * 1 : ON \n
 */

#define  VCONFKEY_NFC_SBEAM                         "db/nfc/sbeam"
enum
{
    VCONFKEY_NFC_SBEAM_OFF = 0x00,
    VCONFKEY_NFC_SBEAM_ON,
    VCONFKEY_NFC_SBEAM_MAX
};

/**
 * @}
 */



#endif	/* __VCONF_INTERNAL_NFC_KEYS_H__ */

