/*
	TDA18272 Silicon tuner driver
	Copyright (C) Manu Abraham <abraham.manu@gmail.com>

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef __TDA18272_REG_H
#define __TDA18272_REG_H

#define TDA18272_ID_BYTE_1					0x00
#define TDA18272_OFFST_ID_BYTE_1_MASTER_SLAVE			7
#define TDA18272_WIDTH_ID_BYTE_1_MASTER_SLAVE			1
#define TDA18272_OFFST_ID_BYTE_1_IDENT				0
#define TDA18272_WIDTH_ID_BYTE_1_IDENT				7

#define TDA18272_ID_BYTE_2					0x01
#define TDA18272_OFFST_ID_BYTE_2_IDENT				0
#define TDA18272_WIDTH_ID_BYTE_2_IDENT				8

#define TDA18272_ID_BYTE_3					0x02
#define TDA18272_OFFST_ID_BYTE_3_MAJOR_REV			4
#define TDA18272_WIDTH_ID_BYTE_3_MAJOR_REV			4
#define TDA18272_OFFST_ID_BYTE_3_MINOR_REV			0
#define TDA18272_WIDTH_ID_BYTE_3_MINOR_REV			4

#define TDA18272_THERMO_BYTE_1					0x03
#define TDA18272_OFFST_THERMO_BYTE_1_TM_D			0
#define TDA18272_WIDTH_THERMO_BYTE_1_TM_D			7

#define TDA18272_THERMO_BYTE_2					0x04
#define TDA18272_OFFST_THERMO_BYTE_2_TM_ON			O
#define TDA18272_WIDTH_THERMO_BYTE_2_TM_ON			1

#define TDA18272_POWERSTATE_BYTE_1				0x05
#define TDA18272_OFFST_POWERSTATE_BYTE_1_POR			1
#define TDA18272_WIDTH_POWERSTATE_BYTE_1_POR			1
#define TDA18272_OFFST_POWERSTATE_BYTE_1_LO_LOCK		0
#define TDA18272_WIDTH_POWERSTATE_BYTE_1_LO_LOCK		1

#define TDA18272_POWERSTATE_BYTE_2				0x06
#define TDA18272_OFFST_POWERSTATE_BYTE_2_SM_LNA			1
#define TDA18272_WIDTH_POWERSTATE_BYTE_2_SM_LNA			1
#define TDA18272_OFFST_POWERSTATE_BYTE_2_SM_PLL			2
#define TDA18272_WIDTH_POWERSTATE_BYTE_2_SM_PLL			1
#define TDA18272_OFFST_POWERSTATE_BYTE_2_SM			3
#define TDA18272_WIDTH_POWERSTATE_BYTE_2_SM			1

#define TDA18272_INPUT_POWERLEVEL				0x07
#define TDA18272_OFFST_INPUT_POWERLEVEL_POWER_LEVEL		0
#define TDA18272_WIDTH_INPUT_POWERLEVEL_POWER_LEVEL		7

#define TDA18272_IRQ_STATUS					0x08
#define TDA18272_OFFST_IRQ_STATUS_IRQ_STATUS			7
#define TDA18272_WIDTH_IRQ_STATUS_IRQ_STATUS			1
#define TDA18272_OFFST_IRQ_STATUS_XTALCAL_STATUS		5
#define TDA18272_WIDTH_IRQ_STATUS_XTALCAL_STATUS		1
#define TDA18272_OFFST_IRQ_STATUS_MSM_RSSI_STATUS		4
#define TDA18272_WIDTH_IRQ_STATUS_MSM_RSSI_STATUS		1
#define TDA18272_OFFST_IRQ_STATUS_MSM_LOCALC_STATUS		3
#define TDA18272_WIDTH_IRQ_STATUS_MSM_LOCALC_STATUS		1
#define TDA18272_OFFST_IRQ_STATUS_MSM_RFCAL_STATUS		2
#define TDA18272_WIDTH_IRQ_STATUS_MSM_RFCAL_STATUS		1
#define TDA18272_OFFST_IRQ_STATUS_MSM_IRCAL_STATUS		1
#define TDA18272_WIDTH_IRQ_STATUS_MSM_IRCAL_STATUS		1
#define TDA18272_OFFST_IRQ_STATUS_MSM_RCCAL_STATUS		0
#define TDA18272_WIDTH_IRQ_STATUS_MSM_RCCAL_STATUS		1

#define TDA18272_IRQ_ENABLE					0x09
#define TDA18272_OFFST_IRQ_ENABLE_IRQ_ENABLE			7
#define TDA18272_WIDTH_IRQ_ENABLE_IRQ_ENABLE			1
#define TDA18272_OFFST_IRQ_ENABLE_UNUSED_I0_D0			6
#define TDA18272_WIDTH_IRQ_ENABLE_UNUSED_I0_D0			1
#define TDA18272_OFFST_IRQ_ENABLE_XTALCAL_ENABLE		5
#define TDA18272_WIDTH_IRQ_ENABLE_XTALCAL_ENABLE		1
#define TDA18272_OFFST_IRQ_ENABLE_MSM_RSSI_ENABLE		4
#define TDA18272_WIDTH_IRQ_ENABLE_MSM_RSSI_ENABLE		1
#define TDA18272_OFFST_IRQ_ENABLE_MSM_LOCALC_ENABLE		3
#define TDA18272_WIDTH_IRQ_ENABLE_MSM_LOCALC_ENABLE		1
#define TDA18272_OFFST_IRQ_ENABLE_MSM_RFCAL_ENABLE		2
#define TDA18272_WIDTH_IRQ_ENABLE_MSM_RFCAL_ENABLE		1
#define TDA18272_OFFST_IRQ_ENABLE_MSM_IRCAL_ENABLE		1
#define TDA18272_WIDTH_IRQ_ENABLE_MSM_IRCAL_ENABLE		1
#define TDA18272_OFFST_IRQ_ENABLE_MSM_RCCAL_ENABLE		0
#define TDA18272_WIDTH_IRQ_ENABLE_MSM_RCCAL_ENABLE		1

#define TDA18272_IRQ_CLEAR					0x0a
#define TDA18272_OFFST_IRQ_CLEAR_IRQ_CLEAR			7
#define TDA18272_WIDTH_IRQ_CLEAR_IRQ_CLEAR			1

#define TDA18272_IRQ_SET					0x0b
#define TDA18272_OFFST_IRQ_SET_IRQ_SET				7
#define TDA18272_WIDTH_IRQ_SET_IRQ_SET				1
#define TDA18272_OFFST_IRQ_SET_UNUSED_I0_D0			6
#define TDA18272_WIDTH_IRQ_SET_UNUSED_I0_D0			1
#define TDA18272_OFFST_IRQ_SET_XTALCAL_SET			5
#define TDA18272_WIDTH_IRQ_SET_XTALCAL_SET			1
#define TDA18272_OFFST_IRQ_SET_MSM_RSSI_SET			4
#define TDA18272_WIDTH_IRQ_SET_MSM_RSSI_SET			1
#define TDA18272_OFFST_IRQ_SET_MSM_LOCALC_SET			3
#define TDA18272_WIDTH_IRQ_SET_MSM_LOCALC_SET			1
#define TDA18272_OFFST_IRQ_SET_MSM_RFCAL_SET			2
#define TDA18272_WIDTH_IRQ_SET_MSM_RFCAL_SET			1
#define TDA18272_OFFST_IRQ_SET_MSM_IRCAL_SET			1
#define TDA18272_WIDTH_IRQ_SET_MSM_IRCAL_SET			1
#define TDA18272_OFFST_IRQ_SET_MSM_RCCAL_SET			0
#define TDA18272_WIDTH_IRQ_SET_MSM_RCCAL_SET			1

#define TDA18272_AGC1_BYTE_1					0x0c
#define TDA18272_OFFST_AGC1_BYTE_1_LT_ENABLE			7
#define TDA18272_WIDTH_AGC1_BYTE_1_LT_ENABLE			1
#define TDA18272_OFFST_AGC1_BYTE_1_AGC1_6_15DB			6
#define TDA18272_WIDTH_AGC1_BYTE_1_AGC1_6_15DB			1
#define TDA18272_OFFST_AGC1_BYTE_1_AGC1_TOP			0
#define TDA18272_WIDTH_AGC1_BYTE_1_AGC1_TOP			4

#define TDA18272_AGC2_BYTE_1					0x0d
#define TDA18272_OFFST_AGC2_BYTE_1_UNUSED_I0_D0			5
#define TDA18272_WIDTH_AGC2_BYTE_1_UNUSED_I0_D0			3
#define TDA18272_OFFST_AGC2_BYTE_1_AGC2_TOP			0
#define TDA18272_WIDTH_AGC2_BYTE_1_AGC2_TOP			5

#define TDA18272_AGCK_BYTE_1					0x0e
#define TDA18272_OFFST_AGCK_BYTE_1_AGCs_UP_STEP_ASYM		6
#define TDA18272_WIDTH_AGCK_BYTE_1_AGCs_UP_STEP_ASYM		2
#define TDA18272_OFFST_AGCK_BYTE_1_AGCs_UP_STEP			5
#define TDA18272_WIDTH_AGCK_BYTE_1_AGCs_UP_STEP			1
#define TDA18272_OFFST_AGCK_BYTE_1_PULSE_SHAPER_DISABLE		4
#define TDA18272_WIDTH_AGCK_BYTE_1_PULSE_SHAPER_DISABLE		1
#define TDA18272_OFFST_AGCK_BYTE_1_AGCK_STEP			2
#define TDA18272_WIDTH_AGCK_BYTE_1_AGCK_STEP			2
#define TDA18272_OFFST_AGCK_BYTE_1_AGCK_MODE			0
#define TDA18272_WIDTH_AGCK_BYTE_1_AGCK_MODE			2

#define TDA18272_RFAGC_BYTE_1					0x0f
#define TDA18272_OFFST_RFAGC_BYTE_1_PD_RFAGC_ADAPT		7
#define TDA18272_WIDTH_RFAGC_BYTE_1_PD_RFAGC_ADAPT		1
#define TDA18272_OFFST_RFAGC_BYTE_1_RFAGC_ADAPT_TOP		5
#define TDA18272_WIDTH_RFAGC_BYTE_1_RFAGC_ADAPT_TOP		2
#define TDA18272_OFFST_RFAGC_BYTE_1_RF_ATTEN_3DB		3
#define TDA18272_WIDTH_RFAGC_BYTE_1_RF_ATTEN_3DB		1
#define TDA18272_OFFST_RFAGC_BYTE_1_AGC3_TOP			0
#define TDA18272_WIDTH_RFAGC_BYTE_1_AGC3_TOP			3

#define TDA18272_IRMIXER_BYTE_1					0x10
#define TDA18272_OFFST_IRMIXER_BYTE_1_AGC4_TOP			0
#define TDA18272_WIDTH_IRMIXER_BYTE_1_AGC4_TOP			4

#define TDA18272_AGC5_BYTE_1					0x11
#define TDA18272_OFFST_AGC5_BYTE_1_AGC5_TOP			0
#define TDA18272_WIDTH_AGC5_BYTE_1_AGC5_TOP			4
#define TDA18272_OFFST_AGC5_BYTE_1_AGC5_HPF			4
#define TDA18272_WIDTH_AGC5_BYTE_1_AGC5_HPF			1
#define TDA18272_OFFST_AGC5_BYTE_1_AGCs_DO_STEP_ASYM		5
#define TDA18272_WIDTH_AGC5_BYTE_1_AGCs_DO_STEP_ASYM		2


#define TDA18272_IFAGC						0x12
#define TDA18272_OFFST_IFAGC_IF_LEVEL				0
#define TDA18272_WIDTH_IFAGC_IF_LEVEL				3

#define TDA18272_IF_BYTE_1					0x13
#define TDA18272_OFFST_IF_BYTE_1_IF_HP_FC			6
#define TDA18272_WIDTH_IF_BYTE_1_IF_HP_FC			2
#define TDA18272_OFFST_IF_BYTE_1_IF_NOTCH			5
#define TDA18272_WIDTH_IF_BYTE_1_IF_NOTCH			1
#define TDA18272_OFFST_IF_BYTE_1_LP_FC_OFFSET			3
#define TDA18272_WIDTH_IF_BYTE_1_LP_FC_OFFSET			2
#define TDA18272_OFFST_IF_BYTE_1_LP_FC				0
#define TDA18272_WIDTH_IF_BYTE_1_LP_FC				3

#define TDA18272_REFERENCE					0x14
#define TDA18272_OFFST_REFERENCE_XTOUT				0
#define TDA18272_WIDTH_REFERENCE_XTOUT				2
#define TDA18272_OFFST_REFERENCE_DIGITAL_CLOCK			6
#define TDA18272_WIDTH_REFERENCE_DIGITAL_CLOCK			1

#define TDA18272_IF_FREQUENCY					0x15
#define TDA18272_OFFST_IF_FREQUENCY_IF_FREQ			0
#define TDA18272_WIDTH_IF_FREQUENCY_IF_FREQ			8

#define TDA18272_RF_FREQUENCY_BYTE_1				0x16
#define TDA18272_OFFST_RF_FREQUENCY_BYTE_1_RF_FREQ		0
#define TDA18272_WIDTH_RF_FREQUENCY_BYTE_1_RF_FREQ		4

#define TDA18272_RF_FREQUENCY_BYTE_2				0x17
#define TDA18272_OFFST_RF_FREQUENCY_BYTE_2_RF_FREQ		0
#define TDA18272_WIDTH_RF_FREQUENCY_BYTE_2_RF_FREQ		8

#define TDA18272_RF_FREQUENCY_BYTE_3				0x18
#define TDA18272_OFFST_RF_FREQUENCY_BYTE_3_RF_FREQ		0
#define TDA18272_WIDTH_RF_FREQUENCY_BYTE_3_RF_FREQ		8

#define TDA18272_MSM_BYTE_1					0x19
#define TDA18272_OFFST_MSM_BYTE_1_POWER_MEAS			7
#define TDA18272_WIDTH_MSM_BYTE_1_POWER_MEAS			1
#define TDA18272_OFFST_MSM_BYTE_1_RF_CAL_AV			6
#define TDA18272_WIDTH_MSM_BYTE_1_RF_CAL_AV			1
#define TDA18272_OFFST_MSM_BYTE_1_RF_CAL			5
#define TDA18272_WIDTH_MSM_BYTE_1_RF_CAL			1
#define TDA18272_OFFST_MSM_BYTE_1_IR_CAL			3
#define TDA18272_WIDTH_MSM_BYTE_1_IR_CAL			2
#define TDA18272_OFFST_MSM_BYTE_1_RC_CAL			1
#define TDA18272_WIDTH_MSM_BYTE_1_RC_CAL			1
#define TDA18272_OFFST_MSM_BYTE_1_CALC_PLL			0
#define TDA18272_WIDTH_MSM_BYTE_1_CALC_PLL			1

#define TDA18272_MSM_BYTE_2					0x1a
#define TDA18272_OFFST_MSM_BYTE_2_MSM_LAUNCH			0
#define TDA18272_WIDTH_MSM_BYTE_2_MSM_LAUNCH			1

#define TDA18272_PSM_BYTE_1					0x1b
#define TDA18272_OFFST_PSM_BYTE_1_PSM_AGC1			6
#define TDA18272_WIDTH_PSM_BYTE_1_PSM_AGC1			2
#define TDA18272_OFFST_PSM_BYTE_1_PSM_STOB			5
#define TDA18272_WIDTH_PSM_BYTE_1_PSM_STOB			1
#define TDA18272_OFFST_PSM_BYTE_1_PSMRFPOLY			4
#define TDA18272_WIDTH_PSM_BYTE_1_PSMRFPOLY			1
#define TDA18272_OFFST_PSM_BYTE_1_PSM_MIXER			3
#define TDA18272_WIDTH_PSM_BYTE_1_PSM_MIXER			1
#define TDA18272_OFFST_PSM_BYTE_1_PSM_IFPOLY			2
#define TDA18272_WIDTH_PSM_BYTE_1_PSM_IFPOLY			1
#define TDA18272_OFFST_PSM_BYTE_1_PSM_LODRIVER			0
#define TDA18272_WIDTH_PSM_BYTE_1_PSM_LODRIVER			2

#define TDA18272_DCC_BYTE_1					0x1c
#define TDA18272_OFFST_DCC_BYTE_1_DCC_BYPASS			7
#define TDA18272_WIDTH_DCC_BYTE_1_DCC_BYPASS			1
#define TDA18272_OFFST_DCC_BYTE_1_DCC_SLOW			6
#define TDA18272_WIDTH_DCC_BYTE_1_DCC_SLOW			1
#define TDA18272_OFFST_DCC_BYTE_1_DCC_PSM			5
#define TDA18272_WIDTH_DCC_BYTE_1_DCC_PSM			1
#define TDA18272_OFFST_DCC_BYTE_1_UNUSED_I0_D0			0
#define TDA18272_WIDTH_DCC_BYTE_1_UNUSED_I0_D0			5

#define TDA18272_FLO_MAX_BYTE					0x1d
#define TDA18272_OFFST_FLO_MAX_BYTE_UNUSED_I0_D0		6
#define TDA18272_WIDTH_FLO_MAX_BYTE_UNUSED_I0_D0		2
#define TDA18272_OFFST_FLO_MAX_BYTE_FMAX_LO			0
#define TDA18272_WIDTH_FLO_MAX_BYTE_FMAX_LO			6

#define TDA18272_IR_CAL_BYTE_1					0x1e
#define TDA18272_OFFST_IR_CAL_BYTE_1_IR_LOOP			6
#define TDA18272_WIDTH_IR_CAL_BYTE_1_IR_LOOP			2
#define TDA18272_OFFST_IR_CAL_BYTE_1_IR_TARGET			3
#define TDA18272_WIDTH_IR_CAL_BYTE_1_IR_TARGET			3
#define TDA18272_OFFST_IR_CAL_BYTE_1_IR_GSTEP			0
#define TDA18272_WIDTH_IR_CAL_BYTE_1_IR_GSTEP			3

#define TDA18272_IR_CAL_BYTE_2					0x1f
#define TDA18272_OFFST_IR_CAL_BYTE_2_IR_CORR_BOOST		7
#define TDA18272_WIDTH_IR_CAL_BYTE_2_IR_CORR_BOOST		1
#define TDA18272_OFFST_IR_CAL_BYTE_2_IR_FREQLOW_SEL		6
#define TDA18272_WIDTH_IR_CAL_BYTE_2_IR_FREQLOW_SEL		1
#define TDA18272_OFFST_IR_CAL_BYTE_2_IR_MODE_RAM_STORE		5
#define TDA18272_WIDTH_IR_CAL_BYTE_2_IR_MODE_RAM_STORE		1
#define TDA18272_OFFST_IR_CAL_BYTE_2_IR_FREQLOW			0
#define TDA18272_WIDTH_IR_CAL_BYTE_2_IR_FREQLOW			5

#define TDA18272_IR_CAL_BYTE_3					0x20
#define TDA18272_OFFST_IR_CAL_BYTE_3_UNUSED_I0_D0		5
#define TDA18272_WIDTH_IR_CAL_BYTE_3_UNUSED_I0_D0		3
#define TDA18272_OFFST_IR_CAL_BYTE_3_IR_FREQMID			0
#define TDA18272_WIDTH_IR_CAL_BYTE_3_IR_FREQMID			5

#define TDA18272_IR_CAL_BYTE_4					0x21
#define TDA18272_OFFST_IR_CAL_BYTE_4_UNUSED_I0_D0		6
#define TDA18272_WIDTH_IR_CAL_BYTE_4_UNUSED_I0_D0		2
#define TDA18272_OFFST_IR_CAL_BYTE_4_COARSE_IR_FREQHIGH		5
#define TDA18272_WIDTH_IR_CAL_BYTE_4_COARSE_IR_FREQHIGH		1
#define TDA18272_OFFST_IR_CAL_BYTE_4_IR_FREQHIGH		0
#define TDA18272_WIDTH_IR_CAL_BYTE_4_IR_FREQHIGH		5

#define TDA18272_VSYNC_MGT					0x22
#define TDA18272_OFFST_VSYNC_MGT_PD_VSYNC_MGT			7
#define TDA18272_WIDTH_VSYNC_MGT_PD_VSYNC_MGT			1
#define TDA18272_OFFST_VSYNC_MGT_PD_OVLD			6
#define TDA18272_WIDTH_VSYNC_MGT_PD_OVLD			1
#define TDA18272_OFFST_VSYNC_MGT_PD_UDLD			5
#define TDA18272_WIDTH_VSYNC_MGT_PD_UDLD			1
#define TDA18272_OFFST_VSYNC_MGT_AGC_OVLD_TOP			2
#define TDA18272_WIDTH_VSYNC_MGT_AGC_OVLD_TOP			3
#define TDA18272_OFFST_VSYNC_MGT_AGC_OVLD_TIMER			0
#define TDA18272_WIDTH_VSYNC_MGT_AGC_OVLD_TIMER			2

#define TDA18272_IRMIXER_BYTE_2					0x23
#define TDA18272_OFFST_IRMIXER_BYTE_2_HI_PASS			1
#define TDA18272_WIDTH_IRMIXER_BYTE_2_HI_PASS			1
#define TDA18272_OFFST_IRMIXER_BYTE_2_DC_NOTCH			0
#define TDA18272_WIDTH_IRMIXER_BYTE_2_DC_NOTCH			1

#define TDA18272_AGC1_BYTE_2					0x24
#define TDA18272_OFFST_AGC1_BYTE_2_AGC1_LOOP_OFF		7
#define TDA18272_WIDTH_AGC1_BYTE_2_AGC1_LOOP_OFF		1
#define TDA18272_OFFST_AGC1_BYTE_2_AGC1_DO_STEP			5
#define TDA18272_WIDTH_AGC1_BYTE_2_AGC1_DO_STEP			2
#define TDA18272_OFFST_AGC1_BYTE_2_FORCE_AGC1_GAIN		4
#define TDA18272_WIDTH_AGC1_BYTE_2_FORCE_AGC1_GAIN		1
#define TDA18272_OFFST_AGC1_BYTE_2_AGC1_GAIN			0
#define TDA18272_WIDTH_AGC1_BYTE_2_AGC1_GAIN			4

#define TDA18272_AGC5_BYTE_2					0x25
#define TDA18272_OFFST_AGC5_BYTE_2_AGC5_LOOP_OFF		7
#define TDA18272_WIDTH_AGC5_BYTE_2_AGC5_LOOP_OFF		1
#define TDA18272_OFFST_AGC5_BYTE_2_AGC5_DO_STEP			5
#define TDA18272_WIDTH_AGC5_BYTE_2_AGC5_DO_STEP			2
#define TDA18272_OFFST_AGC5_BYTE_2_UNUSED_I1_D0			4
#define TDA18272_WIDTH_AGC5_BYTE_2_UNUSED_I1_D0			1
#define TDA18272_OFFST_AGC5_BYTE_2_FORCE_AGC5_GAIN		3
#define TDA18272_WIDTH_AGC5_BYTE_2_FORCE_AGC5_GAIN		1
#define TDA18272_OFFST_AGC5_BYTE_2_UNUSED_I0_D0			2
#define TDA18272_WIDTH_AGC5_BYTE_2_UNUSED_I0_D0			1
#define TDA18272_OFFST_AGC5_BYTE_2_AGC5_GAIN			0
#define TDA18272_WIDTH_AGC5_BYTE_2_AGC5_GAIN			2

#define TDA18272_RF_CAL_BYTE_1					0x26
#define TDA18272_OFFST_RF_CAL_BYTE_1_RFCAL_OFFSET_CPROG0	6
#define TDA18272_WIDTH_RF_CAL_BYTE_1_RFCAL_OFFSET_CPROG0	2
#define TDA18272_OFFST_RF_CAL_BYTE_1_RFCAL_FREQ0		4
#define TDA18272_WIDTH_RF_CAL_BYTE_1_RFCAL_FREQ0		2
#define TDA18272_OFFST_RF_CAL_BYTE_1_RFCAL_OFFSET_CPROG1	2
#define TDA18272_WIDTH_RF_CAL_BYTE_1_RFCAL_OFFSET_CPROG1	2
#define TDA18272_OFFST_RF_CAL_BYTE_1_RFCAL_FREQ1		0
#define TDA18272_WIDTH_RF_CAL_BYTE_1_RFCAL_FREQ1		2

#define TDA18272_RF_CAL_BYTE_2		0x27
#define TDA18272_OFFST_RF_CAL_BYTE_2_RFCAL_OFFSET_CPROG2	6
#define TDA18272_WIDTH_RF_CAL_BYTE_2_RFCAL_OFFSET_CPROG2	2
#define TDA18272_OFFST_RF_CAL_BYTE_2_RFCAL_FREQ2		4
#define TDA18272_WIDTH_RF_CAL_BYTE_2_RFCAL_FREQ2		2
#define TDA18272_OFFST_RF_CAL_BYTE_2_RFCAL_OFFSET_CPROG3	2
#define TDA18272_WIDTH_RF_CAL_BYTE_2_RFCAL_OFFSET_CPROG3	2
#define TDA18272_OFFST_RF_CAL_BYTE_2_RFCAL_FREQ3		0
#define TDA18272_WIDTH_RF_CAL_BYTE_2_RFCAL_FREQ3		2

#define TDA18272_RF_CAL_BYTE_3					0x28
#define TDA18272_OFFST_RF_CAL_BYTE_3_RFCAL_OFFSET_CPROG4	6
#define TDA18272_WIDTH_RF_CAL_BYTE_3_RFCAL_OFFSET_CPROG4	2
#define TDA18272_OFFST_RF_CAL_BYTE_3_RFCAL_FREQ4		4
#define TDA18272_WIDTH_RF_CAL_BYTE_3_RFCAL_FREQ4		2
#define TDA18272_OFFST_RF_CAL_BYTE_3_RFCAL_OFFSET_CPROG5	2
#define TDA18272_WIDTH_RF_CAL_BYTE_3_RFCAL_OFFSET_CPROG5	2
#define TDA18272_OFFST_RF_CAL_BYTE_3_RFCAL_FREQ5		0
#define TDA18272_WIDTH_RF_CAL_BYTE_3_RFCAL_FREQ5		2

#define TDA18272_RF_CAL_BYTE_4					0x29
#define TDA18272_OFFST_RF_CAL_BYTE_4_RFCAL_OFFSET_CPROG6	6
#define TDA18272_WIDTH_RF_CAL_BYTE_4_RFCAL_OFFSET_CPROG6	2
#define TDA18272_OFFST_RF_CAL_BYTE_4_RFCAL_FREQ6		4
#define TDA18272_WIDTH_RF_CAL_BYTE_4_RFCAL_FREQ6		2
#define TDA18272_OFFST_RF_CAL_BYTE_4_RFCAL_OFFSET_CPROG7	2
#define TDA18272_WIDTH_RF_CAL_BYTE_4_RFCAL_OFFSET_CPROG7	2
#define TDA18272_OFFST_RF_CAL_BYTE_4_RFCAL_FREQ7		0
#define TDA18272_WIDTH_RF_CAL_BYTE_4_RFCAL_FREQ7		2

#define TDA18272_RF_CAL_BYTE_5					0x2a
#define TDA18272_OFFST_RF_CAL_BYTE_5_RFCAL_OFFSET_CPROG		6
#define TDA18272_WIDTH_RF_CAL_BYTE_5_RFCAL_OFFSET_CPROG8	2
#define TDA18272_OFFST_RF_CAL_BYTE_5_RFCAL_FREQ8		4
#define TDA18272_WIDTH_RF_CAL_BYTE_5_RFCAL_FREQ8		2
#define TDA18272_OFFST_RF_CAL_BYTE_5_RFCAL_OFFSET_CPROG9	2
#define TDA18272_WIDTH_RF_CAL_BYTE_5_RFCAL_OFFSET_CPROG9	2
#define TDA18272_OFFST_RF_CAL_BYTE_5_RFCAL_FREQ9		0
#define TDA18272_WIDTH_RF_CAL_BYTE_5_RFCAL_FREQ9		2

#define TDA18272_RF_CAL_BYTE_6					0x2b
#define TDA18272_OFFST_RF_CAL_BYTE_6_RFCAL_OFFSET_CPROG10	6
#define TDA18272_WIDTH_RF_CAL_BYTE_6_RFCAL_OFFSET_CPROG10	2
#define TDA18272_OFFST_RF_CAL_BYTE_6_RFCAL_FREQ10		4
#define TDA18272_WIDTH_RF_CAL_BYTE_6_RFCAL_FREQ10		2
#define TDA18272_OFFST_RF_CAL_BYTE_6_RFCAL_OFFSET_CPROG11	2
#define TDA18272_WIDTH_RF_CAL_BYTE_6_RFCAL_OFFSET_CPROG11	2
#define TDA18272_OFFST_RF_CAL_BYTE_6_RFCAL_FREQ11		0
#define TDA18272_WIDTH_RF_CAL_BYTE_6_RFCAL_FREQ11		2

#define TDA18272_RF_FILTER_BYTE_1				0x2c
#define TDA18272_OFFST_RF_FILTER_BYTE_1_RF_FILTER_BYPASS	7
#define TDA18272_WIDTH_RF_FILTER_BYTE_1_RF_FILTER_BYPASS	1
#define TDA18272_OFFST_RF_FILTER_BYTE_1_UNUSED_I0_D0		6
#define TDA18272_WIDTH_RF_FILTER_BYTE_1_UNUSED_I0_D0		1
#define TDA18272_OFFST_RF_FILTER_BYTE_1_AGC2_LOOP_OFF		5
#define TDA18272_WIDTH_RF_FILTER_BYTE_1_AGC2_LOOP_OFF		1
#define TDA18272_OFFST_RF_FILTER_BYTE_1_FORCE_AGC2_GAIN		4
#define TDA18272_WIDTH_RF_FILTER_BYTE_1_FORCE_AGC2_GAIN		1
#define TDA18272_OFFST_RF_FILTER_BYTE_1_RF_FILTER_GV		2
#define TDA18272_WIDTH_RF_FILTER_BYTE_1_RF_FILTER_GV		2
#define TDA18272_OFFST_RF_FILTER_BYTE_1_RF_FILTER_BAND		0
#define TDA18272_WIDTH_RF_FILTER_BYTE_1_RF_FILTER_BAND		2

#define TDA18272_RF_FILTER_BYTE_2				0x2d
#define TDA18272_OFFST_RF_FILTER_BYTE_2_RF_FILTER_CAP		0
#define TDA18272_WIDTH_RF_FILTER_BYTE_2_RF_FILTER_CAP		8

#define TDA18272_RF_FILTER_BYTE_3				0x2e
#define TDA18272_OFFST_RF_FILTER_BYTE_3_AGC2_DO_STEP		6
#define TDA18272_WIDTH_RF_FILTER_BYTE_3_AGC2_DO_STEP		2
#define TDA18272_OFFST_RF_FILTER_BYTE_3_GAIN_TAPER		0
#define TDA18272_WIDTH_RF_FILTER_BYTE_3_GAIN_TAPER		6

#define TDA18272_RF_BANDPASS_FILTER				0x2f
#define TDA18272_OFFST_RF_BANDPASS_FILTER_RF_BPF_BYPASS		7
#define TDA18272_WIDTH_RF_BANDPASS_FILTER_RF_BPF_BYPASS		1
#define TDA18272_OFFST_RF_BANDPASS_FILTER_UNUSED_I0_D0		3
#define TDA18272_WIDTH_RF_BANDPASS_FILTER_UNUSED_I0_D0		4
#define TDA18272_OFFST_RF_BANDPASS_FILTER_RF_BPF		0
#define TDA18272_WIDTH_RF_BANDPASS_FILTER_RF_BPF		3

#define TDA18272_CP_CURRENT					0x30
#define TDA18272_OFFST_CP_CURRENT_UNUSED_I0_D0			7
#define TDA18272_WIDTH_CP_CURRENT_UNUSED_I0_D0			1
#define TDA18272_OFFST_CP_CURRENT_N_CP_CURRENT			0
#define TDA18272_WIDTH_CP_CURRENT_N_CP_CURRENT			7

#define TDA18272_AGC_DET_OUT					0x31
#define TDA18272_OFFST_AGC_DET_OUT_UP_AGC5			7
#define TDA18272_WIDTH_AGC_DET_OUT_UP_AGC5			1
#define TDA18272_OFFST_AGC_DET_OUT_DO_AGC5			6
#define TDA18272_WIDTH_AGC_DET_OUT_DO_AGC5			1
#define TDA18272_OFFST_AGC_DET_OUT_UP_AGC4			5
#define TDA18272_WIDTH_AGC_DET_OUT_UP_AGC4			1
#define TDA18272_OFFST_AGC_DET_OUT_DO_AGC4			4
#define TDA18272_WIDTH_AGC_DET_OUT_DO_AGC4			1
#define TDA18272_OFFST_AGC_DET_OUT_UP_AGC2			3
#define TDA18272_WIDTH_AGC_DET_OUT_UP_AGC2			1
#define TDA18272_OFFST_AGC_DET_OUT_DO_AGC2			2
#define TDA18272_WIDTH_AGC_DET_OUT_DO_AGC2			1
#define TDA18272_OFFST_AGC_DET_OUT_UP_AGC1			1
#define TDA18272_WIDTH_AGC_DET_OUT_UP_AGC1			1
#define TDA18272_OFFST_AGC_DET_OUT_DO_AGC1			0
#define TDA18272_WIDTH_AGC_DET_OUT_DO_AGC1			1

#define TDA18272_RF_AGC_GAIN_BYTE_1				0x32
#define TDA18272_OFFST_RF_AGC_GAIN_BYTE_1_RF_FILTER_GAIN	4
#define TDA18272_WIDTH_RF_AGC_GAIN_BYTE_1_RF_FILTER_GAIN	2
#define TDA18272_OFFST_RF_AGC_GAIN_BYTE_1_LNA_GAIN		0
#define TDA18272_WIDTH_RF_AGC_GAIN_BYTE_1_LNA_GAIN		4

#define TDA18272_RF_AGC_GAIN_BYTE_2				0x33
#define TDA18272_OFFST_RF_AGC_GAIN_BYTE_2_TOP_AGC3_READ		0
#define TDA18272_WIDTH_RF_AGC_GAIN_BYTE_2_TOP_AGC3_READ		3

#define TDA18272_IF_AGC_GAIN					0x34
#define TDA18272_OFFST_IF_AGC_GAIN_LPF_GAIN			3
#define TDA18272_WIDTH_IF_AGC_GAIN_LPF_GAIN			2
#define TDA18272_OFFST_IF_AGC_GAIN_IR_MIXER			0
#define TDA18272_WIDTH_IF_AGC_GAIN_IR_MIXER			3

#define TDA18272_POWER_BYTE_1					0x35
#define TDA18272_OFFST_POWER_BYTE_1_RSSI			0
#define TDA18272_WIDTH_POWER_BYTE_1_RSSI			8

#define TDA18272_POWER_BYTE_2					0x36
#define TDA18272_OFFST_POWER_BYTE_2_UNUSED_I1_D0		6
#define TDA18272_WIDTH_POWER_BYTE_2_UNUSED_I1_D0		2
#define TDA18272_OFFST_POWER_BYTE_2_RSSI_AV			5
#define TDA18272_WIDTH_POWER_BYTE_2_RSSI_AV			1
#define TDA18272_OFFST_POWER_BYTE_2_UNUSED_I0_D0		4
#define TDA18272_WIDTH_POWER_BYTE_2_UNUSED_I0_D0		1
#define TDA18272_OFFST_POWER_BYTE_2_RSSI_CAP_RESET_EN		3
#define TDA18272_WIDTH_POWER_BYTE_2_RSSI_CAP_RESET_EN		1
#define TDA18272_OFFST_POWER_BYTE_2_RSSI_CAP_VAL		2
#define TDA18272_WIDTH_POWER_BYTE_2_RSSI_CAP_VAL		1
#define TDA18272_OFFST_POWER_BYTE_2_RSSI_CK_SPEED		1
#define TDA18272_WIDTH_POWER_BYTE_2_RSSI_CK_SPEED		1
#define TDA18272_OFFST_POWER_BYTE_2_RSSI_DICHO_NOT		0
#define TDA18272_WIDTH_POWER_BYTE_2_RSSI_DICHO_NOT		1

#define TDA18272_MISC_BYTE_1					0x37
#define TDA18272_OFFST_MISC_BYTE_1_IRQ_POLARITY			0
#define TDA18272_WIDTH_MISC_BYTE_1_IRQ_POLARITY			1

#define TDA18272_RF_CAL_LOG_1					0x38
#define TDA18272_OFFST_RF_CAL_LOG_1				0
#define TDA18272_WIDTH_RF_CAL_LOG_1				8

#define TDA18272_RF_CAL_LOG_2					0x39
#define TDA18272_OFFST_RF_CAL_LOG_2				0
#define TDA18272_WIDTH_RF_CAL_LOG_2				8

#define TDA18272_RF_CAL_LOG_3					0x3a
#define TDA18272_OFFST_RF_CAL_LOG_3				0
#define TDA18272_WIDTH_RF_CAL_LOG_3				8

#define TDA18272_RF_CAL_LOG_4					0x3b
#define TDA18272_OFFST_RF_CAL_LOG_4				0
#define TDA18272_WIDTH_RF_CAL_LOG_4				8

#define TDA18272_RF_CAL_LOG_5					0x3c
#define TDA18272_OFFST_RF_CAL_LOG_5				0
#define TDA18272_WIDTH_RF_CAL_LOG_5				8

#define TDA18272_RF_CAL_LOG_6					0x3d
#define TDA18272_OFFST_RF_CAL_LOG_6				0
#define TDA18272_WIDTH_RF_CAL_LOG_6				8

#define TDA18272_RF_CAL_LOG_7					0x3e
#define TDA18272_OFFST_RF_CAL_LOG_7				0
#define TDA18272_WIDTH_RF_CAL_LOG_7				8

#define TDA18272_RF_CAL_LOG_8					0x3f
#define TDA18272_OFFST_RF_CAL_LOG_8				0
#define TDA18272_WIDTH_RF_CAL_LOG_8				8

#define TDA18272_RF_CAL_LOG_9					0x40
#define TDA18272_OFFST_RF_CAL_LOG_9				0
#define TDA18272_WIDTH_RF_CAL_LOG_9				8

#define TDA18272_RF_CAL_LOG_10					0x41
#define TDA18272_OFFST_RF_CAL_LOG_10				0
#define TDA18272_WIDTH_RF_CAL_LOG_10				8

#define TDA18272_RF_CAL_LOG_11					0x42
#define TDA18272_OFFST_RF_CAL_LOG_11				0
#define TDA18272_WIDTH_RF_CAL_LOG_11				8

#define TDA18272_RF_CAL_LOG_12					0x43
#define TDA18272_OFFST_RF_CAL_LOG_12				0
#define TDA18272_WIDTH_RF_CAL_LOG_12				8

#endif /* __TDA18272_REG_H */
