/* linux/drivers/video/decon_display/S6E89A0_param.h
 *
 * Copyright (c) 2014 Samsung Electronics Co., Ltd.
 *
 * Jiun Yu <jiun.yu@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __S6E3HA3_PARAM_H__
#define __S6E3HA3_PARAM_H__


/* MIPI commands list */
static const unsigned char SEQ_F0[] = {
	0xf0, 0x5A, 0x5A
};

static const unsigned char SEQ_F1[] = {
	0xf1, 0x5A, 0x5A
};

static const unsigned char SEQ_FC[] = {
	0xfc, 0x5A, 0x5A
};

/* MIC swap & Decoder disenable*/
static const unsigned char SEQ_F9_MIC_OFF[] = {
	0xf9, 0x00
};

static const unsigned char SEQ_F2_CE[] = {
	0xf2,
	0x41, 0x4C, 0xC8, 0xC0
};

static const unsigned char SEQ_F2[] = {
	0xf2,
	0x41, 0x4C, 0xB8, 0x80, 0xB4,
	0x40, 0x0A, 0x06, 0x00, 0x11,
	0x00, 0x00
};

static const unsigned char SEQ_C2[] = {
	0xC2,
	0x00, 0x00, 0xD8, 0xD8, 0x00,
	0x80, 0x2B, 0x05, 0x08, 0x0E,
	0x07, 0x0B, 0x05, 0x0D, 0x0A,
	0x15, 0x13, 0x20, 0x1E
};

static const unsigned char SEQ_CA[] = {
	0xCA,
	0x01, 0x00, 0x01, 0x00, 0x01,
	0x00, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80,
	0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char SEQ_B1[] = {
	0xb1,
	0x54, 0x20, 0x1A, 0x33, 0x5E,
	0x8C, 0xB3, 0xD9, 0x10, 0x03,
	0x00, 0x0A, 0x00, 0x80, 0x28
};

static const unsigned char SEQ_F7[] = {
	0xF7, 0x03
};

static const unsigned char SEQ_F4[] = {
	0xf4, 0xab
};

static const unsigned char SEQ_F4_13[] = {
	0xf4,
	0xab, 0x1e, 0x13, 0xaa, 0x9c,
	0x02, 0x00
};

static const unsigned char SEQ_FE_30[] = {
	0xfe, 0x30
};

static const unsigned char SEQ_FE_B0[] = {
	0xfe, 0xb0
};

static const unsigned char SEQ_DSC_EN[] = {
	0x01, 0x00
};

static const unsigned char SEQ_CB[] = {
	0xCB,
	0x18, 0x01, 0x80, 0x00, 0x00,
	0x60, 0x80, 0x00, 0x00, 0x06,
	0x05, 0x00, 0x00, 0x00, 0x06,
	0x05, 0x00, 0x15, 0x9A, 0x00,
	0x00, 0x00, 0x00, 0x04, 0x00,
	0x00, 0x00, 0x00, 0x9D, 0x00,
	0x00, 0xCF, 0x11, 0x0D, 0x03,
	0xC5, 0x84, 0xCA, 0x0A, 0x0A,
	0x0A, 0xCA, 0xCA, 0xCF, 0xD1,
	0x4D, 0xC3, 0xC5, 0xC4, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x00, 0x00, 0x0A, 0x01, 0x7B,
	0x4D, 0x00, 0x00, 0x08, 0x00
};

static const unsigned char SEQ_2A[] = {
	0x2A,
	0x00, 0x00, 0x05, 0x9F, 0x00,
	0x00, 0x00
};

static const unsigned char SEQ_2B[] = {
	0x2B,
	0x00, 0x00, 0x09, 0xFF
};

/*for 1/3 DSC*/
static const unsigned char SEQ_PPS_3[] = {
	0xe4, 0x11, 0x00, 0x00, 0x89,
	0x30, 0x80, 0x0a, 0x00, 0x05,
	0xa0, 0x00, 0x10, 0x05, 0xa0,
	0x05, 0xa0, 0x02, 0x00, 0x03,
	0xd0, 0x00, 0x20, 0x02, 0x33,
	0x00, 0x14, 0x00, 0x0c, 0x06,
	0x67, 0x02, 0x63, 0x18, 0x00,
	0x10, 0xf0, 0x03, 0x0c, 0x20,
	0x00, 0x06, 0x0b, 0x0b, 0x33,
	0x0e, 0x1c, 0x2a, 0x38, 0x46,
	0x54, 0x62, 0x69, 0x70, 0x77,
	0x79, 0x7b, 0x7d, 0x7e, 0x01,
	0x02, 0x01, 0x00, 0x09, 0x40,
	0x09, 0xbe, 0x19, 0xfc, 0x19,
	0xfa, 0x19, 0xf8, 0x1a, 0x38,
	0x1a, 0x78, 0x1a, 0xb6, 0x2a,
	0xf6, 0x2b, 0x34, 0x2b, 0x74,
	0x3b, 0x74, 0x6b, 0xf4, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
};

static const unsigned char SEQ_53[] = {
	0x53, 0x28
};

static const unsigned char SEQ_51[] = {
	0x51, 0xFF
};

static const unsigned char SEQ_TE_ON[] = {
	0x35, 0x00
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00,  0x00
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

#if (0)
/* MIPI commands list */
static const unsigned char SEQ_TEST_KEY_ON_F0[] = {
	0xf0, 0x5A, 0x5A
};

static const unsigned char SEQ_TEST_KEY_ON_F1[] = {
	0xf1, 0x5A, 0x5A
};

static const unsigned char SEQ_TEST_KEY_ON_FC[] = {
	0xfc, 0x5A, 0x5A
};

static const unsigned char SEQ_TEST_KEY_lock_FC[] = {
	0xfc, 0xA5, 0xA5
};

static const unsigned char SEQ_CE[] = {
	0xce,
	0x1F, 0x68, 0x49, 0x4E, 0x38,
	0x8A, 0xC6, 0x03, 0x00, 0xFF,
	0x3C, 0x3F, 0x3F, 0x3F, 0x3F,
	0x0F, 0xAB
};

/* MIC swap enable & Decoder enable*/
static const unsigned char SEQ_SINGLE_DSI_SET2[] = {
	0xf9, 0x06
};

/* MIC swap & Decoder disenable*/
static const unsigned char SEQ_SINGLE_DSI_SET2_MIC_OFF[] = {
	0xf9, 0x00
};

static const unsigned char SEQ_F2[] = {
	0xf2,
	0x41, 0x4C, 0xC8, 0xC0
};

static const unsigned char SEQ_F2_DDI[] = {
	0xf2,
	0x41, 0x4C, 0xc8, 0x80, 0xB4,
	0x40, 0x0E, 0x06, 0x00, 0x11
};

static const unsigned char SEQ_POC_GLOBAL[] = {
	0xB0, 0x18
};

static const unsigned char SEQ_TE_START_SETTING[] = {
	0xb9,
	0x01, 0x09, 0xFF, 0x00, 0x0A
};

static const unsigned char SEQ_BC[] = {
	0xbc,
	0x11, 0x11, 0x02, 0x16, 0x02, 0x16
};

static const unsigned char SEQ_PCD_SETTING[] = {
	0xCC, 0x4C
};

static const unsigned char SEQ_PCD_SETTING_DDI[] = {
	0xCC,
	0x4C, 0x51
};

static const unsigned char SEQ_ERR_FG_SETTING[] = {
	0xed, 0x44
};

static const unsigned char SEQ_C2[] = {
	0xC2,
	0x00, 0x00, 0xD8, 0xD8, 0x00,
	0x80, 0x2B, 0x05, 0x08, 0x0E,
	0x07, 0x0B, 0x05, 0x0D, 0x0A,
	0x15, 0x13, 0x20, 0x1E
};

static const unsigned char SEQ_GAMMA_CONTROL_SET[] = {
	0xCA,
	0x01, 0x00, 0x01, 0x00, 0x01,
	0x00, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80,
	0x80, 0x80, 0x80, 0x80, 0x80,
	0x00, 0x00, 0x00, 0x00, 0x00
};

static const unsigned char ETC_CONDITION1[] = {
	0xb1,
	0x54, 0x20, 0x1A, 0x33, 0x5E,
	0x8C, 0xB3, 0xD9, 0x10, 0x03
};

static const unsigned char ETC_CONDITION1_DDI[] = {
	0xb1,
	0x54, 0x20, 0x1A, 0x33, 0x5E,
	0x8C, 0xB3, 0xD9, 0x10, 0x03,
	0x00, 0x0A, 0x00, 0x80, 0x28
};

static const unsigned char ETC_CONDITION_B3_DDI[] = {
	0xb3, 0x68
};

static const unsigned char SEQ_ACL_OPR_AVR[] = {
	0xb5,
	0xBC,	  /* MPS_CON: ACL OFF */
	0x0A	 /* ELVSS: MAX */
};

static const unsigned char SEQ_ACL_OFF[] = {
	0x55, 0x00
};

static const unsigned char SEQ_B4[] = {
	0xB4, 0x40
};

static const unsigned char SEQ_B4_DDI[] = {
	0xB4,
	0x50, 0x99, 0x27, 0x09, 0x45
};

static const unsigned char SEQ_GAMMA_UPDATE[] = {
	0xF7, 0x03
};

static const unsigned char SEQ_POC_GLOBAL_15[] = {
	0xB0, 0x15
};

static const unsigned char SEQ_ACL_OPR_AVR_1[] = {
	0xb5,
	0x0A	 /* ELVSS: MAX */
};

static const unsigned char SEQ_ACL_OPR_AVR_DDI[] = {
	0xb5,
	0xBC, 0x0A, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x03, 0x55, 0x54,
	0x20, 0x00, 0x00, 0x09, 0x99,
	0x9F, 0xAF, 0x01, 0x12, 0x10,
	0x00, 0x00, 0x00, 0x8F, 0x30,
	0x00, 0x00, 0x20, 0x19, 0x00	 /* ELVSS: MAX */
};

static const unsigned char SEQ_ACL_OPR_AVR_DDI_AC[] = {
	0xb5, 0xac	 /* ELVSS: MAX */
};
static const unsigned char SEQ_C7[] = {
	0xC7, 0x00
};

static const unsigned char SEQ_POC_GLOBAL_05[] = {
	0xB0, 0x05
};

static const unsigned char SEQ_B8[] = {
	0xB8, 0x19
};

static const unsigned char SEQ_F4[] = {
	0xf4,
	0xab, 0x1e
};

static const unsigned char SEQ_F4_13[] = {
	0xf4,
	0xab, 0x1e, 0x13, 0xaa, 0x9c,
	0x02, 0x00
};

static const unsigned char SEQ_F4_13_DDI[] = {
	0xf4,
	0xAB, 0x1E, 0x93, 0x8A, 0x9C,
	0x0F
};


static const unsigned char SEQ_FE_30[] = {
	0xfe, 0x30
};

static const unsigned char SEQ_FE_B0[] = {
	0xfe, 0xb0
};

static const unsigned char SEQ_DSC_EN[] = {
	0x01, 0x00
};

static const unsigned char SEQ_F6[] = {
	0xF6,
	0x42, 0x17, 0x37, 0x30, 0xAA,
	0xCC, 0xD0, 0x01
};

static const unsigned char SEQ_CB_DDI[] = {
	0xCB,
	0x18, 0x01, 0x80, 0x00, 0x00,
	0x60, 0x80, 0x00, 0x00, 0x06,
	0x05, 0x00, 0x00, 0x00, 0x0A,
	0x05, 0x00, 0x15, 0x9A, 0x00,
	0x00, 0x00, 0x00, 0x08, 0x00,
	0x00, 0x00, 0x00, 0x9D, 0x00,
	0x00, 0xCF, 0x11, 0x0D, 0x03,
	0xC5, 0x84, 0xCA, 0x0A, 0x0A,
	0x0A, 0xCA, 0xCA, 0xCF, 0xD1,
	0x4D, 0xC3, 0xC5, 0xC4, 0x0A,
	0x0A, 0x0A, 0x0A, 0x0A, 0x0A,
	0x00, 0x00, 0x0E, 0x01, 0x7B,
	0x4D, 0x00, 0x00, 0x0C, 0x00
};

static const unsigned char SEQ_EB_DDI[] = {
	0xEB, 0x5D
};

static const unsigned char SEQ_E5_DDI[] = {
	0xE5,
	0x00, 0x23, 0x00, 0x00, 0x00,
	0x00, 0xF8, 0xFC
};

static const unsigned char SEQ_C8_DDI[] = {
	0xC8,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
	0x0, 0x0, 0x0
};

static const unsigned char SEQ_2A_DDI[] = {
	0x2A,
	0x00, 0x00, 0x05, 0x9F
};

/*for 1/2 DSC*/
static const unsigned char SEQ_PPS_2[] = {
	0xe4, 0x11, 0x00, 0x00, 0x89,
	0x30, 0xc0, 0x0a, 0x00, 0x05,
	0xa0, 0x00, 0x10, 0x05, 0xa0,
	0x08, 0x70, 0x01, 0x55, 0x04,
	0x58, 0x00, 0x0a, 0x01, 0x28,
	0x00, 0xf0, 0x00, 0x0f, 0x08,
	0x00, 0x06, 0xa7, 0x08, 0x00,
	0x10, 0xf4, 0x03, 0x0c, 0x20,
	0x00, 0x06, 0x0b, 0x0b, 0x33,
	0x0e, 0x1c, 0x2a, 0x38, 0x46,
	0x54, 0x62, 0x69, 0x70, 0x77,
	0x79, 0x7b, 0x7d, 0x7e, 0x00,
	0x82, 0x01, 0x00, 0x09, 0x40,
	0x09, 0xbe, 0x19, 0xfc, 0x19,
	0xfa, 0x19, 0xf8, 0x1a, 0x38,
	0x1a, 0x78, 0x1a, 0xb6, 0x2a,
	0xf6, 0x2b, 0x34, 0x2b, 0x74,
	0x3b, 0x74, 0x6b, 0xf4, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
};

/*for 1/3 DSC*/
static const unsigned char SEQ_PPS_3[] = {
	0xe4, 0x11, 0x00, 0x00, 0x89,
	0x30, 0x80, 0x0a, 0x00, 0x05,
	0xa0, 0x00, 0x10, 0x05, 0xa0,
#if (0)
	0x05, 0xa0, 0x02, 0x00, 0x03,
	0xd0, 0x00, 0x20, 0x02, 0x33,
	0x00, 0x14, 0x00, 0x0c, 0x06,
	0x67, 0x02, 0x63, 0x18, 0x00,
	0x10, 0xf0, 0x03, 0x0c, 0x20,
	0x00, 0x06, 0x0b, 0x0b, 0x33,
	0x0e, 0x1c, 0x2a, 0x38, 0x46,
	0x54, 0x62, 0x69, 0x70, 0x77,
	0x79, 0x7b, 0x7d, 0x7e, 0x01,
	0x02, 0x01, 0x00, 0x09, 0x40,
	0x09, 0xbe, 0x19, 0xfc, 0x19,
	0xfa, 0x19, 0xf8, 0x1a, 0x38,
	0x1a, 0x78, 0x1a, 0xb6, 0x2a,
	0xf6, 0x2b, 0x34, 0x2b, 0x74,
	0x3b, 0x74, 0x6b, 0xf4, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00
#endif // 0
};

static const unsigned char SEQ_TEST_KEY_OFF_F0[] = {
	0xf0,
	0xa5, 0xa5
};

static const unsigned char SEQ_TE_ON[] = {
	0x35, 0x00
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00,  0x00
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};
#endif // 0

#endif /* __S6E3HA3_PARAM_H__ */