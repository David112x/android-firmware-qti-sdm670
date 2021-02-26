
/*==============================================================================

  D A L I N T E R R U P T   C O N T R O L L E R

  DESCRIPTION
    This auto-generated file contains the interrupt configuration data for
    all the interrupts for this platform.

  Copyright (c) 2017 Qualcomm Technologies Incorporated.
  All rights reserved.
  QUALCOMM Proprietary/GTDR
===========================================================================

  $Header: //components/rel/core.qdsp6/2.1.c4/settings/systemdrivers/InterruptController/config/adsp/sdm670/InterruptConfigData.c#1 $
  $DateTime: 2018/07/30 01:21:36 $
  $Author: pwbldsvc $
===========================================================================*/

#include "DALReg.h"
#include "DDIInterruptController.h"
#include "InterruptControllerInterface.h"

/*
 * InterruptConfigs
 * BSP data for this target's interrupts.
 * The data layout is the following:
 * { L2VIC interrupt vector number, interrupt name, trigger type}
 *
 */
static InterruptConfigType InterruptConfigs[] =
{
	{0,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"slpc_l2vic_wake_irq"},
	{1,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"q6ss_isdb_irq"},
	{2,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"q6ss_qtmr_irq[0]"},
	{3,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"q6ss_qtmr_irq[1]"},
	{4,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"q6ss_qtmr_irq[2]"},
	{5,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"q6ss_etm_irq"},
	{6,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[23]"},
	{7,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[2]"},
	{8,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[28]"},
	{9,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[22]"},
	{10,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[6]"},
	{11,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lpass_aud_slimbus_core_ee0_irq"},
	{12,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lpass_aud_slimbus_bam_ee0_irq"},
	{13,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lpass_qca_slimbus_core_ee0_irq"},
	{14,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lpass_qca_slimbus_bam_ee0_irq"},
	{15,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[1]"},
	{16,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[55]"},
	{17,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lpass_hdmitx_interrupt"},
	{18,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[7]"},
	{19,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"audio_out2_irq"},
	{20,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"bus_irq"},
	{21,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lpass_rsc_rsc_error_irq"},
	{22,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[24]"},
	{23,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"dm_irq"},
	{24,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_gsi_irq_0"},
	{25,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_gsi_irq_1"},
	{26,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_gsi_irq_2"},
	{27,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_gsi_irq_3"},
	{28,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_gsi_irq_4"},
	{29,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_gsi_irq_5"},
	{30,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[3]"},
	{31,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"q6ss_cti_irq"},
	{32,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"q6ss_wdog_irq"},
	{33,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[27]"},
	{34,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[25]"},
	{35,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[12]"},
	{36,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[18]"},
	{38,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[20]"},
	{39,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[13]"},
	{40,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[19]"},
	{41,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lpass_rsc_core_comp_irq"},
	{42,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[15]"},
	{43,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[16]"},
	{44,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[17]"},
	{45,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[21]"},
	{46,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[26]"},
	{47,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[48]"},
	{48,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[32]"},
	{49,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[0]"},
	{50,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"avtimer_int_0"},
	{51,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"vfr_irq_mux_out[0]"},
	{52,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[56]"},
	{53,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"resampler_irq[1]"},
	{54,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_ipc[0]"},
	{55,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_ipc[1]"},
	{56,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_ipc[2]"},
	{57,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[14]"},
	{58,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[57]"},
	{59,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_ipc[3]"},
	{60,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"qupv3_sensor_gsi_irq_6"},
	{61,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"spdm_realtime_irq[2]"},
	{62,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[40]"},
	{63,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[33]"},
	{64,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[45]"},
	{65,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[46]"},
	{66,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"top_qupv3_lpass_irq_out[2]"},
	{67,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"top_qupv3_lpass_irq_out[3]"},
	{68,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"top_qupv3_lpass_irq_out[4]"},
	{69,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"top_qupv3_lpass_irq_out[5]"},
	{70,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[41]"},
	{71,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[42]"},
	{72,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[72]"},
	{73,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[73]"},
	{74,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[74]"},
	{75,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"qtmr_ssc_virt_irq_1"},
	{77,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"qupv3_xpu_secure_intr_raw"},
	{78, DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER, "sensors_pdc_irq_out[37]"},
	{79,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_gsi_irq_7"},
	{80,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_gsi_irq_8"},
	{81,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_gsi_irq_9"},
	{82,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_gsi_irq_10"},
	{83,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_gsi_irq_11"},
	{84,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[58]"},
	{85,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_gsi_irq_12"},
	{86,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_se_irq_0"},
	{87,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_se_irq_1"},
	{88,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_se_irq_2"},
	{89,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[47]"},
	{90,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[39]"},
	{91,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[50]"},
	{92,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[59]"},
	{93,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[43]"},
	{94,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[44]"},
	{95,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[36]"},
	{96,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"crypto_core_irq[2]"},
	{97,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"crypto_bam_irq[2]"},
	{100,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[51]"},
	{101,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[60]"},
	{102,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[30]"},
	{103,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_se_irq_3"},
	{104,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_se_irq_4"},
	{105,DALINTRCTRL_ENABLE_LEVEL_LOW_TRIGGER,"qupv3_sensor_se_irq_5"},
	{106,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[52]"},
	{107,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[53]"},
	{108,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"processor_0_user_int"},
	{109,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"processor_0_kernel_int"},
	{110,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[34]"},
	{111,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[35]"},
	{112,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"qtmr_ssc_phy_irq[1]"},
	{113,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lpass_qos_q6_interrupt"},
	{114,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[11]"},
	{115,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lpass_rsc_core_comp_irq"},
	{116,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"q6ss_irq_out[59]"},
	{120,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[29]"},
	{124,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"vfr_irq_mux_out[1]"},
	{126,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[61]"},
	{131,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[62]"},
	{135,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[63]"},
	{141,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[64]"},
	{146,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lcc_spkr_ext_clk_detect_inactive_irq"},
	{147,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lcc_pri_ext_clk_detect_inactive_irq"},
	{148,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lcc_sec_ext_clk_detect_inactive_irq"},
	{149,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lcc_ter_ext_clk_detect_inactive_irq"},
	{150,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lcc_quad_ext_clk_detect_inactive_irq"},
	{151,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"lcc_audio_core_gds_hw_ctrl_sequence_abort_irq"},
	{153,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[31]"},
	{155,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[54]"},
	{175,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_bps_cdm_irq"},
	{176,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_bps_irq"},
	{177,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_camnoc_irq"},
	{178,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_cci_irq"},
	{179,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_cdm_irq"},
	{180,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_fd_irq"},
	{181,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_icp_irq"},
	{182,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_0_csid_irq"},
	{183,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_0_irq"},
	{184,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_1_csid_irq"},
	{185,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_1_irq"},
	{186,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_lite_csid_irq"},
	{187,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ife_lite_irq"},
	{188,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ipe_0_cdm_irq"},
	{189,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ipe_0_irq"},
	{190,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ipe_1_cdm_irq"},
	{191,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_ipe_1_irq"},
	{192,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_jpeg_0_irq"},
	{193,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_jpeg_3_irq"},
	{194,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"titan_lrme_irq"},
	{195,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[0]"},
	{196,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[1]"},
	{197,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[2]"},
	{198,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[3]"},
	{199,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[4]"},
	{200,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[5]"},
	{201,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[6]"},
	{202,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[7]"},
	{203,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[8]"},
	{204,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[9]"},
	{205,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[10]"},
	{206,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[11]"},
	{207,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[12]"},
	{208,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[13]"},
	{209,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[14]"},
	{210,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[15]"},
	{211,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[16]"},
	{212,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[17]"},
	{213,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[18]"},
	{214,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[19]"},
	{215,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[20]"},
	{216,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[21]"},
	{217,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[22]"},
	{218,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[23]"},
	{219,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[24]"},
	{220,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[25]"},
	{221,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[26]"},
	{222,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[27]"},
	{223,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[28]"},
	{224,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[29]"},
	{225,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[30]"},
	{226,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_gpo[31]"},
	{227,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"qdsp6_iso_axim_reqpend"},
	{228,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"alarm_irq_cx"},
	{229,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"alarm_irq_mx"},
	{230,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_wdog_bark_irq"},
	{231,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_wdog_expired_irq"},
	{232,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"ccd_ppe_int_status"},
	{233,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"ccd_q6_amd_int1_status"},
	{234,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"ccd_q6_amd_int2_status"},
	{235,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"ccd_q6_tilt_int_status"},
	{236,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"ccd_q6_walk_int_status"},
	{237,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"ccd_in_fifo_full_int_status"},
	{238,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[4]"},
	{239,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[5]"},
	{240,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[8]"},
	{241,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[9]"},
	{242,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[10]"},
	{243,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[38]"},
	{245,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[44]"},
	{246,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[49]"},
	{248,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[65]"},
	{249,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[66]"},
	{250,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[67]"},
	{251,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[68]"},
	{252,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[69]"},
	{253,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[70]"},
	{254,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[71]"},
	{255,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[72]"},
	{256,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[73]"},
	{257,DALINTRCTRL_ENABLE_RISING_EDGE_TRIGGER,"sensors_pdc_irq_out[74]"},
	{258,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"q6ss_cpr_irq"},
	{259,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"RESERVE_enter_island_mode_irq"},
	{260,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"iso_ahb_reqpend_irq"},
	{261,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"qtmr_ssc_virt_irq_0"},
	{262,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_cti_intisr_0"},
	{263,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_vmidmt_nsgcfg_irq"},
	{264,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_vmidmt_nsg_irq"},
	{265,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_vmidmt_secgcfg_irq"},
	{266,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"sdc_vmidmt_secg_irq"},
	{267,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"o_sdc_xpu2_sp_msa_intr_0"},
	{268,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"o_sdc_xpu2_sp_msa_intr_1"},
	{269,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"o_sdc_xpu2_non_secure_intr"},
	{270,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"o_sdc_xpu2_secure_intr"},
	{271,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"vsense_ssc_q6_alarm_irq"},
	{272,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"vsense_ssc_q6_alarm_irq"},
	{273,DALINTRCTRL_ENABLE_LEVEL_HIGH_TRIGGER,"ssc_noc_obs_mainFault"},
    {INVALID_INTERRUPT, DALINTRCTRL_ENABLE_DEFAULT_SETTINGS, ""}
};


/*
 * pInterruptControllerConfigData
 * This is used by the interrupt controller driver to query platform specific data.
 */
InterruptPlatformDataType pInterruptControllerConfigData[] =
{
  {
    .pIRQConfigs = InterruptConfigs,
    .nMaxIRQ     = 274
  }
};