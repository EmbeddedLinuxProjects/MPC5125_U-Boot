/*
 * Copyright (C) 2012 Freescale Semiconductor, Inc.
 *
 * Configuration settings for the Freescale i.MX6Q SabreAuto board.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#ifndef __MX6QSABREAUTO_CONFIG_H
#define __MX6QSABREAUTO_CONFIG_H

#define CONFIG_MACH_TYPE	3529
#define CONFIG_MXC_UART_BASE	UART4_BASE
#define CONFIG_CONSOLE_DEV		"ttymxc3"
#if defined CONFIG_MX6Q
#define CONFIG_DEFAULT_FDT_FILE	"imx6q-sabreauto.dtb"
#elif defined CONFIG_MX6DL
#define CONFIG_DEFAULT_FDT_FILE	"imx6dl-sabreauto.dtb"
#endif
#define CONFIG_MMCROOT			"/dev/mmcblk0p2"
#define PHYS_SDRAM_SIZE		(2u * 1024 * 1024 * 1024)

/* USB Configs */
#define CONFIG_CMD_USB
#define CONFIG_USB_EHCI
#define CONFIG_USB_EHCI_MX6
#define CONFIG_USB_STORAGE
#define CONFIG_USB_HOST_ETHER
#define CONFIG_USB_ETHER_ASIX
#define CONFIG_USB_MAX_CONTROLLER_COUNT 2
#define CONFIG_EHCI_HCD_INIT_AFTER_RESET	/* For OTG port */
#define CONFIG_MXC_USB_PORTSC	(PORT_PTS_UTMI | PORT_PTS_PTW)
#define CONFIG_MXC_USB_FLAGS	0

#define CONFIG_PCA953X
#define CONFIG_SYS_I2C_PCA953X_WIDTH	{ {0x30, 8}, {0x32, 8}, {0x34, 8} }

#include "mx6sabre_common.h"

#define CONFIG_SYS_FSL_USDHC_NUM	2
#if defined(CONFIG_ENV_IS_IN_MMC)
#define CONFIG_SYS_MMC_ENV_DEV		0
#endif

/* I2C Configs */
#define CONFIG_CMD_I2C
#define CONFIG_SYS_I2C
#define CONFIG_SYS_I2C_MXC
#define CONFIG_SYS_I2C_SPEED		100000

/* NAND flash command */
#define CONFIG_CMD_NAND
#define CONFIG_CMD_NAND_TRIMFFS

/* NAND stuff */
#define CONFIG_NAND_MXS
#define CONFIG_SYS_MAX_NAND_DEVICE     1
#define CONFIG_SYS_NAND_BASE           0x40000000
#define CONFIG_SYS_NAND_5_ADDR_CYCLE
#define CONFIG_SYS_NAND_ONFI_DETECTION

/* DMA stuff, needed for GPMI/MXS NAND support */
#define CONFIG_APBH_DMA
#define CONFIG_APBH_DMA_BURST
#define CONFIG_APBH_DMA_BURST8

#endif                         /* __MX6QSABREAUTO_CONFIG_H */
