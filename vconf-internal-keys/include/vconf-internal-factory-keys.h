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

#ifndef __VCONF_INTERNAL_FACTORY_KEYS_H__
#define __VCONF_INTERNAL_FACTORY_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-factory-keys.h
 * @defgroup    vconf_internal_factory_key Definitions of internal shared Keys for FACTORY
 * @ingroup     vconf_internal_key
 * @author      Jisung Ahn <jcastle.ahn@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for FACTORY \n
 */

/* ========================== FACTORY Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_factory_key
 * @{
 * @brief FACTORY Keys & Values\n
 *        Maintainer : Jisung Ahn <jcastle.ahn@samsung.com>
 */

#define VCONFKEY_FACTORY_PREFIX "memory/factory"

/**
 * @brief call connected at 15 test (write:call read:fta)
 *
 * 0 : Disconnected \n
 * 1 : Connected \n
 */
#define VCONFKEY_FACTORY_CALL_CONNECT_STATE VCONFKEY_FACTORY_PREFIX"/call_connected"
enum
{
 VCONFKEY_FACTORY_CALL_DISCONNECTED = 0x00,
 VCONFKEY_FACTORY_CALL_CONNECTED
};


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_FACTORY_KEYS_H__ */

