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

#ifndef __VCONF_INTERNAL_CSC_KEYS_H__
#define __VCONF_INTERNAL_CSC_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-csc-keys.h
 * @defgroup    vconf_internal_csc_key Definitions of internal shared Keys for csc
 * @ingroup     vconf_internal_key
 * @author      jy910.yun@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for csc \n
 */

/* ============================ CSC Keys & Values ============================*/
/**
 * @addtogroup vconf_internal_csc_key
 * @{
 * @brief CSC Keys & Values \n
 *        Maintainer : jy910.yun@samsung.com
 */
#define VCONFKEY_CSC_PREFIX							"db/csc"

/**
 * @brief Defined value to apply the various configurations in each customer
 *
 * value : the name of customer \n
 */
#define VCONFKEY_CSC_SALESCODE              		VCONFKEY_CSC_PREFIX"/salescode"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_CSC_KEYS_H__ */
