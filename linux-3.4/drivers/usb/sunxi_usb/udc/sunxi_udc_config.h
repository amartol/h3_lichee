/*
 * drivers/usb/sunxi_usb/udc/sunxi_udc_config.h
 * (C) Copyright 2010-2015
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 * javen, 2010-3-3, create this file
 *
 * usb udc config.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 */

#ifndef  __SUNXI_UDC_CONFIG_H__
#define  __SUNXI_UDC_CONFIG_H__

#include <linux/slab.h>
#include <linux/list.h>
#include <linux/interrupt.h>
#include <linux/errno.h>
#include <linux/clk.h>
#include <linux/device.h>
#include <linux/usb/ch9.h>

#define  SW_UDC_DOUBLE_FIFO       /* double FIFO          */
#define  SW_UDC_DMA

/* only 1667 and later ic support inner dma,
 * former ic(eg. 1633,1650,1651 etc) use outer dma */
#ifdef SW_UDC_DMA
#if defined (CONFIG_ARCH_SUN8IW5) || defined (CONFIG_ARCH_SUN8IW6) || defined (CONFIG_ARCH_SUN8IW9) || defined (CONFIG_ARCH_SUN8IW8) || defined (CONFIG_ARCH_SUN8IW7)
#define  SW_UDC_DMA_INNER
#endif
#endif

#define  SW_UDC_HS_TO_FS          /* support HS to FS */
#define  SW_UDC_DEBUG

/* sw udc debug print */
#if	0
#define DMSG_DBG_UDC     			DMSG_INFO_UDC
#else
#define DMSG_DBG_UDC(...)
#endif

#include  "../include/sunxi_usb_config.h"

#endif   //__SUNXI_UDC_CONFIG_H__

