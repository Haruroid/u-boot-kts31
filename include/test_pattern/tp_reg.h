/**************************************************************
// Spec Version                  : 0.2
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Register_Name
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/2/4 10:38:49
***************************************************************/


#ifndef _TP_REG_H_INCLUDED_
#define _TP_REG_H_INCLUDED_
#ifdef  _TP_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     dvse:1;
unsigned int     dvs_3:1;
unsigned int     dvs_2:1;
unsigned int     dvs_1:1;
unsigned int     dvs_0:1;
}TP_BIST_RM;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     bist_fail5:1;
unsigned int     bist_fail4:1;
unsigned int     bist_fail3:1;
unsigned int     bist_fail2:1;
unsigned int     bist_fail1:1;
unsigned int     bist_fail0:1;
unsigned int     bist_done:1;
}TP_BIST_ST;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     drf_start_pause:1;
unsigned int     reserved_1:9;
unsigned int     drf_fail5:1;
unsigned int     drf_fail4:1;
unsigned int     drf_fail3:1;
unsigned int     drf_fail2:1;
unsigned int     drf_fail1:1;
unsigned int     drf_fail0:1;
unsigned int     drf_done:1;
}TP_DRF_ST;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     drf_test_resume:1;
unsigned int     drf_bist_en:1;
unsigned int     bist_en:1;
}TP_DRF;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     ls_4:1;
unsigned int     ls_3:1;
unsigned int     ls_2:1;
unsigned int     ls_1:1;
unsigned int     ls_0:1;
}TP_BIST_LS;

typedef struct 
{
unsigned int     reserved_0:13;
unsigned int     sec_body_info_en:1;
unsigned int     tp_err_fix_en:1;
unsigned int     strm_id_en:1;
unsigned int     buf_rdy_ctl:1;
unsigned int     psc_en:1;
unsigned int     pes_en:1;
unsigned int     tsc_en:1;
unsigned int     tb:1;
unsigned int     busy:1;
unsigned int     mode:1;
unsigned int     du_en:1;
unsigned int     de_en:1;
unsigned int     xt_en:1;
unsigned int     pid_en:1;
unsigned int     null_en:1;
unsigned int     trerr_en:1;
unsigned int     sync_en:1;
unsigned int     rst_en:1;
unsigned int     write_data:1;
}TP_TF0_CNTL;

typedef struct 
{
unsigned int     set3:8;
unsigned int     set2:8;
unsigned int     set1:8;
unsigned int     set0:8;
}TP_TF0_STRM_ID_0;

typedef struct 
{
unsigned int     set3:8;
unsigned int     set2:8;
unsigned int     set1:8;
unsigned int     set0:8;
}TP_TF0_STRM_ID_1;

typedef struct 
{
unsigned int     set3:8;
unsigned int     set2:8;
unsigned int     set1:8;
unsigned int     set0:8;
}TP_TF0_STRM_ID_2;

typedef struct 
{
unsigned int     set3:8;
unsigned int     set2:8;
unsigned int     set1:8;
unsigned int     set0:8;
}TP_TF0_STRM_ID_3;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     val_set33:1;
unsigned int     val_set32:1;
unsigned int     val_set31:1;
unsigned int     val_set30:1;
unsigned int     val_set23:1;
unsigned int     val_set22:1;
unsigned int     val_set21:1;
unsigned int     val_set20:1;
unsigned int     val_set13:1;
unsigned int     val_set12:1;
unsigned int     val_set11:1;
unsigned int     val_set10:1;
unsigned int     val_set03:1;
unsigned int     val_set02:1;
unsigned int     val_set01:1;
unsigned int     val_set00:1;
}TP_TF0_STRM_VAL;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     cnt:24;
}TP_TF0_CNT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     drp_cnt:16;
}TP_TF0_DRP_CNT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     err_cnt:16;
}TP_TF0_ERR_CNT;

typedef struct 
{
unsigned int     reserved_0:13;
unsigned int     sec_body_info_en:1;
unsigned int     tp_err_fix_en:1;
unsigned int     strm_id_en:1;
unsigned int     buf_rdy_ctl:1;
unsigned int     psc_en:1;
unsigned int     pes_en:1;
unsigned int     tsc_en:1;
unsigned int     tb:1;
unsigned int     busy:1;
unsigned int     mode:1;
unsigned int     du_en:1;
unsigned int     de_en:1;
unsigned int     xt_en:1;
unsigned int     pid_en:1;
unsigned int     null_en:1;
unsigned int     trerr_en:1;
unsigned int     sync_en:1;
unsigned int     rst_en:1;
unsigned int     write_data:1;
}TP_TF1_CNTL;

typedef struct 
{
unsigned int     set3:8;
unsigned int     set2:8;
unsigned int     set1:8;
unsigned int     set0:8;
}TP_TF1_STRM_ID_0;

typedef struct 
{
unsigned int     set3:8;
unsigned int     set2:8;
unsigned int     set1:8;
unsigned int     set0:8;
}TP_TF1_STRM_ID_1;

typedef struct 
{
unsigned int     set3:8;
unsigned int     set2:8;
unsigned int     set1:8;
unsigned int     set0:8;
}TP_TF1_STRM_ID_2;

typedef struct 
{
unsigned int     set3:8;
unsigned int     set2:8;
unsigned int     set1:8;
unsigned int     set0:8;
}TP_TF1_STRM_ID_3;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     val_set33:1;
unsigned int     val_set32:1;
unsigned int     val_set31:1;
unsigned int     val_set30:1;
unsigned int     val_set23:1;
unsigned int     val_set22:1;
unsigned int     val_set21:1;
unsigned int     val_set20:1;
unsigned int     val_set13:1;
unsigned int     val_set12:1;
unsigned int     val_set11:1;
unsigned int     val_set10:1;
unsigned int     val_set03:1;
unsigned int     val_set02:1;
unsigned int     val_set01:1;
unsigned int     val_set00:1;
}TP_TF1_STRM_VAL;

typedef struct 
{
unsigned int     pcr_90k_cnt:32;
}TP_PCR_90K_CNT;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     extra_func_ena:1;
unsigned int     reserved_1:1;
unsigned int     extra_pid_addr:7;
}TP0_PCR_CTL;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     extra_func_ena:1;
unsigned int     reserved_1:1;
unsigned int     extra_pid_addr:7;
}TP1_PCR_CTL;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     latch_ena:1;
unsigned int     reserved_1:6;
unsigned int     latch_sel:2;
}TP_PCR_LATCH;

typedef struct 
{
unsigned int     pcr_base_lo:32;
}TP_PCR_BASE;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     pcr_base_hi:1;
unsigned int     reserved_1:7;
unsigned int     pcr_ext:9;
}TP_PCR_EXT;

typedef struct 
{
unsigned int     system_ts:32;
}TP_PCR_SYSTEM;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     cnt:24;
}TP_TF1_CNT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     drp_cnt:16;
}TP_TF1_DRP_CNT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     err_cnt:16;
}TP_TF1_ERR_CNT;

typedef struct 
{
unsigned int     sync_byte:8;
unsigned int     dropno:4;
unsigned int     lockno:4;
unsigned int     packet_size:2;
unsigned int     data_order:1;
unsigned int     frm_en:1;
unsigned int     forcedrop:1;
unsigned int     syncmode:5;
unsigned int     serial:1;
unsigned int     datapin:1;
unsigned int     err_pol:1;
unsigned int     sync_pol:1;
unsigned int     val_pol:1;
unsigned int     clk_pol:1;
}TP_TF0_FRMCFG;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     adf_pcr_in:1;
unsigned int     overflow:1;
unsigned int     drop:1;
unsigned int     sync:1;
unsigned int     write_data:1;
}TP_TF0_INT;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     adf_pcr_in_en:1;
unsigned int     overflow_en:1;
unsigned int     drop_en:1;
unsigned int     sync_en:1;
unsigned int     write_data:1;
}TP_TF0_INT_EN;

typedef struct 
{
unsigned int     sync_byte:8;
unsigned int     dropno:4;
unsigned int     lockno:4;
unsigned int     packet_size:2;
unsigned int     data_order:1;
unsigned int     frm_en:1;
unsigned int     forcedrop:1;
unsigned int     syncmode:5;
unsigned int     serial:1;
unsigned int     datapin:1;
unsigned int     err_pol:1;
unsigned int     sync_pol:1;
unsigned int     val_pol:1;
unsigned int     clk_pol:1;
}TP_TF1_FRMCFG;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     adf_pcr_in:1;
unsigned int     overflow:1;
unsigned int     drop:1;
unsigned int     sync:1;
unsigned int     write_data:1;
}TP_TF1_INT;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     adf_pcr_in_en:1;
unsigned int     overflow_en:1;
unsigned int     drop_en:1;
unsigned int     sync_en:1;
unsigned int     write_data:1;
}TP_TF1_INT_EN;

typedef struct 
{
unsigned int     reserved_0:17;
unsigned int     partition2:7;
unsigned int     reserved_1:1;
unsigned int     partition1:7;
}TP_PID_PART;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     r_w:1;
unsigned int     idx:7;
}TP_PID_CTRL;

typedef struct 
{
unsigned int     si_en:1;
unsigned int     pid_ini:1;
unsigned int     ai_en:1;
unsigned int     ti_en:1;
unsigned int     sec_idx:6;
unsigned int     sec_en:1;
unsigned int     reversed:1;
unsigned int     ddr_q:5;
unsigned int     cc_en:1;
unsigned int     v:1;
unsigned int     pid:13;
}TP_PID_DATA;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     pre_des:1;
unsigned int     key:5;
unsigned int     reversed:2;
unsigned int     info_q:5;
}TP_PID_DATA2;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     r_w:1;
unsigned int     idx:6;
}TP_SEC_CTRL;

typedef struct 
{
unsigned int     filter_value_msb:32;
}TP_SEC_DATA0;

typedef struct 
{
unsigned int     filter_value_lsb:32;
}TP_SEC_DATA1;

typedef struct 
{
unsigned int     mask_value_msb:32;
}TP_SEC_DATA2;

typedef struct 
{
unsigned int     mask_value_lsb:32;
}TP_SEC_DATA3;

typedef struct 
{
unsigned int     reserved_0:18;
unsigned int     sp_filter:2;
unsigned int     sp_mask:2;
unsigned int     crc_en:1;
unsigned int     p_d:1;
unsigned int     p_n:1;
unsigned int     last:1;
unsigned int     next_sec:6;
}TP_SEC_DATA4;

typedef struct 
{
unsigned int     neg_filter_value_msb:32;
}TP_SEC_DATA5;

typedef struct 
{
unsigned int     neg_filter_value_lsb:32;
}TP_SEC_DATA6;

typedef struct 
{
unsigned int     neg_mask_value_msb:32;
}TP_SEC_DATA7;

typedef struct 
{
unsigned int     neg_mask_value_lsb:32;
}TP_SEC_DATA8;

typedef struct 
{
unsigned int     reserved_0:18;
unsigned int     neg_sp_filter:2;
unsigned int     neg_sp_mask:2;
unsigned int     reserved_1:8;
unsigned int     filter_sel:2;
}TP_SEC_DATA9;

typedef struct 
{
unsigned int     reserved_0:12;
unsigned int     ofb_mode:2;
unsigned int     csa_mode:2;
unsigned int     round:8;
unsigned int     multi2_mode:1;
unsigned int     map_11:1;
unsigned int     map_10:1;
unsigned int     map_01:1;
unsigned int     des_mode:1;
unsigned int     mode:3;
}TP_TP0_DES_CNTL;

typedef struct 
{
unsigned int     key_info:32;
}TP_KEY_INFO;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     r_w:1;
unsigned int     idx:7;
}TP_KEY_CTRL;

typedef struct 
{
unsigned int     reserved_0:12;
unsigned int     ofb_mode:2;
unsigned int     csa_mode:2;
unsigned int     round:8;
unsigned int     multi2_mode:1;
unsigned int     map_11:1;
unsigned int     map_10:1;
unsigned int     map_01:1;
unsigned int     des_mode:1;
unsigned int     mode:3;
}TP_TP1_DES_CNTL;

typedef struct 
{
unsigned int     crc_init:32;
}TP_CRC_INIT;

typedef struct 
{
unsigned int     reserved_0:3;
unsigned int     threshold:29;
}TP_THRESHOLD;

typedef struct 
{
unsigned int     reserved_0:3;
unsigned int     fullness:29;
}TP_FULLNESS;

typedef struct 
{
unsigned int     reserved_0:21;
unsigned int     wm:4;
unsigned int     r_w:1;
unsigned int     reserved_1:1;
unsigned int     idx:5;
}TP_RING_CTRL;

typedef struct 
{
unsigned int     ring_limit:29;
unsigned int     reserved_0:3;
}TP_RING_LIMIT;

typedef struct 
{
unsigned int     ring_base:29;
unsigned int     reserved_0:3;
}TP_RING_BASE;

typedef struct 
{
unsigned int     ring_rp:32;
}TP_RING_RP;

typedef struct 
{
unsigned int     ring_wp:32;
}TP_RING_WP;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     ring_avail_15:1;
unsigned int     ring_avail_14:1;
unsigned int     ring_avail_13:1;
unsigned int     ring_avail_12:1;
unsigned int     ring_avail_11:1;
unsigned int     ring_avail_10:1;
unsigned int     ring_avail_9:1;
unsigned int     ring_avail_8:1;
unsigned int     ring_avail_7:1;
unsigned int     ring_avail_6:1;
unsigned int     ring_avail_5:1;
unsigned int     ring_avail_4:1;
unsigned int     ring_avail_3:1;
unsigned int     ring_avail_2:1;
unsigned int     ring_avail_1:1;
unsigned int     ring_avail_0:1;
unsigned int     write_data:1;
}TP_RING_AVAIL_INT;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     ring_full_15:1;
unsigned int     ring_full_14:1;
unsigned int     ring_full_13:1;
unsigned int     ring_full_12:1;
unsigned int     ring_full_11:1;
unsigned int     ring_full_10:1;
unsigned int     ring_full_9:1;
unsigned int     ring_full_8:1;
unsigned int     ring_full_7:1;
unsigned int     ring_full_6:1;
unsigned int     ring_full_5:1;
unsigned int     ring_full_4:1;
unsigned int     ring_full_3:1;
unsigned int     ring_full_2:1;
unsigned int     ring_full_1:1;
unsigned int     ring_full_0:1;
unsigned int     write_data:1;
}TP_RING_FULL_INT;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     ring_avail_15_en:1;
unsigned int     ring_avail_14_en:1;
unsigned int     ring_avail_13_en:1;
unsigned int     ring_avail_12_en:1;
unsigned int     ring_avail_11_en:1;
unsigned int     ring_avail_10_en:1;
unsigned int     ring_avail_9_en:1;
unsigned int     ring_avail_8_en:1;
unsigned int     ring_avail_7_en:1;
unsigned int     ring_avail_6_en:1;
unsigned int     ring_avail_5_en:1;
unsigned int     ring_avail_4_en:1;
unsigned int     ring_avail_3_en:1;
unsigned int     ring_avail_2_en:1;
unsigned int     ring_avail_1_en:1;
unsigned int     ring_avail_0_en:1;
unsigned int     write_data:1;
}TP_RING_AVAIL_INT_EN;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     ring_full_15_en:1;
unsigned int     ring_full_14_en:1;
unsigned int     ring_full_13_en:1;
unsigned int     ring_full_12_en:1;
unsigned int     ring_full_11_en:1;
unsigned int     ring_full_10_en:1;
unsigned int     ring_full_9_en:1;
unsigned int     ring_full_8_en:1;
unsigned int     ring_full_7_en:1;
unsigned int     ring_full_6_en:1;
unsigned int     ring_full_5_en:1;
unsigned int     ring_full_4_en:1;
unsigned int     ring_full_3_en:1;
unsigned int     ring_full_2_en:1;
unsigned int     ring_full_1_en:1;
unsigned int     ring_full_0_en:1;
unsigned int     write_data:1;
}TP_RING_FULL_INT_EN;

typedef struct 
{
unsigned int     ring_limit:29;
unsigned int     reserved_0:3;
}TP_M2M_RING_LIMIT;

typedef struct 
{
unsigned int     ring_base:29;
unsigned int     reserved_0:3;
}TP_M2M_RING_BASE;

typedef struct 
{
unsigned int     ring_rp:32;
}TP_M2M_RING_RP;

typedef struct 
{
unsigned int     ring_wp:32;
}TP_M2M_RING_WP;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     empty:1;
unsigned int     empty_en:1;
unsigned int     stop:1;
unsigned int     go:1;
unsigned int     write_data:1;
}TP_M2M_RING_CTRL;

typedef struct 
{
unsigned int     sync_pos:32;
}TP_SYNC_POS;

typedef struct 
{
unsigned int     dmy:32;
}TP_DMY_A;

typedef struct 
{
unsigned int     dmy:32;
}TP_DMY_B;

typedef struct 
{
unsigned int     reserved_0:12;
unsigned int     pese_clk_gate_disable:1;
unsigned int     hdcp_clk_gate_disable:1;
unsigned int     ch1_clk_gate_disable:1;
unsigned int     ch0_clk_gate_disable:1;
unsigned int     reserved_1:15;
unsigned int     sb1_8byte_swap:1;
}TP_SWAP;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     dv_verify_only:1;
unsigned int     tp_sram_sleep_off:1;
unsigned int     tp_pkt_sram_addr_rst_sel:1;
unsigned int     dbg_mode:5;
}TP_DEBUG;

typedef struct 
{
unsigned int     hdcp_en0:1;
unsigned int     reserved_0:2;
unsigned int     pid0:13;
unsigned int     hdcp_en1:1;
unsigned int     reserved_1:2;
unsigned int     pid1:13;
}TP_HDCP_PID_01;

typedef struct 
{
unsigned int     hdcp_en2:1;
unsigned int     reserved_0:2;
unsigned int     pid2:13;
unsigned int     hdcp_en3:1;
unsigned int     reserved_1:2;
unsigned int     pid3:13;
}TP_HDCP_PID_23;

typedef struct 
{
unsigned int     riv0_h:32;
}TP_HDCP_RIV0_0;

typedef struct 
{
unsigned int     riv0_l:32;
}TP_HDCP_RIV0_1;

typedef struct 
{
unsigned int     riv1_h:32;
}TP_HDCP_RIV1_0;

typedef struct 
{
unsigned int     riv1_l:32;
}TP_HDCP_RIV1_1;

typedef struct 
{
unsigned int     riv2_h:32;
}TP_HDCP_RIV2_0;

typedef struct 
{
unsigned int     riv2_l:32;
}TP_HDCP_RIV2_1;

typedef struct 
{
unsigned int     riv3_h:32;
}TP_HDCP_RIV3_0;

typedef struct 
{
unsigned int     riv3_l:32;
}TP_HDCP_RIV3_1;

typedef struct 
{
unsigned int     ks0_hh:32;
}TP_HDCP_KS0_0;

typedef struct 
{
unsigned int     ks0_hl:32;
}TP_HDCP_KS0_1;

typedef struct 
{
unsigned int     ks0_lh:32;
}TP_HDCP_KS0_2;

typedef struct 
{
unsigned int     ks0_ll:32;
}TP_HDCP_KS0_3;

typedef struct 
{
unsigned int     ks1_hh:32;
}TP_HDCP_KS1_0;

typedef struct 
{
unsigned int     ks1_hl:32;
}TP_HDCP_KS1_1;

typedef struct 
{
unsigned int     ks1_lh:32;
}TP_HDCP_KS1_2;

typedef struct 
{
unsigned int     ks1_ll:32;
}TP_HDCP_KS1_3;

typedef struct 
{
unsigned int     ks2_hh:32;
}TP_HDCP_KS2_0;

typedef struct 
{
unsigned int     ks2_hl:32;
}TP_HDCP_KS2_1;

typedef struct 
{
unsigned int     ks2_lh:32;
}TP_HDCP_KS2_2;

typedef struct 
{
unsigned int     ks2_ll:32;
}TP_HDCP_KS2_3;

typedef struct 
{
unsigned int     ks3_hh:32;
}TP_HDCP_KS3_0;

typedef struct 
{
unsigned int     ks3_hl:32;
}TP_HDCP_KS3_1;

typedef struct 
{
unsigned int     ks3_lh:32;
}TP_HDCP_KS3_2;

typedef struct 
{
unsigned int     ks3_ll:32;
}TP_HDCP_KS3_3;

typedef struct 
{
unsigned int     hdcp_en4:1;
unsigned int     reserved_0:2;
unsigned int     pid4:13;
unsigned int     hdcp_en5:1;
unsigned int     reserved_1:2;
unsigned int     pid5:13;
}TP_HDCP_PID_45;

typedef struct 
{
unsigned int     hdcp_en6:1;
unsigned int     reserved_0:2;
unsigned int     pid6:13;
unsigned int     hdcp_en7:1;
unsigned int     reserved_1:2;
unsigned int     pid7:13;
}TP_HDCP_PID_67;

typedef struct 
{
unsigned int     riv4_h:32;
}TP_HDCP_RIV4_0;

typedef struct 
{
unsigned int     riv4_l:32;
}TP_HDCP_RIV4_1;

typedef struct 
{
unsigned int     riv5_h:32;
}TP_HDCP_RIV5_0;

typedef struct 
{
unsigned int     riv5_l:32;
}TP_HDCP_RIV5_1;

typedef struct 
{
unsigned int     riv6_h:32;
}TP_HDCP_RIV6_0;

typedef struct 
{
unsigned int     riv6_l:32;
}TP_HDCP_RIV6_1;

typedef struct 
{
unsigned int     riv7_h:32;
}TP_HDCP_RIV7_0;

typedef struct 
{
unsigned int     riv7_l:32;
}TP_HDCP_RIV7_1;

typedef struct 
{
unsigned int     ks4_hh:32;
}TP_HDCP_KS4_0;

typedef struct 
{
unsigned int     ks4_hl:32;
}TP_HDCP_KS4_1;

typedef struct 
{
unsigned int     ks4_lh:32;
}TP_HDCP_KS4_2;

typedef struct 
{
unsigned int     ks4_ll:32;
}TP_HDCP_KS4_3;

typedef struct 
{
unsigned int     ks5_hh:32;
}TP_HDCP_KS5_0;

typedef struct 
{
unsigned int     ks5_hl:32;
}TP_HDCP_KS5_1;

typedef struct 
{
unsigned int     ks5_lh:32;
}TP_HDCP_KS5_2;

typedef struct 
{
unsigned int     ks5_ll:32;
}TP_HDCP_KS5_3;

typedef struct 
{
unsigned int     ks6_hh:32;
}TP_HDCP_KS6_0;

typedef struct 
{
unsigned int     ks6_hl:32;
}TP_HDCP_KS6_1;

typedef struct 
{
unsigned int     ks6_lh:32;
}TP_HDCP_KS6_2;

typedef struct 
{
unsigned int     ks6_ll:32;
}TP_HDCP_KS6_3;

typedef struct 
{
unsigned int     ks7_hh:32;
}TP_HDCP_KS7_0;

typedef struct 
{
unsigned int     ks7_hl:32;
}TP_HDCP_KS7_1;

typedef struct 
{
unsigned int     ks7_lh:32;
}TP_HDCP_KS7_2;

typedef struct 
{
unsigned int     ks7_ll:32;
}TP_HDCP_KS7_3;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_0;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_1;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_2;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_3;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_4;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_5;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_6;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_7;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_8;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_9;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_A;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_B;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_C;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_D;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_E;

typedef struct 
{
unsigned int     pese_en:1;
unsigned int     reserved_0:5;
unsigned int     pese_ddrq:5;
unsigned int     pese_infoq:5;
unsigned int     reserved_1:1;
unsigned int     pese_type:2;
unsigned int     pese_pid:13;
}TP_PES_EXTRC_F;

typedef struct 
{
unsigned int     to_value:32;
}TP_PESE_TO0;

typedef struct 
{
unsigned int     to_value:32;
}TP_PESE_TO1;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     pes_cnt:24;
}TP_TF0_PES_CNT;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     pes_cnt:24;
}TP_TF1_PES_CNT;

#endif

#define TP_BIST_RM                                                                   0x98014670
#define TP_BIST_RM_reg_addr                                                          "0xD8014670"
#define TP_BIST_RM_reg                                                               0xD8014670
#define set_TP_BIST_RM_reg(data)   (*((volatile unsigned int*) TP_BIST_RM_reg)=data)
#define get_TP_BIST_RM_reg   (*((volatile unsigned int*) TP_BIST_RM_reg))
#define TP_BIST_RM_inst_adr                                                          "0x009C"
#define TP_BIST_RM_inst                                                              0x009C
#define TP_BIST_RM_dvse_shift                                                        (4)
#define TP_BIST_RM_dvse_mask                                                         (0x00000010)
#define TP_BIST_RM_dvse(data)                                                        (0x00000010&((data)<<4))
#define TP_BIST_RM_dvse_src(data)                                                    ((0x00000010&(data))>>4)
#define TP_BIST_RM_get_dvse(data)                                                    ((0x00000010&(data))>>4)
#define TP_BIST_RM_dvs_3_shift                                                       (3)
#define TP_BIST_RM_dvs_3_mask                                                        (0x00000008)
#define TP_BIST_RM_dvs_3(data)                                                       (0x00000008&((data)<<3))
#define TP_BIST_RM_dvs_3_src(data)                                                   ((0x00000008&(data))>>3)
#define TP_BIST_RM_get_dvs_3(data)                                                   ((0x00000008&(data))>>3)
#define TP_BIST_RM_dvs_2_shift                                                       (2)
#define TP_BIST_RM_dvs_2_mask                                                        (0x00000004)
#define TP_BIST_RM_dvs_2(data)                                                       (0x00000004&((data)<<2))
#define TP_BIST_RM_dvs_2_src(data)                                                   ((0x00000004&(data))>>2)
#define TP_BIST_RM_get_dvs_2(data)                                                   ((0x00000004&(data))>>2)
#define TP_BIST_RM_dvs_1_shift                                                       (1)
#define TP_BIST_RM_dvs_1_mask                                                        (0x00000002)
#define TP_BIST_RM_dvs_1(data)                                                       (0x00000002&((data)<<1))
#define TP_BIST_RM_dvs_1_src(data)                                                   ((0x00000002&(data))>>1)
#define TP_BIST_RM_get_dvs_1(data)                                                   ((0x00000002&(data))>>1)
#define TP_BIST_RM_dvs_0_shift                                                       (0)
#define TP_BIST_RM_dvs_0_mask                                                        (0x00000001)
#define TP_BIST_RM_dvs_0(data)                                                       (0x00000001&((data)<<0))
#define TP_BIST_RM_dvs_0_src(data)                                                   ((0x00000001&(data))>>0)
#define TP_BIST_RM_get_dvs_0(data)                                                   ((0x00000001&(data))>>0)


#define TP_BIST_ST                                                                   0x98014674
#define TP_BIST_ST_reg_addr                                                          "0xD8014674"
#define TP_BIST_ST_reg                                                               0xD8014674
#define set_TP_BIST_ST_reg(data)   (*((volatile unsigned int*) TP_BIST_ST_reg)=data)
#define get_TP_BIST_ST_reg   (*((volatile unsigned int*) TP_BIST_ST_reg))
#define TP_BIST_ST_inst_adr                                                          "0x009D"
#define TP_BIST_ST_inst                                                              0x009D
#define TP_BIST_ST_bist_fail5_shift                                                  (6)
#define TP_BIST_ST_bist_fail5_mask                                                   (0x00000040)
#define TP_BIST_ST_bist_fail5(data)                                                  (0x00000040&((data)<<6))
#define TP_BIST_ST_bist_fail5_src(data)                                              ((0x00000040&(data))>>6)
#define TP_BIST_ST_get_bist_fail5(data)                                              ((0x00000040&(data))>>6)
#define TP_BIST_ST_bist_fail4_shift                                                  (5)
#define TP_BIST_ST_bist_fail4_mask                                                   (0x00000020)
#define TP_BIST_ST_bist_fail4(data)                                                  (0x00000020&((data)<<5))
#define TP_BIST_ST_bist_fail4_src(data)                                              ((0x00000020&(data))>>5)
#define TP_BIST_ST_get_bist_fail4(data)                                              ((0x00000020&(data))>>5)
#define TP_BIST_ST_bist_fail3_shift                                                  (4)
#define TP_BIST_ST_bist_fail3_mask                                                   (0x00000010)
#define TP_BIST_ST_bist_fail3(data)                                                  (0x00000010&((data)<<4))
#define TP_BIST_ST_bist_fail3_src(data)                                              ((0x00000010&(data))>>4)
#define TP_BIST_ST_get_bist_fail3(data)                                              ((0x00000010&(data))>>4)
#define TP_BIST_ST_bist_fail2_shift                                                  (3)
#define TP_BIST_ST_bist_fail2_mask                                                   (0x00000008)
#define TP_BIST_ST_bist_fail2(data)                                                  (0x00000008&((data)<<3))
#define TP_BIST_ST_bist_fail2_src(data)                                              ((0x00000008&(data))>>3)
#define TP_BIST_ST_get_bist_fail2(data)                                              ((0x00000008&(data))>>3)
#define TP_BIST_ST_bist_fail1_shift                                                  (2)
#define TP_BIST_ST_bist_fail1_mask                                                   (0x00000004)
#define TP_BIST_ST_bist_fail1(data)                                                  (0x00000004&((data)<<2))
#define TP_BIST_ST_bist_fail1_src(data)                                              ((0x00000004&(data))>>2)
#define TP_BIST_ST_get_bist_fail1(data)                                              ((0x00000004&(data))>>2)
#define TP_BIST_ST_bist_fail0_shift                                                  (1)
#define TP_BIST_ST_bist_fail0_mask                                                   (0x00000002)
#define TP_BIST_ST_bist_fail0(data)                                                  (0x00000002&((data)<<1))
#define TP_BIST_ST_bist_fail0_src(data)                                              ((0x00000002&(data))>>1)
#define TP_BIST_ST_get_bist_fail0(data)                                              ((0x00000002&(data))>>1)
#define TP_BIST_ST_bist_done_shift                                                   (0)
#define TP_BIST_ST_bist_done_mask                                                    (0x00000001)
#define TP_BIST_ST_bist_done(data)                                                   (0x00000001&((data)<<0))
#define TP_BIST_ST_bist_done_src(data)                                               ((0x00000001&(data))>>0)
#define TP_BIST_ST_get_bist_done(data)                                               ((0x00000001&(data))>>0)


#define TP_DRF_ST                                                                    0x98014678
#define TP_DRF_ST_reg_addr                                                           "0xD8014678"
#define TP_DRF_ST_reg                                                                0xD8014678
#define set_TP_DRF_ST_reg(data)   (*((volatile unsigned int*) TP_DRF_ST_reg)=data)
#define get_TP_DRF_ST_reg   (*((volatile unsigned int*) TP_DRF_ST_reg))
#define TP_DRF_ST_inst_adr                                                           "0x009E"
#define TP_DRF_ST_inst                                                               0x009E
#define TP_DRF_ST_drf_start_pause_shift                                              (16)
#define TP_DRF_ST_drf_start_pause_mask                                               (0x00010000)
#define TP_DRF_ST_drf_start_pause(data)                                              (0x00010000&((data)<<16))
#define TP_DRF_ST_drf_start_pause_src(data)                                          ((0x00010000&(data))>>16)
#define TP_DRF_ST_get_drf_start_pause(data)                                          ((0x00010000&(data))>>16)
#define TP_DRF_ST_drf_fail5_shift                                                    (6)
#define TP_DRF_ST_drf_fail5_mask                                                     (0x00000040)
#define TP_DRF_ST_drf_fail5(data)                                                    (0x00000040&((data)<<6))
#define TP_DRF_ST_drf_fail5_src(data)                                                ((0x00000040&(data))>>6)
#define TP_DRF_ST_get_drf_fail5(data)                                                ((0x00000040&(data))>>6)
#define TP_DRF_ST_drf_fail4_shift                                                    (5)
#define TP_DRF_ST_drf_fail4_mask                                                     (0x00000020)
#define TP_DRF_ST_drf_fail4(data)                                                    (0x00000020&((data)<<5))
#define TP_DRF_ST_drf_fail4_src(data)                                                ((0x00000020&(data))>>5)
#define TP_DRF_ST_get_drf_fail4(data)                                                ((0x00000020&(data))>>5)
#define TP_DRF_ST_drf_fail3_shift                                                    (4)
#define TP_DRF_ST_drf_fail3_mask                                                     (0x00000010)
#define TP_DRF_ST_drf_fail3(data)                                                    (0x00000010&((data)<<4))
#define TP_DRF_ST_drf_fail3_src(data)                                                ((0x00000010&(data))>>4)
#define TP_DRF_ST_get_drf_fail3(data)                                                ((0x00000010&(data))>>4)
#define TP_DRF_ST_drf_fail2_shift                                                    (3)
#define TP_DRF_ST_drf_fail2_mask                                                     (0x00000008)
#define TP_DRF_ST_drf_fail2(data)                                                    (0x00000008&((data)<<3))
#define TP_DRF_ST_drf_fail2_src(data)                                                ((0x00000008&(data))>>3)
#define TP_DRF_ST_get_drf_fail2(data)                                                ((0x00000008&(data))>>3)
#define TP_DRF_ST_drf_fail1_shift                                                    (2)
#define TP_DRF_ST_drf_fail1_mask                                                     (0x00000004)
#define TP_DRF_ST_drf_fail1(data)                                                    (0x00000004&((data)<<2))
#define TP_DRF_ST_drf_fail1_src(data)                                                ((0x00000004&(data))>>2)
#define TP_DRF_ST_get_drf_fail1(data)                                                ((0x00000004&(data))>>2)
#define TP_DRF_ST_drf_fail0_shift                                                    (1)
#define TP_DRF_ST_drf_fail0_mask                                                     (0x00000002)
#define TP_DRF_ST_drf_fail0(data)                                                    (0x00000002&((data)<<1))
#define TP_DRF_ST_drf_fail0_src(data)                                                ((0x00000002&(data))>>1)
#define TP_DRF_ST_get_drf_fail0(data)                                                ((0x00000002&(data))>>1)
#define TP_DRF_ST_drf_done_shift                                                     (0)
#define TP_DRF_ST_drf_done_mask                                                      (0x00000001)
#define TP_DRF_ST_drf_done(data)                                                     (0x00000001&((data)<<0))
#define TP_DRF_ST_drf_done_src(data)                                                 ((0x00000001&(data))>>0)
#define TP_DRF_ST_get_drf_done(data)                                                 ((0x00000001&(data))>>0)


#define TP_DRF                                                                       0x9801467c
#define TP_DRF_reg_addr                                                              "0xD801467C"
#define TP_DRF_reg                                                                   0xD801467C
#define set_TP_DRF_reg(data)   (*((volatile unsigned int*) TP_DRF_reg)=data)
#define get_TP_DRF_reg   (*((volatile unsigned int*) TP_DRF_reg))
#define TP_DRF_inst_adr                                                              "0x009F"
#define TP_DRF_inst                                                                  0x009F
#define TP_DRF_drf_test_resume_shift                                                 (2)
#define TP_DRF_drf_test_resume_mask                                                  (0x00000004)
#define TP_DRF_drf_test_resume(data)                                                 (0x00000004&((data)<<2))
#define TP_DRF_drf_test_resume_src(data)                                             ((0x00000004&(data))>>2)
#define TP_DRF_get_drf_test_resume(data)                                             ((0x00000004&(data))>>2)
#define TP_DRF_drf_bist_en_shift                                                     (1)
#define TP_DRF_drf_bist_en_mask                                                      (0x00000002)
#define TP_DRF_drf_bist_en(data)                                                     (0x00000002&((data)<<1))
#define TP_DRF_drf_bist_en_src(data)                                                 ((0x00000002&(data))>>1)
#define TP_DRF_get_drf_bist_en(data)                                                 ((0x00000002&(data))>>1)
#define TP_DRF_bist_en_shift                                                         (0)
#define TP_DRF_bist_en_mask                                                          (0x00000001)
#define TP_DRF_bist_en(data)                                                         (0x00000001&((data)<<0))
#define TP_DRF_bist_en_src(data)                                                     ((0x00000001&(data))>>0)
#define TP_DRF_get_bist_en(data)                                                     ((0x00000001&(data))>>0)


#define TP_BIST_LS                                                                   0x98014680
#define TP_BIST_LS_reg_addr                                                          "0xD8014680"
#define TP_BIST_LS_reg                                                               0xD8014680
#define set_TP_BIST_LS_reg(data)   (*((volatile unsigned int*) TP_BIST_LS_reg)=data)
#define get_TP_BIST_LS_reg   (*((volatile unsigned int*) TP_BIST_LS_reg))
#define TP_BIST_LS_inst_adr                                                          "0x00A0"
#define TP_BIST_LS_inst                                                              0x00A0
#define TP_BIST_LS_ls_4_shift                                                        (4)
#define TP_BIST_LS_ls_4_mask                                                         (0x00000010)
#define TP_BIST_LS_ls_4(data)                                                        (0x00000010&((data)<<4))
#define TP_BIST_LS_ls_4_src(data)                                                    ((0x00000010&(data))>>4)
#define TP_BIST_LS_get_ls_4(data)                                                    ((0x00000010&(data))>>4)
#define TP_BIST_LS_ls_3_shift                                                        (3)
#define TP_BIST_LS_ls_3_mask                                                         (0x00000008)
#define TP_BIST_LS_ls_3(data)                                                        (0x00000008&((data)<<3))
#define TP_BIST_LS_ls_3_src(data)                                                    ((0x00000008&(data))>>3)
#define TP_BIST_LS_get_ls_3(data)                                                    ((0x00000008&(data))>>3)
#define TP_BIST_LS_ls_2_shift                                                        (2)
#define TP_BIST_LS_ls_2_mask                                                         (0x00000004)
#define TP_BIST_LS_ls_2(data)                                                        (0x00000004&((data)<<2))
#define TP_BIST_LS_ls_2_src(data)                                                    ((0x00000004&(data))>>2)
#define TP_BIST_LS_get_ls_2(data)                                                    ((0x00000004&(data))>>2)
#define TP_BIST_LS_ls_1_shift                                                        (1)
#define TP_BIST_LS_ls_1_mask                                                         (0x00000002)
#define TP_BIST_LS_ls_1(data)                                                        (0x00000002&((data)<<1))
#define TP_BIST_LS_ls_1_src(data)                                                    ((0x00000002&(data))>>1)
#define TP_BIST_LS_get_ls_1(data)                                                    ((0x00000002&(data))>>1)
#define TP_BIST_LS_ls_0_shift                                                        (0)
#define TP_BIST_LS_ls_0_mask                                                         (0x00000001)
#define TP_BIST_LS_ls_0(data)                                                        (0x00000001&((data)<<0))
#define TP_BIST_LS_ls_0_src(data)                                                    ((0x00000001&(data))>>0)
#define TP_BIST_LS_get_ls_0(data)                                                    ((0x00000001&(data))>>0)


#define TP_TF0_CNTL                                                                  0x98014000
#define TP_TF0_CNTL_reg_addr                                                         "0xD8014000"
#define TP_TF0_CNTL_reg                                                              0xD8014000
#define set_TP_TF0_CNTL_reg(data)   (*((volatile unsigned int*) TP_TF0_CNTL_reg)=data)
#define get_TP_TF0_CNTL_reg   (*((volatile unsigned int*) TP_TF0_CNTL_reg))
#define TP_TF0_CNTL_inst_adr                                                         "0x0000"
#define TP_TF0_CNTL_inst                                                             0x0000
#define TP_TF0_CNTL_sec_body_info_en_shift                                           (18)
#define TP_TF0_CNTL_sec_body_info_en_mask                                            (0x00040000)
#define TP_TF0_CNTL_sec_body_info_en(data)                                           (0x00040000&((data)<<18))
#define TP_TF0_CNTL_sec_body_info_en_src(data)                                       ((0x00040000&(data))>>18)
#define TP_TF0_CNTL_get_sec_body_info_en(data)                                       ((0x00040000&(data))>>18)
#define TP_TF0_CNTL_tp_err_fix_en_shift                                              (17)
#define TP_TF0_CNTL_tp_err_fix_en_mask                                               (0x00020000)
#define TP_TF0_CNTL_tp_err_fix_en(data)                                              (0x00020000&((data)<<17))
#define TP_TF0_CNTL_tp_err_fix_en_src(data)                                          ((0x00020000&(data))>>17)
#define TP_TF0_CNTL_get_tp_err_fix_en(data)                                          ((0x00020000&(data))>>17)
#define TP_TF0_CNTL_strm_id_en_shift                                                 (16)
#define TP_TF0_CNTL_strm_id_en_mask                                                  (0x00010000)
#define TP_TF0_CNTL_strm_id_en(data)                                                 (0x00010000&((data)<<16))
#define TP_TF0_CNTL_strm_id_en_src(data)                                             ((0x00010000&(data))>>16)
#define TP_TF0_CNTL_get_strm_id_en(data)                                             ((0x00010000&(data))>>16)
#define TP_TF0_CNTL_buf_rdy_ctl_shift                                                (15)
#define TP_TF0_CNTL_buf_rdy_ctl_mask                                                 (0x00008000)
#define TP_TF0_CNTL_buf_rdy_ctl(data)                                                (0x00008000&((data)<<15))
#define TP_TF0_CNTL_buf_rdy_ctl_src(data)                                            ((0x00008000&(data))>>15)
#define TP_TF0_CNTL_get_buf_rdy_ctl(data)                                            ((0x00008000&(data))>>15)
#define TP_TF0_CNTL_psc_en_shift                                                     (14)
#define TP_TF0_CNTL_psc_en_mask                                                      (0x00004000)
#define TP_TF0_CNTL_psc_en(data)                                                     (0x00004000&((data)<<14))
#define TP_TF0_CNTL_psc_en_src(data)                                                 ((0x00004000&(data))>>14)
#define TP_TF0_CNTL_get_psc_en(data)                                                 ((0x00004000&(data))>>14)
#define TP_TF0_CNTL_pes_en_shift                                                     (13)
#define TP_TF0_CNTL_pes_en_mask                                                      (0x00002000)
#define TP_TF0_CNTL_pes_en(data)                                                     (0x00002000&((data)<<13))
#define TP_TF0_CNTL_pes_en_src(data)                                                 ((0x00002000&(data))>>13)
#define TP_TF0_CNTL_get_pes_en(data)                                                 ((0x00002000&(data))>>13)
#define TP_TF0_CNTL_tsc_en_shift                                                     (12)
#define TP_TF0_CNTL_tsc_en_mask                                                      (0x00001000)
#define TP_TF0_CNTL_tsc_en(data)                                                     (0x00001000&((data)<<12))
#define TP_TF0_CNTL_tsc_en_src(data)                                                 ((0x00001000&(data))>>12)
#define TP_TF0_CNTL_get_tsc_en(data)                                                 ((0x00001000&(data))>>12)
#define TP_TF0_CNTL_tb_shift                                                         (11)
#define TP_TF0_CNTL_tb_mask                                                          (0x00000800)
#define TP_TF0_CNTL_tb(data)                                                         (0x00000800&((data)<<11))
#define TP_TF0_CNTL_tb_src(data)                                                     ((0x00000800&(data))>>11)
#define TP_TF0_CNTL_get_tb(data)                                                     ((0x00000800&(data))>>11)
#define TP_TF0_CNTL_busy_shift                                                       (10)
#define TP_TF0_CNTL_busy_mask                                                        (0x00000400)
#define TP_TF0_CNTL_busy(data)                                                       (0x00000400&((data)<<10))
#define TP_TF0_CNTL_busy_src(data)                                                   ((0x00000400&(data))>>10)
#define TP_TF0_CNTL_get_busy(data)                                                   ((0x00000400&(data))>>10)
#define TP_TF0_CNTL_mode_shift                                                       (9)
#define TP_TF0_CNTL_mode_mask                                                        (0x00000200)
#define TP_TF0_CNTL_mode(data)                                                       (0x00000200&((data)<<9))
#define TP_TF0_CNTL_mode_src(data)                                                   ((0x00000200&(data))>>9)
#define TP_TF0_CNTL_get_mode(data)                                                   ((0x00000200&(data))>>9)
#define TP_TF0_CNTL_du_en_shift                                                      (8)
#define TP_TF0_CNTL_du_en_mask                                                       (0x00000100)
#define TP_TF0_CNTL_du_en(data)                                                      (0x00000100&((data)<<8))
#define TP_TF0_CNTL_du_en_src(data)                                                  ((0x00000100&(data))>>8)
#define TP_TF0_CNTL_get_du_en(data)                                                  ((0x00000100&(data))>>8)
#define TP_TF0_CNTL_de_en_shift                                                      (7)
#define TP_TF0_CNTL_de_en_mask                                                       (0x00000080)
#define TP_TF0_CNTL_de_en(data)                                                      (0x00000080&((data)<<7))
#define TP_TF0_CNTL_de_en_src(data)                                                  ((0x00000080&(data))>>7)
#define TP_TF0_CNTL_get_de_en(data)                                                  ((0x00000080&(data))>>7)
#define TP_TF0_CNTL_xt_en_shift                                                      (6)
#define TP_TF0_CNTL_xt_en_mask                                                       (0x00000040)
#define TP_TF0_CNTL_xt_en(data)                                                      (0x00000040&((data)<<6))
#define TP_TF0_CNTL_xt_en_src(data)                                                  ((0x00000040&(data))>>6)
#define TP_TF0_CNTL_get_xt_en(data)                                                  ((0x00000040&(data))>>6)
#define TP_TF0_CNTL_pid_en_shift                                                     (5)
#define TP_TF0_CNTL_pid_en_mask                                                      (0x00000020)
#define TP_TF0_CNTL_pid_en(data)                                                     (0x00000020&((data)<<5))
#define TP_TF0_CNTL_pid_en_src(data)                                                 ((0x00000020&(data))>>5)
#define TP_TF0_CNTL_get_pid_en(data)                                                 ((0x00000020&(data))>>5)
#define TP_TF0_CNTL_null_en_shift                                                    (4)
#define TP_TF0_CNTL_null_en_mask                                                     (0x00000010)
#define TP_TF0_CNTL_null_en(data)                                                    (0x00000010&((data)<<4))
#define TP_TF0_CNTL_null_en_src(data)                                                ((0x00000010&(data))>>4)
#define TP_TF0_CNTL_get_null_en(data)                                                ((0x00000010&(data))>>4)
#define TP_TF0_CNTL_trerr_en_shift                                                   (3)
#define TP_TF0_CNTL_trerr_en_mask                                                    (0x00000008)
#define TP_TF0_CNTL_trerr_en(data)                                                   (0x00000008&((data)<<3))
#define TP_TF0_CNTL_trerr_en_src(data)                                               ((0x00000008&(data))>>3)
#define TP_TF0_CNTL_get_trerr_en(data)                                               ((0x00000008&(data))>>3)
#define TP_TF0_CNTL_sync_en_shift                                                    (2)
#define TP_TF0_CNTL_sync_en_mask                                                     (0x00000004)
#define TP_TF0_CNTL_sync_en(data)                                                    (0x00000004&((data)<<2))
#define TP_TF0_CNTL_sync_en_src(data)                                                ((0x00000004&(data))>>2)
#define TP_TF0_CNTL_get_sync_en(data)                                                ((0x00000004&(data))>>2)
#define TP_TF0_CNTL_rst_en_shift                                                     (1)
#define TP_TF0_CNTL_rst_en_mask                                                      (0x00000002)
#define TP_TF0_CNTL_rst_en(data)                                                     (0x00000002&((data)<<1))
#define TP_TF0_CNTL_rst_en_src(data)                                                 ((0x00000002&(data))>>1)
#define TP_TF0_CNTL_get_rst_en(data)                                                 ((0x00000002&(data))>>1)
#define TP_TF0_CNTL_write_data_shift                                                 (0)
#define TP_TF0_CNTL_write_data_mask                                                  (0x00000001)
#define TP_TF0_CNTL_write_data(data)                                                 (0x00000001&((data)<<0))
#define TP_TF0_CNTL_write_data_src(data)                                             ((0x00000001&(data))>>0)
#define TP_TF0_CNTL_get_write_data(data)                                             ((0x00000001&(data))>>0)


#define TP_TF0_STRM_ID_0                                                             0x98014208
#define TP_TF0_STRM_ID_0_reg_addr                                                    "0xD8014208"
#define TP_TF0_STRM_ID_0_reg                                                         0xD8014208
#define set_TP_TF0_STRM_ID_0_reg(data)   (*((volatile unsigned int*) TP_TF0_STRM_ID_0_reg)=data)
#define get_TP_TF0_STRM_ID_0_reg   (*((volatile unsigned int*) TP_TF0_STRM_ID_0_reg))
#define TP_TF0_STRM_ID_0_inst_adr                                                    "0x0082"
#define TP_TF0_STRM_ID_0_inst                                                        0x0082
#define TP_TF0_STRM_ID_0_set3_shift                                                  (24)
#define TP_TF0_STRM_ID_0_set3_mask                                                   (0xFF000000)
#define TP_TF0_STRM_ID_0_set3(data)                                                  (0xFF000000&((data)<<24))
#define TP_TF0_STRM_ID_0_set3_src(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF0_STRM_ID_0_get_set3(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF0_STRM_ID_0_set2_shift                                                  (16)
#define TP_TF0_STRM_ID_0_set2_mask                                                   (0x00FF0000)
#define TP_TF0_STRM_ID_0_set2(data)                                                  (0x00FF0000&((data)<<16))
#define TP_TF0_STRM_ID_0_set2_src(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF0_STRM_ID_0_get_set2(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF0_STRM_ID_0_set1_shift                                                  (8)
#define TP_TF0_STRM_ID_0_set1_mask                                                   (0x0000FF00)
#define TP_TF0_STRM_ID_0_set1(data)                                                  (0x0000FF00&((data)<<8))
#define TP_TF0_STRM_ID_0_set1_src(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF0_STRM_ID_0_get_set1(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF0_STRM_ID_0_set0_shift                                                  (0)
#define TP_TF0_STRM_ID_0_set0_mask                                                   (0x000000FF)
#define TP_TF0_STRM_ID_0_set0(data)                                                  (0x000000FF&((data)<<0))
#define TP_TF0_STRM_ID_0_set0_src(data)                                              ((0x000000FF&(data))>>0)
#define TP_TF0_STRM_ID_0_get_set0(data)                                              ((0x000000FF&(data))>>0)


#define TP_TF0_STRM_ID_1                                                             0x9801420c
#define TP_TF0_STRM_ID_1_reg_addr                                                    "0xD801420C"
#define TP_TF0_STRM_ID_1_reg                                                         0xD801420C
#define set_TP_TF0_STRM_ID_1_reg(data)   (*((volatile unsigned int*) TP_TF0_STRM_ID_1_reg)=data)
#define get_TP_TF0_STRM_ID_1_reg   (*((volatile unsigned int*) TP_TF0_STRM_ID_1_reg))
#define TP_TF0_STRM_ID_1_inst_adr                                                    "0x0083"
#define TP_TF0_STRM_ID_1_inst                                                        0x0083
#define TP_TF0_STRM_ID_1_set3_shift                                                  (24)
#define TP_TF0_STRM_ID_1_set3_mask                                                   (0xFF000000)
#define TP_TF0_STRM_ID_1_set3(data)                                                  (0xFF000000&((data)<<24))
#define TP_TF0_STRM_ID_1_set3_src(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF0_STRM_ID_1_get_set3(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF0_STRM_ID_1_set2_shift                                                  (16)
#define TP_TF0_STRM_ID_1_set2_mask                                                   (0x00FF0000)
#define TP_TF0_STRM_ID_1_set2(data)                                                  (0x00FF0000&((data)<<16))
#define TP_TF0_STRM_ID_1_set2_src(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF0_STRM_ID_1_get_set2(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF0_STRM_ID_1_set1_shift                                                  (8)
#define TP_TF0_STRM_ID_1_set1_mask                                                   (0x0000FF00)
#define TP_TF0_STRM_ID_1_set1(data)                                                  (0x0000FF00&((data)<<8))
#define TP_TF0_STRM_ID_1_set1_src(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF0_STRM_ID_1_get_set1(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF0_STRM_ID_1_set0_shift                                                  (0)
#define TP_TF0_STRM_ID_1_set0_mask                                                   (0x000000FF)
#define TP_TF0_STRM_ID_1_set0(data)                                                  (0x000000FF&((data)<<0))
#define TP_TF0_STRM_ID_1_set0_src(data)                                              ((0x000000FF&(data))>>0)
#define TP_TF0_STRM_ID_1_get_set0(data)                                              ((0x000000FF&(data))>>0)


#define TP_TF0_STRM_ID_2                                                             0x98014210
#define TP_TF0_STRM_ID_2_reg_addr                                                    "0xD8014210"
#define TP_TF0_STRM_ID_2_reg                                                         0xD8014210
#define set_TP_TF0_STRM_ID_2_reg(data)   (*((volatile unsigned int*) TP_TF0_STRM_ID_2_reg)=data)
#define get_TP_TF0_STRM_ID_2_reg   (*((volatile unsigned int*) TP_TF0_STRM_ID_2_reg))
#define TP_TF0_STRM_ID_2_inst_adr                                                    "0x0084"
#define TP_TF0_STRM_ID_2_inst                                                        0x0084
#define TP_TF0_STRM_ID_2_set3_shift                                                  (24)
#define TP_TF0_STRM_ID_2_set3_mask                                                   (0xFF000000)
#define TP_TF0_STRM_ID_2_set3(data)                                                  (0xFF000000&((data)<<24))
#define TP_TF0_STRM_ID_2_set3_src(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF0_STRM_ID_2_get_set3(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF0_STRM_ID_2_set2_shift                                                  (16)
#define TP_TF0_STRM_ID_2_set2_mask                                                   (0x00FF0000)
#define TP_TF0_STRM_ID_2_set2(data)                                                  (0x00FF0000&((data)<<16))
#define TP_TF0_STRM_ID_2_set2_src(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF0_STRM_ID_2_get_set2(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF0_STRM_ID_2_set1_shift                                                  (8)
#define TP_TF0_STRM_ID_2_set1_mask                                                   (0x0000FF00)
#define TP_TF0_STRM_ID_2_set1(data)                                                  (0x0000FF00&((data)<<8))
#define TP_TF0_STRM_ID_2_set1_src(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF0_STRM_ID_2_get_set1(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF0_STRM_ID_2_set0_shift                                                  (0)
#define TP_TF0_STRM_ID_2_set0_mask                                                   (0x000000FF)
#define TP_TF0_STRM_ID_2_set0(data)                                                  (0x000000FF&((data)<<0))
#define TP_TF0_STRM_ID_2_set0_src(data)                                              ((0x000000FF&(data))>>0)
#define TP_TF0_STRM_ID_2_get_set0(data)                                              ((0x000000FF&(data))>>0)


#define TP_TF0_STRM_ID_3                                                             0x98014214
#define TP_TF0_STRM_ID_3_reg_addr                                                    "0xD8014214"
#define TP_TF0_STRM_ID_3_reg                                                         0xD8014214
#define set_TP_TF0_STRM_ID_3_reg(data)   (*((volatile unsigned int*) TP_TF0_STRM_ID_3_reg)=data)
#define get_TP_TF0_STRM_ID_3_reg   (*((volatile unsigned int*) TP_TF0_STRM_ID_3_reg))
#define TP_TF0_STRM_ID_3_inst_adr                                                    "0x0085"
#define TP_TF0_STRM_ID_3_inst                                                        0x0085
#define TP_TF0_STRM_ID_3_set3_shift                                                  (24)
#define TP_TF0_STRM_ID_3_set3_mask                                                   (0xFF000000)
#define TP_TF0_STRM_ID_3_set3(data)                                                  (0xFF000000&((data)<<24))
#define TP_TF0_STRM_ID_3_set3_src(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF0_STRM_ID_3_get_set3(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF0_STRM_ID_3_set2_shift                                                  (16)
#define TP_TF0_STRM_ID_3_set2_mask                                                   (0x00FF0000)
#define TP_TF0_STRM_ID_3_set2(data)                                                  (0x00FF0000&((data)<<16))
#define TP_TF0_STRM_ID_3_set2_src(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF0_STRM_ID_3_get_set2(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF0_STRM_ID_3_set1_shift                                                  (8)
#define TP_TF0_STRM_ID_3_set1_mask                                                   (0x0000FF00)
#define TP_TF0_STRM_ID_3_set1(data)                                                  (0x0000FF00&((data)<<8))
#define TP_TF0_STRM_ID_3_set1_src(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF0_STRM_ID_3_get_set1(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF0_STRM_ID_3_set0_shift                                                  (0)
#define TP_TF0_STRM_ID_3_set0_mask                                                   (0x000000FF)
#define TP_TF0_STRM_ID_3_set0(data)                                                  (0x000000FF&((data)<<0))
#define TP_TF0_STRM_ID_3_set0_src(data)                                              ((0x000000FF&(data))>>0)
#define TP_TF0_STRM_ID_3_get_set0(data)                                              ((0x000000FF&(data))>>0)


#define TP_TF0_STRM_VAL                                                              0x98014218
#define TP_TF0_STRM_VAL_reg_addr                                                     "0xD8014218"
#define TP_TF0_STRM_VAL_reg                                                          0xD8014218
#define set_TP_TF0_STRM_VAL_reg(data)   (*((volatile unsigned int*) TP_TF0_STRM_VAL_reg)=data)
#define get_TP_TF0_STRM_VAL_reg   (*((volatile unsigned int*) TP_TF0_STRM_VAL_reg))
#define TP_TF0_STRM_VAL_inst_adr                                                     "0x0086"
#define TP_TF0_STRM_VAL_inst                                                         0x0086
#define TP_TF0_STRM_VAL_val_set33_shift                                              (15)
#define TP_TF0_STRM_VAL_val_set33_mask                                               (0x00008000)
#define TP_TF0_STRM_VAL_val_set33(data)                                              (0x00008000&((data)<<15))
#define TP_TF0_STRM_VAL_val_set33_src(data)                                          ((0x00008000&(data))>>15)
#define TP_TF0_STRM_VAL_get_val_set33(data)                                          ((0x00008000&(data))>>15)
#define TP_TF0_STRM_VAL_val_set32_shift                                              (14)
#define TP_TF0_STRM_VAL_val_set32_mask                                               (0x00004000)
#define TP_TF0_STRM_VAL_val_set32(data)                                              (0x00004000&((data)<<14))
#define TP_TF0_STRM_VAL_val_set32_src(data)                                          ((0x00004000&(data))>>14)
#define TP_TF0_STRM_VAL_get_val_set32(data)                                          ((0x00004000&(data))>>14)
#define TP_TF0_STRM_VAL_val_set31_shift                                              (13)
#define TP_TF0_STRM_VAL_val_set31_mask                                               (0x00002000)
#define TP_TF0_STRM_VAL_val_set31(data)                                              (0x00002000&((data)<<13))
#define TP_TF0_STRM_VAL_val_set31_src(data)                                          ((0x00002000&(data))>>13)
#define TP_TF0_STRM_VAL_get_val_set31(data)                                          ((0x00002000&(data))>>13)
#define TP_TF0_STRM_VAL_val_set30_shift                                              (12)
#define TP_TF0_STRM_VAL_val_set30_mask                                               (0x00001000)
#define TP_TF0_STRM_VAL_val_set30(data)                                              (0x00001000&((data)<<12))
#define TP_TF0_STRM_VAL_val_set30_src(data)                                          ((0x00001000&(data))>>12)
#define TP_TF0_STRM_VAL_get_val_set30(data)                                          ((0x00001000&(data))>>12)
#define TP_TF0_STRM_VAL_val_set23_shift                                              (11)
#define TP_TF0_STRM_VAL_val_set23_mask                                               (0x00000800)
#define TP_TF0_STRM_VAL_val_set23(data)                                              (0x00000800&((data)<<11))
#define TP_TF0_STRM_VAL_val_set23_src(data)                                          ((0x00000800&(data))>>11)
#define TP_TF0_STRM_VAL_get_val_set23(data)                                          ((0x00000800&(data))>>11)
#define TP_TF0_STRM_VAL_val_set22_shift                                              (10)
#define TP_TF0_STRM_VAL_val_set22_mask                                               (0x00000400)
#define TP_TF0_STRM_VAL_val_set22(data)                                              (0x00000400&((data)<<10))
#define TP_TF0_STRM_VAL_val_set22_src(data)                                          ((0x00000400&(data))>>10)
#define TP_TF0_STRM_VAL_get_val_set22(data)                                          ((0x00000400&(data))>>10)
#define TP_TF0_STRM_VAL_val_set21_shift                                              (9)
#define TP_TF0_STRM_VAL_val_set21_mask                                               (0x00000200)
#define TP_TF0_STRM_VAL_val_set21(data)                                              (0x00000200&((data)<<9))
#define TP_TF0_STRM_VAL_val_set21_src(data)                                          ((0x00000200&(data))>>9)
#define TP_TF0_STRM_VAL_get_val_set21(data)                                          ((0x00000200&(data))>>9)
#define TP_TF0_STRM_VAL_val_set20_shift                                              (8)
#define TP_TF0_STRM_VAL_val_set20_mask                                               (0x00000100)
#define TP_TF0_STRM_VAL_val_set20(data)                                              (0x00000100&((data)<<8))
#define TP_TF0_STRM_VAL_val_set20_src(data)                                          ((0x00000100&(data))>>8)
#define TP_TF0_STRM_VAL_get_val_set20(data)                                          ((0x00000100&(data))>>8)
#define TP_TF0_STRM_VAL_val_set13_shift                                              (7)
#define TP_TF0_STRM_VAL_val_set13_mask                                               (0x00000080)
#define TP_TF0_STRM_VAL_val_set13(data)                                              (0x00000080&((data)<<7))
#define TP_TF0_STRM_VAL_val_set13_src(data)                                          ((0x00000080&(data))>>7)
#define TP_TF0_STRM_VAL_get_val_set13(data)                                          ((0x00000080&(data))>>7)
#define TP_TF0_STRM_VAL_val_set12_shift                                              (6)
#define TP_TF0_STRM_VAL_val_set12_mask                                               (0x00000040)
#define TP_TF0_STRM_VAL_val_set12(data)                                              (0x00000040&((data)<<6))
#define TP_TF0_STRM_VAL_val_set12_src(data)                                          ((0x00000040&(data))>>6)
#define TP_TF0_STRM_VAL_get_val_set12(data)                                          ((0x00000040&(data))>>6)
#define TP_TF0_STRM_VAL_val_set11_shift                                              (5)
#define TP_TF0_STRM_VAL_val_set11_mask                                               (0x00000020)
#define TP_TF0_STRM_VAL_val_set11(data)                                              (0x00000020&((data)<<5))
#define TP_TF0_STRM_VAL_val_set11_src(data)                                          ((0x00000020&(data))>>5)
#define TP_TF0_STRM_VAL_get_val_set11(data)                                          ((0x00000020&(data))>>5)
#define TP_TF0_STRM_VAL_val_set10_shift                                              (4)
#define TP_TF0_STRM_VAL_val_set10_mask                                               (0x00000010)
#define TP_TF0_STRM_VAL_val_set10(data)                                              (0x00000010&((data)<<4))
#define TP_TF0_STRM_VAL_val_set10_src(data)                                          ((0x00000010&(data))>>4)
#define TP_TF0_STRM_VAL_get_val_set10(data)                                          ((0x00000010&(data))>>4)
#define TP_TF0_STRM_VAL_val_set03_shift                                              (3)
#define TP_TF0_STRM_VAL_val_set03_mask                                               (0x00000008)
#define TP_TF0_STRM_VAL_val_set03(data)                                              (0x00000008&((data)<<3))
#define TP_TF0_STRM_VAL_val_set03_src(data)                                          ((0x00000008&(data))>>3)
#define TP_TF0_STRM_VAL_get_val_set03(data)                                          ((0x00000008&(data))>>3)
#define TP_TF0_STRM_VAL_val_set02_shift                                              (2)
#define TP_TF0_STRM_VAL_val_set02_mask                                               (0x00000004)
#define TP_TF0_STRM_VAL_val_set02(data)                                              (0x00000004&((data)<<2))
#define TP_TF0_STRM_VAL_val_set02_src(data)                                          ((0x00000004&(data))>>2)
#define TP_TF0_STRM_VAL_get_val_set02(data)                                          ((0x00000004&(data))>>2)
#define TP_TF0_STRM_VAL_val_set01_shift                                              (1)
#define TP_TF0_STRM_VAL_val_set01_mask                                               (0x00000002)
#define TP_TF0_STRM_VAL_val_set01(data)                                              (0x00000002&((data)<<1))
#define TP_TF0_STRM_VAL_val_set01_src(data)                                          ((0x00000002&(data))>>1)
#define TP_TF0_STRM_VAL_get_val_set01(data)                                          ((0x00000002&(data))>>1)
#define TP_TF0_STRM_VAL_val_set00_shift                                              (0)
#define TP_TF0_STRM_VAL_val_set00_mask                                               (0x00000001)
#define TP_TF0_STRM_VAL_val_set00(data)                                              (0x00000001&((data)<<0))
#define TP_TF0_STRM_VAL_val_set00_src(data)                                          ((0x00000001&(data))>>0)
#define TP_TF0_STRM_VAL_get_val_set00(data)                                          ((0x00000001&(data))>>0)


#define TP_TF0_CNT                                                                   0x98014004
#define TP_TF0_CNT_reg_addr                                                          "0xD8014004"
#define TP_TF0_CNT_reg                                                               0xD8014004
#define set_TP_TF0_CNT_reg(data)   (*((volatile unsigned int*) TP_TF0_CNT_reg)=data)
#define get_TP_TF0_CNT_reg   (*((volatile unsigned int*) TP_TF0_CNT_reg))
#define TP_TF0_CNT_inst_adr                                                          "0x0001"
#define TP_TF0_CNT_inst                                                              0x0001
#define TP_TF0_CNT_cnt_shift                                                         (0)
#define TP_TF0_CNT_cnt_mask                                                          (0x00FFFFFF)
#define TP_TF0_CNT_cnt(data)                                                         (0x00FFFFFF&((data)<<0))
#define TP_TF0_CNT_cnt_src(data)                                                     ((0x00FFFFFF&(data))>>0)
#define TP_TF0_CNT_get_cnt(data)                                                     ((0x00FFFFFF&(data))>>0)


#define TP_TF0_DRP_CNT                                                               0x98014008
#define TP_TF0_DRP_CNT_reg_addr                                                      "0xD8014008"
#define TP_TF0_DRP_CNT_reg                                                           0xD8014008
#define set_TP_TF0_DRP_CNT_reg(data)   (*((volatile unsigned int*) TP_TF0_DRP_CNT_reg)=data)
#define get_TP_TF0_DRP_CNT_reg   (*((volatile unsigned int*) TP_TF0_DRP_CNT_reg))
#define TP_TF0_DRP_CNT_inst_adr                                                      "0x0002"
#define TP_TF0_DRP_CNT_inst                                                          0x0002
#define TP_TF0_DRP_CNT_drp_cnt_shift                                                 (0)
#define TP_TF0_DRP_CNT_drp_cnt_mask                                                  (0x0000FFFF)
#define TP_TF0_DRP_CNT_drp_cnt(data)                                                 (0x0000FFFF&((data)<<0))
#define TP_TF0_DRP_CNT_drp_cnt_src(data)                                             ((0x0000FFFF&(data))>>0)
#define TP_TF0_DRP_CNT_get_drp_cnt(data)                                             ((0x0000FFFF&(data))>>0)


#define TP_TF0_ERR_CNT                                                               0x9801400C
#define TP_TF0_ERR_CNT_reg_addr                                                      "0xD801400C"
#define TP_TF0_ERR_CNT_reg                                                           0xD801400C
#define set_TP_TF0_ERR_CNT_reg(data)   (*((volatile unsigned int*) TP_TF0_ERR_CNT_reg)=data)
#define get_TP_TF0_ERR_CNT_reg   (*((volatile unsigned int*) TP_TF0_ERR_CNT_reg))
#define TP_TF0_ERR_CNT_inst_adr                                                      "0x0003"
#define TP_TF0_ERR_CNT_inst                                                          0x0003
#define TP_TF0_ERR_CNT_err_cnt_shift                                                 (0)
#define TP_TF0_ERR_CNT_err_cnt_mask                                                  (0x0000FFFF)
#define TP_TF0_ERR_CNT_err_cnt(data)                                                 (0x0000FFFF&((data)<<0))
#define TP_TF0_ERR_CNT_err_cnt_src(data)                                             ((0x0000FFFF&(data))>>0)
#define TP_TF0_ERR_CNT_get_err_cnt(data)                                             ((0x0000FFFF&(data))>>0)


#define TP_TF1_CNTL                                                                  0x98014010
#define TP_TF1_CNTL_reg_addr                                                         "0xD8014010"
#define TP_TF1_CNTL_reg                                                              0xD8014010
#define set_TP_TF1_CNTL_reg(data)   (*((volatile unsigned int*) TP_TF1_CNTL_reg)=data)
#define get_TP_TF1_CNTL_reg   (*((volatile unsigned int*) TP_TF1_CNTL_reg))
#define TP_TF1_CNTL_inst_adr                                                         "0x0004"
#define TP_TF1_CNTL_inst                                                             0x0004
#define TP_TF1_CNTL_sec_body_info_en_shift                                           (18)
#define TP_TF1_CNTL_sec_body_info_en_mask                                            (0x00040000)
#define TP_TF1_CNTL_sec_body_info_en(data)                                           (0x00040000&((data)<<18))
#define TP_TF1_CNTL_sec_body_info_en_src(data)                                       ((0x00040000&(data))>>18)
#define TP_TF1_CNTL_get_sec_body_info_en(data)                                       ((0x00040000&(data))>>18)
#define TP_TF1_CNTL_tp_err_fix_en_shift                                              (17)
#define TP_TF1_CNTL_tp_err_fix_en_mask                                               (0x00020000)
#define TP_TF1_CNTL_tp_err_fix_en(data)                                              (0x00020000&((data)<<17))
#define TP_TF1_CNTL_tp_err_fix_en_src(data)                                          ((0x00020000&(data))>>17)
#define TP_TF1_CNTL_get_tp_err_fix_en(data)                                          ((0x00020000&(data))>>17)
#define TP_TF1_CNTL_strm_id_en_shift                                                 (16)
#define TP_TF1_CNTL_strm_id_en_mask                                                  (0x00010000)
#define TP_TF1_CNTL_strm_id_en(data)                                                 (0x00010000&((data)<<16))
#define TP_TF1_CNTL_strm_id_en_src(data)                                             ((0x00010000&(data))>>16)
#define TP_TF1_CNTL_get_strm_id_en(data)                                             ((0x00010000&(data))>>16)
#define TP_TF1_CNTL_buf_rdy_ctl_shift                                                (15)
#define TP_TF1_CNTL_buf_rdy_ctl_mask                                                 (0x00008000)
#define TP_TF1_CNTL_buf_rdy_ctl(data)                                                (0x00008000&((data)<<15))
#define TP_TF1_CNTL_buf_rdy_ctl_src(data)                                            ((0x00008000&(data))>>15)
#define TP_TF1_CNTL_get_buf_rdy_ctl(data)                                            ((0x00008000&(data))>>15)
#define TP_TF1_CNTL_psc_en_shift                                                     (14)
#define TP_TF1_CNTL_psc_en_mask                                                      (0x00004000)
#define TP_TF1_CNTL_psc_en(data)                                                     (0x00004000&((data)<<14))
#define TP_TF1_CNTL_psc_en_src(data)                                                 ((0x00004000&(data))>>14)
#define TP_TF1_CNTL_get_psc_en(data)                                                 ((0x00004000&(data))>>14)
#define TP_TF1_CNTL_pes_en_shift                                                     (13)
#define TP_TF1_CNTL_pes_en_mask                                                      (0x00002000)
#define TP_TF1_CNTL_pes_en(data)                                                     (0x00002000&((data)<<13))
#define TP_TF1_CNTL_pes_en_src(data)                                                 ((0x00002000&(data))>>13)
#define TP_TF1_CNTL_get_pes_en(data)                                                 ((0x00002000&(data))>>13)
#define TP_TF1_CNTL_tsc_en_shift                                                     (12)
#define TP_TF1_CNTL_tsc_en_mask                                                      (0x00001000)
#define TP_TF1_CNTL_tsc_en(data)                                                     (0x00001000&((data)<<12))
#define TP_TF1_CNTL_tsc_en_src(data)                                                 ((0x00001000&(data))>>12)
#define TP_TF1_CNTL_get_tsc_en(data)                                                 ((0x00001000&(data))>>12)
#define TP_TF1_CNTL_tb_shift                                                         (11)
#define TP_TF1_CNTL_tb_mask                                                          (0x00000800)
#define TP_TF1_CNTL_tb(data)                                                         (0x00000800&((data)<<11))
#define TP_TF1_CNTL_tb_src(data)                                                     ((0x00000800&(data))>>11)
#define TP_TF1_CNTL_get_tb(data)                                                     ((0x00000800&(data))>>11)
#define TP_TF1_CNTL_busy_shift                                                       (10)
#define TP_TF1_CNTL_busy_mask                                                        (0x00000400)
#define TP_TF1_CNTL_busy(data)                                                       (0x00000400&((data)<<10))
#define TP_TF1_CNTL_busy_src(data)                                                   ((0x00000400&(data))>>10)
#define TP_TF1_CNTL_get_busy(data)                                                   ((0x00000400&(data))>>10)
#define TP_TF1_CNTL_mode_shift                                                       (9)
#define TP_TF1_CNTL_mode_mask                                                        (0x00000200)
#define TP_TF1_CNTL_mode(data)                                                       (0x00000200&((data)<<9))
#define TP_TF1_CNTL_mode_src(data)                                                   ((0x00000200&(data))>>9)
#define TP_TF1_CNTL_get_mode(data)                                                   ((0x00000200&(data))>>9)
#define TP_TF1_CNTL_du_en_shift                                                      (8)
#define TP_TF1_CNTL_du_en_mask                                                       (0x00000100)
#define TP_TF1_CNTL_du_en(data)                                                      (0x00000100&((data)<<8))
#define TP_TF1_CNTL_du_en_src(data)                                                  ((0x00000100&(data))>>8)
#define TP_TF1_CNTL_get_du_en(data)                                                  ((0x00000100&(data))>>8)
#define TP_TF1_CNTL_de_en_shift                                                      (7)
#define TP_TF1_CNTL_de_en_mask                                                       (0x00000080)
#define TP_TF1_CNTL_de_en(data)                                                      (0x00000080&((data)<<7))
#define TP_TF1_CNTL_de_en_src(data)                                                  ((0x00000080&(data))>>7)
#define TP_TF1_CNTL_get_de_en(data)                                                  ((0x00000080&(data))>>7)
#define TP_TF1_CNTL_xt_en_shift                                                      (6)
#define TP_TF1_CNTL_xt_en_mask                                                       (0x00000040)
#define TP_TF1_CNTL_xt_en(data)                                                      (0x00000040&((data)<<6))
#define TP_TF1_CNTL_xt_en_src(data)                                                  ((0x00000040&(data))>>6)
#define TP_TF1_CNTL_get_xt_en(data)                                                  ((0x00000040&(data))>>6)
#define TP_TF1_CNTL_pid_en_shift                                                     (5)
#define TP_TF1_CNTL_pid_en_mask                                                      (0x00000020)
#define TP_TF1_CNTL_pid_en(data)                                                     (0x00000020&((data)<<5))
#define TP_TF1_CNTL_pid_en_src(data)                                                 ((0x00000020&(data))>>5)
#define TP_TF1_CNTL_get_pid_en(data)                                                 ((0x00000020&(data))>>5)
#define TP_TF1_CNTL_null_en_shift                                                    (4)
#define TP_TF1_CNTL_null_en_mask                                                     (0x00000010)
#define TP_TF1_CNTL_null_en(data)                                                    (0x00000010&((data)<<4))
#define TP_TF1_CNTL_null_en_src(data)                                                ((0x00000010&(data))>>4)
#define TP_TF1_CNTL_get_null_en(data)                                                ((0x00000010&(data))>>4)
#define TP_TF1_CNTL_trerr_en_shift                                                   (3)
#define TP_TF1_CNTL_trerr_en_mask                                                    (0x00000008)
#define TP_TF1_CNTL_trerr_en(data)                                                   (0x00000008&((data)<<3))
#define TP_TF1_CNTL_trerr_en_src(data)                                               ((0x00000008&(data))>>3)
#define TP_TF1_CNTL_get_trerr_en(data)                                               ((0x00000008&(data))>>3)
#define TP_TF1_CNTL_sync_en_shift                                                    (2)
#define TP_TF1_CNTL_sync_en_mask                                                     (0x00000004)
#define TP_TF1_CNTL_sync_en(data)                                                    (0x00000004&((data)<<2))
#define TP_TF1_CNTL_sync_en_src(data)                                                ((0x00000004&(data))>>2)
#define TP_TF1_CNTL_get_sync_en(data)                                                ((0x00000004&(data))>>2)
#define TP_TF1_CNTL_rst_en_shift                                                     (1)
#define TP_TF1_CNTL_rst_en_mask                                                      (0x00000002)
#define TP_TF1_CNTL_rst_en(data)                                                     (0x00000002&((data)<<1))
#define TP_TF1_CNTL_rst_en_src(data)                                                 ((0x00000002&(data))>>1)
#define TP_TF1_CNTL_get_rst_en(data)                                                 ((0x00000002&(data))>>1)
#define TP_TF1_CNTL_write_data_shift                                                 (0)
#define TP_TF1_CNTL_write_data_mask                                                  (0x00000001)
#define TP_TF1_CNTL_write_data(data)                                                 (0x00000001&((data)<<0))
#define TP_TF1_CNTL_write_data_src(data)                                             ((0x00000001&(data))>>0)
#define TP_TF1_CNTL_get_write_data(data)                                             ((0x00000001&(data))>>0)


#define TP_TF1_STRM_ID_0                                                             0x9801421c
#define TP_TF1_STRM_ID_0_reg_addr                                                    "0xD801421C"
#define TP_TF1_STRM_ID_0_reg                                                         0xD801421C
#define set_TP_TF1_STRM_ID_0_reg(data)   (*((volatile unsigned int*) TP_TF1_STRM_ID_0_reg)=data)
#define get_TP_TF1_STRM_ID_0_reg   (*((volatile unsigned int*) TP_TF1_STRM_ID_0_reg))
#define TP_TF1_STRM_ID_0_inst_adr                                                    "0x0087"
#define TP_TF1_STRM_ID_0_inst                                                        0x0087
#define TP_TF1_STRM_ID_0_set3_shift                                                  (24)
#define TP_TF1_STRM_ID_0_set3_mask                                                   (0xFF000000)
#define TP_TF1_STRM_ID_0_set3(data)                                                  (0xFF000000&((data)<<24))
#define TP_TF1_STRM_ID_0_set3_src(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF1_STRM_ID_0_get_set3(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF1_STRM_ID_0_set2_shift                                                  (16)
#define TP_TF1_STRM_ID_0_set2_mask                                                   (0x00FF0000)
#define TP_TF1_STRM_ID_0_set2(data)                                                  (0x00FF0000&((data)<<16))
#define TP_TF1_STRM_ID_0_set2_src(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF1_STRM_ID_0_get_set2(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF1_STRM_ID_0_set1_shift                                                  (8)
#define TP_TF1_STRM_ID_0_set1_mask                                                   (0x0000FF00)
#define TP_TF1_STRM_ID_0_set1(data)                                                  (0x0000FF00&((data)<<8))
#define TP_TF1_STRM_ID_0_set1_src(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF1_STRM_ID_0_get_set1(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF1_STRM_ID_0_set0_shift                                                  (0)
#define TP_TF1_STRM_ID_0_set0_mask                                                   (0x000000FF)
#define TP_TF1_STRM_ID_0_set0(data)                                                  (0x000000FF&((data)<<0))
#define TP_TF1_STRM_ID_0_set0_src(data)                                              ((0x000000FF&(data))>>0)
#define TP_TF1_STRM_ID_0_get_set0(data)                                              ((0x000000FF&(data))>>0)


#define TP_TF1_STRM_ID_1                                                             0x98014220
#define TP_TF1_STRM_ID_1_reg_addr                                                    "0xD8014220"
#define TP_TF1_STRM_ID_1_reg                                                         0xD8014220
#define set_TP_TF1_STRM_ID_1_reg(data)   (*((volatile unsigned int*) TP_TF1_STRM_ID_1_reg)=data)
#define get_TP_TF1_STRM_ID_1_reg   (*((volatile unsigned int*) TP_TF1_STRM_ID_1_reg))
#define TP_TF1_STRM_ID_1_inst_adr                                                    "0x0088"
#define TP_TF1_STRM_ID_1_inst                                                        0x0088
#define TP_TF1_STRM_ID_1_set3_shift                                                  (24)
#define TP_TF1_STRM_ID_1_set3_mask                                                   (0xFF000000)
#define TP_TF1_STRM_ID_1_set3(data)                                                  (0xFF000000&((data)<<24))
#define TP_TF1_STRM_ID_1_set3_src(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF1_STRM_ID_1_get_set3(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF1_STRM_ID_1_set2_shift                                                  (16)
#define TP_TF1_STRM_ID_1_set2_mask                                                   (0x00FF0000)
#define TP_TF1_STRM_ID_1_set2(data)                                                  (0x00FF0000&((data)<<16))
#define TP_TF1_STRM_ID_1_set2_src(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF1_STRM_ID_1_get_set2(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF1_STRM_ID_1_set1_shift                                                  (8)
#define TP_TF1_STRM_ID_1_set1_mask                                                   (0x0000FF00)
#define TP_TF1_STRM_ID_1_set1(data)                                                  (0x0000FF00&((data)<<8))
#define TP_TF1_STRM_ID_1_set1_src(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF1_STRM_ID_1_get_set1(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF1_STRM_ID_1_set0_shift                                                  (0)
#define TP_TF1_STRM_ID_1_set0_mask                                                   (0x000000FF)
#define TP_TF1_STRM_ID_1_set0(data)                                                  (0x000000FF&((data)<<0))
#define TP_TF1_STRM_ID_1_set0_src(data)                                              ((0x000000FF&(data))>>0)
#define TP_TF1_STRM_ID_1_get_set0(data)                                              ((0x000000FF&(data))>>0)


#define TP_TF1_STRM_ID_2                                                             0x98014224
#define TP_TF1_STRM_ID_2_reg_addr                                                    "0xD8014224"
#define TP_TF1_STRM_ID_2_reg                                                         0xD8014224
#define set_TP_TF1_STRM_ID_2_reg(data)   (*((volatile unsigned int*) TP_TF1_STRM_ID_2_reg)=data)
#define get_TP_TF1_STRM_ID_2_reg   (*((volatile unsigned int*) TP_TF1_STRM_ID_2_reg))
#define TP_TF1_STRM_ID_2_inst_adr                                                    "0x0089"
#define TP_TF1_STRM_ID_2_inst                                                        0x0089
#define TP_TF1_STRM_ID_2_set3_shift                                                  (24)
#define TP_TF1_STRM_ID_2_set3_mask                                                   (0xFF000000)
#define TP_TF1_STRM_ID_2_set3(data)                                                  (0xFF000000&((data)<<24))
#define TP_TF1_STRM_ID_2_set3_src(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF1_STRM_ID_2_get_set3(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF1_STRM_ID_2_set2_shift                                                  (16)
#define TP_TF1_STRM_ID_2_set2_mask                                                   (0x00FF0000)
#define TP_TF1_STRM_ID_2_set2(data)                                                  (0x00FF0000&((data)<<16))
#define TP_TF1_STRM_ID_2_set2_src(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF1_STRM_ID_2_get_set2(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF1_STRM_ID_2_set1_shift                                                  (8)
#define TP_TF1_STRM_ID_2_set1_mask                                                   (0x0000FF00)
#define TP_TF1_STRM_ID_2_set1(data)                                                  (0x0000FF00&((data)<<8))
#define TP_TF1_STRM_ID_2_set1_src(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF1_STRM_ID_2_get_set1(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF1_STRM_ID_2_set0_shift                                                  (0)
#define TP_TF1_STRM_ID_2_set0_mask                                                   (0x000000FF)
#define TP_TF1_STRM_ID_2_set0(data)                                                  (0x000000FF&((data)<<0))
#define TP_TF1_STRM_ID_2_set0_src(data)                                              ((0x000000FF&(data))>>0)
#define TP_TF1_STRM_ID_2_get_set0(data)                                              ((0x000000FF&(data))>>0)


#define TP_TF1_STRM_ID_3                                                             0x98014228
#define TP_TF1_STRM_ID_3_reg_addr                                                    "0xD8014228"
#define TP_TF1_STRM_ID_3_reg                                                         0xD8014228
#define set_TP_TF1_STRM_ID_3_reg(data)   (*((volatile unsigned int*) TP_TF1_STRM_ID_3_reg)=data)
#define get_TP_TF1_STRM_ID_3_reg   (*((volatile unsigned int*) TP_TF1_STRM_ID_3_reg))
#define TP_TF1_STRM_ID_3_inst_adr                                                    "0x008A"
#define TP_TF1_STRM_ID_3_inst                                                        0x008A
#define TP_TF1_STRM_ID_3_set3_shift                                                  (24)
#define TP_TF1_STRM_ID_3_set3_mask                                                   (0xFF000000)
#define TP_TF1_STRM_ID_3_set3(data)                                                  (0xFF000000&((data)<<24))
#define TP_TF1_STRM_ID_3_set3_src(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF1_STRM_ID_3_get_set3(data)                                              ((0xFF000000&(data))>>24)
#define TP_TF1_STRM_ID_3_set2_shift                                                  (16)
#define TP_TF1_STRM_ID_3_set2_mask                                                   (0x00FF0000)
#define TP_TF1_STRM_ID_3_set2(data)                                                  (0x00FF0000&((data)<<16))
#define TP_TF1_STRM_ID_3_set2_src(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF1_STRM_ID_3_get_set2(data)                                              ((0x00FF0000&(data))>>16)
#define TP_TF1_STRM_ID_3_set1_shift                                                  (8)
#define TP_TF1_STRM_ID_3_set1_mask                                                   (0x0000FF00)
#define TP_TF1_STRM_ID_3_set1(data)                                                  (0x0000FF00&((data)<<8))
#define TP_TF1_STRM_ID_3_set1_src(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF1_STRM_ID_3_get_set1(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TF1_STRM_ID_3_set0_shift                                                  (0)
#define TP_TF1_STRM_ID_3_set0_mask                                                   (0x000000FF)
#define TP_TF1_STRM_ID_3_set0(data)                                                  (0x000000FF&((data)<<0))
#define TP_TF1_STRM_ID_3_set0_src(data)                                              ((0x000000FF&(data))>>0)
#define TP_TF1_STRM_ID_3_get_set0(data)                                              ((0x000000FF&(data))>>0)


#define TP_TF1_STRM_VAL                                                              0x9801422c
#define TP_TF1_STRM_VAL_reg_addr                                                     "0xD801422C"
#define TP_TF1_STRM_VAL_reg                                                          0xD801422C
#define set_TP_TF1_STRM_VAL_reg(data)   (*((volatile unsigned int*) TP_TF1_STRM_VAL_reg)=data)
#define get_TP_TF1_STRM_VAL_reg   (*((volatile unsigned int*) TP_TF1_STRM_VAL_reg))
#define TP_TF1_STRM_VAL_inst_adr                                                     "0x008B"
#define TP_TF1_STRM_VAL_inst                                                         0x008B
#define TP_TF1_STRM_VAL_val_set33_shift                                              (15)
#define TP_TF1_STRM_VAL_val_set33_mask                                               (0x00008000)
#define TP_TF1_STRM_VAL_val_set33(data)                                              (0x00008000&((data)<<15))
#define TP_TF1_STRM_VAL_val_set33_src(data)                                          ((0x00008000&(data))>>15)
#define TP_TF1_STRM_VAL_get_val_set33(data)                                          ((0x00008000&(data))>>15)
#define TP_TF1_STRM_VAL_val_set32_shift                                              (14)
#define TP_TF1_STRM_VAL_val_set32_mask                                               (0x00004000)
#define TP_TF1_STRM_VAL_val_set32(data)                                              (0x00004000&((data)<<14))
#define TP_TF1_STRM_VAL_val_set32_src(data)                                          ((0x00004000&(data))>>14)
#define TP_TF1_STRM_VAL_get_val_set32(data)                                          ((0x00004000&(data))>>14)
#define TP_TF1_STRM_VAL_val_set31_shift                                              (13)
#define TP_TF1_STRM_VAL_val_set31_mask                                               (0x00002000)
#define TP_TF1_STRM_VAL_val_set31(data)                                              (0x00002000&((data)<<13))
#define TP_TF1_STRM_VAL_val_set31_src(data)                                          ((0x00002000&(data))>>13)
#define TP_TF1_STRM_VAL_get_val_set31(data)                                          ((0x00002000&(data))>>13)
#define TP_TF1_STRM_VAL_val_set30_shift                                              (12)
#define TP_TF1_STRM_VAL_val_set30_mask                                               (0x00001000)
#define TP_TF1_STRM_VAL_val_set30(data)                                              (0x00001000&((data)<<12))
#define TP_TF1_STRM_VAL_val_set30_src(data)                                          ((0x00001000&(data))>>12)
#define TP_TF1_STRM_VAL_get_val_set30(data)                                          ((0x00001000&(data))>>12)
#define TP_TF1_STRM_VAL_val_set23_shift                                              (11)
#define TP_TF1_STRM_VAL_val_set23_mask                                               (0x00000800)
#define TP_TF1_STRM_VAL_val_set23(data)                                              (0x00000800&((data)<<11))
#define TP_TF1_STRM_VAL_val_set23_src(data)                                          ((0x00000800&(data))>>11)
#define TP_TF1_STRM_VAL_get_val_set23(data)                                          ((0x00000800&(data))>>11)
#define TP_TF1_STRM_VAL_val_set22_shift                                              (10)
#define TP_TF1_STRM_VAL_val_set22_mask                                               (0x00000400)
#define TP_TF1_STRM_VAL_val_set22(data)                                              (0x00000400&((data)<<10))
#define TP_TF1_STRM_VAL_val_set22_src(data)                                          ((0x00000400&(data))>>10)
#define TP_TF1_STRM_VAL_get_val_set22(data)                                          ((0x00000400&(data))>>10)
#define TP_TF1_STRM_VAL_val_set21_shift                                              (9)
#define TP_TF1_STRM_VAL_val_set21_mask                                               (0x00000200)
#define TP_TF1_STRM_VAL_val_set21(data)                                              (0x00000200&((data)<<9))
#define TP_TF1_STRM_VAL_val_set21_src(data)                                          ((0x00000200&(data))>>9)
#define TP_TF1_STRM_VAL_get_val_set21(data)                                          ((0x00000200&(data))>>9)
#define TP_TF1_STRM_VAL_val_set20_shift                                              (8)
#define TP_TF1_STRM_VAL_val_set20_mask                                               (0x00000100)
#define TP_TF1_STRM_VAL_val_set20(data)                                              (0x00000100&((data)<<8))
#define TP_TF1_STRM_VAL_val_set20_src(data)                                          ((0x00000100&(data))>>8)
#define TP_TF1_STRM_VAL_get_val_set20(data)                                          ((0x00000100&(data))>>8)
#define TP_TF1_STRM_VAL_val_set13_shift                                              (7)
#define TP_TF1_STRM_VAL_val_set13_mask                                               (0x00000080)
#define TP_TF1_STRM_VAL_val_set13(data)                                              (0x00000080&((data)<<7))
#define TP_TF1_STRM_VAL_val_set13_src(data)                                          ((0x00000080&(data))>>7)
#define TP_TF1_STRM_VAL_get_val_set13(data)                                          ((0x00000080&(data))>>7)
#define TP_TF1_STRM_VAL_val_set12_shift                                              (6)
#define TP_TF1_STRM_VAL_val_set12_mask                                               (0x00000040)
#define TP_TF1_STRM_VAL_val_set12(data)                                              (0x00000040&((data)<<6))
#define TP_TF1_STRM_VAL_val_set12_src(data)                                          ((0x00000040&(data))>>6)
#define TP_TF1_STRM_VAL_get_val_set12(data)                                          ((0x00000040&(data))>>6)
#define TP_TF1_STRM_VAL_val_set11_shift                                              (5)
#define TP_TF1_STRM_VAL_val_set11_mask                                               (0x00000020)
#define TP_TF1_STRM_VAL_val_set11(data)                                              (0x00000020&((data)<<5))
#define TP_TF1_STRM_VAL_val_set11_src(data)                                          ((0x00000020&(data))>>5)
#define TP_TF1_STRM_VAL_get_val_set11(data)                                          ((0x00000020&(data))>>5)
#define TP_TF1_STRM_VAL_val_set10_shift                                              (4)
#define TP_TF1_STRM_VAL_val_set10_mask                                               (0x00000010)
#define TP_TF1_STRM_VAL_val_set10(data)                                              (0x00000010&((data)<<4))
#define TP_TF1_STRM_VAL_val_set10_src(data)                                          ((0x00000010&(data))>>4)
#define TP_TF1_STRM_VAL_get_val_set10(data)                                          ((0x00000010&(data))>>4)
#define TP_TF1_STRM_VAL_val_set03_shift                                              (3)
#define TP_TF1_STRM_VAL_val_set03_mask                                               (0x00000008)
#define TP_TF1_STRM_VAL_val_set03(data)                                              (0x00000008&((data)<<3))
#define TP_TF1_STRM_VAL_val_set03_src(data)                                          ((0x00000008&(data))>>3)
#define TP_TF1_STRM_VAL_get_val_set03(data)                                          ((0x00000008&(data))>>3)
#define TP_TF1_STRM_VAL_val_set02_shift                                              (2)
#define TP_TF1_STRM_VAL_val_set02_mask                                               (0x00000004)
#define TP_TF1_STRM_VAL_val_set02(data)                                              (0x00000004&((data)<<2))
#define TP_TF1_STRM_VAL_val_set02_src(data)                                          ((0x00000004&(data))>>2)
#define TP_TF1_STRM_VAL_get_val_set02(data)                                          ((0x00000004&(data))>>2)
#define TP_TF1_STRM_VAL_val_set01_shift                                              (1)
#define TP_TF1_STRM_VAL_val_set01_mask                                               (0x00000002)
#define TP_TF1_STRM_VAL_val_set01(data)                                              (0x00000002&((data)<<1))
#define TP_TF1_STRM_VAL_val_set01_src(data)                                          ((0x00000002&(data))>>1)
#define TP_TF1_STRM_VAL_get_val_set01(data)                                          ((0x00000002&(data))>>1)
#define TP_TF1_STRM_VAL_val_set00_shift                                              (0)
#define TP_TF1_STRM_VAL_val_set00_mask                                               (0x00000001)
#define TP_TF1_STRM_VAL_val_set00(data)                                              (0x00000001&((data)<<0))
#define TP_TF1_STRM_VAL_val_set00_src(data)                                          ((0x00000001&(data))>>0)
#define TP_TF1_STRM_VAL_get_val_set00(data)                                          ((0x00000001&(data))>>0)


#define TP_PCR_90K_CNT                                                               0x98014244
#define TP_PCR_90K_CNT_reg_addr                                                      "0xD8014244"
#define TP_PCR_90K_CNT_reg                                                           0xD8014244
#define set_TP_PCR_90K_CNT_reg(data)   (*((volatile unsigned int*) TP_PCR_90K_CNT_reg)=data)
#define get_TP_PCR_90K_CNT_reg   (*((volatile unsigned int*) TP_PCR_90K_CNT_reg))
#define TP_PCR_90K_CNT_inst_adr                                                      "0x0091"
#define TP_PCR_90K_CNT_inst                                                          0x0091
#define TP_PCR_90K_CNT_pcr_90k_cnt_shift                                             (0)
#define TP_PCR_90K_CNT_pcr_90k_cnt_mask                                              (0xFFFFFFFF)
#define TP_PCR_90K_CNT_pcr_90k_cnt(data)                                             (0xFFFFFFFF&((data)<<0))
#define TP_PCR_90K_CNT_pcr_90k_cnt_src(data)                                         ((0xFFFFFFFF&(data))>>0)
#define TP_PCR_90K_CNT_get_pcr_90k_cnt(data)                                         ((0xFFFFFFFF&(data))>>0)


#define TP0_PCR_CTL                                                                  0x98014248
#define TP0_PCR_CTL_reg_addr                                                         "0xD8014248"
#define TP0_PCR_CTL_reg                                                              0xD8014248
#define set_TP0_PCR_CTL_reg(data)   (*((volatile unsigned int*) TP0_PCR_CTL_reg)=data)
#define get_TP0_PCR_CTL_reg   (*((volatile unsigned int*) TP0_PCR_CTL_reg))
#define TP0_PCR_CTL_inst_adr                                                         "0x0092"
#define TP0_PCR_CTL_inst                                                             0x0092
#define TP0_PCR_CTL_extra_func_ena_shift                                             (8)
#define TP0_PCR_CTL_extra_func_ena_mask                                              (0x00000100)
#define TP0_PCR_CTL_extra_func_ena(data)                                             (0x00000100&((data)<<8))
#define TP0_PCR_CTL_extra_func_ena_src(data)                                         ((0x00000100&(data))>>8)
#define TP0_PCR_CTL_get_extra_func_ena(data)                                         ((0x00000100&(data))>>8)
#define TP0_PCR_CTL_extra_pid_addr_shift                                             (0)
#define TP0_PCR_CTL_extra_pid_addr_mask                                              (0x0000007F)
#define TP0_PCR_CTL_extra_pid_addr(data)                                             (0x0000007F&((data)<<0))
#define TP0_PCR_CTL_extra_pid_addr_src(data)                                         ((0x0000007F&(data))>>0)
#define TP0_PCR_CTL_get_extra_pid_addr(data)                                         ((0x0000007F&(data))>>0)


#define TP1_PCR_CTL                                                                  0x9801424C
#define TP1_PCR_CTL_reg_addr                                                         "0xD801424C"
#define TP1_PCR_CTL_reg                                                              0xD801424C
#define set_TP1_PCR_CTL_reg(data)   (*((volatile unsigned int*) TP1_PCR_CTL_reg)=data)
#define get_TP1_PCR_CTL_reg   (*((volatile unsigned int*) TP1_PCR_CTL_reg))
#define TP1_PCR_CTL_inst_adr                                                         "0x0093"
#define TP1_PCR_CTL_inst                                                             0x0093
#define TP1_PCR_CTL_extra_func_ena_shift                                             (8)
#define TP1_PCR_CTL_extra_func_ena_mask                                              (0x00000100)
#define TP1_PCR_CTL_extra_func_ena(data)                                             (0x00000100&((data)<<8))
#define TP1_PCR_CTL_extra_func_ena_src(data)                                         ((0x00000100&(data))>>8)
#define TP1_PCR_CTL_get_extra_func_ena(data)                                         ((0x00000100&(data))>>8)
#define TP1_PCR_CTL_extra_pid_addr_shift                                             (0)
#define TP1_PCR_CTL_extra_pid_addr_mask                                              (0x0000007F)
#define TP1_PCR_CTL_extra_pid_addr(data)                                             (0x0000007F&((data)<<0))
#define TP1_PCR_CTL_extra_pid_addr_src(data)                                         ((0x0000007F&(data))>>0)
#define TP1_PCR_CTL_get_extra_pid_addr(data)                                         ((0x0000007F&(data))>>0)


#define TP_PCR_LATCH                                                                 0x98014254
#define TP_PCR_LATCH_reg_addr                                                        "0xD8014254"
#define TP_PCR_LATCH_reg                                                             0xD8014254
#define set_TP_PCR_LATCH_reg(data)   (*((volatile unsigned int*) TP_PCR_LATCH_reg)=data)
#define get_TP_PCR_LATCH_reg   (*((volatile unsigned int*) TP_PCR_LATCH_reg))
#define TP_PCR_LATCH_inst_adr                                                        "0x0095"
#define TP_PCR_LATCH_inst                                                            0x0095
#define TP_PCR_LATCH_latch_ena_shift                                                 (8)
#define TP_PCR_LATCH_latch_ena_mask                                                  (0x00000100)
#define TP_PCR_LATCH_latch_ena(data)                                                 (0x00000100&((data)<<8))
#define TP_PCR_LATCH_latch_ena_src(data)                                             ((0x00000100&(data))>>8)
#define TP_PCR_LATCH_get_latch_ena(data)                                             ((0x00000100&(data))>>8)
#define TP_PCR_LATCH_latch_sel_shift                                                 (0)
#define TP_PCR_LATCH_latch_sel_mask                                                  (0x00000003)
#define TP_PCR_LATCH_latch_sel(data)                                                 (0x00000003&((data)<<0))
#define TP_PCR_LATCH_latch_sel_src(data)                                             ((0x00000003&(data))>>0)
#define TP_PCR_LATCH_get_latch_sel(data)                                             ((0x00000003&(data))>>0)


#define TP_PCR_BASE                                                                  0x98014258
#define TP_PCR_BASE_reg_addr                                                         "0xD8014258"
#define TP_PCR_BASE_reg                                                              0xD8014258
#define set_TP_PCR_BASE_reg(data)   (*((volatile unsigned int*) TP_PCR_BASE_reg)=data)
#define get_TP_PCR_BASE_reg   (*((volatile unsigned int*) TP_PCR_BASE_reg))
#define TP_PCR_BASE_inst_adr                                                         "0x0096"
#define TP_PCR_BASE_inst                                                             0x0096
#define TP_PCR_BASE_pcr_base_lo_shift                                                (0)
#define TP_PCR_BASE_pcr_base_lo_mask                                                 (0xFFFFFFFF)
#define TP_PCR_BASE_pcr_base_lo(data)                                                (0xFFFFFFFF&((data)<<0))
#define TP_PCR_BASE_pcr_base_lo_src(data)                                            ((0xFFFFFFFF&(data))>>0)
#define TP_PCR_BASE_get_pcr_base_lo(data)                                            ((0xFFFFFFFF&(data))>>0)


#define TP_PCR_EXT                                                                   0x9801425C
#define TP_PCR_EXT_reg_addr                                                          "0xD801425C"
#define TP_PCR_EXT_reg                                                               0xD801425C
#define set_TP_PCR_EXT_reg(data)   (*((volatile unsigned int*) TP_PCR_EXT_reg)=data)
#define get_TP_PCR_EXT_reg   (*((volatile unsigned int*) TP_PCR_EXT_reg))
#define TP_PCR_EXT_inst_adr                                                          "0x0097"
#define TP_PCR_EXT_inst                                                              0x0097
#define TP_PCR_EXT_pcr_base_hi_shift                                                 (16)
#define TP_PCR_EXT_pcr_base_hi_mask                                                  (0x00010000)
#define TP_PCR_EXT_pcr_base_hi(data)                                                 (0x00010000&((data)<<16))
#define TP_PCR_EXT_pcr_base_hi_src(data)                                             ((0x00010000&(data))>>16)
#define TP_PCR_EXT_get_pcr_base_hi(data)                                             ((0x00010000&(data))>>16)
#define TP_PCR_EXT_pcr_ext_shift                                                     (0)
#define TP_PCR_EXT_pcr_ext_mask                                                      (0x000001FF)
#define TP_PCR_EXT_pcr_ext(data)                                                     (0x000001FF&((data)<<0))
#define TP_PCR_EXT_pcr_ext_src(data)                                                 ((0x000001FF&(data))>>0)
#define TP_PCR_EXT_get_pcr_ext(data)                                                 ((0x000001FF&(data))>>0)


#define TP_PCR_SYSTEM                                                                0x98014260
#define TP_PCR_SYSTEM_reg_addr                                                       "0xD8014260"
#define TP_PCR_SYSTEM_reg                                                            0xD8014260
#define set_TP_PCR_SYSTEM_reg(data)   (*((volatile unsigned int*) TP_PCR_SYSTEM_reg)=data)
#define get_TP_PCR_SYSTEM_reg   (*((volatile unsigned int*) TP_PCR_SYSTEM_reg))
#define TP_PCR_SYSTEM_inst_adr                                                       "0x0098"
#define TP_PCR_SYSTEM_inst                                                           0x0098
#define TP_PCR_SYSTEM_system_ts_shift                                                (0)
#define TP_PCR_SYSTEM_system_ts_mask                                                 (0xFFFFFFFF)
#define TP_PCR_SYSTEM_system_ts(data)                                                (0xFFFFFFFF&((data)<<0))
#define TP_PCR_SYSTEM_system_ts_src(data)                                            ((0xFFFFFFFF&(data))>>0)
#define TP_PCR_SYSTEM_get_system_ts(data)                                            ((0xFFFFFFFF&(data))>>0)


#define TP_TF1_CNT                                                                   0x98014014
#define TP_TF1_CNT_reg_addr                                                          "0xD8014014"
#define TP_TF1_CNT_reg                                                               0xD8014014
#define set_TP_TF1_CNT_reg(data)   (*((volatile unsigned int*) TP_TF1_CNT_reg)=data)
#define get_TP_TF1_CNT_reg   (*((volatile unsigned int*) TP_TF1_CNT_reg))
#define TP_TF1_CNT_inst_adr                                                          "0x0005"
#define TP_TF1_CNT_inst                                                              0x0005
#define TP_TF1_CNT_cnt_shift                                                         (0)
#define TP_TF1_CNT_cnt_mask                                                          (0x00FFFFFF)
#define TP_TF1_CNT_cnt(data)                                                         (0x00FFFFFF&((data)<<0))
#define TP_TF1_CNT_cnt_src(data)                                                     ((0x00FFFFFF&(data))>>0)
#define TP_TF1_CNT_get_cnt(data)                                                     ((0x00FFFFFF&(data))>>0)


#define TP_TF1_DRP_CNT                                                               0x98014018
#define TP_TF1_DRP_CNT_reg_addr                                                      "0xD8014018"
#define TP_TF1_DRP_CNT_reg                                                           0xD8014018
#define set_TP_TF1_DRP_CNT_reg(data)   (*((volatile unsigned int*) TP_TF1_DRP_CNT_reg)=data)
#define get_TP_TF1_DRP_CNT_reg   (*((volatile unsigned int*) TP_TF1_DRP_CNT_reg))
#define TP_TF1_DRP_CNT_inst_adr                                                      "0x0006"
#define TP_TF1_DRP_CNT_inst                                                          0x0006
#define TP_TF1_DRP_CNT_drp_cnt_shift                                                 (0)
#define TP_TF1_DRP_CNT_drp_cnt_mask                                                  (0x0000FFFF)
#define TP_TF1_DRP_CNT_drp_cnt(data)                                                 (0x0000FFFF&((data)<<0))
#define TP_TF1_DRP_CNT_drp_cnt_src(data)                                             ((0x0000FFFF&(data))>>0)
#define TP_TF1_DRP_CNT_get_drp_cnt(data)                                             ((0x0000FFFF&(data))>>0)


#define TP_TF1_ERR_CNT                                                               0x9801401C
#define TP_TF1_ERR_CNT_reg_addr                                                      "0xD801401C"
#define TP_TF1_ERR_CNT_reg                                                           0xD801401C
#define set_TP_TF1_ERR_CNT_reg(data)   (*((volatile unsigned int*) TP_TF1_ERR_CNT_reg)=data)
#define get_TP_TF1_ERR_CNT_reg   (*((volatile unsigned int*) TP_TF1_ERR_CNT_reg))
#define TP_TF1_ERR_CNT_inst_adr                                                      "0x0007"
#define TP_TF1_ERR_CNT_inst                                                          0x0007
#define TP_TF1_ERR_CNT_err_cnt_shift                                                 (0)
#define TP_TF1_ERR_CNT_err_cnt_mask                                                  (0x0000FFFF)
#define TP_TF1_ERR_CNT_err_cnt(data)                                                 (0x0000FFFF&((data)<<0))
#define TP_TF1_ERR_CNT_err_cnt_src(data)                                             ((0x0000FFFF&(data))>>0)
#define TP_TF1_ERR_CNT_get_err_cnt(data)                                             ((0x0000FFFF&(data))>>0)


#define TP_TF0_FRMCFG                                                                0x98014824
#define TP_TF0_FRMCFG_reg_addr                                                       "0xD8014824"
#define TP_TF0_FRMCFG_reg                                                            0xD8014824
#define set_TP_TF0_FRMCFG_reg(data)   (*((volatile unsigned int*) TP_TF0_FRMCFG_reg)=data)
#define get_TP_TF0_FRMCFG_reg   (*((volatile unsigned int*) TP_TF0_FRMCFG_reg))
#define TP_TF0_FRMCFG_inst_adr                                                       "0x0009"
#define TP_TF0_FRMCFG_inst                                                           0x0009
#define TP_TF0_FRMCFG_sync_byte_shift                                                (24)
#define TP_TF0_FRMCFG_sync_byte_mask                                                 (0xFF000000)
#define TP_TF0_FRMCFG_sync_byte(data)                                                (0xFF000000&((data)<<24))
#define TP_TF0_FRMCFG_sync_byte_src(data)                                            ((0xFF000000&(data))>>24)
#define TP_TF0_FRMCFG_get_sync_byte(data)                                            ((0xFF000000&(data))>>24)
#define TP_TF0_FRMCFG_dropno_shift                                                   (20)
#define TP_TF0_FRMCFG_dropno_mask                                                    (0x00F00000)
#define TP_TF0_FRMCFG_dropno(data)                                                   (0x00F00000&((data)<<20))
#define TP_TF0_FRMCFG_dropno_src(data)                                               ((0x00F00000&(data))>>20)
#define TP_TF0_FRMCFG_get_dropno(data)                                               ((0x00F00000&(data))>>20)
#define TP_TF0_FRMCFG_lockno_shift                                                   (16)
#define TP_TF0_FRMCFG_lockno_mask                                                    (0x000F0000)
#define TP_TF0_FRMCFG_lockno(data)                                                   (0x000F0000&((data)<<16))
#define TP_TF0_FRMCFG_lockno_src(data)                                               ((0x000F0000&(data))>>16)
#define TP_TF0_FRMCFG_get_lockno(data)                                               ((0x000F0000&(data))>>16)
#define TP_TF0_FRMCFG_packet_size_shift                                              (14)
#define TP_TF0_FRMCFG_packet_size_mask                                               (0x0000C000)
#define TP_TF0_FRMCFG_packet_size(data)                                              (0x0000C000&((data)<<14))
#define TP_TF0_FRMCFG_packet_size_src(data)                                          ((0x0000C000&(data))>>14)
#define TP_TF0_FRMCFG_get_packet_size(data)                                          ((0x0000C000&(data))>>14)
#define TP_TF0_FRMCFG_data_order_shift                                               (13)
#define TP_TF0_FRMCFG_data_order_mask                                                (0x00002000)
#define TP_TF0_FRMCFG_data_order(data)                                               (0x00002000&((data)<<13))
#define TP_TF0_FRMCFG_data_order_src(data)                                           ((0x00002000&(data))>>13)
#define TP_TF0_FRMCFG_get_data_order(data)                                           ((0x00002000&(data))>>13)
#define TP_TF0_FRMCFG_frm_en_shift                                                   (12)
#define TP_TF0_FRMCFG_frm_en_mask                                                    (0x00001000)
#define TP_TF0_FRMCFG_frm_en(data)                                                   (0x00001000&((data)<<12))
#define TP_TF0_FRMCFG_frm_en_src(data)                                               ((0x00001000&(data))>>12)
#define TP_TF0_FRMCFG_get_frm_en(data)                                               ((0x00001000&(data))>>12)
#define TP_TF0_FRMCFG_forcedrop_shift                                                (11)
#define TP_TF0_FRMCFG_forcedrop_mask                                                 (0x00000800)
#define TP_TF0_FRMCFG_forcedrop(data)                                                (0x00000800&((data)<<11))
#define TP_TF0_FRMCFG_forcedrop_src(data)                                            ((0x00000800&(data))>>11)
#define TP_TF0_FRMCFG_get_forcedrop(data)                                            ((0x00000800&(data))>>11)
#define TP_TF0_FRMCFG_syncmode_shift                                                 (6)
#define TP_TF0_FRMCFG_syncmode_mask                                                  (0x000007C0)
#define TP_TF0_FRMCFG_syncmode(data)                                                 (0x000007C0&((data)<<6))
#define TP_TF0_FRMCFG_syncmode_src(data)                                             ((0x000007C0&(data))>>6)
#define TP_TF0_FRMCFG_get_syncmode(data)                                             ((0x000007C0&(data))>>6)
#define TP_TF0_FRMCFG_serial_shift                                                   (5)
#define TP_TF0_FRMCFG_serial_mask                                                    (0x00000020)
#define TP_TF0_FRMCFG_serial(data)                                                   (0x00000020&((data)<<5))
#define TP_TF0_FRMCFG_serial_src(data)                                               ((0x00000020&(data))>>5)
#define TP_TF0_FRMCFG_get_serial(data)                                               ((0x00000020&(data))>>5)
#define TP_TF0_FRMCFG_datapin_shift                                                  (4)
#define TP_TF0_FRMCFG_datapin_mask                                                   (0x00000010)
#define TP_TF0_FRMCFG_datapin(data)                                                  (0x00000010&((data)<<4))
#define TP_TF0_FRMCFG_datapin_src(data)                                              ((0x00000010&(data))>>4)
#define TP_TF0_FRMCFG_get_datapin(data)                                              ((0x00000010&(data))>>4)
#define TP_TF0_FRMCFG_err_pol_shift                                                  (3)
#define TP_TF0_FRMCFG_err_pol_mask                                                   (0x00000008)
#define TP_TF0_FRMCFG_err_pol(data)                                                  (0x00000008&((data)<<3))
#define TP_TF0_FRMCFG_err_pol_src(data)                                              ((0x00000008&(data))>>3)
#define TP_TF0_FRMCFG_get_err_pol(data)                                              ((0x00000008&(data))>>3)
#define TP_TF0_FRMCFG_sync_pol_shift                                                 (2)
#define TP_TF0_FRMCFG_sync_pol_mask                                                  (0x00000004)
#define TP_TF0_FRMCFG_sync_pol(data)                                                 (0x00000004&((data)<<2))
#define TP_TF0_FRMCFG_sync_pol_src(data)                                             ((0x00000004&(data))>>2)
#define TP_TF0_FRMCFG_get_sync_pol(data)                                             ((0x00000004&(data))>>2)
#define TP_TF0_FRMCFG_val_pol_shift                                                  (1)
#define TP_TF0_FRMCFG_val_pol_mask                                                   (0x00000002)
#define TP_TF0_FRMCFG_val_pol(data)                                                  (0x00000002&((data)<<1))
#define TP_TF0_FRMCFG_val_pol_src(data)                                              ((0x00000002&(data))>>1)
#define TP_TF0_FRMCFG_get_val_pol(data)                                              ((0x00000002&(data))>>1)
#define TP_TF0_FRMCFG_clk_pol_shift                                                  (0)
#define TP_TF0_FRMCFG_clk_pol_mask                                                   (0x00000001)
#define TP_TF0_FRMCFG_clk_pol(data)                                                  (0x00000001&((data)<<0))
#define TP_TF0_FRMCFG_clk_pol_src(data)                                              ((0x00000001&(data))>>0)
#define TP_TF0_FRMCFG_get_clk_pol(data)                                              ((0x00000001&(data))>>0)


#define TP_TF0_INT                                                                   0x98014828
#define TP_TF0_INT_reg_addr                                                          "0xD8014828"
#define TP_TF0_INT_reg                                                               0xD8014828
#define set_TP_TF0_INT_reg(data)   (*((volatile unsigned int*) TP_TF0_INT_reg)=data)
#define get_TP_TF0_INT_reg   (*((volatile unsigned int*) TP_TF0_INT_reg))
#define TP_TF0_INT_inst_adr                                                          "0x000A"
#define TP_TF0_INT_inst                                                              0x000A
#define TP_TF0_INT_adf_pcr_in_shift                                                  (4)
#define TP_TF0_INT_adf_pcr_in_mask                                                   (0x00000010)
#define TP_TF0_INT_adf_pcr_in(data)                                                  (0x00000010&((data)<<4))
#define TP_TF0_INT_adf_pcr_in_src(data)                                              ((0x00000010&(data))>>4)
#define TP_TF0_INT_get_adf_pcr_in(data)                                              ((0x00000010&(data))>>4)
#define TP_TF0_INT_overflow_shift                                                    (3)
#define TP_TF0_INT_overflow_mask                                                     (0x00000008)
#define TP_TF0_INT_overflow(data)                                                    (0x00000008&((data)<<3))
#define TP_TF0_INT_overflow_src(data)                                                ((0x00000008&(data))>>3)
#define TP_TF0_INT_get_overflow(data)                                                ((0x00000008&(data))>>3)
#define TP_TF0_INT_drop_shift                                                        (2)
#define TP_TF0_INT_drop_mask                                                         (0x00000004)
#define TP_TF0_INT_drop(data)                                                        (0x00000004&((data)<<2))
#define TP_TF0_INT_drop_src(data)                                                    ((0x00000004&(data))>>2)
#define TP_TF0_INT_get_drop(data)                                                    ((0x00000004&(data))>>2)
#define TP_TF0_INT_sync_shift                                                        (1)
#define TP_TF0_INT_sync_mask                                                         (0x00000002)
#define TP_TF0_INT_sync(data)                                                        (0x00000002&((data)<<1))
#define TP_TF0_INT_sync_src(data)                                                    ((0x00000002&(data))>>1)
#define TP_TF0_INT_get_sync(data)                                                    ((0x00000002&(data))>>1)
#define TP_TF0_INT_write_data_shift                                                  (0)
#define TP_TF0_INT_write_data_mask                                                   (0x00000001)
#define TP_TF0_INT_write_data(data)                                                  (0x00000001&((data)<<0))
#define TP_TF0_INT_write_data_src(data)                                              ((0x00000001&(data))>>0)
#define TP_TF0_INT_get_write_data(data)                                              ((0x00000001&(data))>>0)


#define TP_TF0_INT_EN                                                                0x9801482C
#define TP_TF0_INT_EN_reg_addr                                                       "0xD801482C"
#define TP_TF0_INT_EN_reg                                                            0xD801482C
#define set_TP_TF0_INT_EN_reg(data)   (*((volatile unsigned int*) TP_TF0_INT_EN_reg)=data)
#define get_TP_TF0_INT_EN_reg   (*((volatile unsigned int*) TP_TF0_INT_EN_reg))
#define TP_TF0_INT_EN_inst_adr                                                       "0x000B"
#define TP_TF0_INT_EN_inst                                                           0x000B
#define TP_TF0_INT_EN_adf_pcr_in_en_shift                                            (4)
#define TP_TF0_INT_EN_adf_pcr_in_en_mask                                             (0x00000010)
#define TP_TF0_INT_EN_adf_pcr_in_en(data)                                            (0x00000010&((data)<<4))
#define TP_TF0_INT_EN_adf_pcr_in_en_src(data)                                        ((0x00000010&(data))>>4)
#define TP_TF0_INT_EN_get_adf_pcr_in_en(data)                                        ((0x00000010&(data))>>4)
#define TP_TF0_INT_EN_overflow_en_shift                                              (3)
#define TP_TF0_INT_EN_overflow_en_mask                                               (0x00000008)
#define TP_TF0_INT_EN_overflow_en(data)                                              (0x00000008&((data)<<3))
#define TP_TF0_INT_EN_overflow_en_src(data)                                          ((0x00000008&(data))>>3)
#define TP_TF0_INT_EN_get_overflow_en(data)                                          ((0x00000008&(data))>>3)
#define TP_TF0_INT_EN_drop_en_shift                                                  (2)
#define TP_TF0_INT_EN_drop_en_mask                                                   (0x00000004)
#define TP_TF0_INT_EN_drop_en(data)                                                  (0x00000004&((data)<<2))
#define TP_TF0_INT_EN_drop_en_src(data)                                              ((0x00000004&(data))>>2)
#define TP_TF0_INT_EN_get_drop_en(data)                                              ((0x00000004&(data))>>2)
#define TP_TF0_INT_EN_sync_en_shift                                                  (1)
#define TP_TF0_INT_EN_sync_en_mask                                                   (0x00000002)
#define TP_TF0_INT_EN_sync_en(data)                                                  (0x00000002&((data)<<1))
#define TP_TF0_INT_EN_sync_en_src(data)                                              ((0x00000002&(data))>>1)
#define TP_TF0_INT_EN_get_sync_en(data)                                              ((0x00000002&(data))>>1)
#define TP_TF0_INT_EN_write_data_shift                                               (0)
#define TP_TF0_INT_EN_write_data_mask                                                (0x00000001)
#define TP_TF0_INT_EN_write_data(data)                                               (0x00000001&((data)<<0))
#define TP_TF0_INT_EN_write_data_src(data)                                           ((0x00000001&(data))>>0)
#define TP_TF0_INT_EN_get_write_data(data)                                           ((0x00000001&(data))>>0)


#define TP_TF1_FRMCFG                                                                0x98014830
#define TP_TF1_FRMCFG_reg_addr                                                       "0xD8014830"
#define TP_TF1_FRMCFG_reg                                                            0xD8014830
#define set_TP_TF1_FRMCFG_reg(data)   (*((volatile unsigned int*) TP_TF1_FRMCFG_reg)=data)
#define get_TP_TF1_FRMCFG_reg   (*((volatile unsigned int*) TP_TF1_FRMCFG_reg))
#define TP_TF1_FRMCFG_inst_adr                                                       "0x000C"
#define TP_TF1_FRMCFG_inst                                                           0x000C
#define TP_TF1_FRMCFG_sync_byte_shift                                                (24)
#define TP_TF1_FRMCFG_sync_byte_mask                                                 (0xFF000000)
#define TP_TF1_FRMCFG_sync_byte(data)                                                (0xFF000000&((data)<<24))
#define TP_TF1_FRMCFG_sync_byte_src(data)                                            ((0xFF000000&(data))>>24)
#define TP_TF1_FRMCFG_get_sync_byte(data)                                            ((0xFF000000&(data))>>24)
#define TP_TF1_FRMCFG_dropno_shift                                                   (20)
#define TP_TF1_FRMCFG_dropno_mask                                                    (0x00F00000)
#define TP_TF1_FRMCFG_dropno(data)                                                   (0x00F00000&((data)<<20))
#define TP_TF1_FRMCFG_dropno_src(data)                                               ((0x00F00000&(data))>>20)
#define TP_TF1_FRMCFG_get_dropno(data)                                               ((0x00F00000&(data))>>20)
#define TP_TF1_FRMCFG_lockno_shift                                                   (16)
#define TP_TF1_FRMCFG_lockno_mask                                                    (0x000F0000)
#define TP_TF1_FRMCFG_lockno(data)                                                   (0x000F0000&((data)<<16))
#define TP_TF1_FRMCFG_lockno_src(data)                                               ((0x000F0000&(data))>>16)
#define TP_TF1_FRMCFG_get_lockno(data)                                               ((0x000F0000&(data))>>16)
#define TP_TF1_FRMCFG_packet_size_shift                                              (14)
#define TP_TF1_FRMCFG_packet_size_mask                                               (0x0000C000)
#define TP_TF1_FRMCFG_packet_size(data)                                              (0x0000C000&((data)<<14))
#define TP_TF1_FRMCFG_packet_size_src(data)                                          ((0x0000C000&(data))>>14)
#define TP_TF1_FRMCFG_get_packet_size(data)                                          ((0x0000C000&(data))>>14)
#define TP_TF1_FRMCFG_data_order_shift                                               (13)
#define TP_TF1_FRMCFG_data_order_mask                                                (0x00002000)
#define TP_TF1_FRMCFG_data_order(data)                                               (0x00002000&((data)<<13))
#define TP_TF1_FRMCFG_data_order_src(data)                                           ((0x00002000&(data))>>13)
#define TP_TF1_FRMCFG_get_data_order(data)                                           ((0x00002000&(data))>>13)
#define TP_TF1_FRMCFG_frm_en_shift                                                   (12)
#define TP_TF1_FRMCFG_frm_en_mask                                                    (0x00001000)
#define TP_TF1_FRMCFG_frm_en(data)                                                   (0x00001000&((data)<<12))
#define TP_TF1_FRMCFG_frm_en_src(data)                                               ((0x00001000&(data))>>12)
#define TP_TF1_FRMCFG_get_frm_en(data)                                               ((0x00001000&(data))>>12)
#define TP_TF1_FRMCFG_forcedrop_shift                                                (11)
#define TP_TF1_FRMCFG_forcedrop_mask                                                 (0x00000800)
#define TP_TF1_FRMCFG_forcedrop(data)                                                (0x00000800&((data)<<11))
#define TP_TF1_FRMCFG_forcedrop_src(data)                                            ((0x00000800&(data))>>11)
#define TP_TF1_FRMCFG_get_forcedrop(data)                                            ((0x00000800&(data))>>11)
#define TP_TF1_FRMCFG_syncmode_shift                                                 (6)
#define TP_TF1_FRMCFG_syncmode_mask                                                  (0x000007C0)
#define TP_TF1_FRMCFG_syncmode(data)                                                 (0x000007C0&((data)<<6))
#define TP_TF1_FRMCFG_syncmode_src(data)                                             ((0x000007C0&(data))>>6)
#define TP_TF1_FRMCFG_get_syncmode(data)                                             ((0x000007C0&(data))>>6)
#define TP_TF1_FRMCFG_serial_shift                                                   (5)
#define TP_TF1_FRMCFG_serial_mask                                                    (0x00000020)
#define TP_TF1_FRMCFG_serial(data)                                                   (0x00000020&((data)<<5))
#define TP_TF1_FRMCFG_serial_src(data)                                               ((0x00000020&(data))>>5)
#define TP_TF1_FRMCFG_get_serial(data)                                               ((0x00000020&(data))>>5)
#define TP_TF1_FRMCFG_datapin_shift                                                  (4)
#define TP_TF1_FRMCFG_datapin_mask                                                   (0x00000010)
#define TP_TF1_FRMCFG_datapin(data)                                                  (0x00000010&((data)<<4))
#define TP_TF1_FRMCFG_datapin_src(data)                                              ((0x00000010&(data))>>4)
#define TP_TF1_FRMCFG_get_datapin(data)                                              ((0x00000010&(data))>>4)
#define TP_TF1_FRMCFG_err_pol_shift                                                  (3)
#define TP_TF1_FRMCFG_err_pol_mask                                                   (0x00000008)
#define TP_TF1_FRMCFG_err_pol(data)                                                  (0x00000008&((data)<<3))
#define TP_TF1_FRMCFG_err_pol_src(data)                                              ((0x00000008&(data))>>3)
#define TP_TF1_FRMCFG_get_err_pol(data)                                              ((0x00000008&(data))>>3)
#define TP_TF1_FRMCFG_sync_pol_shift                                                 (2)
#define TP_TF1_FRMCFG_sync_pol_mask                                                  (0x00000004)
#define TP_TF1_FRMCFG_sync_pol(data)                                                 (0x00000004&((data)<<2))
#define TP_TF1_FRMCFG_sync_pol_src(data)                                             ((0x00000004&(data))>>2)
#define TP_TF1_FRMCFG_get_sync_pol(data)                                             ((0x00000004&(data))>>2)
#define TP_TF1_FRMCFG_val_pol_shift                                                  (1)
#define TP_TF1_FRMCFG_val_pol_mask                                                   (0x00000002)
#define TP_TF1_FRMCFG_val_pol(data)                                                  (0x00000002&((data)<<1))
#define TP_TF1_FRMCFG_val_pol_src(data)                                              ((0x00000002&(data))>>1)
#define TP_TF1_FRMCFG_get_val_pol(data)                                              ((0x00000002&(data))>>1)
#define TP_TF1_FRMCFG_clk_pol_shift                                                  (0)
#define TP_TF1_FRMCFG_clk_pol_mask                                                   (0x00000001)
#define TP_TF1_FRMCFG_clk_pol(data)                                                  (0x00000001&((data)<<0))
#define TP_TF1_FRMCFG_clk_pol_src(data)                                              ((0x00000001&(data))>>0)
#define TP_TF1_FRMCFG_get_clk_pol(data)                                              ((0x00000001&(data))>>0)


#define TP_TF1_INT                                                                   0x98014834
#define TP_TF1_INT_reg_addr                                                          "0xD8014834"
#define TP_TF1_INT_reg                                                               0xD8014834
#define set_TP_TF1_INT_reg(data)   (*((volatile unsigned int*) TP_TF1_INT_reg)=data)
#define get_TP_TF1_INT_reg   (*((volatile unsigned int*) TP_TF1_INT_reg))
#define TP_TF1_INT_inst_adr                                                          "0x000D"
#define TP_TF1_INT_inst                                                              0x000D
#define TP_TF1_INT_adf_pcr_in_shift                                                  (4)
#define TP_TF1_INT_adf_pcr_in_mask                                                   (0x00000010)
#define TP_TF1_INT_adf_pcr_in(data)                                                  (0x00000010&((data)<<4))
#define TP_TF1_INT_adf_pcr_in_src(data)                                              ((0x00000010&(data))>>4)
#define TP_TF1_INT_get_adf_pcr_in(data)                                              ((0x00000010&(data))>>4)
#define TP_TF1_INT_overflow_shift                                                    (3)
#define TP_TF1_INT_overflow_mask                                                     (0x00000008)
#define TP_TF1_INT_overflow(data)                                                    (0x00000008&((data)<<3))
#define TP_TF1_INT_overflow_src(data)                                                ((0x00000008&(data))>>3)
#define TP_TF1_INT_get_overflow(data)                                                ((0x00000008&(data))>>3)
#define TP_TF1_INT_drop_shift                                                        (2)
#define TP_TF1_INT_drop_mask                                                         (0x00000004)
#define TP_TF1_INT_drop(data)                                                        (0x00000004&((data)<<2))
#define TP_TF1_INT_drop_src(data)                                                    ((0x00000004&(data))>>2)
#define TP_TF1_INT_get_drop(data)                                                    ((0x00000004&(data))>>2)
#define TP_TF1_INT_sync_shift                                                        (1)
#define TP_TF1_INT_sync_mask                                                         (0x00000002)
#define TP_TF1_INT_sync(data)                                                        (0x00000002&((data)<<1))
#define TP_TF1_INT_sync_src(data)                                                    ((0x00000002&(data))>>1)
#define TP_TF1_INT_get_sync(data)                                                    ((0x00000002&(data))>>1)
#define TP_TF1_INT_write_data_shift                                                  (0)
#define TP_TF1_INT_write_data_mask                                                   (0x00000001)
#define TP_TF1_INT_write_data(data)                                                  (0x00000001&((data)<<0))
#define TP_TF1_INT_write_data_src(data)                                              ((0x00000001&(data))>>0)
#define TP_TF1_INT_get_write_data(data)                                              ((0x00000001&(data))>>0)


#define TP_TF1_INT_EN                                                                0x9801483C
#define TP_TF1_INT_EN_reg_addr                                                       "0xD801483C"
#define TP_TF1_INT_EN_reg                                                            0xD801483C
#define set_TP_TF1_INT_EN_reg(data)   (*((volatile unsigned int*) TP_TF1_INT_EN_reg)=data)
#define get_TP_TF1_INT_EN_reg   (*((volatile unsigned int*) TP_TF1_INT_EN_reg))
#define TP_TF1_INT_EN_inst_adr                                                       "0x000F"
#define TP_TF1_INT_EN_inst                                                           0x000F
#define TP_TF1_INT_EN_adf_pcr_in_en_shift                                            (4)
#define TP_TF1_INT_EN_adf_pcr_in_en_mask                                             (0x00000010)
#define TP_TF1_INT_EN_adf_pcr_in_en(data)                                            (0x00000010&((data)<<4))
#define TP_TF1_INT_EN_adf_pcr_in_en_src(data)                                        ((0x00000010&(data))>>4)
#define TP_TF1_INT_EN_get_adf_pcr_in_en(data)                                        ((0x00000010&(data))>>4)
#define TP_TF1_INT_EN_overflow_en_shift                                              (3)
#define TP_TF1_INT_EN_overflow_en_mask                                               (0x00000008)
#define TP_TF1_INT_EN_overflow_en(data)                                              (0x00000008&((data)<<3))
#define TP_TF1_INT_EN_overflow_en_src(data)                                          ((0x00000008&(data))>>3)
#define TP_TF1_INT_EN_get_overflow_en(data)                                          ((0x00000008&(data))>>3)
#define TP_TF1_INT_EN_drop_en_shift                                                  (2)
#define TP_TF1_INT_EN_drop_en_mask                                                   (0x00000004)
#define TP_TF1_INT_EN_drop_en(data)                                                  (0x00000004&((data)<<2))
#define TP_TF1_INT_EN_drop_en_src(data)                                              ((0x00000004&(data))>>2)
#define TP_TF1_INT_EN_get_drop_en(data)                                              ((0x00000004&(data))>>2)
#define TP_TF1_INT_EN_sync_en_shift                                                  (1)
#define TP_TF1_INT_EN_sync_en_mask                                                   (0x00000002)
#define TP_TF1_INT_EN_sync_en(data)                                                  (0x00000002&((data)<<1))
#define TP_TF1_INT_EN_sync_en_src(data)                                              ((0x00000002&(data))>>1)
#define TP_TF1_INT_EN_get_sync_en(data)                                              ((0x00000002&(data))>>1)
#define TP_TF1_INT_EN_write_data_shift                                               (0)
#define TP_TF1_INT_EN_write_data_mask                                                (0x00000001)
#define TP_TF1_INT_EN_write_data(data)                                               (0x00000001&((data)<<0))
#define TP_TF1_INT_EN_write_data_src(data)                                           ((0x00000001&(data))>>0)
#define TP_TF1_INT_EN_get_write_data(data)                                           ((0x00000001&(data))>>0)


#define TP_PID_PART                                                                  0x98014024
#define TP_PID_PART_reg_addr                                                         "0xD8014024"
#define TP_PID_PART_reg                                                              0xD8014024
#define set_TP_PID_PART_reg(data)   (*((volatile unsigned int*) TP_PID_PART_reg)=data)
#define get_TP_PID_PART_reg   (*((volatile unsigned int*) TP_PID_PART_reg))
#define TP_PID_PART_inst_adr                                                         "0x0009"
#define TP_PID_PART_inst                                                             0x0009
#define TP_PID_PART_partition2_shift                                                 (8)
#define TP_PID_PART_partition2_mask                                                  (0x00007F00)
#define TP_PID_PART_partition2(data)                                                 (0x00007F00&((data)<<8))
#define TP_PID_PART_partition2_src(data)                                             ((0x00007F00&(data))>>8)
#define TP_PID_PART_get_partition2(data)                                             ((0x00007F00&(data))>>8)
#define TP_PID_PART_partition1_shift                                                 (0)
#define TP_PID_PART_partition1_mask                                                  (0x0000007F)
#define TP_PID_PART_partition1(data)                                                 (0x0000007F&((data)<<0))
#define TP_PID_PART_partition1_src(data)                                             ((0x0000007F&(data))>>0)
#define TP_PID_PART_get_partition1(data)                                             ((0x0000007F&(data))>>0)


#define TP_PID_CTRL                                                                  0x98014028
#define TP_PID_CTRL_reg_addr                                                         "0xD8014028"
#define TP_PID_CTRL_reg                                                              0xD8014028
#define set_TP_PID_CTRL_reg(data)   (*((volatile unsigned int*) TP_PID_CTRL_reg)=data)
#define get_TP_PID_CTRL_reg   (*((volatile unsigned int*) TP_PID_CTRL_reg))
#define TP_PID_CTRL_inst_adr                                                         "0x000A"
#define TP_PID_CTRL_inst                                                             0x000A
#define TP_PID_CTRL_r_w_shift                                                        (7)
#define TP_PID_CTRL_r_w_mask                                                         (0x00000080)
#define TP_PID_CTRL_r_w(data)                                                        (0x00000080&((data)<<7))
#define TP_PID_CTRL_r_w_src(data)                                                    ((0x00000080&(data))>>7)
#define TP_PID_CTRL_get_r_w(data)                                                    ((0x00000080&(data))>>7)
#define TP_PID_CTRL_idx_shift                                                        (0)
#define TP_PID_CTRL_idx_mask                                                         (0x0000007F)
#define TP_PID_CTRL_idx(data)                                                        (0x0000007F&((data)<<0))
#define TP_PID_CTRL_idx_src(data)                                                    ((0x0000007F&(data))>>0)
#define TP_PID_CTRL_get_idx(data)                                                    ((0x0000007F&(data))>>0)


#define TP_PID_DATA                                                                  0x9801402C
#define TP_PID_DATA_reg_addr                                                         "0xD801402C"
#define TP_PID_DATA_reg                                                              0xD801402C
#define set_TP_PID_DATA_reg(data)   (*((volatile unsigned int*) TP_PID_DATA_reg)=data)
#define get_TP_PID_DATA_reg   (*((volatile unsigned int*) TP_PID_DATA_reg))
#define TP_PID_DATA_inst_adr                                                         "0x000B"
#define TP_PID_DATA_inst                                                             0x000B
#define TP_PID_DATA_si_en_shift                                                      (31)
#define TP_PID_DATA_si_en_mask                                                       (0x80000000)
#define TP_PID_DATA_si_en(data)                                                      (0x80000000&((data)<<31))
#define TP_PID_DATA_si_en_src(data)                                                  ((0x80000000&(data))>>31)
#define TP_PID_DATA_get_si_en(data)                                                  ((0x80000000&(data))>>31)
#define TP_PID_DATA_pid_ini_shift                                                    (30)
#define TP_PID_DATA_pid_ini_mask                                                     (0x40000000)
#define TP_PID_DATA_pid_ini(data)                                                    (0x40000000&((data)<<30))
#define TP_PID_DATA_pid_ini_src(data)                                                ((0x40000000&(data))>>30)
#define TP_PID_DATA_get_pid_ini(data)                                                ((0x40000000&(data))>>30)
#define TP_PID_DATA_ai_en_shift                                                      (29)
#define TP_PID_DATA_ai_en_mask                                                       (0x20000000)
#define TP_PID_DATA_ai_en(data)                                                      (0x20000000&((data)<<29))
#define TP_PID_DATA_ai_en_src(data)                                                  ((0x20000000&(data))>>29)
#define TP_PID_DATA_get_ai_en(data)                                                  ((0x20000000&(data))>>29)
#define TP_PID_DATA_ti_en_shift                                                      (28)
#define TP_PID_DATA_ti_en_mask                                                       (0x10000000)
#define TP_PID_DATA_ti_en(data)                                                      (0x10000000&((data)<<28))
#define TP_PID_DATA_ti_en_src(data)                                                  ((0x10000000&(data))>>28)
#define TP_PID_DATA_get_ti_en(data)                                                  ((0x10000000&(data))>>28)
#define TP_PID_DATA_sec_idx_shift                                                    (22)
#define TP_PID_DATA_sec_idx_mask                                                     (0x0FC00000)
#define TP_PID_DATA_sec_idx(data)                                                    (0x0FC00000&((data)<<22))
#define TP_PID_DATA_sec_idx_src(data)                                                ((0x0FC00000&(data))>>22)
#define TP_PID_DATA_get_sec_idx(data)                                                ((0x0FC00000&(data))>>22)
#define TP_PID_DATA_sec_en_shift                                                     (21)
#define TP_PID_DATA_sec_en_mask                                                      (0x00200000)
#define TP_PID_DATA_sec_en(data)                                                     (0x00200000&((data)<<21))
#define TP_PID_DATA_sec_en_src(data)                                                 ((0x00200000&(data))>>21)
#define TP_PID_DATA_get_sec_en(data)                                                 ((0x00200000&(data))>>21)
#define TP_PID_DATA_reversed_shift                                                   (20)
#define TP_PID_DATA_reversed_mask                                                    (0x00100000)
#define TP_PID_DATA_reversed(data)                                                   (0x00100000&((data)<<20))
#define TP_PID_DATA_reversed_src(data)                                               ((0x00100000&(data))>>20)
#define TP_PID_DATA_get_reversed(data)                                               ((0x00100000&(data))>>20)
#define TP_PID_DATA_ddr_q_shift                                                      (15)
#define TP_PID_DATA_ddr_q_mask                                                       (0x000F8000)
#define TP_PID_DATA_ddr_q(data)                                                      (0x000F8000&((data)<<15))
#define TP_PID_DATA_ddr_q_src(data)                                                  ((0x000F8000&(data))>>15)
#define TP_PID_DATA_get_ddr_q(data)                                                  ((0x000F8000&(data))>>15)
#define TP_PID_DATA_cc_en_shift                                                      (14)
#define TP_PID_DATA_cc_en_mask                                                       (0x00004000)
#define TP_PID_DATA_cc_en(data)                                                      (0x00004000&((data)<<14))
#define TP_PID_DATA_cc_en_src(data)                                                  ((0x00004000&(data))>>14)
#define TP_PID_DATA_get_cc_en(data)                                                  ((0x00004000&(data))>>14)
#define TP_PID_DATA_v_shift                                                          (13)
#define TP_PID_DATA_v_mask                                                           (0x00002000)
#define TP_PID_DATA_v(data)                                                          (0x00002000&((data)<<13))
#define TP_PID_DATA_v_src(data)                                                      ((0x00002000&(data))>>13)
#define TP_PID_DATA_get_v(data)                                                      ((0x00002000&(data))>>13)
#define TP_PID_DATA_pid_shift                                                        (0)
#define TP_PID_DATA_pid_mask                                                         (0x00001FFF)
#define TP_PID_DATA_pid(data)                                                        (0x00001FFF&((data)<<0))
#define TP_PID_DATA_pid_src(data)                                                    ((0x00001FFF&(data))>>0)
#define TP_PID_DATA_get_pid(data)                                                    ((0x00001FFF&(data))>>0)


#define TP_PID_DATA2                                                                 0x98014020
#define TP_PID_DATA2_reg_addr                                                        "0xD8014020"
#define TP_PID_DATA2_reg                                                             0xD8014020
#define set_TP_PID_DATA2_reg(data)   (*((volatile unsigned int*) TP_PID_DATA2_reg)=data)
#define get_TP_PID_DATA2_reg   (*((volatile unsigned int*) TP_PID_DATA2_reg))
#define TP_PID_DATA2_inst_adr                                                        "0x0008"
#define TP_PID_DATA2_inst                                                            0x0008
#define TP_PID_DATA2_pre_des_shift                                                   (12)
#define TP_PID_DATA2_pre_des_mask                                                    (0x00001000)
#define TP_PID_DATA2_pre_des(data)                                                   (0x00001000&((data)<<12))
#define TP_PID_DATA2_pre_des_src(data)                                               ((0x00001000&(data))>>12)
#define TP_PID_DATA2_get_pre_des(data)                                               ((0x00001000&(data))>>12)
#define TP_PID_DATA2_key_shift                                                       (7)
#define TP_PID_DATA2_key_mask                                                        (0x00000F80)
#define TP_PID_DATA2_key(data)                                                       (0x00000F80&((data)<<7))
#define TP_PID_DATA2_key_src(data)                                                   ((0x00000F80&(data))>>7)
#define TP_PID_DATA2_get_key(data)                                                   ((0x00000F80&(data))>>7)
#define TP_PID_DATA2_reversed_shift                                                  (5)
#define TP_PID_DATA2_reversed_mask                                                   (0x00000060)
#define TP_PID_DATA2_reversed(data)                                                  (0x00000060&((data)<<5))
#define TP_PID_DATA2_reversed_src(data)                                              ((0x00000060&(data))>>5)
#define TP_PID_DATA2_get_reversed(data)                                              ((0x00000060&(data))>>5)
#define TP_PID_DATA2_info_q_shift                                                    (0)
#define TP_PID_DATA2_info_q_mask                                                     (0x0000001F)
#define TP_PID_DATA2_info_q(data)                                                    (0x0000001F&((data)<<0))
#define TP_PID_DATA2_info_q_src(data)                                                ((0x0000001F&(data))>>0)
#define TP_PID_DATA2_get_info_q(data)                                                ((0x0000001F&(data))>>0)


#define TP_SEC_CTRL                                                                  0x98014030
#define TP_SEC_CTRL_reg_addr                                                         "0xD8014030"
#define TP_SEC_CTRL_reg                                                              0xD8014030
#define set_TP_SEC_CTRL_reg(data)   (*((volatile unsigned int*) TP_SEC_CTRL_reg)=data)
#define get_TP_SEC_CTRL_reg   (*((volatile unsigned int*) TP_SEC_CTRL_reg))
#define TP_SEC_CTRL_inst_adr                                                         "0x000C"
#define TP_SEC_CTRL_inst                                                             0x000C
#define TP_SEC_CTRL_r_w_shift                                                        (6)
#define TP_SEC_CTRL_r_w_mask                                                         (0x00000040)
#define TP_SEC_CTRL_r_w(data)                                                        (0x00000040&((data)<<6))
#define TP_SEC_CTRL_r_w_src(data)                                                    ((0x00000040&(data))>>6)
#define TP_SEC_CTRL_get_r_w(data)                                                    ((0x00000040&(data))>>6)
#define TP_SEC_CTRL_idx_shift                                                        (0)
#define TP_SEC_CTRL_idx_mask                                                         (0x0000003F)
#define TP_SEC_CTRL_idx(data)                                                        (0x0000003F&((data)<<0))
#define TP_SEC_CTRL_idx_src(data)                                                    ((0x0000003F&(data))>>0)
#define TP_SEC_CTRL_get_idx(data)                                                    ((0x0000003F&(data))>>0)


#define TP_SEC_DATA0                                                                 0x98014034
#define TP_SEC_DATA0_reg_addr                                                        "0xD8014034"
#define TP_SEC_DATA0_reg                                                             0xD8014034
#define set_TP_SEC_DATA0_reg(data)   (*((volatile unsigned int*) TP_SEC_DATA0_reg)=data)
#define get_TP_SEC_DATA0_reg   (*((volatile unsigned int*) TP_SEC_DATA0_reg))
#define TP_SEC_DATA0_inst_adr                                                        "0x000D"
#define TP_SEC_DATA0_inst                                                            0x000D
#define TP_SEC_DATA0_filter_value_msb_shift                                          (0)
#define TP_SEC_DATA0_filter_value_msb_mask                                           (0xFFFFFFFF)
#define TP_SEC_DATA0_filter_value_msb(data)                                          (0xFFFFFFFF&((data)<<0))
#define TP_SEC_DATA0_filter_value_msb_src(data)                                      ((0xFFFFFFFF&(data))>>0)
#define TP_SEC_DATA0_get_filter_value_msb(data)                                      ((0xFFFFFFFF&(data))>>0)


#define TP_SEC_DATA1                                                                 0x98014038
#define TP_SEC_DATA1_reg_addr                                                        "0xD8014038"
#define TP_SEC_DATA1_reg                                                             0xD8014038
#define set_TP_SEC_DATA1_reg(data)   (*((volatile unsigned int*) TP_SEC_DATA1_reg)=data)
#define get_TP_SEC_DATA1_reg   (*((volatile unsigned int*) TP_SEC_DATA1_reg))
#define TP_SEC_DATA1_inst_adr                                                        "0x000E"
#define TP_SEC_DATA1_inst                                                            0x000E
#define TP_SEC_DATA1_filter_value_lsb_shift                                          (0)
#define TP_SEC_DATA1_filter_value_lsb_mask                                           (0xFFFFFFFF)
#define TP_SEC_DATA1_filter_value_lsb(data)                                          (0xFFFFFFFF&((data)<<0))
#define TP_SEC_DATA1_filter_value_lsb_src(data)                                      ((0xFFFFFFFF&(data))>>0)
#define TP_SEC_DATA1_get_filter_value_lsb(data)                                      ((0xFFFFFFFF&(data))>>0)


#define TP_SEC_DATA2                                                                 0x9801403C
#define TP_SEC_DATA2_reg_addr                                                        "0xD801403C"
#define TP_SEC_DATA2_reg                                                             0xD801403C
#define set_TP_SEC_DATA2_reg(data)   (*((volatile unsigned int*) TP_SEC_DATA2_reg)=data)
#define get_TP_SEC_DATA2_reg   (*((volatile unsigned int*) TP_SEC_DATA2_reg))
#define TP_SEC_DATA2_inst_adr                                                        "0x000F"
#define TP_SEC_DATA2_inst                                                            0x000F
#define TP_SEC_DATA2_mask_value_msb_shift                                            (0)
#define TP_SEC_DATA2_mask_value_msb_mask                                             (0xFFFFFFFF)
#define TP_SEC_DATA2_mask_value_msb(data)                                            (0xFFFFFFFF&((data)<<0))
#define TP_SEC_DATA2_mask_value_msb_src(data)                                        ((0xFFFFFFFF&(data))>>0)
#define TP_SEC_DATA2_get_mask_value_msb(data)                                        ((0xFFFFFFFF&(data))>>0)


#define TP_SEC_DATA3                                                                 0x98014040
#define TP_SEC_DATA3_reg_addr                                                        "0xD8014040"
#define TP_SEC_DATA3_reg                                                             0xD8014040
#define set_TP_SEC_DATA3_reg(data)   (*((volatile unsigned int*) TP_SEC_DATA3_reg)=data)
#define get_TP_SEC_DATA3_reg   (*((volatile unsigned int*) TP_SEC_DATA3_reg))
#define TP_SEC_DATA3_inst_adr                                                        "0x0010"
#define TP_SEC_DATA3_inst                                                            0x0010
#define TP_SEC_DATA3_mask_value_lsb_shift                                            (0)
#define TP_SEC_DATA3_mask_value_lsb_mask                                             (0xFFFFFFFF)
#define TP_SEC_DATA3_mask_value_lsb(data)                                            (0xFFFFFFFF&((data)<<0))
#define TP_SEC_DATA3_mask_value_lsb_src(data)                                        ((0xFFFFFFFF&(data))>>0)
#define TP_SEC_DATA3_get_mask_value_lsb(data)                                        ((0xFFFFFFFF&(data))>>0)


#define TP_SEC_DATA4                                                                 0x98014044
#define TP_SEC_DATA4_reg_addr                                                        "0xD8014044"
#define TP_SEC_DATA4_reg                                                             0xD8014044
#define set_TP_SEC_DATA4_reg(data)   (*((volatile unsigned int*) TP_SEC_DATA4_reg)=data)
#define get_TP_SEC_DATA4_reg   (*((volatile unsigned int*) TP_SEC_DATA4_reg))
#define TP_SEC_DATA4_inst_adr                                                        "0x0011"
#define TP_SEC_DATA4_inst                                                            0x0011
#define TP_SEC_DATA4_sp_filter_shift                                                 (12)
#define TP_SEC_DATA4_sp_filter_mask                                                  (0x00003000)
#define TP_SEC_DATA4_sp_filter(data)                                                 (0x00003000&((data)<<12))
#define TP_SEC_DATA4_sp_filter_src(data)                                             ((0x00003000&(data))>>12)
#define TP_SEC_DATA4_get_sp_filter(data)                                             ((0x00003000&(data))>>12)
#define TP_SEC_DATA4_sp_mask_shift                                                   (10)
#define TP_SEC_DATA4_sp_mask_mask                                                    (0x00000C00)
#define TP_SEC_DATA4_sp_mask(data)                                                   (0x00000C00&((data)<<10))
#define TP_SEC_DATA4_sp_mask_src(data)                                               ((0x00000C00&(data))>>10)
#define TP_SEC_DATA4_get_sp_mask(data)                                               ((0x00000C00&(data))>>10)
#define TP_SEC_DATA4_crc_en_shift                                                    (9)
#define TP_SEC_DATA4_crc_en_mask                                                     (0x00000200)
#define TP_SEC_DATA4_crc_en(data)                                                    (0x00000200&((data)<<9))
#define TP_SEC_DATA4_crc_en_src(data)                                                ((0x00000200&(data))>>9)
#define TP_SEC_DATA4_get_crc_en(data)                                                ((0x00000200&(data))>>9)
#define TP_SEC_DATA4_p_d_shift                                                       (8)
#define TP_SEC_DATA4_p_d_mask                                                        (0x00000100)
#define TP_SEC_DATA4_p_d(data)                                                       (0x00000100&((data)<<8))
#define TP_SEC_DATA4_p_d_src(data)                                                   ((0x00000100&(data))>>8)
#define TP_SEC_DATA4_get_p_d(data)                                                   ((0x00000100&(data))>>8)
#define TP_SEC_DATA4_p_n_shift                                                       (7)
#define TP_SEC_DATA4_p_n_mask                                                        (0x00000080)
#define TP_SEC_DATA4_p_n(data)                                                       (0x00000080&((data)<<7))
#define TP_SEC_DATA4_p_n_src(data)                                                   ((0x00000080&(data))>>7)
#define TP_SEC_DATA4_get_p_n(data)                                                   ((0x00000080&(data))>>7)
#define TP_SEC_DATA4_last_shift                                                      (6)
#define TP_SEC_DATA4_last_mask                                                       (0x00000040)
#define TP_SEC_DATA4_last(data)                                                      (0x00000040&((data)<<6))
#define TP_SEC_DATA4_last_src(data)                                                  ((0x00000040&(data))>>6)
#define TP_SEC_DATA4_get_last(data)                                                  ((0x00000040&(data))>>6)
#define TP_SEC_DATA4_next_sec_shift                                                  (0)
#define TP_SEC_DATA4_next_sec_mask                                                   (0x0000003F)
#define TP_SEC_DATA4_next_sec(data)                                                  (0x0000003F&((data)<<0))
#define TP_SEC_DATA4_next_sec_src(data)                                              ((0x0000003F&(data))>>0)
#define TP_SEC_DATA4_get_next_sec(data)                                              ((0x0000003F&(data))>>0)


#define TP_SEC_DATA5                                                                 0x98014080
#define TP_SEC_DATA5_reg_addr                                                        "0xD8014080"
#define TP_SEC_DATA5_reg                                                             0xD8014080
#define set_TP_SEC_DATA5_reg(data)   (*((volatile unsigned int*) TP_SEC_DATA5_reg)=data)
#define get_TP_SEC_DATA5_reg   (*((volatile unsigned int*) TP_SEC_DATA5_reg))
#define TP_SEC_DATA5_inst_adr                                                        "0x0020"
#define TP_SEC_DATA5_inst                                                            0x0020
#define TP_SEC_DATA5_neg_filter_value_msb_shift                                      (0)
#define TP_SEC_DATA5_neg_filter_value_msb_mask                                       (0xFFFFFFFF)
#define TP_SEC_DATA5_neg_filter_value_msb(data)                                      (0xFFFFFFFF&((data)<<0))
#define TP_SEC_DATA5_neg_filter_value_msb_src(data)                                  ((0xFFFFFFFF&(data))>>0)
#define TP_SEC_DATA5_get_neg_filter_value_msb(data)                                  ((0xFFFFFFFF&(data))>>0)


#define TP_SEC_DATA6                                                                 0x98014084
#define TP_SEC_DATA6_reg_addr                                                        "0xD8014084"
#define TP_SEC_DATA6_reg                                                             0xD8014084
#define set_TP_SEC_DATA6_reg(data)   (*((volatile unsigned int*) TP_SEC_DATA6_reg)=data)
#define get_TP_SEC_DATA6_reg   (*((volatile unsigned int*) TP_SEC_DATA6_reg))
#define TP_SEC_DATA6_inst_adr                                                        "0x0021"
#define TP_SEC_DATA6_inst                                                            0x0021
#define TP_SEC_DATA6_neg_filter_value_lsb_shift                                      (0)
#define TP_SEC_DATA6_neg_filter_value_lsb_mask                                       (0xFFFFFFFF)
#define TP_SEC_DATA6_neg_filter_value_lsb(data)                                      (0xFFFFFFFF&((data)<<0))
#define TP_SEC_DATA6_neg_filter_value_lsb_src(data)                                  ((0xFFFFFFFF&(data))>>0)
#define TP_SEC_DATA6_get_neg_filter_value_lsb(data)                                  ((0xFFFFFFFF&(data))>>0)


#define TP_SEC_DATA7                                                                 0x98014088
#define TP_SEC_DATA7_reg_addr                                                        "0xD8014088"
#define TP_SEC_DATA7_reg                                                             0xD8014088
#define set_TP_SEC_DATA7_reg(data)   (*((volatile unsigned int*) TP_SEC_DATA7_reg)=data)
#define get_TP_SEC_DATA7_reg   (*((volatile unsigned int*) TP_SEC_DATA7_reg))
#define TP_SEC_DATA7_inst_adr                                                        "0x0022"
#define TP_SEC_DATA7_inst                                                            0x0022
#define TP_SEC_DATA7_neg_mask_value_msb_shift                                        (0)
#define TP_SEC_DATA7_neg_mask_value_msb_mask                                         (0xFFFFFFFF)
#define TP_SEC_DATA7_neg_mask_value_msb(data)                                        (0xFFFFFFFF&((data)<<0))
#define TP_SEC_DATA7_neg_mask_value_msb_src(data)                                    ((0xFFFFFFFF&(data))>>0)
#define TP_SEC_DATA7_get_neg_mask_value_msb(data)                                    ((0xFFFFFFFF&(data))>>0)


#define TP_SEC_DATA8                                                                 0x9801408C
#define TP_SEC_DATA8_reg_addr                                                        "0xD801408C"
#define TP_SEC_DATA8_reg                                                             0xD801408C
#define set_TP_SEC_DATA8_reg(data)   (*((volatile unsigned int*) TP_SEC_DATA8_reg)=data)
#define get_TP_SEC_DATA8_reg   (*((volatile unsigned int*) TP_SEC_DATA8_reg))
#define TP_SEC_DATA8_inst_adr                                                        "0x0023"
#define TP_SEC_DATA8_inst                                                            0x0023
#define TP_SEC_DATA8_neg_mask_value_lsb_shift                                        (0)
#define TP_SEC_DATA8_neg_mask_value_lsb_mask                                         (0xFFFFFFFF)
#define TP_SEC_DATA8_neg_mask_value_lsb(data)                                        (0xFFFFFFFF&((data)<<0))
#define TP_SEC_DATA8_neg_mask_value_lsb_src(data)                                    ((0xFFFFFFFF&(data))>>0)
#define TP_SEC_DATA8_get_neg_mask_value_lsb(data)                                    ((0xFFFFFFFF&(data))>>0)


#define TP_SEC_DATA9                                                                 0x98014090
#define TP_SEC_DATA9_reg_addr                                                        "0xD8014090"
#define TP_SEC_DATA9_reg                                                             0xD8014090
#define set_TP_SEC_DATA9_reg(data)   (*((volatile unsigned int*) TP_SEC_DATA9_reg)=data)
#define get_TP_SEC_DATA9_reg   (*((volatile unsigned int*) TP_SEC_DATA9_reg))
#define TP_SEC_DATA9_inst_adr                                                        "0x0024"
#define TP_SEC_DATA9_inst                                                            0x0024
#define TP_SEC_DATA9_neg_sp_filter_shift                                             (12)
#define TP_SEC_DATA9_neg_sp_filter_mask                                              (0x00003000)
#define TP_SEC_DATA9_neg_sp_filter(data)                                             (0x00003000&((data)<<12))
#define TP_SEC_DATA9_neg_sp_filter_src(data)                                         ((0x00003000&(data))>>12)
#define TP_SEC_DATA9_get_neg_sp_filter(data)                                         ((0x00003000&(data))>>12)
#define TP_SEC_DATA9_neg_sp_mask_shift                                               (10)
#define TP_SEC_DATA9_neg_sp_mask_mask                                                (0x00000C00)
#define TP_SEC_DATA9_neg_sp_mask(data)                                               (0x00000C00&((data)<<10))
#define TP_SEC_DATA9_neg_sp_mask_src(data)                                           ((0x00000C00&(data))>>10)
#define TP_SEC_DATA9_get_neg_sp_mask(data)                                           ((0x00000C00&(data))>>10)
#define TP_SEC_DATA9_filter_sel_shift                                                (0)
#define TP_SEC_DATA9_filter_sel_mask                                                 (0x00000003)
#define TP_SEC_DATA9_filter_sel(data)                                                (0x00000003&((data)<<0))
#define TP_SEC_DATA9_filter_sel_src(data)                                            ((0x00000003&(data))>>0)
#define TP_SEC_DATA9_get_filter_sel(data)                                            ((0x00000003&(data))>>0)


#define TP_TP0_DES_CNTL                                                              0x98014050
#define TP_TP0_DES_CNTL_reg_addr                                                     "0xD8014050"
#define TP_TP0_DES_CNTL_reg                                                          0xD8014050
#define set_TP_TP0_DES_CNTL_reg(data)   (*((volatile unsigned int*) TP_TP0_DES_CNTL_reg)=data)
#define get_TP_TP0_DES_CNTL_reg   (*((volatile unsigned int*) TP_TP0_DES_CNTL_reg))
#define TP_TP0_DES_CNTL_inst_adr                                                     "0x0014"
#define TP_TP0_DES_CNTL_inst                                                         0x0014
#define TP_TP0_DES_CNTL_ofb_mode_shift                                               (18)
#define TP_TP0_DES_CNTL_ofb_mode_mask                                                (0x000C0000)
#define TP_TP0_DES_CNTL_ofb_mode(data)                                               (0x000C0000&((data)<<18))
#define TP_TP0_DES_CNTL_ofb_mode_src(data)                                           ((0x000C0000&(data))>>18)
#define TP_TP0_DES_CNTL_get_ofb_mode(data)                                           ((0x000C0000&(data))>>18)
#define TP_TP0_DES_CNTL_csa_mode_shift                                               (16)
#define TP_TP0_DES_CNTL_csa_mode_mask                                                (0x00030000)
#define TP_TP0_DES_CNTL_csa_mode(data)                                               (0x00030000&((data)<<16))
#define TP_TP0_DES_CNTL_csa_mode_src(data)                                           ((0x00030000&(data))>>16)
#define TP_TP0_DES_CNTL_get_csa_mode(data)                                           ((0x00030000&(data))>>16)
#define TP_TP0_DES_CNTL_round_shift                                                  (8)
#define TP_TP0_DES_CNTL_round_mask                                                   (0x0000FF00)
#define TP_TP0_DES_CNTL_round(data)                                                  (0x0000FF00&((data)<<8))
#define TP_TP0_DES_CNTL_round_src(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TP0_DES_CNTL_get_round(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TP0_DES_CNTL_multi2_mode_shift                                            (7)
#define TP_TP0_DES_CNTL_multi2_mode_mask                                             (0x00000080)
#define TP_TP0_DES_CNTL_multi2_mode(data)                                            (0x00000080&((data)<<7))
#define TP_TP0_DES_CNTL_multi2_mode_src(data)                                        ((0x00000080&(data))>>7)
#define TP_TP0_DES_CNTL_get_multi2_mode(data)                                        ((0x00000080&(data))>>7)
#define TP_TP0_DES_CNTL_map_11_shift                                                 (6)
#define TP_TP0_DES_CNTL_map_11_mask                                                  (0x00000040)
#define TP_TP0_DES_CNTL_map_11(data)                                                 (0x00000040&((data)<<6))
#define TP_TP0_DES_CNTL_map_11_src(data)                                             ((0x00000040&(data))>>6)
#define TP_TP0_DES_CNTL_get_map_11(data)                                             ((0x00000040&(data))>>6)
#define TP_TP0_DES_CNTL_map_10_shift                                                 (5)
#define TP_TP0_DES_CNTL_map_10_mask                                                  (0x00000020)
#define TP_TP0_DES_CNTL_map_10(data)                                                 (0x00000020&((data)<<5))
#define TP_TP0_DES_CNTL_map_10_src(data)                                             ((0x00000020&(data))>>5)
#define TP_TP0_DES_CNTL_get_map_10(data)                                             ((0x00000020&(data))>>5)
#define TP_TP0_DES_CNTL_map_01_shift                                                 (4)
#define TP_TP0_DES_CNTL_map_01_mask                                                  (0x00000010)
#define TP_TP0_DES_CNTL_map_01(data)                                                 (0x00000010&((data)<<4))
#define TP_TP0_DES_CNTL_map_01_src(data)                                             ((0x00000010&(data))>>4)
#define TP_TP0_DES_CNTL_get_map_01(data)                                             ((0x00000010&(data))>>4)
#define TP_TP0_DES_CNTL_des_mode_shift                                               (3)
#define TP_TP0_DES_CNTL_des_mode_mask                                                (0x00000008)
#define TP_TP0_DES_CNTL_des_mode(data)                                               (0x00000008&((data)<<3))
#define TP_TP0_DES_CNTL_des_mode_src(data)                                           ((0x00000008&(data))>>3)
#define TP_TP0_DES_CNTL_get_des_mode(data)                                           ((0x00000008&(data))>>3)
#define TP_TP0_DES_CNTL_mode_shift                                                   (0)
#define TP_TP0_DES_CNTL_mode_mask                                                    (0x00000007)
#define TP_TP0_DES_CNTL_mode(data)                                                   (0x00000007&((data)<<0))
#define TP_TP0_DES_CNTL_mode_src(data)                                               ((0x00000007&(data))>>0)
#define TP_TP0_DES_CNTL_get_mode(data)                                               ((0x00000007&(data))>>0)


#define TP_KEY_INFO_0                                                                0x98014058
#define TP_KEY_INFO_1                                                                0x9801405C
#define TP_KEY_INFO_0_reg_addr                                                       "0xD8014058"
#define TP_KEY_INFO_1_reg_addr                                                       "0xD801405C"
#define TP_KEY_INFO_0_reg                                                            0xD8014058
#define TP_KEY_INFO_1_reg                                                            0xD801405C
#define set_TP_KEY_INFO_0_reg(data)   (*((volatile unsigned int*) TP_KEY_INFO_0_reg)=data)
#define set_TP_KEY_INFO_1_reg(data)   (*((volatile unsigned int*) TP_KEY_INFO_1_reg)=data)
#define get_TP_KEY_INFO_0_reg   (*((volatile unsigned int*) TP_KEY_INFO_0_reg))
#define get_TP_KEY_INFO_1_reg   (*((volatile unsigned int*) TP_KEY_INFO_1_reg))
#define TP_KEY_INFO_0_inst_adr                                                       "0x0016"
#define TP_KEY_INFO_1_inst_adr                                                       "0x0017"
#define TP_KEY_INFO_0_inst                                                           0x0016
#define TP_KEY_INFO_1_inst                                                           0x0017
#define TP_KEY_INFO_key_info_shift                                                   (0)
#define TP_KEY_INFO_key_info_mask                                                    (0xFFFFFFFF)
#define TP_KEY_INFO_key_info(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_KEY_INFO_key_info_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_KEY_INFO_get_key_info(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_KEY_CTRL                                                                  0x98014060
#define TP_KEY_CTRL_reg_addr                                                         "0xD8014060"
#define TP_KEY_CTRL_reg                                                              0xD8014060
#define set_TP_KEY_CTRL_reg(data)   (*((volatile unsigned int*) TP_KEY_CTRL_reg)=data)
#define get_TP_KEY_CTRL_reg   (*((volatile unsigned int*) TP_KEY_CTRL_reg))
#define TP_KEY_CTRL_inst_adr                                                         "0x0018"
#define TP_KEY_CTRL_inst                                                             0x0018
#define TP_KEY_CTRL_r_w_shift                                                        (7)
#define TP_KEY_CTRL_r_w_mask                                                         (0x00000080)
#define TP_KEY_CTRL_r_w(data)                                                        (0x00000080&((data)<<7))
#define TP_KEY_CTRL_r_w_src(data)                                                    ((0x00000080&(data))>>7)
#define TP_KEY_CTRL_get_r_w(data)                                                    ((0x00000080&(data))>>7)
#define TP_KEY_CTRL_idx_shift                                                        (0)
#define TP_KEY_CTRL_idx_mask                                                         (0x0000007F)
#define TP_KEY_CTRL_idx(data)                                                        (0x0000007F&((data)<<0))
#define TP_KEY_CTRL_idx_src(data)                                                    ((0x0000007F&(data))>>0)
#define TP_KEY_CTRL_get_idx(data)                                                    ((0x0000007F&(data))>>0)


#define TP_TP1_DES_CNTL                                                              0x980140A0
#define TP_TP1_DES_CNTL_reg_addr                                                     "0xD80140A0"
#define TP_TP1_DES_CNTL_reg                                                          0xD80140A0
#define set_TP_TP1_DES_CNTL_reg(data)   (*((volatile unsigned int*) TP_TP1_DES_CNTL_reg)=data)
#define get_TP_TP1_DES_CNTL_reg   (*((volatile unsigned int*) TP_TP1_DES_CNTL_reg))
#define TP_TP1_DES_CNTL_inst_adr                                                     "0x0028"
#define TP_TP1_DES_CNTL_inst                                                         0x0028
#define TP_TP1_DES_CNTL_ofb_mode_shift                                               (18)
#define TP_TP1_DES_CNTL_ofb_mode_mask                                                (0x000C0000)
#define TP_TP1_DES_CNTL_ofb_mode(data)                                               (0x000C0000&((data)<<18))
#define TP_TP1_DES_CNTL_ofb_mode_src(data)                                           ((0x000C0000&(data))>>18)
#define TP_TP1_DES_CNTL_get_ofb_mode(data)                                           ((0x000C0000&(data))>>18)
#define TP_TP1_DES_CNTL_csa_mode_shift                                               (16)
#define TP_TP1_DES_CNTL_csa_mode_mask                                                (0x00030000)
#define TP_TP1_DES_CNTL_csa_mode(data)                                               (0x00030000&((data)<<16))
#define TP_TP1_DES_CNTL_csa_mode_src(data)                                           ((0x00030000&(data))>>16)
#define TP_TP1_DES_CNTL_get_csa_mode(data)                                           ((0x00030000&(data))>>16)
#define TP_TP1_DES_CNTL_round_shift                                                  (8)
#define TP_TP1_DES_CNTL_round_mask                                                   (0x0000FF00)
#define TP_TP1_DES_CNTL_round(data)                                                  (0x0000FF00&((data)<<8))
#define TP_TP1_DES_CNTL_round_src(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TP1_DES_CNTL_get_round(data)                                              ((0x0000FF00&(data))>>8)
#define TP_TP1_DES_CNTL_multi2_mode_shift                                            (7)
#define TP_TP1_DES_CNTL_multi2_mode_mask                                             (0x00000080)
#define TP_TP1_DES_CNTL_multi2_mode(data)                                            (0x00000080&((data)<<7))
#define TP_TP1_DES_CNTL_multi2_mode_src(data)                                        ((0x00000080&(data))>>7)
#define TP_TP1_DES_CNTL_get_multi2_mode(data)                                        ((0x00000080&(data))>>7)
#define TP_TP1_DES_CNTL_map_11_shift                                                 (6)
#define TP_TP1_DES_CNTL_map_11_mask                                                  (0x00000040)
#define TP_TP1_DES_CNTL_map_11(data)                                                 (0x00000040&((data)<<6))
#define TP_TP1_DES_CNTL_map_11_src(data)                                             ((0x00000040&(data))>>6)
#define TP_TP1_DES_CNTL_get_map_11(data)                                             ((0x00000040&(data))>>6)
#define TP_TP1_DES_CNTL_map_10_shift                                                 (5)
#define TP_TP1_DES_CNTL_map_10_mask                                                  (0x00000020)
#define TP_TP1_DES_CNTL_map_10(data)                                                 (0x00000020&((data)<<5))
#define TP_TP1_DES_CNTL_map_10_src(data)                                             ((0x00000020&(data))>>5)
#define TP_TP1_DES_CNTL_get_map_10(data)                                             ((0x00000020&(data))>>5)
#define TP_TP1_DES_CNTL_map_01_shift                                                 (4)
#define TP_TP1_DES_CNTL_map_01_mask                                                  (0x00000010)
#define TP_TP1_DES_CNTL_map_01(data)                                                 (0x00000010&((data)<<4))
#define TP_TP1_DES_CNTL_map_01_src(data)                                             ((0x00000010&(data))>>4)
#define TP_TP1_DES_CNTL_get_map_01(data)                                             ((0x00000010&(data))>>4)
#define TP_TP1_DES_CNTL_des_mode_shift                                               (3)
#define TP_TP1_DES_CNTL_des_mode_mask                                                (0x00000008)
#define TP_TP1_DES_CNTL_des_mode(data)                                               (0x00000008&((data)<<3))
#define TP_TP1_DES_CNTL_des_mode_src(data)                                           ((0x00000008&(data))>>3)
#define TP_TP1_DES_CNTL_get_des_mode(data)                                           ((0x00000008&(data))>>3)
#define TP_TP1_DES_CNTL_mode_shift                                                   (0)
#define TP_TP1_DES_CNTL_mode_mask                                                    (0x00000007)
#define TP_TP1_DES_CNTL_mode(data)                                                   (0x00000007&((data)<<0))
#define TP_TP1_DES_CNTL_mode_src(data)                                               ((0x00000007&(data))>>0)
#define TP_TP1_DES_CNTL_get_mode(data)                                               ((0x00000007&(data))>>0)


#define TP_CRC_INIT                                                                  0x980140EC
#define TP_CRC_INIT_reg_addr                                                         "0xD80140EC"
#define TP_CRC_INIT_reg                                                              0xD80140EC
#define set_TP_CRC_INIT_reg(data)   (*((volatile unsigned int*) TP_CRC_INIT_reg)=data)
#define get_TP_CRC_INIT_reg   (*((volatile unsigned int*) TP_CRC_INIT_reg))
#define TP_CRC_INIT_inst_adr                                                         "0x003B"
#define TP_CRC_INIT_inst                                                             0x003B
#define TP_CRC_INIT_crc_init_shift                                                   (0)
#define TP_CRC_INIT_crc_init_mask                                                    (0xFFFFFFFF)
#define TP_CRC_INIT_crc_init(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_CRC_INIT_crc_init_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_CRC_INIT_get_crc_init(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_THRESHOLD                                                                 0x980140F0
#define TP_THRESHOLD_reg_addr                                                        "0xD80140F0"
#define TP_THRESHOLD_reg                                                             0xD80140F0
#define set_TP_THRESHOLD_reg(data)   (*((volatile unsigned int*) TP_THRESHOLD_reg)=data)
#define get_TP_THRESHOLD_reg   (*((volatile unsigned int*) TP_THRESHOLD_reg))
#define TP_THRESHOLD_inst_adr                                                        "0x003C"
#define TP_THRESHOLD_inst                                                            0x003C
#define TP_THRESHOLD_threshold_shift                                                 (0)
#define TP_THRESHOLD_threshold_mask                                                  (0x1FFFFFFF)
#define TP_THRESHOLD_threshold(data)                                                 (0x1FFFFFFF&((data)<<0))
#define TP_THRESHOLD_threshold_src(data)                                             ((0x1FFFFFFF&(data))>>0)
#define TP_THRESHOLD_get_threshold(data)                                             ((0x1FFFFFFF&(data))>>0)


#define TP_FULLNESS                                                                  0x980140F4
#define TP_FULLNESS_reg_addr                                                         "0xD80140F4"
#define TP_FULLNESS_reg                                                              0xD80140F4
#define set_TP_FULLNESS_reg(data)   (*((volatile unsigned int*) TP_FULLNESS_reg)=data)
#define get_TP_FULLNESS_reg   (*((volatile unsigned int*) TP_FULLNESS_reg))
#define TP_FULLNESS_inst_adr                                                         "0x003D"
#define TP_FULLNESS_inst                                                             0x003D
#define TP_FULLNESS_fullness_shift                                                   (0)
#define TP_FULLNESS_fullness_mask                                                    (0x1FFFFFFF)
#define TP_FULLNESS_fullness(data)                                                   (0x1FFFFFFF&((data)<<0))
#define TP_FULLNESS_fullness_src(data)                                               ((0x1FFFFFFF&(data))>>0)
#define TP_FULLNESS_get_fullness(data)                                               ((0x1FFFFFFF&(data))>>0)


#define TP_RING_CTRL                                                                 0x980140FC
#define TP_RING_CTRL_reg_addr                                                        "0xD80140FC"
#define TP_RING_CTRL_reg                                                             0xD80140FC
#define set_TP_RING_CTRL_reg(data)   (*((volatile unsigned int*) TP_RING_CTRL_reg)=data)
#define get_TP_RING_CTRL_reg   (*((volatile unsigned int*) TP_RING_CTRL_reg))
#define TP_RING_CTRL_inst_adr                                                        "0x003F"
#define TP_RING_CTRL_inst                                                            0x003F
#define TP_RING_CTRL_wm_shift                                                        (7)
#define TP_RING_CTRL_wm_mask                                                         (0x00000780)
#define TP_RING_CTRL_wm(data)                                                        (0x00000780&((data)<<7))
#define TP_RING_CTRL_wm_src(data)                                                    ((0x00000780&(data))>>7)
#define TP_RING_CTRL_get_wm(data)                                                    ((0x00000780&(data))>>7)
#define TP_RING_CTRL_r_w_shift                                                       (6)
#define TP_RING_CTRL_r_w_mask                                                        (0x00000040)
#define TP_RING_CTRL_r_w(data)                                                       (0x00000040&((data)<<6))
#define TP_RING_CTRL_r_w_src(data)                                                   ((0x00000040&(data))>>6)
#define TP_RING_CTRL_get_r_w(data)                                                   ((0x00000040&(data))>>6)
#define TP_RING_CTRL_idx_shift                                                       (0)
#define TP_RING_CTRL_idx_mask                                                        (0x0000001F)
#define TP_RING_CTRL_idx(data)                                                       (0x0000001F&((data)<<0))
#define TP_RING_CTRL_idx_src(data)                                                   ((0x0000001F&(data))>>0)
#define TP_RING_CTRL_get_idx(data)                                                   ((0x0000001F&(data))>>0)


#define TP_RING_LIMIT                                                                0x98014100
#define TP_RING_LIMIT_reg_addr                                                       "0xD8014100"
#define TP_RING_LIMIT_reg                                                            0xD8014100
#define set_TP_RING_LIMIT_reg(data)   (*((volatile unsigned int*) TP_RING_LIMIT_reg)=data)
#define get_TP_RING_LIMIT_reg   (*((volatile unsigned int*) TP_RING_LIMIT_reg))
#define TP_RING_LIMIT_inst_adr                                                       "0x0040"
#define TP_RING_LIMIT_inst                                                           0x0040
#define TP_RING_LIMIT_ring_limit_shift                                               (3)
#define TP_RING_LIMIT_ring_limit_mask                                                (0xFFFFFFF8)
#define TP_RING_LIMIT_ring_limit(data)                                               (0xFFFFFFF8&((data)<<3))
#define TP_RING_LIMIT_ring_limit_src(data)                                           ((0xFFFFFFF8&(data))>>3)
#define TP_RING_LIMIT_get_ring_limit(data)                                           ((0xFFFFFFF8&(data))>>3)


#define TP_RING_BASE                                                                 0x98014104
#define TP_RING_BASE_reg_addr                                                        "0xD8014104"
#define TP_RING_BASE_reg                                                             0xD8014104
#define set_TP_RING_BASE_reg(data)   (*((volatile unsigned int*) TP_RING_BASE_reg)=data)
#define get_TP_RING_BASE_reg   (*((volatile unsigned int*) TP_RING_BASE_reg))
#define TP_RING_BASE_inst_adr                                                        "0x0041"
#define TP_RING_BASE_inst                                                            0x0041
#define TP_RING_BASE_ring_base_shift                                                 (3)
#define TP_RING_BASE_ring_base_mask                                                  (0xFFFFFFF8)
#define TP_RING_BASE_ring_base(data)                                                 (0xFFFFFFF8&((data)<<3))
#define TP_RING_BASE_ring_base_src(data)                                             ((0xFFFFFFF8&(data))>>3)
#define TP_RING_BASE_get_ring_base(data)                                             ((0xFFFFFFF8&(data))>>3)


#define TP_RING_RP                                                                   0x98014108
#define TP_RING_RP_reg_addr                                                          "0xD8014108"
#define TP_RING_RP_reg                                                               0xD8014108
#define set_TP_RING_RP_reg(data)   (*((volatile unsigned int*) TP_RING_RP_reg)=data)
#define get_TP_RING_RP_reg   (*((volatile unsigned int*) TP_RING_RP_reg))
#define TP_RING_RP_inst_adr                                                          "0x0042"
#define TP_RING_RP_inst                                                              0x0042
#define TP_RING_RP_ring_rp_shift                                                     (0)
#define TP_RING_RP_ring_rp_mask                                                      (0xFFFFFFFF)
#define TP_RING_RP_ring_rp(data)                                                     (0xFFFFFFFF&((data)<<0))
#define TP_RING_RP_ring_rp_src(data)                                                 ((0xFFFFFFFF&(data))>>0)
#define TP_RING_RP_get_ring_rp(data)                                                 ((0xFFFFFFFF&(data))>>0)


#define TP_RING_WP                                                                   0x9801410c
#define TP_RING_WP_reg_addr                                                          "0xD801410C"
#define TP_RING_WP_reg                                                               0xD801410C
#define set_TP_RING_WP_reg(data)   (*((volatile unsigned int*) TP_RING_WP_reg)=data)
#define get_TP_RING_WP_reg   (*((volatile unsigned int*) TP_RING_WP_reg))
#define TP_RING_WP_inst_adr                                                          "0x0043"
#define TP_RING_WP_inst                                                              0x0043
#define TP_RING_WP_ring_wp_shift                                                     (0)
#define TP_RING_WP_ring_wp_mask                                                      (0xFFFFFFFF)
#define TP_RING_WP_ring_wp(data)                                                     (0xFFFFFFFF&((data)<<0))
#define TP_RING_WP_ring_wp_src(data)                                                 ((0xFFFFFFFF&(data))>>0)
#define TP_RING_WP_get_ring_wp(data)                                                 ((0xFFFFFFFF&(data))>>0)


#define TP_RING_AVAIL_INT_0                                                          0x98014600
#define TP_RING_AVAIL_INT_1                                                          0x98014604
#define TP_RING_AVAIL_INT_0_reg_addr                                                 "0xD8014600"
#define TP_RING_AVAIL_INT_1_reg_addr                                                 "0xD8014604"
#define TP_RING_AVAIL_INT_0_reg                                                      0xD8014600
#define TP_RING_AVAIL_INT_1_reg                                                      0xD8014604
#define set_TP_RING_AVAIL_INT_0_reg(data)   (*((volatile unsigned int*) TP_RING_AVAIL_INT_0_reg)=data)
#define set_TP_RING_AVAIL_INT_1_reg(data)   (*((volatile unsigned int*) TP_RING_AVAIL_INT_1_reg)=data)
#define get_TP_RING_AVAIL_INT_0_reg   (*((volatile unsigned int*) TP_RING_AVAIL_INT_0_reg))
#define get_TP_RING_AVAIL_INT_1_reg   (*((volatile unsigned int*) TP_RING_AVAIL_INT_1_reg))
#define TP_RING_AVAIL_INT_0_inst_adr                                                 "0x0080"
#define TP_RING_AVAIL_INT_1_inst_adr                                                 "0x0081"
#define TP_RING_AVAIL_INT_0_inst                                                     0x0080
#define TP_RING_AVAIL_INT_1_inst                                                     0x0081
#define TP_RING_AVAIL_INT_ring_avail_15_shift                                        (16)
#define TP_RING_AVAIL_INT_ring_avail_15_mask                                         (0x00010000)
#define TP_RING_AVAIL_INT_ring_avail_15(data)                                        (0x00010000&((data)<<16))
#define TP_RING_AVAIL_INT_ring_avail_15_src(data)                                    ((0x00010000&(data))>>16)
#define TP_RING_AVAIL_INT_get_ring_avail_15(data)                                    ((0x00010000&(data))>>16)
#define TP_RING_AVAIL_INT_ring_avail_14_shift                                        (15)
#define TP_RING_AVAIL_INT_ring_avail_14_mask                                         (0x00008000)
#define TP_RING_AVAIL_INT_ring_avail_14(data)                                        (0x00008000&((data)<<15))
#define TP_RING_AVAIL_INT_ring_avail_14_src(data)                                    ((0x00008000&(data))>>15)
#define TP_RING_AVAIL_INT_get_ring_avail_14(data)                                    ((0x00008000&(data))>>15)
#define TP_RING_AVAIL_INT_ring_avail_13_shift                                        (14)
#define TP_RING_AVAIL_INT_ring_avail_13_mask                                         (0x00004000)
#define TP_RING_AVAIL_INT_ring_avail_13(data)                                        (0x00004000&((data)<<14))
#define TP_RING_AVAIL_INT_ring_avail_13_src(data)                                    ((0x00004000&(data))>>14)
#define TP_RING_AVAIL_INT_get_ring_avail_13(data)                                    ((0x00004000&(data))>>14)
#define TP_RING_AVAIL_INT_ring_avail_12_shift                                        (13)
#define TP_RING_AVAIL_INT_ring_avail_12_mask                                         (0x00002000)
#define TP_RING_AVAIL_INT_ring_avail_12(data)                                        (0x00002000&((data)<<13))
#define TP_RING_AVAIL_INT_ring_avail_12_src(data)                                    ((0x00002000&(data))>>13)
#define TP_RING_AVAIL_INT_get_ring_avail_12(data)                                    ((0x00002000&(data))>>13)
#define TP_RING_AVAIL_INT_ring_avail_11_shift                                        (12)
#define TP_RING_AVAIL_INT_ring_avail_11_mask                                         (0x00001000)
#define TP_RING_AVAIL_INT_ring_avail_11(data)                                        (0x00001000&((data)<<12))
#define TP_RING_AVAIL_INT_ring_avail_11_src(data)                                    ((0x00001000&(data))>>12)
#define TP_RING_AVAIL_INT_get_ring_avail_11(data)                                    ((0x00001000&(data))>>12)
#define TP_RING_AVAIL_INT_ring_avail_10_shift                                        (11)
#define TP_RING_AVAIL_INT_ring_avail_10_mask                                         (0x00000800)
#define TP_RING_AVAIL_INT_ring_avail_10(data)                                        (0x00000800&((data)<<11))
#define TP_RING_AVAIL_INT_ring_avail_10_src(data)                                    ((0x00000800&(data))>>11)
#define TP_RING_AVAIL_INT_get_ring_avail_10(data)                                    ((0x00000800&(data))>>11)
#define TP_RING_AVAIL_INT_ring_avail_9_shift                                         (10)
#define TP_RING_AVAIL_INT_ring_avail_9_mask                                          (0x00000400)
#define TP_RING_AVAIL_INT_ring_avail_9(data)                                         (0x00000400&((data)<<10))
#define TP_RING_AVAIL_INT_ring_avail_9_src(data)                                     ((0x00000400&(data))>>10)
#define TP_RING_AVAIL_INT_get_ring_avail_9(data)                                     ((0x00000400&(data))>>10)
#define TP_RING_AVAIL_INT_ring_avail_8_shift                                         (9)
#define TP_RING_AVAIL_INT_ring_avail_8_mask                                          (0x00000200)
#define TP_RING_AVAIL_INT_ring_avail_8(data)                                         (0x00000200&((data)<<9))
#define TP_RING_AVAIL_INT_ring_avail_8_src(data)                                     ((0x00000200&(data))>>9)
#define TP_RING_AVAIL_INT_get_ring_avail_8(data)                                     ((0x00000200&(data))>>9)
#define TP_RING_AVAIL_INT_ring_avail_7_shift                                         (8)
#define TP_RING_AVAIL_INT_ring_avail_7_mask                                          (0x00000100)
#define TP_RING_AVAIL_INT_ring_avail_7(data)                                         (0x00000100&((data)<<8))
#define TP_RING_AVAIL_INT_ring_avail_7_src(data)                                     ((0x00000100&(data))>>8)
#define TP_RING_AVAIL_INT_get_ring_avail_7(data)                                     ((0x00000100&(data))>>8)
#define TP_RING_AVAIL_INT_ring_avail_6_shift                                         (7)
#define TP_RING_AVAIL_INT_ring_avail_6_mask                                          (0x00000080)
#define TP_RING_AVAIL_INT_ring_avail_6(data)                                         (0x00000080&((data)<<7))
#define TP_RING_AVAIL_INT_ring_avail_6_src(data)                                     ((0x00000080&(data))>>7)
#define TP_RING_AVAIL_INT_get_ring_avail_6(data)                                     ((0x00000080&(data))>>7)
#define TP_RING_AVAIL_INT_ring_avail_5_shift                                         (6)
#define TP_RING_AVAIL_INT_ring_avail_5_mask                                          (0x00000040)
#define TP_RING_AVAIL_INT_ring_avail_5(data)                                         (0x00000040&((data)<<6))
#define TP_RING_AVAIL_INT_ring_avail_5_src(data)                                     ((0x00000040&(data))>>6)
#define TP_RING_AVAIL_INT_get_ring_avail_5(data)                                     ((0x00000040&(data))>>6)
#define TP_RING_AVAIL_INT_ring_avail_4_shift                                         (5)
#define TP_RING_AVAIL_INT_ring_avail_4_mask                                          (0x00000020)
#define TP_RING_AVAIL_INT_ring_avail_4(data)                                         (0x00000020&((data)<<5))
#define TP_RING_AVAIL_INT_ring_avail_4_src(data)                                     ((0x00000020&(data))>>5)
#define TP_RING_AVAIL_INT_get_ring_avail_4(data)                                     ((0x00000020&(data))>>5)
#define TP_RING_AVAIL_INT_ring_avail_3_shift                                         (4)
#define TP_RING_AVAIL_INT_ring_avail_3_mask                                          (0x00000010)
#define TP_RING_AVAIL_INT_ring_avail_3(data)                                         (0x00000010&((data)<<4))
#define TP_RING_AVAIL_INT_ring_avail_3_src(data)                                     ((0x00000010&(data))>>4)
#define TP_RING_AVAIL_INT_get_ring_avail_3(data)                                     ((0x00000010&(data))>>4)
#define TP_RING_AVAIL_INT_ring_avail_2_shift                                         (3)
#define TP_RING_AVAIL_INT_ring_avail_2_mask                                          (0x00000008)
#define TP_RING_AVAIL_INT_ring_avail_2(data)                                         (0x00000008&((data)<<3))
#define TP_RING_AVAIL_INT_ring_avail_2_src(data)                                     ((0x00000008&(data))>>3)
#define TP_RING_AVAIL_INT_get_ring_avail_2(data)                                     ((0x00000008&(data))>>3)
#define TP_RING_AVAIL_INT_ring_avail_1_shift                                         (2)
#define TP_RING_AVAIL_INT_ring_avail_1_mask                                          (0x00000004)
#define TP_RING_AVAIL_INT_ring_avail_1(data)                                         (0x00000004&((data)<<2))
#define TP_RING_AVAIL_INT_ring_avail_1_src(data)                                     ((0x00000004&(data))>>2)
#define TP_RING_AVAIL_INT_get_ring_avail_1(data)                                     ((0x00000004&(data))>>2)
#define TP_RING_AVAIL_INT_ring_avail_0_shift                                         (1)
#define TP_RING_AVAIL_INT_ring_avail_0_mask                                          (0x00000002)
#define TP_RING_AVAIL_INT_ring_avail_0(data)                                         (0x00000002&((data)<<1))
#define TP_RING_AVAIL_INT_ring_avail_0_src(data)                                     ((0x00000002&(data))>>1)
#define TP_RING_AVAIL_INT_get_ring_avail_0(data)                                     ((0x00000002&(data))>>1)
#define TP_RING_AVAIL_INT_write_data_shift                                           (0)
#define TP_RING_AVAIL_INT_write_data_mask                                            (0x00000001)
#define TP_RING_AVAIL_INT_write_data(data)                                           (0x00000001&((data)<<0))
#define TP_RING_AVAIL_INT_write_data_src(data)                                       ((0x00000001&(data))>>0)
#define TP_RING_AVAIL_INT_get_write_data(data)                                       ((0x00000001&(data))>>0)


#define TP_RING_FULL_INT_0                                                           0x98014610
#define TP_RING_FULL_INT_1                                                           0x98014614
#define TP_RING_FULL_INT_0_reg_addr                                                  "0xD8014610"
#define TP_RING_FULL_INT_1_reg_addr                                                  "0xD8014614"
#define TP_RING_FULL_INT_0_reg                                                       0xD8014610
#define TP_RING_FULL_INT_1_reg                                                       0xD8014614
#define set_TP_RING_FULL_INT_0_reg(data)   (*((volatile unsigned int*) TP_RING_FULL_INT_0_reg)=data)
#define set_TP_RING_FULL_INT_1_reg(data)   (*((volatile unsigned int*) TP_RING_FULL_INT_1_reg)=data)
#define get_TP_RING_FULL_INT_0_reg   (*((volatile unsigned int*) TP_RING_FULL_INT_0_reg))
#define get_TP_RING_FULL_INT_1_reg   (*((volatile unsigned int*) TP_RING_FULL_INT_1_reg))
#define TP_RING_FULL_INT_0_inst_adr                                                  "0x0084"
#define TP_RING_FULL_INT_1_inst_adr                                                  "0x0085"
#define TP_RING_FULL_INT_0_inst                                                      0x0084
#define TP_RING_FULL_INT_1_inst                                                      0x0085
#define TP_RING_FULL_INT_ring_full_15_shift                                          (16)
#define TP_RING_FULL_INT_ring_full_15_mask                                           (0x00010000)
#define TP_RING_FULL_INT_ring_full_15(data)                                          (0x00010000&((data)<<16))
#define TP_RING_FULL_INT_ring_full_15_src(data)                                      ((0x00010000&(data))>>16)
#define TP_RING_FULL_INT_get_ring_full_15(data)                                      ((0x00010000&(data))>>16)
#define TP_RING_FULL_INT_ring_full_14_shift                                          (15)
#define TP_RING_FULL_INT_ring_full_14_mask                                           (0x00008000)
#define TP_RING_FULL_INT_ring_full_14(data)                                          (0x00008000&((data)<<15))
#define TP_RING_FULL_INT_ring_full_14_src(data)                                      ((0x00008000&(data))>>15)
#define TP_RING_FULL_INT_get_ring_full_14(data)                                      ((0x00008000&(data))>>15)
#define TP_RING_FULL_INT_ring_full_13_shift                                          (14)
#define TP_RING_FULL_INT_ring_full_13_mask                                           (0x00004000)
#define TP_RING_FULL_INT_ring_full_13(data)                                          (0x00004000&((data)<<14))
#define TP_RING_FULL_INT_ring_full_13_src(data)                                      ((0x00004000&(data))>>14)
#define TP_RING_FULL_INT_get_ring_full_13(data)                                      ((0x00004000&(data))>>14)
#define TP_RING_FULL_INT_ring_full_12_shift                                          (13)
#define TP_RING_FULL_INT_ring_full_12_mask                                           (0x00002000)
#define TP_RING_FULL_INT_ring_full_12(data)                                          (0x00002000&((data)<<13))
#define TP_RING_FULL_INT_ring_full_12_src(data)                                      ((0x00002000&(data))>>13)
#define TP_RING_FULL_INT_get_ring_full_12(data)                                      ((0x00002000&(data))>>13)
#define TP_RING_FULL_INT_ring_full_11_shift                                          (12)
#define TP_RING_FULL_INT_ring_full_11_mask                                           (0x00001000)
#define TP_RING_FULL_INT_ring_full_11(data)                                          (0x00001000&((data)<<12))
#define TP_RING_FULL_INT_ring_full_11_src(data)                                      ((0x00001000&(data))>>12)
#define TP_RING_FULL_INT_get_ring_full_11(data)                                      ((0x00001000&(data))>>12)
#define TP_RING_FULL_INT_ring_full_10_shift                                          (11)
#define TP_RING_FULL_INT_ring_full_10_mask                                           (0x00000800)
#define TP_RING_FULL_INT_ring_full_10(data)                                          (0x00000800&((data)<<11))
#define TP_RING_FULL_INT_ring_full_10_src(data)                                      ((0x00000800&(data))>>11)
#define TP_RING_FULL_INT_get_ring_full_10(data)                                      ((0x00000800&(data))>>11)
#define TP_RING_FULL_INT_ring_full_9_shift                                           (10)
#define TP_RING_FULL_INT_ring_full_9_mask                                            (0x00000400)
#define TP_RING_FULL_INT_ring_full_9(data)                                           (0x00000400&((data)<<10))
#define TP_RING_FULL_INT_ring_full_9_src(data)                                       ((0x00000400&(data))>>10)
#define TP_RING_FULL_INT_get_ring_full_9(data)                                       ((0x00000400&(data))>>10)
#define TP_RING_FULL_INT_ring_full_8_shift                                           (9)
#define TP_RING_FULL_INT_ring_full_8_mask                                            (0x00000200)
#define TP_RING_FULL_INT_ring_full_8(data)                                           (0x00000200&((data)<<9))
#define TP_RING_FULL_INT_ring_full_8_src(data)                                       ((0x00000200&(data))>>9)
#define TP_RING_FULL_INT_get_ring_full_8(data)                                       ((0x00000200&(data))>>9)
#define TP_RING_FULL_INT_ring_full_7_shift                                           (8)
#define TP_RING_FULL_INT_ring_full_7_mask                                            (0x00000100)
#define TP_RING_FULL_INT_ring_full_7(data)                                           (0x00000100&((data)<<8))
#define TP_RING_FULL_INT_ring_full_7_src(data)                                       ((0x00000100&(data))>>8)
#define TP_RING_FULL_INT_get_ring_full_7(data)                                       ((0x00000100&(data))>>8)
#define TP_RING_FULL_INT_ring_full_6_shift                                           (7)
#define TP_RING_FULL_INT_ring_full_6_mask                                            (0x00000080)
#define TP_RING_FULL_INT_ring_full_6(data)                                           (0x00000080&((data)<<7))
#define TP_RING_FULL_INT_ring_full_6_src(data)                                       ((0x00000080&(data))>>7)
#define TP_RING_FULL_INT_get_ring_full_6(data)                                       ((0x00000080&(data))>>7)
#define TP_RING_FULL_INT_ring_full_5_shift                                           (6)
#define TP_RING_FULL_INT_ring_full_5_mask                                            (0x00000040)
#define TP_RING_FULL_INT_ring_full_5(data)                                           (0x00000040&((data)<<6))
#define TP_RING_FULL_INT_ring_full_5_src(data)                                       ((0x00000040&(data))>>6)
#define TP_RING_FULL_INT_get_ring_full_5(data)                                       ((0x00000040&(data))>>6)
#define TP_RING_FULL_INT_ring_full_4_shift                                           (5)
#define TP_RING_FULL_INT_ring_full_4_mask                                            (0x00000020)
#define TP_RING_FULL_INT_ring_full_4(data)                                           (0x00000020&((data)<<5))
#define TP_RING_FULL_INT_ring_full_4_src(data)                                       ((0x00000020&(data))>>5)
#define TP_RING_FULL_INT_get_ring_full_4(data)                                       ((0x00000020&(data))>>5)
#define TP_RING_FULL_INT_ring_full_3_shift                                           (4)
#define TP_RING_FULL_INT_ring_full_3_mask                                            (0x00000010)
#define TP_RING_FULL_INT_ring_full_3(data)                                           (0x00000010&((data)<<4))
#define TP_RING_FULL_INT_ring_full_3_src(data)                                       ((0x00000010&(data))>>4)
#define TP_RING_FULL_INT_get_ring_full_3(data)                                       ((0x00000010&(data))>>4)
#define TP_RING_FULL_INT_ring_full_2_shift                                           (3)
#define TP_RING_FULL_INT_ring_full_2_mask                                            (0x00000008)
#define TP_RING_FULL_INT_ring_full_2(data)                                           (0x00000008&((data)<<3))
#define TP_RING_FULL_INT_ring_full_2_src(data)                                       ((0x00000008&(data))>>3)
#define TP_RING_FULL_INT_get_ring_full_2(data)                                       ((0x00000008&(data))>>3)
#define TP_RING_FULL_INT_ring_full_1_shift                                           (2)
#define TP_RING_FULL_INT_ring_full_1_mask                                            (0x00000004)
#define TP_RING_FULL_INT_ring_full_1(data)                                           (0x00000004&((data)<<2))
#define TP_RING_FULL_INT_ring_full_1_src(data)                                       ((0x00000004&(data))>>2)
#define TP_RING_FULL_INT_get_ring_full_1(data)                                       ((0x00000004&(data))>>2)
#define TP_RING_FULL_INT_ring_full_0_shift                                           (1)
#define TP_RING_FULL_INT_ring_full_0_mask                                            (0x00000002)
#define TP_RING_FULL_INT_ring_full_0(data)                                           (0x00000002&((data)<<1))
#define TP_RING_FULL_INT_ring_full_0_src(data)                                       ((0x00000002&(data))>>1)
#define TP_RING_FULL_INT_get_ring_full_0(data)                                       ((0x00000002&(data))>>1)
#define TP_RING_FULL_INT_write_data_shift                                            (0)
#define TP_RING_FULL_INT_write_data_mask                                             (0x00000001)
#define TP_RING_FULL_INT_write_data(data)                                            (0x00000001&((data)<<0))
#define TP_RING_FULL_INT_write_data_src(data)                                        ((0x00000001&(data))>>0)
#define TP_RING_FULL_INT_get_write_data(data)                                        ((0x00000001&(data))>>0)


#define TP_RING_AVAIL_INT_EN_0                                                       0x98014620
#define TP_RING_AVAIL_INT_EN_1                                                       0x98014624
#define TP_RING_AVAIL_INT_EN_0_reg_addr                                              "0xD8014620"
#define TP_RING_AVAIL_INT_EN_1_reg_addr                                              "0xD8014624"
#define TP_RING_AVAIL_INT_EN_0_reg                                                   0xD8014620
#define TP_RING_AVAIL_INT_EN_1_reg                                                   0xD8014624
#define set_TP_RING_AVAIL_INT_EN_0_reg(data)   (*((volatile unsigned int*) TP_RING_AVAIL_INT_EN_0_reg)=data)
#define set_TP_RING_AVAIL_INT_EN_1_reg(data)   (*((volatile unsigned int*) TP_RING_AVAIL_INT_EN_1_reg)=data)
#define get_TP_RING_AVAIL_INT_EN_0_reg   (*((volatile unsigned int*) TP_RING_AVAIL_INT_EN_0_reg))
#define get_TP_RING_AVAIL_INT_EN_1_reg   (*((volatile unsigned int*) TP_RING_AVAIL_INT_EN_1_reg))
#define TP_RING_AVAIL_INT_EN_0_inst_adr                                              "0x0088"
#define TP_RING_AVAIL_INT_EN_1_inst_adr                                              "0x0089"
#define TP_RING_AVAIL_INT_EN_0_inst                                                  0x0088
#define TP_RING_AVAIL_INT_EN_1_inst                                                  0x0089
#define TP_RING_AVAIL_INT_EN_ring_avail_15_en_shift                                  (16)
#define TP_RING_AVAIL_INT_EN_ring_avail_15_en_mask                                   (0x00010000)
#define TP_RING_AVAIL_INT_EN_ring_avail_15_en(data)                                  (0x00010000&((data)<<16))
#define TP_RING_AVAIL_INT_EN_ring_avail_15_en_src(data)                              ((0x00010000&(data))>>16)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_15_en(data)                              ((0x00010000&(data))>>16)
#define TP_RING_AVAIL_INT_EN_ring_avail_14_en_shift                                  (15)
#define TP_RING_AVAIL_INT_EN_ring_avail_14_en_mask                                   (0x00008000)
#define TP_RING_AVAIL_INT_EN_ring_avail_14_en(data)                                  (0x00008000&((data)<<15))
#define TP_RING_AVAIL_INT_EN_ring_avail_14_en_src(data)                              ((0x00008000&(data))>>15)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_14_en(data)                              ((0x00008000&(data))>>15)
#define TP_RING_AVAIL_INT_EN_ring_avail_13_en_shift                                  (14)
#define TP_RING_AVAIL_INT_EN_ring_avail_13_en_mask                                   (0x00004000)
#define TP_RING_AVAIL_INT_EN_ring_avail_13_en(data)                                  (0x00004000&((data)<<14))
#define TP_RING_AVAIL_INT_EN_ring_avail_13_en_src(data)                              ((0x00004000&(data))>>14)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_13_en(data)                              ((0x00004000&(data))>>14)
#define TP_RING_AVAIL_INT_EN_ring_avail_12_en_shift                                  (13)
#define TP_RING_AVAIL_INT_EN_ring_avail_12_en_mask                                   (0x00002000)
#define TP_RING_AVAIL_INT_EN_ring_avail_12_en(data)                                  (0x00002000&((data)<<13))
#define TP_RING_AVAIL_INT_EN_ring_avail_12_en_src(data)                              ((0x00002000&(data))>>13)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_12_en(data)                              ((0x00002000&(data))>>13)
#define TP_RING_AVAIL_INT_EN_ring_avail_11_en_shift                                  (12)
#define TP_RING_AVAIL_INT_EN_ring_avail_11_en_mask                                   (0x00001000)
#define TP_RING_AVAIL_INT_EN_ring_avail_11_en(data)                                  (0x00001000&((data)<<12))
#define TP_RING_AVAIL_INT_EN_ring_avail_11_en_src(data)                              ((0x00001000&(data))>>12)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_11_en(data)                              ((0x00001000&(data))>>12)
#define TP_RING_AVAIL_INT_EN_ring_avail_10_en_shift                                  (11)
#define TP_RING_AVAIL_INT_EN_ring_avail_10_en_mask                                   (0x00000800)
#define TP_RING_AVAIL_INT_EN_ring_avail_10_en(data)                                  (0x00000800&((data)<<11))
#define TP_RING_AVAIL_INT_EN_ring_avail_10_en_src(data)                              ((0x00000800&(data))>>11)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_10_en(data)                              ((0x00000800&(data))>>11)
#define TP_RING_AVAIL_INT_EN_ring_avail_9_en_shift                                   (10)
#define TP_RING_AVAIL_INT_EN_ring_avail_9_en_mask                                    (0x00000400)
#define TP_RING_AVAIL_INT_EN_ring_avail_9_en(data)                                   (0x00000400&((data)<<10))
#define TP_RING_AVAIL_INT_EN_ring_avail_9_en_src(data)                               ((0x00000400&(data))>>10)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_9_en(data)                               ((0x00000400&(data))>>10)
#define TP_RING_AVAIL_INT_EN_ring_avail_8_en_shift                                   (9)
#define TP_RING_AVAIL_INT_EN_ring_avail_8_en_mask                                    (0x00000200)
#define TP_RING_AVAIL_INT_EN_ring_avail_8_en(data)                                   (0x00000200&((data)<<9))
#define TP_RING_AVAIL_INT_EN_ring_avail_8_en_src(data)                               ((0x00000200&(data))>>9)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_8_en(data)                               ((0x00000200&(data))>>9)
#define TP_RING_AVAIL_INT_EN_ring_avail_7_en_shift                                   (8)
#define TP_RING_AVAIL_INT_EN_ring_avail_7_en_mask                                    (0x00000100)
#define TP_RING_AVAIL_INT_EN_ring_avail_7_en(data)                                   (0x00000100&((data)<<8))
#define TP_RING_AVAIL_INT_EN_ring_avail_7_en_src(data)                               ((0x00000100&(data))>>8)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_7_en(data)                               ((0x00000100&(data))>>8)
#define TP_RING_AVAIL_INT_EN_ring_avail_6_en_shift                                   (7)
#define TP_RING_AVAIL_INT_EN_ring_avail_6_en_mask                                    (0x00000080)
#define TP_RING_AVAIL_INT_EN_ring_avail_6_en(data)                                   (0x00000080&((data)<<7))
#define TP_RING_AVAIL_INT_EN_ring_avail_6_en_src(data)                               ((0x00000080&(data))>>7)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_6_en(data)                               ((0x00000080&(data))>>7)
#define TP_RING_AVAIL_INT_EN_ring_avail_5_en_shift                                   (6)
#define TP_RING_AVAIL_INT_EN_ring_avail_5_en_mask                                    (0x00000040)
#define TP_RING_AVAIL_INT_EN_ring_avail_5_en(data)                                   (0x00000040&((data)<<6))
#define TP_RING_AVAIL_INT_EN_ring_avail_5_en_src(data)                               ((0x00000040&(data))>>6)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_5_en(data)                               ((0x00000040&(data))>>6)
#define TP_RING_AVAIL_INT_EN_ring_avail_4_en_shift                                   (5)
#define TP_RING_AVAIL_INT_EN_ring_avail_4_en_mask                                    (0x00000020)
#define TP_RING_AVAIL_INT_EN_ring_avail_4_en(data)                                   (0x00000020&((data)<<5))
#define TP_RING_AVAIL_INT_EN_ring_avail_4_en_src(data)                               ((0x00000020&(data))>>5)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_4_en(data)                               ((0x00000020&(data))>>5)
#define TP_RING_AVAIL_INT_EN_ring_avail_3_en_shift                                   (4)
#define TP_RING_AVAIL_INT_EN_ring_avail_3_en_mask                                    (0x00000010)
#define TP_RING_AVAIL_INT_EN_ring_avail_3_en(data)                                   (0x00000010&((data)<<4))
#define TP_RING_AVAIL_INT_EN_ring_avail_3_en_src(data)                               ((0x00000010&(data))>>4)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_3_en(data)                               ((0x00000010&(data))>>4)
#define TP_RING_AVAIL_INT_EN_ring_avail_2_en_shift                                   (3)
#define TP_RING_AVAIL_INT_EN_ring_avail_2_en_mask                                    (0x00000008)
#define TP_RING_AVAIL_INT_EN_ring_avail_2_en(data)                                   (0x00000008&((data)<<3))
#define TP_RING_AVAIL_INT_EN_ring_avail_2_en_src(data)                               ((0x00000008&(data))>>3)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_2_en(data)                               ((0x00000008&(data))>>3)
#define TP_RING_AVAIL_INT_EN_ring_avail_1_en_shift                                   (2)
#define TP_RING_AVAIL_INT_EN_ring_avail_1_en_mask                                    (0x00000004)
#define TP_RING_AVAIL_INT_EN_ring_avail_1_en(data)                                   (0x00000004&((data)<<2))
#define TP_RING_AVAIL_INT_EN_ring_avail_1_en_src(data)                               ((0x00000004&(data))>>2)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_1_en(data)                               ((0x00000004&(data))>>2)
#define TP_RING_AVAIL_INT_EN_ring_avail_0_en_shift                                   (1)
#define TP_RING_AVAIL_INT_EN_ring_avail_0_en_mask                                    (0x00000002)
#define TP_RING_AVAIL_INT_EN_ring_avail_0_en(data)                                   (0x00000002&((data)<<1))
#define TP_RING_AVAIL_INT_EN_ring_avail_0_en_src(data)                               ((0x00000002&(data))>>1)
#define TP_RING_AVAIL_INT_EN_get_ring_avail_0_en(data)                               ((0x00000002&(data))>>1)
#define TP_RING_AVAIL_INT_EN_write_data_shift                                        (0)
#define TP_RING_AVAIL_INT_EN_write_data_mask                                         (0x00000001)
#define TP_RING_AVAIL_INT_EN_write_data(data)                                        (0x00000001&((data)<<0))
#define TP_RING_AVAIL_INT_EN_write_data_src(data)                                    ((0x00000001&(data))>>0)
#define TP_RING_AVAIL_INT_EN_get_write_data(data)                                    ((0x00000001&(data))>>0)


#define TP_RING_FULL_INT_EN_0                                                        0x98014630
#define TP_RING_FULL_INT_EN_1                                                        0x98014634
#define TP_RING_FULL_INT_EN_0_reg_addr                                               "0xD8014630"
#define TP_RING_FULL_INT_EN_1_reg_addr                                               "0xD8014634"
#define TP_RING_FULL_INT_EN_0_reg                                                    0xD8014630
#define TP_RING_FULL_INT_EN_1_reg                                                    0xD8014634
#define set_TP_RING_FULL_INT_EN_0_reg(data)   (*((volatile unsigned int*) TP_RING_FULL_INT_EN_0_reg)=data)
#define set_TP_RING_FULL_INT_EN_1_reg(data)   (*((volatile unsigned int*) TP_RING_FULL_INT_EN_1_reg)=data)
#define get_TP_RING_FULL_INT_EN_0_reg   (*((volatile unsigned int*) TP_RING_FULL_INT_EN_0_reg))
#define get_TP_RING_FULL_INT_EN_1_reg   (*((volatile unsigned int*) TP_RING_FULL_INT_EN_1_reg))
#define TP_RING_FULL_INT_EN_0_inst_adr                                               "0x008C"
#define TP_RING_FULL_INT_EN_1_inst_adr                                               "0x008D"
#define TP_RING_FULL_INT_EN_0_inst                                                   0x008C
#define TP_RING_FULL_INT_EN_1_inst                                                   0x008D
#define TP_RING_FULL_INT_EN_ring_full_15_en_shift                                    (16)
#define TP_RING_FULL_INT_EN_ring_full_15_en_mask                                     (0x00010000)
#define TP_RING_FULL_INT_EN_ring_full_15_en(data)                                    (0x00010000&((data)<<16))
#define TP_RING_FULL_INT_EN_ring_full_15_en_src(data)                                ((0x00010000&(data))>>16)
#define TP_RING_FULL_INT_EN_get_ring_full_15_en(data)                                ((0x00010000&(data))>>16)
#define TP_RING_FULL_INT_EN_ring_full_14_en_shift                                    (15)
#define TP_RING_FULL_INT_EN_ring_full_14_en_mask                                     (0x00008000)
#define TP_RING_FULL_INT_EN_ring_full_14_en(data)                                    (0x00008000&((data)<<15))
#define TP_RING_FULL_INT_EN_ring_full_14_en_src(data)                                ((0x00008000&(data))>>15)
#define TP_RING_FULL_INT_EN_get_ring_full_14_en(data)                                ((0x00008000&(data))>>15)
#define TP_RING_FULL_INT_EN_ring_full_13_en_shift                                    (14)
#define TP_RING_FULL_INT_EN_ring_full_13_en_mask                                     (0x00004000)
#define TP_RING_FULL_INT_EN_ring_full_13_en(data)                                    (0x00004000&((data)<<14))
#define TP_RING_FULL_INT_EN_ring_full_13_en_src(data)                                ((0x00004000&(data))>>14)
#define TP_RING_FULL_INT_EN_get_ring_full_13_en(data)                                ((0x00004000&(data))>>14)
#define TP_RING_FULL_INT_EN_ring_full_12_en_shift                                    (13)
#define TP_RING_FULL_INT_EN_ring_full_12_en_mask                                     (0x00002000)
#define TP_RING_FULL_INT_EN_ring_full_12_en(data)                                    (0x00002000&((data)<<13))
#define TP_RING_FULL_INT_EN_ring_full_12_en_src(data)                                ((0x00002000&(data))>>13)
#define TP_RING_FULL_INT_EN_get_ring_full_12_en(data)                                ((0x00002000&(data))>>13)
#define TP_RING_FULL_INT_EN_ring_full_11_en_shift                                    (12)
#define TP_RING_FULL_INT_EN_ring_full_11_en_mask                                     (0x00001000)
#define TP_RING_FULL_INT_EN_ring_full_11_en(data)                                    (0x00001000&((data)<<12))
#define TP_RING_FULL_INT_EN_ring_full_11_en_src(data)                                ((0x00001000&(data))>>12)
#define TP_RING_FULL_INT_EN_get_ring_full_11_en(data)                                ((0x00001000&(data))>>12)
#define TP_RING_FULL_INT_EN_ring_full_10_en_shift                                    (11)
#define TP_RING_FULL_INT_EN_ring_full_10_en_mask                                     (0x00000800)
#define TP_RING_FULL_INT_EN_ring_full_10_en(data)                                    (0x00000800&((data)<<11))
#define TP_RING_FULL_INT_EN_ring_full_10_en_src(data)                                ((0x00000800&(data))>>11)
#define TP_RING_FULL_INT_EN_get_ring_full_10_en(data)                                ((0x00000800&(data))>>11)
#define TP_RING_FULL_INT_EN_ring_full_9_en_shift                                     (10)
#define TP_RING_FULL_INT_EN_ring_full_9_en_mask                                      (0x00000400)
#define TP_RING_FULL_INT_EN_ring_full_9_en(data)                                     (0x00000400&((data)<<10))
#define TP_RING_FULL_INT_EN_ring_full_9_en_src(data)                                 ((0x00000400&(data))>>10)
#define TP_RING_FULL_INT_EN_get_ring_full_9_en(data)                                 ((0x00000400&(data))>>10)
#define TP_RING_FULL_INT_EN_ring_full_8_en_shift                                     (9)
#define TP_RING_FULL_INT_EN_ring_full_8_en_mask                                      (0x00000200)
#define TP_RING_FULL_INT_EN_ring_full_8_en(data)                                     (0x00000200&((data)<<9))
#define TP_RING_FULL_INT_EN_ring_full_8_en_src(data)                                 ((0x00000200&(data))>>9)
#define TP_RING_FULL_INT_EN_get_ring_full_8_en(data)                                 ((0x00000200&(data))>>9)
#define TP_RING_FULL_INT_EN_ring_full_7_en_shift                                     (8)
#define TP_RING_FULL_INT_EN_ring_full_7_en_mask                                      (0x00000100)
#define TP_RING_FULL_INT_EN_ring_full_7_en(data)                                     (0x00000100&((data)<<8))
#define TP_RING_FULL_INT_EN_ring_full_7_en_src(data)                                 ((0x00000100&(data))>>8)
#define TP_RING_FULL_INT_EN_get_ring_full_7_en(data)                                 ((0x00000100&(data))>>8)
#define TP_RING_FULL_INT_EN_ring_full_6_en_shift                                     (7)
#define TP_RING_FULL_INT_EN_ring_full_6_en_mask                                      (0x00000080)
#define TP_RING_FULL_INT_EN_ring_full_6_en(data)                                     (0x00000080&((data)<<7))
#define TP_RING_FULL_INT_EN_ring_full_6_en_src(data)                                 ((0x00000080&(data))>>7)
#define TP_RING_FULL_INT_EN_get_ring_full_6_en(data)                                 ((0x00000080&(data))>>7)
#define TP_RING_FULL_INT_EN_ring_full_5_en_shift                                     (6)
#define TP_RING_FULL_INT_EN_ring_full_5_en_mask                                      (0x00000040)
#define TP_RING_FULL_INT_EN_ring_full_5_en(data)                                     (0x00000040&((data)<<6))
#define TP_RING_FULL_INT_EN_ring_full_5_en_src(data)                                 ((0x00000040&(data))>>6)
#define TP_RING_FULL_INT_EN_get_ring_full_5_en(data)                                 ((0x00000040&(data))>>6)
#define TP_RING_FULL_INT_EN_ring_full_4_en_shift                                     (5)
#define TP_RING_FULL_INT_EN_ring_full_4_en_mask                                      (0x00000020)
#define TP_RING_FULL_INT_EN_ring_full_4_en(data)                                     (0x00000020&((data)<<5))
#define TP_RING_FULL_INT_EN_ring_full_4_en_src(data)                                 ((0x00000020&(data))>>5)
#define TP_RING_FULL_INT_EN_get_ring_full_4_en(data)                                 ((0x00000020&(data))>>5)
#define TP_RING_FULL_INT_EN_ring_full_3_en_shift                                     (4)
#define TP_RING_FULL_INT_EN_ring_full_3_en_mask                                      (0x00000010)
#define TP_RING_FULL_INT_EN_ring_full_3_en(data)                                     (0x00000010&((data)<<4))
#define TP_RING_FULL_INT_EN_ring_full_3_en_src(data)                                 ((0x00000010&(data))>>4)
#define TP_RING_FULL_INT_EN_get_ring_full_3_en(data)                                 ((0x00000010&(data))>>4)
#define TP_RING_FULL_INT_EN_ring_full_2_en_shift                                     (3)
#define TP_RING_FULL_INT_EN_ring_full_2_en_mask                                      (0x00000008)
#define TP_RING_FULL_INT_EN_ring_full_2_en(data)                                     (0x00000008&((data)<<3))
#define TP_RING_FULL_INT_EN_ring_full_2_en_src(data)                                 ((0x00000008&(data))>>3)
#define TP_RING_FULL_INT_EN_get_ring_full_2_en(data)                                 ((0x00000008&(data))>>3)
#define TP_RING_FULL_INT_EN_ring_full_1_en_shift                                     (2)
#define TP_RING_FULL_INT_EN_ring_full_1_en_mask                                      (0x00000004)
#define TP_RING_FULL_INT_EN_ring_full_1_en(data)                                     (0x00000004&((data)<<2))
#define TP_RING_FULL_INT_EN_ring_full_1_en_src(data)                                 ((0x00000004&(data))>>2)
#define TP_RING_FULL_INT_EN_get_ring_full_1_en(data)                                 ((0x00000004&(data))>>2)
#define TP_RING_FULL_INT_EN_ring_full_0_en_shift                                     (1)
#define TP_RING_FULL_INT_EN_ring_full_0_en_mask                                      (0x00000002)
#define TP_RING_FULL_INT_EN_ring_full_0_en(data)                                     (0x00000002&((data)<<1))
#define TP_RING_FULL_INT_EN_ring_full_0_en_src(data)                                 ((0x00000002&(data))>>1)
#define TP_RING_FULL_INT_EN_get_ring_full_0_en(data)                                 ((0x00000002&(data))>>1)
#define TP_RING_FULL_INT_EN_write_data_shift                                         (0)
#define TP_RING_FULL_INT_EN_write_data_mask                                          (0x00000001)
#define TP_RING_FULL_INT_EN_write_data(data)                                         (0x00000001&((data)<<0))
#define TP_RING_FULL_INT_EN_write_data_src(data)                                     ((0x00000001&(data))>>0)
#define TP_RING_FULL_INT_EN_get_write_data(data)                                     ((0x00000001&(data))>>0)


#define TP_M2M_RING_LIMIT                                                            0x98014640
#define TP_M2M_RING_LIMIT_reg_addr                                                   "0xD8014640"
#define TP_M2M_RING_LIMIT_reg                                                        0xD8014640
#define set_TP_M2M_RING_LIMIT_reg(data)   (*((volatile unsigned int*) TP_M2M_RING_LIMIT_reg)=data)
#define get_TP_M2M_RING_LIMIT_reg   (*((volatile unsigned int*) TP_M2M_RING_LIMIT_reg))
#define TP_M2M_RING_LIMIT_inst_adr                                                   "0x0090"
#define TP_M2M_RING_LIMIT_inst                                                       0x0090
#define TP_M2M_RING_LIMIT_ring_limit_shift                                           (3)
#define TP_M2M_RING_LIMIT_ring_limit_mask                                            (0xFFFFFFF8)
#define TP_M2M_RING_LIMIT_ring_limit(data)                                           (0xFFFFFFF8&((data)<<3))
#define TP_M2M_RING_LIMIT_ring_limit_src(data)                                       ((0xFFFFFFF8&(data))>>3)
#define TP_M2M_RING_LIMIT_get_ring_limit(data)                                       ((0xFFFFFFF8&(data))>>3)


#define TP_M2M_RING_BASE                                                             0x98014644
#define TP_M2M_RING_BASE_reg_addr                                                    "0xD8014644"
#define TP_M2M_RING_BASE_reg                                                         0xD8014644
#define set_TP_M2M_RING_BASE_reg(data)   (*((volatile unsigned int*) TP_M2M_RING_BASE_reg)=data)
#define get_TP_M2M_RING_BASE_reg   (*((volatile unsigned int*) TP_M2M_RING_BASE_reg))
#define TP_M2M_RING_BASE_inst_adr                                                    "0x0091"
#define TP_M2M_RING_BASE_inst                                                        0x0091
#define TP_M2M_RING_BASE_ring_base_shift                                             (3)
#define TP_M2M_RING_BASE_ring_base_mask                                              (0xFFFFFFF8)
#define TP_M2M_RING_BASE_ring_base(data)                                             (0xFFFFFFF8&((data)<<3))
#define TP_M2M_RING_BASE_ring_base_src(data)                                         ((0xFFFFFFF8&(data))>>3)
#define TP_M2M_RING_BASE_get_ring_base(data)                                         ((0xFFFFFFF8&(data))>>3)


#define TP_M2M_RING_RP                                                               0x98014648
#define TP_M2M_RING_RP_reg_addr                                                      "0xD8014648"
#define TP_M2M_RING_RP_reg                                                           0xD8014648
#define set_TP_M2M_RING_RP_reg(data)   (*((volatile unsigned int*) TP_M2M_RING_RP_reg)=data)
#define get_TP_M2M_RING_RP_reg   (*((volatile unsigned int*) TP_M2M_RING_RP_reg))
#define TP_M2M_RING_RP_inst_adr                                                      "0x0092"
#define TP_M2M_RING_RP_inst                                                          0x0092
#define TP_M2M_RING_RP_ring_rp_shift                                                 (0)
#define TP_M2M_RING_RP_ring_rp_mask                                                  (0xFFFFFFFF)
#define TP_M2M_RING_RP_ring_rp(data)                                                 (0xFFFFFFFF&((data)<<0))
#define TP_M2M_RING_RP_ring_rp_src(data)                                             ((0xFFFFFFFF&(data))>>0)
#define TP_M2M_RING_RP_get_ring_rp(data)                                             ((0xFFFFFFFF&(data))>>0)


#define TP_M2M_RING_WP                                                               0x9801464c
#define TP_M2M_RING_WP_reg_addr                                                      "0xD801464C"
#define TP_M2M_RING_WP_reg                                                           0xD801464C
#define set_TP_M2M_RING_WP_reg(data)   (*((volatile unsigned int*) TP_M2M_RING_WP_reg)=data)
#define get_TP_M2M_RING_WP_reg   (*((volatile unsigned int*) TP_M2M_RING_WP_reg))
#define TP_M2M_RING_WP_inst_adr                                                      "0x0093"
#define TP_M2M_RING_WP_inst                                                          0x0093
#define TP_M2M_RING_WP_ring_wp_shift                                                 (0)
#define TP_M2M_RING_WP_ring_wp_mask                                                  (0xFFFFFFFF)
#define TP_M2M_RING_WP_ring_wp(data)                                                 (0xFFFFFFFF&((data)<<0))
#define TP_M2M_RING_WP_ring_wp_src(data)                                             ((0xFFFFFFFF&(data))>>0)
#define TP_M2M_RING_WP_get_ring_wp(data)                                             ((0xFFFFFFFF&(data))>>0)


#define TP_M2M_RING_CTRL                                                             0x98014650
#define TP_M2M_RING_CTRL_reg_addr                                                    "0xD8014650"
#define TP_M2M_RING_CTRL_reg                                                         0xD8014650
#define set_TP_M2M_RING_CTRL_reg(data)   (*((volatile unsigned int*) TP_M2M_RING_CTRL_reg)=data)
#define get_TP_M2M_RING_CTRL_reg   (*((volatile unsigned int*) TP_M2M_RING_CTRL_reg))
#define TP_M2M_RING_CTRL_inst_adr                                                    "0x0094"
#define TP_M2M_RING_CTRL_inst                                                        0x0094
#define TP_M2M_RING_CTRL_empty_shift                                                 (4)
#define TP_M2M_RING_CTRL_empty_mask                                                  (0x00000010)
#define TP_M2M_RING_CTRL_empty(data)                                                 (0x00000010&((data)<<4))
#define TP_M2M_RING_CTRL_empty_src(data)                                             ((0x00000010&(data))>>4)
#define TP_M2M_RING_CTRL_get_empty(data)                                             ((0x00000010&(data))>>4)
#define TP_M2M_RING_CTRL_empty_en_shift                                              (3)
#define TP_M2M_RING_CTRL_empty_en_mask                                               (0x00000008)
#define TP_M2M_RING_CTRL_empty_en(data)                                              (0x00000008&((data)<<3))
#define TP_M2M_RING_CTRL_empty_en_src(data)                                          ((0x00000008&(data))>>3)
#define TP_M2M_RING_CTRL_get_empty_en(data)                                          ((0x00000008&(data))>>3)
#define TP_M2M_RING_CTRL_stop_shift                                                  (2)
#define TP_M2M_RING_CTRL_stop_mask                                                   (0x00000004)
#define TP_M2M_RING_CTRL_stop(data)                                                  (0x00000004&((data)<<2))
#define TP_M2M_RING_CTRL_stop_src(data)                                              ((0x00000004&(data))>>2)
#define TP_M2M_RING_CTRL_get_stop(data)                                              ((0x00000004&(data))>>2)
#define TP_M2M_RING_CTRL_go_shift                                                    (1)
#define TP_M2M_RING_CTRL_go_mask                                                     (0x00000002)
#define TP_M2M_RING_CTRL_go(data)                                                    (0x00000002&((data)<<1))
#define TP_M2M_RING_CTRL_go_src(data)                                                ((0x00000002&(data))>>1)
#define TP_M2M_RING_CTRL_get_go(data)                                                ((0x00000002&(data))>>1)
#define TP_M2M_RING_CTRL_write_data_shift                                            (0)
#define TP_M2M_RING_CTRL_write_data_mask                                             (0x00000001)
#define TP_M2M_RING_CTRL_write_data(data)                                            (0x00000001&((data)<<0))
#define TP_M2M_RING_CTRL_write_data_src(data)                                        ((0x00000001&(data))>>0)
#define TP_M2M_RING_CTRL_get_write_data(data)                                        ((0x00000001&(data))>>0)


#define TP_SYNC_POS                                                                  0x98014658
#define TP_SYNC_POS_reg_addr                                                         "0xD8014658"
#define TP_SYNC_POS_reg                                                              0xD8014658
#define set_TP_SYNC_POS_reg(data)   (*((volatile unsigned int*) TP_SYNC_POS_reg)=data)
#define get_TP_SYNC_POS_reg   (*((volatile unsigned int*) TP_SYNC_POS_reg))
#define TP_SYNC_POS_inst_adr                                                         "0x0096"
#define TP_SYNC_POS_inst                                                             0x0096
#define TP_SYNC_POS_sync_pos_shift                                                   (0)
#define TP_SYNC_POS_sync_pos_mask                                                    (0xFFFFFFFF)
#define TP_SYNC_POS_sync_pos(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_SYNC_POS_sync_pos_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_SYNC_POS_get_sync_pos(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_DMY_A                                                                     0x9801465C
#define TP_DMY_A_reg_addr                                                            "0xD801465C"
#define TP_DMY_A_reg                                                                 0xD801465C
#define set_TP_DMY_A_reg(data)   (*((volatile unsigned int*) TP_DMY_A_reg)=data)
#define get_TP_DMY_A_reg   (*((volatile unsigned int*) TP_DMY_A_reg))
#define TP_DMY_A_inst_adr                                                            "0x0097"
#define TP_DMY_A_inst                                                                0x0097
#define TP_DMY_A_dmy_shift                                                           (0)
#define TP_DMY_A_dmy_mask                                                            (0xFFFFFFFF)
#define TP_DMY_A_dmy(data)                                                           (0xFFFFFFFF&((data)<<0))
#define TP_DMY_A_dmy_src(data)                                                       ((0xFFFFFFFF&(data))>>0)
#define TP_DMY_A_get_dmy(data)                                                       ((0xFFFFFFFF&(data))>>0)


#define TP_DMY_B                                                                     0x98014660
#define TP_DMY_B_reg_addr                                                            "0xD8014660"
#define TP_DMY_B_reg                                                                 0xD8014660
#define set_TP_DMY_B_reg(data)   (*((volatile unsigned int*) TP_DMY_B_reg)=data)
#define get_TP_DMY_B_reg   (*((volatile unsigned int*) TP_DMY_B_reg))
#define TP_DMY_B_inst_adr                                                            "0x0098"
#define TP_DMY_B_inst                                                                0x0098
#define TP_DMY_B_dmy_shift                                                           (0)
#define TP_DMY_B_dmy_mask                                                            (0xFFFFFFFF)
#define TP_DMY_B_dmy(data)                                                           (0xFFFFFFFF&((data)<<0))
#define TP_DMY_B_dmy_src(data)                                                       ((0xFFFFFFFF&(data))>>0)
#define TP_DMY_B_get_dmy(data)                                                       ((0xFFFFFFFF&(data))>>0)


#define TP_SWAP                                                                      0x98014664
#define TP_SWAP_reg_addr                                                             "0xD8014664"
#define TP_SWAP_reg                                                                  0xD8014664
#define set_TP_SWAP_reg(data)   (*((volatile unsigned int*) TP_SWAP_reg)=data)
#define get_TP_SWAP_reg   (*((volatile unsigned int*) TP_SWAP_reg))
#define TP_SWAP_inst_adr                                                             "0x0099"
#define TP_SWAP_inst                                                                 0x0099
#define TP_SWAP_pese_clk_gate_disable_shift                                          (19)
#define TP_SWAP_pese_clk_gate_disable_mask                                           (0x00080000)
#define TP_SWAP_pese_clk_gate_disable(data)                                          (0x00080000&((data)<<19))
#define TP_SWAP_pese_clk_gate_disable_src(data)                                      ((0x00080000&(data))>>19)
#define TP_SWAP_get_pese_clk_gate_disable(data)                                      ((0x00080000&(data))>>19)
#define TP_SWAP_hdcp_clk_gate_disable_shift                                          (18)
#define TP_SWAP_hdcp_clk_gate_disable_mask                                           (0x00040000)
#define TP_SWAP_hdcp_clk_gate_disable(data)                                          (0x00040000&((data)<<18))
#define TP_SWAP_hdcp_clk_gate_disable_src(data)                                      ((0x00040000&(data))>>18)
#define TP_SWAP_get_hdcp_clk_gate_disable(data)                                      ((0x00040000&(data))>>18)
#define TP_SWAP_ch1_clk_gate_disable_shift                                           (17)
#define TP_SWAP_ch1_clk_gate_disable_mask                                            (0x00020000)
#define TP_SWAP_ch1_clk_gate_disable(data)                                           (0x00020000&((data)<<17))
#define TP_SWAP_ch1_clk_gate_disable_src(data)                                       ((0x00020000&(data))>>17)
#define TP_SWAP_get_ch1_clk_gate_disable(data)                                       ((0x00020000&(data))>>17)
#define TP_SWAP_ch0_clk_gate_disable_shift                                           (16)
#define TP_SWAP_ch0_clk_gate_disable_mask                                            (0x00010000)
#define TP_SWAP_ch0_clk_gate_disable(data)                                           (0x00010000&((data)<<16))
#define TP_SWAP_ch0_clk_gate_disable_src(data)                                       ((0x00010000&(data))>>16)
#define TP_SWAP_get_ch0_clk_gate_disable(data)                                       ((0x00010000&(data))>>16)
#define TP_SWAP_sb1_8byte_swap_shift                                                 (0)
#define TP_SWAP_sb1_8byte_swap_mask                                                  (0x00000001)
#define TP_SWAP_sb1_8byte_swap(data)                                                 (0x00000001&((data)<<0))
#define TP_SWAP_sb1_8byte_swap_src(data)                                             ((0x00000001&(data))>>0)
#define TP_SWAP_get_sb1_8byte_swap(data)                                             ((0x00000001&(data))>>0)


#define TP_DEBUG                                                                     0x98014690
#define TP_DEBUG_reg_addr                                                            "0xD8014690"
#define TP_DEBUG_reg                                                                 0xD8014690
#define set_TP_DEBUG_reg(data)   (*((volatile unsigned int*) TP_DEBUG_reg)=data)
#define get_TP_DEBUG_reg   (*((volatile unsigned int*) TP_DEBUG_reg))
#define TP_DEBUG_inst_adr                                                            "0x00A4"
#define TP_DEBUG_inst                                                                0x00A4
#define TP_DEBUG_dv_verify_only_shift                                                (7)
#define TP_DEBUG_dv_verify_only_mask                                                 (0x00000080)
#define TP_DEBUG_dv_verify_only(data)                                                (0x00000080&((data)<<7))
#define TP_DEBUG_dv_verify_only_src(data)                                            ((0x00000080&(data))>>7)
#define TP_DEBUG_get_dv_verify_only(data)                                            ((0x00000080&(data))>>7)
#define TP_DEBUG_tp_sram_sleep_off_shift                                             (6)
#define TP_DEBUG_tp_sram_sleep_off_mask                                              (0x00000040)
#define TP_DEBUG_tp_sram_sleep_off(data)                                             (0x00000040&((data)<<6))
#define TP_DEBUG_tp_sram_sleep_off_src(data)                                         ((0x00000040&(data))>>6)
#define TP_DEBUG_get_tp_sram_sleep_off(data)                                         ((0x00000040&(data))>>6)
#define TP_DEBUG_tp_pkt_sram_addr_rst_sel_shift                                      (5)
#define TP_DEBUG_tp_pkt_sram_addr_rst_sel_mask                                       (0x00000020)
#define TP_DEBUG_tp_pkt_sram_addr_rst_sel(data)                                      (0x00000020&((data)<<5))
#define TP_DEBUG_tp_pkt_sram_addr_rst_sel_src(data)                                  ((0x00000020&(data))>>5)
#define TP_DEBUG_get_tp_pkt_sram_addr_rst_sel(data)                                  ((0x00000020&(data))>>5)
#define TP_DEBUG_dbg_mode_shift                                                      (0)
#define TP_DEBUG_dbg_mode_mask                                                       (0x0000001F)
#define TP_DEBUG_dbg_mode(data)                                                      (0x0000001F&((data)<<0))
#define TP_DEBUG_dbg_mode_src(data)                                                  ((0x0000001F&(data))>>0)
#define TP_DEBUG_get_dbg_mode(data)                                                  ((0x0000001F&(data))>>0)


#define TP_HDCP_PID_01                                                               0x98014700
#define TP_HDCP_PID_01_reg_addr                                                      "0xD8014700"
#define TP_HDCP_PID_01_reg                                                           0xD8014700
#define set_TP_HDCP_PID_01_reg(data)   (*((volatile unsigned int*) TP_HDCP_PID_01_reg)=data)
#define get_TP_HDCP_PID_01_reg   (*((volatile unsigned int*) TP_HDCP_PID_01_reg))
#define TP_HDCP_PID_01_inst_adr                                                      "0x00C0"
#define TP_HDCP_PID_01_inst                                                          0x00C0
#define TP_HDCP_PID_01_hdcp_en0_shift                                                (31)
#define TP_HDCP_PID_01_hdcp_en0_mask                                                 (0x80000000)
#define TP_HDCP_PID_01_hdcp_en0(data)                                                (0x80000000&((data)<<31))
#define TP_HDCP_PID_01_hdcp_en0_src(data)                                            ((0x80000000&(data))>>31)
#define TP_HDCP_PID_01_get_hdcp_en0(data)                                            ((0x80000000&(data))>>31)
#define TP_HDCP_PID_01_pid0_shift                                                    (16)
#define TP_HDCP_PID_01_pid0_mask                                                     (0x1FFF0000)
#define TP_HDCP_PID_01_pid0(data)                                                    (0x1FFF0000&((data)<<16))
#define TP_HDCP_PID_01_pid0_src(data)                                                ((0x1FFF0000&(data))>>16)
#define TP_HDCP_PID_01_get_pid0(data)                                                ((0x1FFF0000&(data))>>16)
#define TP_HDCP_PID_01_hdcp_en1_shift                                                (15)
#define TP_HDCP_PID_01_hdcp_en1_mask                                                 (0x00008000)
#define TP_HDCP_PID_01_hdcp_en1(data)                                                (0x00008000&((data)<<15))
#define TP_HDCP_PID_01_hdcp_en1_src(data)                                            ((0x00008000&(data))>>15)
#define TP_HDCP_PID_01_get_hdcp_en1(data)                                            ((0x00008000&(data))>>15)
#define TP_HDCP_PID_01_pid1_shift                                                    (0)
#define TP_HDCP_PID_01_pid1_mask                                                     (0x00001FFF)
#define TP_HDCP_PID_01_pid1(data)                                                    (0x00001FFF&((data)<<0))
#define TP_HDCP_PID_01_pid1_src(data)                                                ((0x00001FFF&(data))>>0)
#define TP_HDCP_PID_01_get_pid1(data)                                                ((0x00001FFF&(data))>>0)


#define TP_HDCP_PID_23                                                               0x98014704
#define TP_HDCP_PID_23_reg_addr                                                      "0xD8014704"
#define TP_HDCP_PID_23_reg                                                           0xD8014704
#define set_TP_HDCP_PID_23_reg(data)   (*((volatile unsigned int*) TP_HDCP_PID_23_reg)=data)
#define get_TP_HDCP_PID_23_reg   (*((volatile unsigned int*) TP_HDCP_PID_23_reg))
#define TP_HDCP_PID_23_inst_adr                                                      "0x00C1"
#define TP_HDCP_PID_23_inst                                                          0x00C1
#define TP_HDCP_PID_23_hdcp_en2_shift                                                (31)
#define TP_HDCP_PID_23_hdcp_en2_mask                                                 (0x80000000)
#define TP_HDCP_PID_23_hdcp_en2(data)                                                (0x80000000&((data)<<31))
#define TP_HDCP_PID_23_hdcp_en2_src(data)                                            ((0x80000000&(data))>>31)
#define TP_HDCP_PID_23_get_hdcp_en2(data)                                            ((0x80000000&(data))>>31)
#define TP_HDCP_PID_23_pid2_shift                                                    (16)
#define TP_HDCP_PID_23_pid2_mask                                                     (0x1FFF0000)
#define TP_HDCP_PID_23_pid2(data)                                                    (0x1FFF0000&((data)<<16))
#define TP_HDCP_PID_23_pid2_src(data)                                                ((0x1FFF0000&(data))>>16)
#define TP_HDCP_PID_23_get_pid2(data)                                                ((0x1FFF0000&(data))>>16)
#define TP_HDCP_PID_23_hdcp_en3_shift                                                (15)
#define TP_HDCP_PID_23_hdcp_en3_mask                                                 (0x00008000)
#define TP_HDCP_PID_23_hdcp_en3(data)                                                (0x00008000&((data)<<15))
#define TP_HDCP_PID_23_hdcp_en3_src(data)                                            ((0x00008000&(data))>>15)
#define TP_HDCP_PID_23_get_hdcp_en3(data)                                            ((0x00008000&(data))>>15)
#define TP_HDCP_PID_23_pid3_shift                                                    (0)
#define TP_HDCP_PID_23_pid3_mask                                                     (0x00001FFF)
#define TP_HDCP_PID_23_pid3(data)                                                    (0x00001FFF&((data)<<0))
#define TP_HDCP_PID_23_pid3_src(data)                                                ((0x00001FFF&(data))>>0)
#define TP_HDCP_PID_23_get_pid3(data)                                                ((0x00001FFF&(data))>>0)


#define TP_HDCP_RIV0_0                                                               0x98014708
#define TP_HDCP_RIV0_0_reg_addr                                                      "0xD8014708"
#define TP_HDCP_RIV0_0_reg                                                           0xD8014708
#define set_TP_HDCP_RIV0_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV0_0_reg)=data)
#define get_TP_HDCP_RIV0_0_reg   (*((volatile unsigned int*) TP_HDCP_RIV0_0_reg))
#define TP_HDCP_RIV0_0_inst_adr                                                      "0x00C2"
#define TP_HDCP_RIV0_0_inst                                                          0x00C2
#define TP_HDCP_RIV0_0_riv0_h_shift                                                  (0)
#define TP_HDCP_RIV0_0_riv0_h_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV0_0_riv0_h(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV0_0_riv0_h_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV0_0_get_riv0_h(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV0_1                                                               0x9801470C
#define TP_HDCP_RIV0_1_reg_addr                                                      "0xD801470C"
#define TP_HDCP_RIV0_1_reg                                                           0xD801470C
#define set_TP_HDCP_RIV0_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV0_1_reg)=data)
#define get_TP_HDCP_RIV0_1_reg   (*((volatile unsigned int*) TP_HDCP_RIV0_1_reg))
#define TP_HDCP_RIV0_1_inst_adr                                                      "0x00C3"
#define TP_HDCP_RIV0_1_inst                                                          0x00C3
#define TP_HDCP_RIV0_1_riv0_l_shift                                                  (0)
#define TP_HDCP_RIV0_1_riv0_l_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV0_1_riv0_l(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV0_1_riv0_l_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV0_1_get_riv0_l(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV1_0                                                               0x98014710
#define TP_HDCP_RIV1_0_reg_addr                                                      "0xD8014710"
#define TP_HDCP_RIV1_0_reg                                                           0xD8014710
#define set_TP_HDCP_RIV1_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV1_0_reg)=data)
#define get_TP_HDCP_RIV1_0_reg   (*((volatile unsigned int*) TP_HDCP_RIV1_0_reg))
#define TP_HDCP_RIV1_0_inst_adr                                                      "0x00C4"
#define TP_HDCP_RIV1_0_inst                                                          0x00C4
#define TP_HDCP_RIV1_0_riv1_h_shift                                                  (0)
#define TP_HDCP_RIV1_0_riv1_h_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV1_0_riv1_h(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV1_0_riv1_h_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV1_0_get_riv1_h(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV1_1                                                               0x98014714
#define TP_HDCP_RIV1_1_reg_addr                                                      "0xD8014714"
#define TP_HDCP_RIV1_1_reg                                                           0xD8014714
#define set_TP_HDCP_RIV1_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV1_1_reg)=data)
#define get_TP_HDCP_RIV1_1_reg   (*((volatile unsigned int*) TP_HDCP_RIV1_1_reg))
#define TP_HDCP_RIV1_1_inst_adr                                                      "0x00C5"
#define TP_HDCP_RIV1_1_inst                                                          0x00C5
#define TP_HDCP_RIV1_1_riv1_l_shift                                                  (0)
#define TP_HDCP_RIV1_1_riv1_l_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV1_1_riv1_l(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV1_1_riv1_l_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV1_1_get_riv1_l(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV2_0                                                               0x98014718
#define TP_HDCP_RIV2_0_reg_addr                                                      "0xD8014718"
#define TP_HDCP_RIV2_0_reg                                                           0xD8014718
#define set_TP_HDCP_RIV2_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV2_0_reg)=data)
#define get_TP_HDCP_RIV2_0_reg   (*((volatile unsigned int*) TP_HDCP_RIV2_0_reg))
#define TP_HDCP_RIV2_0_inst_adr                                                      "0x00C6"
#define TP_HDCP_RIV2_0_inst                                                          0x00C6
#define TP_HDCP_RIV2_0_riv2_h_shift                                                  (0)
#define TP_HDCP_RIV2_0_riv2_h_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV2_0_riv2_h(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV2_0_riv2_h_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV2_0_get_riv2_h(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV2_1                                                               0x9801471C
#define TP_HDCP_RIV2_1_reg_addr                                                      "0xD801471C"
#define TP_HDCP_RIV2_1_reg                                                           0xD801471C
#define set_TP_HDCP_RIV2_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV2_1_reg)=data)
#define get_TP_HDCP_RIV2_1_reg   (*((volatile unsigned int*) TP_HDCP_RIV2_1_reg))
#define TP_HDCP_RIV2_1_inst_adr                                                      "0x00C7"
#define TP_HDCP_RIV2_1_inst                                                          0x00C7
#define TP_HDCP_RIV2_1_riv2_l_shift                                                  (0)
#define TP_HDCP_RIV2_1_riv2_l_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV2_1_riv2_l(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV2_1_riv2_l_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV2_1_get_riv2_l(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV3_0                                                               0x98014720
#define TP_HDCP_RIV3_0_reg_addr                                                      "0xD8014720"
#define TP_HDCP_RIV3_0_reg                                                           0xD8014720
#define set_TP_HDCP_RIV3_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV3_0_reg)=data)
#define get_TP_HDCP_RIV3_0_reg   (*((volatile unsigned int*) TP_HDCP_RIV3_0_reg))
#define TP_HDCP_RIV3_0_inst_adr                                                      "0x00C8"
#define TP_HDCP_RIV3_0_inst                                                          0x00C8
#define TP_HDCP_RIV3_0_riv3_h_shift                                                  (0)
#define TP_HDCP_RIV3_0_riv3_h_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV3_0_riv3_h(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV3_0_riv3_h_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV3_0_get_riv3_h(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV3_1                                                               0x98014724
#define TP_HDCP_RIV3_1_reg_addr                                                      "0xD8014724"
#define TP_HDCP_RIV3_1_reg                                                           0xD8014724
#define set_TP_HDCP_RIV3_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV3_1_reg)=data)
#define get_TP_HDCP_RIV3_1_reg   (*((volatile unsigned int*) TP_HDCP_RIV3_1_reg))
#define TP_HDCP_RIV3_1_inst_adr                                                      "0x00C9"
#define TP_HDCP_RIV3_1_inst                                                          0x00C9
#define TP_HDCP_RIV3_1_riv3_l_shift                                                  (0)
#define TP_HDCP_RIV3_1_riv3_l_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV3_1_riv3_l(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV3_1_riv3_l_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV3_1_get_riv3_l(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS0_0                                                                0x98014728
#define TP_HDCP_KS0_0_reg_addr                                                       "0xD8014728"
#define TP_HDCP_KS0_0_reg                                                            0xD8014728
#define set_TP_HDCP_KS0_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS0_0_reg)=data)
#define get_TP_HDCP_KS0_0_reg   (*((volatile unsigned int*) TP_HDCP_KS0_0_reg))
#define TP_HDCP_KS0_0_inst_adr                                                       "0x00CA"
#define TP_HDCP_KS0_0_inst                                                           0x00CA
#define TP_HDCP_KS0_0_ks0_hh_shift                                                   (0)
#define TP_HDCP_KS0_0_ks0_hh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS0_0_ks0_hh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS0_0_ks0_hh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS0_0_get_ks0_hh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS0_1                                                                0x9801472C
#define TP_HDCP_KS0_1_reg_addr                                                       "0xD801472C"
#define TP_HDCP_KS0_1_reg                                                            0xD801472C
#define set_TP_HDCP_KS0_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS0_1_reg)=data)
#define get_TP_HDCP_KS0_1_reg   (*((volatile unsigned int*) TP_HDCP_KS0_1_reg))
#define TP_HDCP_KS0_1_inst_adr                                                       "0x00CB"
#define TP_HDCP_KS0_1_inst                                                           0x00CB
#define TP_HDCP_KS0_1_ks0_hl_shift                                                   (0)
#define TP_HDCP_KS0_1_ks0_hl_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS0_1_ks0_hl(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS0_1_ks0_hl_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS0_1_get_ks0_hl(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS0_2                                                                0x98014730
#define TP_HDCP_KS0_2_reg_addr                                                       "0xD8014730"
#define TP_HDCP_KS0_2_reg                                                            0xD8014730
#define set_TP_HDCP_KS0_2_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS0_2_reg)=data)
#define get_TP_HDCP_KS0_2_reg   (*((volatile unsigned int*) TP_HDCP_KS0_2_reg))
#define TP_HDCP_KS0_2_inst_adr                                                       "0x00CC"
#define TP_HDCP_KS0_2_inst                                                           0x00CC
#define TP_HDCP_KS0_2_ks0_lh_shift                                                   (0)
#define TP_HDCP_KS0_2_ks0_lh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS0_2_ks0_lh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS0_2_ks0_lh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS0_2_get_ks0_lh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS0_3                                                                0x98014734
#define TP_HDCP_KS0_3_reg_addr                                                       "0xD8014734"
#define TP_HDCP_KS0_3_reg                                                            0xD8014734
#define set_TP_HDCP_KS0_3_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS0_3_reg)=data)
#define get_TP_HDCP_KS0_3_reg   (*((volatile unsigned int*) TP_HDCP_KS0_3_reg))
#define TP_HDCP_KS0_3_inst_adr                                                       "0x00CD"
#define TP_HDCP_KS0_3_inst                                                           0x00CD
#define TP_HDCP_KS0_3_ks0_ll_shift                                                   (0)
#define TP_HDCP_KS0_3_ks0_ll_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS0_3_ks0_ll(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS0_3_ks0_ll_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS0_3_get_ks0_ll(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS1_0                                                                0x98014738
#define TP_HDCP_KS1_0_reg_addr                                                       "0xD8014738"
#define TP_HDCP_KS1_0_reg                                                            0xD8014738
#define set_TP_HDCP_KS1_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS1_0_reg)=data)
#define get_TP_HDCP_KS1_0_reg   (*((volatile unsigned int*) TP_HDCP_KS1_0_reg))
#define TP_HDCP_KS1_0_inst_adr                                                       "0x00CE"
#define TP_HDCP_KS1_0_inst                                                           0x00CE
#define TP_HDCP_KS1_0_ks1_hh_shift                                                   (0)
#define TP_HDCP_KS1_0_ks1_hh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS1_0_ks1_hh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS1_0_ks1_hh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS1_0_get_ks1_hh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS1_1                                                                0x9801473C
#define TP_HDCP_KS1_1_reg_addr                                                       "0xD801473C"
#define TP_HDCP_KS1_1_reg                                                            0xD801473C
#define set_TP_HDCP_KS1_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS1_1_reg)=data)
#define get_TP_HDCP_KS1_1_reg   (*((volatile unsigned int*) TP_HDCP_KS1_1_reg))
#define TP_HDCP_KS1_1_inst_adr                                                       "0x00CF"
#define TP_HDCP_KS1_1_inst                                                           0x00CF
#define TP_HDCP_KS1_1_ks1_hl_shift                                                   (0)
#define TP_HDCP_KS1_1_ks1_hl_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS1_1_ks1_hl(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS1_1_ks1_hl_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS1_1_get_ks1_hl(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS1_2                                                                0x98014740
#define TP_HDCP_KS1_2_reg_addr                                                       "0xD8014740"
#define TP_HDCP_KS1_2_reg                                                            0xD8014740
#define set_TP_HDCP_KS1_2_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS1_2_reg)=data)
#define get_TP_HDCP_KS1_2_reg   (*((volatile unsigned int*) TP_HDCP_KS1_2_reg))
#define TP_HDCP_KS1_2_inst_adr                                                       "0x00D0"
#define TP_HDCP_KS1_2_inst                                                           0x00D0
#define TP_HDCP_KS1_2_ks1_lh_shift                                                   (0)
#define TP_HDCP_KS1_2_ks1_lh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS1_2_ks1_lh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS1_2_ks1_lh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS1_2_get_ks1_lh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS1_3                                                                0x98014744
#define TP_HDCP_KS1_3_reg_addr                                                       "0xD8014744"
#define TP_HDCP_KS1_3_reg                                                            0xD8014744
#define set_TP_HDCP_KS1_3_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS1_3_reg)=data)
#define get_TP_HDCP_KS1_3_reg   (*((volatile unsigned int*) TP_HDCP_KS1_3_reg))
#define TP_HDCP_KS1_3_inst_adr                                                       "0x00D1"
#define TP_HDCP_KS1_3_inst                                                           0x00D1
#define TP_HDCP_KS1_3_ks1_ll_shift                                                   (0)
#define TP_HDCP_KS1_3_ks1_ll_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS1_3_ks1_ll(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS1_3_ks1_ll_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS1_3_get_ks1_ll(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS2_0                                                                0x98014748
#define TP_HDCP_KS2_0_reg_addr                                                       "0xD8014748"
#define TP_HDCP_KS2_0_reg                                                            0xD8014748
#define set_TP_HDCP_KS2_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS2_0_reg)=data)
#define get_TP_HDCP_KS2_0_reg   (*((volatile unsigned int*) TP_HDCP_KS2_0_reg))
#define TP_HDCP_KS2_0_inst_adr                                                       "0x00D2"
#define TP_HDCP_KS2_0_inst                                                           0x00D2
#define TP_HDCP_KS2_0_ks2_hh_shift                                                   (0)
#define TP_HDCP_KS2_0_ks2_hh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS2_0_ks2_hh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS2_0_ks2_hh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS2_0_get_ks2_hh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS2_1                                                                0x9801474C
#define TP_HDCP_KS2_1_reg_addr                                                       "0xD801474C"
#define TP_HDCP_KS2_1_reg                                                            0xD801474C
#define set_TP_HDCP_KS2_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS2_1_reg)=data)
#define get_TP_HDCP_KS2_1_reg   (*((volatile unsigned int*) TP_HDCP_KS2_1_reg))
#define TP_HDCP_KS2_1_inst_adr                                                       "0x00D3"
#define TP_HDCP_KS2_1_inst                                                           0x00D3
#define TP_HDCP_KS2_1_ks2_hl_shift                                                   (0)
#define TP_HDCP_KS2_1_ks2_hl_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS2_1_ks2_hl(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS2_1_ks2_hl_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS2_1_get_ks2_hl(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS2_2                                                                0x98014750
#define TP_HDCP_KS2_2_reg_addr                                                       "0xD8014750"
#define TP_HDCP_KS2_2_reg                                                            0xD8014750
#define set_TP_HDCP_KS2_2_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS2_2_reg)=data)
#define get_TP_HDCP_KS2_2_reg   (*((volatile unsigned int*) TP_HDCP_KS2_2_reg))
#define TP_HDCP_KS2_2_inst_adr                                                       "0x00D4"
#define TP_HDCP_KS2_2_inst                                                           0x00D4
#define TP_HDCP_KS2_2_ks2_lh_shift                                                   (0)
#define TP_HDCP_KS2_2_ks2_lh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS2_2_ks2_lh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS2_2_ks2_lh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS2_2_get_ks2_lh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS2_3                                                                0x98014754
#define TP_HDCP_KS2_3_reg_addr                                                       "0xD8014754"
#define TP_HDCP_KS2_3_reg                                                            0xD8014754
#define set_TP_HDCP_KS2_3_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS2_3_reg)=data)
#define get_TP_HDCP_KS2_3_reg   (*((volatile unsigned int*) TP_HDCP_KS2_3_reg))
#define TP_HDCP_KS2_3_inst_adr                                                       "0x00D5"
#define TP_HDCP_KS2_3_inst                                                           0x00D5
#define TP_HDCP_KS2_3_ks2_ll_shift                                                   (0)
#define TP_HDCP_KS2_3_ks2_ll_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS2_3_ks2_ll(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS2_3_ks2_ll_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS2_3_get_ks2_ll(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS3_0                                                                0x98014758
#define TP_HDCP_KS3_0_reg_addr                                                       "0xD8014758"
#define TP_HDCP_KS3_0_reg                                                            0xD8014758
#define set_TP_HDCP_KS3_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS3_0_reg)=data)
#define get_TP_HDCP_KS3_0_reg   (*((volatile unsigned int*) TP_HDCP_KS3_0_reg))
#define TP_HDCP_KS3_0_inst_adr                                                       "0x00D6"
#define TP_HDCP_KS3_0_inst                                                           0x00D6
#define TP_HDCP_KS3_0_ks3_hh_shift                                                   (0)
#define TP_HDCP_KS3_0_ks3_hh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS3_0_ks3_hh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS3_0_ks3_hh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS3_0_get_ks3_hh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS3_1                                                                0x9801475C
#define TP_HDCP_KS3_1_reg_addr                                                       "0xD801475C"
#define TP_HDCP_KS3_1_reg                                                            0xD801475C
#define set_TP_HDCP_KS3_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS3_1_reg)=data)
#define get_TP_HDCP_KS3_1_reg   (*((volatile unsigned int*) TP_HDCP_KS3_1_reg))
#define TP_HDCP_KS3_1_inst_adr                                                       "0x00D7"
#define TP_HDCP_KS3_1_inst                                                           0x00D7
#define TP_HDCP_KS3_1_ks3_hl_shift                                                   (0)
#define TP_HDCP_KS3_1_ks3_hl_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS3_1_ks3_hl(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS3_1_ks3_hl_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS3_1_get_ks3_hl(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS3_2                                                                0x98014760
#define TP_HDCP_KS3_2_reg_addr                                                       "0xD8014760"
#define TP_HDCP_KS3_2_reg                                                            0xD8014760
#define set_TP_HDCP_KS3_2_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS3_2_reg)=data)
#define get_TP_HDCP_KS3_2_reg   (*((volatile unsigned int*) TP_HDCP_KS3_2_reg))
#define TP_HDCP_KS3_2_inst_adr                                                       "0x00D8"
#define TP_HDCP_KS3_2_inst                                                           0x00D8
#define TP_HDCP_KS3_2_ks3_lh_shift                                                   (0)
#define TP_HDCP_KS3_2_ks3_lh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS3_2_ks3_lh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS3_2_ks3_lh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS3_2_get_ks3_lh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS3_3                                                                0x98014764
#define TP_HDCP_KS3_3_reg_addr                                                       "0xD8014764"
#define TP_HDCP_KS3_3_reg                                                            0xD8014764
#define set_TP_HDCP_KS3_3_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS3_3_reg)=data)
#define get_TP_HDCP_KS3_3_reg   (*((volatile unsigned int*) TP_HDCP_KS3_3_reg))
#define TP_HDCP_KS3_3_inst_adr                                                       "0x00D9"
#define TP_HDCP_KS3_3_inst                                                           0x00D9
#define TP_HDCP_KS3_3_ks3_ll_shift                                                   (0)
#define TP_HDCP_KS3_3_ks3_ll_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS3_3_ks3_ll(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS3_3_ks3_ll_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS3_3_get_ks3_ll(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_PID_45                                                               0x98014770
#define TP_HDCP_PID_45_reg_addr                                                      "0xD8014770"
#define TP_HDCP_PID_45_reg                                                           0xD8014770
#define set_TP_HDCP_PID_45_reg(data)   (*((volatile unsigned int*) TP_HDCP_PID_45_reg)=data)
#define get_TP_HDCP_PID_45_reg   (*((volatile unsigned int*) TP_HDCP_PID_45_reg))
#define TP_HDCP_PID_45_inst_adr                                                      "0x00DC"
#define TP_HDCP_PID_45_inst                                                          0x00DC
#define TP_HDCP_PID_45_hdcp_en4_shift                                                (31)
#define TP_HDCP_PID_45_hdcp_en4_mask                                                 (0x80000000)
#define TP_HDCP_PID_45_hdcp_en4(data)                                                (0x80000000&((data)<<31))
#define TP_HDCP_PID_45_hdcp_en4_src(data)                                            ((0x80000000&(data))>>31)
#define TP_HDCP_PID_45_get_hdcp_en4(data)                                            ((0x80000000&(data))>>31)
#define TP_HDCP_PID_45_pid4_shift                                                    (16)
#define TP_HDCP_PID_45_pid4_mask                                                     (0x1FFF0000)
#define TP_HDCP_PID_45_pid4(data)                                                    (0x1FFF0000&((data)<<16))
#define TP_HDCP_PID_45_pid4_src(data)                                                ((0x1FFF0000&(data))>>16)
#define TP_HDCP_PID_45_get_pid4(data)                                                ((0x1FFF0000&(data))>>16)
#define TP_HDCP_PID_45_hdcp_en5_shift                                                (15)
#define TP_HDCP_PID_45_hdcp_en5_mask                                                 (0x00008000)
#define TP_HDCP_PID_45_hdcp_en5(data)                                                (0x00008000&((data)<<15))
#define TP_HDCP_PID_45_hdcp_en5_src(data)                                            ((0x00008000&(data))>>15)
#define TP_HDCP_PID_45_get_hdcp_en5(data)                                            ((0x00008000&(data))>>15)
#define TP_HDCP_PID_45_pid5_shift                                                    (0)
#define TP_HDCP_PID_45_pid5_mask                                                     (0x00001FFF)
#define TP_HDCP_PID_45_pid5(data)                                                    (0x00001FFF&((data)<<0))
#define TP_HDCP_PID_45_pid5_src(data)                                                ((0x00001FFF&(data))>>0)
#define TP_HDCP_PID_45_get_pid5(data)                                                ((0x00001FFF&(data))>>0)


#define TP_HDCP_PID_67                                                               0x98014774
#define TP_HDCP_PID_67_reg_addr                                                      "0xD8014774"
#define TP_HDCP_PID_67_reg                                                           0xD8014774
#define set_TP_HDCP_PID_67_reg(data)   (*((volatile unsigned int*) TP_HDCP_PID_67_reg)=data)
#define get_TP_HDCP_PID_67_reg   (*((volatile unsigned int*) TP_HDCP_PID_67_reg))
#define TP_HDCP_PID_67_inst_adr                                                      "0x00DD"
#define TP_HDCP_PID_67_inst                                                          0x00DD
#define TP_HDCP_PID_67_hdcp_en6_shift                                                (31)
#define TP_HDCP_PID_67_hdcp_en6_mask                                                 (0x80000000)
#define TP_HDCP_PID_67_hdcp_en6(data)                                                (0x80000000&((data)<<31))
#define TP_HDCP_PID_67_hdcp_en6_src(data)                                            ((0x80000000&(data))>>31)
#define TP_HDCP_PID_67_get_hdcp_en6(data)                                            ((0x80000000&(data))>>31)
#define TP_HDCP_PID_67_pid6_shift                                                    (16)
#define TP_HDCP_PID_67_pid6_mask                                                     (0x1FFF0000)
#define TP_HDCP_PID_67_pid6(data)                                                    (0x1FFF0000&((data)<<16))
#define TP_HDCP_PID_67_pid6_src(data)                                                ((0x1FFF0000&(data))>>16)
#define TP_HDCP_PID_67_get_pid6(data)                                                ((0x1FFF0000&(data))>>16)
#define TP_HDCP_PID_67_hdcp_en7_shift                                                (15)
#define TP_HDCP_PID_67_hdcp_en7_mask                                                 (0x00008000)
#define TP_HDCP_PID_67_hdcp_en7(data)                                                (0x00008000&((data)<<15))
#define TP_HDCP_PID_67_hdcp_en7_src(data)                                            ((0x00008000&(data))>>15)
#define TP_HDCP_PID_67_get_hdcp_en7(data)                                            ((0x00008000&(data))>>15)
#define TP_HDCP_PID_67_pid7_shift                                                    (0)
#define TP_HDCP_PID_67_pid7_mask                                                     (0x00001FFF)
#define TP_HDCP_PID_67_pid7(data)                                                    (0x00001FFF&((data)<<0))
#define TP_HDCP_PID_67_pid7_src(data)                                                ((0x00001FFF&(data))>>0)
#define TP_HDCP_PID_67_get_pid7(data)                                                ((0x00001FFF&(data))>>0)


#define TP_HDCP_RIV4_0                                                               0x98014778
#define TP_HDCP_RIV4_0_reg_addr                                                      "0xD8014778"
#define TP_HDCP_RIV4_0_reg                                                           0xD8014778
#define set_TP_HDCP_RIV4_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV4_0_reg)=data)
#define get_TP_HDCP_RIV4_0_reg   (*((volatile unsigned int*) TP_HDCP_RIV4_0_reg))
#define TP_HDCP_RIV4_0_inst_adr                                                      "0x00DE"
#define TP_HDCP_RIV4_0_inst                                                          0x00DE
#define TP_HDCP_RIV4_0_riv4_h_shift                                                  (0)
#define TP_HDCP_RIV4_0_riv4_h_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV4_0_riv4_h(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV4_0_riv4_h_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV4_0_get_riv4_h(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV4_1                                                               0x9801477C
#define TP_HDCP_RIV4_1_reg_addr                                                      "0xD801477C"
#define TP_HDCP_RIV4_1_reg                                                           0xD801477C
#define set_TP_HDCP_RIV4_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV4_1_reg)=data)
#define get_TP_HDCP_RIV4_1_reg   (*((volatile unsigned int*) TP_HDCP_RIV4_1_reg))
#define TP_HDCP_RIV4_1_inst_adr                                                      "0x00DF"
#define TP_HDCP_RIV4_1_inst                                                          0x00DF
#define TP_HDCP_RIV4_1_riv4_l_shift                                                  (0)
#define TP_HDCP_RIV4_1_riv4_l_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV4_1_riv4_l(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV4_1_riv4_l_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV4_1_get_riv4_l(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV5_0                                                               0x98014780
#define TP_HDCP_RIV5_0_reg_addr                                                      "0xD8014780"
#define TP_HDCP_RIV5_0_reg                                                           0xD8014780
#define set_TP_HDCP_RIV5_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV5_0_reg)=data)
#define get_TP_HDCP_RIV5_0_reg   (*((volatile unsigned int*) TP_HDCP_RIV5_0_reg))
#define TP_HDCP_RIV5_0_inst_adr                                                      "0x00E0"
#define TP_HDCP_RIV5_0_inst                                                          0x00E0
#define TP_HDCP_RIV5_0_riv5_h_shift                                                  (0)
#define TP_HDCP_RIV5_0_riv5_h_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV5_0_riv5_h(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV5_0_riv5_h_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV5_0_get_riv5_h(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV5_1                                                               0x98014784
#define TP_HDCP_RIV5_1_reg_addr                                                      "0xD8014784"
#define TP_HDCP_RIV5_1_reg                                                           0xD8014784
#define set_TP_HDCP_RIV5_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV5_1_reg)=data)
#define get_TP_HDCP_RIV5_1_reg   (*((volatile unsigned int*) TP_HDCP_RIV5_1_reg))
#define TP_HDCP_RIV5_1_inst_adr                                                      "0x00E1"
#define TP_HDCP_RIV5_1_inst                                                          0x00E1
#define TP_HDCP_RIV5_1_riv5_l_shift                                                  (0)
#define TP_HDCP_RIV5_1_riv5_l_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV5_1_riv5_l(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV5_1_riv5_l_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV5_1_get_riv5_l(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV6_0                                                               0x98014788
#define TP_HDCP_RIV6_0_reg_addr                                                      "0xD8014788"
#define TP_HDCP_RIV6_0_reg                                                           0xD8014788
#define set_TP_HDCP_RIV6_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV6_0_reg)=data)
#define get_TP_HDCP_RIV6_0_reg   (*((volatile unsigned int*) TP_HDCP_RIV6_0_reg))
#define TP_HDCP_RIV6_0_inst_adr                                                      "0x00E2"
#define TP_HDCP_RIV6_0_inst                                                          0x00E2
#define TP_HDCP_RIV6_0_riv6_h_shift                                                  (0)
#define TP_HDCP_RIV6_0_riv6_h_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV6_0_riv6_h(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV6_0_riv6_h_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV6_0_get_riv6_h(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV6_1                                                               0x9801478C
#define TP_HDCP_RIV6_1_reg_addr                                                      "0xD801478C"
#define TP_HDCP_RIV6_1_reg                                                           0xD801478C
#define set_TP_HDCP_RIV6_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV6_1_reg)=data)
#define get_TP_HDCP_RIV6_1_reg   (*((volatile unsigned int*) TP_HDCP_RIV6_1_reg))
#define TP_HDCP_RIV6_1_inst_adr                                                      "0x00E3"
#define TP_HDCP_RIV6_1_inst                                                          0x00E3
#define TP_HDCP_RIV6_1_riv6_l_shift                                                  (0)
#define TP_HDCP_RIV6_1_riv6_l_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV6_1_riv6_l(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV6_1_riv6_l_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV6_1_get_riv6_l(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV7_0                                                               0x98014790
#define TP_HDCP_RIV7_0_reg_addr                                                      "0xD8014790"
#define TP_HDCP_RIV7_0_reg                                                           0xD8014790
#define set_TP_HDCP_RIV7_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV7_0_reg)=data)
#define get_TP_HDCP_RIV7_0_reg   (*((volatile unsigned int*) TP_HDCP_RIV7_0_reg))
#define TP_HDCP_RIV7_0_inst_adr                                                      "0x00E4"
#define TP_HDCP_RIV7_0_inst                                                          0x00E4
#define TP_HDCP_RIV7_0_riv7_h_shift                                                  (0)
#define TP_HDCP_RIV7_0_riv7_h_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV7_0_riv7_h(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV7_0_riv7_h_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV7_0_get_riv7_h(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_RIV7_1                                                               0x98014794
#define TP_HDCP_RIV7_1_reg_addr                                                      "0xD8014794"
#define TP_HDCP_RIV7_1_reg                                                           0xD8014794
#define set_TP_HDCP_RIV7_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_RIV7_1_reg)=data)
#define get_TP_HDCP_RIV7_1_reg   (*((volatile unsigned int*) TP_HDCP_RIV7_1_reg))
#define TP_HDCP_RIV7_1_inst_adr                                                      "0x00E5"
#define TP_HDCP_RIV7_1_inst                                                          0x00E5
#define TP_HDCP_RIV7_1_riv7_l_shift                                                  (0)
#define TP_HDCP_RIV7_1_riv7_l_mask                                                   (0xFFFFFFFF)
#define TP_HDCP_RIV7_1_riv7_l(data)                                                  (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_RIV7_1_riv7_l_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_RIV7_1_get_riv7_l(data)                                              ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS4_0                                                                0x98014798
#define TP_HDCP_KS4_0_reg_addr                                                       "0xD8014798"
#define TP_HDCP_KS4_0_reg                                                            0xD8014798
#define set_TP_HDCP_KS4_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS4_0_reg)=data)
#define get_TP_HDCP_KS4_0_reg   (*((volatile unsigned int*) TP_HDCP_KS4_0_reg))
#define TP_HDCP_KS4_0_inst_adr                                                       "0x00E6"
#define TP_HDCP_KS4_0_inst                                                           0x00E6
#define TP_HDCP_KS4_0_ks4_hh_shift                                                   (0)
#define TP_HDCP_KS4_0_ks4_hh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS4_0_ks4_hh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS4_0_ks4_hh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS4_0_get_ks4_hh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS4_1                                                                0x9801479C
#define TP_HDCP_KS4_1_reg_addr                                                       "0xD801479C"
#define TP_HDCP_KS4_1_reg                                                            0xD801479C
#define set_TP_HDCP_KS4_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS4_1_reg)=data)
#define get_TP_HDCP_KS4_1_reg   (*((volatile unsigned int*) TP_HDCP_KS4_1_reg))
#define TP_HDCP_KS4_1_inst_adr                                                       "0x00E7"
#define TP_HDCP_KS4_1_inst                                                           0x00E7
#define TP_HDCP_KS4_1_ks4_hl_shift                                                   (0)
#define TP_HDCP_KS4_1_ks4_hl_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS4_1_ks4_hl(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS4_1_ks4_hl_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS4_1_get_ks4_hl(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS4_2                                                                0x980147A0
#define TP_HDCP_KS4_2_reg_addr                                                       "0xD80147A0"
#define TP_HDCP_KS4_2_reg                                                            0xD80147A0
#define set_TP_HDCP_KS4_2_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS4_2_reg)=data)
#define get_TP_HDCP_KS4_2_reg   (*((volatile unsigned int*) TP_HDCP_KS4_2_reg))
#define TP_HDCP_KS4_2_inst_adr                                                       "0x00E8"
#define TP_HDCP_KS4_2_inst                                                           0x00E8
#define TP_HDCP_KS4_2_ks4_lh_shift                                                   (0)
#define TP_HDCP_KS4_2_ks4_lh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS4_2_ks4_lh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS4_2_ks4_lh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS4_2_get_ks4_lh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS4_3                                                                0x980147A4
#define TP_HDCP_KS4_3_reg_addr                                                       "0xD80147A4"
#define TP_HDCP_KS4_3_reg                                                            0xD80147A4
#define set_TP_HDCP_KS4_3_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS4_3_reg)=data)
#define get_TP_HDCP_KS4_3_reg   (*((volatile unsigned int*) TP_HDCP_KS4_3_reg))
#define TP_HDCP_KS4_3_inst_adr                                                       "0x00E9"
#define TP_HDCP_KS4_3_inst                                                           0x00E9
#define TP_HDCP_KS4_3_ks4_ll_shift                                                   (0)
#define TP_HDCP_KS4_3_ks4_ll_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS4_3_ks4_ll(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS4_3_ks4_ll_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS4_3_get_ks4_ll(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS5_0                                                                0x980147A8
#define TP_HDCP_KS5_0_reg_addr                                                       "0xD80147A8"
#define TP_HDCP_KS5_0_reg                                                            0xD80147A8
#define set_TP_HDCP_KS5_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS5_0_reg)=data)
#define get_TP_HDCP_KS5_0_reg   (*((volatile unsigned int*) TP_HDCP_KS5_0_reg))
#define TP_HDCP_KS5_0_inst_adr                                                       "0x00EA"
#define TP_HDCP_KS5_0_inst                                                           0x00EA
#define TP_HDCP_KS5_0_ks5_hh_shift                                                   (0)
#define TP_HDCP_KS5_0_ks5_hh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS5_0_ks5_hh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS5_0_ks5_hh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS5_0_get_ks5_hh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS5_1                                                                0x980147AC
#define TP_HDCP_KS5_1_reg_addr                                                       "0xD80147AC"
#define TP_HDCP_KS5_1_reg                                                            0xD80147AC
#define set_TP_HDCP_KS5_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS5_1_reg)=data)
#define get_TP_HDCP_KS5_1_reg   (*((volatile unsigned int*) TP_HDCP_KS5_1_reg))
#define TP_HDCP_KS5_1_inst_adr                                                       "0x00EB"
#define TP_HDCP_KS5_1_inst                                                           0x00EB
#define TP_HDCP_KS5_1_ks5_hl_shift                                                   (0)
#define TP_HDCP_KS5_1_ks5_hl_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS5_1_ks5_hl(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS5_1_ks5_hl_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS5_1_get_ks5_hl(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS5_2                                                                0x980147B0
#define TP_HDCP_KS5_2_reg_addr                                                       "0xD80147B0"
#define TP_HDCP_KS5_2_reg                                                            0xD80147B0
#define set_TP_HDCP_KS5_2_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS5_2_reg)=data)
#define get_TP_HDCP_KS5_2_reg   (*((volatile unsigned int*) TP_HDCP_KS5_2_reg))
#define TP_HDCP_KS5_2_inst_adr                                                       "0x00EC"
#define TP_HDCP_KS5_2_inst                                                           0x00EC
#define TP_HDCP_KS5_2_ks5_lh_shift                                                   (0)
#define TP_HDCP_KS5_2_ks5_lh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS5_2_ks5_lh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS5_2_ks5_lh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS5_2_get_ks5_lh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS5_3                                                                0x980147B4
#define TP_HDCP_KS5_3_reg_addr                                                       "0xD80147B4"
#define TP_HDCP_KS5_3_reg                                                            0xD80147B4
#define set_TP_HDCP_KS5_3_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS5_3_reg)=data)
#define get_TP_HDCP_KS5_3_reg   (*((volatile unsigned int*) TP_HDCP_KS5_3_reg))
#define TP_HDCP_KS5_3_inst_adr                                                       "0x00ED"
#define TP_HDCP_KS5_3_inst                                                           0x00ED
#define TP_HDCP_KS5_3_ks5_ll_shift                                                   (0)
#define TP_HDCP_KS5_3_ks5_ll_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS5_3_ks5_ll(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS5_3_ks5_ll_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS5_3_get_ks5_ll(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS6_0                                                                0x980147B8
#define TP_HDCP_KS6_0_reg_addr                                                       "0xD80147B8"
#define TP_HDCP_KS6_0_reg                                                            0xD80147B8
#define set_TP_HDCP_KS6_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS6_0_reg)=data)
#define get_TP_HDCP_KS6_0_reg   (*((volatile unsigned int*) TP_HDCP_KS6_0_reg))
#define TP_HDCP_KS6_0_inst_adr                                                       "0x00EE"
#define TP_HDCP_KS6_0_inst                                                           0x00EE
#define TP_HDCP_KS6_0_ks6_hh_shift                                                   (0)
#define TP_HDCP_KS6_0_ks6_hh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS6_0_ks6_hh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS6_0_ks6_hh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS6_0_get_ks6_hh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS6_1                                                                0x980147BC
#define TP_HDCP_KS6_1_reg_addr                                                       "0xD80147BC"
#define TP_HDCP_KS6_1_reg                                                            0xD80147BC
#define set_TP_HDCP_KS6_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS6_1_reg)=data)
#define get_TP_HDCP_KS6_1_reg   (*((volatile unsigned int*) TP_HDCP_KS6_1_reg))
#define TP_HDCP_KS6_1_inst_adr                                                       "0x00EF"
#define TP_HDCP_KS6_1_inst                                                           0x00EF
#define TP_HDCP_KS6_1_ks6_hl_shift                                                   (0)
#define TP_HDCP_KS6_1_ks6_hl_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS6_1_ks6_hl(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS6_1_ks6_hl_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS6_1_get_ks6_hl(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS6_2                                                                0x980147C0
#define TP_HDCP_KS6_2_reg_addr                                                       "0xD80147C0"
#define TP_HDCP_KS6_2_reg                                                            0xD80147C0
#define set_TP_HDCP_KS6_2_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS6_2_reg)=data)
#define get_TP_HDCP_KS6_2_reg   (*((volatile unsigned int*) TP_HDCP_KS6_2_reg))
#define TP_HDCP_KS6_2_inst_adr                                                       "0x00F0"
#define TP_HDCP_KS6_2_inst                                                           0x00F0
#define TP_HDCP_KS6_2_ks6_lh_shift                                                   (0)
#define TP_HDCP_KS6_2_ks6_lh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS6_2_ks6_lh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS6_2_ks6_lh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS6_2_get_ks6_lh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS6_3                                                                0x980147C4
#define TP_HDCP_KS6_3_reg_addr                                                       "0xD80147C4"
#define TP_HDCP_KS6_3_reg                                                            0xD80147C4
#define set_TP_HDCP_KS6_3_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS6_3_reg)=data)
#define get_TP_HDCP_KS6_3_reg   (*((volatile unsigned int*) TP_HDCP_KS6_3_reg))
#define TP_HDCP_KS6_3_inst_adr                                                       "0x00F1"
#define TP_HDCP_KS6_3_inst                                                           0x00F1
#define TP_HDCP_KS6_3_ks6_ll_shift                                                   (0)
#define TP_HDCP_KS6_3_ks6_ll_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS6_3_ks6_ll(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS6_3_ks6_ll_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS6_3_get_ks6_ll(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS7_0                                                                0x980147C8
#define TP_HDCP_KS7_0_reg_addr                                                       "0xD80147C8"
#define TP_HDCP_KS7_0_reg                                                            0xD80147C8
#define set_TP_HDCP_KS7_0_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS7_0_reg)=data)
#define get_TP_HDCP_KS7_0_reg   (*((volatile unsigned int*) TP_HDCP_KS7_0_reg))
#define TP_HDCP_KS7_0_inst_adr                                                       "0x00F2"
#define TP_HDCP_KS7_0_inst                                                           0x00F2
#define TP_HDCP_KS7_0_ks7_hh_shift                                                   (0)
#define TP_HDCP_KS7_0_ks7_hh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS7_0_ks7_hh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS7_0_ks7_hh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS7_0_get_ks7_hh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS7_1                                                                0x980147CC
#define TP_HDCP_KS7_1_reg_addr                                                       "0xD80147CC"
#define TP_HDCP_KS7_1_reg                                                            0xD80147CC
#define set_TP_HDCP_KS7_1_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS7_1_reg)=data)
#define get_TP_HDCP_KS7_1_reg   (*((volatile unsigned int*) TP_HDCP_KS7_1_reg))
#define TP_HDCP_KS7_1_inst_adr                                                       "0x00F3"
#define TP_HDCP_KS7_1_inst                                                           0x00F3
#define TP_HDCP_KS7_1_ks7_hl_shift                                                   (0)
#define TP_HDCP_KS7_1_ks7_hl_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS7_1_ks7_hl(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS7_1_ks7_hl_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS7_1_get_ks7_hl(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS7_2                                                                0x980147D0
#define TP_HDCP_KS7_2_reg_addr                                                       "0xD80147D0"
#define TP_HDCP_KS7_2_reg                                                            0xD80147D0
#define set_TP_HDCP_KS7_2_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS7_2_reg)=data)
#define get_TP_HDCP_KS7_2_reg   (*((volatile unsigned int*) TP_HDCP_KS7_2_reg))
#define TP_HDCP_KS7_2_inst_adr                                                       "0x00F4"
#define TP_HDCP_KS7_2_inst                                                           0x00F4
#define TP_HDCP_KS7_2_ks7_lh_shift                                                   (0)
#define TP_HDCP_KS7_2_ks7_lh_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS7_2_ks7_lh(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS7_2_ks7_lh_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS7_2_get_ks7_lh(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_HDCP_KS7_3                                                                0x980147D4
#define TP_HDCP_KS7_3_reg_addr                                                       "0xD80147D4"
#define TP_HDCP_KS7_3_reg                                                            0xD80147D4
#define set_TP_HDCP_KS7_3_reg(data)   (*((volatile unsigned int*) TP_HDCP_KS7_3_reg)=data)
#define get_TP_HDCP_KS7_3_reg   (*((volatile unsigned int*) TP_HDCP_KS7_3_reg))
#define TP_HDCP_KS7_3_inst_adr                                                       "0x00F5"
#define TP_HDCP_KS7_3_inst                                                           0x00F5
#define TP_HDCP_KS7_3_ks7_ll_shift                                                   (0)
#define TP_HDCP_KS7_3_ks7_ll_mask                                                    (0xFFFFFFFF)
#define TP_HDCP_KS7_3_ks7_ll(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_HDCP_KS7_3_ks7_ll_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_HDCP_KS7_3_get_ks7_ll(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_PES_EXTRC_0                                                               0x98014800
#define TP_PES_EXTRC_0_reg_addr                                                      "0xD8014800"
#define TP_PES_EXTRC_0_reg                                                           0xD8014800
#define set_TP_PES_EXTRC_0_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_0_reg)=data)
#define get_TP_PES_EXTRC_0_reg   (*((volatile unsigned int*) TP_PES_EXTRC_0_reg))
#define TP_PES_EXTRC_0_inst_adr                                                      "0x0000"
#define TP_PES_EXTRC_0_inst                                                          0x0000
#define TP_PES_EXTRC_0_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_0_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_0_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_0_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_0_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_0_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_0_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_0_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_0_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_0_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_0_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_0_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_0_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_0_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_0_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_0_pese_type_shift                                               (13)
#define TP_PES_EXTRC_0_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_0_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_0_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_0_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_0_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_0_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_0_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_0_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_0_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_1                                                               0x98014804
#define TP_PES_EXTRC_1_reg_addr                                                      "0xD8014804"
#define TP_PES_EXTRC_1_reg                                                           0xD8014804
#define set_TP_PES_EXTRC_1_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_1_reg)=data)
#define get_TP_PES_EXTRC_1_reg   (*((volatile unsigned int*) TP_PES_EXTRC_1_reg))
#define TP_PES_EXTRC_1_inst_adr                                                      "0x0001"
#define TP_PES_EXTRC_1_inst                                                          0x0001
#define TP_PES_EXTRC_1_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_1_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_1_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_1_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_1_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_1_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_1_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_1_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_1_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_1_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_1_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_1_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_1_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_1_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_1_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_1_pese_type_shift                                               (13)
#define TP_PES_EXTRC_1_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_1_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_1_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_1_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_1_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_1_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_1_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_1_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_1_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_2                                                               0x98014808
#define TP_PES_EXTRC_2_reg_addr                                                      "0xD8014808"
#define TP_PES_EXTRC_2_reg                                                           0xD8014808
#define set_TP_PES_EXTRC_2_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_2_reg)=data)
#define get_TP_PES_EXTRC_2_reg   (*((volatile unsigned int*) TP_PES_EXTRC_2_reg))
#define TP_PES_EXTRC_2_inst_adr                                                      "0x0002"
#define TP_PES_EXTRC_2_inst                                                          0x0002
#define TP_PES_EXTRC_2_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_2_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_2_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_2_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_2_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_2_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_2_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_2_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_2_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_2_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_2_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_2_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_2_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_2_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_2_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_2_pese_type_shift                                               (13)
#define TP_PES_EXTRC_2_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_2_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_2_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_2_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_2_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_2_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_2_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_2_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_2_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_3                                                               0x9801480C
#define TP_PES_EXTRC_3_reg_addr                                                      "0xD801480C"
#define TP_PES_EXTRC_3_reg                                                           0xD801480C
#define set_TP_PES_EXTRC_3_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_3_reg)=data)
#define get_TP_PES_EXTRC_3_reg   (*((volatile unsigned int*) TP_PES_EXTRC_3_reg))
#define TP_PES_EXTRC_3_inst_adr                                                      "0x0003"
#define TP_PES_EXTRC_3_inst                                                          0x0003
#define TP_PES_EXTRC_3_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_3_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_3_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_3_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_3_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_3_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_3_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_3_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_3_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_3_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_3_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_3_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_3_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_3_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_3_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_3_pese_type_shift                                               (13)
#define TP_PES_EXTRC_3_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_3_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_3_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_3_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_3_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_3_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_3_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_3_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_3_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_4                                                               0x98014810
#define TP_PES_EXTRC_4_reg_addr                                                      "0xD8014810"
#define TP_PES_EXTRC_4_reg                                                           0xD8014810
#define set_TP_PES_EXTRC_4_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_4_reg)=data)
#define get_TP_PES_EXTRC_4_reg   (*((volatile unsigned int*) TP_PES_EXTRC_4_reg))
#define TP_PES_EXTRC_4_inst_adr                                                      "0x0004"
#define TP_PES_EXTRC_4_inst                                                          0x0004
#define TP_PES_EXTRC_4_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_4_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_4_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_4_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_4_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_4_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_4_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_4_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_4_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_4_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_4_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_4_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_4_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_4_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_4_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_4_pese_type_shift                                               (13)
#define TP_PES_EXTRC_4_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_4_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_4_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_4_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_4_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_4_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_4_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_4_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_4_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_5                                                               0x98014814
#define TP_PES_EXTRC_5_reg_addr                                                      "0xD8014814"
#define TP_PES_EXTRC_5_reg                                                           0xD8014814
#define set_TP_PES_EXTRC_5_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_5_reg)=data)
#define get_TP_PES_EXTRC_5_reg   (*((volatile unsigned int*) TP_PES_EXTRC_5_reg))
#define TP_PES_EXTRC_5_inst_adr                                                      "0x0005"
#define TP_PES_EXTRC_5_inst                                                          0x0005
#define TP_PES_EXTRC_5_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_5_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_5_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_5_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_5_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_5_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_5_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_5_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_5_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_5_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_5_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_5_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_5_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_5_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_5_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_5_pese_type_shift                                               (13)
#define TP_PES_EXTRC_5_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_5_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_5_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_5_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_5_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_5_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_5_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_5_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_5_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_6                                                               0x98014818
#define TP_PES_EXTRC_6_reg_addr                                                      "0xD8014818"
#define TP_PES_EXTRC_6_reg                                                           0xD8014818
#define set_TP_PES_EXTRC_6_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_6_reg)=data)
#define get_TP_PES_EXTRC_6_reg   (*((volatile unsigned int*) TP_PES_EXTRC_6_reg))
#define TP_PES_EXTRC_6_inst_adr                                                      "0x0006"
#define TP_PES_EXTRC_6_inst                                                          0x0006
#define TP_PES_EXTRC_6_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_6_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_6_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_6_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_6_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_6_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_6_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_6_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_6_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_6_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_6_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_6_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_6_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_6_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_6_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_6_pese_type_shift                                               (13)
#define TP_PES_EXTRC_6_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_6_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_6_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_6_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_6_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_6_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_6_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_6_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_6_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_7                                                               0x9801481C
#define TP_PES_EXTRC_7_reg_addr                                                      "0xD801481C"
#define TP_PES_EXTRC_7_reg                                                           0xD801481C
#define set_TP_PES_EXTRC_7_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_7_reg)=data)
#define get_TP_PES_EXTRC_7_reg   (*((volatile unsigned int*) TP_PES_EXTRC_7_reg))
#define TP_PES_EXTRC_7_inst_adr                                                      "0x0007"
#define TP_PES_EXTRC_7_inst                                                          0x0007
#define TP_PES_EXTRC_7_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_7_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_7_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_7_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_7_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_7_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_7_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_7_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_7_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_7_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_7_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_7_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_7_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_7_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_7_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_7_pese_type_shift                                               (13)
#define TP_PES_EXTRC_7_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_7_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_7_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_7_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_7_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_7_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_7_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_7_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_7_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_8                                                               0x98014860
#define TP_PES_EXTRC_8_reg_addr                                                      "0xD8014860"
#define TP_PES_EXTRC_8_reg                                                           0xD8014860
#define set_TP_PES_EXTRC_8_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_8_reg)=data)
#define get_TP_PES_EXTRC_8_reg   (*((volatile unsigned int*) TP_PES_EXTRC_8_reg))
#define TP_PES_EXTRC_8_inst_adr                                                      "0x0018"
#define TP_PES_EXTRC_8_inst                                                          0x0018
#define TP_PES_EXTRC_8_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_8_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_8_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_8_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_8_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_8_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_8_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_8_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_8_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_8_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_8_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_8_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_8_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_8_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_8_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_8_pese_type_shift                                               (13)
#define TP_PES_EXTRC_8_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_8_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_8_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_8_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_8_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_8_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_8_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_8_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_8_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_9                                                               0x98014864
#define TP_PES_EXTRC_9_reg_addr                                                      "0xD8014864"
#define TP_PES_EXTRC_9_reg                                                           0xD8014864
#define set_TP_PES_EXTRC_9_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_9_reg)=data)
#define get_TP_PES_EXTRC_9_reg   (*((volatile unsigned int*) TP_PES_EXTRC_9_reg))
#define TP_PES_EXTRC_9_inst_adr                                                      "0x0019"
#define TP_PES_EXTRC_9_inst                                                          0x0019
#define TP_PES_EXTRC_9_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_9_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_9_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_9_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_9_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_9_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_9_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_9_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_9_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_9_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_9_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_9_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_9_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_9_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_9_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_9_pese_type_shift                                               (13)
#define TP_PES_EXTRC_9_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_9_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_9_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_9_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_9_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_9_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_9_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_9_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_9_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_A                                                               0x98014868
#define TP_PES_EXTRC_A_reg_addr                                                      "0xD8014868"
#define TP_PES_EXTRC_A_reg                                                           0xD8014868
#define set_TP_PES_EXTRC_A_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_A_reg)=data)
#define get_TP_PES_EXTRC_A_reg   (*((volatile unsigned int*) TP_PES_EXTRC_A_reg))
#define TP_PES_EXTRC_A_inst_adr                                                      "0x001A"
#define TP_PES_EXTRC_A_inst                                                          0x001A
#define TP_PES_EXTRC_A_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_A_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_A_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_A_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_A_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_A_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_A_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_A_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_A_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_A_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_A_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_A_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_A_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_A_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_A_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_A_pese_type_shift                                               (13)
#define TP_PES_EXTRC_A_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_A_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_A_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_A_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_A_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_A_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_A_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_A_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_A_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_B                                                               0x9801486C
#define TP_PES_EXTRC_B_reg_addr                                                      "0xD801486C"
#define TP_PES_EXTRC_B_reg                                                           0xD801486C
#define set_TP_PES_EXTRC_B_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_B_reg)=data)
#define get_TP_PES_EXTRC_B_reg   (*((volatile unsigned int*) TP_PES_EXTRC_B_reg))
#define TP_PES_EXTRC_B_inst_adr                                                      "0x001B"
#define TP_PES_EXTRC_B_inst                                                          0x001B
#define TP_PES_EXTRC_B_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_B_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_B_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_B_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_B_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_B_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_B_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_B_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_B_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_B_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_B_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_B_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_B_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_B_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_B_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_B_pese_type_shift                                               (13)
#define TP_PES_EXTRC_B_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_B_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_B_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_B_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_B_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_B_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_B_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_B_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_B_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_C                                                               0x98014870
#define TP_PES_EXTRC_C_reg_addr                                                      "0xD8014870"
#define TP_PES_EXTRC_C_reg                                                           0xD8014870
#define set_TP_PES_EXTRC_C_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_C_reg)=data)
#define get_TP_PES_EXTRC_C_reg   (*((volatile unsigned int*) TP_PES_EXTRC_C_reg))
#define TP_PES_EXTRC_C_inst_adr                                                      "0x001C"
#define TP_PES_EXTRC_C_inst                                                          0x001C
#define TP_PES_EXTRC_C_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_C_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_C_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_C_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_C_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_C_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_C_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_C_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_C_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_C_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_C_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_C_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_C_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_C_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_C_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_C_pese_type_shift                                               (13)
#define TP_PES_EXTRC_C_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_C_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_C_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_C_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_C_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_C_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_C_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_C_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_C_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_D                                                               0x98014874
#define TP_PES_EXTRC_D_reg_addr                                                      "0xD8014874"
#define TP_PES_EXTRC_D_reg                                                           0xD8014874
#define set_TP_PES_EXTRC_D_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_D_reg)=data)
#define get_TP_PES_EXTRC_D_reg   (*((volatile unsigned int*) TP_PES_EXTRC_D_reg))
#define TP_PES_EXTRC_D_inst_adr                                                      "0x001D"
#define TP_PES_EXTRC_D_inst                                                          0x001D
#define TP_PES_EXTRC_D_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_D_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_D_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_D_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_D_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_D_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_D_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_D_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_D_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_D_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_D_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_D_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_D_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_D_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_D_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_D_pese_type_shift                                               (13)
#define TP_PES_EXTRC_D_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_D_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_D_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_D_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_D_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_D_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_D_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_D_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_D_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_E                                                               0x98014878
#define TP_PES_EXTRC_E_reg_addr                                                      "0xD8014878"
#define TP_PES_EXTRC_E_reg                                                           0xD8014878
#define set_TP_PES_EXTRC_E_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_E_reg)=data)
#define get_TP_PES_EXTRC_E_reg   (*((volatile unsigned int*) TP_PES_EXTRC_E_reg))
#define TP_PES_EXTRC_E_inst_adr                                                      "0x001E"
#define TP_PES_EXTRC_E_inst                                                          0x001E
#define TP_PES_EXTRC_E_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_E_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_E_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_E_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_E_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_E_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_E_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_E_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_E_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_E_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_E_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_E_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_E_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_E_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_E_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_E_pese_type_shift                                               (13)
#define TP_PES_EXTRC_E_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_E_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_E_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_E_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_E_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_E_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_E_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_E_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_E_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PES_EXTRC_F                                                               0x9801487C
#define TP_PES_EXTRC_F_reg_addr                                                      "0xD801487C"
#define TP_PES_EXTRC_F_reg                                                           0xD801487C
#define set_TP_PES_EXTRC_F_reg(data)   (*((volatile unsigned int*) TP_PES_EXTRC_F_reg)=data)
#define get_TP_PES_EXTRC_F_reg   (*((volatile unsigned int*) TP_PES_EXTRC_F_reg))
#define TP_PES_EXTRC_F_inst_adr                                                      "0x001F"
#define TP_PES_EXTRC_F_inst                                                          0x001F
#define TP_PES_EXTRC_F_pese_en_shift                                                 (31)
#define TP_PES_EXTRC_F_pese_en_mask                                                  (0x80000000)
#define TP_PES_EXTRC_F_pese_en(data)                                                 (0x80000000&((data)<<31))
#define TP_PES_EXTRC_F_pese_en_src(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_F_get_pese_en(data)                                             ((0x80000000&(data))>>31)
#define TP_PES_EXTRC_F_pese_ddrq_shift                                               (21)
#define TP_PES_EXTRC_F_pese_ddrq_mask                                                (0x03E00000)
#define TP_PES_EXTRC_F_pese_ddrq(data)                                               (0x03E00000&((data)<<21))
#define TP_PES_EXTRC_F_pese_ddrq_src(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_F_get_pese_ddrq(data)                                           ((0x03E00000&(data))>>21)
#define TP_PES_EXTRC_F_pese_infoq_shift                                              (16)
#define TP_PES_EXTRC_F_pese_infoq_mask                                               (0x001F0000)
#define TP_PES_EXTRC_F_pese_infoq(data)                                              (0x001F0000&((data)<<16))
#define TP_PES_EXTRC_F_pese_infoq_src(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_F_get_pese_infoq(data)                                          ((0x001F0000&(data))>>16)
#define TP_PES_EXTRC_F_pese_type_shift                                               (13)
#define TP_PES_EXTRC_F_pese_type_mask                                                (0x00006000)
#define TP_PES_EXTRC_F_pese_type(data)                                               (0x00006000&((data)<<13))
#define TP_PES_EXTRC_F_pese_type_src(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_F_get_pese_type(data)                                           ((0x00006000&(data))>>13)
#define TP_PES_EXTRC_F_pese_pid_shift                                                (0)
#define TP_PES_EXTRC_F_pese_pid_mask                                                 (0x00001FFF)
#define TP_PES_EXTRC_F_pese_pid(data)                                                (0x00001FFF&((data)<<0))
#define TP_PES_EXTRC_F_pese_pid_src(data)                                            ((0x00001FFF&(data))>>0)
#define TP_PES_EXTRC_F_get_pese_pid(data)                                            ((0x00001FFF&(data))>>0)


#define TP_PESE_TO0                                                                  0x98014880
#define TP_PESE_TO0_reg_addr                                                         "0xD8014880"
#define TP_PESE_TO0_reg                                                              0xD8014880
#define set_TP_PESE_TO0_reg(data)   (*((volatile unsigned int*) TP_PESE_TO0_reg)=data)
#define get_TP_PESE_TO0_reg   (*((volatile unsigned int*) TP_PESE_TO0_reg))
#define TP_PESE_TO0_inst_adr                                                         "0x0020"
#define TP_PESE_TO0_inst                                                             0x0020
#define TP_PESE_TO0_to_value_shift                                                   (0)
#define TP_PESE_TO0_to_value_mask                                                    (0xFFFFFFFF)
#define TP_PESE_TO0_to_value(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_PESE_TO0_to_value_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_PESE_TO0_get_to_value(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_PESE_TO1                                                                  0x98014884
#define TP_PESE_TO1_reg_addr                                                         "0xD8014884"
#define TP_PESE_TO1_reg                                                              0xD8014884
#define set_TP_PESE_TO1_reg(data)   (*((volatile unsigned int*) TP_PESE_TO1_reg)=data)
#define get_TP_PESE_TO1_reg   (*((volatile unsigned int*) TP_PESE_TO1_reg))
#define TP_PESE_TO1_inst_adr                                                         "0x0021"
#define TP_PESE_TO1_inst                                                             0x0021
#define TP_PESE_TO1_to_value_shift                                                   (0)
#define TP_PESE_TO1_to_value_mask                                                    (0xFFFFFFFF)
#define TP_PESE_TO1_to_value(data)                                                   (0xFFFFFFFF&((data)<<0))
#define TP_PESE_TO1_to_value_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define TP_PESE_TO1_get_to_value(data)                                               ((0xFFFFFFFF&(data))>>0)


#define TP_TF0_PES_CNT                                                               0x98014888
#define TP_TF0_PES_CNT_reg_addr                                                      "0xD8014888"
#define TP_TF0_PES_CNT_reg                                                           0xD8014888
#define set_TP_TF0_PES_CNT_reg(data)   (*((volatile unsigned int*) TP_TF0_PES_CNT_reg)=data)
#define get_TP_TF0_PES_CNT_reg   (*((volatile unsigned int*) TP_TF0_PES_CNT_reg))
#define TP_TF0_PES_CNT_inst_adr                                                      "0x0022"
#define TP_TF0_PES_CNT_inst                                                          0x0022
#define TP_TF0_PES_CNT_pes_cnt_shift                                                 (0)
#define TP_TF0_PES_CNT_pes_cnt_mask                                                  (0x00FFFFFF)
#define TP_TF0_PES_CNT_pes_cnt(data)                                                 (0x00FFFFFF&((data)<<0))
#define TP_TF0_PES_CNT_pes_cnt_src(data)                                             ((0x00FFFFFF&(data))>>0)
#define TP_TF0_PES_CNT_get_pes_cnt(data)                                             ((0x00FFFFFF&(data))>>0)


#define TP_TF1_PES_CNT                                                               0x9801488c
#define TP_TF1_PES_CNT_reg_addr                                                      "0xD801488C"
#define TP_TF1_PES_CNT_reg                                                           0xD801488C
#define set_TP_TF1_PES_CNT_reg(data)   (*((volatile unsigned int*) TP_TF1_PES_CNT_reg)=data)
#define get_TP_TF1_PES_CNT_reg   (*((volatile unsigned int*) TP_TF1_PES_CNT_reg))
#define TP_TF1_PES_CNT_inst_adr                                                      "0x0023"
#define TP_TF1_PES_CNT_inst                                                          0x0023
#define TP_TF1_PES_CNT_pes_cnt_shift                                                 (0)
#define TP_TF1_PES_CNT_pes_cnt_mask                                                  (0x00FFFFFF)
#define TP_TF1_PES_CNT_pes_cnt(data)                                                 (0x00FFFFFF&((data)<<0))
#define TP_TF1_PES_CNT_pes_cnt_src(data)                                             ((0x00FFFFFF&(data))>>0)
#define TP_TF1_PES_CNT_get_pes_cnt(data)                                             ((0x00FFFFFF&(data))>>0)


#endif
