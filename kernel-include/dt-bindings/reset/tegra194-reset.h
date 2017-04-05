/*
 * Copyright (c) 2016-2017, NVIDIA CORPORATION. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifndef __ABI_MACH_T194_RESET_H
#define __ABI_MACH_T194_RESET_H

#define TEGRA194_RESET_ACTMON			1
#define TEGRA194_RESET_ADSP_ALL			2
#define TEGRA194_RESET_AFI			3
#define TEGRA194_RESET_CAN1			4
#define TEGRA194_RESET_CAN2			5
#define TEGRA194_RESET_DLA0			6
#define TEGRA194_RESET_DLA1			7
#define TEGRA194_RESET_DPAUX			8
#define TEGRA194_RESET_DPAUX1			9
#define TEGRA194_RESET_DPAUX2			10
#define TEGRA194_RESET_DPAUX3			11
#define TEGRA194_RESET_DSI			12
#define TEGRA194_RESET_DSIB			13
#define TEGRA194_RESET_DSIC			14
#define TEGRA194_RESET_DSID			15
#define TEGRA194_RESET_DSIPADCTL		16
#define TEGRA194_RESET_EQOS			17
#define TEGRA194_RESET_GPCDMA			18
#define TEGRA194_RESET_GPU			19
#define TEGRA194_RESET_HDA			20
#define TEGRA194_RESET_HDA2CODEC_2X		21
#define TEGRA194_RESET_HDA2HDMICODEC		22
#define TEGRA194_RESET_HOST1X			23
#define TEGRA194_RESET_I2C1			24
#define TEGRA194_RESET_I2C10			25
#define TEGRA194_RESET_I2C12			26
#define TEGRA194_RESET_I2C13			27
#define TEGRA194_RESET_I2C14			28
#define TEGRA194_RESET_I2C2			29
#define TEGRA194_RESET_I2C3			30
#define TEGRA194_RESET_I2C4			31
#define TEGRA194_RESET_I2C6			32
#define TEGRA194_RESET_I2C7			33
#define TEGRA194_RESET_I2C8			34
#define TEGRA194_RESET_I2C9			35
#define TEGRA194_RESET_ISP			36
#define TEGRA194_RESET_MIPI_CAL			37
#define TEGRA194_RESET_MPHY_CLK_CTL		38
#define TEGRA194_RESET_MPHY_L0_RX		39
#define TEGRA194_RESET_MPHY_L0_TX		40
#define TEGRA194_RESET_MPHY_L1_RX		41
#define TEGRA194_RESET_MPHY_L1_TX		42
#define TEGRA194_RESET_NVCSI			43
#define TEGRA194_RESET_NVDEC			44
#define TEGRA194_RESET_NVDISPLAY0_HEAD0		45
#define TEGRA194_RESET_NVDISPLAY0_HEAD1		46
#define TEGRA194_RESET_NVDISPLAY0_HEAD2		47
#define TEGRA194_RESET_NVDISPLAY0_HEAD3		48
#define TEGRA194_RESET_NVDISPLAY0_MISC		49
#define TEGRA194_RESET_NVDISPLAY0_WGRP0		50
#define TEGRA194_RESET_NVDISPLAY0_WGRP1		51
#define TEGRA194_RESET_NVDISPLAY0_WGRP2		52
#define TEGRA194_RESET_NVDISPLAY0_WGRP3		53
#define TEGRA194_RESET_NVDISPLAY0_WGRP4		54
#define TEGRA194_RESET_NVDISPLAY0_WGRP5		55
#define TEGRA194_RESET_RSVD_56			56
#define TEGRA194_RESET_RSVD_57			57
#define TEGRA194_RESET_RSVD_58			58
#define TEGRA194_RESET_NVENC			59
#define TEGRA194_RESET_NVENC1			60
#define TEGRA194_RESET_NVJPG			61
#define TEGRA194_RESET_PCIE			62
#define TEGRA194_RESET_PCIEXCLK			63
#define TEGRA194_RESET_PEX_USB_UPHY_PLL2	64
#define TEGRA194_RESET_PEX_USB_UPHY_PLL3	65
#define TEGRA194_RESET_PVA0_ALL			66
#define TEGRA194_RESET_PVA1_ALL			67
#define TEGRA194_RESET_PWM1			68
#define TEGRA194_RESET_PWM2			69
#define TEGRA194_RESET_PWM3			70
#define TEGRA194_RESET_PWM4			71
#define TEGRA194_RESET_PWM5			72
#define TEGRA194_RESET_PWM6			73
#define TEGRA194_RESET_PWM7			74
#define TEGRA194_RESET_PWM8			75
#define TEGRA194_RESET_QSPI0			76
#define TEGRA194_RESET_QSPI1			77
#define TEGRA194_RESET_SATA			78
#define TEGRA194_RESET_SATACOLD			79
#define TEGRA194_RESET_SCE_GROUP0		80
#define TEGRA194_RESET_SCE_GROUP1		81
#define TEGRA194_RESET_SDMMC1			82
#define TEGRA194_RESET_SDMMC2			83
#define TEGRA194_RESET_SDMMC3			84
#define TEGRA194_RESET_SDMMC4			85
#define TEGRA194_RESET_SE			86
#define TEGRA194_RESET_SOR0			87
#define TEGRA194_RESET_SOR1			88
#define TEGRA194_RESET_SOR2			89
#define TEGRA194_RESET_SOR3			90
#define TEGRA194_RESET_SPI1			91
#define TEGRA194_RESET_SPI2			92
#define TEGRA194_RESET_SPI3			93
#define TEGRA194_RESET_SPI4			94
#define TEGRA194_RESET_TACH			95
#define TEGRA194_RESET_TSCTNSCE			96
#define TEGRA194_RESET_TSCTNVI			97
#define TEGRA194_RESET_TSEC			98
#define TEGRA194_RESET_TSECB			99
#define TEGRA194_RESET_UARTA			100
#define TEGRA194_RESET_UARTB			101
#define TEGRA194_RESET_UARTC			102
#define TEGRA194_RESET_UARTD			103
#define TEGRA194_RESET_UARTE			104
#define TEGRA194_RESET_UARTF			105
#define TEGRA194_RESET_UARTG			106
#define TEGRA194_RESET_UARTH			107
#define TEGRA194_RESET_UFSHC			108
#define TEGRA194_RESET_UFSHC_AXI_M		109
#define TEGRA194_RESET_UFSHC_LP_SEQ		110
#define TEGRA194_RESET_UPHY			111
#define TEGRA194_RESET_VI			112
#define TEGRA194_RESET_VIC			113
#define TEGRA194_RESET_XUSB_PADCTL		114

#endif
