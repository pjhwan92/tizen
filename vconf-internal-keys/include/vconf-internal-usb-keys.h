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

#ifndef __VCONF_INTERNAL_USB_KEYS_H__
#define __VCONF_INTERNAL_USB_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-usb-keys.h
 * @defgroup    vconf_internal_usb_key Definitions of internal shared Keys for USB
 * @ingroup     vconf_internal_key
 * @author      ty317.kim
 * @version     0.1
 * @brief       This file has the definitions of shared keys for USB \n
 */

/* ========================== USB Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_usb_key
 * @{
 * @brief USB Keys & Values\n
 *        Maintainer : ty317.kim
 */

/**
 * @brief status of mmc in mass storage mode
 *
 * 0 : no mass storage mode \n
 * 1 : only support UMS \n
 * 2 : support UMS and MMC all \n
 */
#define VCONFKEY_USB_STORAGE_STATUS "memory/usb/mass_storage_status"
enum {
	/** no mass storage mode */
	VCONFKEY_USB_STORAGE_STATUS_OFF = 0x00,
	/** only support UMS */
	VCONFKEY_USB_STORAGE_STATUS_UMS_ON,
	/** support UMS and MMC all */
	VCONFKEY_USB_STORAGE_STATUS_UMS_MMC_ON
};

/**
 * @brief status of setting USB debug mode for developers
 *
 * 0 : unset keeping USB debug mode when reconnecting USB cable \n
 * 1 : set keeping USB debug mode when reconnecting USB cable \n
 */
#define VCONFKEY_USB_KEEP_DEBUG "db/usb/keep_debug"
enum {
	/** unset keeping USB debug mode when reconnecting USB cable */
	VCONFKEY_USB_KEEP_DEBUG_UNSET = 0x00,
	/** set keeping USB debug mode when reconnecting USB cable */
	VCONFKEY_USB_KEEP_DEBUG_SET
};

/**
 * @brief status of USB accessory
 *
 * 0 : usb accessory is disconnected \n
 * 1 : usb accessory is connected \n
 */
#define VCONFKEY_USB_ACCESSORY_STATUS "memory/usb/accessory_status"
enum {
	/** usb accessory is disconnected */
	VCONFKEY_USB_ACCESSORY_STATUS_DISCONNECTED = 0x00,
	/** usb accessory is connected */
	VCONFKEY_USB_ACCESSORY_STATUS_CONNECTED
};



/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_USB_KEYS_H__ */

