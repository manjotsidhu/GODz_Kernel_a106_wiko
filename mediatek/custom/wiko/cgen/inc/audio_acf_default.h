/*****************************************************************************
*  Copyright Statement:
*  --------------------
*  This software is protected by Copyright and the information contained
*  herein is confidential. The software may not be copied and the information
*  contained herein may not be used or disclosed except with the written
*  permission of MediaTek Inc. (C) 2008
*
*  BY OPENING THIS FILE, BUYER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
*  THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
*  RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO BUYER ON
*  AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
*  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
*  MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
*  NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
*  SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
*  SUPPLIED WITH THE MEDIATEK SOFTWARE, AND BUYER AGREES TO LOOK ONLY TO SUCH
*  THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. MEDIATEK SHALL ALSO
*  NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE RELEASES MADE TO BUYER'S
*  SPECIFICATION OR TO CONFORM TO A PARTICULAR STANDARD OR OPEN FORUM.
*
*  BUYER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND CUMULATIVE
*  LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
*  AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
*  OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY BUYER TO
*  MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
*
*  THE TRANSACTION CONTEMPLATED HEREUNDER SHALL BE CONSTRUED IN ACCORDANCE
*  WITH THE LAWS OF THE STATE OF CALIFORNIA, USA, EXCLUDING ITS CONFLICT OF
*  LAWS PRINCIPLES.  ANY DISPUTES, CONTROVERSIES OR CLAIMS ARISING THEREOF AND
*  RELATED THERETO SHALL BE SETTLED BY ARBITRATION IN SAN FRANCISCO, CA, UNDER
*  THE RULES OF THE INTERNATIONAL CHAMBER OF COMMERCE (ICC).
*
*****************************************************************************/

/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_acf_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Tina Tsai
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_ACF_DEFAULT_H
#define AUDIO_ACF_DEFAULT_H

   /* Compensation Filter HSF coeffs: default all pass filter       */
    /* BesLoudness also uses this coeffs    */ 
#define BES_LOUDNESS_HSF_COEFF \
0x7cf4c25,   0xf06167b6,   0x7cf4c25,   0x7cefc306,   0x0,     \
0x7cb11ae,   0xf069dca4,   0x7cb11ae,   0x7cabc348,   0x0,     \
0x7b78e02,   0xf090e3fd,   0x7b78e02,   0x7b6dc47b,   0x0,     \
0x7a0343d,   0xf0bf9786,   0x7a0343d,   0x79eec5e7,   0x0,     \
0x7980936,   0xf0cfed93,   0x7980936,   0x7967c666,   0x0,     \
0x772a3e5,   0xf11ab836,   0x772a3e5,   0x76fbc8a7,   0x0,     \
0x7468828,   0xf172efb0,   0x7468828,   0x7417cb46,   0x0,     \
0x73743a9,   0xf19178ae,   0x73743a9,   0x7314cc2c,   0x0,     \
0x6f26907,   0xf21b2df2,   0x6f26907,   0x6e77d02a,   0x0,     \
    \
0x7eb571d,   0xf02951c5,   0x7eb571d,   0x7eb0c145,   0x0,     \
0x7e98001,   0xf02cfffe,   0x7e98001,   0x7e91c161,   0x0,     \
0x7e0e896,   0xf03e2ed4,   0x7e0e896,   0x7e02c1e5,   0x0,     \
0x7d669a2,   0xf0532cbb,   0x7d669a2,   0x7d51c283,   0x0,     \
0x7d2af5a,   0xf05aa14c,   0x7d2af5a,   0x7d11c2bb,   0x0,     \
0x7c13d5c,   0xf07d8548,   0x7c13d5c,   0x7be3c3bb,   0x0,     \
0x7abd80b,   0xf0a84fea,   0x7abd80b,   0x7a67c4ec,   0x0,     \
0x7a439e7,   0xf0b78c32,   0x7a439e7,   0x79dec557,   0x0,     \
0x78078fc,   0xf0ff0e09,   0x78078fc,   0x774ac73b,   0x0

#define BES_LOUDNESS_BPF_COEFF \
0x4041827e,   0x3dc77d81,   0xc1f70000,     \
0x404682c3,   0x3d967d3c,   0xc2230000,     \
0x4061841b,   0x3cb17be4,   0xc2ed0000,     \
0x408085f3,   0x3b9f7a0c,   0xc3df0000,     \
0x408b86a8,   0x3b3f7957,   0xc4340000,     \
0x40bd8a51,   0x398775ae,   0xc5ba0000,     \
    \
0x403e8242,   0x3e957dbd,   0xc12c0000,     \
0x4043828f,   0x3e757d70,   0xc1470000,     \
0x405c842e,   0x3de27bd1,   0xc1c10000,     \
0x407b869c,   0x3d307963,   0xc2540000,     \
0x40858797,   0x3cf27868,   0xc2880000,     \
0x40b68cf1,   0x3bd2730e,   0xc3760000,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0

#define BES_LOUDNESS_LPF_COEFF \
0x1bc91bc9,   0x86c,   0x0,     \
0x1da81da8,   0x4ae,   0x0,     \
0x265d265d,   0xf345,   0x0,     \
0x32793279,   0xdb0c,   0x0,     \
0x37cb37cb,   0xd069,   0x0,     \
0x0,   0x0,   0x0
#define BES_LOUDNESS_WS_GAIN_MAX  0x399a
#define BES_LOUDNESS_WS_GAIN_MIN  0x2666
#define BES_LOUDNESS_FILTER_FIRST  0x0
#define BES_LOUDNESS_ATT_TIME  0xa4
#define BES_LOUDNESS_REL_TIME  0x4010
#define BES_LOUDNESS_GAIN_MAP_IN \
0xd3, 0xdd, 0xed, 0xee, 0x0
#define BES_LOUDNESS_GAIN_MAP_OUT \
0x0, 0xc, 0xc, 0xc, 0x0
#endif
