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

#ifndef __VCONF_INTERNAL_SYSMAN_KEYS_H__
#define __VCONF_INTERNAL_SYSMAN_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-sysman-keys.h
 * @defgroup    vconf_internal_sysman_key Definitions of internal shared Keys for system manager
 * @ingroup     vconf_internal_key
 * @author      jinkun.jang@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for system manager \n
 */

/* ========================== Sysman Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_sysman_key
 * @{
 * @brief System manager Keys & Values\n
 *        Maintainer : jinkun.jang@samsung.com
 */

/**
 * @brief USB-host USB Storage Mount devname (added)
 *
 */
#define VCONFKEY_SYSMAN_ADDED_USB_STORAGE       "memory/sysman/added_usb_storage"

/**
 * @brief USB-host USB Storage Mount devname (removed)
 *
 */
#define VCONFKEY_SYSMAN_REMOVED_USB_STORAGE     "memory/sysman/removed_usb_storage"

/**
 * @brief charger connection status
 *
 * 0 : Disconnected \n
 * 1 : Connected \n
 */
#define VCONFKEY_SYSMAN_CHARGER_STATUS                  "memory/sysman/charger_status"
enum {
	VCONFKEY_SYSMAN_CHARGER_DISCONNECTED = 0,
	VCONFKEY_SYSMAN_CHARGER_CONNECTED
};

/**
 * @brief charge status
 *
 * 0 : Not charging \n
 * 1 : Charging \n
 */
#define VCONFKEY_SYSMAN_BATTERY_CHARGE_NOW          "memory/sysman/charge_now"

/**
 * @brief current battery status
 *
 * 1 : 1% and under \n
 * 2 : 5% and under \n
 * 3 : 15% and under \n
 * 4 : over 15% \n
 * 5 : full \n
 */
#define VCONFKEY_SYSMAN_BATTERY_STATUS_LOW          "memory/sysman/battery_status_low"
enum {
	/** 1% and under */
	VCONFKEY_SYSMAN_BAT_POWER_OFF = 1,
	/** 5% and under */
	VCONFKEY_SYSMAN_BAT_CRITICAL_LOW,
	/** 15% and under */
	VCONFKEY_SYSMAN_BAT_WARNING_LOW,
	/** over 15% */
	VCONFKEY_SYSMAN_BAT_NORMAL,
	/** full */
	VCONFKEY_SYSMAN_BAT_FULL
};

/**
 * @brief battery capacity
 *
 * 0-100 : battery capacity \n
 */
#define VCONFKEY_SYSMAN_BATTERY_CAPACITY            "memory/sysman/battery_capacity"

/**
 * @brief USB connection status
 *
 * 0 : Disconnected \n
 * 1 : Connected \n
 * 2 : Available \n
 */
#define VCONFKEY_SYSMAN_USB_STATUS                  "memory/sysman/usb_status"
enum {
	VCONFKEY_SYSMAN_USB_DISCONNECTED = 0,
	VCONFKEY_SYSMAN_USB_CONNECTED,
	VCONFKEY_SYSMAN_USB_AVAILABLE
};

/**
 * @brief Earjack connection status & type
 *
 */
#define VCONFKEY_SYSMAN_EARJACK                     "memory/sysman/earjack"
enum {
	VCONFKEY_SYSMAN_EARJACK_REMOVED = 0,
	VCONFKEY_SYSMAN_EARJACK_3WIRE = 0x1,
	VCONFKEY_SYSMAN_EARJACK_4WIRE = 0x3,
	VCONFKEY_SYSMAN_EARJACK_TVOUT = 0x10
};

/**
 * @brief low-memory status
 *
 * 0 : normal \n
 * 1 : 60M and under \n
 * 2 : 40M and under \n
 */
#define VCONFKEY_SYSMAN_LOW_MEMORY                  "memory/sysman/low_memory"
enum {
	/** Normal */
	VCONFKEY_SYSMAN_LOW_MEMORY_NORMAL = 0x01,
	/** 60M and under */
	VCONFKEY_SYSMAN_LOW_MEMORY_SOFT_WARNING = 0x02,
	/** 40M and under */
	VCONFKEY_SYSMAN_LOW_MEMORY_HARD_WARNING = 0x04
};

#define VCONFKEY_SYSMAN_SLIDING_KEYBOARD            "memory/sysman/sliding_keyboard"
enum {
	/** not support */
	VCONFKEY_SYSMAN_SLIDING_KEYBOARD_NOT_SUPPORTED = -1,
	/** sliding keyboard close */
	VCONFKEY_SYSMAN_SLIDING_KEYBOARD_NOT_AVAILABE = 0,
	/** sliding keyboaed open */
	VCONFKEY_SYSMAN_SLIDING_KEYBOAED_AVAILABLE
};

/**
 * @brief mmc mount status
 *
 * 0 : mount completed \n
 * 1 : already mounted \n
 * 2 : mount failed \n
 */
#define VCONFKEY_SYSMAN_MMC_MOUNT					"memory/sysman/mmc_mount"
enum {
	VCONFKEY_SYSMAN_MMC_MOUNT_COMPLETED = 0,
	VCONFKEY_SYSMAN_MMC_MOUNT_ALREADY,
	VCONFKEY_SYSMAN_MMC_MOUNT_FAILED
};

/**
 * @brief mmc umount status
 *
 * 0 : umount completed \n
 * 1 : umount failed \n
 */
#define VCONFKEY_SYSMAN_MMC_UNMOUNT					"memory/sysman/mmc_unmount"
enum {
	VCONFKEY_SYSMAN_MMC_UNMOUNT_COMPLETED = 0,
	VCONFKEY_SYSMAN_MMC_UNMOUNT_FAILED
};

/**
 * @brief mmc format status
 *
 * 0 : mmc format completed \n
 * 1 : mmc format failed \n
 */
#define VCONFKEY_SYSMAN_MMC_FORMAT					"memory/sysman/mmc_format"
enum {
	VCONFKEY_SYSMAN_MMC_FORMAT_COMPLETED = 0,
	VCONFKEY_SYSMAN_MMC_FORMAT_FAILED
};



/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_SYSMAN_KEYS_H__ */

