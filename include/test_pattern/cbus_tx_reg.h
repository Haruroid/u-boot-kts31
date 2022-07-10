/**************************************************************
// Spec Version                  : 1.0
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Module_Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/6/30 18:36:57
***************************************************************/


#ifndef _CBUS_TX_REG_H_INCLUDED_
#define _CBUS_TX_REG_H_INCLUDED_
#ifdef  _CBUS_TX_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     clk_1m_div:8;
unsigned int     abs_thres_en:1;
unsigned int     reserved_1:1;
unsigned int     sync0_hb:9;
unsigned int     sync0_lb:9;
}CBUS_TX_CBUS_CTRL0;

typedef struct 
{
unsigned int     parity_time:8;
unsigned int     abs_threshold:8;
unsigned int     sync1_hb:8;
unsigned int     sync1_lb:8;
}CBUS_TX_CBUS_CTRL1;

typedef struct 
{
unsigned int     vendor_id:8;
unsigned int     reserved_0:1;
unsigned int     ack_0:7;
unsigned int     reserved_1:1;
unsigned int     ack_fall:7;
unsigned int     reserved_2:3;
unsigned int     parity_limit:5;
}CBUS_TX_CBUS_CTRL2;

typedef struct 
{
unsigned int     tx_bit_time:8;
unsigned int     reserved_0:1;
unsigned int     tx_ack_fal:7;
unsigned int     reserved_1:1;
unsigned int     tx_ack_low_hb:7;
unsigned int     reserved_2:1;
unsigned int     tx_ack_low_lb:7;
}CBUS_TX_CBUS_CTRL3;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     glob_time:2;
unsigned int     link_time:5;
unsigned int     req_hold:4;
unsigned int     resp_hold:4;
unsigned int     wait_time:4;
unsigned int     fast_reply_en:1;
unsigned int     drv_str:2;
unsigned int     drv_hi_cbus:6;
unsigned int     retry_lv:3;
}CBUS_TX_CBUS_CTRL4;

typedef struct 
{
unsigned int     burst_wait:4;
unsigned int     fw_rxsense_en:1;
unsigned int     mhl_conn:1;
unsigned int     fw_path_en:1;
unsigned int     send_path:1;
unsigned int     req_opp_flt:8;
unsigned int     req_opp_int:2;
unsigned int     chk_point:6;
unsigned int     reserved_0:3;
unsigned int     avoid_conf:1;
unsigned int     reserved_1:1;
unsigned int     cbus_imp_fw_en:1;
unsigned int     z_5k_on:1;
unsigned int     z_10k_on:1;
}CBUS_TX_CBUS_CTRL5;

typedef struct 
{
unsigned int     wake_pulse_width1:2;
unsigned int     dis_chk_high:3;
unsigned int     reserved_0:1;
unsigned int     wake_pulse_width2:4;
unsigned int     src_cbus_float:4;
unsigned int     src_pulse_width:7;
unsigned int     src_conn:2;
unsigned int     rxsense_deglitch:9;
}CBUS_TX_CBUS_CTRL6;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     wake_to_discover:10;
unsigned int     src_vbus_cbus_stable:10;
unsigned int     vbus_out_to_stable:10;
}CBUS_TX_CBUS_CTRL7;

typedef struct 
{
unsigned int     req_cont:8;
unsigned int     src_arbitrate:3;
unsigned int     pulse_count:5;
unsigned int     wait_sink_float:1;
unsigned int     sink_cbus_float:2;
unsigned int     reserved_0:3;
unsigned int     rxsense_chk:10;
}CBUS_TX_CBUS_CTRL8;

typedef struct 
{
unsigned int     reserved_0:13;
unsigned int     retry_flag:1;
unsigned int     link_err:1;
unsigned int     conflict_err:1;
unsigned int     sync_bit_time:8;
unsigned int     reserved_1:3;
unsigned int     discovery_st:4;
unsigned int     write_data:1;
}CBUS_TX_CBUS_STATUS;

typedef struct 
{
unsigned int     fw0_req:1;
unsigned int     fw0_tx_case:3;
unsigned int     fw0_wait_case:2;
unsigned int     fw0_head:2;
unsigned int     fw0_fifo_clr:1;
unsigned int     reserved_0:23;
}CBUS_TX_FW0_CMD_INF;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     fw0_cmd2:8;
unsigned int     fw0_offset:8;
unsigned int     fw0_cmd1:8;
}CBUS_TX_FW0_CMD;

typedef struct 
{
unsigned int     fw0_cmd_rcv:8;
unsigned int     fw0_data_rcv:8;
unsigned int     fw0_rcv_err:1;
unsigned int     fw0_fifo_full:1;
unsigned int     fw0_fifo_empty:1;
unsigned int     fw0_fifo_len:5;
unsigned int     fw0_rty_ovr:1;
unsigned int     msc_hpd:1;
unsigned int     rcv_burst_len:5;
unsigned int     write_data:1;
}CBUS_TX_FW0_STATUS;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     fw0_data:8;
}CBUS_TX_FW0_WDATA;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     fw0_rdata:8;
}CBUS_TX_FW0_RDATA;

typedef struct 
{
unsigned int     scr_offset:8;
unsigned int     sta_offset:8;
unsigned int     int_offset:8;
unsigned int     cap_offset:8;
}CBUS_TX_DEVCAP_OFFSET;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     xcap_woffset:8;
unsigned int     xcap_offset:8;
}CBUS_TX_XDEVCAP_OFFSET;

typedef struct 
{
unsigned int     que_fsm:4;
unsigned int     sch_fsm:4;
unsigned int     burst_timeout:1;
unsigned int     reserved_0:22;
unsigned int     write_data:1;
}CBUS_TX_MSC_STATUS;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     ucpk_rcv:8;
unsigned int     ucp_rcv:8;
unsigned int     ucpe_rcv:8;
}CBUS_TX_MSG_STATUS1;

typedef struct 
{
unsigned int     msge_rcv:8;
unsigned int     rcpk_rcv:8;
unsigned int     rcp_rcv:8;
unsigned int     rcpe_rcv:8;
}CBUS_TX_MSG_STATUS2;

typedef struct 
{
unsigned int     rap_rcv:8;
unsigned int     rapk_rcv:8;
unsigned int     msg_dat:8;
unsigned int     msg_cmd:8;
}CBUS_TX_MSG_STATUS3;

typedef struct 
{
unsigned int     wb_id_chk:1;
unsigned int     rcp_reply_nack:1;
unsigned int     rcp_reply_abort:1;
unsigned int     reserved_0:5;
unsigned int     fwdef_cmd_rev:8;
unsigned int     reserved_1:16;
}CBUS_TX_ADOPTERID_CTRL;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     reserved_1:8;
unsigned int     adop_idl_rcv:8;
unsigned int     adop_idh_rcv:8;
}CBUS_TX_RCV_ADOPTER_ID;

typedef struct 
{
unsigned int     mcumsc_en:1;
unsigned int     reserved_0:1;
unsigned int     msc_wait_arb:1;
unsigned int     rx_fifo_clr:1;
unsigned int     reserved_1:1;
unsigned int     reserved_2:1;
unsigned int     que_fsm_clr:1;
unsigned int     sch_fsm_clr:1;
unsigned int     reserved_3:24;
}CBUS_TX_MSC_CTRL;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     msc_err_code:8;
}CBUS_TX_MSC_BURST_DATA;

typedef struct 
{
unsigned int     rx_fifo_full:1;
unsigned int     rx_fifo_empty:1;
unsigned int     reserved_0:1;
unsigned int     na_rx_len:5;
unsigned int     reserved_1:8;
unsigned int     na_msc_offset:8;
unsigned int     na_msc_cmd:8;
}CBUS_TX_MSC_RCV_CMD;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     rx_fifo_data:8;
}CBUS_TX_MSC_RCV_DATA;

typedef struct 
{
unsigned int     msc_err_force:1;
unsigned int     reserved_0:23;
unsigned int     msc_err_fw:8;
}CBUS_TX_MSC_WRITE_ERR_CODE;

typedef struct 
{
unsigned int     ddc_rdy:1;
unsigned int     ddc_cmd_type:3;
unsigned int     ddc_num:4;
unsigned int     ddc_nack_limit:8;
unsigned int     reserved_0:5;
unsigned int     ddc_err_code_clr:1;
unsigned int     ddc_prior_dis:1;
unsigned int     ddc_fsm_clr:1;
unsigned int     reserved_1:5;
unsigned int     ddc_nack_retry:1;
unsigned int     ddc_wait_case:1;
unsigned int     ddc_fw_en:1;
}CBUS_TX_DDC_CMD_INF;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     ddc_segval:8;
unsigned int     ddc_offset:8;
unsigned int     ddc_devaddr:8;
}CBUS_TX_DDC_CMD_DATA;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     ddc_wdata:8;
}CBUS_TX_DDC_WD;

typedef struct 
{
unsigned int     reserved_0:11;
unsigned int     ddc_fsm:5;
unsigned int     reserved_1:8;
unsigned int     ddc_rdata:8;
}CBUS_TX_DDC_RD;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     ddc_fifo_full:1;
unsigned int     ddc_fifo_empty:1;
unsigned int     ddc_err_code:8;
unsigned int     reserved_1:8;
unsigned int     ddc_wp:4;
unsigned int     ddc_rp:4;
}CBUS_TX_DDC_STATUS;

typedef struct 
{
unsigned int     ddc_err_force:1;
unsigned int     reserved_0:23;
unsigned int     ddc_err_fw:8;
}CBUS_TX_DDC_WRITE_ERR_CODE;

typedef struct 
{
unsigned int     wr_stat_irq:1;
unsigned int     rd_devcap_irq:1;
unsigned int     get_stat_irq:1;
unsigned int     get_id_irq:1;
unsigned int     get_msg_irq:1;
unsigned int     sc1_err_irq:1;
unsigned int     ddc_err_irq:1;
unsigned int     msc_err_irq:1;
unsigned int     wr_burst_irq:1;
unsigned int     sc3_err_irq:1;
unsigned int     fwdef_cmd_irq:1;
unsigned int     allmsc_cmd_irq:1;
unsigned int     abort_res_irq:1;
unsigned int     abort_req_irq:1;
unsigned int     ddc_abort_irq:1;
unsigned int     ddc_nack_irq:1;
unsigned int     msge_irq:1;
unsigned int     rcp_irq:1;
unsigned int     rcpk_irq:1;
unsigned int     rcpe_irq:1;
unsigned int     rap_irq:1;
unsigned int     rapk_irq:1;
unsigned int     ucp_irq:1;
unsigned int     ucpe_irq:1;
unsigned int     ucpk_irq:1;
unsigned int     msg_sub_irq:1;
unsigned int     det_rxsense_irq:1;
unsigned int     msc_hpd_irq:1;
unsigned int     wr_xstat_irq:1;
unsigned int     read_xdevcap_irq:1;
unsigned int     reserved_0:1;
unsigned int     write_data:1;
}CBUS_TX_MSC_IRQ;

typedef struct 
{
unsigned int     wr_stat_irq_en:1;
unsigned int     rd_devcap_irq_en:1;
unsigned int     get_stat_irq_en:1;
unsigned int     get_id_irq_en:1;
unsigned int     get_msg_irq_en:1;
unsigned int     sc1_err_irq_en:1;
unsigned int     ddc_err_irq_en:1;
unsigned int     msc_err_irq_en:1;
unsigned int     wr_burst_irq_en:1;
unsigned int     sc3_err_irq_en:1;
unsigned int     fwdef_cmd_irq_en:1;
unsigned int     allmsc_cmd_irq_en:1;
unsigned int     abort_res_irq_en:1;
unsigned int     abort_req_irq_en:1;
unsigned int     ddc_abort_irq_en:1;
unsigned int     ddc_nack_irq_en:1;
unsigned int     msge_irq_en:1;
unsigned int     rcp_irq_en:1;
unsigned int     rcpk_irq_en:1;
unsigned int     rcpe_irq_en:1;
unsigned int     rap_irq_en:1;
unsigned int     rapk_irq_en:1;
unsigned int     ucp_irq_en:1;
unsigned int     ucpe_irq_en:1;
unsigned int     ucpk_irq_en:1;
unsigned int     msg_sub_irq_en:1;
unsigned int     det_rxsense_irq_en:1;
unsigned int     msc_hpd_irq_en:1;
unsigned int     wr_xstat_irq_en:1;
unsigned int     read_xdevcap_irq_en:1;
unsigned int     reserved_0:2;
}CBUS_TX_MSC_IRQ_EN;

typedef struct 
{
unsigned int     fw0_fin_irq_en:1;
unsigned int     fw0_cmd_irq_en:1;
unsigned int     fw0_data_irq_en:1;
unsigned int     reserved_0:5;
unsigned int     ddc_fin_irq_en:1;
unsigned int     reserved_1:7;
unsigned int     clk_mode_irq_en:1;
unsigned int     dcap_rdy_irq_en:1;
unsigned int     muted_chg_irq_en:1;
unsigned int     path_en_irq_en:1;
unsigned int     reserved_2:1;
unsigned int     sink_det_irq_en:1;
unsigned int     parity_err_irq_en:1;
unsigned int     disconn_irq_en:1;
unsigned int     reserved_3:8;
}CBUS_TX_CBUS_TX_INT;

typedef struct 
{
unsigned int     fw0_fin_irq:1;
unsigned int     fw0_cmd_irq:1;
unsigned int     fw0_data_irq:1;
unsigned int     reserved_0:5;
unsigned int     ddc_fin_irq:1;
unsigned int     reserved_1:7;
unsigned int     clk_mode_chg:1;
unsigned int     dcap_rdy_chg:1;
unsigned int     muted_chg:1;
unsigned int     path_en_chg:1;
unsigned int     reserved_2:1;
unsigned int     sink_det_irq:1;
unsigned int     parity_err_irq:1;
unsigned int     disconn_irq:1;
unsigned int     reserved_3:7;
unsigned int     write_data:1;
}CBUS_TX_CBUS_TX_INT1;

typedef struct 
{
unsigned int     chg23_irq_en:8;
unsigned int     chg22_irq_en:8;
unsigned int     dchg_bit7_irq_en:1;
unsigned int     dchg_bit6_irq_en:1;
unsigned int     dchg_bit5_irq_en:1;
unsigned int     dchg_bit4_irq_en:1;
unsigned int     dchg_bit3_irq_en:1;
unsigned int     dchg_bit2_irq_en:1;
unsigned int     edid_irq_en:1;
unsigned int     dchg_bit0_irq_en:1;
unsigned int     rchg_irq_en:3;
unsigned int     req_3d_irq_en:1;
unsigned int     grt_irq_en:1;
unsigned int     req_irq_en:1;
unsigned int     dscr_irq_en:1;
unsigned int     dcap_irq_en:1;
}CBUS_TX_DEVCAP_INT_EN;

typedef struct 
{
unsigned int     chg27_irq_en:8;
unsigned int     chg26_irq_en:8;
unsigned int     chg25_irq_en:8;
unsigned int     chg24_irq_en:8;
}CBUS_TX_DEVCAP_INT_EN1;

typedef struct 
{
unsigned int     cbus_test_md:2;
unsigned int     fw_out:1;
unsigned int     dbg_sel:3;
unsigned int     reserved_0:2;
unsigned int     ecbus_dbg_sel:4;
unsigned int     ecbus_fw_out:1;
unsigned int     force_ecbus_out:1;
unsigned int     reserved_1:18;
}CBUS_TX_CBUS_TEST;

typedef struct 
{
unsigned int     link_layer_st:4;
unsigned int     reserved_0:1;
unsigned int     deb_lv:3;
unsigned int     reserved_1:7;
unsigned int     mhl_rxsense:1;
unsigned int     reserved_2:6;
unsigned int     clk_1k_div:10;
}CBUS_TX_CBUS_CTRL9;

typedef struct 
{
unsigned int     dummy_reg:32;
}CBUS_TX_DUMMY_CTRL;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     acpu_int_en:1;
unsigned int     scpu_int_en:1;
}CBUS_TX_INT_CTRL;

typedef struct 
{
unsigned int     msc_offset_adr:8;
unsigned int     devcap_rdata:8;
unsigned int     reserved_0:7;
unsigned int     devcap_write:1;
unsigned int     msc_reg_data:8;
}CBUS_TX_DEVCAP_WRITE;

typedef struct 
{
unsigned int     adop_id_h:8;
unsigned int     dev_cat:1;
unsigned int     plim:2;
unsigned int     pow:1;
unsigned int     dev_type:4;
unsigned int     mhl_ver:8;
unsigned int     dev_state:8;
}CBUS_TX_MSC_DEVCAP0;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     aud_link_md:6;
unsigned int     aud_8ch:1;
unsigned int     aud_2ch:1;
unsigned int     vid_link_md:2;
unsigned int     supp_vga:1;
unsigned int     supp_islands:1;
unsigned int     supp_ppixel:1;
unsigned int     supp_yuv422:1;
unsigned int     supp_yuv444:1;
unsigned int     supp_rgb444:1;
unsigned int     adop_id_l:8;
}CBUS_TX_MSC_DEVCAP1;

typedef struct 
{
unsigned int     device_id_h:8;
unsigned int     feature_flag:3;
unsigned int     ucp_recv_supp:1;
unsigned int     ucp_send_supp:1;
unsigned int     sp_supp:1;
unsigned int     rap_supp:1;
unsigned int     rcp_supp:1;
unsigned int     reserved_0:8;
unsigned int     ld_gui:1;
unsigned int     ld_speaker:1;
unsigned int     ld_record:1;
unsigned int     ld_tuner:1;
unsigned int     ld_media:1;
unsigned int     ld_audio:1;
unsigned int     ld_video:1;
unsigned int     ld_display:1;
}CBUS_TX_MSC_DEVCAP2;

typedef struct 
{
unsigned int     cap_0f:8;
unsigned int     stat_size:4;
unsigned int     int_size:4;
unsigned int     scratchpad_size:8;
unsigned int     device_id_l:8;
}CBUS_TX_MSC_DEVCAP3;

typedef struct 
{
unsigned int     chg23_irq:8;
unsigned int     chg22_irq:8;
unsigned int     dchg_irq:6;
unsigned int     edid_chg:1;
unsigned int     dchg_irq_0:1;
unsigned int     rchg_irq:3;
unsigned int     3d_req:1;
unsigned int     grt_wrt:1;
unsigned int     req_wrt:1;
unsigned int     dscr_chg:1;
unsigned int     dcap_chg:1;
}CBUS_TX_MSC_DEVCAP4;

typedef struct 
{
unsigned int     chg27_irq:8;
unsigned int     chg26_irq:8;
unsigned int     chg25_irq:8;
unsigned int     chg24_irq:8;
}CBUS_TX_MSC_DEVCAP5;

typedef struct 
{
unsigned int     reserved_0:32;
}CBUS_TX_MSC_DEVCAP6;

typedef struct 
{
unsigned int     reserved_0:32;
}CBUS_TX_MSC_DEVCAP7;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     reserved_1:8;
unsigned int     reserved_2:3;
unsigned int     muted:1;
unsigned int     path_en:1;
unsigned int     clk_mode:3;
unsigned int     reserved_3:7;
unsigned int     dcap_rdy:1;
}CBUS_TX_MSC_DEVCAP8;

typedef struct 
{
unsigned int     reserved_0:32;
}CBUS_TX_MSC_DEVCAP9;

typedef struct 
{
unsigned int     reserved_0:32;
}CBUS_TX_MSC_DEVCAP10;

typedef struct 
{
unsigned int     reserved_0:32;
}CBUS_TX_MSC_DEVCAP11;

typedef struct 
{
unsigned int     scratchpad_reg0:32;
}CBUS_TX_MSC_DEVCAP12;

typedef struct 
{
unsigned int     scratchpad_reg1:32;
}CBUS_TX_MSC_DEVCAP13;

typedef struct 
{
unsigned int     scratchpad_reg2:32;
}CBUS_TX_MSC_DEVCAP14;

typedef struct 
{
unsigned int     scratchpad_reg3:32;
}CBUS_TX_MSC_DEVCAP15;

typedef struct 
{
unsigned int     scratchpad_reg4:32;
}CBUS_TX_MSC_DEVCAP16;

typedef struct 
{
unsigned int     scratchpad_reg5:32;
}CBUS_TX_MSC_DEVCAP17;

typedef struct 
{
unsigned int     scratchpad_reg6:32;
}CBUS_TX_MSC_DEVCAP18;

typedef struct 
{
unsigned int     scratchpad_reg7:32;
}CBUS_TX_MSC_DEVCAP19;

typedef struct 
{
unsigned int     emsc_resync:1;
unsigned int     start_up_bypass:1;
unsigned int     tdm_sync_bypass:1;
unsigned int     emsc_train_bypass:1;
unsigned int     rst_emsc_rx_flag:1;
unsigned int     reserved_0:6;
unsigned int     fw_rst_start_up:1;
unsigned int     fw_rst_tdm_sync:1;
unsigned int     fw_rst_discovery:1;
unsigned int     cbus_mode_up:1;
unsigned int     cbus_mode_down:1;
unsigned int     reserved_1:5;
unsigned int     ecbus_ettempts:3;
unsigned int     reserved_2:4;
unsigned int     chg_to_cbus1:1;
unsigned int     read_xdev:1;
unsigned int     source_mhl_3_en:1;
unsigned int     sink_mhl_3_en:1;
}CBUS_TX_ECBUS_DISCOVERY;

typedef struct 
{
unsigned int     reserved_0:3;
unsigned int     src_ecbus_reset:5;
unsigned int     reserved_1:2;
unsigned int     src_tdm_tmout:6;
unsigned int     reserved_2:2;
unsigned int     src_balign_tmout:6;
unsigned int     reserved_3:1;
unsigned int     src_cal_tmout:7;
}CBUS_TX_START_UP_TIMER;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     ecbus_clk_us_div:8;
unsigned int     reserved_1:6;
unsigned int     ecbus_clk_1k_div:10;
}CBUS_TX_ECBUS_TIMER_CTRL;

typedef struct 
{
unsigned int     reserved_0:10;
unsigned int     sync_tdm:6;
unsigned int     reserved_1:3;
unsigned int     src_tdm:5;
unsigned int     src_sync:3;
unsigned int     src_balign:5;
}CBUS_TX_START_UP_TIMER1;

typedef struct 
{
unsigned int     cbus1_swap:1;
unsigned int     comma_swap:1;
unsigned int     reserved_0:20;
unsigned int     comma1_sel:1;
unsigned int     comma2_sel:1;
unsigned int     reserved_1:1;
unsigned int     retry_start_up:3;
unsigned int     chk_comma1:2;
unsigned int     chk_comma2:2;
}CBUS_TX_CBUS1_CTRL;

typedef struct 
{
unsigned int     reserved_0:10;
unsigned int     block_rcv_ack:6;
unsigned int     reserved_1:4;
unsigned int     temsc_req_tmout:4;
unsigned int     temsc_resp_tmout:4;
unsigned int     temsc_retry_time:4;
}CBUS_TX_EMSC_TIMER0;

typedef struct 
{
unsigned int     reserved_0:7;
unsigned int     nemsc_mark:5;
unsigned int     nemsc_mark_err:4;
unsigned int     nemsc_retry:4;
unsigned int     reserved_1:3;
unsigned int     nemsc_init_sync:9;
}CBUS_TX_EMSC_TIMER1;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     cbus1_retry_pause:4;
unsigned int     reserved_1:4;
unsigned int     cbus1_retry_src:4;
unsigned int     reserved_2:1;
unsigned int     msc_msg_timeout:7;
unsigned int     reserved_3:4;
unsigned int     cbus1_timeout:4;
}CBUS_TX_CBUS1_TIME;

typedef struct 
{
unsigned int     slot_assign4:8;
unsigned int     slot_assign3:8;
unsigned int     slot_assign2:8;
unsigned int     slot_assign1:8;
}CBUS_TX_CHANNEL_ASSIGN0;

typedef struct 
{
unsigned int     slot_assign8:8;
unsigned int     slot_assign7:8;
unsigned int     slot_assign6:8;
unsigned int     slot_assign5:8;
}CBUS_TX_CHANNEL_ASSIGN1;

typedef struct 
{
unsigned int     slot_assign12:8;
unsigned int     slot_assign11:8;
unsigned int     slot_assign10:8;
unsigned int     slot_assign9:8;
}CBUS_TX_CHANNEL_ASSIGN2;

typedef struct 
{
unsigned int     slot_assign16:8;
unsigned int     slot_assign15:8;
unsigned int     slot_assign14:8;
unsigned int     slot_assign13:8;
}CBUS_TX_CHANNEL_ASSIGN3;

typedef struct 
{
unsigned int     slot_assign20:8;
unsigned int     slot_assign19:8;
unsigned int     slot_assign18:8;
unsigned int     slot_assign17:8;
}CBUS_TX_CHANNEL_ASSIGN4;

typedef struct 
{
unsigned int     slot_assign24:8;
unsigned int     slot_assign23:8;
unsigned int     slot_assign22:8;
unsigned int     slot_assign21:8;
}CBUS_TX_CHANNEL_ASSIGN5;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     tcbus0_ch_num:8;
unsigned int     emsc_ch_num:8;
}CBUS_TX_CHANNEL_ASSIGN;

typedef struct 
{
unsigned int     tcbus1_tx_rdy:1;
unsigned int     reserved_0:3;
unsigned int     tcbus1_tx_byte:12;
unsigned int     tcbus0_tx_rdy:1;
unsigned int     reserved_1:3;
unsigned int     tcbus0_tx_byte:12;
}CBUS_TX_TCBUS_CTRL;

typedef struct 
{
unsigned int     emsc_tx_rdy:1;
unsigned int     reserved_0:15;
unsigned int     emsc_tx_req:16;
}CBUS_TX_EMSC_CTRL;

typedef struct 
{
unsigned int     emsc_fw_crc:1;
unsigned int     emsc_swap:1;
unsigned int     emsc_req_err_retry:1;
unsigned int     emsc_mark1_wait:1;
unsigned int     ecbus_dout_sel:1;
unsigned int     reserved_0:11;
unsigned int     emsc_tx_crc:16;
}CBUS_TX_EMSC_CTRL1;

typedef struct 
{
unsigned int     ecbus_tx_bist:1;
unsigned int     ecbus_rx_bist:1;
unsigned int     ecbus_select:1;
unsigned int     impedance_test:1;
unsigned int     reserved_0:20;
unsigned int     impedance_mode:8;
}CBUS_TX_BIST_CTRL0;

typedef struct 
{
unsigned int     ecbus_fixed_h:8;
unsigned int     ecbus_fixed_l:8;
unsigned int     reserved_0:4;
unsigned int     ecbus_pattern:4;
unsigned int     ecbus_duration:8;
}CBUS_TX_BIST_CTRL1;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     ecbus_stat_h:8;
unsigned int     ecbus_stat_l:8;
}CBUS_TX_BIST_STATUS;

typedef struct 
{
unsigned int     bist_test_irq:1;
unsigned int     reserved_0:5;
unsigned int     emsc_tx_tmout_irq:1;
unsigned int     emsc_rx_tmout_irq:1;
unsigned int     emsc_tx_req_fail_irq:1;
unsigned int     emsc_invalid_cmd_irq:1;
unsigned int     emsc_tx_err_irq:1;
unsigned int     emsc_tx_nack_irq:1;
unsigned int     emsc_retry_fail_irq:1;
unsigned int     emsc_rx_full_irq:1;
unsigned int     emsc_crc_fail_irq:1;
unsigned int     emsc_rx_irq:1;
unsigned int     emsc_tx_irq:1;
unsigned int     emsc_loss_sync_irq:1;
unsigned int     emsc_sync_irq:1;
unsigned int     ecbus_reset_irq:1;
unsigned int     cbus1_tx_nack_irq:1;
unsigned int     cbus1_tx_pkt_irq:1;
unsigned int     cbus1_rx_crc_fail_irq:1;
unsigned int     cbus1_rx_pkt_irq:1;
unsigned int     cbus1_sync_fail_irq:1;
unsigned int     cbus1_lost_sync_irq:1;
unsigned int     cbus1_on_irq:1;
unsigned int     start_up_fail_irq:1;
unsigned int     start_up_irq:1;
unsigned int     reserved_1:1;
unsigned int     ecbus_disconn_irq:1;
unsigned int     write_data:1;
}CBUS_TX_ECBUS_IRQ;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     emsc_rx_rdy:1;
unsigned int     write_data:1;
}CBUS_TX_EMSC_CTRL2;

typedef struct 
{
unsigned int     emsc_rx_crc:16;
unsigned int     emsc_rx_req:16;
}CBUS_TX_EMSC_STATUS0;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     emsc_rcv_err:16;
}CBUS_TX_EMSC_STATUS1;

typedef struct 
{
unsigned int     reserved_0:28;
unsigned int     ediscovery_st:4;
}CBUS_TX_ECBUS_STATUS;

typedef struct 
{
unsigned int     bist_test_irq_en:1;
unsigned int     reserved_0:5;
unsigned int     emsc_tx_tmout_irq_en:1;
unsigned int     emsc_rx_tmout_irq_en:1;
unsigned int     emsc_tx_req_fail_irq_en:1;
unsigned int     emsc_invalid_cmd_irq_en:1;
unsigned int     emsc_tx_err_irq_en:1;
unsigned int     emsc_tx_nack_irq_en:1;
unsigned int     emsc_retry_fail_irq_en:1;
unsigned int     emsc_rx_full_irq_en:1;
unsigned int     emsc_crc_fail_irq_en:1;
unsigned int     emsc_rx_irq_en:1;
unsigned int     emsc_tx_irq_en:1;
unsigned int     emsc_loss_sync_irq_en:1;
unsigned int     emsc_sync_irq_en:1;
unsigned int     ecbus_reset_irq_en:1;
unsigned int     cbus1_tx_nack_irq_en:1;
unsigned int     cbus1_tx_pkt_irq_en:1;
unsigned int     cbus1_rx_crc_fail_irq_en:1;
unsigned int     cbus1_rx_pkt_irq_en:1;
unsigned int     cbus1_sync_fail_irq_en:1;
unsigned int     cbus1_lost_sync_irq_en:1;
unsigned int     cbus1_on_irq_en:1;
unsigned int     start_up_fail_irq_en:1;
unsigned int     start_up_irq_en:1;
unsigned int     reserved_1:1;
unsigned int     ecbus_disconn_irq_en:1;
unsigned int     reserved_2:1;
}CBUS_TX_ECBUS_IRQ_EN;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     ecbus_clk_1m_div:8;
unsigned int     reserved_1:2;
unsigned int     ecbus_sync0_hb:9;
unsigned int     ecbus_sync0_lb:9;
}CBUS_TX_ECBUS_BITCTRL0;

typedef struct 
{
unsigned int     ecbus_parity_time:8;
unsigned int     ecbus_abs_threshold:8;
unsigned int     ecbus_sync1_hb:8;
unsigned int     ecbus_sync1_lb:8;
}CBUS_TX_ECBUS_BITCTRL1;

typedef struct 
{
unsigned int     reserved_0:9;
unsigned int     ecbus_ack_0:7;
unsigned int     reserved_1:1;
unsigned int     ecbus_ack_fall:7;
unsigned int     reserved_2:8;
}CBUS_TX_ECBUS_BITCTRL2;

typedef struct 
{
unsigned int     ecbus_tx_bit_time:8;
unsigned int     reserved_0:1;
unsigned int     ecbus_tx_ack_fal:7;
unsigned int     reserved_1:1;
unsigned int     ecbus_tx_ack_low_hb:7;
unsigned int     reserved_2:1;
unsigned int     ecbus_tx_ack_low_lb:7;
}CBUS_TX_ECBUS_BITCTRL3;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     ecbus_req_opp_flt:8;
unsigned int     reserved_1:2;
unsigned int     ecbus_chk_point:6;
unsigned int     reserved_2:2;
unsigned int     ecbus_drv_hi_cbus:6;
}CBUS_TX_ECBUS_BITCTRL4;

typedef struct 
{
unsigned int     ecbus_debug0:32;
}CBUS_TX_ECBUS_DBG0;

typedef struct 
{
unsigned int     ecbus_debug1:32;
}CBUS_TX_ECBUS_DBG1;

typedef struct 
{
unsigned int     ecbus_debug2:32;
}CBUS_TX_ECBUS_DBG2;

typedef struct 
{
unsigned int     ecbus_debug3:32;
}CBUS_TX_ECBUS_DBG3;

typedef struct 
{
unsigned int     reserved_0:18;
unsigned int     ecbus_drf_test_resume:1;
unsigned int     reserved_1:1;
unsigned int     ecbus_drf_bist_en:1;
unsigned int     reserved_2:1;
unsigned int     ecbus_bist_en:1;
unsigned int     ecbus_rme:1;
unsigned int     reserved_3:4;
unsigned int     ecbus_rm:4;
}CBUS_TX_RM_CTRL;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     ecbus_drf_start_pause:1;
}CBUS_TX_DRF_STATUS;

typedef struct 
{
unsigned int     reserved_0:13;
unsigned int     ecbus_drf_bist_fail:2;
unsigned int     ecbus_drf_bist_done:1;
unsigned int     reserved_1:13;
unsigned int     ecbus_bist_fail:2;
unsigned int     ecbus_bist_done:1;
}CBUS_TX_SRAM_BIST_STATUS;

typedef struct 
{
unsigned int     gating_bypass0:1;
unsigned int     gating_bypass1:1;
unsigned int     gating_bypass2:1;
unsigned int     reserved_0:28;
unsigned int     SRAM_LS:1;
}CBUS_TX_LS_CTRL;

#endif

#define CBUS_TX_CBUS_CTRL0                                                           0x98037B00
#define CBUS_TX_CBUS_CTRL0_reg_addr                                                  "0xD8037B00"
#define CBUS_TX_CBUS_CTRL0_reg                                                       0xD8037B00
#define set_CBUS_TX_CBUS_CTRL0_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL0_reg)=data)
#define get_CBUS_TX_CBUS_CTRL0_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL0_reg))
#define CBUS_TX_CBUS_CTRL0_inst_adr                                                  "0x00C0"
#define CBUS_TX_CBUS_CTRL0_inst                                                      0x00C0
#define CBUS_TX_CBUS_CTRL0_clk_1m_div_shift                                          (20)
#define CBUS_TX_CBUS_CTRL0_clk_1m_div_mask                                           (0x0FF00000)
#define CBUS_TX_CBUS_CTRL0_clk_1m_div(data)                                          (0x0FF00000&((data)<<20))
#define CBUS_TX_CBUS_CTRL0_clk_1m_div_src(data)                                      ((0x0FF00000&(data))>>20)
#define CBUS_TX_CBUS_CTRL0_get_clk_1m_div(data)                                      ((0x0FF00000&(data))>>20)
#define CBUS_TX_CBUS_CTRL0_abs_thres_en_shift                                        (19)
#define CBUS_TX_CBUS_CTRL0_abs_thres_en_mask                                         (0x00080000)
#define CBUS_TX_CBUS_CTRL0_abs_thres_en(data)                                        (0x00080000&((data)<<19))
#define CBUS_TX_CBUS_CTRL0_abs_thres_en_src(data)                                    ((0x00080000&(data))>>19)
#define CBUS_TX_CBUS_CTRL0_get_abs_thres_en(data)                                    ((0x00080000&(data))>>19)
#define CBUS_TX_CBUS_CTRL0_sync0_hb_shift                                            (9)
#define CBUS_TX_CBUS_CTRL0_sync0_hb_mask                                             (0x0003FE00)
#define CBUS_TX_CBUS_CTRL0_sync0_hb(data)                                            (0x0003FE00&((data)<<9))
#define CBUS_TX_CBUS_CTRL0_sync0_hb_src(data)                                        ((0x0003FE00&(data))>>9)
#define CBUS_TX_CBUS_CTRL0_get_sync0_hb(data)                                        ((0x0003FE00&(data))>>9)
#define CBUS_TX_CBUS_CTRL0_sync0_lb_shift                                            (0)
#define CBUS_TX_CBUS_CTRL0_sync0_lb_mask                                             (0x000001FF)
#define CBUS_TX_CBUS_CTRL0_sync0_lb(data)                                            (0x000001FF&((data)<<0))
#define CBUS_TX_CBUS_CTRL0_sync0_lb_src(data)                                        ((0x000001FF&(data))>>0)
#define CBUS_TX_CBUS_CTRL0_get_sync0_lb(data)                                        ((0x000001FF&(data))>>0)


#define CBUS_TX_CBUS_CTRL1                                                           0x98037B04
#define CBUS_TX_CBUS_CTRL1_reg_addr                                                  "0xD8037B04"
#define CBUS_TX_CBUS_CTRL1_reg                                                       0xD8037B04
#define set_CBUS_TX_CBUS_CTRL1_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL1_reg)=data)
#define get_CBUS_TX_CBUS_CTRL1_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL1_reg))
#define CBUS_TX_CBUS_CTRL1_inst_adr                                                  "0x00C1"
#define CBUS_TX_CBUS_CTRL1_inst                                                      0x00C1
#define CBUS_TX_CBUS_CTRL1_parity_time_shift                                         (24)
#define CBUS_TX_CBUS_CTRL1_parity_time_mask                                          (0xFF000000)
#define CBUS_TX_CBUS_CTRL1_parity_time(data)                                         (0xFF000000&((data)<<24))
#define CBUS_TX_CBUS_CTRL1_parity_time_src(data)                                     ((0xFF000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL1_get_parity_time(data)                                     ((0xFF000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL1_abs_threshold_shift                                       (16)
#define CBUS_TX_CBUS_CTRL1_abs_threshold_mask                                        (0x00FF0000)
#define CBUS_TX_CBUS_CTRL1_abs_threshold(data)                                       (0x00FF0000&((data)<<16))
#define CBUS_TX_CBUS_CTRL1_abs_threshold_src(data)                                   ((0x00FF0000&(data))>>16)
#define CBUS_TX_CBUS_CTRL1_get_abs_threshold(data)                                   ((0x00FF0000&(data))>>16)
#define CBUS_TX_CBUS_CTRL1_sync1_hb_shift                                            (8)
#define CBUS_TX_CBUS_CTRL1_sync1_hb_mask                                             (0x0000FF00)
#define CBUS_TX_CBUS_CTRL1_sync1_hb(data)                                            (0x0000FF00&((data)<<8))
#define CBUS_TX_CBUS_CTRL1_sync1_hb_src(data)                                        ((0x0000FF00&(data))>>8)
#define CBUS_TX_CBUS_CTRL1_get_sync1_hb(data)                                        ((0x0000FF00&(data))>>8)
#define CBUS_TX_CBUS_CTRL1_sync1_lb_shift                                            (0)
#define CBUS_TX_CBUS_CTRL1_sync1_lb_mask                                             (0x000000FF)
#define CBUS_TX_CBUS_CTRL1_sync1_lb(data)                                            (0x000000FF&((data)<<0))
#define CBUS_TX_CBUS_CTRL1_sync1_lb_src(data)                                        ((0x000000FF&(data))>>0)
#define CBUS_TX_CBUS_CTRL1_get_sync1_lb(data)                                        ((0x000000FF&(data))>>0)


#define CBUS_TX_CBUS_CTRL2                                                           0x98037B08
#define CBUS_TX_CBUS_CTRL2_reg_addr                                                  "0xD8037B08"
#define CBUS_TX_CBUS_CTRL2_reg                                                       0xD8037B08
#define set_CBUS_TX_CBUS_CTRL2_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL2_reg)=data)
#define get_CBUS_TX_CBUS_CTRL2_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL2_reg))
#define CBUS_TX_CBUS_CTRL2_inst_adr                                                  "0x00C2"
#define CBUS_TX_CBUS_CTRL2_inst                                                      0x00C2
#define CBUS_TX_CBUS_CTRL2_vendor_id_shift                                           (24)
#define CBUS_TX_CBUS_CTRL2_vendor_id_mask                                            (0xFF000000)
#define CBUS_TX_CBUS_CTRL2_vendor_id(data)                                           (0xFF000000&((data)<<24))
#define CBUS_TX_CBUS_CTRL2_vendor_id_src(data)                                       ((0xFF000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL2_get_vendor_id(data)                                       ((0xFF000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL2_ack_0_shift                                               (16)
#define CBUS_TX_CBUS_CTRL2_ack_0_mask                                                (0x007F0000)
#define CBUS_TX_CBUS_CTRL2_ack_0(data)                                               (0x007F0000&((data)<<16))
#define CBUS_TX_CBUS_CTRL2_ack_0_src(data)                                           ((0x007F0000&(data))>>16)
#define CBUS_TX_CBUS_CTRL2_get_ack_0(data)                                           ((0x007F0000&(data))>>16)
#define CBUS_TX_CBUS_CTRL2_ack_fall_shift                                            (8)
#define CBUS_TX_CBUS_CTRL2_ack_fall_mask                                             (0x00007F00)
#define CBUS_TX_CBUS_CTRL2_ack_fall(data)                                            (0x00007F00&((data)<<8))
#define CBUS_TX_CBUS_CTRL2_ack_fall_src(data)                                        ((0x00007F00&(data))>>8)
#define CBUS_TX_CBUS_CTRL2_get_ack_fall(data)                                        ((0x00007F00&(data))>>8)
#define CBUS_TX_CBUS_CTRL2_parity_limit_shift                                        (0)
#define CBUS_TX_CBUS_CTRL2_parity_limit_mask                                         (0x0000001F)
#define CBUS_TX_CBUS_CTRL2_parity_limit(data)                                        (0x0000001F&((data)<<0))
#define CBUS_TX_CBUS_CTRL2_parity_limit_src(data)                                    ((0x0000001F&(data))>>0)
#define CBUS_TX_CBUS_CTRL2_get_parity_limit(data)                                    ((0x0000001F&(data))>>0)


#define CBUS_TX_CBUS_CTRL3                                                           0x98037B0C
#define CBUS_TX_CBUS_CTRL3_reg_addr                                                  "0xD8037B0C"
#define CBUS_TX_CBUS_CTRL3_reg                                                       0xD8037B0C
#define set_CBUS_TX_CBUS_CTRL3_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL3_reg)=data)
#define get_CBUS_TX_CBUS_CTRL3_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL3_reg))
#define CBUS_TX_CBUS_CTRL3_inst_adr                                                  "0x00C3"
#define CBUS_TX_CBUS_CTRL3_inst                                                      0x00C3
#define CBUS_TX_CBUS_CTRL3_tx_bit_time_shift                                         (24)
#define CBUS_TX_CBUS_CTRL3_tx_bit_time_mask                                          (0xFF000000)
#define CBUS_TX_CBUS_CTRL3_tx_bit_time(data)                                         (0xFF000000&((data)<<24))
#define CBUS_TX_CBUS_CTRL3_tx_bit_time_src(data)                                     ((0xFF000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL3_get_tx_bit_time(data)                                     ((0xFF000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL3_tx_ack_fal_shift                                          (16)
#define CBUS_TX_CBUS_CTRL3_tx_ack_fal_mask                                           (0x007F0000)
#define CBUS_TX_CBUS_CTRL3_tx_ack_fal(data)                                          (0x007F0000&((data)<<16))
#define CBUS_TX_CBUS_CTRL3_tx_ack_fal_src(data)                                      ((0x007F0000&(data))>>16)
#define CBUS_TX_CBUS_CTRL3_get_tx_ack_fal(data)                                      ((0x007F0000&(data))>>16)
#define CBUS_TX_CBUS_CTRL3_tx_ack_low_hb_shift                                       (8)
#define CBUS_TX_CBUS_CTRL3_tx_ack_low_hb_mask                                        (0x00007F00)
#define CBUS_TX_CBUS_CTRL3_tx_ack_low_hb(data)                                       (0x00007F00&((data)<<8))
#define CBUS_TX_CBUS_CTRL3_tx_ack_low_hb_src(data)                                   ((0x00007F00&(data))>>8)
#define CBUS_TX_CBUS_CTRL3_get_tx_ack_low_hb(data)                                   ((0x00007F00&(data))>>8)
#define CBUS_TX_CBUS_CTRL3_tx_ack_low_lb_shift                                       (0)
#define CBUS_TX_CBUS_CTRL3_tx_ack_low_lb_mask                                        (0x0000007F)
#define CBUS_TX_CBUS_CTRL3_tx_ack_low_lb(data)                                       (0x0000007F&((data)<<0))
#define CBUS_TX_CBUS_CTRL3_tx_ack_low_lb_src(data)                                   ((0x0000007F&(data))>>0)
#define CBUS_TX_CBUS_CTRL3_get_tx_ack_low_lb(data)                                   ((0x0000007F&(data))>>0)


#define CBUS_TX_CBUS_CTRL4                                                           0x98037B10
#define CBUS_TX_CBUS_CTRL4_reg_addr                                                  "0xD8037B10"
#define CBUS_TX_CBUS_CTRL4_reg                                                       0xD8037B10
#define set_CBUS_TX_CBUS_CTRL4_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL4_reg)=data)
#define get_CBUS_TX_CBUS_CTRL4_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL4_reg))
#define CBUS_TX_CBUS_CTRL4_inst_adr                                                  "0x00C4"
#define CBUS_TX_CBUS_CTRL4_inst                                                      0x00C4
#define CBUS_TX_CBUS_CTRL4_glob_time_shift                                           (29)
#define CBUS_TX_CBUS_CTRL4_glob_time_mask                                            (0x60000000)
#define CBUS_TX_CBUS_CTRL4_glob_time(data)                                           (0x60000000&((data)<<29))
#define CBUS_TX_CBUS_CTRL4_glob_time_src(data)                                       ((0x60000000&(data))>>29)
#define CBUS_TX_CBUS_CTRL4_get_glob_time(data)                                       ((0x60000000&(data))>>29)
#define CBUS_TX_CBUS_CTRL4_link_time_shift                                           (24)
#define CBUS_TX_CBUS_CTRL4_link_time_mask                                            (0x1F000000)
#define CBUS_TX_CBUS_CTRL4_link_time(data)                                           (0x1F000000&((data)<<24))
#define CBUS_TX_CBUS_CTRL4_link_time_src(data)                                       ((0x1F000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL4_get_link_time(data)                                       ((0x1F000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL4_req_hold_shift                                            (20)
#define CBUS_TX_CBUS_CTRL4_req_hold_mask                                             (0x00F00000)
#define CBUS_TX_CBUS_CTRL4_req_hold(data)                                            (0x00F00000&((data)<<20))
#define CBUS_TX_CBUS_CTRL4_req_hold_src(data)                                        ((0x00F00000&(data))>>20)
#define CBUS_TX_CBUS_CTRL4_get_req_hold(data)                                        ((0x00F00000&(data))>>20)
#define CBUS_TX_CBUS_CTRL4_resp_hold_shift                                           (16)
#define CBUS_TX_CBUS_CTRL4_resp_hold_mask                                            (0x000F0000)
#define CBUS_TX_CBUS_CTRL4_resp_hold(data)                                           (0x000F0000&((data)<<16))
#define CBUS_TX_CBUS_CTRL4_resp_hold_src(data)                                       ((0x000F0000&(data))>>16)
#define CBUS_TX_CBUS_CTRL4_get_resp_hold(data)                                       ((0x000F0000&(data))>>16)
#define CBUS_TX_CBUS_CTRL4_wait_time_shift                                           (12)
#define CBUS_TX_CBUS_CTRL4_wait_time_mask                                            (0x0000F000)
#define CBUS_TX_CBUS_CTRL4_wait_time(data)                                           (0x0000F000&((data)<<12))
#define CBUS_TX_CBUS_CTRL4_wait_time_src(data)                                       ((0x0000F000&(data))>>12)
#define CBUS_TX_CBUS_CTRL4_get_wait_time(data)                                       ((0x0000F000&(data))>>12)
#define CBUS_TX_CBUS_CTRL4_fast_reply_en_shift                                       (11)
#define CBUS_TX_CBUS_CTRL4_fast_reply_en_mask                                        (0x00000800)
#define CBUS_TX_CBUS_CTRL4_fast_reply_en(data)                                       (0x00000800&((data)<<11))
#define CBUS_TX_CBUS_CTRL4_fast_reply_en_src(data)                                   ((0x00000800&(data))>>11)
#define CBUS_TX_CBUS_CTRL4_get_fast_reply_en(data)                                   ((0x00000800&(data))>>11)
#define CBUS_TX_CBUS_CTRL4_drv_str_shift                                             (9)
#define CBUS_TX_CBUS_CTRL4_drv_str_mask                                              (0x00000600)
#define CBUS_TX_CBUS_CTRL4_drv_str(data)                                             (0x00000600&((data)<<9))
#define CBUS_TX_CBUS_CTRL4_drv_str_src(data)                                         ((0x00000600&(data))>>9)
#define CBUS_TX_CBUS_CTRL4_get_drv_str(data)                                         ((0x00000600&(data))>>9)
#define CBUS_TX_CBUS_CTRL4_drv_hi_cbus_shift                                         (3)
#define CBUS_TX_CBUS_CTRL4_drv_hi_cbus_mask                                          (0x000001F8)
#define CBUS_TX_CBUS_CTRL4_drv_hi_cbus(data)                                         (0x000001F8&((data)<<3))
#define CBUS_TX_CBUS_CTRL4_drv_hi_cbus_src(data)                                     ((0x000001F8&(data))>>3)
#define CBUS_TX_CBUS_CTRL4_get_drv_hi_cbus(data)                                     ((0x000001F8&(data))>>3)
#define CBUS_TX_CBUS_CTRL4_retry_lv_shift                                            (0)
#define CBUS_TX_CBUS_CTRL4_retry_lv_mask                                             (0x00000007)
#define CBUS_TX_CBUS_CTRL4_retry_lv(data)                                            (0x00000007&((data)<<0))
#define CBUS_TX_CBUS_CTRL4_retry_lv_src(data)                                        ((0x00000007&(data))>>0)
#define CBUS_TX_CBUS_CTRL4_get_retry_lv(data)                                        ((0x00000007&(data))>>0)


#define CBUS_TX_CBUS_CTRL5                                                           0x98037B14
#define CBUS_TX_CBUS_CTRL5_reg_addr                                                  "0xD8037B14"
#define CBUS_TX_CBUS_CTRL5_reg                                                       0xD8037B14
#define set_CBUS_TX_CBUS_CTRL5_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL5_reg)=data)
#define get_CBUS_TX_CBUS_CTRL5_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL5_reg))
#define CBUS_TX_CBUS_CTRL5_inst_adr                                                  "0x00C5"
#define CBUS_TX_CBUS_CTRL5_inst                                                      0x00C5
#define CBUS_TX_CBUS_CTRL5_burst_wait_shift                                          (28)
#define CBUS_TX_CBUS_CTRL5_burst_wait_mask                                           (0xF0000000)
#define CBUS_TX_CBUS_CTRL5_burst_wait(data)                                          (0xF0000000&((data)<<28))
#define CBUS_TX_CBUS_CTRL5_burst_wait_src(data)                                      ((0xF0000000&(data))>>28)
#define CBUS_TX_CBUS_CTRL5_get_burst_wait(data)                                      ((0xF0000000&(data))>>28)
#define CBUS_TX_CBUS_CTRL5_fw_rxsense_en_shift                                       (27)
#define CBUS_TX_CBUS_CTRL5_fw_rxsense_en_mask                                        (0x08000000)
#define CBUS_TX_CBUS_CTRL5_fw_rxsense_en(data)                                       (0x08000000&((data)<<27))
#define CBUS_TX_CBUS_CTRL5_fw_rxsense_en_src(data)                                   ((0x08000000&(data))>>27)
#define CBUS_TX_CBUS_CTRL5_get_fw_rxsense_en(data)                                   ((0x08000000&(data))>>27)
#define CBUS_TX_CBUS_CTRL5_mhl_conn_shift                                            (26)
#define CBUS_TX_CBUS_CTRL5_mhl_conn_mask                                             (0x04000000)
#define CBUS_TX_CBUS_CTRL5_mhl_conn(data)                                            (0x04000000&((data)<<26))
#define CBUS_TX_CBUS_CTRL5_mhl_conn_src(data)                                        ((0x04000000&(data))>>26)
#define CBUS_TX_CBUS_CTRL5_get_mhl_conn(data)                                        ((0x04000000&(data))>>26)
#define CBUS_TX_CBUS_CTRL5_fw_path_en_shift                                          (25)
#define CBUS_TX_CBUS_CTRL5_fw_path_en_mask                                           (0x02000000)
#define CBUS_TX_CBUS_CTRL5_fw_path_en(data)                                          (0x02000000&((data)<<25))
#define CBUS_TX_CBUS_CTRL5_fw_path_en_src(data)                                      ((0x02000000&(data))>>25)
#define CBUS_TX_CBUS_CTRL5_get_fw_path_en(data)                                      ((0x02000000&(data))>>25)
#define CBUS_TX_CBUS_CTRL5_send_path_shift                                           (24)
#define CBUS_TX_CBUS_CTRL5_send_path_mask                                            (0x01000000)
#define CBUS_TX_CBUS_CTRL5_send_path(data)                                           (0x01000000&((data)<<24))
#define CBUS_TX_CBUS_CTRL5_send_path_src(data)                                       ((0x01000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL5_get_send_path(data)                                       ((0x01000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL5_req_opp_flt_shift                                         (16)
#define CBUS_TX_CBUS_CTRL5_req_opp_flt_mask                                          (0x00FF0000)
#define CBUS_TX_CBUS_CTRL5_req_opp_flt(data)                                         (0x00FF0000&((data)<<16))
#define CBUS_TX_CBUS_CTRL5_req_opp_flt_src(data)                                     ((0x00FF0000&(data))>>16)
#define CBUS_TX_CBUS_CTRL5_get_req_opp_flt(data)                                     ((0x00FF0000&(data))>>16)
#define CBUS_TX_CBUS_CTRL5_req_opp_int_shift                                         (14)
#define CBUS_TX_CBUS_CTRL5_req_opp_int_mask                                          (0x0000C000)
#define CBUS_TX_CBUS_CTRL5_req_opp_int(data)                                         (0x0000C000&((data)<<14))
#define CBUS_TX_CBUS_CTRL5_req_opp_int_src(data)                                     ((0x0000C000&(data))>>14)
#define CBUS_TX_CBUS_CTRL5_get_req_opp_int(data)                                     ((0x0000C000&(data))>>14)
#define CBUS_TX_CBUS_CTRL5_chk_point_shift                                           (8)
#define CBUS_TX_CBUS_CTRL5_chk_point_mask                                            (0x00003F00)
#define CBUS_TX_CBUS_CTRL5_chk_point(data)                                           (0x00003F00&((data)<<8))
#define CBUS_TX_CBUS_CTRL5_chk_point_src(data)                                       ((0x00003F00&(data))>>8)
#define CBUS_TX_CBUS_CTRL5_get_chk_point(data)                                       ((0x00003F00&(data))>>8)
#define CBUS_TX_CBUS_CTRL5_avoid_conf_shift                                          (4)
#define CBUS_TX_CBUS_CTRL5_avoid_conf_mask                                           (0x00000010)
#define CBUS_TX_CBUS_CTRL5_avoid_conf(data)                                          (0x00000010&((data)<<4))
#define CBUS_TX_CBUS_CTRL5_avoid_conf_src(data)                                      ((0x00000010&(data))>>4)
#define CBUS_TX_CBUS_CTRL5_get_avoid_conf(data)                                      ((0x00000010&(data))>>4)
#define CBUS_TX_CBUS_CTRL5_cbus_imp_fw_en_shift                                      (2)
#define CBUS_TX_CBUS_CTRL5_cbus_imp_fw_en_mask                                       (0x00000004)
#define CBUS_TX_CBUS_CTRL5_cbus_imp_fw_en(data)                                      (0x00000004&((data)<<2))
#define CBUS_TX_CBUS_CTRL5_cbus_imp_fw_en_src(data)                                  ((0x00000004&(data))>>2)
#define CBUS_TX_CBUS_CTRL5_get_cbus_imp_fw_en(data)                                  ((0x00000004&(data))>>2)
#define CBUS_TX_CBUS_CTRL5_z_5k_on_shift                                             (1)
#define CBUS_TX_CBUS_CTRL5_z_5k_on_mask                                              (0x00000002)
#define CBUS_TX_CBUS_CTRL5_z_5k_on(data)                                             (0x00000002&((data)<<1))
#define CBUS_TX_CBUS_CTRL5_z_5k_on_src(data)                                         ((0x00000002&(data))>>1)
#define CBUS_TX_CBUS_CTRL5_get_z_5k_on(data)                                         ((0x00000002&(data))>>1)
#define CBUS_TX_CBUS_CTRL5_z_10k_on_shift                                            (0)
#define CBUS_TX_CBUS_CTRL5_z_10k_on_mask                                             (0x00000001)
#define CBUS_TX_CBUS_CTRL5_z_10k_on(data)                                            (0x00000001&((data)<<0))
#define CBUS_TX_CBUS_CTRL5_z_10k_on_src(data)                                        ((0x00000001&(data))>>0)
#define CBUS_TX_CBUS_CTRL5_get_z_10k_on(data)                                        ((0x00000001&(data))>>0)


#define CBUS_TX_CBUS_CTRL6                                                           0x98037B18
#define CBUS_TX_CBUS_CTRL6_reg_addr                                                  "0xD8037B18"
#define CBUS_TX_CBUS_CTRL6_reg                                                       0xD8037B18
#define set_CBUS_TX_CBUS_CTRL6_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL6_reg)=data)
#define get_CBUS_TX_CBUS_CTRL6_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL6_reg))
#define CBUS_TX_CBUS_CTRL6_inst_adr                                                  "0x00C6"
#define CBUS_TX_CBUS_CTRL6_inst                                                      0x00C6
#define CBUS_TX_CBUS_CTRL6_wake_pulse_width1_shift                                   (30)
#define CBUS_TX_CBUS_CTRL6_wake_pulse_width1_mask                                    (0xC0000000)
#define CBUS_TX_CBUS_CTRL6_wake_pulse_width1(data)                                   (0xC0000000&((data)<<30))
#define CBUS_TX_CBUS_CTRL6_wake_pulse_width1_src(data)                               ((0xC0000000&(data))>>30)
#define CBUS_TX_CBUS_CTRL6_get_wake_pulse_width1(data)                               ((0xC0000000&(data))>>30)
#define CBUS_TX_CBUS_CTRL6_dis_chk_high_shift                                        (27)
#define CBUS_TX_CBUS_CTRL6_dis_chk_high_mask                                         (0x38000000)
#define CBUS_TX_CBUS_CTRL6_dis_chk_high(data)                                        (0x38000000&((data)<<27))
#define CBUS_TX_CBUS_CTRL6_dis_chk_high_src(data)                                    ((0x38000000&(data))>>27)
#define CBUS_TX_CBUS_CTRL6_get_dis_chk_high(data)                                    ((0x38000000&(data))>>27)
#define CBUS_TX_CBUS_CTRL6_wake_pulse_width2_shift                                   (22)
#define CBUS_TX_CBUS_CTRL6_wake_pulse_width2_mask                                    (0x03C00000)
#define CBUS_TX_CBUS_CTRL6_wake_pulse_width2(data)                                   (0x03C00000&((data)<<22))
#define CBUS_TX_CBUS_CTRL6_wake_pulse_width2_src(data)                               ((0x03C00000&(data))>>22)
#define CBUS_TX_CBUS_CTRL6_get_wake_pulse_width2(data)                               ((0x03C00000&(data))>>22)
#define CBUS_TX_CBUS_CTRL6_src_cbus_float_shift                                      (18)
#define CBUS_TX_CBUS_CTRL6_src_cbus_float_mask                                       (0x003C0000)
#define CBUS_TX_CBUS_CTRL6_src_cbus_float(data)                                      (0x003C0000&((data)<<18))
#define CBUS_TX_CBUS_CTRL6_src_cbus_float_src(data)                                  ((0x003C0000&(data))>>18)
#define CBUS_TX_CBUS_CTRL6_get_src_cbus_float(data)                                  ((0x003C0000&(data))>>18)
#define CBUS_TX_CBUS_CTRL6_src_pulse_width_shift                                     (11)
#define CBUS_TX_CBUS_CTRL6_src_pulse_width_mask                                      (0x0003F800)
#define CBUS_TX_CBUS_CTRL6_src_pulse_width(data)                                     (0x0003F800&((data)<<11))
#define CBUS_TX_CBUS_CTRL6_src_pulse_width_src(data)                                 ((0x0003F800&(data))>>11)
#define CBUS_TX_CBUS_CTRL6_get_src_pulse_width(data)                                 ((0x0003F800&(data))>>11)
#define CBUS_TX_CBUS_CTRL6_src_conn_shift                                            (9)
#define CBUS_TX_CBUS_CTRL6_src_conn_mask                                             (0x00000600)
#define CBUS_TX_CBUS_CTRL6_src_conn(data)                                            (0x00000600&((data)<<9))
#define CBUS_TX_CBUS_CTRL6_src_conn_src(data)                                        ((0x00000600&(data))>>9)
#define CBUS_TX_CBUS_CTRL6_get_src_conn(data)                                        ((0x00000600&(data))>>9)
#define CBUS_TX_CBUS_CTRL6_rxsense_deglitch_shift                                    (0)
#define CBUS_TX_CBUS_CTRL6_rxsense_deglitch_mask                                     (0x000001FF)
#define CBUS_TX_CBUS_CTRL6_rxsense_deglitch(data)                                    (0x000001FF&((data)<<0))
#define CBUS_TX_CBUS_CTRL6_rxsense_deglitch_src(data)                                ((0x000001FF&(data))>>0)
#define CBUS_TX_CBUS_CTRL6_get_rxsense_deglitch(data)                                ((0x000001FF&(data))>>0)


#define CBUS_TX_CBUS_CTRL7                                                           0x98037B1C
#define CBUS_TX_CBUS_CTRL7_reg_addr                                                  "0xD8037B1C"
#define CBUS_TX_CBUS_CTRL7_reg                                                       0xD8037B1C
#define set_CBUS_TX_CBUS_CTRL7_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL7_reg)=data)
#define get_CBUS_TX_CBUS_CTRL7_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL7_reg))
#define CBUS_TX_CBUS_CTRL7_inst_adr                                                  "0x00C7"
#define CBUS_TX_CBUS_CTRL7_inst                                                      0x00C7
#define CBUS_TX_CBUS_CTRL7_wake_to_discover_shift                                    (20)
#define CBUS_TX_CBUS_CTRL7_wake_to_discover_mask                                     (0x3FF00000)
#define CBUS_TX_CBUS_CTRL7_wake_to_discover(data)                                    (0x3FF00000&((data)<<20))
#define CBUS_TX_CBUS_CTRL7_wake_to_discover_src(data)                                ((0x3FF00000&(data))>>20)
#define CBUS_TX_CBUS_CTRL7_get_wake_to_discover(data)                                ((0x3FF00000&(data))>>20)
#define CBUS_TX_CBUS_CTRL7_src_vbus_cbus_stable_shift                                (10)
#define CBUS_TX_CBUS_CTRL7_src_vbus_cbus_stable_mask                                 (0x000FFC00)
#define CBUS_TX_CBUS_CTRL7_src_vbus_cbus_stable(data)                                (0x000FFC00&((data)<<10))
#define CBUS_TX_CBUS_CTRL7_src_vbus_cbus_stable_src(data)                            ((0x000FFC00&(data))>>10)
#define CBUS_TX_CBUS_CTRL7_get_src_vbus_cbus_stable(data)                            ((0x000FFC00&(data))>>10)
#define CBUS_TX_CBUS_CTRL7_vbus_out_to_stable_shift                                  (0)
#define CBUS_TX_CBUS_CTRL7_vbus_out_to_stable_mask                                   (0x000003FF)
#define CBUS_TX_CBUS_CTRL7_vbus_out_to_stable(data)                                  (0x000003FF&((data)<<0))
#define CBUS_TX_CBUS_CTRL7_vbus_out_to_stable_src(data)                              ((0x000003FF&(data))>>0)
#define CBUS_TX_CBUS_CTRL7_get_vbus_out_to_stable(data)                              ((0x000003FF&(data))>>0)


#define CBUS_TX_CBUS_CTRL8                                                           0x98037B20
#define CBUS_TX_CBUS_CTRL8_reg_addr                                                  "0xD8037B20"
#define CBUS_TX_CBUS_CTRL8_reg                                                       0xD8037B20
#define set_CBUS_TX_CBUS_CTRL8_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL8_reg)=data)
#define get_CBUS_TX_CBUS_CTRL8_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL8_reg))
#define CBUS_TX_CBUS_CTRL8_inst_adr                                                  "0x00C8"
#define CBUS_TX_CBUS_CTRL8_inst                                                      0x00C8
#define CBUS_TX_CBUS_CTRL8_req_cont_shift                                            (24)
#define CBUS_TX_CBUS_CTRL8_req_cont_mask                                             (0xFF000000)
#define CBUS_TX_CBUS_CTRL8_req_cont(data)                                            (0xFF000000&((data)<<24))
#define CBUS_TX_CBUS_CTRL8_req_cont_src(data)                                        ((0xFF000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL8_get_req_cont(data)                                        ((0xFF000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL8_src_arbitrate_shift                                       (21)
#define CBUS_TX_CBUS_CTRL8_src_arbitrate_mask                                        (0x00E00000)
#define CBUS_TX_CBUS_CTRL8_src_arbitrate(data)                                       (0x00E00000&((data)<<21))
#define CBUS_TX_CBUS_CTRL8_src_arbitrate_src(data)                                   ((0x00E00000&(data))>>21)
#define CBUS_TX_CBUS_CTRL8_get_src_arbitrate(data)                                   ((0x00E00000&(data))>>21)
#define CBUS_TX_CBUS_CTRL8_pulse_count_shift                                         (16)
#define CBUS_TX_CBUS_CTRL8_pulse_count_mask                                          (0x001F0000)
#define CBUS_TX_CBUS_CTRL8_pulse_count(data)                                         (0x001F0000&((data)<<16))
#define CBUS_TX_CBUS_CTRL8_pulse_count_src(data)                                     ((0x001F0000&(data))>>16)
#define CBUS_TX_CBUS_CTRL8_get_pulse_count(data)                                     ((0x001F0000&(data))>>16)
#define CBUS_TX_CBUS_CTRL8_wait_sink_float_shift                                     (15)
#define CBUS_TX_CBUS_CTRL8_wait_sink_float_mask                                      (0x00008000)
#define CBUS_TX_CBUS_CTRL8_wait_sink_float(data)                                     (0x00008000&((data)<<15))
#define CBUS_TX_CBUS_CTRL8_wait_sink_float_src(data)                                 ((0x00008000&(data))>>15)
#define CBUS_TX_CBUS_CTRL8_get_wait_sink_float(data)                                 ((0x00008000&(data))>>15)
#define CBUS_TX_CBUS_CTRL8_sink_cbus_float_shift                                     (13)
#define CBUS_TX_CBUS_CTRL8_sink_cbus_float_mask                                      (0x00006000)
#define CBUS_TX_CBUS_CTRL8_sink_cbus_float(data)                                     (0x00006000&((data)<<13))
#define CBUS_TX_CBUS_CTRL8_sink_cbus_float_src(data)                                 ((0x00006000&(data))>>13)
#define CBUS_TX_CBUS_CTRL8_get_sink_cbus_float(data)                                 ((0x00006000&(data))>>13)
#define CBUS_TX_CBUS_CTRL8_rxsense_chk_shift                                         (0)
#define CBUS_TX_CBUS_CTRL8_rxsense_chk_mask                                          (0x000003FF)
#define CBUS_TX_CBUS_CTRL8_rxsense_chk(data)                                         (0x000003FF&((data)<<0))
#define CBUS_TX_CBUS_CTRL8_rxsense_chk_src(data)                                     ((0x000003FF&(data))>>0)
#define CBUS_TX_CBUS_CTRL8_get_rxsense_chk(data)                                     ((0x000003FF&(data))>>0)


#define CBUS_TX_CBUS_STATUS                                                          0x98037B24
#define CBUS_TX_CBUS_STATUS_reg_addr                                                 "0xD8037B24"
#define CBUS_TX_CBUS_STATUS_reg                                                      0xD8037B24
#define set_CBUS_TX_CBUS_STATUS_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_STATUS_reg)=data)
#define get_CBUS_TX_CBUS_STATUS_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_STATUS_reg))
#define CBUS_TX_CBUS_STATUS_inst_adr                                                 "0x00C9"
#define CBUS_TX_CBUS_STATUS_inst                                                     0x00C9
#define CBUS_TX_CBUS_STATUS_retry_flag_shift                                         (18)
#define CBUS_TX_CBUS_STATUS_retry_flag_mask                                          (0x00040000)
#define CBUS_TX_CBUS_STATUS_retry_flag(data)                                         (0x00040000&((data)<<18))
#define CBUS_TX_CBUS_STATUS_retry_flag_src(data)                                     ((0x00040000&(data))>>18)
#define CBUS_TX_CBUS_STATUS_get_retry_flag(data)                                     ((0x00040000&(data))>>18)
#define CBUS_TX_CBUS_STATUS_link_err_shift                                           (17)
#define CBUS_TX_CBUS_STATUS_link_err_mask                                            (0x00020000)
#define CBUS_TX_CBUS_STATUS_link_err(data)                                           (0x00020000&((data)<<17))
#define CBUS_TX_CBUS_STATUS_link_err_src(data)                                       ((0x00020000&(data))>>17)
#define CBUS_TX_CBUS_STATUS_get_link_err(data)                                       ((0x00020000&(data))>>17)
#define CBUS_TX_CBUS_STATUS_conflict_err_shift                                       (16)
#define CBUS_TX_CBUS_STATUS_conflict_err_mask                                        (0x00010000)
#define CBUS_TX_CBUS_STATUS_conflict_err(data)                                       (0x00010000&((data)<<16))
#define CBUS_TX_CBUS_STATUS_conflict_err_src(data)                                   ((0x00010000&(data))>>16)
#define CBUS_TX_CBUS_STATUS_get_conflict_err(data)                                   ((0x00010000&(data))>>16)
#define CBUS_TX_CBUS_STATUS_sync_bit_time_shift                                      (8)
#define CBUS_TX_CBUS_STATUS_sync_bit_time_mask                                       (0x0000FF00)
#define CBUS_TX_CBUS_STATUS_sync_bit_time(data)                                      (0x0000FF00&((data)<<8))
#define CBUS_TX_CBUS_STATUS_sync_bit_time_src(data)                                  ((0x0000FF00&(data))>>8)
#define CBUS_TX_CBUS_STATUS_get_sync_bit_time(data)                                  ((0x0000FF00&(data))>>8)
#define CBUS_TX_CBUS_STATUS_discovery_st_shift                                       (1)
#define CBUS_TX_CBUS_STATUS_discovery_st_mask                                        (0x0000001E)
#define CBUS_TX_CBUS_STATUS_discovery_st(data)                                       (0x0000001E&((data)<<1))
#define CBUS_TX_CBUS_STATUS_discovery_st_src(data)                                   ((0x0000001E&(data))>>1)
#define CBUS_TX_CBUS_STATUS_get_discovery_st(data)                                   ((0x0000001E&(data))>>1)
#define CBUS_TX_CBUS_STATUS_write_data_shift                                         (0)
#define CBUS_TX_CBUS_STATUS_write_data_mask                                          (0x00000001)
#define CBUS_TX_CBUS_STATUS_write_data(data)                                         (0x00000001&((data)<<0))
#define CBUS_TX_CBUS_STATUS_write_data_src(data)                                     ((0x00000001&(data))>>0)
#define CBUS_TX_CBUS_STATUS_get_write_data(data)                                     ((0x00000001&(data))>>0)


#define CBUS_TX_FW0_CMD_INF                                                          0x98037B28
#define CBUS_TX_FW0_CMD_INF_reg_addr                                                 "0xD8037B28"
#define CBUS_TX_FW0_CMD_INF_reg                                                      0xD8037B28
#define set_CBUS_TX_FW0_CMD_INF_reg(data)   (*((volatile unsigned int*) CBUS_TX_FW0_CMD_INF_reg)=data)
#define get_CBUS_TX_FW0_CMD_INF_reg   (*((volatile unsigned int*) CBUS_TX_FW0_CMD_INF_reg))
#define CBUS_TX_FW0_CMD_INF_inst_adr                                                 "0x00CA"
#define CBUS_TX_FW0_CMD_INF_inst                                                     0x00CA
#define CBUS_TX_FW0_CMD_INF_fw0_req_shift                                            (31)
#define CBUS_TX_FW0_CMD_INF_fw0_req_mask                                             (0x80000000)
#define CBUS_TX_FW0_CMD_INF_fw0_req(data)                                            (0x80000000&((data)<<31))
#define CBUS_TX_FW0_CMD_INF_fw0_req_src(data)                                        ((0x80000000&(data))>>31)
#define CBUS_TX_FW0_CMD_INF_get_fw0_req(data)                                        ((0x80000000&(data))>>31)
#define CBUS_TX_FW0_CMD_INF_fw0_tx_case_shift                                        (28)
#define CBUS_TX_FW0_CMD_INF_fw0_tx_case_mask                                         (0x70000000)
#define CBUS_TX_FW0_CMD_INF_fw0_tx_case(data)                                        (0x70000000&((data)<<28))
#define CBUS_TX_FW0_CMD_INF_fw0_tx_case_src(data)                                    ((0x70000000&(data))>>28)
#define CBUS_TX_FW0_CMD_INF_get_fw0_tx_case(data)                                    ((0x70000000&(data))>>28)
#define CBUS_TX_FW0_CMD_INF_fw0_wait_case_shift                                      (26)
#define CBUS_TX_FW0_CMD_INF_fw0_wait_case_mask                                       (0x0C000000)
#define CBUS_TX_FW0_CMD_INF_fw0_wait_case(data)                                      (0x0C000000&((data)<<26))
#define CBUS_TX_FW0_CMD_INF_fw0_wait_case_src(data)                                  ((0x0C000000&(data))>>26)
#define CBUS_TX_FW0_CMD_INF_get_fw0_wait_case(data)                                  ((0x0C000000&(data))>>26)
#define CBUS_TX_FW0_CMD_INF_fw0_head_shift                                           (24)
#define CBUS_TX_FW0_CMD_INF_fw0_head_mask                                            (0x03000000)
#define CBUS_TX_FW0_CMD_INF_fw0_head(data)                                           (0x03000000&((data)<<24))
#define CBUS_TX_FW0_CMD_INF_fw0_head_src(data)                                       ((0x03000000&(data))>>24)
#define CBUS_TX_FW0_CMD_INF_get_fw0_head(data)                                       ((0x03000000&(data))>>24)
#define CBUS_TX_FW0_CMD_INF_fw0_fifo_clr_shift                                       (23)
#define CBUS_TX_FW0_CMD_INF_fw0_fifo_clr_mask                                        (0x00800000)
#define CBUS_TX_FW0_CMD_INF_fw0_fifo_clr(data)                                       (0x00800000&((data)<<23))
#define CBUS_TX_FW0_CMD_INF_fw0_fifo_clr_src(data)                                   ((0x00800000&(data))>>23)
#define CBUS_TX_FW0_CMD_INF_get_fw0_fifo_clr(data)                                   ((0x00800000&(data))>>23)


#define CBUS_TX_FW0_CMD                                                              0x98037B2C
#define CBUS_TX_FW0_CMD_reg_addr                                                     "0xD8037B2C"
#define CBUS_TX_FW0_CMD_reg                                                          0xD8037B2C
#define set_CBUS_TX_FW0_CMD_reg(data)   (*((volatile unsigned int*) CBUS_TX_FW0_CMD_reg)=data)
#define get_CBUS_TX_FW0_CMD_reg   (*((volatile unsigned int*) CBUS_TX_FW0_CMD_reg))
#define CBUS_TX_FW0_CMD_inst_adr                                                     "0x00CB"
#define CBUS_TX_FW0_CMD_inst                                                         0x00CB
#define CBUS_TX_FW0_CMD_fw0_cmd2_shift                                               (16)
#define CBUS_TX_FW0_CMD_fw0_cmd2_mask                                                (0x00FF0000)
#define CBUS_TX_FW0_CMD_fw0_cmd2(data)                                               (0x00FF0000&((data)<<16))
#define CBUS_TX_FW0_CMD_fw0_cmd2_src(data)                                           ((0x00FF0000&(data))>>16)
#define CBUS_TX_FW0_CMD_get_fw0_cmd2(data)                                           ((0x00FF0000&(data))>>16)
#define CBUS_TX_FW0_CMD_fw0_offset_shift                                             (8)
#define CBUS_TX_FW0_CMD_fw0_offset_mask                                              (0x0000FF00)
#define CBUS_TX_FW0_CMD_fw0_offset(data)                                             (0x0000FF00&((data)<<8))
#define CBUS_TX_FW0_CMD_fw0_offset_src(data)                                         ((0x0000FF00&(data))>>8)
#define CBUS_TX_FW0_CMD_get_fw0_offset(data)                                         ((0x0000FF00&(data))>>8)
#define CBUS_TX_FW0_CMD_fw0_cmd1_shift                                               (0)
#define CBUS_TX_FW0_CMD_fw0_cmd1_mask                                                (0x000000FF)
#define CBUS_TX_FW0_CMD_fw0_cmd1(data)                                               (0x000000FF&((data)<<0))
#define CBUS_TX_FW0_CMD_fw0_cmd1_src(data)                                           ((0x000000FF&(data))>>0)
#define CBUS_TX_FW0_CMD_get_fw0_cmd1(data)                                           ((0x000000FF&(data))>>0)


#define CBUS_TX_FW0_STATUS                                                           0x98037B30
#define CBUS_TX_FW0_STATUS_reg_addr                                                  "0xD8037B30"
#define CBUS_TX_FW0_STATUS_reg                                                       0xD8037B30
#define set_CBUS_TX_FW0_STATUS_reg(data)   (*((volatile unsigned int*) CBUS_TX_FW0_STATUS_reg)=data)
#define get_CBUS_TX_FW0_STATUS_reg   (*((volatile unsigned int*) CBUS_TX_FW0_STATUS_reg))
#define CBUS_TX_FW0_STATUS_inst_adr                                                  "0x00CC"
#define CBUS_TX_FW0_STATUS_inst                                                      0x00CC
#define CBUS_TX_FW0_STATUS_fw0_cmd_rcv_shift                                         (24)
#define CBUS_TX_FW0_STATUS_fw0_cmd_rcv_mask                                          (0xFF000000)
#define CBUS_TX_FW0_STATUS_fw0_cmd_rcv(data)                                         (0xFF000000&((data)<<24))
#define CBUS_TX_FW0_STATUS_fw0_cmd_rcv_src(data)                                     ((0xFF000000&(data))>>24)
#define CBUS_TX_FW0_STATUS_get_fw0_cmd_rcv(data)                                     ((0xFF000000&(data))>>24)
#define CBUS_TX_FW0_STATUS_fw0_data_rcv_shift                                        (16)
#define CBUS_TX_FW0_STATUS_fw0_data_rcv_mask                                         (0x00FF0000)
#define CBUS_TX_FW0_STATUS_fw0_data_rcv(data)                                        (0x00FF0000&((data)<<16))
#define CBUS_TX_FW0_STATUS_fw0_data_rcv_src(data)                                    ((0x00FF0000&(data))>>16)
#define CBUS_TX_FW0_STATUS_get_fw0_data_rcv(data)                                    ((0x00FF0000&(data))>>16)
#define CBUS_TX_FW0_STATUS_fw0_rcv_err_shift                                         (15)
#define CBUS_TX_FW0_STATUS_fw0_rcv_err_mask                                          (0x00008000)
#define CBUS_TX_FW0_STATUS_fw0_rcv_err(data)                                         (0x00008000&((data)<<15))
#define CBUS_TX_FW0_STATUS_fw0_rcv_err_src(data)                                     ((0x00008000&(data))>>15)
#define CBUS_TX_FW0_STATUS_get_fw0_rcv_err(data)                                     ((0x00008000&(data))>>15)
#define CBUS_TX_FW0_STATUS_fw0_fifo_full_shift                                       (14)
#define CBUS_TX_FW0_STATUS_fw0_fifo_full_mask                                        (0x00004000)
#define CBUS_TX_FW0_STATUS_fw0_fifo_full(data)                                       (0x00004000&((data)<<14))
#define CBUS_TX_FW0_STATUS_fw0_fifo_full_src(data)                                   ((0x00004000&(data))>>14)
#define CBUS_TX_FW0_STATUS_get_fw0_fifo_full(data)                                   ((0x00004000&(data))>>14)
#define CBUS_TX_FW0_STATUS_fw0_fifo_empty_shift                                      (13)
#define CBUS_TX_FW0_STATUS_fw0_fifo_empty_mask                                       (0x00002000)
#define CBUS_TX_FW0_STATUS_fw0_fifo_empty(data)                                      (0x00002000&((data)<<13))
#define CBUS_TX_FW0_STATUS_fw0_fifo_empty_src(data)                                  ((0x00002000&(data))>>13)
#define CBUS_TX_FW0_STATUS_get_fw0_fifo_empty(data)                                  ((0x00002000&(data))>>13)
#define CBUS_TX_FW0_STATUS_fw0_fifo_len_shift                                        (8)
#define CBUS_TX_FW0_STATUS_fw0_fifo_len_mask                                         (0x00001F00)
#define CBUS_TX_FW0_STATUS_fw0_fifo_len(data)                                        (0x00001F00&((data)<<8))
#define CBUS_TX_FW0_STATUS_fw0_fifo_len_src(data)                                    ((0x00001F00&(data))>>8)
#define CBUS_TX_FW0_STATUS_get_fw0_fifo_len(data)                                    ((0x00001F00&(data))>>8)
#define CBUS_TX_FW0_STATUS_fw0_rty_ovr_shift                                         (7)
#define CBUS_TX_FW0_STATUS_fw0_rty_ovr_mask                                          (0x00000080)
#define CBUS_TX_FW0_STATUS_fw0_rty_ovr(data)                                         (0x00000080&((data)<<7))
#define CBUS_TX_FW0_STATUS_fw0_rty_ovr_src(data)                                     ((0x00000080&(data))>>7)
#define CBUS_TX_FW0_STATUS_get_fw0_rty_ovr(data)                                     ((0x00000080&(data))>>7)
#define CBUS_TX_FW0_STATUS_msc_hpd_shift                                             (6)
#define CBUS_TX_FW0_STATUS_msc_hpd_mask                                              (0x00000040)
#define CBUS_TX_FW0_STATUS_msc_hpd(data)                                             (0x00000040&((data)<<6))
#define CBUS_TX_FW0_STATUS_msc_hpd_src(data)                                         ((0x00000040&(data))>>6)
#define CBUS_TX_FW0_STATUS_get_msc_hpd(data)                                         ((0x00000040&(data))>>6)
#define CBUS_TX_FW0_STATUS_rcv_burst_len_shift                                       (1)
#define CBUS_TX_FW0_STATUS_rcv_burst_len_mask                                        (0x0000003E)
#define CBUS_TX_FW0_STATUS_rcv_burst_len(data)                                       (0x0000003E&((data)<<1))
#define CBUS_TX_FW0_STATUS_rcv_burst_len_src(data)                                   ((0x0000003E&(data))>>1)
#define CBUS_TX_FW0_STATUS_get_rcv_burst_len(data)                                   ((0x0000003E&(data))>>1)
#define CBUS_TX_FW0_STATUS_write_data_shift                                          (0)
#define CBUS_TX_FW0_STATUS_write_data_mask                                           (0x00000001)
#define CBUS_TX_FW0_STATUS_write_data(data)                                          (0x00000001&((data)<<0))
#define CBUS_TX_FW0_STATUS_write_data_src(data)                                      ((0x00000001&(data))>>0)
#define CBUS_TX_FW0_STATUS_get_write_data(data)                                      ((0x00000001&(data))>>0)


#define CBUS_TX_FW0_WDATA                                                            0x98037B34
#define CBUS_TX_FW0_WDATA_reg_addr                                                   "0xD8037B34"
#define CBUS_TX_FW0_WDATA_reg                                                        0xD8037B34
#define set_CBUS_TX_FW0_WDATA_reg(data)   (*((volatile unsigned int*) CBUS_TX_FW0_WDATA_reg)=data)
#define get_CBUS_TX_FW0_WDATA_reg   (*((volatile unsigned int*) CBUS_TX_FW0_WDATA_reg))
#define CBUS_TX_FW0_WDATA_inst_adr                                                   "0x00CD"
#define CBUS_TX_FW0_WDATA_inst                                                       0x00CD
#define CBUS_TX_FW0_WDATA_fw0_data_shift                                             (0)
#define CBUS_TX_FW0_WDATA_fw0_data_mask                                              (0x000000FF)
#define CBUS_TX_FW0_WDATA_fw0_data(data)                                             (0x000000FF&((data)<<0))
#define CBUS_TX_FW0_WDATA_fw0_data_src(data)                                         ((0x000000FF&(data))>>0)
#define CBUS_TX_FW0_WDATA_get_fw0_data(data)                                         ((0x000000FF&(data))>>0)


#define CBUS_TX_FW0_RDATA                                                            0x98037B38
#define CBUS_TX_FW0_RDATA_reg_addr                                                   "0xD8037B38"
#define CBUS_TX_FW0_RDATA_reg                                                        0xD8037B38
#define set_CBUS_TX_FW0_RDATA_reg(data)   (*((volatile unsigned int*) CBUS_TX_FW0_RDATA_reg)=data)
#define get_CBUS_TX_FW0_RDATA_reg   (*((volatile unsigned int*) CBUS_TX_FW0_RDATA_reg))
#define CBUS_TX_FW0_RDATA_inst_adr                                                   "0x00CE"
#define CBUS_TX_FW0_RDATA_inst                                                       0x00CE
#define CBUS_TX_FW0_RDATA_fw0_rdata_shift                                            (0)
#define CBUS_TX_FW0_RDATA_fw0_rdata_mask                                             (0x000000FF)
#define CBUS_TX_FW0_RDATA_fw0_rdata(data)                                            (0x000000FF&((data)<<0))
#define CBUS_TX_FW0_RDATA_fw0_rdata_src(data)                                        ((0x000000FF&(data))>>0)
#define CBUS_TX_FW0_RDATA_get_fw0_rdata(data)                                        ((0x000000FF&(data))>>0)


#define CBUS_TX_DEVCAP_OFFSET                                                        0x98037B3C
#define CBUS_TX_DEVCAP_OFFSET_reg_addr                                               "0xD8037B3C"
#define CBUS_TX_DEVCAP_OFFSET_reg                                                    0xD8037B3C
#define set_CBUS_TX_DEVCAP_OFFSET_reg(data)   (*((volatile unsigned int*) CBUS_TX_DEVCAP_OFFSET_reg)=data)
#define get_CBUS_TX_DEVCAP_OFFSET_reg   (*((volatile unsigned int*) CBUS_TX_DEVCAP_OFFSET_reg))
#define CBUS_TX_DEVCAP_OFFSET_inst_adr                                               "0x00CF"
#define CBUS_TX_DEVCAP_OFFSET_inst                                                   0x00CF
#define CBUS_TX_DEVCAP_OFFSET_scr_offset_shift                                       (24)
#define CBUS_TX_DEVCAP_OFFSET_scr_offset_mask                                        (0xFF000000)
#define CBUS_TX_DEVCAP_OFFSET_scr_offset(data)                                       (0xFF000000&((data)<<24))
#define CBUS_TX_DEVCAP_OFFSET_scr_offset_src(data)                                   ((0xFF000000&(data))>>24)
#define CBUS_TX_DEVCAP_OFFSET_get_scr_offset(data)                                   ((0xFF000000&(data))>>24)
#define CBUS_TX_DEVCAP_OFFSET_sta_offset_shift                                       (16)
#define CBUS_TX_DEVCAP_OFFSET_sta_offset_mask                                        (0x00FF0000)
#define CBUS_TX_DEVCAP_OFFSET_sta_offset(data)                                       (0x00FF0000&((data)<<16))
#define CBUS_TX_DEVCAP_OFFSET_sta_offset_src(data)                                   ((0x00FF0000&(data))>>16)
#define CBUS_TX_DEVCAP_OFFSET_get_sta_offset(data)                                   ((0x00FF0000&(data))>>16)
#define CBUS_TX_DEVCAP_OFFSET_int_offset_shift                                       (8)
#define CBUS_TX_DEVCAP_OFFSET_int_offset_mask                                        (0x0000FF00)
#define CBUS_TX_DEVCAP_OFFSET_int_offset(data)                                       (0x0000FF00&((data)<<8))
#define CBUS_TX_DEVCAP_OFFSET_int_offset_src(data)                                   ((0x0000FF00&(data))>>8)
#define CBUS_TX_DEVCAP_OFFSET_get_int_offset(data)                                   ((0x0000FF00&(data))>>8)
#define CBUS_TX_DEVCAP_OFFSET_cap_offset_shift                                       (0)
#define CBUS_TX_DEVCAP_OFFSET_cap_offset_mask                                        (0x000000FF)
#define CBUS_TX_DEVCAP_OFFSET_cap_offset(data)                                       (0x000000FF&((data)<<0))
#define CBUS_TX_DEVCAP_OFFSET_cap_offset_src(data)                                   ((0x000000FF&(data))>>0)
#define CBUS_TX_DEVCAP_OFFSET_get_cap_offset(data)                                   ((0x000000FF&(data))>>0)


#define CBUS_TX_XDEVCAP_OFFSET                                                       0x98037B40
#define CBUS_TX_XDEVCAP_OFFSET_reg_addr                                              "0xD8037B40"
#define CBUS_TX_XDEVCAP_OFFSET_reg                                                   0xD8037B40
#define set_CBUS_TX_XDEVCAP_OFFSET_reg(data)   (*((volatile unsigned int*) CBUS_TX_XDEVCAP_OFFSET_reg)=data)
#define get_CBUS_TX_XDEVCAP_OFFSET_reg   (*((volatile unsigned int*) CBUS_TX_XDEVCAP_OFFSET_reg))
#define CBUS_TX_XDEVCAP_OFFSET_inst_adr                                              "0x00D0"
#define CBUS_TX_XDEVCAP_OFFSET_inst                                                  0x00D0
#define CBUS_TX_XDEVCAP_OFFSET_xcap_woffset_shift                                    (8)
#define CBUS_TX_XDEVCAP_OFFSET_xcap_woffset_mask                                     (0x0000FF00)
#define CBUS_TX_XDEVCAP_OFFSET_xcap_woffset(data)                                    (0x0000FF00&((data)<<8))
#define CBUS_TX_XDEVCAP_OFFSET_xcap_woffset_src(data)                                ((0x0000FF00&(data))>>8)
#define CBUS_TX_XDEVCAP_OFFSET_get_xcap_woffset(data)                                ((0x0000FF00&(data))>>8)
#define CBUS_TX_XDEVCAP_OFFSET_xcap_offset_shift                                     (0)
#define CBUS_TX_XDEVCAP_OFFSET_xcap_offset_mask                                      (0x000000FF)
#define CBUS_TX_XDEVCAP_OFFSET_xcap_offset(data)                                     (0x000000FF&((data)<<0))
#define CBUS_TX_XDEVCAP_OFFSET_xcap_offset_src(data)                                 ((0x000000FF&(data))>>0)
#define CBUS_TX_XDEVCAP_OFFSET_get_xcap_offset(data)                                 ((0x000000FF&(data))>>0)


#define CBUS_TX_MSC_STATUS                                                           0x98037B44
#define CBUS_TX_MSC_STATUS_reg_addr                                                  "0xD8037B44"
#define CBUS_TX_MSC_STATUS_reg                                                       0xD8037B44
#define set_CBUS_TX_MSC_STATUS_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_STATUS_reg)=data)
#define get_CBUS_TX_MSC_STATUS_reg   (*((volatile unsigned int*) CBUS_TX_MSC_STATUS_reg))
#define CBUS_TX_MSC_STATUS_inst_adr                                                  "0x00D1"
#define CBUS_TX_MSC_STATUS_inst                                                      0x00D1
#define CBUS_TX_MSC_STATUS_que_fsm_shift                                             (28)
#define CBUS_TX_MSC_STATUS_que_fsm_mask                                              (0xF0000000)
#define CBUS_TX_MSC_STATUS_que_fsm(data)                                             (0xF0000000&((data)<<28))
#define CBUS_TX_MSC_STATUS_que_fsm_src(data)                                         ((0xF0000000&(data))>>28)
#define CBUS_TX_MSC_STATUS_get_que_fsm(data)                                         ((0xF0000000&(data))>>28)
#define CBUS_TX_MSC_STATUS_sch_fsm_shift                                             (24)
#define CBUS_TX_MSC_STATUS_sch_fsm_mask                                              (0x0F000000)
#define CBUS_TX_MSC_STATUS_sch_fsm(data)                                             (0x0F000000&((data)<<24))
#define CBUS_TX_MSC_STATUS_sch_fsm_src(data)                                         ((0x0F000000&(data))>>24)
#define CBUS_TX_MSC_STATUS_get_sch_fsm(data)                                         ((0x0F000000&(data))>>24)
#define CBUS_TX_MSC_STATUS_burst_timeout_shift                                       (23)
#define CBUS_TX_MSC_STATUS_burst_timeout_mask                                        (0x00800000)
#define CBUS_TX_MSC_STATUS_burst_timeout(data)                                       (0x00800000&((data)<<23))
#define CBUS_TX_MSC_STATUS_burst_timeout_src(data)                                   ((0x00800000&(data))>>23)
#define CBUS_TX_MSC_STATUS_get_burst_timeout(data)                                   ((0x00800000&(data))>>23)
#define CBUS_TX_MSC_STATUS_write_data_shift                                          (0)
#define CBUS_TX_MSC_STATUS_write_data_mask                                           (0x00000001)
#define CBUS_TX_MSC_STATUS_write_data(data)                                          (0x00000001&((data)<<0))
#define CBUS_TX_MSC_STATUS_write_data_src(data)                                      ((0x00000001&(data))>>0)
#define CBUS_TX_MSC_STATUS_get_write_data(data)                                      ((0x00000001&(data))>>0)


#define CBUS_TX_MSG_STATUS1                                                          0x98037B48
#define CBUS_TX_MSG_STATUS1_reg_addr                                                 "0xD8037B48"
#define CBUS_TX_MSG_STATUS1_reg                                                      0xD8037B48
#define set_CBUS_TX_MSG_STATUS1_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSG_STATUS1_reg)=data)
#define get_CBUS_TX_MSG_STATUS1_reg   (*((volatile unsigned int*) CBUS_TX_MSG_STATUS1_reg))
#define CBUS_TX_MSG_STATUS1_inst_adr                                                 "0x00D2"
#define CBUS_TX_MSG_STATUS1_inst                                                     0x00D2
#define CBUS_TX_MSG_STATUS1_ucpk_rcv_shift                                           (16)
#define CBUS_TX_MSG_STATUS1_ucpk_rcv_mask                                            (0x00FF0000)
#define CBUS_TX_MSG_STATUS1_ucpk_rcv(data)                                           (0x00FF0000&((data)<<16))
#define CBUS_TX_MSG_STATUS1_ucpk_rcv_src(data)                                       ((0x00FF0000&(data))>>16)
#define CBUS_TX_MSG_STATUS1_get_ucpk_rcv(data)                                       ((0x00FF0000&(data))>>16)
#define CBUS_TX_MSG_STATUS1_ucp_rcv_shift                                            (8)
#define CBUS_TX_MSG_STATUS1_ucp_rcv_mask                                             (0x0000FF00)
#define CBUS_TX_MSG_STATUS1_ucp_rcv(data)                                            (0x0000FF00&((data)<<8))
#define CBUS_TX_MSG_STATUS1_ucp_rcv_src(data)                                        ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSG_STATUS1_get_ucp_rcv(data)                                        ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSG_STATUS1_ucpe_rcv_shift                                           (0)
#define CBUS_TX_MSG_STATUS1_ucpe_rcv_mask                                            (0x000000FF)
#define CBUS_TX_MSG_STATUS1_ucpe_rcv(data)                                           (0x000000FF&((data)<<0))
#define CBUS_TX_MSG_STATUS1_ucpe_rcv_src(data)                                       ((0x000000FF&(data))>>0)
#define CBUS_TX_MSG_STATUS1_get_ucpe_rcv(data)                                       ((0x000000FF&(data))>>0)


#define CBUS_TX_MSG_STATUS2                                                          0x98037B50
#define CBUS_TX_MSG_STATUS2_reg_addr                                                 "0xD8037B50"
#define CBUS_TX_MSG_STATUS2_reg                                                      0xD8037B50
#define set_CBUS_TX_MSG_STATUS2_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSG_STATUS2_reg)=data)
#define get_CBUS_TX_MSG_STATUS2_reg   (*((volatile unsigned int*) CBUS_TX_MSG_STATUS2_reg))
#define CBUS_TX_MSG_STATUS2_inst_adr                                                 "0x00D4"
#define CBUS_TX_MSG_STATUS2_inst                                                     0x00D4
#define CBUS_TX_MSG_STATUS2_msge_rcv_shift                                           (24)
#define CBUS_TX_MSG_STATUS2_msge_rcv_mask                                            (0xFF000000)
#define CBUS_TX_MSG_STATUS2_msge_rcv(data)                                           (0xFF000000&((data)<<24))
#define CBUS_TX_MSG_STATUS2_msge_rcv_src(data)                                       ((0xFF000000&(data))>>24)
#define CBUS_TX_MSG_STATUS2_get_msge_rcv(data)                                       ((0xFF000000&(data))>>24)
#define CBUS_TX_MSG_STATUS2_rcpk_rcv_shift                                           (16)
#define CBUS_TX_MSG_STATUS2_rcpk_rcv_mask                                            (0x00FF0000)
#define CBUS_TX_MSG_STATUS2_rcpk_rcv(data)                                           (0x00FF0000&((data)<<16))
#define CBUS_TX_MSG_STATUS2_rcpk_rcv_src(data)                                       ((0x00FF0000&(data))>>16)
#define CBUS_TX_MSG_STATUS2_get_rcpk_rcv(data)                                       ((0x00FF0000&(data))>>16)
#define CBUS_TX_MSG_STATUS2_rcp_rcv_shift                                            (8)
#define CBUS_TX_MSG_STATUS2_rcp_rcv_mask                                             (0x0000FF00)
#define CBUS_TX_MSG_STATUS2_rcp_rcv(data)                                            (0x0000FF00&((data)<<8))
#define CBUS_TX_MSG_STATUS2_rcp_rcv_src(data)                                        ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSG_STATUS2_get_rcp_rcv(data)                                        ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSG_STATUS2_rcpe_rcv_shift                                           (0)
#define CBUS_TX_MSG_STATUS2_rcpe_rcv_mask                                            (0x000000FF)
#define CBUS_TX_MSG_STATUS2_rcpe_rcv(data)                                           (0x000000FF&((data)<<0))
#define CBUS_TX_MSG_STATUS2_rcpe_rcv_src(data)                                       ((0x000000FF&(data))>>0)
#define CBUS_TX_MSG_STATUS2_get_rcpe_rcv(data)                                       ((0x000000FF&(data))>>0)


#define CBUS_TX_MSG_STATUS3                                                          0x98037B54
#define CBUS_TX_MSG_STATUS3_reg_addr                                                 "0xD8037B54"
#define CBUS_TX_MSG_STATUS3_reg                                                      0xD8037B54
#define set_CBUS_TX_MSG_STATUS3_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSG_STATUS3_reg)=data)
#define get_CBUS_TX_MSG_STATUS3_reg   (*((volatile unsigned int*) CBUS_TX_MSG_STATUS3_reg))
#define CBUS_TX_MSG_STATUS3_inst_adr                                                 "0x00D5"
#define CBUS_TX_MSG_STATUS3_inst                                                     0x00D5
#define CBUS_TX_MSG_STATUS3_rap_rcv_shift                                            (24)
#define CBUS_TX_MSG_STATUS3_rap_rcv_mask                                             (0xFF000000)
#define CBUS_TX_MSG_STATUS3_rap_rcv(data)                                            (0xFF000000&((data)<<24))
#define CBUS_TX_MSG_STATUS3_rap_rcv_src(data)                                        ((0xFF000000&(data))>>24)
#define CBUS_TX_MSG_STATUS3_get_rap_rcv(data)                                        ((0xFF000000&(data))>>24)
#define CBUS_TX_MSG_STATUS3_rapk_rcv_shift                                           (16)
#define CBUS_TX_MSG_STATUS3_rapk_rcv_mask                                            (0x00FF0000)
#define CBUS_TX_MSG_STATUS3_rapk_rcv(data)                                           (0x00FF0000&((data)<<16))
#define CBUS_TX_MSG_STATUS3_rapk_rcv_src(data)                                       ((0x00FF0000&(data))>>16)
#define CBUS_TX_MSG_STATUS3_get_rapk_rcv(data)                                       ((0x00FF0000&(data))>>16)
#define CBUS_TX_MSG_STATUS3_msg_dat_shift                                            (8)
#define CBUS_TX_MSG_STATUS3_msg_dat_mask                                             (0x0000FF00)
#define CBUS_TX_MSG_STATUS3_msg_dat(data)                                            (0x0000FF00&((data)<<8))
#define CBUS_TX_MSG_STATUS3_msg_dat_src(data)                                        ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSG_STATUS3_get_msg_dat(data)                                        ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSG_STATUS3_msg_cmd_shift                                            (0)
#define CBUS_TX_MSG_STATUS3_msg_cmd_mask                                             (0x000000FF)
#define CBUS_TX_MSG_STATUS3_msg_cmd(data)                                            (0x000000FF&((data)<<0))
#define CBUS_TX_MSG_STATUS3_msg_cmd_src(data)                                        ((0x000000FF&(data))>>0)
#define CBUS_TX_MSG_STATUS3_get_msg_cmd(data)                                        ((0x000000FF&(data))>>0)


#define CBUS_TX_ADOPTERID_CTRL                                                       0x98037B60
#define CBUS_TX_ADOPTERID_CTRL_reg_addr                                              "0xD8037B60"
#define CBUS_TX_ADOPTERID_CTRL_reg                                                   0xD8037B60
#define set_CBUS_TX_ADOPTERID_CTRL_reg(data)   (*((volatile unsigned int*) CBUS_TX_ADOPTERID_CTRL_reg)=data)
#define get_CBUS_TX_ADOPTERID_CTRL_reg   (*((volatile unsigned int*) CBUS_TX_ADOPTERID_CTRL_reg))
#define CBUS_TX_ADOPTERID_CTRL_inst_adr                                              "0x00D8"
#define CBUS_TX_ADOPTERID_CTRL_inst                                                  0x00D8
#define CBUS_TX_ADOPTERID_CTRL_wb_id_chk_shift                                       (31)
#define CBUS_TX_ADOPTERID_CTRL_wb_id_chk_mask                                        (0x80000000)
#define CBUS_TX_ADOPTERID_CTRL_wb_id_chk(data)                                       (0x80000000&((data)<<31))
#define CBUS_TX_ADOPTERID_CTRL_wb_id_chk_src(data)                                   ((0x80000000&(data))>>31)
#define CBUS_TX_ADOPTERID_CTRL_get_wb_id_chk(data)                                   ((0x80000000&(data))>>31)
#define CBUS_TX_ADOPTERID_CTRL_rcp_reply_nack_shift                                  (30)
#define CBUS_TX_ADOPTERID_CTRL_rcp_reply_nack_mask                                   (0x40000000)
#define CBUS_TX_ADOPTERID_CTRL_rcp_reply_nack(data)                                  (0x40000000&((data)<<30))
#define CBUS_TX_ADOPTERID_CTRL_rcp_reply_nack_src(data)                              ((0x40000000&(data))>>30)
#define CBUS_TX_ADOPTERID_CTRL_get_rcp_reply_nack(data)                              ((0x40000000&(data))>>30)
#define CBUS_TX_ADOPTERID_CTRL_rcp_reply_abort_shift                                 (29)
#define CBUS_TX_ADOPTERID_CTRL_rcp_reply_abort_mask                                  (0x20000000)
#define CBUS_TX_ADOPTERID_CTRL_rcp_reply_abort(data)                                 (0x20000000&((data)<<29))
#define CBUS_TX_ADOPTERID_CTRL_rcp_reply_abort_src(data)                             ((0x20000000&(data))>>29)
#define CBUS_TX_ADOPTERID_CTRL_get_rcp_reply_abort(data)                             ((0x20000000&(data))>>29)
#define CBUS_TX_ADOPTERID_CTRL_fwdef_cmd_rev_shift                                   (16)
#define CBUS_TX_ADOPTERID_CTRL_fwdef_cmd_rev_mask                                    (0x00FF0000)
#define CBUS_TX_ADOPTERID_CTRL_fwdef_cmd_rev(data)                                   (0x00FF0000&((data)<<16))
#define CBUS_TX_ADOPTERID_CTRL_fwdef_cmd_rev_src(data)                               ((0x00FF0000&(data))>>16)
#define CBUS_TX_ADOPTERID_CTRL_get_fwdef_cmd_rev(data)                               ((0x00FF0000&(data))>>16)


#define CBUS_TX_RCV_ADOPTER_ID                                                       0x98037B64
#define CBUS_TX_RCV_ADOPTER_ID_reg_addr                                              "0xD8037B64"
#define CBUS_TX_RCV_ADOPTER_ID_reg                                                   0xD8037B64
#define set_CBUS_TX_RCV_ADOPTER_ID_reg(data)   (*((volatile unsigned int*) CBUS_TX_RCV_ADOPTER_ID_reg)=data)
#define get_CBUS_TX_RCV_ADOPTER_ID_reg   (*((volatile unsigned int*) CBUS_TX_RCV_ADOPTER_ID_reg))
#define CBUS_TX_RCV_ADOPTER_ID_inst_adr                                              "0x00D9"
#define CBUS_TX_RCV_ADOPTER_ID_inst                                                  0x00D9
#define CBUS_TX_RCV_ADOPTER_ID_adop_idl_rcv_shift                                    (8)
#define CBUS_TX_RCV_ADOPTER_ID_adop_idl_rcv_mask                                     (0x0000FF00)
#define CBUS_TX_RCV_ADOPTER_ID_adop_idl_rcv(data)                                    (0x0000FF00&((data)<<8))
#define CBUS_TX_RCV_ADOPTER_ID_adop_idl_rcv_src(data)                                ((0x0000FF00&(data))>>8)
#define CBUS_TX_RCV_ADOPTER_ID_get_adop_idl_rcv(data)                                ((0x0000FF00&(data))>>8)
#define CBUS_TX_RCV_ADOPTER_ID_adop_idh_rcv_shift                                    (0)
#define CBUS_TX_RCV_ADOPTER_ID_adop_idh_rcv_mask                                     (0x000000FF)
#define CBUS_TX_RCV_ADOPTER_ID_adop_idh_rcv(data)                                    (0x000000FF&((data)<<0))
#define CBUS_TX_RCV_ADOPTER_ID_adop_idh_rcv_src(data)                                ((0x000000FF&(data))>>0)
#define CBUS_TX_RCV_ADOPTER_ID_get_adop_idh_rcv(data)                                ((0x000000FF&(data))>>0)


#define CBUS_TX_MSC_CTRL                                                             0x98037B68
#define CBUS_TX_MSC_CTRL_reg_addr                                                    "0xD8037B68"
#define CBUS_TX_MSC_CTRL_reg                                                         0xD8037B68
#define set_CBUS_TX_MSC_CTRL_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_CTRL_reg)=data)
#define get_CBUS_TX_MSC_CTRL_reg   (*((volatile unsigned int*) CBUS_TX_MSC_CTRL_reg))
#define CBUS_TX_MSC_CTRL_inst_adr                                                    "0x00DA"
#define CBUS_TX_MSC_CTRL_inst                                                        0x00DA
#define CBUS_TX_MSC_CTRL_mcumsc_en_shift                                             (31)
#define CBUS_TX_MSC_CTRL_mcumsc_en_mask                                              (0x80000000)
#define CBUS_TX_MSC_CTRL_mcumsc_en(data)                                             (0x80000000&((data)<<31))
#define CBUS_TX_MSC_CTRL_mcumsc_en_src(data)                                         ((0x80000000&(data))>>31)
#define CBUS_TX_MSC_CTRL_get_mcumsc_en(data)                                         ((0x80000000&(data))>>31)
#define CBUS_TX_MSC_CTRL_msc_wait_arb_shift                                          (29)
#define CBUS_TX_MSC_CTRL_msc_wait_arb_mask                                           (0x20000000)
#define CBUS_TX_MSC_CTRL_msc_wait_arb(data)                                          (0x20000000&((data)<<29))
#define CBUS_TX_MSC_CTRL_msc_wait_arb_src(data)                                      ((0x20000000&(data))>>29)
#define CBUS_TX_MSC_CTRL_get_msc_wait_arb(data)                                      ((0x20000000&(data))>>29)
#define CBUS_TX_MSC_CTRL_rx_fifo_clr_shift                                           (28)
#define CBUS_TX_MSC_CTRL_rx_fifo_clr_mask                                            (0x10000000)
#define CBUS_TX_MSC_CTRL_rx_fifo_clr(data)                                           (0x10000000&((data)<<28))
#define CBUS_TX_MSC_CTRL_rx_fifo_clr_src(data)                                       ((0x10000000&(data))>>28)
#define CBUS_TX_MSC_CTRL_get_rx_fifo_clr(data)                                       ((0x10000000&(data))>>28)
#define CBUS_TX_MSC_CTRL_que_fsm_clr_shift                                           (25)
#define CBUS_TX_MSC_CTRL_que_fsm_clr_mask                                            (0x02000000)
#define CBUS_TX_MSC_CTRL_que_fsm_clr(data)                                           (0x02000000&((data)<<25))
#define CBUS_TX_MSC_CTRL_que_fsm_clr_src(data)                                       ((0x02000000&(data))>>25)
#define CBUS_TX_MSC_CTRL_get_que_fsm_clr(data)                                       ((0x02000000&(data))>>25)
#define CBUS_TX_MSC_CTRL_sch_fsm_clr_shift                                           (24)
#define CBUS_TX_MSC_CTRL_sch_fsm_clr_mask                                            (0x01000000)
#define CBUS_TX_MSC_CTRL_sch_fsm_clr(data)                                           (0x01000000&((data)<<24))
#define CBUS_TX_MSC_CTRL_sch_fsm_clr_src(data)                                       ((0x01000000&(data))>>24)
#define CBUS_TX_MSC_CTRL_get_sch_fsm_clr(data)                                       ((0x01000000&(data))>>24)


#define CBUS_TX_MSC_BURST_DATA                                                       0x98037B6C
#define CBUS_TX_MSC_BURST_DATA_reg_addr                                              "0xD8037B6C"
#define CBUS_TX_MSC_BURST_DATA_reg                                                   0xD8037B6C
#define set_CBUS_TX_MSC_BURST_DATA_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_BURST_DATA_reg)=data)
#define get_CBUS_TX_MSC_BURST_DATA_reg   (*((volatile unsigned int*) CBUS_TX_MSC_BURST_DATA_reg))
#define CBUS_TX_MSC_BURST_DATA_inst_adr                                              "0x00DB"
#define CBUS_TX_MSC_BURST_DATA_inst                                                  0x00DB
#define CBUS_TX_MSC_BURST_DATA_msc_err_code_shift                                    (0)
#define CBUS_TX_MSC_BURST_DATA_msc_err_code_mask                                     (0x000000FF)
#define CBUS_TX_MSC_BURST_DATA_msc_err_code(data)                                    (0x000000FF&((data)<<0))
#define CBUS_TX_MSC_BURST_DATA_msc_err_code_src(data)                                ((0x000000FF&(data))>>0)
#define CBUS_TX_MSC_BURST_DATA_get_msc_err_code(data)                                ((0x000000FF&(data))>>0)


#define CBUS_TX_MSC_RCV_CMD                                                          0x98037B70
#define CBUS_TX_MSC_RCV_CMD_reg_addr                                                 "0xD8037B70"
#define CBUS_TX_MSC_RCV_CMD_reg                                                      0xD8037B70
#define set_CBUS_TX_MSC_RCV_CMD_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_RCV_CMD_reg)=data)
#define get_CBUS_TX_MSC_RCV_CMD_reg   (*((volatile unsigned int*) CBUS_TX_MSC_RCV_CMD_reg))
#define CBUS_TX_MSC_RCV_CMD_inst_adr                                                 "0x00DC"
#define CBUS_TX_MSC_RCV_CMD_inst                                                     0x00DC
#define CBUS_TX_MSC_RCV_CMD_rx_fifo_full_shift                                       (31)
#define CBUS_TX_MSC_RCV_CMD_rx_fifo_full_mask                                        (0x80000000)
#define CBUS_TX_MSC_RCV_CMD_rx_fifo_full(data)                                       (0x80000000&((data)<<31))
#define CBUS_TX_MSC_RCV_CMD_rx_fifo_full_src(data)                                   ((0x80000000&(data))>>31)
#define CBUS_TX_MSC_RCV_CMD_get_rx_fifo_full(data)                                   ((0x80000000&(data))>>31)
#define CBUS_TX_MSC_RCV_CMD_rx_fifo_empty_shift                                      (30)
#define CBUS_TX_MSC_RCV_CMD_rx_fifo_empty_mask                                       (0x40000000)
#define CBUS_TX_MSC_RCV_CMD_rx_fifo_empty(data)                                      (0x40000000&((data)<<30))
#define CBUS_TX_MSC_RCV_CMD_rx_fifo_empty_src(data)                                  ((0x40000000&(data))>>30)
#define CBUS_TX_MSC_RCV_CMD_get_rx_fifo_empty(data)                                  ((0x40000000&(data))>>30)
#define CBUS_TX_MSC_RCV_CMD_na_rx_len_shift                                          (24)
#define CBUS_TX_MSC_RCV_CMD_na_rx_len_mask                                           (0x1F000000)
#define CBUS_TX_MSC_RCV_CMD_na_rx_len(data)                                          (0x1F000000&((data)<<24))
#define CBUS_TX_MSC_RCV_CMD_na_rx_len_src(data)                                      ((0x1F000000&(data))>>24)
#define CBUS_TX_MSC_RCV_CMD_get_na_rx_len(data)                                      ((0x1F000000&(data))>>24)
#define CBUS_TX_MSC_RCV_CMD_na_msc_offset_shift                                      (8)
#define CBUS_TX_MSC_RCV_CMD_na_msc_offset_mask                                       (0x0000FF00)
#define CBUS_TX_MSC_RCV_CMD_na_msc_offset(data)                                      (0x0000FF00&((data)<<8))
#define CBUS_TX_MSC_RCV_CMD_na_msc_offset_src(data)                                  ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSC_RCV_CMD_get_na_msc_offset(data)                                  ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSC_RCV_CMD_na_msc_cmd_shift                                         (0)
#define CBUS_TX_MSC_RCV_CMD_na_msc_cmd_mask                                          (0x000000FF)
#define CBUS_TX_MSC_RCV_CMD_na_msc_cmd(data)                                         (0x000000FF&((data)<<0))
#define CBUS_TX_MSC_RCV_CMD_na_msc_cmd_src(data)                                     ((0x000000FF&(data))>>0)
#define CBUS_TX_MSC_RCV_CMD_get_na_msc_cmd(data)                                     ((0x000000FF&(data))>>0)


#define CBUS_TX_MSC_RCV_DATA                                                         0x98037B74
#define CBUS_TX_MSC_RCV_DATA_reg_addr                                                "0xD8037B74"
#define CBUS_TX_MSC_RCV_DATA_reg                                                     0xD8037B74
#define set_CBUS_TX_MSC_RCV_DATA_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_RCV_DATA_reg)=data)
#define get_CBUS_TX_MSC_RCV_DATA_reg   (*((volatile unsigned int*) CBUS_TX_MSC_RCV_DATA_reg))
#define CBUS_TX_MSC_RCV_DATA_inst_adr                                                "0x00DD"
#define CBUS_TX_MSC_RCV_DATA_inst                                                    0x00DD
#define CBUS_TX_MSC_RCV_DATA_rx_fifo_data_shift                                      (0)
#define CBUS_TX_MSC_RCV_DATA_rx_fifo_data_mask                                       (0x000000FF)
#define CBUS_TX_MSC_RCV_DATA_rx_fifo_data(data)                                      (0x000000FF&((data)<<0))
#define CBUS_TX_MSC_RCV_DATA_rx_fifo_data_src(data)                                  ((0x000000FF&(data))>>0)
#define CBUS_TX_MSC_RCV_DATA_get_rx_fifo_data(data)                                  ((0x000000FF&(data))>>0)


#define CBUS_TX_MSC_WRITE_ERR_CODE                                                   0x98037BA4
#define CBUS_TX_MSC_WRITE_ERR_CODE_reg_addr                                          "0xD8037BA4"
#define CBUS_TX_MSC_WRITE_ERR_CODE_reg                                               0xD8037BA4
#define set_CBUS_TX_MSC_WRITE_ERR_CODE_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_WRITE_ERR_CODE_reg)=data)
#define get_CBUS_TX_MSC_WRITE_ERR_CODE_reg   (*((volatile unsigned int*) CBUS_TX_MSC_WRITE_ERR_CODE_reg))
#define CBUS_TX_MSC_WRITE_ERR_CODE_inst_adr                                          "0x00E9"
#define CBUS_TX_MSC_WRITE_ERR_CODE_inst                                              0x00E9
#define CBUS_TX_MSC_WRITE_ERR_CODE_msc_err_force_shift                               (31)
#define CBUS_TX_MSC_WRITE_ERR_CODE_msc_err_force_mask                                (0x80000000)
#define CBUS_TX_MSC_WRITE_ERR_CODE_msc_err_force(data)                               (0x80000000&((data)<<31))
#define CBUS_TX_MSC_WRITE_ERR_CODE_msc_err_force_src(data)                           ((0x80000000&(data))>>31)
#define CBUS_TX_MSC_WRITE_ERR_CODE_get_msc_err_force(data)                           ((0x80000000&(data))>>31)
#define CBUS_TX_MSC_WRITE_ERR_CODE_msc_err_fw_shift                                  (0)
#define CBUS_TX_MSC_WRITE_ERR_CODE_msc_err_fw_mask                                   (0x000000FF)
#define CBUS_TX_MSC_WRITE_ERR_CODE_msc_err_fw(data)                                  (0x000000FF&((data)<<0))
#define CBUS_TX_MSC_WRITE_ERR_CODE_msc_err_fw_src(data)                              ((0x000000FF&(data))>>0)
#define CBUS_TX_MSC_WRITE_ERR_CODE_get_msc_err_fw(data)                              ((0x000000FF&(data))>>0)


#define CBUS_TX_DDC_CMD_INF                                                          0x98037B7C
#define CBUS_TX_DDC_CMD_INF_reg_addr                                                 "0xD8037B7C"
#define CBUS_TX_DDC_CMD_INF_reg                                                      0xD8037B7C
#define set_CBUS_TX_DDC_CMD_INF_reg(data)   (*((volatile unsigned int*) CBUS_TX_DDC_CMD_INF_reg)=data)
#define get_CBUS_TX_DDC_CMD_INF_reg   (*((volatile unsigned int*) CBUS_TX_DDC_CMD_INF_reg))
#define CBUS_TX_DDC_CMD_INF_inst_adr                                                 "0x00DF"
#define CBUS_TX_DDC_CMD_INF_inst                                                     0x00DF
#define CBUS_TX_DDC_CMD_INF_ddc_rdy_shift                                            (31)
#define CBUS_TX_DDC_CMD_INF_ddc_rdy_mask                                             (0x80000000)
#define CBUS_TX_DDC_CMD_INF_ddc_rdy(data)                                            (0x80000000&((data)<<31))
#define CBUS_TX_DDC_CMD_INF_ddc_rdy_src(data)                                        ((0x80000000&(data))>>31)
#define CBUS_TX_DDC_CMD_INF_get_ddc_rdy(data)                                        ((0x80000000&(data))>>31)
#define CBUS_TX_DDC_CMD_INF_ddc_cmd_type_shift                                       (28)
#define CBUS_TX_DDC_CMD_INF_ddc_cmd_type_mask                                        (0x70000000)
#define CBUS_TX_DDC_CMD_INF_ddc_cmd_type(data)                                       (0x70000000&((data)<<28))
#define CBUS_TX_DDC_CMD_INF_ddc_cmd_type_src(data)                                   ((0x70000000&(data))>>28)
#define CBUS_TX_DDC_CMD_INF_get_ddc_cmd_type(data)                                   ((0x70000000&(data))>>28)
#define CBUS_TX_DDC_CMD_INF_ddc_num_shift                                            (24)
#define CBUS_TX_DDC_CMD_INF_ddc_num_mask                                             (0x0F000000)
#define CBUS_TX_DDC_CMD_INF_ddc_num(data)                                            (0x0F000000&((data)<<24))
#define CBUS_TX_DDC_CMD_INF_ddc_num_src(data)                                        ((0x0F000000&(data))>>24)
#define CBUS_TX_DDC_CMD_INF_get_ddc_num(data)                                        ((0x0F000000&(data))>>24)
#define CBUS_TX_DDC_CMD_INF_ddc_nack_limit_shift                                     (16)
#define CBUS_TX_DDC_CMD_INF_ddc_nack_limit_mask                                      (0x00FF0000)
#define CBUS_TX_DDC_CMD_INF_ddc_nack_limit(data)                                     (0x00FF0000&((data)<<16))
#define CBUS_TX_DDC_CMD_INF_ddc_nack_limit_src(data)                                 ((0x00FF0000&(data))>>16)
#define CBUS_TX_DDC_CMD_INF_get_ddc_nack_limit(data)                                 ((0x00FF0000&(data))>>16)
#define CBUS_TX_DDC_CMD_INF_ddc_err_code_clr_shift                                   (10)
#define CBUS_TX_DDC_CMD_INF_ddc_err_code_clr_mask                                    (0x00000400)
#define CBUS_TX_DDC_CMD_INF_ddc_err_code_clr(data)                                   (0x00000400&((data)<<10))
#define CBUS_TX_DDC_CMD_INF_ddc_err_code_clr_src(data)                               ((0x00000400&(data))>>10)
#define CBUS_TX_DDC_CMD_INF_get_ddc_err_code_clr(data)                               ((0x00000400&(data))>>10)
#define CBUS_TX_DDC_CMD_INF_ddc_prior_dis_shift                                      (9)
#define CBUS_TX_DDC_CMD_INF_ddc_prior_dis_mask                                       (0x00000200)
#define CBUS_TX_DDC_CMD_INF_ddc_prior_dis(data)                                      (0x00000200&((data)<<9))
#define CBUS_TX_DDC_CMD_INF_ddc_prior_dis_src(data)                                  ((0x00000200&(data))>>9)
#define CBUS_TX_DDC_CMD_INF_get_ddc_prior_dis(data)                                  ((0x00000200&(data))>>9)
#define CBUS_TX_DDC_CMD_INF_ddc_fsm_clr_shift                                        (8)
#define CBUS_TX_DDC_CMD_INF_ddc_fsm_clr_mask                                         (0x00000100)
#define CBUS_TX_DDC_CMD_INF_ddc_fsm_clr(data)                                        (0x00000100&((data)<<8))
#define CBUS_TX_DDC_CMD_INF_ddc_fsm_clr_src(data)                                    ((0x00000100&(data))>>8)
#define CBUS_TX_DDC_CMD_INF_get_ddc_fsm_clr(data)                                    ((0x00000100&(data))>>8)
#define CBUS_TX_DDC_CMD_INF_ddc_nack_retry_shift                                     (2)
#define CBUS_TX_DDC_CMD_INF_ddc_nack_retry_mask                                      (0x00000004)
#define CBUS_TX_DDC_CMD_INF_ddc_nack_retry(data)                                     (0x00000004&((data)<<2))
#define CBUS_TX_DDC_CMD_INF_ddc_nack_retry_src(data)                                 ((0x00000004&(data))>>2)
#define CBUS_TX_DDC_CMD_INF_get_ddc_nack_retry(data)                                 ((0x00000004&(data))>>2)
#define CBUS_TX_DDC_CMD_INF_ddc_wait_case_shift                                      (1)
#define CBUS_TX_DDC_CMD_INF_ddc_wait_case_mask                                       (0x00000002)
#define CBUS_TX_DDC_CMD_INF_ddc_wait_case(data)                                      (0x00000002&((data)<<1))
#define CBUS_TX_DDC_CMD_INF_ddc_wait_case_src(data)                                  ((0x00000002&(data))>>1)
#define CBUS_TX_DDC_CMD_INF_get_ddc_wait_case(data)                                  ((0x00000002&(data))>>1)
#define CBUS_TX_DDC_CMD_INF_ddc_fw_en_shift                                          (0)
#define CBUS_TX_DDC_CMD_INF_ddc_fw_en_mask                                           (0x00000001)
#define CBUS_TX_DDC_CMD_INF_ddc_fw_en(data)                                          (0x00000001&((data)<<0))
#define CBUS_TX_DDC_CMD_INF_ddc_fw_en_src(data)                                      ((0x00000001&(data))>>0)
#define CBUS_TX_DDC_CMD_INF_get_ddc_fw_en(data)                                      ((0x00000001&(data))>>0)


#define CBUS_TX_DDC_CMD_DATA                                                         0x98037B80
#define CBUS_TX_DDC_CMD_DATA_reg_addr                                                "0xD8037B80"
#define CBUS_TX_DDC_CMD_DATA_reg                                                     0xD8037B80
#define set_CBUS_TX_DDC_CMD_DATA_reg(data)   (*((volatile unsigned int*) CBUS_TX_DDC_CMD_DATA_reg)=data)
#define get_CBUS_TX_DDC_CMD_DATA_reg   (*((volatile unsigned int*) CBUS_TX_DDC_CMD_DATA_reg))
#define CBUS_TX_DDC_CMD_DATA_inst_adr                                                "0x00E0"
#define CBUS_TX_DDC_CMD_DATA_inst                                                    0x00E0
#define CBUS_TX_DDC_CMD_DATA_ddc_segval_shift                                        (16)
#define CBUS_TX_DDC_CMD_DATA_ddc_segval_mask                                         (0x00FF0000)
#define CBUS_TX_DDC_CMD_DATA_ddc_segval(data)                                        (0x00FF0000&((data)<<16))
#define CBUS_TX_DDC_CMD_DATA_ddc_segval_src(data)                                    ((0x00FF0000&(data))>>16)
#define CBUS_TX_DDC_CMD_DATA_get_ddc_segval(data)                                    ((0x00FF0000&(data))>>16)
#define CBUS_TX_DDC_CMD_DATA_ddc_offset_shift                                        (8)
#define CBUS_TX_DDC_CMD_DATA_ddc_offset_mask                                         (0x0000FF00)
#define CBUS_TX_DDC_CMD_DATA_ddc_offset(data)                                        (0x0000FF00&((data)<<8))
#define CBUS_TX_DDC_CMD_DATA_ddc_offset_src(data)                                    ((0x0000FF00&(data))>>8)
#define CBUS_TX_DDC_CMD_DATA_get_ddc_offset(data)                                    ((0x0000FF00&(data))>>8)
#define CBUS_TX_DDC_CMD_DATA_ddc_devaddr_shift                                       (0)
#define CBUS_TX_DDC_CMD_DATA_ddc_devaddr_mask                                        (0x000000FF)
#define CBUS_TX_DDC_CMD_DATA_ddc_devaddr(data)                                       (0x000000FF&((data)<<0))
#define CBUS_TX_DDC_CMD_DATA_ddc_devaddr_src(data)                                   ((0x000000FF&(data))>>0)
#define CBUS_TX_DDC_CMD_DATA_get_ddc_devaddr(data)                                   ((0x000000FF&(data))>>0)


#define CBUS_TX_DDC_WD                                                               0x98037B84
#define CBUS_TX_DDC_WD_reg_addr                                                      "0xD8037B84"
#define CBUS_TX_DDC_WD_reg                                                           0xD8037B84
#define set_CBUS_TX_DDC_WD_reg(data)   (*((volatile unsigned int*) CBUS_TX_DDC_WD_reg)=data)
#define get_CBUS_TX_DDC_WD_reg   (*((volatile unsigned int*) CBUS_TX_DDC_WD_reg))
#define CBUS_TX_DDC_WD_inst_adr                                                      "0x00E1"
#define CBUS_TX_DDC_WD_inst                                                          0x00E1
#define CBUS_TX_DDC_WD_ddc_wdata_shift                                               (0)
#define CBUS_TX_DDC_WD_ddc_wdata_mask                                                (0x000000FF)
#define CBUS_TX_DDC_WD_ddc_wdata(data)                                               (0x000000FF&((data)<<0))
#define CBUS_TX_DDC_WD_ddc_wdata_src(data)                                           ((0x000000FF&(data))>>0)
#define CBUS_TX_DDC_WD_get_ddc_wdata(data)                                           ((0x000000FF&(data))>>0)


#define CBUS_TX_DDC_RD                                                               0x98037B88
#define CBUS_TX_DDC_RD_reg_addr                                                      "0xD8037B88"
#define CBUS_TX_DDC_RD_reg                                                           0xD8037B88
#define set_CBUS_TX_DDC_RD_reg(data)   (*((volatile unsigned int*) CBUS_TX_DDC_RD_reg)=data)
#define get_CBUS_TX_DDC_RD_reg   (*((volatile unsigned int*) CBUS_TX_DDC_RD_reg))
#define CBUS_TX_DDC_RD_inst_adr                                                      "0x00E2"
#define CBUS_TX_DDC_RD_inst                                                          0x00E2
#define CBUS_TX_DDC_RD_ddc_fsm_shift                                                 (16)
#define CBUS_TX_DDC_RD_ddc_fsm_mask                                                  (0x001F0000)
#define CBUS_TX_DDC_RD_ddc_fsm(data)                                                 (0x001F0000&((data)<<16))
#define CBUS_TX_DDC_RD_ddc_fsm_src(data)                                             ((0x001F0000&(data))>>16)
#define CBUS_TX_DDC_RD_get_ddc_fsm(data)                                             ((0x001F0000&(data))>>16)
#define CBUS_TX_DDC_RD_ddc_rdata_shift                                               (0)
#define CBUS_TX_DDC_RD_ddc_rdata_mask                                                (0x000000FF)
#define CBUS_TX_DDC_RD_ddc_rdata(data)                                               (0x000000FF&((data)<<0))
#define CBUS_TX_DDC_RD_ddc_rdata_src(data)                                           ((0x000000FF&(data))>>0)
#define CBUS_TX_DDC_RD_get_ddc_rdata(data)                                           ((0x000000FF&(data))>>0)


#define CBUS_TX_DDC_STATUS                                                           0x98037B8C
#define CBUS_TX_DDC_STATUS_reg_addr                                                  "0xD8037B8C"
#define CBUS_TX_DDC_STATUS_reg                                                       0xD8037B8C
#define set_CBUS_TX_DDC_STATUS_reg(data)   (*((volatile unsigned int*) CBUS_TX_DDC_STATUS_reg)=data)
#define get_CBUS_TX_DDC_STATUS_reg   (*((volatile unsigned int*) CBUS_TX_DDC_STATUS_reg))
#define CBUS_TX_DDC_STATUS_inst_adr                                                  "0x00E3"
#define CBUS_TX_DDC_STATUS_inst                                                      0x00E3
#define CBUS_TX_DDC_STATUS_ddc_fifo_full_shift                                       (25)
#define CBUS_TX_DDC_STATUS_ddc_fifo_full_mask                                        (0x02000000)
#define CBUS_TX_DDC_STATUS_ddc_fifo_full(data)                                       (0x02000000&((data)<<25))
#define CBUS_TX_DDC_STATUS_ddc_fifo_full_src(data)                                   ((0x02000000&(data))>>25)
#define CBUS_TX_DDC_STATUS_get_ddc_fifo_full(data)                                   ((0x02000000&(data))>>25)
#define CBUS_TX_DDC_STATUS_ddc_fifo_empty_shift                                      (24)
#define CBUS_TX_DDC_STATUS_ddc_fifo_empty_mask                                       (0x01000000)
#define CBUS_TX_DDC_STATUS_ddc_fifo_empty(data)                                      (0x01000000&((data)<<24))
#define CBUS_TX_DDC_STATUS_ddc_fifo_empty_src(data)                                  ((0x01000000&(data))>>24)
#define CBUS_TX_DDC_STATUS_get_ddc_fifo_empty(data)                                  ((0x01000000&(data))>>24)
#define CBUS_TX_DDC_STATUS_ddc_err_code_shift                                        (16)
#define CBUS_TX_DDC_STATUS_ddc_err_code_mask                                         (0x00FF0000)
#define CBUS_TX_DDC_STATUS_ddc_err_code(data)                                        (0x00FF0000&((data)<<16))
#define CBUS_TX_DDC_STATUS_ddc_err_code_src(data)                                    ((0x00FF0000&(data))>>16)
#define CBUS_TX_DDC_STATUS_get_ddc_err_code(data)                                    ((0x00FF0000&(data))>>16)
#define CBUS_TX_DDC_STATUS_ddc_wp_shift                                              (4)
#define CBUS_TX_DDC_STATUS_ddc_wp_mask                                               (0x000000F0)
#define CBUS_TX_DDC_STATUS_ddc_wp(data)                                              (0x000000F0&((data)<<4))
#define CBUS_TX_DDC_STATUS_ddc_wp_src(data)                                          ((0x000000F0&(data))>>4)
#define CBUS_TX_DDC_STATUS_get_ddc_wp(data)                                          ((0x000000F0&(data))>>4)
#define CBUS_TX_DDC_STATUS_ddc_rp_shift                                              (0)
#define CBUS_TX_DDC_STATUS_ddc_rp_mask                                               (0x0000000F)
#define CBUS_TX_DDC_STATUS_ddc_rp(data)                                              (0x0000000F&((data)<<0))
#define CBUS_TX_DDC_STATUS_ddc_rp_src(data)                                          ((0x0000000F&(data))>>0)
#define CBUS_TX_DDC_STATUS_get_ddc_rp(data)                                          ((0x0000000F&(data))>>0)


#define CBUS_TX_DDC_WRITE_ERR_CODE                                                   0x98037BA0
#define CBUS_TX_DDC_WRITE_ERR_CODE_reg_addr                                          "0xD8037BA0"
#define CBUS_TX_DDC_WRITE_ERR_CODE_reg                                               0xD8037BA0
#define set_CBUS_TX_DDC_WRITE_ERR_CODE_reg(data)   (*((volatile unsigned int*) CBUS_TX_DDC_WRITE_ERR_CODE_reg)=data)
#define get_CBUS_TX_DDC_WRITE_ERR_CODE_reg   (*((volatile unsigned int*) CBUS_TX_DDC_WRITE_ERR_CODE_reg))
#define CBUS_TX_DDC_WRITE_ERR_CODE_inst_adr                                          "0x00E8"
#define CBUS_TX_DDC_WRITE_ERR_CODE_inst                                              0x00E8
#define CBUS_TX_DDC_WRITE_ERR_CODE_ddc_err_force_shift                               (31)
#define CBUS_TX_DDC_WRITE_ERR_CODE_ddc_err_force_mask                                (0x80000000)
#define CBUS_TX_DDC_WRITE_ERR_CODE_ddc_err_force(data)                               (0x80000000&((data)<<31))
#define CBUS_TX_DDC_WRITE_ERR_CODE_ddc_err_force_src(data)                           ((0x80000000&(data))>>31)
#define CBUS_TX_DDC_WRITE_ERR_CODE_get_ddc_err_force(data)                           ((0x80000000&(data))>>31)
#define CBUS_TX_DDC_WRITE_ERR_CODE_ddc_err_fw_shift                                  (0)
#define CBUS_TX_DDC_WRITE_ERR_CODE_ddc_err_fw_mask                                   (0x000000FF)
#define CBUS_TX_DDC_WRITE_ERR_CODE_ddc_err_fw(data)                                  (0x000000FF&((data)<<0))
#define CBUS_TX_DDC_WRITE_ERR_CODE_ddc_err_fw_src(data)                              ((0x000000FF&(data))>>0)
#define CBUS_TX_DDC_WRITE_ERR_CODE_get_ddc_err_fw(data)                              ((0x000000FF&(data))>>0)


#define CBUS_TX_MSC_IRQ                                                              0x98037B58
#define CBUS_TX_MSC_IRQ_reg_addr                                                     "0xD8037B58"
#define CBUS_TX_MSC_IRQ_reg                                                          0xD8037B58
#define set_CBUS_TX_MSC_IRQ_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_IRQ_reg)=data)
#define get_CBUS_TX_MSC_IRQ_reg   (*((volatile unsigned int*) CBUS_TX_MSC_IRQ_reg))
#define CBUS_TX_MSC_IRQ_inst_adr                                                     "0x00D6"
#define CBUS_TX_MSC_IRQ_inst                                                         0x00D6
#define CBUS_TX_MSC_IRQ_wr_stat_irq_shift                                            (31)
#define CBUS_TX_MSC_IRQ_wr_stat_irq_mask                                             (0x80000000)
#define CBUS_TX_MSC_IRQ_wr_stat_irq(data)                                            (0x80000000&((data)<<31))
#define CBUS_TX_MSC_IRQ_wr_stat_irq_src(data)                                        ((0x80000000&(data))>>31)
#define CBUS_TX_MSC_IRQ_get_wr_stat_irq(data)                                        ((0x80000000&(data))>>31)
#define CBUS_TX_MSC_IRQ_rd_devcap_irq_shift                                          (30)
#define CBUS_TX_MSC_IRQ_rd_devcap_irq_mask                                           (0x40000000)
#define CBUS_TX_MSC_IRQ_rd_devcap_irq(data)                                          (0x40000000&((data)<<30))
#define CBUS_TX_MSC_IRQ_rd_devcap_irq_src(data)                                      ((0x40000000&(data))>>30)
#define CBUS_TX_MSC_IRQ_get_rd_devcap_irq(data)                                      ((0x40000000&(data))>>30)
#define CBUS_TX_MSC_IRQ_get_stat_irq_shift                                           (29)
#define CBUS_TX_MSC_IRQ_get_stat_irq_mask                                            (0x20000000)
#define CBUS_TX_MSC_IRQ_get_stat_irq(data)                                           (0x20000000&((data)<<29))
#define CBUS_TX_MSC_IRQ_get_stat_irq_src(data)                                       ((0x20000000&(data))>>29)
#define CBUS_TX_MSC_IRQ_get_get_stat_irq(data)                                       ((0x20000000&(data))>>29)
#define CBUS_TX_MSC_IRQ_get_id_irq_shift                                             (28)
#define CBUS_TX_MSC_IRQ_get_id_irq_mask                                              (0x10000000)
#define CBUS_TX_MSC_IRQ_get_id_irq(data)                                             (0x10000000&((data)<<28))
#define CBUS_TX_MSC_IRQ_get_id_irq_src(data)                                         ((0x10000000&(data))>>28)
#define CBUS_TX_MSC_IRQ_get_get_id_irq(data)                                         ((0x10000000&(data))>>28)
#define CBUS_TX_MSC_IRQ_get_msg_irq_shift                                            (27)
#define CBUS_TX_MSC_IRQ_get_msg_irq_mask                                             (0x08000000)
#define CBUS_TX_MSC_IRQ_get_msg_irq(data)                                            (0x08000000&((data)<<27))
#define CBUS_TX_MSC_IRQ_get_msg_irq_src(data)                                        ((0x08000000&(data))>>27)
#define CBUS_TX_MSC_IRQ_get_get_msg_irq(data)                                        ((0x08000000&(data))>>27)
#define CBUS_TX_MSC_IRQ_sc1_err_irq_shift                                            (26)
#define CBUS_TX_MSC_IRQ_sc1_err_irq_mask                                             (0x04000000)
#define CBUS_TX_MSC_IRQ_sc1_err_irq(data)                                            (0x04000000&((data)<<26))
#define CBUS_TX_MSC_IRQ_sc1_err_irq_src(data)                                        ((0x04000000&(data))>>26)
#define CBUS_TX_MSC_IRQ_get_sc1_err_irq(data)                                        ((0x04000000&(data))>>26)
#define CBUS_TX_MSC_IRQ_ddc_err_irq_shift                                            (25)
#define CBUS_TX_MSC_IRQ_ddc_err_irq_mask                                             (0x02000000)
#define CBUS_TX_MSC_IRQ_ddc_err_irq(data)                                            (0x02000000&((data)<<25))
#define CBUS_TX_MSC_IRQ_ddc_err_irq_src(data)                                        ((0x02000000&(data))>>25)
#define CBUS_TX_MSC_IRQ_get_ddc_err_irq(data)                                        ((0x02000000&(data))>>25)
#define CBUS_TX_MSC_IRQ_msc_err_irq_shift                                            (24)
#define CBUS_TX_MSC_IRQ_msc_err_irq_mask                                             (0x01000000)
#define CBUS_TX_MSC_IRQ_msc_err_irq(data)                                            (0x01000000&((data)<<24))
#define CBUS_TX_MSC_IRQ_msc_err_irq_src(data)                                        ((0x01000000&(data))>>24)
#define CBUS_TX_MSC_IRQ_get_msc_err_irq(data)                                        ((0x01000000&(data))>>24)
#define CBUS_TX_MSC_IRQ_wr_burst_irq_shift                                           (23)
#define CBUS_TX_MSC_IRQ_wr_burst_irq_mask                                            (0x00800000)
#define CBUS_TX_MSC_IRQ_wr_burst_irq(data)                                           (0x00800000&((data)<<23))
#define CBUS_TX_MSC_IRQ_wr_burst_irq_src(data)                                       ((0x00800000&(data))>>23)
#define CBUS_TX_MSC_IRQ_get_wr_burst_irq(data)                                       ((0x00800000&(data))>>23)
#define CBUS_TX_MSC_IRQ_sc3_err_irq_shift                                            (22)
#define CBUS_TX_MSC_IRQ_sc3_err_irq_mask                                             (0x00400000)
#define CBUS_TX_MSC_IRQ_sc3_err_irq(data)                                            (0x00400000&((data)<<22))
#define CBUS_TX_MSC_IRQ_sc3_err_irq_src(data)                                        ((0x00400000&(data))>>22)
#define CBUS_TX_MSC_IRQ_get_sc3_err_irq(data)                                        ((0x00400000&(data))>>22)
#define CBUS_TX_MSC_IRQ_fwdef_cmd_irq_shift                                          (21)
#define CBUS_TX_MSC_IRQ_fwdef_cmd_irq_mask                                           (0x00200000)
#define CBUS_TX_MSC_IRQ_fwdef_cmd_irq(data)                                          (0x00200000&((data)<<21))
#define CBUS_TX_MSC_IRQ_fwdef_cmd_irq_src(data)                                      ((0x00200000&(data))>>21)
#define CBUS_TX_MSC_IRQ_get_fwdef_cmd_irq(data)                                      ((0x00200000&(data))>>21)
#define CBUS_TX_MSC_IRQ_allmsc_cmd_irq_shift                                         (20)
#define CBUS_TX_MSC_IRQ_allmsc_cmd_irq_mask                                          (0x00100000)
#define CBUS_TX_MSC_IRQ_allmsc_cmd_irq(data)                                         (0x00100000&((data)<<20))
#define CBUS_TX_MSC_IRQ_allmsc_cmd_irq_src(data)                                     ((0x00100000&(data))>>20)
#define CBUS_TX_MSC_IRQ_get_allmsc_cmd_irq(data)                                     ((0x00100000&(data))>>20)
#define CBUS_TX_MSC_IRQ_abort_res_irq_shift                                          (19)
#define CBUS_TX_MSC_IRQ_abort_res_irq_mask                                           (0x00080000)
#define CBUS_TX_MSC_IRQ_abort_res_irq(data)                                          (0x00080000&((data)<<19))
#define CBUS_TX_MSC_IRQ_abort_res_irq_src(data)                                      ((0x00080000&(data))>>19)
#define CBUS_TX_MSC_IRQ_get_abort_res_irq(data)                                      ((0x00080000&(data))>>19)
#define CBUS_TX_MSC_IRQ_abort_req_irq_shift                                          (18)
#define CBUS_TX_MSC_IRQ_abort_req_irq_mask                                           (0x00040000)
#define CBUS_TX_MSC_IRQ_abort_req_irq(data)                                          (0x00040000&((data)<<18))
#define CBUS_TX_MSC_IRQ_abort_req_irq_src(data)                                      ((0x00040000&(data))>>18)
#define CBUS_TX_MSC_IRQ_get_abort_req_irq(data)                                      ((0x00040000&(data))>>18)
#define CBUS_TX_MSC_IRQ_ddc_abort_irq_shift                                          (17)
#define CBUS_TX_MSC_IRQ_ddc_abort_irq_mask                                           (0x00020000)
#define CBUS_TX_MSC_IRQ_ddc_abort_irq(data)                                          (0x00020000&((data)<<17))
#define CBUS_TX_MSC_IRQ_ddc_abort_irq_src(data)                                      ((0x00020000&(data))>>17)
#define CBUS_TX_MSC_IRQ_get_ddc_abort_irq(data)                                      ((0x00020000&(data))>>17)
#define CBUS_TX_MSC_IRQ_ddc_nack_irq_shift                                           (16)
#define CBUS_TX_MSC_IRQ_ddc_nack_irq_mask                                            (0x00010000)
#define CBUS_TX_MSC_IRQ_ddc_nack_irq(data)                                           (0x00010000&((data)<<16))
#define CBUS_TX_MSC_IRQ_ddc_nack_irq_src(data)                                       ((0x00010000&(data))>>16)
#define CBUS_TX_MSC_IRQ_get_ddc_nack_irq(data)                                       ((0x00010000&(data))>>16)
#define CBUS_TX_MSC_IRQ_msge_irq_shift                                               (15)
#define CBUS_TX_MSC_IRQ_msge_irq_mask                                                (0x00008000)
#define CBUS_TX_MSC_IRQ_msge_irq(data)                                               (0x00008000&((data)<<15))
#define CBUS_TX_MSC_IRQ_msge_irq_src(data)                                           ((0x00008000&(data))>>15)
#define CBUS_TX_MSC_IRQ_get_msge_irq(data)                                           ((0x00008000&(data))>>15)
#define CBUS_TX_MSC_IRQ_rcp_irq_shift                                                (14)
#define CBUS_TX_MSC_IRQ_rcp_irq_mask                                                 (0x00004000)
#define CBUS_TX_MSC_IRQ_rcp_irq(data)                                                (0x00004000&((data)<<14))
#define CBUS_TX_MSC_IRQ_rcp_irq_src(data)                                            ((0x00004000&(data))>>14)
#define CBUS_TX_MSC_IRQ_get_rcp_irq(data)                                            ((0x00004000&(data))>>14)
#define CBUS_TX_MSC_IRQ_rcpk_irq_shift                                               (13)
#define CBUS_TX_MSC_IRQ_rcpk_irq_mask                                                (0x00002000)
#define CBUS_TX_MSC_IRQ_rcpk_irq(data)                                               (0x00002000&((data)<<13))
#define CBUS_TX_MSC_IRQ_rcpk_irq_src(data)                                           ((0x00002000&(data))>>13)
#define CBUS_TX_MSC_IRQ_get_rcpk_irq(data)                                           ((0x00002000&(data))>>13)
#define CBUS_TX_MSC_IRQ_rcpe_irq_shift                                               (12)
#define CBUS_TX_MSC_IRQ_rcpe_irq_mask                                                (0x00001000)
#define CBUS_TX_MSC_IRQ_rcpe_irq(data)                                               (0x00001000&((data)<<12))
#define CBUS_TX_MSC_IRQ_rcpe_irq_src(data)                                           ((0x00001000&(data))>>12)
#define CBUS_TX_MSC_IRQ_get_rcpe_irq(data)                                           ((0x00001000&(data))>>12)
#define CBUS_TX_MSC_IRQ_rap_irq_shift                                                (11)
#define CBUS_TX_MSC_IRQ_rap_irq_mask                                                 (0x00000800)
#define CBUS_TX_MSC_IRQ_rap_irq(data)                                                (0x00000800&((data)<<11))
#define CBUS_TX_MSC_IRQ_rap_irq_src(data)                                            ((0x00000800&(data))>>11)
#define CBUS_TX_MSC_IRQ_get_rap_irq(data)                                            ((0x00000800&(data))>>11)
#define CBUS_TX_MSC_IRQ_rapk_irq_shift                                               (10)
#define CBUS_TX_MSC_IRQ_rapk_irq_mask                                                (0x00000400)
#define CBUS_TX_MSC_IRQ_rapk_irq(data)                                               (0x00000400&((data)<<10))
#define CBUS_TX_MSC_IRQ_rapk_irq_src(data)                                           ((0x00000400&(data))>>10)
#define CBUS_TX_MSC_IRQ_get_rapk_irq(data)                                           ((0x00000400&(data))>>10)
#define CBUS_TX_MSC_IRQ_ucp_irq_shift                                                (9)
#define CBUS_TX_MSC_IRQ_ucp_irq_mask                                                 (0x00000200)
#define CBUS_TX_MSC_IRQ_ucp_irq(data)                                                (0x00000200&((data)<<9))
#define CBUS_TX_MSC_IRQ_ucp_irq_src(data)                                            ((0x00000200&(data))>>9)
#define CBUS_TX_MSC_IRQ_get_ucp_irq(data)                                            ((0x00000200&(data))>>9)
#define CBUS_TX_MSC_IRQ_ucpe_irq_shift                                               (8)
#define CBUS_TX_MSC_IRQ_ucpe_irq_mask                                                (0x00000100)
#define CBUS_TX_MSC_IRQ_ucpe_irq(data)                                               (0x00000100&((data)<<8))
#define CBUS_TX_MSC_IRQ_ucpe_irq_src(data)                                           ((0x00000100&(data))>>8)
#define CBUS_TX_MSC_IRQ_get_ucpe_irq(data)                                           ((0x00000100&(data))>>8)
#define CBUS_TX_MSC_IRQ_ucpk_irq_shift                                               (7)
#define CBUS_TX_MSC_IRQ_ucpk_irq_mask                                                (0x00000080)
#define CBUS_TX_MSC_IRQ_ucpk_irq(data)                                               (0x00000080&((data)<<7))
#define CBUS_TX_MSC_IRQ_ucpk_irq_src(data)                                           ((0x00000080&(data))>>7)
#define CBUS_TX_MSC_IRQ_get_ucpk_irq(data)                                           ((0x00000080&(data))>>7)
#define CBUS_TX_MSC_IRQ_msg_sub_irq_shift                                            (6)
#define CBUS_TX_MSC_IRQ_msg_sub_irq_mask                                             (0x00000040)
#define CBUS_TX_MSC_IRQ_msg_sub_irq(data)                                            (0x00000040&((data)<<6))
#define CBUS_TX_MSC_IRQ_msg_sub_irq_src(data)                                        ((0x00000040&(data))>>6)
#define CBUS_TX_MSC_IRQ_get_msg_sub_irq(data)                                        ((0x00000040&(data))>>6)
#define CBUS_TX_MSC_IRQ_det_rxsense_irq_shift                                        (5)
#define CBUS_TX_MSC_IRQ_det_rxsense_irq_mask                                         (0x00000020)
#define CBUS_TX_MSC_IRQ_det_rxsense_irq(data)                                        (0x00000020&((data)<<5))
#define CBUS_TX_MSC_IRQ_det_rxsense_irq_src(data)                                    ((0x00000020&(data))>>5)
#define CBUS_TX_MSC_IRQ_get_det_rxsense_irq(data)                                    ((0x00000020&(data))>>5)
#define CBUS_TX_MSC_IRQ_msc_hpd_irq_shift                                            (4)
#define CBUS_TX_MSC_IRQ_msc_hpd_irq_mask                                             (0x00000010)
#define CBUS_TX_MSC_IRQ_msc_hpd_irq(data)                                            (0x00000010&((data)<<4))
#define CBUS_TX_MSC_IRQ_msc_hpd_irq_src(data)                                        ((0x00000010&(data))>>4)
#define CBUS_TX_MSC_IRQ_get_msc_hpd_irq(data)                                        ((0x00000010&(data))>>4)
#define CBUS_TX_MSC_IRQ_wr_xstat_irq_shift                                           (3)
#define CBUS_TX_MSC_IRQ_wr_xstat_irq_mask                                            (0x00000008)
#define CBUS_TX_MSC_IRQ_wr_xstat_irq(data)                                           (0x00000008&((data)<<3))
#define CBUS_TX_MSC_IRQ_wr_xstat_irq_src(data)                                       ((0x00000008&(data))>>3)
#define CBUS_TX_MSC_IRQ_get_wr_xstat_irq(data)                                       ((0x00000008&(data))>>3)
#define CBUS_TX_MSC_IRQ_read_xdevcap_irq_shift                                       (2)
#define CBUS_TX_MSC_IRQ_read_xdevcap_irq_mask                                        (0x00000004)
#define CBUS_TX_MSC_IRQ_read_xdevcap_irq(data)                                       (0x00000004&((data)<<2))
#define CBUS_TX_MSC_IRQ_read_xdevcap_irq_src(data)                                   ((0x00000004&(data))>>2)
#define CBUS_TX_MSC_IRQ_get_read_xdevcap_irq(data)                                   ((0x00000004&(data))>>2)
#define CBUS_TX_MSC_IRQ_write_data_shift                                             (0)
#define CBUS_TX_MSC_IRQ_write_data_mask                                              (0x00000001)
#define CBUS_TX_MSC_IRQ_write_data(data)                                             (0x00000001&((data)<<0))
#define CBUS_TX_MSC_IRQ_write_data_src(data)                                         ((0x00000001&(data))>>0)
#define CBUS_TX_MSC_IRQ_get_write_data(data)                                         ((0x00000001&(data))>>0)


#define CBUS_TX_MSC_IRQ_EN                                                           0x98037B5C
#define CBUS_TX_MSC_IRQ_EN_reg_addr                                                  "0xD8037B5C"
#define CBUS_TX_MSC_IRQ_EN_reg                                                       0xD8037B5C
#define set_CBUS_TX_MSC_IRQ_EN_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_IRQ_EN_reg)=data)
#define get_CBUS_TX_MSC_IRQ_EN_reg   (*((volatile unsigned int*) CBUS_TX_MSC_IRQ_EN_reg))
#define CBUS_TX_MSC_IRQ_EN_inst_adr                                                  "0x00D7"
#define CBUS_TX_MSC_IRQ_EN_inst                                                      0x00D7
#define CBUS_TX_MSC_IRQ_EN_wr_stat_irq_en_shift                                      (31)
#define CBUS_TX_MSC_IRQ_EN_wr_stat_irq_en_mask                                       (0x80000000)
#define CBUS_TX_MSC_IRQ_EN_wr_stat_irq_en(data)                                      (0x80000000&((data)<<31))
#define CBUS_TX_MSC_IRQ_EN_wr_stat_irq_en_src(data)                                  ((0x80000000&(data))>>31)
#define CBUS_TX_MSC_IRQ_EN_get_wr_stat_irq_en(data)                                  ((0x80000000&(data))>>31)
#define CBUS_TX_MSC_IRQ_EN_rd_devcap_irq_en_shift                                    (30)
#define CBUS_TX_MSC_IRQ_EN_rd_devcap_irq_en_mask                                     (0x40000000)
#define CBUS_TX_MSC_IRQ_EN_rd_devcap_irq_en(data)                                    (0x40000000&((data)<<30))
#define CBUS_TX_MSC_IRQ_EN_rd_devcap_irq_en_src(data)                                ((0x40000000&(data))>>30)
#define CBUS_TX_MSC_IRQ_EN_get_rd_devcap_irq_en(data)                                ((0x40000000&(data))>>30)
#define CBUS_TX_MSC_IRQ_EN_get_stat_irq_en_shift                                     (29)
#define CBUS_TX_MSC_IRQ_EN_get_stat_irq_en_mask                                      (0x20000000)
#define CBUS_TX_MSC_IRQ_EN_get_stat_irq_en(data)                                     (0x20000000&((data)<<29))
#define CBUS_TX_MSC_IRQ_EN_get_stat_irq_en_src(data)                                 ((0x20000000&(data))>>29)
#define CBUS_TX_MSC_IRQ_EN_get_get_stat_irq_en(data)                                 ((0x20000000&(data))>>29)
#define CBUS_TX_MSC_IRQ_EN_get_id_irq_en_shift                                       (28)
#define CBUS_TX_MSC_IRQ_EN_get_id_irq_en_mask                                        (0x10000000)
#define CBUS_TX_MSC_IRQ_EN_get_id_irq_en(data)                                       (0x10000000&((data)<<28))
#define CBUS_TX_MSC_IRQ_EN_get_id_irq_en_src(data)                                   ((0x10000000&(data))>>28)
#define CBUS_TX_MSC_IRQ_EN_get_get_id_irq_en(data)                                   ((0x10000000&(data))>>28)
#define CBUS_TX_MSC_IRQ_EN_get_msg_irq_en_shift                                      (27)
#define CBUS_TX_MSC_IRQ_EN_get_msg_irq_en_mask                                       (0x08000000)
#define CBUS_TX_MSC_IRQ_EN_get_msg_irq_en(data)                                      (0x08000000&((data)<<27))
#define CBUS_TX_MSC_IRQ_EN_get_msg_irq_en_src(data)                                  ((0x08000000&(data))>>27)
#define CBUS_TX_MSC_IRQ_EN_get_get_msg_irq_en(data)                                  ((0x08000000&(data))>>27)
#define CBUS_TX_MSC_IRQ_EN_sc1_err_irq_en_shift                                      (26)
#define CBUS_TX_MSC_IRQ_EN_sc1_err_irq_en_mask                                       (0x04000000)
#define CBUS_TX_MSC_IRQ_EN_sc1_err_irq_en(data)                                      (0x04000000&((data)<<26))
#define CBUS_TX_MSC_IRQ_EN_sc1_err_irq_en_src(data)                                  ((0x04000000&(data))>>26)
#define CBUS_TX_MSC_IRQ_EN_get_sc1_err_irq_en(data)                                  ((0x04000000&(data))>>26)
#define CBUS_TX_MSC_IRQ_EN_ddc_err_irq_en_shift                                      (25)
#define CBUS_TX_MSC_IRQ_EN_ddc_err_irq_en_mask                                       (0x02000000)
#define CBUS_TX_MSC_IRQ_EN_ddc_err_irq_en(data)                                      (0x02000000&((data)<<25))
#define CBUS_TX_MSC_IRQ_EN_ddc_err_irq_en_src(data)                                  ((0x02000000&(data))>>25)
#define CBUS_TX_MSC_IRQ_EN_get_ddc_err_irq_en(data)                                  ((0x02000000&(data))>>25)
#define CBUS_TX_MSC_IRQ_EN_msc_err_irq_en_shift                                      (24)
#define CBUS_TX_MSC_IRQ_EN_msc_err_irq_en_mask                                       (0x01000000)
#define CBUS_TX_MSC_IRQ_EN_msc_err_irq_en(data)                                      (0x01000000&((data)<<24))
#define CBUS_TX_MSC_IRQ_EN_msc_err_irq_en_src(data)                                  ((0x01000000&(data))>>24)
#define CBUS_TX_MSC_IRQ_EN_get_msc_err_irq_en(data)                                  ((0x01000000&(data))>>24)
#define CBUS_TX_MSC_IRQ_EN_wr_burst_irq_en_shift                                     (23)
#define CBUS_TX_MSC_IRQ_EN_wr_burst_irq_en_mask                                      (0x00800000)
#define CBUS_TX_MSC_IRQ_EN_wr_burst_irq_en(data)                                     (0x00800000&((data)<<23))
#define CBUS_TX_MSC_IRQ_EN_wr_burst_irq_en_src(data)                                 ((0x00800000&(data))>>23)
#define CBUS_TX_MSC_IRQ_EN_get_wr_burst_irq_en(data)                                 ((0x00800000&(data))>>23)
#define CBUS_TX_MSC_IRQ_EN_sc3_err_irq_en_shift                                      (22)
#define CBUS_TX_MSC_IRQ_EN_sc3_err_irq_en_mask                                       (0x00400000)
#define CBUS_TX_MSC_IRQ_EN_sc3_err_irq_en(data)                                      (0x00400000&((data)<<22))
#define CBUS_TX_MSC_IRQ_EN_sc3_err_irq_en_src(data)                                  ((0x00400000&(data))>>22)
#define CBUS_TX_MSC_IRQ_EN_get_sc3_err_irq_en(data)                                  ((0x00400000&(data))>>22)
#define CBUS_TX_MSC_IRQ_EN_fwdef_cmd_irq_en_shift                                    (21)
#define CBUS_TX_MSC_IRQ_EN_fwdef_cmd_irq_en_mask                                     (0x00200000)
#define CBUS_TX_MSC_IRQ_EN_fwdef_cmd_irq_en(data)                                    (0x00200000&((data)<<21))
#define CBUS_TX_MSC_IRQ_EN_fwdef_cmd_irq_en_src(data)                                ((0x00200000&(data))>>21)
#define CBUS_TX_MSC_IRQ_EN_get_fwdef_cmd_irq_en(data)                                ((0x00200000&(data))>>21)
#define CBUS_TX_MSC_IRQ_EN_allmsc_cmd_irq_en_shift                                   (20)
#define CBUS_TX_MSC_IRQ_EN_allmsc_cmd_irq_en_mask                                    (0x00100000)
#define CBUS_TX_MSC_IRQ_EN_allmsc_cmd_irq_en(data)                                   (0x00100000&((data)<<20))
#define CBUS_TX_MSC_IRQ_EN_allmsc_cmd_irq_en_src(data)                               ((0x00100000&(data))>>20)
#define CBUS_TX_MSC_IRQ_EN_get_allmsc_cmd_irq_en(data)                               ((0x00100000&(data))>>20)
#define CBUS_TX_MSC_IRQ_EN_abort_res_irq_en_shift                                    (19)
#define CBUS_TX_MSC_IRQ_EN_abort_res_irq_en_mask                                     (0x00080000)
#define CBUS_TX_MSC_IRQ_EN_abort_res_irq_en(data)                                    (0x00080000&((data)<<19))
#define CBUS_TX_MSC_IRQ_EN_abort_res_irq_en_src(data)                                ((0x00080000&(data))>>19)
#define CBUS_TX_MSC_IRQ_EN_get_abort_res_irq_en(data)                                ((0x00080000&(data))>>19)
#define CBUS_TX_MSC_IRQ_EN_abort_req_irq_en_shift                                    (18)
#define CBUS_TX_MSC_IRQ_EN_abort_req_irq_en_mask                                     (0x00040000)
#define CBUS_TX_MSC_IRQ_EN_abort_req_irq_en(data)                                    (0x00040000&((data)<<18))
#define CBUS_TX_MSC_IRQ_EN_abort_req_irq_en_src(data)                                ((0x00040000&(data))>>18)
#define CBUS_TX_MSC_IRQ_EN_get_abort_req_irq_en(data)                                ((0x00040000&(data))>>18)
#define CBUS_TX_MSC_IRQ_EN_ddc_abort_irq_en_shift                                    (17)
#define CBUS_TX_MSC_IRQ_EN_ddc_abort_irq_en_mask                                     (0x00020000)
#define CBUS_TX_MSC_IRQ_EN_ddc_abort_irq_en(data)                                    (0x00020000&((data)<<17))
#define CBUS_TX_MSC_IRQ_EN_ddc_abort_irq_en_src(data)                                ((0x00020000&(data))>>17)
#define CBUS_TX_MSC_IRQ_EN_get_ddc_abort_irq_en(data)                                ((0x00020000&(data))>>17)
#define CBUS_TX_MSC_IRQ_EN_ddc_nack_irq_en_shift                                     (16)
#define CBUS_TX_MSC_IRQ_EN_ddc_nack_irq_en_mask                                      (0x00010000)
#define CBUS_TX_MSC_IRQ_EN_ddc_nack_irq_en(data)                                     (0x00010000&((data)<<16))
#define CBUS_TX_MSC_IRQ_EN_ddc_nack_irq_en_src(data)                                 ((0x00010000&(data))>>16)
#define CBUS_TX_MSC_IRQ_EN_get_ddc_nack_irq_en(data)                                 ((0x00010000&(data))>>16)
#define CBUS_TX_MSC_IRQ_EN_msge_irq_en_shift                                         (15)
#define CBUS_TX_MSC_IRQ_EN_msge_irq_en_mask                                          (0x00008000)
#define CBUS_TX_MSC_IRQ_EN_msge_irq_en(data)                                         (0x00008000&((data)<<15))
#define CBUS_TX_MSC_IRQ_EN_msge_irq_en_src(data)                                     ((0x00008000&(data))>>15)
#define CBUS_TX_MSC_IRQ_EN_get_msge_irq_en(data)                                     ((0x00008000&(data))>>15)
#define CBUS_TX_MSC_IRQ_EN_rcp_irq_en_shift                                          (14)
#define CBUS_TX_MSC_IRQ_EN_rcp_irq_en_mask                                           (0x00004000)
#define CBUS_TX_MSC_IRQ_EN_rcp_irq_en(data)                                          (0x00004000&((data)<<14))
#define CBUS_TX_MSC_IRQ_EN_rcp_irq_en_src(data)                                      ((0x00004000&(data))>>14)
#define CBUS_TX_MSC_IRQ_EN_get_rcp_irq_en(data)                                      ((0x00004000&(data))>>14)
#define CBUS_TX_MSC_IRQ_EN_rcpk_irq_en_shift                                         (13)
#define CBUS_TX_MSC_IRQ_EN_rcpk_irq_en_mask                                          (0x00002000)
#define CBUS_TX_MSC_IRQ_EN_rcpk_irq_en(data)                                         (0x00002000&((data)<<13))
#define CBUS_TX_MSC_IRQ_EN_rcpk_irq_en_src(data)                                     ((0x00002000&(data))>>13)
#define CBUS_TX_MSC_IRQ_EN_get_rcpk_irq_en(data)                                     ((0x00002000&(data))>>13)
#define CBUS_TX_MSC_IRQ_EN_rcpe_irq_en_shift                                         (12)
#define CBUS_TX_MSC_IRQ_EN_rcpe_irq_en_mask                                          (0x00001000)
#define CBUS_TX_MSC_IRQ_EN_rcpe_irq_en(data)                                         (0x00001000&((data)<<12))
#define CBUS_TX_MSC_IRQ_EN_rcpe_irq_en_src(data)                                     ((0x00001000&(data))>>12)
#define CBUS_TX_MSC_IRQ_EN_get_rcpe_irq_en(data)                                     ((0x00001000&(data))>>12)
#define CBUS_TX_MSC_IRQ_EN_rap_irq_en_shift                                          (11)
#define CBUS_TX_MSC_IRQ_EN_rap_irq_en_mask                                           (0x00000800)
#define CBUS_TX_MSC_IRQ_EN_rap_irq_en(data)                                          (0x00000800&((data)<<11))
#define CBUS_TX_MSC_IRQ_EN_rap_irq_en_src(data)                                      ((0x00000800&(data))>>11)
#define CBUS_TX_MSC_IRQ_EN_get_rap_irq_en(data)                                      ((0x00000800&(data))>>11)
#define CBUS_TX_MSC_IRQ_EN_rapk_irq_en_shift                                         (10)
#define CBUS_TX_MSC_IRQ_EN_rapk_irq_en_mask                                          (0x00000400)
#define CBUS_TX_MSC_IRQ_EN_rapk_irq_en(data)                                         (0x00000400&((data)<<10))
#define CBUS_TX_MSC_IRQ_EN_rapk_irq_en_src(data)                                     ((0x00000400&(data))>>10)
#define CBUS_TX_MSC_IRQ_EN_get_rapk_irq_en(data)                                     ((0x00000400&(data))>>10)
#define CBUS_TX_MSC_IRQ_EN_ucp_irq_en_shift                                          (9)
#define CBUS_TX_MSC_IRQ_EN_ucp_irq_en_mask                                           (0x00000200)
#define CBUS_TX_MSC_IRQ_EN_ucp_irq_en(data)                                          (0x00000200&((data)<<9))
#define CBUS_TX_MSC_IRQ_EN_ucp_irq_en_src(data)                                      ((0x00000200&(data))>>9)
#define CBUS_TX_MSC_IRQ_EN_get_ucp_irq_en(data)                                      ((0x00000200&(data))>>9)
#define CBUS_TX_MSC_IRQ_EN_ucpe_irq_en_shift                                         (8)
#define CBUS_TX_MSC_IRQ_EN_ucpe_irq_en_mask                                          (0x00000100)
#define CBUS_TX_MSC_IRQ_EN_ucpe_irq_en(data)                                         (0x00000100&((data)<<8))
#define CBUS_TX_MSC_IRQ_EN_ucpe_irq_en_src(data)                                     ((0x00000100&(data))>>8)
#define CBUS_TX_MSC_IRQ_EN_get_ucpe_irq_en(data)                                     ((0x00000100&(data))>>8)
#define CBUS_TX_MSC_IRQ_EN_ucpk_irq_en_shift                                         (7)
#define CBUS_TX_MSC_IRQ_EN_ucpk_irq_en_mask                                          (0x00000080)
#define CBUS_TX_MSC_IRQ_EN_ucpk_irq_en(data)                                         (0x00000080&((data)<<7))
#define CBUS_TX_MSC_IRQ_EN_ucpk_irq_en_src(data)                                     ((0x00000080&(data))>>7)
#define CBUS_TX_MSC_IRQ_EN_get_ucpk_irq_en(data)                                     ((0x00000080&(data))>>7)
#define CBUS_TX_MSC_IRQ_EN_msg_sub_irq_en_shift                                      (6)
#define CBUS_TX_MSC_IRQ_EN_msg_sub_irq_en_mask                                       (0x00000040)
#define CBUS_TX_MSC_IRQ_EN_msg_sub_irq_en(data)                                      (0x00000040&((data)<<6))
#define CBUS_TX_MSC_IRQ_EN_msg_sub_irq_en_src(data)                                  ((0x00000040&(data))>>6)
#define CBUS_TX_MSC_IRQ_EN_get_msg_sub_irq_en(data)                                  ((0x00000040&(data))>>6)
#define CBUS_TX_MSC_IRQ_EN_det_rxsense_irq_en_shift                                  (5)
#define CBUS_TX_MSC_IRQ_EN_det_rxsense_irq_en_mask                                   (0x00000020)
#define CBUS_TX_MSC_IRQ_EN_det_rxsense_irq_en(data)                                  (0x00000020&((data)<<5))
#define CBUS_TX_MSC_IRQ_EN_det_rxsense_irq_en_src(data)                              ((0x00000020&(data))>>5)
#define CBUS_TX_MSC_IRQ_EN_get_det_rxsense_irq_en(data)                              ((0x00000020&(data))>>5)
#define CBUS_TX_MSC_IRQ_EN_msc_hpd_irq_en_shift                                      (4)
#define CBUS_TX_MSC_IRQ_EN_msc_hpd_irq_en_mask                                       (0x00000010)
#define CBUS_TX_MSC_IRQ_EN_msc_hpd_irq_en(data)                                      (0x00000010&((data)<<4))
#define CBUS_TX_MSC_IRQ_EN_msc_hpd_irq_en_src(data)                                  ((0x00000010&(data))>>4)
#define CBUS_TX_MSC_IRQ_EN_get_msc_hpd_irq_en(data)                                  ((0x00000010&(data))>>4)
#define CBUS_TX_MSC_IRQ_EN_wr_xstat_irq_en_shift                                     (3)
#define CBUS_TX_MSC_IRQ_EN_wr_xstat_irq_en_mask                                      (0x00000008)
#define CBUS_TX_MSC_IRQ_EN_wr_xstat_irq_en(data)                                     (0x00000008&((data)<<3))
#define CBUS_TX_MSC_IRQ_EN_wr_xstat_irq_en_src(data)                                 ((0x00000008&(data))>>3)
#define CBUS_TX_MSC_IRQ_EN_get_wr_xstat_irq_en(data)                                 ((0x00000008&(data))>>3)
#define CBUS_TX_MSC_IRQ_EN_read_xdevcap_irq_en_shift                                 (2)
#define CBUS_TX_MSC_IRQ_EN_read_xdevcap_irq_en_mask                                  (0x00000004)
#define CBUS_TX_MSC_IRQ_EN_read_xdevcap_irq_en(data)                                 (0x00000004&((data)<<2))
#define CBUS_TX_MSC_IRQ_EN_read_xdevcap_irq_en_src(data)                             ((0x00000004&(data))>>2)
#define CBUS_TX_MSC_IRQ_EN_get_read_xdevcap_irq_en(data)                             ((0x00000004&(data))>>2)


#define CBUS_TX_CBUS_TX_INT                                                          0x98037B90
#define CBUS_TX_CBUS_TX_INT_reg_addr                                                 "0xD8037B90"
#define CBUS_TX_CBUS_TX_INT_reg                                                      0xD8037B90
#define set_CBUS_TX_CBUS_TX_INT_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_TX_INT_reg)=data)
#define get_CBUS_TX_CBUS_TX_INT_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_TX_INT_reg))
#define CBUS_TX_CBUS_TX_INT_inst_adr                                                 "0x00E4"
#define CBUS_TX_CBUS_TX_INT_inst                                                     0x00E4
#define CBUS_TX_CBUS_TX_INT_fw0_fin_irq_en_shift                                     (31)
#define CBUS_TX_CBUS_TX_INT_fw0_fin_irq_en_mask                                      (0x80000000)
#define CBUS_TX_CBUS_TX_INT_fw0_fin_irq_en(data)                                     (0x80000000&((data)<<31))
#define CBUS_TX_CBUS_TX_INT_fw0_fin_irq_en_src(data)                                 ((0x80000000&(data))>>31)
#define CBUS_TX_CBUS_TX_INT_get_fw0_fin_irq_en(data)                                 ((0x80000000&(data))>>31)
#define CBUS_TX_CBUS_TX_INT_fw0_cmd_irq_en_shift                                     (30)
#define CBUS_TX_CBUS_TX_INT_fw0_cmd_irq_en_mask                                      (0x40000000)
#define CBUS_TX_CBUS_TX_INT_fw0_cmd_irq_en(data)                                     (0x40000000&((data)<<30))
#define CBUS_TX_CBUS_TX_INT_fw0_cmd_irq_en_src(data)                                 ((0x40000000&(data))>>30)
#define CBUS_TX_CBUS_TX_INT_get_fw0_cmd_irq_en(data)                                 ((0x40000000&(data))>>30)
#define CBUS_TX_CBUS_TX_INT_fw0_data_irq_en_shift                                    (29)
#define CBUS_TX_CBUS_TX_INT_fw0_data_irq_en_mask                                     (0x20000000)
#define CBUS_TX_CBUS_TX_INT_fw0_data_irq_en(data)                                    (0x20000000&((data)<<29))
#define CBUS_TX_CBUS_TX_INT_fw0_data_irq_en_src(data)                                ((0x20000000&(data))>>29)
#define CBUS_TX_CBUS_TX_INT_get_fw0_data_irq_en(data)                                ((0x20000000&(data))>>29)
#define CBUS_TX_CBUS_TX_INT_ddc_fin_irq_en_shift                                     (23)
#define CBUS_TX_CBUS_TX_INT_ddc_fin_irq_en_mask                                      (0x00800000)
#define CBUS_TX_CBUS_TX_INT_ddc_fin_irq_en(data)                                     (0x00800000&((data)<<23))
#define CBUS_TX_CBUS_TX_INT_ddc_fin_irq_en_src(data)                                 ((0x00800000&(data))>>23)
#define CBUS_TX_CBUS_TX_INT_get_ddc_fin_irq_en(data)                                 ((0x00800000&(data))>>23)
#define CBUS_TX_CBUS_TX_INT_clk_mode_irq_en_shift                                    (15)
#define CBUS_TX_CBUS_TX_INT_clk_mode_irq_en_mask                                     (0x00008000)
#define CBUS_TX_CBUS_TX_INT_clk_mode_irq_en(data)                                    (0x00008000&((data)<<15))
#define CBUS_TX_CBUS_TX_INT_clk_mode_irq_en_src(data)                                ((0x00008000&(data))>>15)
#define CBUS_TX_CBUS_TX_INT_get_clk_mode_irq_en(data)                                ((0x00008000&(data))>>15)
#define CBUS_TX_CBUS_TX_INT_dcap_rdy_irq_en_shift                                    (14)
#define CBUS_TX_CBUS_TX_INT_dcap_rdy_irq_en_mask                                     (0x00004000)
#define CBUS_TX_CBUS_TX_INT_dcap_rdy_irq_en(data)                                    (0x00004000&((data)<<14))
#define CBUS_TX_CBUS_TX_INT_dcap_rdy_irq_en_src(data)                                ((0x00004000&(data))>>14)
#define CBUS_TX_CBUS_TX_INT_get_dcap_rdy_irq_en(data)                                ((0x00004000&(data))>>14)
#define CBUS_TX_CBUS_TX_INT_muted_chg_irq_en_shift                                   (13)
#define CBUS_TX_CBUS_TX_INT_muted_chg_irq_en_mask                                    (0x00002000)
#define CBUS_TX_CBUS_TX_INT_muted_chg_irq_en(data)                                   (0x00002000&((data)<<13))
#define CBUS_TX_CBUS_TX_INT_muted_chg_irq_en_src(data)                               ((0x00002000&(data))>>13)
#define CBUS_TX_CBUS_TX_INT_get_muted_chg_irq_en(data)                               ((0x00002000&(data))>>13)
#define CBUS_TX_CBUS_TX_INT_path_en_irq_en_shift                                     (12)
#define CBUS_TX_CBUS_TX_INT_path_en_irq_en_mask                                      (0x00001000)
#define CBUS_TX_CBUS_TX_INT_path_en_irq_en(data)                                     (0x00001000&((data)<<12))
#define CBUS_TX_CBUS_TX_INT_path_en_irq_en_src(data)                                 ((0x00001000&(data))>>12)
#define CBUS_TX_CBUS_TX_INT_get_path_en_irq_en(data)                                 ((0x00001000&(data))>>12)
#define CBUS_TX_CBUS_TX_INT_sink_det_irq_en_shift                                    (10)
#define CBUS_TX_CBUS_TX_INT_sink_det_irq_en_mask                                     (0x00000400)
#define CBUS_TX_CBUS_TX_INT_sink_det_irq_en(data)                                    (0x00000400&((data)<<10))
#define CBUS_TX_CBUS_TX_INT_sink_det_irq_en_src(data)                                ((0x00000400&(data))>>10)
#define CBUS_TX_CBUS_TX_INT_get_sink_det_irq_en(data)                                ((0x00000400&(data))>>10)
#define CBUS_TX_CBUS_TX_INT_parity_err_irq_en_shift                                  (9)
#define CBUS_TX_CBUS_TX_INT_parity_err_irq_en_mask                                   (0x00000200)
#define CBUS_TX_CBUS_TX_INT_parity_err_irq_en(data)                                  (0x00000200&((data)<<9))
#define CBUS_TX_CBUS_TX_INT_parity_err_irq_en_src(data)                              ((0x00000200&(data))>>9)
#define CBUS_TX_CBUS_TX_INT_get_parity_err_irq_en(data)                              ((0x00000200&(data))>>9)
#define CBUS_TX_CBUS_TX_INT_disconn_irq_en_shift                                     (8)
#define CBUS_TX_CBUS_TX_INT_disconn_irq_en_mask                                      (0x00000100)
#define CBUS_TX_CBUS_TX_INT_disconn_irq_en(data)                                     (0x00000100&((data)<<8))
#define CBUS_TX_CBUS_TX_INT_disconn_irq_en_src(data)                                 ((0x00000100&(data))>>8)
#define CBUS_TX_CBUS_TX_INT_get_disconn_irq_en(data)                                 ((0x00000100&(data))>>8)


#define CBUS_TX_CBUS_TX_INT1                                                         0x98037B94
#define CBUS_TX_CBUS_TX_INT1_reg_addr                                                "0xD8037B94"
#define CBUS_TX_CBUS_TX_INT1_reg                                                     0xD8037B94
#define set_CBUS_TX_CBUS_TX_INT1_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_TX_INT1_reg)=data)
#define get_CBUS_TX_CBUS_TX_INT1_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_TX_INT1_reg))
#define CBUS_TX_CBUS_TX_INT1_inst_adr                                                "0x00E5"
#define CBUS_TX_CBUS_TX_INT1_inst                                                    0x00E5
#define CBUS_TX_CBUS_TX_INT1_fw0_fin_irq_shift                                       (31)
#define CBUS_TX_CBUS_TX_INT1_fw0_fin_irq_mask                                        (0x80000000)
#define CBUS_TX_CBUS_TX_INT1_fw0_fin_irq(data)                                       (0x80000000&((data)<<31))
#define CBUS_TX_CBUS_TX_INT1_fw0_fin_irq_src(data)                                   ((0x80000000&(data))>>31)
#define CBUS_TX_CBUS_TX_INT1_get_fw0_fin_irq(data)                                   ((0x80000000&(data))>>31)
#define CBUS_TX_CBUS_TX_INT1_fw0_cmd_irq_shift                                       (30)
#define CBUS_TX_CBUS_TX_INT1_fw0_cmd_irq_mask                                        (0x40000000)
#define CBUS_TX_CBUS_TX_INT1_fw0_cmd_irq(data)                                       (0x40000000&((data)<<30))
#define CBUS_TX_CBUS_TX_INT1_fw0_cmd_irq_src(data)                                   ((0x40000000&(data))>>30)
#define CBUS_TX_CBUS_TX_INT1_get_fw0_cmd_irq(data)                                   ((0x40000000&(data))>>30)
#define CBUS_TX_CBUS_TX_INT1_fw0_data_irq_shift                                      (29)
#define CBUS_TX_CBUS_TX_INT1_fw0_data_irq_mask                                       (0x20000000)
#define CBUS_TX_CBUS_TX_INT1_fw0_data_irq(data)                                      (0x20000000&((data)<<29))
#define CBUS_TX_CBUS_TX_INT1_fw0_data_irq_src(data)                                  ((0x20000000&(data))>>29)
#define CBUS_TX_CBUS_TX_INT1_get_fw0_data_irq(data)                                  ((0x20000000&(data))>>29)
#define CBUS_TX_CBUS_TX_INT1_ddc_fin_irq_shift                                       (23)
#define CBUS_TX_CBUS_TX_INT1_ddc_fin_irq_mask                                        (0x00800000)
#define CBUS_TX_CBUS_TX_INT1_ddc_fin_irq(data)                                       (0x00800000&((data)<<23))
#define CBUS_TX_CBUS_TX_INT1_ddc_fin_irq_src(data)                                   ((0x00800000&(data))>>23)
#define CBUS_TX_CBUS_TX_INT1_get_ddc_fin_irq(data)                                   ((0x00800000&(data))>>23)
#define CBUS_TX_CBUS_TX_INT1_clk_mode_chg_shift                                      (15)
#define CBUS_TX_CBUS_TX_INT1_clk_mode_chg_mask                                       (0x00008000)
#define CBUS_TX_CBUS_TX_INT1_clk_mode_chg(data)                                      (0x00008000&((data)<<15))
#define CBUS_TX_CBUS_TX_INT1_clk_mode_chg_src(data)                                  ((0x00008000&(data))>>15)
#define CBUS_TX_CBUS_TX_INT1_get_clk_mode_chg(data)                                  ((0x00008000&(data))>>15)
#define CBUS_TX_CBUS_TX_INT1_dcap_rdy_chg_shift                                      (14)
#define CBUS_TX_CBUS_TX_INT1_dcap_rdy_chg_mask                                       (0x00004000)
#define CBUS_TX_CBUS_TX_INT1_dcap_rdy_chg(data)                                      (0x00004000&((data)<<14))
#define CBUS_TX_CBUS_TX_INT1_dcap_rdy_chg_src(data)                                  ((0x00004000&(data))>>14)
#define CBUS_TX_CBUS_TX_INT1_get_dcap_rdy_chg(data)                                  ((0x00004000&(data))>>14)
#define CBUS_TX_CBUS_TX_INT1_muted_chg_shift                                         (13)
#define CBUS_TX_CBUS_TX_INT1_muted_chg_mask                                          (0x00002000)
#define CBUS_TX_CBUS_TX_INT1_muted_chg(data)                                         (0x00002000&((data)<<13))
#define CBUS_TX_CBUS_TX_INT1_muted_chg_src(data)                                     ((0x00002000&(data))>>13)
#define CBUS_TX_CBUS_TX_INT1_get_muted_chg(data)                                     ((0x00002000&(data))>>13)
#define CBUS_TX_CBUS_TX_INT1_path_en_chg_shift                                       (12)
#define CBUS_TX_CBUS_TX_INT1_path_en_chg_mask                                        (0x00001000)
#define CBUS_TX_CBUS_TX_INT1_path_en_chg(data)                                       (0x00001000&((data)<<12))
#define CBUS_TX_CBUS_TX_INT1_path_en_chg_src(data)                                   ((0x00001000&(data))>>12)
#define CBUS_TX_CBUS_TX_INT1_get_path_en_chg(data)                                   ((0x00001000&(data))>>12)
#define CBUS_TX_CBUS_TX_INT1_sink_det_irq_shift                                      (10)
#define CBUS_TX_CBUS_TX_INT1_sink_det_irq_mask                                       (0x00000400)
#define CBUS_TX_CBUS_TX_INT1_sink_det_irq(data)                                      (0x00000400&((data)<<10))
#define CBUS_TX_CBUS_TX_INT1_sink_det_irq_src(data)                                  ((0x00000400&(data))>>10)
#define CBUS_TX_CBUS_TX_INT1_get_sink_det_irq(data)                                  ((0x00000400&(data))>>10)
#define CBUS_TX_CBUS_TX_INT1_parity_err_irq_shift                                    (9)
#define CBUS_TX_CBUS_TX_INT1_parity_err_irq_mask                                     (0x00000200)
#define CBUS_TX_CBUS_TX_INT1_parity_err_irq(data)                                    (0x00000200&((data)<<9))
#define CBUS_TX_CBUS_TX_INT1_parity_err_irq_src(data)                                ((0x00000200&(data))>>9)
#define CBUS_TX_CBUS_TX_INT1_get_parity_err_irq(data)                                ((0x00000200&(data))>>9)
#define CBUS_TX_CBUS_TX_INT1_disconn_irq_shift                                       (8)
#define CBUS_TX_CBUS_TX_INT1_disconn_irq_mask                                        (0x00000100)
#define CBUS_TX_CBUS_TX_INT1_disconn_irq(data)                                       (0x00000100&((data)<<8))
#define CBUS_TX_CBUS_TX_INT1_disconn_irq_src(data)                                   ((0x00000100&(data))>>8)
#define CBUS_TX_CBUS_TX_INT1_get_disconn_irq(data)                                   ((0x00000100&(data))>>8)
#define CBUS_TX_CBUS_TX_INT1_write_data_shift                                        (0)
#define CBUS_TX_CBUS_TX_INT1_write_data_mask                                         (0x00000001)
#define CBUS_TX_CBUS_TX_INT1_write_data(data)                                        (0x00000001&((data)<<0))
#define CBUS_TX_CBUS_TX_INT1_write_data_src(data)                                    ((0x00000001&(data))>>0)
#define CBUS_TX_CBUS_TX_INT1_get_write_data(data)                                    ((0x00000001&(data))>>0)


#define CBUS_TX_DEVCAP_INT_EN                                                        0x98037BA8
#define CBUS_TX_DEVCAP_INT_EN_reg_addr                                               "0xD8037BA8"
#define CBUS_TX_DEVCAP_INT_EN_reg                                                    0xD8037BA8
#define set_CBUS_TX_DEVCAP_INT_EN_reg(data)   (*((volatile unsigned int*) CBUS_TX_DEVCAP_INT_EN_reg)=data)
#define get_CBUS_TX_DEVCAP_INT_EN_reg   (*((volatile unsigned int*) CBUS_TX_DEVCAP_INT_EN_reg))
#define CBUS_TX_DEVCAP_INT_EN_inst_adr                                               "0x00EA"
#define CBUS_TX_DEVCAP_INT_EN_inst                                                   0x00EA
#define CBUS_TX_DEVCAP_INT_EN_chg23_irq_en_shift                                     (24)
#define CBUS_TX_DEVCAP_INT_EN_chg23_irq_en_mask                                      (0xFF000000)
#define CBUS_TX_DEVCAP_INT_EN_chg23_irq_en(data)                                     (0xFF000000&((data)<<24))
#define CBUS_TX_DEVCAP_INT_EN_chg23_irq_en_src(data)                                 ((0xFF000000&(data))>>24)
#define CBUS_TX_DEVCAP_INT_EN_get_chg23_irq_en(data)                                 ((0xFF000000&(data))>>24)
#define CBUS_TX_DEVCAP_INT_EN_chg22_irq_en_shift                                     (16)
#define CBUS_TX_DEVCAP_INT_EN_chg22_irq_en_mask                                      (0x00FF0000)
#define CBUS_TX_DEVCAP_INT_EN_chg22_irq_en(data)                                     (0x00FF0000&((data)<<16))
#define CBUS_TX_DEVCAP_INT_EN_chg22_irq_en_src(data)                                 ((0x00FF0000&(data))>>16)
#define CBUS_TX_DEVCAP_INT_EN_get_chg22_irq_en(data)                                 ((0x00FF0000&(data))>>16)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit7_irq_en_shift                                 (15)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit7_irq_en_mask                                  (0x00008000)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit7_irq_en(data)                                 (0x00008000&((data)<<15))
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit7_irq_en_src(data)                             ((0x00008000&(data))>>15)
#define CBUS_TX_DEVCAP_INT_EN_get_dchg_bit7_irq_en(data)                             ((0x00008000&(data))>>15)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit6_irq_en_shift                                 (14)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit6_irq_en_mask                                  (0x00004000)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit6_irq_en(data)                                 (0x00004000&((data)<<14))
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit6_irq_en_src(data)                             ((0x00004000&(data))>>14)
#define CBUS_TX_DEVCAP_INT_EN_get_dchg_bit6_irq_en(data)                             ((0x00004000&(data))>>14)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit5_irq_en_shift                                 (13)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit5_irq_en_mask                                  (0x00002000)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit5_irq_en(data)                                 (0x00002000&((data)<<13))
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit5_irq_en_src(data)                             ((0x00002000&(data))>>13)
#define CBUS_TX_DEVCAP_INT_EN_get_dchg_bit5_irq_en(data)                             ((0x00002000&(data))>>13)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit4_irq_en_shift                                 (12)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit4_irq_en_mask                                  (0x00001000)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit4_irq_en(data)                                 (0x00001000&((data)<<12))
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit4_irq_en_src(data)                             ((0x00001000&(data))>>12)
#define CBUS_TX_DEVCAP_INT_EN_get_dchg_bit4_irq_en(data)                             ((0x00001000&(data))>>12)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit3_irq_en_shift                                 (11)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit3_irq_en_mask                                  (0x00000800)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit3_irq_en(data)                                 (0x00000800&((data)<<11))
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit3_irq_en_src(data)                             ((0x00000800&(data))>>11)
#define CBUS_TX_DEVCAP_INT_EN_get_dchg_bit3_irq_en(data)                             ((0x00000800&(data))>>11)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit2_irq_en_shift                                 (10)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit2_irq_en_mask                                  (0x00000400)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit2_irq_en(data)                                 (0x00000400&((data)<<10))
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit2_irq_en_src(data)                             ((0x00000400&(data))>>10)
#define CBUS_TX_DEVCAP_INT_EN_get_dchg_bit2_irq_en(data)                             ((0x00000400&(data))>>10)
#define CBUS_TX_DEVCAP_INT_EN_edid_irq_en_shift                                      (9)
#define CBUS_TX_DEVCAP_INT_EN_edid_irq_en_mask                                       (0x00000200)
#define CBUS_TX_DEVCAP_INT_EN_edid_irq_en(data)                                      (0x00000200&((data)<<9))
#define CBUS_TX_DEVCAP_INT_EN_edid_irq_en_src(data)                                  ((0x00000200&(data))>>9)
#define CBUS_TX_DEVCAP_INT_EN_get_edid_irq_en(data)                                  ((0x00000200&(data))>>9)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit0_irq_en_shift                                 (8)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit0_irq_en_mask                                  (0x00000100)
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit0_irq_en(data)                                 (0x00000100&((data)<<8))
#define CBUS_TX_DEVCAP_INT_EN_dchg_bit0_irq_en_src(data)                             ((0x00000100&(data))>>8)
#define CBUS_TX_DEVCAP_INT_EN_get_dchg_bit0_irq_en(data)                             ((0x00000100&(data))>>8)
#define CBUS_TX_DEVCAP_INT_EN_rchg_irq_en_shift                                      (5)
#define CBUS_TX_DEVCAP_INT_EN_rchg_irq_en_mask                                       (0x000000E0)
#define CBUS_TX_DEVCAP_INT_EN_rchg_irq_en(data)                                      (0x000000E0&((data)<<5))
#define CBUS_TX_DEVCAP_INT_EN_rchg_irq_en_src(data)                                  ((0x000000E0&(data))>>5)
#define CBUS_TX_DEVCAP_INT_EN_get_rchg_irq_en(data)                                  ((0x000000E0&(data))>>5)
#define CBUS_TX_DEVCAP_INT_EN_req_3d_irq_en_shift                                    (4)
#define CBUS_TX_DEVCAP_INT_EN_req_3d_irq_en_mask                                     (0x00000010)
#define CBUS_TX_DEVCAP_INT_EN_req_3d_irq_en(data)                                    (0x00000010&((data)<<4))
#define CBUS_TX_DEVCAP_INT_EN_req_3d_irq_en_src(data)                                ((0x00000010&(data))>>4)
#define CBUS_TX_DEVCAP_INT_EN_get_req_3d_irq_en(data)                                ((0x00000010&(data))>>4)
#define CBUS_TX_DEVCAP_INT_EN_grt_irq_en_shift                                       (3)
#define CBUS_TX_DEVCAP_INT_EN_grt_irq_en_mask                                        (0x00000008)
#define CBUS_TX_DEVCAP_INT_EN_grt_irq_en(data)                                       (0x00000008&((data)<<3))
#define CBUS_TX_DEVCAP_INT_EN_grt_irq_en_src(data)                                   ((0x00000008&(data))>>3)
#define CBUS_TX_DEVCAP_INT_EN_get_grt_irq_en(data)                                   ((0x00000008&(data))>>3)
#define CBUS_TX_DEVCAP_INT_EN_req_irq_en_shift                                       (2)
#define CBUS_TX_DEVCAP_INT_EN_req_irq_en_mask                                        (0x00000004)
#define CBUS_TX_DEVCAP_INT_EN_req_irq_en(data)                                       (0x00000004&((data)<<2))
#define CBUS_TX_DEVCAP_INT_EN_req_irq_en_src(data)                                   ((0x00000004&(data))>>2)
#define CBUS_TX_DEVCAP_INT_EN_get_req_irq_en(data)                                   ((0x00000004&(data))>>2)
#define CBUS_TX_DEVCAP_INT_EN_dscr_irq_en_shift                                      (1)
#define CBUS_TX_DEVCAP_INT_EN_dscr_irq_en_mask                                       (0x00000002)
#define CBUS_TX_DEVCAP_INT_EN_dscr_irq_en(data)                                      (0x00000002&((data)<<1))
#define CBUS_TX_DEVCAP_INT_EN_dscr_irq_en_src(data)                                  ((0x00000002&(data))>>1)
#define CBUS_TX_DEVCAP_INT_EN_get_dscr_irq_en(data)                                  ((0x00000002&(data))>>1)
#define CBUS_TX_DEVCAP_INT_EN_dcap_irq_en_shift                                      (0)
#define CBUS_TX_DEVCAP_INT_EN_dcap_irq_en_mask                                       (0x00000001)
#define CBUS_TX_DEVCAP_INT_EN_dcap_irq_en(data)                                      (0x00000001&((data)<<0))
#define CBUS_TX_DEVCAP_INT_EN_dcap_irq_en_src(data)                                  ((0x00000001&(data))>>0)
#define CBUS_TX_DEVCAP_INT_EN_get_dcap_irq_en(data)                                  ((0x00000001&(data))>>0)


#define CBUS_TX_DEVCAP_INT_EN1                                                       0x98037BAC
#define CBUS_TX_DEVCAP_INT_EN1_reg_addr                                              "0xD8037BAC"
#define CBUS_TX_DEVCAP_INT_EN1_reg                                                   0xD8037BAC
#define set_CBUS_TX_DEVCAP_INT_EN1_reg(data)   (*((volatile unsigned int*) CBUS_TX_DEVCAP_INT_EN1_reg)=data)
#define get_CBUS_TX_DEVCAP_INT_EN1_reg   (*((volatile unsigned int*) CBUS_TX_DEVCAP_INT_EN1_reg))
#define CBUS_TX_DEVCAP_INT_EN1_inst_adr                                              "0x00EB"
#define CBUS_TX_DEVCAP_INT_EN1_inst                                                  0x00EB
#define CBUS_TX_DEVCAP_INT_EN1_chg27_irq_en_shift                                    (24)
#define CBUS_TX_DEVCAP_INT_EN1_chg27_irq_en_mask                                     (0xFF000000)
#define CBUS_TX_DEVCAP_INT_EN1_chg27_irq_en(data)                                    (0xFF000000&((data)<<24))
#define CBUS_TX_DEVCAP_INT_EN1_chg27_irq_en_src(data)                                ((0xFF000000&(data))>>24)
#define CBUS_TX_DEVCAP_INT_EN1_get_chg27_irq_en(data)                                ((0xFF000000&(data))>>24)
#define CBUS_TX_DEVCAP_INT_EN1_chg26_irq_en_shift                                    (16)
#define CBUS_TX_DEVCAP_INT_EN1_chg26_irq_en_mask                                     (0x00FF0000)
#define CBUS_TX_DEVCAP_INT_EN1_chg26_irq_en(data)                                    (0x00FF0000&((data)<<16))
#define CBUS_TX_DEVCAP_INT_EN1_chg26_irq_en_src(data)                                ((0x00FF0000&(data))>>16)
#define CBUS_TX_DEVCAP_INT_EN1_get_chg26_irq_en(data)                                ((0x00FF0000&(data))>>16)
#define CBUS_TX_DEVCAP_INT_EN1_chg25_irq_en_shift                                    (8)
#define CBUS_TX_DEVCAP_INT_EN1_chg25_irq_en_mask                                     (0x0000FF00)
#define CBUS_TX_DEVCAP_INT_EN1_chg25_irq_en(data)                                    (0x0000FF00&((data)<<8))
#define CBUS_TX_DEVCAP_INT_EN1_chg25_irq_en_src(data)                                ((0x0000FF00&(data))>>8)
#define CBUS_TX_DEVCAP_INT_EN1_get_chg25_irq_en(data)                                ((0x0000FF00&(data))>>8)
#define CBUS_TX_DEVCAP_INT_EN1_chg24_irq_en_shift                                    (0)
#define CBUS_TX_DEVCAP_INT_EN1_chg24_irq_en_mask                                     (0x000000FF)
#define CBUS_TX_DEVCAP_INT_EN1_chg24_irq_en(data)                                    (0x000000FF&((data)<<0))
#define CBUS_TX_DEVCAP_INT_EN1_chg24_irq_en_src(data)                                ((0x000000FF&(data))>>0)
#define CBUS_TX_DEVCAP_INT_EN1_get_chg24_irq_en(data)                                ((0x000000FF&(data))>>0)


#define CBUS_TX_CBUS_TEST                                                            0x98037B9C
#define CBUS_TX_CBUS_TEST_reg_addr                                                   "0xD8037B9C"
#define CBUS_TX_CBUS_TEST_reg                                                        0xD8037B9C
#define set_CBUS_TX_CBUS_TEST_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_TEST_reg)=data)
#define get_CBUS_TX_CBUS_TEST_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_TEST_reg))
#define CBUS_TX_CBUS_TEST_inst_adr                                                   "0x00E7"
#define CBUS_TX_CBUS_TEST_inst                                                       0x00E7
#define CBUS_TX_CBUS_TEST_cbus_test_md_shift                                         (30)
#define CBUS_TX_CBUS_TEST_cbus_test_md_mask                                          (0xC0000000)
#define CBUS_TX_CBUS_TEST_cbus_test_md(data)                                         (0xC0000000&((data)<<30))
#define CBUS_TX_CBUS_TEST_cbus_test_md_src(data)                                     ((0xC0000000&(data))>>30)
#define CBUS_TX_CBUS_TEST_get_cbus_test_md(data)                                     ((0xC0000000&(data))>>30)
#define CBUS_TX_CBUS_TEST_fw_out_shift                                               (29)
#define CBUS_TX_CBUS_TEST_fw_out_mask                                                (0x20000000)
#define CBUS_TX_CBUS_TEST_fw_out(data)                                               (0x20000000&((data)<<29))
#define CBUS_TX_CBUS_TEST_fw_out_src(data)                                           ((0x20000000&(data))>>29)
#define CBUS_TX_CBUS_TEST_get_fw_out(data)                                           ((0x20000000&(data))>>29)
#define CBUS_TX_CBUS_TEST_dbg_sel_shift                                              (26)
#define CBUS_TX_CBUS_TEST_dbg_sel_mask                                               (0x1C000000)
#define CBUS_TX_CBUS_TEST_dbg_sel(data)                                              (0x1C000000&((data)<<26))
#define CBUS_TX_CBUS_TEST_dbg_sel_src(data)                                          ((0x1C000000&(data))>>26)
#define CBUS_TX_CBUS_TEST_get_dbg_sel(data)                                          ((0x1C000000&(data))>>26)
#define CBUS_TX_CBUS_TEST_ecbus_dbg_sel_shift                                        (20)
#define CBUS_TX_CBUS_TEST_ecbus_dbg_sel_mask                                         (0x00F00000)
#define CBUS_TX_CBUS_TEST_ecbus_dbg_sel(data)                                        (0x00F00000&((data)<<20))
#define CBUS_TX_CBUS_TEST_ecbus_dbg_sel_src(data)                                    ((0x00F00000&(data))>>20)
#define CBUS_TX_CBUS_TEST_get_ecbus_dbg_sel(data)                                    ((0x00F00000&(data))>>20)
#define CBUS_TX_CBUS_TEST_ecbus_fw_out_shift                                         (19)
#define CBUS_TX_CBUS_TEST_ecbus_fw_out_mask                                          (0x00080000)
#define CBUS_TX_CBUS_TEST_ecbus_fw_out(data)                                         (0x00080000&((data)<<19))
#define CBUS_TX_CBUS_TEST_ecbus_fw_out_src(data)                                     ((0x00080000&(data))>>19)
#define CBUS_TX_CBUS_TEST_get_ecbus_fw_out(data)                                     ((0x00080000&(data))>>19)
#define CBUS_TX_CBUS_TEST_force_ecbus_out_shift                                      (18)
#define CBUS_TX_CBUS_TEST_force_ecbus_out_mask                                       (0x00040000)
#define CBUS_TX_CBUS_TEST_force_ecbus_out(data)                                      (0x00040000&((data)<<18))
#define CBUS_TX_CBUS_TEST_force_ecbus_out_src(data)                                  ((0x00040000&(data))>>18)
#define CBUS_TX_CBUS_TEST_get_force_ecbus_out(data)                                  ((0x00040000&(data))>>18)


#define CBUS_TX_CBUS_CTRL9                                                           0x98037BD8
#define CBUS_TX_CBUS_CTRL9_reg_addr                                                  "0xD8037BD8"
#define CBUS_TX_CBUS_CTRL9_reg                                                       0xD8037BD8
#define set_CBUS_TX_CBUS_CTRL9_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL9_reg)=data)
#define get_CBUS_TX_CBUS_CTRL9_reg   (*((volatile unsigned int*) CBUS_TX_CBUS_CTRL9_reg))
#define CBUS_TX_CBUS_CTRL9_inst_adr                                                  "0x00F6"
#define CBUS_TX_CBUS_CTRL9_inst                                                      0x00F6
#define CBUS_TX_CBUS_CTRL9_link_layer_st_shift                                       (28)
#define CBUS_TX_CBUS_CTRL9_link_layer_st_mask                                        (0xF0000000)
#define CBUS_TX_CBUS_CTRL9_link_layer_st(data)                                       (0xF0000000&((data)<<28))
#define CBUS_TX_CBUS_CTRL9_link_layer_st_src(data)                                   ((0xF0000000&(data))>>28)
#define CBUS_TX_CBUS_CTRL9_get_link_layer_st(data)                                   ((0xF0000000&(data))>>28)
#define CBUS_TX_CBUS_CTRL9_deb_lv_shift                                              (24)
#define CBUS_TX_CBUS_CTRL9_deb_lv_mask                                               (0x07000000)
#define CBUS_TX_CBUS_CTRL9_deb_lv(data)                                              (0x07000000&((data)<<24))
#define CBUS_TX_CBUS_CTRL9_deb_lv_src(data)                                          ((0x07000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL9_get_deb_lv(data)                                          ((0x07000000&(data))>>24)
#define CBUS_TX_CBUS_CTRL9_mhl_rxsense_shift                                         (16)
#define CBUS_TX_CBUS_CTRL9_mhl_rxsense_mask                                          (0x00010000)
#define CBUS_TX_CBUS_CTRL9_mhl_rxsense(data)                                         (0x00010000&((data)<<16))
#define CBUS_TX_CBUS_CTRL9_mhl_rxsense_src(data)                                     ((0x00010000&(data))>>16)
#define CBUS_TX_CBUS_CTRL9_get_mhl_rxsense(data)                                     ((0x00010000&(data))>>16)
#define CBUS_TX_CBUS_CTRL9_clk_1k_div_shift                                          (0)
#define CBUS_TX_CBUS_CTRL9_clk_1k_div_mask                                           (0x000003FF)
#define CBUS_TX_CBUS_CTRL9_clk_1k_div(data)                                          (0x000003FF&((data)<<0))
#define CBUS_TX_CBUS_CTRL9_clk_1k_div_src(data)                                      ((0x000003FF&(data))>>0)
#define CBUS_TX_CBUS_CTRL9_get_clk_1k_div(data)                                      ((0x000003FF&(data))>>0)


#define CBUS_TX_DUMMY_CTRL                                                           0x98037BE0
#define CBUS_TX_DUMMY_CTRL_reg_addr                                                  "0xD8037BE0"
#define CBUS_TX_DUMMY_CTRL_reg                                                       0xD8037BE0
#define set_CBUS_TX_DUMMY_CTRL_reg(data)   (*((volatile unsigned int*) CBUS_TX_DUMMY_CTRL_reg)=data)
#define get_CBUS_TX_DUMMY_CTRL_reg   (*((volatile unsigned int*) CBUS_TX_DUMMY_CTRL_reg))
#define CBUS_TX_DUMMY_CTRL_inst_adr                                                  "0x00F8"
#define CBUS_TX_DUMMY_CTRL_inst                                                      0x00F8
#define CBUS_TX_DUMMY_CTRL_dummy_reg_shift                                           (0)
#define CBUS_TX_DUMMY_CTRL_dummy_reg_mask                                            (0xFFFFFFFF)
#define CBUS_TX_DUMMY_CTRL_dummy_reg(data)                                           (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_DUMMY_CTRL_dummy_reg_src(data)                                       ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_DUMMY_CTRL_get_dummy_reg(data)                                       ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_INT_CTRL                                                             0x98037BE4
#define CBUS_TX_INT_CTRL_reg_addr                                                    "0xD8037BE4"
#define CBUS_TX_INT_CTRL_reg                                                         0xD8037BE4
#define set_CBUS_TX_INT_CTRL_reg(data)   (*((volatile unsigned int*) CBUS_TX_INT_CTRL_reg)=data)
#define get_CBUS_TX_INT_CTRL_reg   (*((volatile unsigned int*) CBUS_TX_INT_CTRL_reg))
#define CBUS_TX_INT_CTRL_inst_adr                                                    "0x00F9"
#define CBUS_TX_INT_CTRL_inst                                                        0x00F9
#define CBUS_TX_INT_CTRL_acpu_int_en_shift                                           (1)
#define CBUS_TX_INT_CTRL_acpu_int_en_mask                                            (0x00000002)
#define CBUS_TX_INT_CTRL_acpu_int_en(data)                                           (0x00000002&((data)<<1))
#define CBUS_TX_INT_CTRL_acpu_int_en_src(data)                                       ((0x00000002&(data))>>1)
#define CBUS_TX_INT_CTRL_get_acpu_int_en(data)                                       ((0x00000002&(data))>>1)
#define CBUS_TX_INT_CTRL_scpu_int_en_shift                                           (0)
#define CBUS_TX_INT_CTRL_scpu_int_en_mask                                            (0x00000001)
#define CBUS_TX_INT_CTRL_scpu_int_en(data)                                           (0x00000001&((data)<<0))
#define CBUS_TX_INT_CTRL_scpu_int_en_src(data)                                       ((0x00000001&(data))>>0)
#define CBUS_TX_INT_CTRL_get_scpu_int_en(data)                                       ((0x00000001&(data))>>0)


#define CBUS_TX_DEVCAP_WRITE                                                         0x98037B98
#define CBUS_TX_DEVCAP_WRITE_reg_addr                                                "0xD8037B98"
#define CBUS_TX_DEVCAP_WRITE_reg                                                     0xD8037B98
#define set_CBUS_TX_DEVCAP_WRITE_reg(data)   (*((volatile unsigned int*) CBUS_TX_DEVCAP_WRITE_reg)=data)
#define get_CBUS_TX_DEVCAP_WRITE_reg   (*((volatile unsigned int*) CBUS_TX_DEVCAP_WRITE_reg))
#define CBUS_TX_DEVCAP_WRITE_inst_adr                                                "0x00E6"
#define CBUS_TX_DEVCAP_WRITE_inst                                                    0x00E6
#define CBUS_TX_DEVCAP_WRITE_msc_offset_adr_shift                                    (24)
#define CBUS_TX_DEVCAP_WRITE_msc_offset_adr_mask                                     (0xFF000000)
#define CBUS_TX_DEVCAP_WRITE_msc_offset_adr(data)                                    (0xFF000000&((data)<<24))
#define CBUS_TX_DEVCAP_WRITE_msc_offset_adr_src(data)                                ((0xFF000000&(data))>>24)
#define CBUS_TX_DEVCAP_WRITE_get_msc_offset_adr(data)                                ((0xFF000000&(data))>>24)
#define CBUS_TX_DEVCAP_WRITE_devcap_rdata_shift                                      (16)
#define CBUS_TX_DEVCAP_WRITE_devcap_rdata_mask                                       (0x00FF0000)
#define CBUS_TX_DEVCAP_WRITE_devcap_rdata(data)                                      (0x00FF0000&((data)<<16))
#define CBUS_TX_DEVCAP_WRITE_devcap_rdata_src(data)                                  ((0x00FF0000&(data))>>16)
#define CBUS_TX_DEVCAP_WRITE_get_devcap_rdata(data)                                  ((0x00FF0000&(data))>>16)
#define CBUS_TX_DEVCAP_WRITE_devcap_write_shift                                      (8)
#define CBUS_TX_DEVCAP_WRITE_devcap_write_mask                                       (0x00000100)
#define CBUS_TX_DEVCAP_WRITE_devcap_write(data)                                      (0x00000100&((data)<<8))
#define CBUS_TX_DEVCAP_WRITE_devcap_write_src(data)                                  ((0x00000100&(data))>>8)
#define CBUS_TX_DEVCAP_WRITE_get_devcap_write(data)                                  ((0x00000100&(data))>>8)
#define CBUS_TX_DEVCAP_WRITE_msc_reg_data_shift                                      (0)
#define CBUS_TX_DEVCAP_WRITE_msc_reg_data_mask                                       (0x000000FF)
#define CBUS_TX_DEVCAP_WRITE_msc_reg_data(data)                                      (0x000000FF&((data)<<0))
#define CBUS_TX_DEVCAP_WRITE_msc_reg_data_src(data)                                  ((0x000000FF&(data))>>0)
#define CBUS_TX_DEVCAP_WRITE_get_msc_reg_data(data)                                  ((0x000000FF&(data))>>0)


#define CBUS_TX_MSC_DEVCAP0                                                          0x98037C00
#define CBUS_TX_MSC_DEVCAP0_reg_addr                                                 "0xD8037C00"
#define CBUS_TX_MSC_DEVCAP0_reg                                                      0xD8037C00
#define set_CBUS_TX_MSC_DEVCAP0_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP0_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP0_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP0_reg))
#define CBUS_TX_MSC_DEVCAP0_inst_adr                                                 "0x0000"
#define CBUS_TX_MSC_DEVCAP0_inst                                                     0x0000
#define CBUS_TX_MSC_DEVCAP0_adop_id_h_shift                                          (24)
#define CBUS_TX_MSC_DEVCAP0_adop_id_h_mask                                           (0xFF000000)
#define CBUS_TX_MSC_DEVCAP0_adop_id_h(data)                                          (0xFF000000&((data)<<24))
#define CBUS_TX_MSC_DEVCAP0_adop_id_h_src(data)                                      ((0xFF000000&(data))>>24)
#define CBUS_TX_MSC_DEVCAP0_get_adop_id_h(data)                                      ((0xFF000000&(data))>>24)
#define CBUS_TX_MSC_DEVCAP0_dev_cat_shift                                            (23)
#define CBUS_TX_MSC_DEVCAP0_dev_cat_mask                                             (0x00800000)
#define CBUS_TX_MSC_DEVCAP0_dev_cat(data)                                            (0x00800000&((data)<<23))
#define CBUS_TX_MSC_DEVCAP0_dev_cat_src(data)                                        ((0x00800000&(data))>>23)
#define CBUS_TX_MSC_DEVCAP0_get_dev_cat(data)                                        ((0x00800000&(data))>>23)
#define CBUS_TX_MSC_DEVCAP0_plim_shift                                               (21)
#define CBUS_TX_MSC_DEVCAP0_plim_mask                                                (0x00600000)
#define CBUS_TX_MSC_DEVCAP0_plim(data)                                               (0x00600000&((data)<<21))
#define CBUS_TX_MSC_DEVCAP0_plim_src(data)                                           ((0x00600000&(data))>>21)
#define CBUS_TX_MSC_DEVCAP0_get_plim(data)                                           ((0x00600000&(data))>>21)
#define CBUS_TX_MSC_DEVCAP0_pow_shift                                                (20)
#define CBUS_TX_MSC_DEVCAP0_pow_mask                                                 (0x00100000)
#define CBUS_TX_MSC_DEVCAP0_pow(data)                                                (0x00100000&((data)<<20))
#define CBUS_TX_MSC_DEVCAP0_pow_src(data)                                            ((0x00100000&(data))>>20)
#define CBUS_TX_MSC_DEVCAP0_get_pow(data)                                            ((0x00100000&(data))>>20)
#define CBUS_TX_MSC_DEVCAP0_dev_type_shift                                           (16)
#define CBUS_TX_MSC_DEVCAP0_dev_type_mask                                            (0x000F0000)
#define CBUS_TX_MSC_DEVCAP0_dev_type(data)                                           (0x000F0000&((data)<<16))
#define CBUS_TX_MSC_DEVCAP0_dev_type_src(data)                                       ((0x000F0000&(data))>>16)
#define CBUS_TX_MSC_DEVCAP0_get_dev_type(data)                                       ((0x000F0000&(data))>>16)
#define CBUS_TX_MSC_DEVCAP0_mhl_ver_shift                                            (8)
#define CBUS_TX_MSC_DEVCAP0_mhl_ver_mask                                             (0x0000FF00)
#define CBUS_TX_MSC_DEVCAP0_mhl_ver(data)                                            (0x0000FF00&((data)<<8))
#define CBUS_TX_MSC_DEVCAP0_mhl_ver_src(data)                                        ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSC_DEVCAP0_get_mhl_ver(data)                                        ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSC_DEVCAP0_dev_state_shift                                          (0)
#define CBUS_TX_MSC_DEVCAP0_dev_state_mask                                           (0x000000FF)
#define CBUS_TX_MSC_DEVCAP0_dev_state(data)                                          (0x000000FF&((data)<<0))
#define CBUS_TX_MSC_DEVCAP0_dev_state_src(data)                                      ((0x000000FF&(data))>>0)
#define CBUS_TX_MSC_DEVCAP0_get_dev_state(data)                                      ((0x000000FF&(data))>>0)


#define CBUS_TX_MSC_DEVCAP1                                                          0x98037C04
#define CBUS_TX_MSC_DEVCAP1_reg_addr                                                 "0xD8037C04"
#define CBUS_TX_MSC_DEVCAP1_reg                                                      0xD8037C04
#define set_CBUS_TX_MSC_DEVCAP1_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP1_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP1_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP1_reg))
#define CBUS_TX_MSC_DEVCAP1_inst_adr                                                 "0x0001"
#define CBUS_TX_MSC_DEVCAP1_inst                                                     0x0001
#define CBUS_TX_MSC_DEVCAP1_aud_link_md_shift                                        (18)
#define CBUS_TX_MSC_DEVCAP1_aud_link_md_mask                                         (0x00FC0000)
#define CBUS_TX_MSC_DEVCAP1_aud_link_md(data)                                        (0x00FC0000&((data)<<18))
#define CBUS_TX_MSC_DEVCAP1_aud_link_md_src(data)                                    ((0x00FC0000&(data))>>18)
#define CBUS_TX_MSC_DEVCAP1_get_aud_link_md(data)                                    ((0x00FC0000&(data))>>18)
#define CBUS_TX_MSC_DEVCAP1_aud_8ch_shift                                            (17)
#define CBUS_TX_MSC_DEVCAP1_aud_8ch_mask                                             (0x00020000)
#define CBUS_TX_MSC_DEVCAP1_aud_8ch(data)                                            (0x00020000&((data)<<17))
#define CBUS_TX_MSC_DEVCAP1_aud_8ch_src(data)                                        ((0x00020000&(data))>>17)
#define CBUS_TX_MSC_DEVCAP1_get_aud_8ch(data)                                        ((0x00020000&(data))>>17)
#define CBUS_TX_MSC_DEVCAP1_aud_2ch_shift                                            (16)
#define CBUS_TX_MSC_DEVCAP1_aud_2ch_mask                                             (0x00010000)
#define CBUS_TX_MSC_DEVCAP1_aud_2ch(data)                                            (0x00010000&((data)<<16))
#define CBUS_TX_MSC_DEVCAP1_aud_2ch_src(data)                                        ((0x00010000&(data))>>16)
#define CBUS_TX_MSC_DEVCAP1_get_aud_2ch(data)                                        ((0x00010000&(data))>>16)
#define CBUS_TX_MSC_DEVCAP1_vid_link_md_shift                                        (14)
#define CBUS_TX_MSC_DEVCAP1_vid_link_md_mask                                         (0x0000C000)
#define CBUS_TX_MSC_DEVCAP1_vid_link_md(data)                                        (0x0000C000&((data)<<14))
#define CBUS_TX_MSC_DEVCAP1_vid_link_md_src(data)                                    ((0x0000C000&(data))>>14)
#define CBUS_TX_MSC_DEVCAP1_get_vid_link_md(data)                                    ((0x0000C000&(data))>>14)
#define CBUS_TX_MSC_DEVCAP1_supp_vga_shift                                           (13)
#define CBUS_TX_MSC_DEVCAP1_supp_vga_mask                                            (0x00002000)
#define CBUS_TX_MSC_DEVCAP1_supp_vga(data)                                           (0x00002000&((data)<<13))
#define CBUS_TX_MSC_DEVCAP1_supp_vga_src(data)                                       ((0x00002000&(data))>>13)
#define CBUS_TX_MSC_DEVCAP1_get_supp_vga(data)                                       ((0x00002000&(data))>>13)
#define CBUS_TX_MSC_DEVCAP1_supp_islands_shift                                       (12)
#define CBUS_TX_MSC_DEVCAP1_supp_islands_mask                                        (0x00001000)
#define CBUS_TX_MSC_DEVCAP1_supp_islands(data)                                       (0x00001000&((data)<<12))
#define CBUS_TX_MSC_DEVCAP1_supp_islands_src(data)                                   ((0x00001000&(data))>>12)
#define CBUS_TX_MSC_DEVCAP1_get_supp_islands(data)                                   ((0x00001000&(data))>>12)
#define CBUS_TX_MSC_DEVCAP1_supp_ppixel_shift                                        (11)
#define CBUS_TX_MSC_DEVCAP1_supp_ppixel_mask                                         (0x00000800)
#define CBUS_TX_MSC_DEVCAP1_supp_ppixel(data)                                        (0x00000800&((data)<<11))
#define CBUS_TX_MSC_DEVCAP1_supp_ppixel_src(data)                                    ((0x00000800&(data))>>11)
#define CBUS_TX_MSC_DEVCAP1_get_supp_ppixel(data)                                    ((0x00000800&(data))>>11)
#define CBUS_TX_MSC_DEVCAP1_supp_yuv422_shift                                        (10)
#define CBUS_TX_MSC_DEVCAP1_supp_yuv422_mask                                         (0x00000400)
#define CBUS_TX_MSC_DEVCAP1_supp_yuv422(data)                                        (0x00000400&((data)<<10))
#define CBUS_TX_MSC_DEVCAP1_supp_yuv422_src(data)                                    ((0x00000400&(data))>>10)
#define CBUS_TX_MSC_DEVCAP1_get_supp_yuv422(data)                                    ((0x00000400&(data))>>10)
#define CBUS_TX_MSC_DEVCAP1_supp_yuv444_shift                                        (9)
#define CBUS_TX_MSC_DEVCAP1_supp_yuv444_mask                                         (0x00000200)
#define CBUS_TX_MSC_DEVCAP1_supp_yuv444(data)                                        (0x00000200&((data)<<9))
#define CBUS_TX_MSC_DEVCAP1_supp_yuv444_src(data)                                    ((0x00000200&(data))>>9)
#define CBUS_TX_MSC_DEVCAP1_get_supp_yuv444(data)                                    ((0x00000200&(data))>>9)
#define CBUS_TX_MSC_DEVCAP1_supp_rgb444_shift                                        (8)
#define CBUS_TX_MSC_DEVCAP1_supp_rgb444_mask                                         (0x00000100)
#define CBUS_TX_MSC_DEVCAP1_supp_rgb444(data)                                        (0x00000100&((data)<<8))
#define CBUS_TX_MSC_DEVCAP1_supp_rgb444_src(data)                                    ((0x00000100&(data))>>8)
#define CBUS_TX_MSC_DEVCAP1_get_supp_rgb444(data)                                    ((0x00000100&(data))>>8)
#define CBUS_TX_MSC_DEVCAP1_adop_id_l_shift                                          (0)
#define CBUS_TX_MSC_DEVCAP1_adop_id_l_mask                                           (0x000000FF)
#define CBUS_TX_MSC_DEVCAP1_adop_id_l(data)                                          (0x000000FF&((data)<<0))
#define CBUS_TX_MSC_DEVCAP1_adop_id_l_src(data)                                      ((0x000000FF&(data))>>0)
#define CBUS_TX_MSC_DEVCAP1_get_adop_id_l(data)                                      ((0x000000FF&(data))>>0)


#define CBUS_TX_MSC_DEVCAP2                                                          0x98037C08
#define CBUS_TX_MSC_DEVCAP2_reg_addr                                                 "0xD8037C08"
#define CBUS_TX_MSC_DEVCAP2_reg                                                      0xD8037C08
#define set_CBUS_TX_MSC_DEVCAP2_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP2_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP2_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP2_reg))
#define CBUS_TX_MSC_DEVCAP2_inst_adr                                                 "0x0002"
#define CBUS_TX_MSC_DEVCAP2_inst                                                     0x0002
#define CBUS_TX_MSC_DEVCAP2_device_id_h_shift                                        (24)
#define CBUS_TX_MSC_DEVCAP2_device_id_h_mask                                         (0xFF000000)
#define CBUS_TX_MSC_DEVCAP2_device_id_h(data)                                        (0xFF000000&((data)<<24))
#define CBUS_TX_MSC_DEVCAP2_device_id_h_src(data)                                    ((0xFF000000&(data))>>24)
#define CBUS_TX_MSC_DEVCAP2_get_device_id_h(data)                                    ((0xFF000000&(data))>>24)
#define CBUS_TX_MSC_DEVCAP2_feature_flag_shift                                       (21)
#define CBUS_TX_MSC_DEVCAP2_feature_flag_mask                                        (0x00E00000)
#define CBUS_TX_MSC_DEVCAP2_feature_flag(data)                                       (0x00E00000&((data)<<21))
#define CBUS_TX_MSC_DEVCAP2_feature_flag_src(data)                                   ((0x00E00000&(data))>>21)
#define CBUS_TX_MSC_DEVCAP2_get_feature_flag(data)                                   ((0x00E00000&(data))>>21)
#define CBUS_TX_MSC_DEVCAP2_ucp_recv_supp_shift                                      (20)
#define CBUS_TX_MSC_DEVCAP2_ucp_recv_supp_mask                                       (0x00100000)
#define CBUS_TX_MSC_DEVCAP2_ucp_recv_supp(data)                                      (0x00100000&((data)<<20))
#define CBUS_TX_MSC_DEVCAP2_ucp_recv_supp_src(data)                                  ((0x00100000&(data))>>20)
#define CBUS_TX_MSC_DEVCAP2_get_ucp_recv_supp(data)                                  ((0x00100000&(data))>>20)
#define CBUS_TX_MSC_DEVCAP2_ucp_send_supp_shift                                      (19)
#define CBUS_TX_MSC_DEVCAP2_ucp_send_supp_mask                                       (0x00080000)
#define CBUS_TX_MSC_DEVCAP2_ucp_send_supp(data)                                      (0x00080000&((data)<<19))
#define CBUS_TX_MSC_DEVCAP2_ucp_send_supp_src(data)                                  ((0x00080000&(data))>>19)
#define CBUS_TX_MSC_DEVCAP2_get_ucp_send_supp(data)                                  ((0x00080000&(data))>>19)
#define CBUS_TX_MSC_DEVCAP2_sp_supp_shift                                            (18)
#define CBUS_TX_MSC_DEVCAP2_sp_supp_mask                                             (0x00040000)
#define CBUS_TX_MSC_DEVCAP2_sp_supp(data)                                            (0x00040000&((data)<<18))
#define CBUS_TX_MSC_DEVCAP2_sp_supp_src(data)                                        ((0x00040000&(data))>>18)
#define CBUS_TX_MSC_DEVCAP2_get_sp_supp(data)                                        ((0x00040000&(data))>>18)
#define CBUS_TX_MSC_DEVCAP2_rap_supp_shift                                           (17)
#define CBUS_TX_MSC_DEVCAP2_rap_supp_mask                                            (0x00020000)
#define CBUS_TX_MSC_DEVCAP2_rap_supp(data)                                           (0x00020000&((data)<<17))
#define CBUS_TX_MSC_DEVCAP2_rap_supp_src(data)                                       ((0x00020000&(data))>>17)
#define CBUS_TX_MSC_DEVCAP2_get_rap_supp(data)                                       ((0x00020000&(data))>>17)
#define CBUS_TX_MSC_DEVCAP2_rcp_supp_shift                                           (16)
#define CBUS_TX_MSC_DEVCAP2_rcp_supp_mask                                            (0x00010000)
#define CBUS_TX_MSC_DEVCAP2_rcp_supp(data)                                           (0x00010000&((data)<<16))
#define CBUS_TX_MSC_DEVCAP2_rcp_supp_src(data)                                       ((0x00010000&(data))>>16)
#define CBUS_TX_MSC_DEVCAP2_get_rcp_supp(data)                                       ((0x00010000&(data))>>16)
#define CBUS_TX_MSC_DEVCAP2_ld_gui_shift                                             (7)
#define CBUS_TX_MSC_DEVCAP2_ld_gui_mask                                              (0x00000080)
#define CBUS_TX_MSC_DEVCAP2_ld_gui(data)                                             (0x00000080&((data)<<7))
#define CBUS_TX_MSC_DEVCAP2_ld_gui_src(data)                                         ((0x00000080&(data))>>7)
#define CBUS_TX_MSC_DEVCAP2_get_ld_gui(data)                                         ((0x00000080&(data))>>7)
#define CBUS_TX_MSC_DEVCAP2_ld_speaker_shift                                         (6)
#define CBUS_TX_MSC_DEVCAP2_ld_speaker_mask                                          (0x00000040)
#define CBUS_TX_MSC_DEVCAP2_ld_speaker(data)                                         (0x00000040&((data)<<6))
#define CBUS_TX_MSC_DEVCAP2_ld_speaker_src(data)                                     ((0x00000040&(data))>>6)
#define CBUS_TX_MSC_DEVCAP2_get_ld_speaker(data)                                     ((0x00000040&(data))>>6)
#define CBUS_TX_MSC_DEVCAP2_ld_record_shift                                          (5)
#define CBUS_TX_MSC_DEVCAP2_ld_record_mask                                           (0x00000020)
#define CBUS_TX_MSC_DEVCAP2_ld_record(data)                                          (0x00000020&((data)<<5))
#define CBUS_TX_MSC_DEVCAP2_ld_record_src(data)                                      ((0x00000020&(data))>>5)
#define CBUS_TX_MSC_DEVCAP2_get_ld_record(data)                                      ((0x00000020&(data))>>5)
#define CBUS_TX_MSC_DEVCAP2_ld_tuner_shift                                           (4)
#define CBUS_TX_MSC_DEVCAP2_ld_tuner_mask                                            (0x00000010)
#define CBUS_TX_MSC_DEVCAP2_ld_tuner(data)                                           (0x00000010&((data)<<4))
#define CBUS_TX_MSC_DEVCAP2_ld_tuner_src(data)                                       ((0x00000010&(data))>>4)
#define CBUS_TX_MSC_DEVCAP2_get_ld_tuner(data)                                       ((0x00000010&(data))>>4)
#define CBUS_TX_MSC_DEVCAP2_ld_media_shift                                           (3)
#define CBUS_TX_MSC_DEVCAP2_ld_media_mask                                            (0x00000008)
#define CBUS_TX_MSC_DEVCAP2_ld_media(data)                                           (0x00000008&((data)<<3))
#define CBUS_TX_MSC_DEVCAP2_ld_media_src(data)                                       ((0x00000008&(data))>>3)
#define CBUS_TX_MSC_DEVCAP2_get_ld_media(data)                                       ((0x00000008&(data))>>3)
#define CBUS_TX_MSC_DEVCAP2_ld_audio_shift                                           (2)
#define CBUS_TX_MSC_DEVCAP2_ld_audio_mask                                            (0x00000004)
#define CBUS_TX_MSC_DEVCAP2_ld_audio(data)                                           (0x00000004&((data)<<2))
#define CBUS_TX_MSC_DEVCAP2_ld_audio_src(data)                                       ((0x00000004&(data))>>2)
#define CBUS_TX_MSC_DEVCAP2_get_ld_audio(data)                                       ((0x00000004&(data))>>2)
#define CBUS_TX_MSC_DEVCAP2_ld_video_shift                                           (1)
#define CBUS_TX_MSC_DEVCAP2_ld_video_mask                                            (0x00000002)
#define CBUS_TX_MSC_DEVCAP2_ld_video(data)                                           (0x00000002&((data)<<1))
#define CBUS_TX_MSC_DEVCAP2_ld_video_src(data)                                       ((0x00000002&(data))>>1)
#define CBUS_TX_MSC_DEVCAP2_get_ld_video(data)                                       ((0x00000002&(data))>>1)
#define CBUS_TX_MSC_DEVCAP2_ld_display_shift                                         (0)
#define CBUS_TX_MSC_DEVCAP2_ld_display_mask                                          (0x00000001)
#define CBUS_TX_MSC_DEVCAP2_ld_display(data)                                         (0x00000001&((data)<<0))
#define CBUS_TX_MSC_DEVCAP2_ld_display_src(data)                                     ((0x00000001&(data))>>0)
#define CBUS_TX_MSC_DEVCAP2_get_ld_display(data)                                     ((0x00000001&(data))>>0)


#define CBUS_TX_MSC_DEVCAP3                                                          0x98037C0C
#define CBUS_TX_MSC_DEVCAP3_reg_addr                                                 "0xD8037C0C"
#define CBUS_TX_MSC_DEVCAP3_reg                                                      0xD8037C0C
#define set_CBUS_TX_MSC_DEVCAP3_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP3_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP3_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP3_reg))
#define CBUS_TX_MSC_DEVCAP3_inst_adr                                                 "0x0003"
#define CBUS_TX_MSC_DEVCAP3_inst                                                     0x0003
#define CBUS_TX_MSC_DEVCAP3_cap_0f_shift                                             (24)
#define CBUS_TX_MSC_DEVCAP3_cap_0f_mask                                              (0xFF000000)
#define CBUS_TX_MSC_DEVCAP3_cap_0f(data)                                             (0xFF000000&((data)<<24))
#define CBUS_TX_MSC_DEVCAP3_cap_0f_src(data)                                         ((0xFF000000&(data))>>24)
#define CBUS_TX_MSC_DEVCAP3_get_cap_0f(data)                                         ((0xFF000000&(data))>>24)
#define CBUS_TX_MSC_DEVCAP3_stat_size_shift                                          (20)
#define CBUS_TX_MSC_DEVCAP3_stat_size_mask                                           (0x00F00000)
#define CBUS_TX_MSC_DEVCAP3_stat_size(data)                                          (0x00F00000&((data)<<20))
#define CBUS_TX_MSC_DEVCAP3_stat_size_src(data)                                      ((0x00F00000&(data))>>20)
#define CBUS_TX_MSC_DEVCAP3_get_stat_size(data)                                      ((0x00F00000&(data))>>20)
#define CBUS_TX_MSC_DEVCAP3_int_size_shift                                           (16)
#define CBUS_TX_MSC_DEVCAP3_int_size_mask                                            (0x000F0000)
#define CBUS_TX_MSC_DEVCAP3_int_size(data)                                           (0x000F0000&((data)<<16))
#define CBUS_TX_MSC_DEVCAP3_int_size_src(data)                                       ((0x000F0000&(data))>>16)
#define CBUS_TX_MSC_DEVCAP3_get_int_size(data)                                       ((0x000F0000&(data))>>16)
#define CBUS_TX_MSC_DEVCAP3_scratchpad_size_shift                                    (8)
#define CBUS_TX_MSC_DEVCAP3_scratchpad_size_mask                                     (0x0000FF00)
#define CBUS_TX_MSC_DEVCAP3_scratchpad_size(data)                                    (0x0000FF00&((data)<<8))
#define CBUS_TX_MSC_DEVCAP3_scratchpad_size_src(data)                                ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSC_DEVCAP3_get_scratchpad_size(data)                                ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSC_DEVCAP3_device_id_l_shift                                        (0)
#define CBUS_TX_MSC_DEVCAP3_device_id_l_mask                                         (0x000000FF)
#define CBUS_TX_MSC_DEVCAP3_device_id_l(data)                                        (0x000000FF&((data)<<0))
#define CBUS_TX_MSC_DEVCAP3_device_id_l_src(data)                                    ((0x000000FF&(data))>>0)
#define CBUS_TX_MSC_DEVCAP3_get_device_id_l(data)                                    ((0x000000FF&(data))>>0)


#define CBUS_TX_MSC_DEVCAP4                                                          0x98037C10
#define CBUS_TX_MSC_DEVCAP4_reg_addr                                                 "0xD8037C10"
#define CBUS_TX_MSC_DEVCAP4_reg                                                      0xD8037C10
#define set_CBUS_TX_MSC_DEVCAP4_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP4_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP4_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP4_reg))
#define CBUS_TX_MSC_DEVCAP4_inst_adr                                                 "0x0004"
#define CBUS_TX_MSC_DEVCAP4_inst                                                     0x0004
#define CBUS_TX_MSC_DEVCAP4_chg23_irq_shift                                          (24)
#define CBUS_TX_MSC_DEVCAP4_chg23_irq_mask                                           (0xFF000000)
#define CBUS_TX_MSC_DEVCAP4_chg23_irq(data)                                          (0xFF000000&((data)<<24))
#define CBUS_TX_MSC_DEVCAP4_chg23_irq_src(data)                                      ((0xFF000000&(data))>>24)
#define CBUS_TX_MSC_DEVCAP4_get_chg23_irq(data)                                      ((0xFF000000&(data))>>24)
#define CBUS_TX_MSC_DEVCAP4_chg22_irq_shift                                          (16)
#define CBUS_TX_MSC_DEVCAP4_chg22_irq_mask                                           (0x00FF0000)
#define CBUS_TX_MSC_DEVCAP4_chg22_irq(data)                                          (0x00FF0000&((data)<<16))
#define CBUS_TX_MSC_DEVCAP4_chg22_irq_src(data)                                      ((0x00FF0000&(data))>>16)
#define CBUS_TX_MSC_DEVCAP4_get_chg22_irq(data)                                      ((0x00FF0000&(data))>>16)
#define CBUS_TX_MSC_DEVCAP4_dchg_irq_shift                                           (10)
#define CBUS_TX_MSC_DEVCAP4_dchg_irq_mask                                            (0x0000FC00)
#define CBUS_TX_MSC_DEVCAP4_dchg_irq(data)                                           (0x0000FC00&((data)<<10))
#define CBUS_TX_MSC_DEVCAP4_dchg_irq_src(data)                                       ((0x0000FC00&(data))>>10)
#define CBUS_TX_MSC_DEVCAP4_get_dchg_irq(data)                                       ((0x0000FC00&(data))>>10)
#define CBUS_TX_MSC_DEVCAP4_edid_chg_shift                                           (9)
#define CBUS_TX_MSC_DEVCAP4_edid_chg_mask                                            (0x00000200)
#define CBUS_TX_MSC_DEVCAP4_edid_chg(data)                                           (0x00000200&((data)<<9))
#define CBUS_TX_MSC_DEVCAP4_edid_chg_src(data)                                       ((0x00000200&(data))>>9)
#define CBUS_TX_MSC_DEVCAP4_get_edid_chg(data)                                       ((0x00000200&(data))>>9)
#define CBUS_TX_MSC_DEVCAP4_dchg_irq_0_shift                                         (8)
#define CBUS_TX_MSC_DEVCAP4_dchg_irq_0_mask                                          (0x00000100)
#define CBUS_TX_MSC_DEVCAP4_dchg_irq_0(data)                                         (0x00000100&((data)<<8))
#define CBUS_TX_MSC_DEVCAP4_dchg_irq_0_src(data)                                     ((0x00000100&(data))>>8)
#define CBUS_TX_MSC_DEVCAP4_get_dchg_irq_0(data)                                     ((0x00000100&(data))>>8)
#define CBUS_TX_MSC_DEVCAP4_rchg_irq_shift                                           (5)
#define CBUS_TX_MSC_DEVCAP4_rchg_irq_mask                                            (0x000000E0)
#define CBUS_TX_MSC_DEVCAP4_rchg_irq(data)                                           (0x000000E0&((data)<<5))
#define CBUS_TX_MSC_DEVCAP4_rchg_irq_src(data)                                       ((0x000000E0&(data))>>5)
#define CBUS_TX_MSC_DEVCAP4_get_rchg_irq(data)                                       ((0x000000E0&(data))>>5)
#define CBUS_TX_MSC_DEVCAP4_3d_req_shift                                             (4)
#define CBUS_TX_MSC_DEVCAP4_3d_req_mask                                              (0x00000010)
#define CBUS_TX_MSC_DEVCAP4_3d_req(data)                                             (0x00000010&((data)<<4))
#define CBUS_TX_MSC_DEVCAP4_3d_req_src(data)                                         ((0x00000010&(data))>>4)
#define CBUS_TX_MSC_DEVCAP4_get_3d_req(data)                                         ((0x00000010&(data))>>4)
#define CBUS_TX_MSC_DEVCAP4_grt_wrt_shift                                            (3)
#define CBUS_TX_MSC_DEVCAP4_grt_wrt_mask                                             (0x00000008)
#define CBUS_TX_MSC_DEVCAP4_grt_wrt(data)                                            (0x00000008&((data)<<3))
#define CBUS_TX_MSC_DEVCAP4_grt_wrt_src(data)                                        ((0x00000008&(data))>>3)
#define CBUS_TX_MSC_DEVCAP4_get_grt_wrt(data)                                        ((0x00000008&(data))>>3)
#define CBUS_TX_MSC_DEVCAP4_req_wrt_shift                                            (2)
#define CBUS_TX_MSC_DEVCAP4_req_wrt_mask                                             (0x00000004)
#define CBUS_TX_MSC_DEVCAP4_req_wrt(data)                                            (0x00000004&((data)<<2))
#define CBUS_TX_MSC_DEVCAP4_req_wrt_src(data)                                        ((0x00000004&(data))>>2)
#define CBUS_TX_MSC_DEVCAP4_get_req_wrt(data)                                        ((0x00000004&(data))>>2)
#define CBUS_TX_MSC_DEVCAP4_dscr_chg_shift                                           (1)
#define CBUS_TX_MSC_DEVCAP4_dscr_chg_mask                                            (0x00000002)
#define CBUS_TX_MSC_DEVCAP4_dscr_chg(data)                                           (0x00000002&((data)<<1))
#define CBUS_TX_MSC_DEVCAP4_dscr_chg_src(data)                                       ((0x00000002&(data))>>1)
#define CBUS_TX_MSC_DEVCAP4_get_dscr_chg(data)                                       ((0x00000002&(data))>>1)
#define CBUS_TX_MSC_DEVCAP4_dcap_chg_shift                                           (0)
#define CBUS_TX_MSC_DEVCAP4_dcap_chg_mask                                            (0x00000001)
#define CBUS_TX_MSC_DEVCAP4_dcap_chg(data)                                           (0x00000001&((data)<<0))
#define CBUS_TX_MSC_DEVCAP4_dcap_chg_src(data)                                       ((0x00000001&(data))>>0)
#define CBUS_TX_MSC_DEVCAP4_get_dcap_chg(data)                                       ((0x00000001&(data))>>0)


#define CBUS_TX_MSC_DEVCAP5                                                          0x98037C14
#define CBUS_TX_MSC_DEVCAP5_reg_addr                                                 "0xD8037C14"
#define CBUS_TX_MSC_DEVCAP5_reg                                                      0xD8037C14
#define set_CBUS_TX_MSC_DEVCAP5_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP5_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP5_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP5_reg))
#define CBUS_TX_MSC_DEVCAP5_inst_adr                                                 "0x0005"
#define CBUS_TX_MSC_DEVCAP5_inst                                                     0x0005
#define CBUS_TX_MSC_DEVCAP5_chg27_irq_shift                                          (24)
#define CBUS_TX_MSC_DEVCAP5_chg27_irq_mask                                           (0xFF000000)
#define CBUS_TX_MSC_DEVCAP5_chg27_irq(data)                                          (0xFF000000&((data)<<24))
#define CBUS_TX_MSC_DEVCAP5_chg27_irq_src(data)                                      ((0xFF000000&(data))>>24)
#define CBUS_TX_MSC_DEVCAP5_get_chg27_irq(data)                                      ((0xFF000000&(data))>>24)
#define CBUS_TX_MSC_DEVCAP5_chg26_irq_shift                                          (16)
#define CBUS_TX_MSC_DEVCAP5_chg26_irq_mask                                           (0x00FF0000)
#define CBUS_TX_MSC_DEVCAP5_chg26_irq(data)                                          (0x00FF0000&((data)<<16))
#define CBUS_TX_MSC_DEVCAP5_chg26_irq_src(data)                                      ((0x00FF0000&(data))>>16)
#define CBUS_TX_MSC_DEVCAP5_get_chg26_irq(data)                                      ((0x00FF0000&(data))>>16)
#define CBUS_TX_MSC_DEVCAP5_chg25_irq_shift                                          (8)
#define CBUS_TX_MSC_DEVCAP5_chg25_irq_mask                                           (0x0000FF00)
#define CBUS_TX_MSC_DEVCAP5_chg25_irq(data)                                          (0x0000FF00&((data)<<8))
#define CBUS_TX_MSC_DEVCAP5_chg25_irq_src(data)                                      ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSC_DEVCAP5_get_chg25_irq(data)                                      ((0x0000FF00&(data))>>8)
#define CBUS_TX_MSC_DEVCAP5_chg24_irq_shift                                          (0)
#define CBUS_TX_MSC_DEVCAP5_chg24_irq_mask                                           (0x000000FF)
#define CBUS_TX_MSC_DEVCAP5_chg24_irq(data)                                          (0x000000FF&((data)<<0))
#define CBUS_TX_MSC_DEVCAP5_chg24_irq_src(data)                                      ((0x000000FF&(data))>>0)
#define CBUS_TX_MSC_DEVCAP5_get_chg24_irq(data)                                      ((0x000000FF&(data))>>0)


#define CBUS_TX_MSC_DEVCAP6                                                          0x98037C18
#define CBUS_TX_MSC_DEVCAP6_reg_addr                                                 "0xD8037C18"
#define CBUS_TX_MSC_DEVCAP6_reg                                                      0xD8037C18
#define set_CBUS_TX_MSC_DEVCAP6_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP6_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP6_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP6_reg))
#define CBUS_TX_MSC_DEVCAP6_inst_adr                                                 "0x0006"
#define CBUS_TX_MSC_DEVCAP6_inst                                                     0x0006


#define CBUS_TX_MSC_DEVCAP7                                                          0x98037C1C
#define CBUS_TX_MSC_DEVCAP7_reg_addr                                                 "0xD8037C1C"
#define CBUS_TX_MSC_DEVCAP7_reg                                                      0xD8037C1C
#define set_CBUS_TX_MSC_DEVCAP7_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP7_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP7_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP7_reg))
#define CBUS_TX_MSC_DEVCAP7_inst_adr                                                 "0x0007"
#define CBUS_TX_MSC_DEVCAP7_inst                                                     0x0007


#define CBUS_TX_MSC_DEVCAP8                                                          0x98037C20
#define CBUS_TX_MSC_DEVCAP8_reg_addr                                                 "0xD8037C20"
#define CBUS_TX_MSC_DEVCAP8_reg                                                      0xD8037C20
#define set_CBUS_TX_MSC_DEVCAP8_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP8_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP8_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP8_reg))
#define CBUS_TX_MSC_DEVCAP8_inst_adr                                                 "0x0008"
#define CBUS_TX_MSC_DEVCAP8_inst                                                     0x0008
#define CBUS_TX_MSC_DEVCAP8_muted_shift                                              (12)
#define CBUS_TX_MSC_DEVCAP8_muted_mask                                               (0x00001000)
#define CBUS_TX_MSC_DEVCAP8_muted(data)                                              (0x00001000&((data)<<12))
#define CBUS_TX_MSC_DEVCAP8_muted_src(data)                                          ((0x00001000&(data))>>12)
#define CBUS_TX_MSC_DEVCAP8_get_muted(data)                                          ((0x00001000&(data))>>12)
#define CBUS_TX_MSC_DEVCAP8_path_en_shift                                            (11)
#define CBUS_TX_MSC_DEVCAP8_path_en_mask                                             (0x00000800)
#define CBUS_TX_MSC_DEVCAP8_path_en(data)                                            (0x00000800&((data)<<11))
#define CBUS_TX_MSC_DEVCAP8_path_en_src(data)                                        ((0x00000800&(data))>>11)
#define CBUS_TX_MSC_DEVCAP8_get_path_en(data)                                        ((0x00000800&(data))>>11)
#define CBUS_TX_MSC_DEVCAP8_clk_mode_shift                                           (8)
#define CBUS_TX_MSC_DEVCAP8_clk_mode_mask                                            (0x00000700)
#define CBUS_TX_MSC_DEVCAP8_clk_mode(data)                                           (0x00000700&((data)<<8))
#define CBUS_TX_MSC_DEVCAP8_clk_mode_src(data)                                       ((0x00000700&(data))>>8)
#define CBUS_TX_MSC_DEVCAP8_get_clk_mode(data)                                       ((0x00000700&(data))>>8)
#define CBUS_TX_MSC_DEVCAP8_dcap_rdy_shift                                           (0)
#define CBUS_TX_MSC_DEVCAP8_dcap_rdy_mask                                            (0x00000001)
#define CBUS_TX_MSC_DEVCAP8_dcap_rdy(data)                                           (0x00000001&((data)<<0))
#define CBUS_TX_MSC_DEVCAP8_dcap_rdy_src(data)                                       ((0x00000001&(data))>>0)
#define CBUS_TX_MSC_DEVCAP8_get_dcap_rdy(data)                                       ((0x00000001&(data))>>0)


#define CBUS_TX_MSC_DEVCAP9                                                          0x98037C24
#define CBUS_TX_MSC_DEVCAP9_reg_addr                                                 "0xD8037C24"
#define CBUS_TX_MSC_DEVCAP9_reg                                                      0xD8037C24
#define set_CBUS_TX_MSC_DEVCAP9_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP9_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP9_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP9_reg))
#define CBUS_TX_MSC_DEVCAP9_inst_adr                                                 "0x0009"
#define CBUS_TX_MSC_DEVCAP9_inst                                                     0x0009


#define CBUS_TX_MSC_DEVCAP10                                                         0x98037C28
#define CBUS_TX_MSC_DEVCAP10_reg_addr                                                "0xD8037C28"
#define CBUS_TX_MSC_DEVCAP10_reg                                                     0xD8037C28
#define set_CBUS_TX_MSC_DEVCAP10_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP10_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP10_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP10_reg))
#define CBUS_TX_MSC_DEVCAP10_inst_adr                                                "0x000A"
#define CBUS_TX_MSC_DEVCAP10_inst                                                    0x000A


#define CBUS_TX_MSC_DEVCAP11                                                         0x98037C2c
#define CBUS_TX_MSC_DEVCAP11_reg_addr                                                "0xD8037C2C"
#define CBUS_TX_MSC_DEVCAP11_reg                                                     0xD8037C2C
#define set_CBUS_TX_MSC_DEVCAP11_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP11_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP11_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP11_reg))
#define CBUS_TX_MSC_DEVCAP11_inst_adr                                                "0x000B"
#define CBUS_TX_MSC_DEVCAP11_inst                                                    0x000B


#define CBUS_TX_MSC_DEVCAP12                                                         0x98037C30
#define CBUS_TX_MSC_DEVCAP12_reg_addr                                                "0xD8037C30"
#define CBUS_TX_MSC_DEVCAP12_reg                                                     0xD8037C30
#define set_CBUS_TX_MSC_DEVCAP12_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP12_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP12_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP12_reg))
#define CBUS_TX_MSC_DEVCAP12_inst_adr                                                "0x000C"
#define CBUS_TX_MSC_DEVCAP12_inst                                                    0x000C
#define CBUS_TX_MSC_DEVCAP12_scratchpad_reg0_shift                                   (0)
#define CBUS_TX_MSC_DEVCAP12_scratchpad_reg0_mask                                    (0xFFFFFFFF)
#define CBUS_TX_MSC_DEVCAP12_scratchpad_reg0(data)                                   (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_MSC_DEVCAP12_scratchpad_reg0_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_MSC_DEVCAP12_get_scratchpad_reg0(data)                               ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_MSC_DEVCAP13                                                         0x98037C34
#define CBUS_TX_MSC_DEVCAP13_reg_addr                                                "0xD8037C34"
#define CBUS_TX_MSC_DEVCAP13_reg                                                     0xD8037C34
#define set_CBUS_TX_MSC_DEVCAP13_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP13_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP13_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP13_reg))
#define CBUS_TX_MSC_DEVCAP13_inst_adr                                                "0x000D"
#define CBUS_TX_MSC_DEVCAP13_inst                                                    0x000D
#define CBUS_TX_MSC_DEVCAP13_scratchpad_reg1_shift                                   (0)
#define CBUS_TX_MSC_DEVCAP13_scratchpad_reg1_mask                                    (0xFFFFFFFF)
#define CBUS_TX_MSC_DEVCAP13_scratchpad_reg1(data)                                   (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_MSC_DEVCAP13_scratchpad_reg1_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_MSC_DEVCAP13_get_scratchpad_reg1(data)                               ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_MSC_DEVCAP14                                                         0x98037C38
#define CBUS_TX_MSC_DEVCAP14_reg_addr                                                "0xD8037C38"
#define CBUS_TX_MSC_DEVCAP14_reg                                                     0xD8037C38
#define set_CBUS_TX_MSC_DEVCAP14_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP14_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP14_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP14_reg))
#define CBUS_TX_MSC_DEVCAP14_inst_adr                                                "0x000E"
#define CBUS_TX_MSC_DEVCAP14_inst                                                    0x000E
#define CBUS_TX_MSC_DEVCAP14_scratchpad_reg2_shift                                   (0)
#define CBUS_TX_MSC_DEVCAP14_scratchpad_reg2_mask                                    (0xFFFFFFFF)
#define CBUS_TX_MSC_DEVCAP14_scratchpad_reg2(data)                                   (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_MSC_DEVCAP14_scratchpad_reg2_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_MSC_DEVCAP14_get_scratchpad_reg2(data)                               ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_MSC_DEVCAP15                                                         0x98037C3C
#define CBUS_TX_MSC_DEVCAP15_reg_addr                                                "0xD8037C3C"
#define CBUS_TX_MSC_DEVCAP15_reg                                                     0xD8037C3C
#define set_CBUS_TX_MSC_DEVCAP15_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP15_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP15_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP15_reg))
#define CBUS_TX_MSC_DEVCAP15_inst_adr                                                "0x000F"
#define CBUS_TX_MSC_DEVCAP15_inst                                                    0x000F
#define CBUS_TX_MSC_DEVCAP15_scratchpad_reg3_shift                                   (0)
#define CBUS_TX_MSC_DEVCAP15_scratchpad_reg3_mask                                    (0xFFFFFFFF)
#define CBUS_TX_MSC_DEVCAP15_scratchpad_reg3(data)                                   (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_MSC_DEVCAP15_scratchpad_reg3_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_MSC_DEVCAP15_get_scratchpad_reg3(data)                               ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_MSC_DEVCAP16                                                         0x98037C40
#define CBUS_TX_MSC_DEVCAP16_reg_addr                                                "0xD8037C40"
#define CBUS_TX_MSC_DEVCAP16_reg                                                     0xD8037C40
#define set_CBUS_TX_MSC_DEVCAP16_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP16_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP16_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP16_reg))
#define CBUS_TX_MSC_DEVCAP16_inst_adr                                                "0x0010"
#define CBUS_TX_MSC_DEVCAP16_inst                                                    0x0010
#define CBUS_TX_MSC_DEVCAP16_scratchpad_reg4_shift                                   (0)
#define CBUS_TX_MSC_DEVCAP16_scratchpad_reg4_mask                                    (0xFFFFFFFF)
#define CBUS_TX_MSC_DEVCAP16_scratchpad_reg4(data)                                   (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_MSC_DEVCAP16_scratchpad_reg4_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_MSC_DEVCAP16_get_scratchpad_reg4(data)                               ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_MSC_DEVCAP17                                                         0x98037C44
#define CBUS_TX_MSC_DEVCAP17_reg_addr                                                "0xD8037C44"
#define CBUS_TX_MSC_DEVCAP17_reg                                                     0xD8037C44
#define set_CBUS_TX_MSC_DEVCAP17_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP17_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP17_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP17_reg))
#define CBUS_TX_MSC_DEVCAP17_inst_adr                                                "0x0011"
#define CBUS_TX_MSC_DEVCAP17_inst                                                    0x0011
#define CBUS_TX_MSC_DEVCAP17_scratchpad_reg5_shift                                   (0)
#define CBUS_TX_MSC_DEVCAP17_scratchpad_reg5_mask                                    (0xFFFFFFFF)
#define CBUS_TX_MSC_DEVCAP17_scratchpad_reg5(data)                                   (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_MSC_DEVCAP17_scratchpad_reg5_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_MSC_DEVCAP17_get_scratchpad_reg5(data)                               ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_MSC_DEVCAP18                                                         0x98037C48
#define CBUS_TX_MSC_DEVCAP18_reg_addr                                                "0xD8037C48"
#define CBUS_TX_MSC_DEVCAP18_reg                                                     0xD8037C48
#define set_CBUS_TX_MSC_DEVCAP18_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP18_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP18_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP18_reg))
#define CBUS_TX_MSC_DEVCAP18_inst_adr                                                "0x0012"
#define CBUS_TX_MSC_DEVCAP18_inst                                                    0x0012
#define CBUS_TX_MSC_DEVCAP18_scratchpad_reg6_shift                                   (0)
#define CBUS_TX_MSC_DEVCAP18_scratchpad_reg6_mask                                    (0xFFFFFFFF)
#define CBUS_TX_MSC_DEVCAP18_scratchpad_reg6(data)                                   (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_MSC_DEVCAP18_scratchpad_reg6_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_MSC_DEVCAP18_get_scratchpad_reg6(data)                               ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_MSC_DEVCAP19                                                         0x98037C4C
#define CBUS_TX_MSC_DEVCAP19_reg_addr                                                "0xD8037C4C"
#define CBUS_TX_MSC_DEVCAP19_reg                                                     0xD8037C4C
#define set_CBUS_TX_MSC_DEVCAP19_reg(data)   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP19_reg)=data)
#define get_CBUS_TX_MSC_DEVCAP19_reg   (*((volatile unsigned int*) CBUS_TX_MSC_DEVCAP19_reg))
#define CBUS_TX_MSC_DEVCAP19_inst_adr                                                "0x0013"
#define CBUS_TX_MSC_DEVCAP19_inst                                                    0x0013
#define CBUS_TX_MSC_DEVCAP19_scratchpad_reg7_shift                                   (0)
#define CBUS_TX_MSC_DEVCAP19_scratchpad_reg7_mask                                    (0xFFFFFFFF)
#define CBUS_TX_MSC_DEVCAP19_scratchpad_reg7(data)                                   (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_MSC_DEVCAP19_scratchpad_reg7_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_MSC_DEVCAP19_get_scratchpad_reg7(data)                               ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_ECBUS_DISCOVERY                                                      0x98037D00
#define CBUS_TX_ECBUS_DISCOVERY_reg_addr                                             "0xD8037D00"
#define CBUS_TX_ECBUS_DISCOVERY_reg                                                  0xD8037D00
#define set_CBUS_TX_ECBUS_DISCOVERY_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_DISCOVERY_reg)=data)
#define get_CBUS_TX_ECBUS_DISCOVERY_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_DISCOVERY_reg))
#define CBUS_TX_ECBUS_DISCOVERY_inst_adr                                             "0x0040"
#define CBUS_TX_ECBUS_DISCOVERY_inst                                                 0x0040
#define CBUS_TX_ECBUS_DISCOVERY_emsc_resync_shift                                    (31)
#define CBUS_TX_ECBUS_DISCOVERY_emsc_resync_mask                                     (0x80000000)
#define CBUS_TX_ECBUS_DISCOVERY_emsc_resync(data)                                    (0x80000000&((data)<<31))
#define CBUS_TX_ECBUS_DISCOVERY_emsc_resync_src(data)                                ((0x80000000&(data))>>31)
#define CBUS_TX_ECBUS_DISCOVERY_get_emsc_resync(data)                                ((0x80000000&(data))>>31)
#define CBUS_TX_ECBUS_DISCOVERY_start_up_bypass_shift                                (30)
#define CBUS_TX_ECBUS_DISCOVERY_start_up_bypass_mask                                 (0x40000000)
#define CBUS_TX_ECBUS_DISCOVERY_start_up_bypass(data)                                (0x40000000&((data)<<30))
#define CBUS_TX_ECBUS_DISCOVERY_start_up_bypass_src(data)                            ((0x40000000&(data))>>30)
#define CBUS_TX_ECBUS_DISCOVERY_get_start_up_bypass(data)                            ((0x40000000&(data))>>30)
#define CBUS_TX_ECBUS_DISCOVERY_tdm_sync_bypass_shift                                (29)
#define CBUS_TX_ECBUS_DISCOVERY_tdm_sync_bypass_mask                                 (0x20000000)
#define CBUS_TX_ECBUS_DISCOVERY_tdm_sync_bypass(data)                                (0x20000000&((data)<<29))
#define CBUS_TX_ECBUS_DISCOVERY_tdm_sync_bypass_src(data)                            ((0x20000000&(data))>>29)
#define CBUS_TX_ECBUS_DISCOVERY_get_tdm_sync_bypass(data)                            ((0x20000000&(data))>>29)
#define CBUS_TX_ECBUS_DISCOVERY_emsc_train_bypass_shift                              (28)
#define CBUS_TX_ECBUS_DISCOVERY_emsc_train_bypass_mask                               (0x10000000)
#define CBUS_TX_ECBUS_DISCOVERY_emsc_train_bypass(data)                              (0x10000000&((data)<<28))
#define CBUS_TX_ECBUS_DISCOVERY_emsc_train_bypass_src(data)                          ((0x10000000&(data))>>28)
#define CBUS_TX_ECBUS_DISCOVERY_get_emsc_train_bypass(data)                          ((0x10000000&(data))>>28)
#define CBUS_TX_ECBUS_DISCOVERY_rst_emsc_rx_flag_shift                               (27)
#define CBUS_TX_ECBUS_DISCOVERY_rst_emsc_rx_flag_mask                                (0x08000000)
#define CBUS_TX_ECBUS_DISCOVERY_rst_emsc_rx_flag(data)                               (0x08000000&((data)<<27))
#define CBUS_TX_ECBUS_DISCOVERY_rst_emsc_rx_flag_src(data)                           ((0x08000000&(data))>>27)
#define CBUS_TX_ECBUS_DISCOVERY_get_rst_emsc_rx_flag(data)                           ((0x08000000&(data))>>27)
#define CBUS_TX_ECBUS_DISCOVERY_fw_rst_start_up_shift                                (20)
#define CBUS_TX_ECBUS_DISCOVERY_fw_rst_start_up_mask                                 (0x00100000)
#define CBUS_TX_ECBUS_DISCOVERY_fw_rst_start_up(data)                                (0x00100000&((data)<<20))
#define CBUS_TX_ECBUS_DISCOVERY_fw_rst_start_up_src(data)                            ((0x00100000&(data))>>20)
#define CBUS_TX_ECBUS_DISCOVERY_get_fw_rst_start_up(data)                            ((0x00100000&(data))>>20)
#define CBUS_TX_ECBUS_DISCOVERY_fw_rst_tdm_sync_shift                                (19)
#define CBUS_TX_ECBUS_DISCOVERY_fw_rst_tdm_sync_mask                                 (0x00080000)
#define CBUS_TX_ECBUS_DISCOVERY_fw_rst_tdm_sync(data)                                (0x00080000&((data)<<19))
#define CBUS_TX_ECBUS_DISCOVERY_fw_rst_tdm_sync_src(data)                            ((0x00080000&(data))>>19)
#define CBUS_TX_ECBUS_DISCOVERY_get_fw_rst_tdm_sync(data)                            ((0x00080000&(data))>>19)
#define CBUS_TX_ECBUS_DISCOVERY_fw_rst_discovery_shift                               (18)
#define CBUS_TX_ECBUS_DISCOVERY_fw_rst_discovery_mask                                (0x00040000)
#define CBUS_TX_ECBUS_DISCOVERY_fw_rst_discovery(data)                               (0x00040000&((data)<<18))
#define CBUS_TX_ECBUS_DISCOVERY_fw_rst_discovery_src(data)                           ((0x00040000&(data))>>18)
#define CBUS_TX_ECBUS_DISCOVERY_get_fw_rst_discovery(data)                           ((0x00040000&(data))>>18)
#define CBUS_TX_ECBUS_DISCOVERY_cbus_mode_up_shift                                   (17)
#define CBUS_TX_ECBUS_DISCOVERY_cbus_mode_up_mask                                    (0x00020000)
#define CBUS_TX_ECBUS_DISCOVERY_cbus_mode_up(data)                                   (0x00020000&((data)<<17))
#define CBUS_TX_ECBUS_DISCOVERY_cbus_mode_up_src(data)                               ((0x00020000&(data))>>17)
#define CBUS_TX_ECBUS_DISCOVERY_get_cbus_mode_up(data)                               ((0x00020000&(data))>>17)
#define CBUS_TX_ECBUS_DISCOVERY_cbus_mode_down_shift                                 (16)
#define CBUS_TX_ECBUS_DISCOVERY_cbus_mode_down_mask                                  (0x00010000)
#define CBUS_TX_ECBUS_DISCOVERY_cbus_mode_down(data)                                 (0x00010000&((data)<<16))
#define CBUS_TX_ECBUS_DISCOVERY_cbus_mode_down_src(data)                             ((0x00010000&(data))>>16)
#define CBUS_TX_ECBUS_DISCOVERY_get_cbus_mode_down(data)                             ((0x00010000&(data))>>16)
#define CBUS_TX_ECBUS_DISCOVERY_ecbus_ettempts_shift                                 (8)
#define CBUS_TX_ECBUS_DISCOVERY_ecbus_ettempts_mask                                  (0x00000700)
#define CBUS_TX_ECBUS_DISCOVERY_ecbus_ettempts(data)                                 (0x00000700&((data)<<8))
#define CBUS_TX_ECBUS_DISCOVERY_ecbus_ettempts_src(data)                             ((0x00000700&(data))>>8)
#define CBUS_TX_ECBUS_DISCOVERY_get_ecbus_ettempts(data)                             ((0x00000700&(data))>>8)
#define CBUS_TX_ECBUS_DISCOVERY_chg_to_cbus1_shift                                   (3)
#define CBUS_TX_ECBUS_DISCOVERY_chg_to_cbus1_mask                                    (0x00000008)
#define CBUS_TX_ECBUS_DISCOVERY_chg_to_cbus1(data)                                   (0x00000008&((data)<<3))
#define CBUS_TX_ECBUS_DISCOVERY_chg_to_cbus1_src(data)                               ((0x00000008&(data))>>3)
#define CBUS_TX_ECBUS_DISCOVERY_get_chg_to_cbus1(data)                               ((0x00000008&(data))>>3)
#define CBUS_TX_ECBUS_DISCOVERY_read_xdev_shift                                      (2)
#define CBUS_TX_ECBUS_DISCOVERY_read_xdev_mask                                       (0x00000004)
#define CBUS_TX_ECBUS_DISCOVERY_read_xdev(data)                                      (0x00000004&((data)<<2))
#define CBUS_TX_ECBUS_DISCOVERY_read_xdev_src(data)                                  ((0x00000004&(data))>>2)
#define CBUS_TX_ECBUS_DISCOVERY_get_read_xdev(data)                                  ((0x00000004&(data))>>2)
#define CBUS_TX_ECBUS_DISCOVERY_source_mhl_3_en_shift                                (1)
#define CBUS_TX_ECBUS_DISCOVERY_source_mhl_3_en_mask                                 (0x00000002)
#define CBUS_TX_ECBUS_DISCOVERY_source_mhl_3_en(data)                                (0x00000002&((data)<<1))
#define CBUS_TX_ECBUS_DISCOVERY_source_mhl_3_en_src(data)                            ((0x00000002&(data))>>1)
#define CBUS_TX_ECBUS_DISCOVERY_get_source_mhl_3_en(data)                            ((0x00000002&(data))>>1)
#define CBUS_TX_ECBUS_DISCOVERY_sink_mhl_3_en_shift                                  (0)
#define CBUS_TX_ECBUS_DISCOVERY_sink_mhl_3_en_mask                                   (0x00000001)
#define CBUS_TX_ECBUS_DISCOVERY_sink_mhl_3_en(data)                                  (0x00000001&((data)<<0))
#define CBUS_TX_ECBUS_DISCOVERY_sink_mhl_3_en_src(data)                              ((0x00000001&(data))>>0)
#define CBUS_TX_ECBUS_DISCOVERY_get_sink_mhl_3_en(data)                              ((0x00000001&(data))>>0)


#define CBUS_TX_START_UP_TIMER                                                       0x98037D04
#define CBUS_TX_START_UP_TIMER_reg_addr                                              "0xD8037D04"
#define CBUS_TX_START_UP_TIMER_reg                                                   0xD8037D04
#define set_CBUS_TX_START_UP_TIMER_reg(data)   (*((volatile unsigned int*) CBUS_TX_START_UP_TIMER_reg)=data)
#define get_CBUS_TX_START_UP_TIMER_reg   (*((volatile unsigned int*) CBUS_TX_START_UP_TIMER_reg))
#define CBUS_TX_START_UP_TIMER_inst_adr                                              "0x0041"
#define CBUS_TX_START_UP_TIMER_inst                                                  0x0041
#define CBUS_TX_START_UP_TIMER_src_ecbus_reset_shift                                 (24)
#define CBUS_TX_START_UP_TIMER_src_ecbus_reset_mask                                  (0x1F000000)
#define CBUS_TX_START_UP_TIMER_src_ecbus_reset(data)                                 (0x1F000000&((data)<<24))
#define CBUS_TX_START_UP_TIMER_src_ecbus_reset_src(data)                             ((0x1F000000&(data))>>24)
#define CBUS_TX_START_UP_TIMER_get_src_ecbus_reset(data)                             ((0x1F000000&(data))>>24)
#define CBUS_TX_START_UP_TIMER_src_tdm_tmout_shift                                   (16)
#define CBUS_TX_START_UP_TIMER_src_tdm_tmout_mask                                    (0x003F0000)
#define CBUS_TX_START_UP_TIMER_src_tdm_tmout(data)                                   (0x003F0000&((data)<<16))
#define CBUS_TX_START_UP_TIMER_src_tdm_tmout_src(data)                               ((0x003F0000&(data))>>16)
#define CBUS_TX_START_UP_TIMER_get_src_tdm_tmout(data)                               ((0x003F0000&(data))>>16)
#define CBUS_TX_START_UP_TIMER_src_balign_tmout_shift                                (8)
#define CBUS_TX_START_UP_TIMER_src_balign_tmout_mask                                 (0x00003F00)
#define CBUS_TX_START_UP_TIMER_src_balign_tmout(data)                                (0x00003F00&((data)<<8))
#define CBUS_TX_START_UP_TIMER_src_balign_tmout_src(data)                            ((0x00003F00&(data))>>8)
#define CBUS_TX_START_UP_TIMER_get_src_balign_tmout(data)                            ((0x00003F00&(data))>>8)
#define CBUS_TX_START_UP_TIMER_src_cal_tmout_shift                                   (0)
#define CBUS_TX_START_UP_TIMER_src_cal_tmout_mask                                    (0x0000007F)
#define CBUS_TX_START_UP_TIMER_src_cal_tmout(data)                                   (0x0000007F&((data)<<0))
#define CBUS_TX_START_UP_TIMER_src_cal_tmout_src(data)                               ((0x0000007F&(data))>>0)
#define CBUS_TX_START_UP_TIMER_get_src_cal_tmout(data)                               ((0x0000007F&(data))>>0)


#define CBUS_TX_ECBUS_TIMER_CTRL                                                     0x98037D18
#define CBUS_TX_ECBUS_TIMER_CTRL_reg_addr                                            "0xD8037D18"
#define CBUS_TX_ECBUS_TIMER_CTRL_reg                                                 0xD8037D18
#define set_CBUS_TX_ECBUS_TIMER_CTRL_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_TIMER_CTRL_reg)=data)
#define get_CBUS_TX_ECBUS_TIMER_CTRL_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_TIMER_CTRL_reg))
#define CBUS_TX_ECBUS_TIMER_CTRL_inst_adr                                            "0x0046"
#define CBUS_TX_ECBUS_TIMER_CTRL_inst                                                0x0046
#define CBUS_TX_ECBUS_TIMER_CTRL_ecbus_clk_us_div_shift                              (16)
#define CBUS_TX_ECBUS_TIMER_CTRL_ecbus_clk_us_div_mask                               (0x00FF0000)
#define CBUS_TX_ECBUS_TIMER_CTRL_ecbus_clk_us_div(data)                              (0x00FF0000&((data)<<16))
#define CBUS_TX_ECBUS_TIMER_CTRL_ecbus_clk_us_div_src(data)                          ((0x00FF0000&(data))>>16)
#define CBUS_TX_ECBUS_TIMER_CTRL_get_ecbus_clk_us_div(data)                          ((0x00FF0000&(data))>>16)
#define CBUS_TX_ECBUS_TIMER_CTRL_ecbus_clk_1k_div_shift                              (0)
#define CBUS_TX_ECBUS_TIMER_CTRL_ecbus_clk_1k_div_mask                               (0x000003FF)
#define CBUS_TX_ECBUS_TIMER_CTRL_ecbus_clk_1k_div(data)                              (0x000003FF&((data)<<0))
#define CBUS_TX_ECBUS_TIMER_CTRL_ecbus_clk_1k_div_src(data)                          ((0x000003FF&(data))>>0)
#define CBUS_TX_ECBUS_TIMER_CTRL_get_ecbus_clk_1k_div(data)                          ((0x000003FF&(data))>>0)


#define CBUS_TX_START_UP_TIMER1                                                      0x98037D60
#define CBUS_TX_START_UP_TIMER1_reg_addr                                             "0xD8037D60"
#define CBUS_TX_START_UP_TIMER1_reg                                                  0xD8037D60
#define set_CBUS_TX_START_UP_TIMER1_reg(data)   (*((volatile unsigned int*) CBUS_TX_START_UP_TIMER1_reg)=data)
#define get_CBUS_TX_START_UP_TIMER1_reg   (*((volatile unsigned int*) CBUS_TX_START_UP_TIMER1_reg))
#define CBUS_TX_START_UP_TIMER1_inst_adr                                             "0x0058"
#define CBUS_TX_START_UP_TIMER1_inst                                                 0x0058
#define CBUS_TX_START_UP_TIMER1_sync_tdm_shift                                       (16)
#define CBUS_TX_START_UP_TIMER1_sync_tdm_mask                                        (0x003F0000)
#define CBUS_TX_START_UP_TIMER1_sync_tdm(data)                                       (0x003F0000&((data)<<16))
#define CBUS_TX_START_UP_TIMER1_sync_tdm_src(data)                                   ((0x003F0000&(data))>>16)
#define CBUS_TX_START_UP_TIMER1_get_sync_tdm(data)                                   ((0x003F0000&(data))>>16)
#define CBUS_TX_START_UP_TIMER1_src_tdm_shift                                        (8)
#define CBUS_TX_START_UP_TIMER1_src_tdm_mask                                         (0x00001F00)
#define CBUS_TX_START_UP_TIMER1_src_tdm(data)                                        (0x00001F00&((data)<<8))
#define CBUS_TX_START_UP_TIMER1_src_tdm_src(data)                                    ((0x00001F00&(data))>>8)
#define CBUS_TX_START_UP_TIMER1_get_src_tdm(data)                                    ((0x00001F00&(data))>>8)
#define CBUS_TX_START_UP_TIMER1_src_sync_shift                                       (5)
#define CBUS_TX_START_UP_TIMER1_src_sync_mask                                        (0x000000E0)
#define CBUS_TX_START_UP_TIMER1_src_sync(data)                                       (0x000000E0&((data)<<5))
#define CBUS_TX_START_UP_TIMER1_src_sync_src(data)                                   ((0x000000E0&(data))>>5)
#define CBUS_TX_START_UP_TIMER1_get_src_sync(data)                                   ((0x000000E0&(data))>>5)
#define CBUS_TX_START_UP_TIMER1_src_balign_shift                                     (0)
#define CBUS_TX_START_UP_TIMER1_src_balign_mask                                      (0x0000001F)
#define CBUS_TX_START_UP_TIMER1_src_balign(data)                                     (0x0000001F&((data)<<0))
#define CBUS_TX_START_UP_TIMER1_src_balign_src(data)                                 ((0x0000001F&(data))>>0)
#define CBUS_TX_START_UP_TIMER1_get_src_balign(data)                                 ((0x0000001F&(data))>>0)


#define CBUS_TX_CBUS1_CTRL                                                           0x98037D08
#define CBUS_TX_CBUS1_CTRL_reg_addr                                                  "0xD8037D08"
#define CBUS_TX_CBUS1_CTRL_reg                                                       0xD8037D08
#define set_CBUS_TX_CBUS1_CTRL_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS1_CTRL_reg)=data)
#define get_CBUS_TX_CBUS1_CTRL_reg   (*((volatile unsigned int*) CBUS_TX_CBUS1_CTRL_reg))
#define CBUS_TX_CBUS1_CTRL_inst_adr                                                  "0x0042"
#define CBUS_TX_CBUS1_CTRL_inst                                                      0x0042
#define CBUS_TX_CBUS1_CTRL_cbus1_swap_shift                                          (31)
#define CBUS_TX_CBUS1_CTRL_cbus1_swap_mask                                           (0x80000000)
#define CBUS_TX_CBUS1_CTRL_cbus1_swap(data)                                          (0x80000000&((data)<<31))
#define CBUS_TX_CBUS1_CTRL_cbus1_swap_src(data)                                      ((0x80000000&(data))>>31)
#define CBUS_TX_CBUS1_CTRL_get_cbus1_swap(data)                                      ((0x80000000&(data))>>31)
#define CBUS_TX_CBUS1_CTRL_comma_swap_shift                                          (30)
#define CBUS_TX_CBUS1_CTRL_comma_swap_mask                                           (0x40000000)
#define CBUS_TX_CBUS1_CTRL_comma_swap(data)                                          (0x40000000&((data)<<30))
#define CBUS_TX_CBUS1_CTRL_comma_swap_src(data)                                      ((0x40000000&(data))>>30)
#define CBUS_TX_CBUS1_CTRL_get_comma_swap(data)                                      ((0x40000000&(data))>>30)
#define CBUS_TX_CBUS1_CTRL_comma1_sel_shift                                          (9)
#define CBUS_TX_CBUS1_CTRL_comma1_sel_mask                                           (0x00000200)
#define CBUS_TX_CBUS1_CTRL_comma1_sel(data)                                          (0x00000200&((data)<<9))
#define CBUS_TX_CBUS1_CTRL_comma1_sel_src(data)                                      ((0x00000200&(data))>>9)
#define CBUS_TX_CBUS1_CTRL_get_comma1_sel(data)                                      ((0x00000200&(data))>>9)
#define CBUS_TX_CBUS1_CTRL_comma2_sel_shift                                          (8)
#define CBUS_TX_CBUS1_CTRL_comma2_sel_mask                                           (0x00000100)
#define CBUS_TX_CBUS1_CTRL_comma2_sel(data)                                          (0x00000100&((data)<<8))
#define CBUS_TX_CBUS1_CTRL_comma2_sel_src(data)                                      ((0x00000100&(data))>>8)
#define CBUS_TX_CBUS1_CTRL_get_comma2_sel(data)                                      ((0x00000100&(data))>>8)
#define CBUS_TX_CBUS1_CTRL_retry_start_up_shift                                      (4)
#define CBUS_TX_CBUS1_CTRL_retry_start_up_mask                                       (0x00000070)
#define CBUS_TX_CBUS1_CTRL_retry_start_up(data)                                      (0x00000070&((data)<<4))
#define CBUS_TX_CBUS1_CTRL_retry_start_up_src(data)                                  ((0x00000070&(data))>>4)
#define CBUS_TX_CBUS1_CTRL_get_retry_start_up(data)                                  ((0x00000070&(data))>>4)
#define CBUS_TX_CBUS1_CTRL_chk_comma1_shift                                          (2)
#define CBUS_TX_CBUS1_CTRL_chk_comma1_mask                                           (0x0000000C)
#define CBUS_TX_CBUS1_CTRL_chk_comma1(data)                                          (0x0000000C&((data)<<2))
#define CBUS_TX_CBUS1_CTRL_chk_comma1_src(data)                                      ((0x0000000C&(data))>>2)
#define CBUS_TX_CBUS1_CTRL_get_chk_comma1(data)                                      ((0x0000000C&(data))>>2)
#define CBUS_TX_CBUS1_CTRL_chk_comma2_shift                                          (0)
#define CBUS_TX_CBUS1_CTRL_chk_comma2_mask                                           (0x00000003)
#define CBUS_TX_CBUS1_CTRL_chk_comma2(data)                                          (0x00000003&((data)<<0))
#define CBUS_TX_CBUS1_CTRL_chk_comma2_src(data)                                      ((0x00000003&(data))>>0)
#define CBUS_TX_CBUS1_CTRL_get_chk_comma2(data)                                      ((0x00000003&(data))>>0)


#define CBUS_TX_EMSC_TIMER0                                                          0x98037D0C
#define CBUS_TX_EMSC_TIMER0_reg_addr                                                 "0xD8037D0C"
#define CBUS_TX_EMSC_TIMER0_reg                                                      0xD8037D0C
#define set_CBUS_TX_EMSC_TIMER0_reg(data)   (*((volatile unsigned int*) CBUS_TX_EMSC_TIMER0_reg)=data)
#define get_CBUS_TX_EMSC_TIMER0_reg   (*((volatile unsigned int*) CBUS_TX_EMSC_TIMER0_reg))
#define CBUS_TX_EMSC_TIMER0_inst_adr                                                 "0x0043"
#define CBUS_TX_EMSC_TIMER0_inst                                                     0x0043
#define CBUS_TX_EMSC_TIMER0_block_rcv_ack_shift                                      (16)
#define CBUS_TX_EMSC_TIMER0_block_rcv_ack_mask                                       (0x003F0000)
#define CBUS_TX_EMSC_TIMER0_block_rcv_ack(data)                                      (0x003F0000&((data)<<16))
#define CBUS_TX_EMSC_TIMER0_block_rcv_ack_src(data)                                  ((0x003F0000&(data))>>16)
#define CBUS_TX_EMSC_TIMER0_get_block_rcv_ack(data)                                  ((0x003F0000&(data))>>16)
#define CBUS_TX_EMSC_TIMER0_temsc_req_tmout_shift                                    (8)
#define CBUS_TX_EMSC_TIMER0_temsc_req_tmout_mask                                     (0x00000F00)
#define CBUS_TX_EMSC_TIMER0_temsc_req_tmout(data)                                    (0x00000F00&((data)<<8))
#define CBUS_TX_EMSC_TIMER0_temsc_req_tmout_src(data)                                ((0x00000F00&(data))>>8)
#define CBUS_TX_EMSC_TIMER0_get_temsc_req_tmout(data)                                ((0x00000F00&(data))>>8)
#define CBUS_TX_EMSC_TIMER0_temsc_resp_tmout_shift                                   (4)
#define CBUS_TX_EMSC_TIMER0_temsc_resp_tmout_mask                                    (0x000000F0)
#define CBUS_TX_EMSC_TIMER0_temsc_resp_tmout(data)                                   (0x000000F0&((data)<<4))
#define CBUS_TX_EMSC_TIMER0_temsc_resp_tmout_src(data)                               ((0x000000F0&(data))>>4)
#define CBUS_TX_EMSC_TIMER0_get_temsc_resp_tmout(data)                               ((0x000000F0&(data))>>4)
#define CBUS_TX_EMSC_TIMER0_temsc_retry_time_shift                                   (0)
#define CBUS_TX_EMSC_TIMER0_temsc_retry_time_mask                                    (0x0000000F)
#define CBUS_TX_EMSC_TIMER0_temsc_retry_time(data)                                   (0x0000000F&((data)<<0))
#define CBUS_TX_EMSC_TIMER0_temsc_retry_time_src(data)                               ((0x0000000F&(data))>>0)
#define CBUS_TX_EMSC_TIMER0_get_temsc_retry_time(data)                               ((0x0000000F&(data))>>0)


#define CBUS_TX_EMSC_TIMER1                                                          0x98037D10
#define CBUS_TX_EMSC_TIMER1_reg_addr                                                 "0xD8037D10"
#define CBUS_TX_EMSC_TIMER1_reg                                                      0xD8037D10
#define set_CBUS_TX_EMSC_TIMER1_reg(data)   (*((volatile unsigned int*) CBUS_TX_EMSC_TIMER1_reg)=data)
#define get_CBUS_TX_EMSC_TIMER1_reg   (*((volatile unsigned int*) CBUS_TX_EMSC_TIMER1_reg))
#define CBUS_TX_EMSC_TIMER1_inst_adr                                                 "0x0044"
#define CBUS_TX_EMSC_TIMER1_inst                                                     0x0044
#define CBUS_TX_EMSC_TIMER1_nemsc_mark_shift                                         (20)
#define CBUS_TX_EMSC_TIMER1_nemsc_mark_mask                                          (0x01F00000)
#define CBUS_TX_EMSC_TIMER1_nemsc_mark(data)                                         (0x01F00000&((data)<<20))
#define CBUS_TX_EMSC_TIMER1_nemsc_mark_src(data)                                     ((0x01F00000&(data))>>20)
#define CBUS_TX_EMSC_TIMER1_get_nemsc_mark(data)                                     ((0x01F00000&(data))>>20)
#define CBUS_TX_EMSC_TIMER1_nemsc_mark_err_shift                                     (16)
#define CBUS_TX_EMSC_TIMER1_nemsc_mark_err_mask                                      (0x000F0000)
#define CBUS_TX_EMSC_TIMER1_nemsc_mark_err(data)                                     (0x000F0000&((data)<<16))
#define CBUS_TX_EMSC_TIMER1_nemsc_mark_err_src(data)                                 ((0x000F0000&(data))>>16)
#define CBUS_TX_EMSC_TIMER1_get_nemsc_mark_err(data)                                 ((0x000F0000&(data))>>16)
#define CBUS_TX_EMSC_TIMER1_nemsc_retry_shift                                        (12)
#define CBUS_TX_EMSC_TIMER1_nemsc_retry_mask                                         (0x0000F000)
#define CBUS_TX_EMSC_TIMER1_nemsc_retry(data)                                        (0x0000F000&((data)<<12))
#define CBUS_TX_EMSC_TIMER1_nemsc_retry_src(data)                                    ((0x0000F000&(data))>>12)
#define CBUS_TX_EMSC_TIMER1_get_nemsc_retry(data)                                    ((0x0000F000&(data))>>12)
#define CBUS_TX_EMSC_TIMER1_nemsc_init_sync_shift                                    (0)
#define CBUS_TX_EMSC_TIMER1_nemsc_init_sync_mask                                     (0x000001FF)
#define CBUS_TX_EMSC_TIMER1_nemsc_init_sync(data)                                    (0x000001FF&((data)<<0))
#define CBUS_TX_EMSC_TIMER1_nemsc_init_sync_src(data)                                ((0x000001FF&(data))>>0)
#define CBUS_TX_EMSC_TIMER1_get_nemsc_init_sync(data)                                ((0x000001FF&(data))>>0)


#define CBUS_TX_CBUS1_TIME                                                           0x98037D14
#define CBUS_TX_CBUS1_TIME_reg_addr                                                  "0xD8037D14"
#define CBUS_TX_CBUS1_TIME_reg                                                       0xD8037D14
#define set_CBUS_TX_CBUS1_TIME_reg(data)   (*((volatile unsigned int*) CBUS_TX_CBUS1_TIME_reg)=data)
#define get_CBUS_TX_CBUS1_TIME_reg   (*((volatile unsigned int*) CBUS_TX_CBUS1_TIME_reg))
#define CBUS_TX_CBUS1_TIME_inst_adr                                                  "0x0045"
#define CBUS_TX_CBUS1_TIME_inst                                                      0x0045
#define CBUS_TX_CBUS1_TIME_cbus1_retry_pause_shift                                   (24)
#define CBUS_TX_CBUS1_TIME_cbus1_retry_pause_mask                                    (0x0F000000)
#define CBUS_TX_CBUS1_TIME_cbus1_retry_pause(data)                                   (0x0F000000&((data)<<24))
#define CBUS_TX_CBUS1_TIME_cbus1_retry_pause_src(data)                               ((0x0F000000&(data))>>24)
#define CBUS_TX_CBUS1_TIME_get_cbus1_retry_pause(data)                               ((0x0F000000&(data))>>24)
#define CBUS_TX_CBUS1_TIME_cbus1_retry_src_shift                                     (16)
#define CBUS_TX_CBUS1_TIME_cbus1_retry_src_mask                                      (0x000F0000)
#define CBUS_TX_CBUS1_TIME_cbus1_retry_src(data)                                     (0x000F0000&((data)<<16))
#define CBUS_TX_CBUS1_TIME_cbus1_retry_src_src(data)                                 ((0x000F0000&(data))>>16)
#define CBUS_TX_CBUS1_TIME_get_cbus1_retry_src(data)                                 ((0x000F0000&(data))>>16)
#define CBUS_TX_CBUS1_TIME_msc_msg_timeout_shift                                     (8)
#define CBUS_TX_CBUS1_TIME_msc_msg_timeout_mask                                      (0x00007F00)
#define CBUS_TX_CBUS1_TIME_msc_msg_timeout(data)                                     (0x00007F00&((data)<<8))
#define CBUS_TX_CBUS1_TIME_msc_msg_timeout_src(data)                                 ((0x00007F00&(data))>>8)
#define CBUS_TX_CBUS1_TIME_get_msc_msg_timeout(data)                                 ((0x00007F00&(data))>>8)
#define CBUS_TX_CBUS1_TIME_cbus1_timeout_shift                                       (0)
#define CBUS_TX_CBUS1_TIME_cbus1_timeout_mask                                        (0x0000000F)
#define CBUS_TX_CBUS1_TIME_cbus1_timeout(data)                                       (0x0000000F&((data)<<0))
#define CBUS_TX_CBUS1_TIME_cbus1_timeout_src(data)                                   ((0x0000000F&(data))>>0)
#define CBUS_TX_CBUS1_TIME_get_cbus1_timeout(data)                                   ((0x0000000F&(data))>>0)


#define CBUS_TX_CHANNEL_ASSIGN0                                                      0x98037D20
#define CBUS_TX_CHANNEL_ASSIGN0_reg_addr                                             "0xD8037D20"
#define CBUS_TX_CHANNEL_ASSIGN0_reg                                                  0xD8037D20
#define set_CBUS_TX_CHANNEL_ASSIGN0_reg(data)   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN0_reg)=data)
#define get_CBUS_TX_CHANNEL_ASSIGN0_reg   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN0_reg))
#define CBUS_TX_CHANNEL_ASSIGN0_inst_adr                                             "0x0048"
#define CBUS_TX_CHANNEL_ASSIGN0_inst                                                 0x0048
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign4_shift                                   (24)
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign4_mask                                    (0xFF000000)
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign4(data)                                   (0xFF000000&((data)<<24))
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign4_src(data)                               ((0xFF000000&(data))>>24)
#define CBUS_TX_CHANNEL_ASSIGN0_get_slot_assign4(data)                               ((0xFF000000&(data))>>24)
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign3_shift                                   (16)
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign3_mask                                    (0x00FF0000)
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign3(data)                                   (0x00FF0000&((data)<<16))
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign3_src(data)                               ((0x00FF0000&(data))>>16)
#define CBUS_TX_CHANNEL_ASSIGN0_get_slot_assign3(data)                               ((0x00FF0000&(data))>>16)
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign2_shift                                   (8)
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign2_mask                                    (0x0000FF00)
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign2(data)                                   (0x0000FF00&((data)<<8))
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign2_src(data)                               ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN0_get_slot_assign2(data)                               ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign1_shift                                   (0)
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign1_mask                                    (0x000000FF)
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign1(data)                                   (0x000000FF&((data)<<0))
#define CBUS_TX_CHANNEL_ASSIGN0_slot_assign1_src(data)                               ((0x000000FF&(data))>>0)
#define CBUS_TX_CHANNEL_ASSIGN0_get_slot_assign1(data)                               ((0x000000FF&(data))>>0)


#define CBUS_TX_CHANNEL_ASSIGN1                                                      0x98037D24
#define CBUS_TX_CHANNEL_ASSIGN1_reg_addr                                             "0xD8037D24"
#define CBUS_TX_CHANNEL_ASSIGN1_reg                                                  0xD8037D24
#define set_CBUS_TX_CHANNEL_ASSIGN1_reg(data)   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN1_reg)=data)
#define get_CBUS_TX_CHANNEL_ASSIGN1_reg   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN1_reg))
#define CBUS_TX_CHANNEL_ASSIGN1_inst_adr                                             "0x0049"
#define CBUS_TX_CHANNEL_ASSIGN1_inst                                                 0x0049
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign8_shift                                   (24)
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign8_mask                                    (0xFF000000)
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign8(data)                                   (0xFF000000&((data)<<24))
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign8_src(data)                               ((0xFF000000&(data))>>24)
#define CBUS_TX_CHANNEL_ASSIGN1_get_slot_assign8(data)                               ((0xFF000000&(data))>>24)
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign7_shift                                   (16)
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign7_mask                                    (0x00FF0000)
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign7(data)                                   (0x00FF0000&((data)<<16))
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign7_src(data)                               ((0x00FF0000&(data))>>16)
#define CBUS_TX_CHANNEL_ASSIGN1_get_slot_assign7(data)                               ((0x00FF0000&(data))>>16)
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign6_shift                                   (8)
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign6_mask                                    (0x0000FF00)
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign6(data)                                   (0x0000FF00&((data)<<8))
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign6_src(data)                               ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN1_get_slot_assign6(data)                               ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign5_shift                                   (0)
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign5_mask                                    (0x000000FF)
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign5(data)                                   (0x000000FF&((data)<<0))
#define CBUS_TX_CHANNEL_ASSIGN1_slot_assign5_src(data)                               ((0x000000FF&(data))>>0)
#define CBUS_TX_CHANNEL_ASSIGN1_get_slot_assign5(data)                               ((0x000000FF&(data))>>0)


#define CBUS_TX_CHANNEL_ASSIGN2                                                      0x98037D28
#define CBUS_TX_CHANNEL_ASSIGN2_reg_addr                                             "0xD8037D28"
#define CBUS_TX_CHANNEL_ASSIGN2_reg                                                  0xD8037D28
#define set_CBUS_TX_CHANNEL_ASSIGN2_reg(data)   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN2_reg)=data)
#define get_CBUS_TX_CHANNEL_ASSIGN2_reg   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN2_reg))
#define CBUS_TX_CHANNEL_ASSIGN2_inst_adr                                             "0x004A"
#define CBUS_TX_CHANNEL_ASSIGN2_inst                                                 0x004A
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign12_shift                                  (24)
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign12_mask                                   (0xFF000000)
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign12(data)                                  (0xFF000000&((data)<<24))
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign12_src(data)                              ((0xFF000000&(data))>>24)
#define CBUS_TX_CHANNEL_ASSIGN2_get_slot_assign12(data)                              ((0xFF000000&(data))>>24)
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign11_shift                                  (16)
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign11_mask                                   (0x00FF0000)
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign11(data)                                  (0x00FF0000&((data)<<16))
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign11_src(data)                              ((0x00FF0000&(data))>>16)
#define CBUS_TX_CHANNEL_ASSIGN2_get_slot_assign11(data)                              ((0x00FF0000&(data))>>16)
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign10_shift                                  (8)
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign10_mask                                   (0x0000FF00)
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign10(data)                                  (0x0000FF00&((data)<<8))
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign10_src(data)                              ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN2_get_slot_assign10(data)                              ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign9_shift                                   (0)
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign9_mask                                    (0x000000FF)
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign9(data)                                   (0x000000FF&((data)<<0))
#define CBUS_TX_CHANNEL_ASSIGN2_slot_assign9_src(data)                               ((0x000000FF&(data))>>0)
#define CBUS_TX_CHANNEL_ASSIGN2_get_slot_assign9(data)                               ((0x000000FF&(data))>>0)


#define CBUS_TX_CHANNEL_ASSIGN3                                                      0x98037D2C
#define CBUS_TX_CHANNEL_ASSIGN3_reg_addr                                             "0xD8037D2C"
#define CBUS_TX_CHANNEL_ASSIGN3_reg                                                  0xD8037D2C
#define set_CBUS_TX_CHANNEL_ASSIGN3_reg(data)   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN3_reg)=data)
#define get_CBUS_TX_CHANNEL_ASSIGN3_reg   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN3_reg))
#define CBUS_TX_CHANNEL_ASSIGN3_inst_adr                                             "0x004B"
#define CBUS_TX_CHANNEL_ASSIGN3_inst                                                 0x004B
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign16_shift                                  (24)
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign16_mask                                   (0xFF000000)
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign16(data)                                  (0xFF000000&((data)<<24))
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign16_src(data)                              ((0xFF000000&(data))>>24)
#define CBUS_TX_CHANNEL_ASSIGN3_get_slot_assign16(data)                              ((0xFF000000&(data))>>24)
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign15_shift                                  (16)
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign15_mask                                   (0x00FF0000)
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign15(data)                                  (0x00FF0000&((data)<<16))
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign15_src(data)                              ((0x00FF0000&(data))>>16)
#define CBUS_TX_CHANNEL_ASSIGN3_get_slot_assign15(data)                              ((0x00FF0000&(data))>>16)
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign14_shift                                  (8)
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign14_mask                                   (0x0000FF00)
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign14(data)                                  (0x0000FF00&((data)<<8))
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign14_src(data)                              ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN3_get_slot_assign14(data)                              ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign13_shift                                  (0)
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign13_mask                                   (0x000000FF)
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign13(data)                                  (0x000000FF&((data)<<0))
#define CBUS_TX_CHANNEL_ASSIGN3_slot_assign13_src(data)                              ((0x000000FF&(data))>>0)
#define CBUS_TX_CHANNEL_ASSIGN3_get_slot_assign13(data)                              ((0x000000FF&(data))>>0)


#define CBUS_TX_CHANNEL_ASSIGN4                                                      0x98037D30
#define CBUS_TX_CHANNEL_ASSIGN4_reg_addr                                             "0xD8037D30"
#define CBUS_TX_CHANNEL_ASSIGN4_reg                                                  0xD8037D30
#define set_CBUS_TX_CHANNEL_ASSIGN4_reg(data)   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN4_reg)=data)
#define get_CBUS_TX_CHANNEL_ASSIGN4_reg   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN4_reg))
#define CBUS_TX_CHANNEL_ASSIGN4_inst_adr                                             "0x004C"
#define CBUS_TX_CHANNEL_ASSIGN4_inst                                                 0x004C
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign20_shift                                  (24)
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign20_mask                                   (0xFF000000)
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign20(data)                                  (0xFF000000&((data)<<24))
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign20_src(data)                              ((0xFF000000&(data))>>24)
#define CBUS_TX_CHANNEL_ASSIGN4_get_slot_assign20(data)                              ((0xFF000000&(data))>>24)
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign19_shift                                  (16)
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign19_mask                                   (0x00FF0000)
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign19(data)                                  (0x00FF0000&((data)<<16))
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign19_src(data)                              ((0x00FF0000&(data))>>16)
#define CBUS_TX_CHANNEL_ASSIGN4_get_slot_assign19(data)                              ((0x00FF0000&(data))>>16)
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign18_shift                                  (8)
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign18_mask                                   (0x0000FF00)
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign18(data)                                  (0x0000FF00&((data)<<8))
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign18_src(data)                              ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN4_get_slot_assign18(data)                              ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign17_shift                                  (0)
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign17_mask                                   (0x000000FF)
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign17(data)                                  (0x000000FF&((data)<<0))
#define CBUS_TX_CHANNEL_ASSIGN4_slot_assign17_src(data)                              ((0x000000FF&(data))>>0)
#define CBUS_TX_CHANNEL_ASSIGN4_get_slot_assign17(data)                              ((0x000000FF&(data))>>0)


#define CBUS_TX_CHANNEL_ASSIGN5                                                      0x98037D34
#define CBUS_TX_CHANNEL_ASSIGN5_reg_addr                                             "0xD8037D34"
#define CBUS_TX_CHANNEL_ASSIGN5_reg                                                  0xD8037D34
#define set_CBUS_TX_CHANNEL_ASSIGN5_reg(data)   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN5_reg)=data)
#define get_CBUS_TX_CHANNEL_ASSIGN5_reg   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN5_reg))
#define CBUS_TX_CHANNEL_ASSIGN5_inst_adr                                             "0x004D"
#define CBUS_TX_CHANNEL_ASSIGN5_inst                                                 0x004D
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign24_shift                                  (24)
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign24_mask                                   (0xFF000000)
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign24(data)                                  (0xFF000000&((data)<<24))
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign24_src(data)                              ((0xFF000000&(data))>>24)
#define CBUS_TX_CHANNEL_ASSIGN5_get_slot_assign24(data)                              ((0xFF000000&(data))>>24)
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign23_shift                                  (16)
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign23_mask                                   (0x00FF0000)
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign23(data)                                  (0x00FF0000&((data)<<16))
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign23_src(data)                              ((0x00FF0000&(data))>>16)
#define CBUS_TX_CHANNEL_ASSIGN5_get_slot_assign23(data)                              ((0x00FF0000&(data))>>16)
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign22_shift                                  (8)
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign22_mask                                   (0x0000FF00)
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign22(data)                                  (0x0000FF00&((data)<<8))
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign22_src(data)                              ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN5_get_slot_assign22(data)                              ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign21_shift                                  (0)
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign21_mask                                   (0x000000FF)
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign21(data)                                  (0x000000FF&((data)<<0))
#define CBUS_TX_CHANNEL_ASSIGN5_slot_assign21_src(data)                              ((0x000000FF&(data))>>0)
#define CBUS_TX_CHANNEL_ASSIGN5_get_slot_assign21(data)                              ((0x000000FF&(data))>>0)


#define CBUS_TX_CHANNEL_ASSIGN                                                       0x98037D38
#define CBUS_TX_CHANNEL_ASSIGN_reg_addr                                              "0xD8037D38"
#define CBUS_TX_CHANNEL_ASSIGN_reg                                                   0xD8037D38
#define set_CBUS_TX_CHANNEL_ASSIGN_reg(data)   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN_reg)=data)
#define get_CBUS_TX_CHANNEL_ASSIGN_reg   (*((volatile unsigned int*) CBUS_TX_CHANNEL_ASSIGN_reg))
#define CBUS_TX_CHANNEL_ASSIGN_inst_adr                                              "0x004E"
#define CBUS_TX_CHANNEL_ASSIGN_inst                                                  0x004E
#define CBUS_TX_CHANNEL_ASSIGN_tcbus0_ch_num_shift                                   (8)
#define CBUS_TX_CHANNEL_ASSIGN_tcbus0_ch_num_mask                                    (0x0000FF00)
#define CBUS_TX_CHANNEL_ASSIGN_tcbus0_ch_num(data)                                   (0x0000FF00&((data)<<8))
#define CBUS_TX_CHANNEL_ASSIGN_tcbus0_ch_num_src(data)                               ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN_get_tcbus0_ch_num(data)                               ((0x0000FF00&(data))>>8)
#define CBUS_TX_CHANNEL_ASSIGN_emsc_ch_num_shift                                     (0)
#define CBUS_TX_CHANNEL_ASSIGN_emsc_ch_num_mask                                      (0x000000FF)
#define CBUS_TX_CHANNEL_ASSIGN_emsc_ch_num(data)                                     (0x000000FF&((data)<<0))
#define CBUS_TX_CHANNEL_ASSIGN_emsc_ch_num_src(data)                                 ((0x000000FF&(data))>>0)
#define CBUS_TX_CHANNEL_ASSIGN_get_emsc_ch_num(data)                                 ((0x000000FF&(data))>>0)


#define CBUS_TX_TCBUS_CTRL                                                           0x98037D3C
#define CBUS_TX_TCBUS_CTRL_reg_addr                                                  "0xD8037D3C"
#define CBUS_TX_TCBUS_CTRL_reg                                                       0xD8037D3C
#define set_CBUS_TX_TCBUS_CTRL_reg(data)   (*((volatile unsigned int*) CBUS_TX_TCBUS_CTRL_reg)=data)
#define get_CBUS_TX_TCBUS_CTRL_reg   (*((volatile unsigned int*) CBUS_TX_TCBUS_CTRL_reg))
#define CBUS_TX_TCBUS_CTRL_inst_adr                                                  "0x004F"
#define CBUS_TX_TCBUS_CTRL_inst                                                      0x004F
#define CBUS_TX_TCBUS_CTRL_tcbus1_tx_rdy_shift                                       (31)
#define CBUS_TX_TCBUS_CTRL_tcbus1_tx_rdy_mask                                        (0x80000000)
#define CBUS_TX_TCBUS_CTRL_tcbus1_tx_rdy(data)                                       (0x80000000&((data)<<31))
#define CBUS_TX_TCBUS_CTRL_tcbus1_tx_rdy_src(data)                                   ((0x80000000&(data))>>31)
#define CBUS_TX_TCBUS_CTRL_get_tcbus1_tx_rdy(data)                                   ((0x80000000&(data))>>31)
#define CBUS_TX_TCBUS_CTRL_tcbus1_tx_byte_shift                                      (16)
#define CBUS_TX_TCBUS_CTRL_tcbus1_tx_byte_mask                                       (0x0FFF0000)
#define CBUS_TX_TCBUS_CTRL_tcbus1_tx_byte(data)                                      (0x0FFF0000&((data)<<16))
#define CBUS_TX_TCBUS_CTRL_tcbus1_tx_byte_src(data)                                  ((0x0FFF0000&(data))>>16)
#define CBUS_TX_TCBUS_CTRL_get_tcbus1_tx_byte(data)                                  ((0x0FFF0000&(data))>>16)
#define CBUS_TX_TCBUS_CTRL_tcbus0_tx_rdy_shift                                       (15)
#define CBUS_TX_TCBUS_CTRL_tcbus0_tx_rdy_mask                                        (0x00008000)
#define CBUS_TX_TCBUS_CTRL_tcbus0_tx_rdy(data)                                       (0x00008000&((data)<<15))
#define CBUS_TX_TCBUS_CTRL_tcbus0_tx_rdy_src(data)                                   ((0x00008000&(data))>>15)
#define CBUS_TX_TCBUS_CTRL_get_tcbus0_tx_rdy(data)                                   ((0x00008000&(data))>>15)
#define CBUS_TX_TCBUS_CTRL_tcbus0_tx_byte_shift                                      (0)
#define CBUS_TX_TCBUS_CTRL_tcbus0_tx_byte_mask                                       (0x00000FFF)
#define CBUS_TX_TCBUS_CTRL_tcbus0_tx_byte(data)                                      (0x00000FFF&((data)<<0))
#define CBUS_TX_TCBUS_CTRL_tcbus0_tx_byte_src(data)                                  ((0x00000FFF&(data))>>0)
#define CBUS_TX_TCBUS_CTRL_get_tcbus0_tx_byte(data)                                  ((0x00000FFF&(data))>>0)


#define CBUS_TX_EMSC_CTRL                                                            0x98037D40
#define CBUS_TX_EMSC_CTRL_reg_addr                                                   "0xD8037D40"
#define CBUS_TX_EMSC_CTRL_reg                                                        0xD8037D40
#define set_CBUS_TX_EMSC_CTRL_reg(data)   (*((volatile unsigned int*) CBUS_TX_EMSC_CTRL_reg)=data)
#define get_CBUS_TX_EMSC_CTRL_reg   (*((volatile unsigned int*) CBUS_TX_EMSC_CTRL_reg))
#define CBUS_TX_EMSC_CTRL_inst_adr                                                   "0x0050"
#define CBUS_TX_EMSC_CTRL_inst                                                       0x0050
#define CBUS_TX_EMSC_CTRL_emsc_tx_rdy_shift                                          (31)
#define CBUS_TX_EMSC_CTRL_emsc_tx_rdy_mask                                           (0x80000000)
#define CBUS_TX_EMSC_CTRL_emsc_tx_rdy(data)                                          (0x80000000&((data)<<31))
#define CBUS_TX_EMSC_CTRL_emsc_tx_rdy_src(data)                                      ((0x80000000&(data))>>31)
#define CBUS_TX_EMSC_CTRL_get_emsc_tx_rdy(data)                                      ((0x80000000&(data))>>31)
#define CBUS_TX_EMSC_CTRL_emsc_tx_req_shift                                          (0)
#define CBUS_TX_EMSC_CTRL_emsc_tx_req_mask                                           (0x0000FFFF)
#define CBUS_TX_EMSC_CTRL_emsc_tx_req(data)                                          (0x0000FFFF&((data)<<0))
#define CBUS_TX_EMSC_CTRL_emsc_tx_req_src(data)                                      ((0x0000FFFF&(data))>>0)
#define CBUS_TX_EMSC_CTRL_get_emsc_tx_req(data)                                      ((0x0000FFFF&(data))>>0)


#define CBUS_TX_EMSC_CTRL1                                                           0x98037D44
#define CBUS_TX_EMSC_CTRL1_reg_addr                                                  "0xD8037D44"
#define CBUS_TX_EMSC_CTRL1_reg                                                       0xD8037D44
#define set_CBUS_TX_EMSC_CTRL1_reg(data)   (*((volatile unsigned int*) CBUS_TX_EMSC_CTRL1_reg)=data)
#define get_CBUS_TX_EMSC_CTRL1_reg   (*((volatile unsigned int*) CBUS_TX_EMSC_CTRL1_reg))
#define CBUS_TX_EMSC_CTRL1_inst_adr                                                  "0x0051"
#define CBUS_TX_EMSC_CTRL1_inst                                                      0x0051
#define CBUS_TX_EMSC_CTRL1_emsc_fw_crc_shift                                         (31)
#define CBUS_TX_EMSC_CTRL1_emsc_fw_crc_mask                                          (0x80000000)
#define CBUS_TX_EMSC_CTRL1_emsc_fw_crc(data)                                         (0x80000000&((data)<<31))
#define CBUS_TX_EMSC_CTRL1_emsc_fw_crc_src(data)                                     ((0x80000000&(data))>>31)
#define CBUS_TX_EMSC_CTRL1_get_emsc_fw_crc(data)                                     ((0x80000000&(data))>>31)
#define CBUS_TX_EMSC_CTRL1_emsc_swap_shift                                           (30)
#define CBUS_TX_EMSC_CTRL1_emsc_swap_mask                                            (0x40000000)
#define CBUS_TX_EMSC_CTRL1_emsc_swap(data)                                           (0x40000000&((data)<<30))
#define CBUS_TX_EMSC_CTRL1_emsc_swap_src(data)                                       ((0x40000000&(data))>>30)
#define CBUS_TX_EMSC_CTRL1_get_emsc_swap(data)                                       ((0x40000000&(data))>>30)
#define CBUS_TX_EMSC_CTRL1_emsc_req_err_retry_shift                                  (29)
#define CBUS_TX_EMSC_CTRL1_emsc_req_err_retry_mask                                   (0x20000000)
#define CBUS_TX_EMSC_CTRL1_emsc_req_err_retry(data)                                  (0x20000000&((data)<<29))
#define CBUS_TX_EMSC_CTRL1_emsc_req_err_retry_src(data)                              ((0x20000000&(data))>>29)
#define CBUS_TX_EMSC_CTRL1_get_emsc_req_err_retry(data)                              ((0x20000000&(data))>>29)
#define CBUS_TX_EMSC_CTRL1_emsc_mark1_wait_shift                                     (28)
#define CBUS_TX_EMSC_CTRL1_emsc_mark1_wait_mask                                      (0x10000000)
#define CBUS_TX_EMSC_CTRL1_emsc_mark1_wait(data)                                     (0x10000000&((data)<<28))
#define CBUS_TX_EMSC_CTRL1_emsc_mark1_wait_src(data)                                 ((0x10000000&(data))>>28)
#define CBUS_TX_EMSC_CTRL1_get_emsc_mark1_wait(data)                                 ((0x10000000&(data))>>28)
#define CBUS_TX_EMSC_CTRL1_ecbus_dout_sel_shift                                      (27)
#define CBUS_TX_EMSC_CTRL1_ecbus_dout_sel_mask                                       (0x08000000)
#define CBUS_TX_EMSC_CTRL1_ecbus_dout_sel(data)                                      (0x08000000&((data)<<27))
#define CBUS_TX_EMSC_CTRL1_ecbus_dout_sel_src(data)                                  ((0x08000000&(data))>>27)
#define CBUS_TX_EMSC_CTRL1_get_ecbus_dout_sel(data)                                  ((0x08000000&(data))>>27)
#define CBUS_TX_EMSC_CTRL1_emsc_tx_crc_shift                                         (0)
#define CBUS_TX_EMSC_CTRL1_emsc_tx_crc_mask                                          (0x0000FFFF)
#define CBUS_TX_EMSC_CTRL1_emsc_tx_crc(data)                                         (0x0000FFFF&((data)<<0))
#define CBUS_TX_EMSC_CTRL1_emsc_tx_crc_src(data)                                     ((0x0000FFFF&(data))>>0)
#define CBUS_TX_EMSC_CTRL1_get_emsc_tx_crc(data)                                     ((0x0000FFFF&(data))>>0)


#define CBUS_TX_BIST_CTRL0                                                           0x98037D48
#define CBUS_TX_BIST_CTRL0_reg_addr                                                  "0xD8037D48"
#define CBUS_TX_BIST_CTRL0_reg                                                       0xD8037D48
#define set_CBUS_TX_BIST_CTRL0_reg(data)   (*((volatile unsigned int*) CBUS_TX_BIST_CTRL0_reg)=data)
#define get_CBUS_TX_BIST_CTRL0_reg   (*((volatile unsigned int*) CBUS_TX_BIST_CTRL0_reg))
#define CBUS_TX_BIST_CTRL0_inst_adr                                                  "0x0052"
#define CBUS_TX_BIST_CTRL0_inst                                                      0x0052
#define CBUS_TX_BIST_CTRL0_ecbus_tx_bist_shift                                       (31)
#define CBUS_TX_BIST_CTRL0_ecbus_tx_bist_mask                                        (0x80000000)
#define CBUS_TX_BIST_CTRL0_ecbus_tx_bist(data)                                       (0x80000000&((data)<<31))
#define CBUS_TX_BIST_CTRL0_ecbus_tx_bist_src(data)                                   ((0x80000000&(data))>>31)
#define CBUS_TX_BIST_CTRL0_get_ecbus_tx_bist(data)                                   ((0x80000000&(data))>>31)
#define CBUS_TX_BIST_CTRL0_ecbus_rx_bist_shift                                       (30)
#define CBUS_TX_BIST_CTRL0_ecbus_rx_bist_mask                                        (0x40000000)
#define CBUS_TX_BIST_CTRL0_ecbus_rx_bist(data)                                       (0x40000000&((data)<<30))
#define CBUS_TX_BIST_CTRL0_ecbus_rx_bist_src(data)                                   ((0x40000000&(data))>>30)
#define CBUS_TX_BIST_CTRL0_get_ecbus_rx_bist(data)                                   ((0x40000000&(data))>>30)
#define CBUS_TX_BIST_CTRL0_ecbus_select_shift                                        (29)
#define CBUS_TX_BIST_CTRL0_ecbus_select_mask                                         (0x20000000)
#define CBUS_TX_BIST_CTRL0_ecbus_select(data)                                        (0x20000000&((data)<<29))
#define CBUS_TX_BIST_CTRL0_ecbus_select_src(data)                                    ((0x20000000&(data))>>29)
#define CBUS_TX_BIST_CTRL0_get_ecbus_select(data)                                    ((0x20000000&(data))>>29)
#define CBUS_TX_BIST_CTRL0_impedance_test_shift                                      (28)
#define CBUS_TX_BIST_CTRL0_impedance_test_mask                                       (0x10000000)
#define CBUS_TX_BIST_CTRL0_impedance_test(data)                                      (0x10000000&((data)<<28))
#define CBUS_TX_BIST_CTRL0_impedance_test_src(data)                                  ((0x10000000&(data))>>28)
#define CBUS_TX_BIST_CTRL0_get_impedance_test(data)                                  ((0x10000000&(data))>>28)
#define CBUS_TX_BIST_CTRL0_impedance_mode_shift                                      (0)
#define CBUS_TX_BIST_CTRL0_impedance_mode_mask                                       (0x000000FF)
#define CBUS_TX_BIST_CTRL0_impedance_mode(data)                                      (0x000000FF&((data)<<0))
#define CBUS_TX_BIST_CTRL0_impedance_mode_src(data)                                  ((0x000000FF&(data))>>0)
#define CBUS_TX_BIST_CTRL0_get_impedance_mode(data)                                  ((0x000000FF&(data))>>0)


#define CBUS_TX_BIST_CTRL1                                                           0x98037D4C
#define CBUS_TX_BIST_CTRL1_reg_addr                                                  "0xD8037D4C"
#define CBUS_TX_BIST_CTRL1_reg                                                       0xD8037D4C
#define set_CBUS_TX_BIST_CTRL1_reg(data)   (*((volatile unsigned int*) CBUS_TX_BIST_CTRL1_reg)=data)
#define get_CBUS_TX_BIST_CTRL1_reg   (*((volatile unsigned int*) CBUS_TX_BIST_CTRL1_reg))
#define CBUS_TX_BIST_CTRL1_inst_adr                                                  "0x0053"
#define CBUS_TX_BIST_CTRL1_inst                                                      0x0053
#define CBUS_TX_BIST_CTRL1_ecbus_fixed_h_shift                                       (24)
#define CBUS_TX_BIST_CTRL1_ecbus_fixed_h_mask                                        (0xFF000000)
#define CBUS_TX_BIST_CTRL1_ecbus_fixed_h(data)                                       (0xFF000000&((data)<<24))
#define CBUS_TX_BIST_CTRL1_ecbus_fixed_h_src(data)                                   ((0xFF000000&(data))>>24)
#define CBUS_TX_BIST_CTRL1_get_ecbus_fixed_h(data)                                   ((0xFF000000&(data))>>24)
#define CBUS_TX_BIST_CTRL1_ecbus_fixed_l_shift                                       (16)
#define CBUS_TX_BIST_CTRL1_ecbus_fixed_l_mask                                        (0x00FF0000)
#define CBUS_TX_BIST_CTRL1_ecbus_fixed_l(data)                                       (0x00FF0000&((data)<<16))
#define CBUS_TX_BIST_CTRL1_ecbus_fixed_l_src(data)                                   ((0x00FF0000&(data))>>16)
#define CBUS_TX_BIST_CTRL1_get_ecbus_fixed_l(data)                                   ((0x00FF0000&(data))>>16)
#define CBUS_TX_BIST_CTRL1_ecbus_pattern_shift                                       (8)
#define CBUS_TX_BIST_CTRL1_ecbus_pattern_mask                                        (0x00000F00)
#define CBUS_TX_BIST_CTRL1_ecbus_pattern(data)                                       (0x00000F00&((data)<<8))
#define CBUS_TX_BIST_CTRL1_ecbus_pattern_src(data)                                   ((0x00000F00&(data))>>8)
#define CBUS_TX_BIST_CTRL1_get_ecbus_pattern(data)                                   ((0x00000F00&(data))>>8)
#define CBUS_TX_BIST_CTRL1_ecbus_duration_shift                                      (0)
#define CBUS_TX_BIST_CTRL1_ecbus_duration_mask                                       (0x000000FF)
#define CBUS_TX_BIST_CTRL1_ecbus_duration(data)                                      (0x000000FF&((data)<<0))
#define CBUS_TX_BIST_CTRL1_ecbus_duration_src(data)                                  ((0x000000FF&(data))>>0)
#define CBUS_TX_BIST_CTRL1_get_ecbus_duration(data)                                  ((0x000000FF&(data))>>0)


#define CBUS_TX_BIST_STATUS                                                          0x98037D50
#define CBUS_TX_BIST_STATUS_reg_addr                                                 "0xD8037D50"
#define CBUS_TX_BIST_STATUS_reg                                                      0xD8037D50
#define set_CBUS_TX_BIST_STATUS_reg(data)   (*((volatile unsigned int*) CBUS_TX_BIST_STATUS_reg)=data)
#define get_CBUS_TX_BIST_STATUS_reg   (*((volatile unsigned int*) CBUS_TX_BIST_STATUS_reg))
#define CBUS_TX_BIST_STATUS_inst_adr                                                 "0x0054"
#define CBUS_TX_BIST_STATUS_inst                                                     0x0054
#define CBUS_TX_BIST_STATUS_ecbus_stat_h_shift                                       (8)
#define CBUS_TX_BIST_STATUS_ecbus_stat_h_mask                                        (0x0000FF00)
#define CBUS_TX_BIST_STATUS_ecbus_stat_h(data)                                       (0x0000FF00&((data)<<8))
#define CBUS_TX_BIST_STATUS_ecbus_stat_h_src(data)                                   ((0x0000FF00&(data))>>8)
#define CBUS_TX_BIST_STATUS_get_ecbus_stat_h(data)                                   ((0x0000FF00&(data))>>8)
#define CBUS_TX_BIST_STATUS_ecbus_stat_l_shift                                       (0)
#define CBUS_TX_BIST_STATUS_ecbus_stat_l_mask                                        (0x000000FF)
#define CBUS_TX_BIST_STATUS_ecbus_stat_l(data)                                       (0x000000FF&((data)<<0))
#define CBUS_TX_BIST_STATUS_ecbus_stat_l_src(data)                                   ((0x000000FF&(data))>>0)
#define CBUS_TX_BIST_STATUS_get_ecbus_stat_l(data)                                   ((0x000000FF&(data))>>0)


#define CBUS_TX_ECBUS_IRQ                                                            0x98037D54
#define CBUS_TX_ECBUS_IRQ_reg_addr                                                   "0xD8037D54"
#define CBUS_TX_ECBUS_IRQ_reg                                                        0xD8037D54
#define set_CBUS_TX_ECBUS_IRQ_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_IRQ_reg)=data)
#define get_CBUS_TX_ECBUS_IRQ_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_IRQ_reg))
#define CBUS_TX_ECBUS_IRQ_inst_adr                                                   "0x0055"
#define CBUS_TX_ECBUS_IRQ_inst                                                       0x0055
#define CBUS_TX_ECBUS_IRQ_bist_test_irq_shift                                        (31)
#define CBUS_TX_ECBUS_IRQ_bist_test_irq_mask                                         (0x80000000)
#define CBUS_TX_ECBUS_IRQ_bist_test_irq(data)                                        (0x80000000&((data)<<31))
#define CBUS_TX_ECBUS_IRQ_bist_test_irq_src(data)                                    ((0x80000000&(data))>>31)
#define CBUS_TX_ECBUS_IRQ_get_bist_test_irq(data)                                    ((0x80000000&(data))>>31)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_tmout_irq_shift                                    (25)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_tmout_irq_mask                                     (0x02000000)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_tmout_irq(data)                                    (0x02000000&((data)<<25))
#define CBUS_TX_ECBUS_IRQ_emsc_tx_tmout_irq_src(data)                                ((0x02000000&(data))>>25)
#define CBUS_TX_ECBUS_IRQ_get_emsc_tx_tmout_irq(data)                                ((0x02000000&(data))>>25)
#define CBUS_TX_ECBUS_IRQ_emsc_rx_tmout_irq_shift                                    (24)
#define CBUS_TX_ECBUS_IRQ_emsc_rx_tmout_irq_mask                                     (0x01000000)
#define CBUS_TX_ECBUS_IRQ_emsc_rx_tmout_irq(data)                                    (0x01000000&((data)<<24))
#define CBUS_TX_ECBUS_IRQ_emsc_rx_tmout_irq_src(data)                                ((0x01000000&(data))>>24)
#define CBUS_TX_ECBUS_IRQ_get_emsc_rx_tmout_irq(data)                                ((0x01000000&(data))>>24)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_req_fail_irq_shift                                 (23)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_req_fail_irq_mask                                  (0x00800000)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_req_fail_irq(data)                                 (0x00800000&((data)<<23))
#define CBUS_TX_ECBUS_IRQ_emsc_tx_req_fail_irq_src(data)                             ((0x00800000&(data))>>23)
#define CBUS_TX_ECBUS_IRQ_get_emsc_tx_req_fail_irq(data)                             ((0x00800000&(data))>>23)
#define CBUS_TX_ECBUS_IRQ_emsc_invalid_cmd_irq_shift                                 (22)
#define CBUS_TX_ECBUS_IRQ_emsc_invalid_cmd_irq_mask                                  (0x00400000)
#define CBUS_TX_ECBUS_IRQ_emsc_invalid_cmd_irq(data)                                 (0x00400000&((data)<<22))
#define CBUS_TX_ECBUS_IRQ_emsc_invalid_cmd_irq_src(data)                             ((0x00400000&(data))>>22)
#define CBUS_TX_ECBUS_IRQ_get_emsc_invalid_cmd_irq(data)                             ((0x00400000&(data))>>22)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_err_irq_shift                                      (21)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_err_irq_mask                                       (0x00200000)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_err_irq(data)                                      (0x00200000&((data)<<21))
#define CBUS_TX_ECBUS_IRQ_emsc_tx_err_irq_src(data)                                  ((0x00200000&(data))>>21)
#define CBUS_TX_ECBUS_IRQ_get_emsc_tx_err_irq(data)                                  ((0x00200000&(data))>>21)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_nack_irq_shift                                     (20)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_nack_irq_mask                                      (0x00100000)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_nack_irq(data)                                     (0x00100000&((data)<<20))
#define CBUS_TX_ECBUS_IRQ_emsc_tx_nack_irq_src(data)                                 ((0x00100000&(data))>>20)
#define CBUS_TX_ECBUS_IRQ_get_emsc_tx_nack_irq(data)                                 ((0x00100000&(data))>>20)
#define CBUS_TX_ECBUS_IRQ_emsc_retry_fail_irq_shift                                  (19)
#define CBUS_TX_ECBUS_IRQ_emsc_retry_fail_irq_mask                                   (0x00080000)
#define CBUS_TX_ECBUS_IRQ_emsc_retry_fail_irq(data)                                  (0x00080000&((data)<<19))
#define CBUS_TX_ECBUS_IRQ_emsc_retry_fail_irq_src(data)                              ((0x00080000&(data))>>19)
#define CBUS_TX_ECBUS_IRQ_get_emsc_retry_fail_irq(data)                              ((0x00080000&(data))>>19)
#define CBUS_TX_ECBUS_IRQ_emsc_rx_full_irq_shift                                     (18)
#define CBUS_TX_ECBUS_IRQ_emsc_rx_full_irq_mask                                      (0x00040000)
#define CBUS_TX_ECBUS_IRQ_emsc_rx_full_irq(data)                                     (0x00040000&((data)<<18))
#define CBUS_TX_ECBUS_IRQ_emsc_rx_full_irq_src(data)                                 ((0x00040000&(data))>>18)
#define CBUS_TX_ECBUS_IRQ_get_emsc_rx_full_irq(data)                                 ((0x00040000&(data))>>18)
#define CBUS_TX_ECBUS_IRQ_emsc_crc_fail_irq_shift                                    (17)
#define CBUS_TX_ECBUS_IRQ_emsc_crc_fail_irq_mask                                     (0x00020000)
#define CBUS_TX_ECBUS_IRQ_emsc_crc_fail_irq(data)                                    (0x00020000&((data)<<17))
#define CBUS_TX_ECBUS_IRQ_emsc_crc_fail_irq_src(data)                                ((0x00020000&(data))>>17)
#define CBUS_TX_ECBUS_IRQ_get_emsc_crc_fail_irq(data)                                ((0x00020000&(data))>>17)
#define CBUS_TX_ECBUS_IRQ_emsc_rx_irq_shift                                          (16)
#define CBUS_TX_ECBUS_IRQ_emsc_rx_irq_mask                                           (0x00010000)
#define CBUS_TX_ECBUS_IRQ_emsc_rx_irq(data)                                          (0x00010000&((data)<<16))
#define CBUS_TX_ECBUS_IRQ_emsc_rx_irq_src(data)                                      ((0x00010000&(data))>>16)
#define CBUS_TX_ECBUS_IRQ_get_emsc_rx_irq(data)                                      ((0x00010000&(data))>>16)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_irq_shift                                          (15)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_irq_mask                                           (0x00008000)
#define CBUS_TX_ECBUS_IRQ_emsc_tx_irq(data)                                          (0x00008000&((data)<<15))
#define CBUS_TX_ECBUS_IRQ_emsc_tx_irq_src(data)                                      ((0x00008000&(data))>>15)
#define CBUS_TX_ECBUS_IRQ_get_emsc_tx_irq(data)                                      ((0x00008000&(data))>>15)
#define CBUS_TX_ECBUS_IRQ_emsc_loss_sync_irq_shift                                   (14)
#define CBUS_TX_ECBUS_IRQ_emsc_loss_sync_irq_mask                                    (0x00004000)
#define CBUS_TX_ECBUS_IRQ_emsc_loss_sync_irq(data)                                   (0x00004000&((data)<<14))
#define CBUS_TX_ECBUS_IRQ_emsc_loss_sync_irq_src(data)                               ((0x00004000&(data))>>14)
#define CBUS_TX_ECBUS_IRQ_get_emsc_loss_sync_irq(data)                               ((0x00004000&(data))>>14)
#define CBUS_TX_ECBUS_IRQ_emsc_sync_irq_shift                                        (13)
#define CBUS_TX_ECBUS_IRQ_emsc_sync_irq_mask                                         (0x00002000)
#define CBUS_TX_ECBUS_IRQ_emsc_sync_irq(data)                                        (0x00002000&((data)<<13))
#define CBUS_TX_ECBUS_IRQ_emsc_sync_irq_src(data)                                    ((0x00002000&(data))>>13)
#define CBUS_TX_ECBUS_IRQ_get_emsc_sync_irq(data)                                    ((0x00002000&(data))>>13)
#define CBUS_TX_ECBUS_IRQ_ecbus_reset_irq_shift                                      (12)
#define CBUS_TX_ECBUS_IRQ_ecbus_reset_irq_mask                                       (0x00001000)
#define CBUS_TX_ECBUS_IRQ_ecbus_reset_irq(data)                                      (0x00001000&((data)<<12))
#define CBUS_TX_ECBUS_IRQ_ecbus_reset_irq_src(data)                                  ((0x00001000&(data))>>12)
#define CBUS_TX_ECBUS_IRQ_get_ecbus_reset_irq(data)                                  ((0x00001000&(data))>>12)
#define CBUS_TX_ECBUS_IRQ_cbus1_tx_nack_irq_shift                                    (11)
#define CBUS_TX_ECBUS_IRQ_cbus1_tx_nack_irq_mask                                     (0x00000800)
#define CBUS_TX_ECBUS_IRQ_cbus1_tx_nack_irq(data)                                    (0x00000800&((data)<<11))
#define CBUS_TX_ECBUS_IRQ_cbus1_tx_nack_irq_src(data)                                ((0x00000800&(data))>>11)
#define CBUS_TX_ECBUS_IRQ_get_cbus1_tx_nack_irq(data)                                ((0x00000800&(data))>>11)
#define CBUS_TX_ECBUS_IRQ_cbus1_tx_pkt_irq_shift                                     (10)
#define CBUS_TX_ECBUS_IRQ_cbus1_tx_pkt_irq_mask                                      (0x00000400)
#define CBUS_TX_ECBUS_IRQ_cbus1_tx_pkt_irq(data)                                     (0x00000400&((data)<<10))
#define CBUS_TX_ECBUS_IRQ_cbus1_tx_pkt_irq_src(data)                                 ((0x00000400&(data))>>10)
#define CBUS_TX_ECBUS_IRQ_get_cbus1_tx_pkt_irq(data)                                 ((0x00000400&(data))>>10)
#define CBUS_TX_ECBUS_IRQ_cbus1_rx_crc_fail_irq_shift                                (9)
#define CBUS_TX_ECBUS_IRQ_cbus1_rx_crc_fail_irq_mask                                 (0x00000200)
#define CBUS_TX_ECBUS_IRQ_cbus1_rx_crc_fail_irq(data)                                (0x00000200&((data)<<9))
#define CBUS_TX_ECBUS_IRQ_cbus1_rx_crc_fail_irq_src(data)                            ((0x00000200&(data))>>9)
#define CBUS_TX_ECBUS_IRQ_get_cbus1_rx_crc_fail_irq(data)                            ((0x00000200&(data))>>9)
#define CBUS_TX_ECBUS_IRQ_cbus1_rx_pkt_irq_shift                                     (8)
#define CBUS_TX_ECBUS_IRQ_cbus1_rx_pkt_irq_mask                                      (0x00000100)
#define CBUS_TX_ECBUS_IRQ_cbus1_rx_pkt_irq(data)                                     (0x00000100&((data)<<8))
#define CBUS_TX_ECBUS_IRQ_cbus1_rx_pkt_irq_src(data)                                 ((0x00000100&(data))>>8)
#define CBUS_TX_ECBUS_IRQ_get_cbus1_rx_pkt_irq(data)                                 ((0x00000100&(data))>>8)
#define CBUS_TX_ECBUS_IRQ_cbus1_sync_fail_irq_shift                                  (7)
#define CBUS_TX_ECBUS_IRQ_cbus1_sync_fail_irq_mask                                   (0x00000080)
#define CBUS_TX_ECBUS_IRQ_cbus1_sync_fail_irq(data)                                  (0x00000080&((data)<<7))
#define CBUS_TX_ECBUS_IRQ_cbus1_sync_fail_irq_src(data)                              ((0x00000080&(data))>>7)
#define CBUS_TX_ECBUS_IRQ_get_cbus1_sync_fail_irq(data)                              ((0x00000080&(data))>>7)
#define CBUS_TX_ECBUS_IRQ_cbus1_lost_sync_irq_shift                                  (6)
#define CBUS_TX_ECBUS_IRQ_cbus1_lost_sync_irq_mask                                   (0x00000040)
#define CBUS_TX_ECBUS_IRQ_cbus1_lost_sync_irq(data)                                  (0x00000040&((data)<<6))
#define CBUS_TX_ECBUS_IRQ_cbus1_lost_sync_irq_src(data)                              ((0x00000040&(data))>>6)
#define CBUS_TX_ECBUS_IRQ_get_cbus1_lost_sync_irq(data)                              ((0x00000040&(data))>>6)
#define CBUS_TX_ECBUS_IRQ_cbus1_on_irq_shift                                         (5)
#define CBUS_TX_ECBUS_IRQ_cbus1_on_irq_mask                                          (0x00000020)
#define CBUS_TX_ECBUS_IRQ_cbus1_on_irq(data)                                         (0x00000020&((data)<<5))
#define CBUS_TX_ECBUS_IRQ_cbus1_on_irq_src(data)                                     ((0x00000020&(data))>>5)
#define CBUS_TX_ECBUS_IRQ_get_cbus1_on_irq(data)                                     ((0x00000020&(data))>>5)
#define CBUS_TX_ECBUS_IRQ_start_up_fail_irq_shift                                    (4)
#define CBUS_TX_ECBUS_IRQ_start_up_fail_irq_mask                                     (0x00000010)
#define CBUS_TX_ECBUS_IRQ_start_up_fail_irq(data)                                    (0x00000010&((data)<<4))
#define CBUS_TX_ECBUS_IRQ_start_up_fail_irq_src(data)                                ((0x00000010&(data))>>4)
#define CBUS_TX_ECBUS_IRQ_get_start_up_fail_irq(data)                                ((0x00000010&(data))>>4)
#define CBUS_TX_ECBUS_IRQ_start_up_irq_shift                                         (3)
#define CBUS_TX_ECBUS_IRQ_start_up_irq_mask                                          (0x00000008)
#define CBUS_TX_ECBUS_IRQ_start_up_irq(data)                                         (0x00000008&((data)<<3))
#define CBUS_TX_ECBUS_IRQ_start_up_irq_src(data)                                     ((0x00000008&(data))>>3)
#define CBUS_TX_ECBUS_IRQ_get_start_up_irq(data)                                     ((0x00000008&(data))>>3)
#define CBUS_TX_ECBUS_IRQ_ecbus_disconn_irq_shift                                    (1)
#define CBUS_TX_ECBUS_IRQ_ecbus_disconn_irq_mask                                     (0x00000002)
#define CBUS_TX_ECBUS_IRQ_ecbus_disconn_irq(data)                                    (0x00000002&((data)<<1))
#define CBUS_TX_ECBUS_IRQ_ecbus_disconn_irq_src(data)                                ((0x00000002&(data))>>1)
#define CBUS_TX_ECBUS_IRQ_get_ecbus_disconn_irq(data)                                ((0x00000002&(data))>>1)
#define CBUS_TX_ECBUS_IRQ_write_data_shift                                           (0)
#define CBUS_TX_ECBUS_IRQ_write_data_mask                                            (0x00000001)
#define CBUS_TX_ECBUS_IRQ_write_data(data)                                           (0x00000001&((data)<<0))
#define CBUS_TX_ECBUS_IRQ_write_data_src(data)                                       ((0x00000001&(data))>>0)
#define CBUS_TX_ECBUS_IRQ_get_write_data(data)                                       ((0x00000001&(data))>>0)


#define CBUS_TX_EMSC_CTRL2                                                           0x98037D58
#define CBUS_TX_EMSC_CTRL2_reg_addr                                                  "0xD8037D58"
#define CBUS_TX_EMSC_CTRL2_reg                                                       0xD8037D58
#define set_CBUS_TX_EMSC_CTRL2_reg(data)   (*((volatile unsigned int*) CBUS_TX_EMSC_CTRL2_reg)=data)
#define get_CBUS_TX_EMSC_CTRL2_reg   (*((volatile unsigned int*) CBUS_TX_EMSC_CTRL2_reg))
#define CBUS_TX_EMSC_CTRL2_inst_adr                                                  "0x0056"
#define CBUS_TX_EMSC_CTRL2_inst                                                      0x0056
#define CBUS_TX_EMSC_CTRL2_emsc_rx_rdy_shift                                         (1)
#define CBUS_TX_EMSC_CTRL2_emsc_rx_rdy_mask                                          (0x00000002)
#define CBUS_TX_EMSC_CTRL2_emsc_rx_rdy(data)                                         (0x00000002&((data)<<1))
#define CBUS_TX_EMSC_CTRL2_emsc_rx_rdy_src(data)                                     ((0x00000002&(data))>>1)
#define CBUS_TX_EMSC_CTRL2_get_emsc_rx_rdy(data)                                     ((0x00000002&(data))>>1)
#define CBUS_TX_EMSC_CTRL2_write_data_shift                                          (0)
#define CBUS_TX_EMSC_CTRL2_write_data_mask                                           (0x00000001)
#define CBUS_TX_EMSC_CTRL2_write_data(data)                                          (0x00000001&((data)<<0))
#define CBUS_TX_EMSC_CTRL2_write_data_src(data)                                      ((0x00000001&(data))>>0)
#define CBUS_TX_EMSC_CTRL2_get_write_data(data)                                      ((0x00000001&(data))>>0)


#define CBUS_TX_EMSC_STATUS0                                                         0x98037D84
#define CBUS_TX_EMSC_STATUS0_reg_addr                                                "0xD8037D84"
#define CBUS_TX_EMSC_STATUS0_reg                                                     0xD8037D84
#define set_CBUS_TX_EMSC_STATUS0_reg(data)   (*((volatile unsigned int*) CBUS_TX_EMSC_STATUS0_reg)=data)
#define get_CBUS_TX_EMSC_STATUS0_reg   (*((volatile unsigned int*) CBUS_TX_EMSC_STATUS0_reg))
#define CBUS_TX_EMSC_STATUS0_inst_adr                                                "0x0061"
#define CBUS_TX_EMSC_STATUS0_inst                                                    0x0061
#define CBUS_TX_EMSC_STATUS0_emsc_rx_crc_shift                                       (16)
#define CBUS_TX_EMSC_STATUS0_emsc_rx_crc_mask                                        (0xFFFF0000)
#define CBUS_TX_EMSC_STATUS0_emsc_rx_crc(data)                                       (0xFFFF0000&((data)<<16))
#define CBUS_TX_EMSC_STATUS0_emsc_rx_crc_src(data)                                   ((0xFFFF0000&(data))>>16)
#define CBUS_TX_EMSC_STATUS0_get_emsc_rx_crc(data)                                   ((0xFFFF0000&(data))>>16)
#define CBUS_TX_EMSC_STATUS0_emsc_rx_req_shift                                       (0)
#define CBUS_TX_EMSC_STATUS0_emsc_rx_req_mask                                        (0x0000FFFF)
#define CBUS_TX_EMSC_STATUS0_emsc_rx_req(data)                                       (0x0000FFFF&((data)<<0))
#define CBUS_TX_EMSC_STATUS0_emsc_rx_req_src(data)                                   ((0x0000FFFF&(data))>>0)
#define CBUS_TX_EMSC_STATUS0_get_emsc_rx_req(data)                                   ((0x0000FFFF&(data))>>0)


#define CBUS_TX_EMSC_STATUS1                                                         0x98037D88
#define CBUS_TX_EMSC_STATUS1_reg_addr                                                "0xD8037D88"
#define CBUS_TX_EMSC_STATUS1_reg                                                     0xD8037D88
#define set_CBUS_TX_EMSC_STATUS1_reg(data)   (*((volatile unsigned int*) CBUS_TX_EMSC_STATUS1_reg)=data)
#define get_CBUS_TX_EMSC_STATUS1_reg   (*((volatile unsigned int*) CBUS_TX_EMSC_STATUS1_reg))
#define CBUS_TX_EMSC_STATUS1_inst_adr                                                "0x0062"
#define CBUS_TX_EMSC_STATUS1_inst                                                    0x0062
#define CBUS_TX_EMSC_STATUS1_emsc_rcv_err_shift                                      (0)
#define CBUS_TX_EMSC_STATUS1_emsc_rcv_err_mask                                       (0x0000FFFF)
#define CBUS_TX_EMSC_STATUS1_emsc_rcv_err(data)                                      (0x0000FFFF&((data)<<0))
#define CBUS_TX_EMSC_STATUS1_emsc_rcv_err_src(data)                                  ((0x0000FFFF&(data))>>0)
#define CBUS_TX_EMSC_STATUS1_get_emsc_rcv_err(data)                                  ((0x0000FFFF&(data))>>0)


#define CBUS_TX_ECBUS_STATUS                                                         0x98037D64
#define CBUS_TX_ECBUS_STATUS_reg_addr                                                "0xD8037D64"
#define CBUS_TX_ECBUS_STATUS_reg                                                     0xD8037D64
#define set_CBUS_TX_ECBUS_STATUS_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_STATUS_reg)=data)
#define get_CBUS_TX_ECBUS_STATUS_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_STATUS_reg))
#define CBUS_TX_ECBUS_STATUS_inst_adr                                                "0x0059"
#define CBUS_TX_ECBUS_STATUS_inst                                                    0x0059
#define CBUS_TX_ECBUS_STATUS_ediscovery_st_shift                                     (0)
#define CBUS_TX_ECBUS_STATUS_ediscovery_st_mask                                      (0x0000000F)
#define CBUS_TX_ECBUS_STATUS_ediscovery_st(data)                                     (0x0000000F&((data)<<0))
#define CBUS_TX_ECBUS_STATUS_ediscovery_st_src(data)                                 ((0x0000000F&(data))>>0)
#define CBUS_TX_ECBUS_STATUS_get_ediscovery_st(data)                                 ((0x0000000F&(data))>>0)


#define CBUS_TX_ECBUS_IRQ_EN                                                         0x98037D68
#define CBUS_TX_ECBUS_IRQ_EN_reg_addr                                                "0xD8037D68"
#define CBUS_TX_ECBUS_IRQ_EN_reg                                                     0xD8037D68
#define set_CBUS_TX_ECBUS_IRQ_EN_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_IRQ_EN_reg)=data)
#define get_CBUS_TX_ECBUS_IRQ_EN_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_IRQ_EN_reg))
#define CBUS_TX_ECBUS_IRQ_EN_inst_adr                                                "0x005A"
#define CBUS_TX_ECBUS_IRQ_EN_inst                                                    0x005A
#define CBUS_TX_ECBUS_IRQ_EN_bist_test_irq_en_shift                                  (31)
#define CBUS_TX_ECBUS_IRQ_EN_bist_test_irq_en_mask                                   (0x80000000)
#define CBUS_TX_ECBUS_IRQ_EN_bist_test_irq_en(data)                                  (0x80000000&((data)<<31))
#define CBUS_TX_ECBUS_IRQ_EN_bist_test_irq_en_src(data)                              ((0x80000000&(data))>>31)
#define CBUS_TX_ECBUS_IRQ_EN_get_bist_test_irq_en(data)                              ((0x80000000&(data))>>31)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_tmout_irq_en_shift                              (25)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_tmout_irq_en_mask                               (0x02000000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_tmout_irq_en(data)                              (0x02000000&((data)<<25))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_tmout_irq_en_src(data)                          ((0x02000000&(data))>>25)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_tx_tmout_irq_en(data)                          ((0x02000000&(data))>>25)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_rx_tmout_irq_en_shift                              (24)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_rx_tmout_irq_en_mask                               (0x01000000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_rx_tmout_irq_en(data)                              (0x01000000&((data)<<24))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_rx_tmout_irq_en_src(data)                          ((0x01000000&(data))>>24)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_rx_tmout_irq_en(data)                          ((0x01000000&(data))>>24)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_req_fail_irq_en_shift                           (23)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_req_fail_irq_en_mask                            (0x00800000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_req_fail_irq_en(data)                           (0x00800000&((data)<<23))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_req_fail_irq_en_src(data)                       ((0x00800000&(data))>>23)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_tx_req_fail_irq_en(data)                       ((0x00800000&(data))>>23)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_invalid_cmd_irq_en_shift                           (22)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_invalid_cmd_irq_en_mask                            (0x00400000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_invalid_cmd_irq_en(data)                           (0x00400000&((data)<<22))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_invalid_cmd_irq_en_src(data)                       ((0x00400000&(data))>>22)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_invalid_cmd_irq_en(data)                       ((0x00400000&(data))>>22)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_err_irq_en_shift                                (21)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_err_irq_en_mask                                 (0x00200000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_err_irq_en(data)                                (0x00200000&((data)<<21))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_err_irq_en_src(data)                            ((0x00200000&(data))>>21)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_tx_err_irq_en(data)                            ((0x00200000&(data))>>21)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_nack_irq_en_shift                               (20)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_nack_irq_en_mask                                (0x00100000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_nack_irq_en(data)                               (0x00100000&((data)<<20))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_nack_irq_en_src(data)                           ((0x00100000&(data))>>20)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_tx_nack_irq_en(data)                           ((0x00100000&(data))>>20)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_retry_fail_irq_en_shift                            (19)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_retry_fail_irq_en_mask                             (0x00080000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_retry_fail_irq_en(data)                            (0x00080000&((data)<<19))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_retry_fail_irq_en_src(data)                        ((0x00080000&(data))>>19)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_retry_fail_irq_en(data)                        ((0x00080000&(data))>>19)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_rx_full_irq_en_shift                               (18)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_rx_full_irq_en_mask                                (0x00040000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_rx_full_irq_en(data)                               (0x00040000&((data)<<18))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_rx_full_irq_en_src(data)                           ((0x00040000&(data))>>18)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_rx_full_irq_en(data)                           ((0x00040000&(data))>>18)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_crc_fail_irq_en_shift                              (17)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_crc_fail_irq_en_mask                               (0x00020000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_crc_fail_irq_en(data)                              (0x00020000&((data)<<17))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_crc_fail_irq_en_src(data)                          ((0x00020000&(data))>>17)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_crc_fail_irq_en(data)                          ((0x00020000&(data))>>17)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_rx_irq_en_shift                                    (16)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_rx_irq_en_mask                                     (0x00010000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_rx_irq_en(data)                                    (0x00010000&((data)<<16))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_rx_irq_en_src(data)                                ((0x00010000&(data))>>16)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_rx_irq_en(data)                                ((0x00010000&(data))>>16)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_irq_en_shift                                    (15)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_irq_en_mask                                     (0x00008000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_irq_en(data)                                    (0x00008000&((data)<<15))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_tx_irq_en_src(data)                                ((0x00008000&(data))>>15)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_tx_irq_en(data)                                ((0x00008000&(data))>>15)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_loss_sync_irq_en_shift                             (14)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_loss_sync_irq_en_mask                              (0x00004000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_loss_sync_irq_en(data)                             (0x00004000&((data)<<14))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_loss_sync_irq_en_src(data)                         ((0x00004000&(data))>>14)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_loss_sync_irq_en(data)                         ((0x00004000&(data))>>14)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_sync_irq_en_shift                                  (13)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_sync_irq_en_mask                                   (0x00002000)
#define CBUS_TX_ECBUS_IRQ_EN_emsc_sync_irq_en(data)                                  (0x00002000&((data)<<13))
#define CBUS_TX_ECBUS_IRQ_EN_emsc_sync_irq_en_src(data)                              ((0x00002000&(data))>>13)
#define CBUS_TX_ECBUS_IRQ_EN_get_emsc_sync_irq_en(data)                              ((0x00002000&(data))>>13)
#define CBUS_TX_ECBUS_IRQ_EN_ecbus_reset_irq_en_shift                                (12)
#define CBUS_TX_ECBUS_IRQ_EN_ecbus_reset_irq_en_mask                                 (0x00001000)
#define CBUS_TX_ECBUS_IRQ_EN_ecbus_reset_irq_en(data)                                (0x00001000&((data)<<12))
#define CBUS_TX_ECBUS_IRQ_EN_ecbus_reset_irq_en_src(data)                            ((0x00001000&(data))>>12)
#define CBUS_TX_ECBUS_IRQ_EN_get_ecbus_reset_irq_en(data)                            ((0x00001000&(data))>>12)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_tx_nack_irq_en_shift                              (11)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_tx_nack_irq_en_mask                               (0x00000800)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_tx_nack_irq_en(data)                              (0x00000800&((data)<<11))
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_tx_nack_irq_en_src(data)                          ((0x00000800&(data))>>11)
#define CBUS_TX_ECBUS_IRQ_EN_get_cbus1_tx_nack_irq_en(data)                          ((0x00000800&(data))>>11)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_tx_pkt_irq_en_shift                               (10)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_tx_pkt_irq_en_mask                                (0x00000400)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_tx_pkt_irq_en(data)                               (0x00000400&((data)<<10))
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_tx_pkt_irq_en_src(data)                           ((0x00000400&(data))>>10)
#define CBUS_TX_ECBUS_IRQ_EN_get_cbus1_tx_pkt_irq_en(data)                           ((0x00000400&(data))>>10)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_rx_crc_fail_irq_en_shift                          (9)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_rx_crc_fail_irq_en_mask                           (0x00000200)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_rx_crc_fail_irq_en(data)                          (0x00000200&((data)<<9))
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_rx_crc_fail_irq_en_src(data)                      ((0x00000200&(data))>>9)
#define CBUS_TX_ECBUS_IRQ_EN_get_cbus1_rx_crc_fail_irq_en(data)                      ((0x00000200&(data))>>9)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_rx_pkt_irq_en_shift                               (8)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_rx_pkt_irq_en_mask                                (0x00000100)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_rx_pkt_irq_en(data)                               (0x00000100&((data)<<8))
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_rx_pkt_irq_en_src(data)                           ((0x00000100&(data))>>8)
#define CBUS_TX_ECBUS_IRQ_EN_get_cbus1_rx_pkt_irq_en(data)                           ((0x00000100&(data))>>8)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_sync_fail_irq_en_shift                            (7)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_sync_fail_irq_en_mask                             (0x00000080)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_sync_fail_irq_en(data)                            (0x00000080&((data)<<7))
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_sync_fail_irq_en_src(data)                        ((0x00000080&(data))>>7)
#define CBUS_TX_ECBUS_IRQ_EN_get_cbus1_sync_fail_irq_en(data)                        ((0x00000080&(data))>>7)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_lost_sync_irq_en_shift                            (6)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_lost_sync_irq_en_mask                             (0x00000040)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_lost_sync_irq_en(data)                            (0x00000040&((data)<<6))
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_lost_sync_irq_en_src(data)                        ((0x00000040&(data))>>6)
#define CBUS_TX_ECBUS_IRQ_EN_get_cbus1_lost_sync_irq_en(data)                        ((0x00000040&(data))>>6)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_on_irq_en_shift                                   (5)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_on_irq_en_mask                                    (0x00000020)
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_on_irq_en(data)                                   (0x00000020&((data)<<5))
#define CBUS_TX_ECBUS_IRQ_EN_cbus1_on_irq_en_src(data)                               ((0x00000020&(data))>>5)
#define CBUS_TX_ECBUS_IRQ_EN_get_cbus1_on_irq_en(data)                               ((0x00000020&(data))>>5)
#define CBUS_TX_ECBUS_IRQ_EN_start_up_fail_irq_en_shift                              (4)
#define CBUS_TX_ECBUS_IRQ_EN_start_up_fail_irq_en_mask                               (0x00000010)
#define CBUS_TX_ECBUS_IRQ_EN_start_up_fail_irq_en(data)                              (0x00000010&((data)<<4))
#define CBUS_TX_ECBUS_IRQ_EN_start_up_fail_irq_en_src(data)                          ((0x00000010&(data))>>4)
#define CBUS_TX_ECBUS_IRQ_EN_get_start_up_fail_irq_en(data)                          ((0x00000010&(data))>>4)
#define CBUS_TX_ECBUS_IRQ_EN_start_up_irq_en_shift                                   (3)
#define CBUS_TX_ECBUS_IRQ_EN_start_up_irq_en_mask                                    (0x00000008)
#define CBUS_TX_ECBUS_IRQ_EN_start_up_irq_en(data)                                   (0x00000008&((data)<<3))
#define CBUS_TX_ECBUS_IRQ_EN_start_up_irq_en_src(data)                               ((0x00000008&(data))>>3)
#define CBUS_TX_ECBUS_IRQ_EN_get_start_up_irq_en(data)                               ((0x00000008&(data))>>3)
#define CBUS_TX_ECBUS_IRQ_EN_ecbus_disconn_irq_en_shift                              (1)
#define CBUS_TX_ECBUS_IRQ_EN_ecbus_disconn_irq_en_mask                               (0x00000002)
#define CBUS_TX_ECBUS_IRQ_EN_ecbus_disconn_irq_en(data)                              (0x00000002&((data)<<1))
#define CBUS_TX_ECBUS_IRQ_EN_ecbus_disconn_irq_en_src(data)                          ((0x00000002&(data))>>1)
#define CBUS_TX_ECBUS_IRQ_EN_get_ecbus_disconn_irq_en(data)                          ((0x00000002&(data))>>1)


#define CBUS_TX_ECBUS_BITCTRL0                                                       0x98037D70
#define CBUS_TX_ECBUS_BITCTRL0_reg_addr                                              "0xD8037D70"
#define CBUS_TX_ECBUS_BITCTRL0_reg                                                   0xD8037D70
#define set_CBUS_TX_ECBUS_BITCTRL0_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_BITCTRL0_reg)=data)
#define get_CBUS_TX_ECBUS_BITCTRL0_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_BITCTRL0_reg))
#define CBUS_TX_ECBUS_BITCTRL0_inst_adr                                              "0x005C"
#define CBUS_TX_ECBUS_BITCTRL0_inst                                                  0x005C
#define CBUS_TX_ECBUS_BITCTRL0_ecbus_clk_1m_div_shift                                (20)
#define CBUS_TX_ECBUS_BITCTRL0_ecbus_clk_1m_div_mask                                 (0x0FF00000)
#define CBUS_TX_ECBUS_BITCTRL0_ecbus_clk_1m_div(data)                                (0x0FF00000&((data)<<20))
#define CBUS_TX_ECBUS_BITCTRL0_ecbus_clk_1m_div_src(data)                            ((0x0FF00000&(data))>>20)
#define CBUS_TX_ECBUS_BITCTRL0_get_ecbus_clk_1m_div(data)                            ((0x0FF00000&(data))>>20)
#define CBUS_TX_ECBUS_BITCTRL0_ecbus_sync0_hb_shift                                  (9)
#define CBUS_TX_ECBUS_BITCTRL0_ecbus_sync0_hb_mask                                   (0x0003FE00)
#define CBUS_TX_ECBUS_BITCTRL0_ecbus_sync0_hb(data)                                  (0x0003FE00&((data)<<9))
#define CBUS_TX_ECBUS_BITCTRL0_ecbus_sync0_hb_src(data)                              ((0x0003FE00&(data))>>9)
#define CBUS_TX_ECBUS_BITCTRL0_get_ecbus_sync0_hb(data)                              ((0x0003FE00&(data))>>9)
#define CBUS_TX_ECBUS_BITCTRL0_ecbus_sync0_lb_shift                                  (0)
#define CBUS_TX_ECBUS_BITCTRL0_ecbus_sync0_lb_mask                                   (0x000001FF)
#define CBUS_TX_ECBUS_BITCTRL0_ecbus_sync0_lb(data)                                  (0x000001FF&((data)<<0))
#define CBUS_TX_ECBUS_BITCTRL0_ecbus_sync0_lb_src(data)                              ((0x000001FF&(data))>>0)
#define CBUS_TX_ECBUS_BITCTRL0_get_ecbus_sync0_lb(data)                              ((0x000001FF&(data))>>0)


#define CBUS_TX_ECBUS_BITCTRL1                                                       0x98037D74
#define CBUS_TX_ECBUS_BITCTRL1_reg_addr                                              "0xD8037D74"
#define CBUS_TX_ECBUS_BITCTRL1_reg                                                   0xD8037D74
#define set_CBUS_TX_ECBUS_BITCTRL1_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_BITCTRL1_reg)=data)
#define get_CBUS_TX_ECBUS_BITCTRL1_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_BITCTRL1_reg))
#define CBUS_TX_ECBUS_BITCTRL1_inst_adr                                              "0x005D"
#define CBUS_TX_ECBUS_BITCTRL1_inst                                                  0x005D
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_parity_time_shift                               (24)
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_parity_time_mask                                (0xFF000000)
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_parity_time(data)                               (0xFF000000&((data)<<24))
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_parity_time_src(data)                           ((0xFF000000&(data))>>24)
#define CBUS_TX_ECBUS_BITCTRL1_get_ecbus_parity_time(data)                           ((0xFF000000&(data))>>24)
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_abs_threshold_shift                             (16)
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_abs_threshold_mask                              (0x00FF0000)
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_abs_threshold(data)                             (0x00FF0000&((data)<<16))
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_abs_threshold_src(data)                         ((0x00FF0000&(data))>>16)
#define CBUS_TX_ECBUS_BITCTRL1_get_ecbus_abs_threshold(data)                         ((0x00FF0000&(data))>>16)
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_sync1_hb_shift                                  (8)
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_sync1_hb_mask                                   (0x0000FF00)
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_sync1_hb(data)                                  (0x0000FF00&((data)<<8))
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_sync1_hb_src(data)                              ((0x0000FF00&(data))>>8)
#define CBUS_TX_ECBUS_BITCTRL1_get_ecbus_sync1_hb(data)                              ((0x0000FF00&(data))>>8)
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_sync1_lb_shift                                  (0)
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_sync1_lb_mask                                   (0x000000FF)
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_sync1_lb(data)                                  (0x000000FF&((data)<<0))
#define CBUS_TX_ECBUS_BITCTRL1_ecbus_sync1_lb_src(data)                              ((0x000000FF&(data))>>0)
#define CBUS_TX_ECBUS_BITCTRL1_get_ecbus_sync1_lb(data)                              ((0x000000FF&(data))>>0)


#define CBUS_TX_ECBUS_BITCTRL2                                                       0x98037D78
#define CBUS_TX_ECBUS_BITCTRL2_reg_addr                                              "0xD8037D78"
#define CBUS_TX_ECBUS_BITCTRL2_reg                                                   0xD8037D78
#define set_CBUS_TX_ECBUS_BITCTRL2_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_BITCTRL2_reg)=data)
#define get_CBUS_TX_ECBUS_BITCTRL2_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_BITCTRL2_reg))
#define CBUS_TX_ECBUS_BITCTRL2_inst_adr                                              "0x005E"
#define CBUS_TX_ECBUS_BITCTRL2_inst                                                  0x005E
#define CBUS_TX_ECBUS_BITCTRL2_ecbus_ack_0_shift                                     (16)
#define CBUS_TX_ECBUS_BITCTRL2_ecbus_ack_0_mask                                      (0x007F0000)
#define CBUS_TX_ECBUS_BITCTRL2_ecbus_ack_0(data)                                     (0x007F0000&((data)<<16))
#define CBUS_TX_ECBUS_BITCTRL2_ecbus_ack_0_src(data)                                 ((0x007F0000&(data))>>16)
#define CBUS_TX_ECBUS_BITCTRL2_get_ecbus_ack_0(data)                                 ((0x007F0000&(data))>>16)
#define CBUS_TX_ECBUS_BITCTRL2_ecbus_ack_fall_shift                                  (8)
#define CBUS_TX_ECBUS_BITCTRL2_ecbus_ack_fall_mask                                   (0x00007F00)
#define CBUS_TX_ECBUS_BITCTRL2_ecbus_ack_fall(data)                                  (0x00007F00&((data)<<8))
#define CBUS_TX_ECBUS_BITCTRL2_ecbus_ack_fall_src(data)                              ((0x00007F00&(data))>>8)
#define CBUS_TX_ECBUS_BITCTRL2_get_ecbus_ack_fall(data)                              ((0x00007F00&(data))>>8)


#define CBUS_TX_ECBUS_BITCTRL3                                                       0x98037D7C
#define CBUS_TX_ECBUS_BITCTRL3_reg_addr                                              "0xD8037D7C"
#define CBUS_TX_ECBUS_BITCTRL3_reg                                                   0xD8037D7C
#define set_CBUS_TX_ECBUS_BITCTRL3_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_BITCTRL3_reg)=data)
#define get_CBUS_TX_ECBUS_BITCTRL3_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_BITCTRL3_reg))
#define CBUS_TX_ECBUS_BITCTRL3_inst_adr                                              "0x005F"
#define CBUS_TX_ECBUS_BITCTRL3_inst                                                  0x005F
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_bit_time_shift                               (24)
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_bit_time_mask                                (0xFF000000)
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_bit_time(data)                               (0xFF000000&((data)<<24))
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_bit_time_src(data)                           ((0xFF000000&(data))>>24)
#define CBUS_TX_ECBUS_BITCTRL3_get_ecbus_tx_bit_time(data)                           ((0xFF000000&(data))>>24)
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_ack_fal_shift                                (16)
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_ack_fal_mask                                 (0x007F0000)
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_ack_fal(data)                                (0x007F0000&((data)<<16))
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_ack_fal_src(data)                            ((0x007F0000&(data))>>16)
#define CBUS_TX_ECBUS_BITCTRL3_get_ecbus_tx_ack_fal(data)                            ((0x007F0000&(data))>>16)
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_ack_low_hb_shift                             (8)
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_ack_low_hb_mask                              (0x00007F00)
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_ack_low_hb(data)                             (0x00007F00&((data)<<8))
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_ack_low_hb_src(data)                         ((0x00007F00&(data))>>8)
#define CBUS_TX_ECBUS_BITCTRL3_get_ecbus_tx_ack_low_hb(data)                         ((0x00007F00&(data))>>8)
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_ack_low_lb_shift                             (0)
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_ack_low_lb_mask                              (0x0000007F)
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_ack_low_lb(data)                             (0x0000007F&((data)<<0))
#define CBUS_TX_ECBUS_BITCTRL3_ecbus_tx_ack_low_lb_src(data)                         ((0x0000007F&(data))>>0)
#define CBUS_TX_ECBUS_BITCTRL3_get_ecbus_tx_ack_low_lb(data)                         ((0x0000007F&(data))>>0)


#define CBUS_TX_ECBUS_BITCTRL4                                                       0x98037D80
#define CBUS_TX_ECBUS_BITCTRL4_reg_addr                                              "0xD8037D80"
#define CBUS_TX_ECBUS_BITCTRL4_reg                                                   0xD8037D80
#define set_CBUS_TX_ECBUS_BITCTRL4_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_BITCTRL4_reg)=data)
#define get_CBUS_TX_ECBUS_BITCTRL4_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_BITCTRL4_reg))
#define CBUS_TX_ECBUS_BITCTRL4_inst_adr                                              "0x0060"
#define CBUS_TX_ECBUS_BITCTRL4_inst                                                  0x0060
#define CBUS_TX_ECBUS_BITCTRL4_ecbus_req_opp_flt_shift                               (16)
#define CBUS_TX_ECBUS_BITCTRL4_ecbus_req_opp_flt_mask                                (0x00FF0000)
#define CBUS_TX_ECBUS_BITCTRL4_ecbus_req_opp_flt(data)                               (0x00FF0000&((data)<<16))
#define CBUS_TX_ECBUS_BITCTRL4_ecbus_req_opp_flt_src(data)                           ((0x00FF0000&(data))>>16)
#define CBUS_TX_ECBUS_BITCTRL4_get_ecbus_req_opp_flt(data)                           ((0x00FF0000&(data))>>16)
#define CBUS_TX_ECBUS_BITCTRL4_ecbus_chk_point_shift                                 (8)
#define CBUS_TX_ECBUS_BITCTRL4_ecbus_chk_point_mask                                  (0x00003F00)
#define CBUS_TX_ECBUS_BITCTRL4_ecbus_chk_point(data)                                 (0x00003F00&((data)<<8))
#define CBUS_TX_ECBUS_BITCTRL4_ecbus_chk_point_src(data)                             ((0x00003F00&(data))>>8)
#define CBUS_TX_ECBUS_BITCTRL4_get_ecbus_chk_point(data)                             ((0x00003F00&(data))>>8)
#define CBUS_TX_ECBUS_BITCTRL4_ecbus_drv_hi_cbus_shift                               (0)
#define CBUS_TX_ECBUS_BITCTRL4_ecbus_drv_hi_cbus_mask                                (0x0000003F)
#define CBUS_TX_ECBUS_BITCTRL4_ecbus_drv_hi_cbus(data)                               (0x0000003F&((data)<<0))
#define CBUS_TX_ECBUS_BITCTRL4_ecbus_drv_hi_cbus_src(data)                           ((0x0000003F&(data))>>0)
#define CBUS_TX_ECBUS_BITCTRL4_get_ecbus_drv_hi_cbus(data)                           ((0x0000003F&(data))>>0)


#define CBUS_TX_ECBUS_DBG0                                                           0x98037D90
#define CBUS_TX_ECBUS_DBG0_reg_addr                                                  "0xD8037D90"
#define CBUS_TX_ECBUS_DBG0_reg                                                       0xD8037D90
#define set_CBUS_TX_ECBUS_DBG0_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_DBG0_reg)=data)
#define get_CBUS_TX_ECBUS_DBG0_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_DBG0_reg))
#define CBUS_TX_ECBUS_DBG0_inst_adr                                                  "0x0064"
#define CBUS_TX_ECBUS_DBG0_inst                                                      0x0064
#define CBUS_TX_ECBUS_DBG0_ecbus_debug0_shift                                        (0)
#define CBUS_TX_ECBUS_DBG0_ecbus_debug0_mask                                         (0xFFFFFFFF)
#define CBUS_TX_ECBUS_DBG0_ecbus_debug0(data)                                        (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_ECBUS_DBG0_ecbus_debug0_src(data)                                    ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_ECBUS_DBG0_get_ecbus_debug0(data)                                    ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_ECBUS_DBG1                                                           0x98037D94
#define CBUS_TX_ECBUS_DBG1_reg_addr                                                  "0xD8037D94"
#define CBUS_TX_ECBUS_DBG1_reg                                                       0xD8037D94
#define set_CBUS_TX_ECBUS_DBG1_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_DBG1_reg)=data)
#define get_CBUS_TX_ECBUS_DBG1_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_DBG1_reg))
#define CBUS_TX_ECBUS_DBG1_inst_adr                                                  "0x0065"
#define CBUS_TX_ECBUS_DBG1_inst                                                      0x0065
#define CBUS_TX_ECBUS_DBG1_ecbus_debug1_shift                                        (0)
#define CBUS_TX_ECBUS_DBG1_ecbus_debug1_mask                                         (0xFFFFFFFF)
#define CBUS_TX_ECBUS_DBG1_ecbus_debug1(data)                                        (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_ECBUS_DBG1_ecbus_debug1_src(data)                                    ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_ECBUS_DBG1_get_ecbus_debug1(data)                                    ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_ECBUS_DBG2                                                           0x98037D98
#define CBUS_TX_ECBUS_DBG2_reg_addr                                                  "0xD8037D98"
#define CBUS_TX_ECBUS_DBG2_reg                                                       0xD8037D98
#define set_CBUS_TX_ECBUS_DBG2_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_DBG2_reg)=data)
#define get_CBUS_TX_ECBUS_DBG2_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_DBG2_reg))
#define CBUS_TX_ECBUS_DBG2_inst_adr                                                  "0x0066"
#define CBUS_TX_ECBUS_DBG2_inst                                                      0x0066
#define CBUS_TX_ECBUS_DBG2_ecbus_debug2_shift                                        (0)
#define CBUS_TX_ECBUS_DBG2_ecbus_debug2_mask                                         (0xFFFFFFFF)
#define CBUS_TX_ECBUS_DBG2_ecbus_debug2(data)                                        (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_ECBUS_DBG2_ecbus_debug2_src(data)                                    ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_ECBUS_DBG2_get_ecbus_debug2(data)                                    ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_ECBUS_DBG3                                                           0x98037D9C
#define CBUS_TX_ECBUS_DBG3_reg_addr                                                  "0xD8037D9C"
#define CBUS_TX_ECBUS_DBG3_reg                                                       0xD8037D9C
#define set_CBUS_TX_ECBUS_DBG3_reg(data)   (*((volatile unsigned int*) CBUS_TX_ECBUS_DBG3_reg)=data)
#define get_CBUS_TX_ECBUS_DBG3_reg   (*((volatile unsigned int*) CBUS_TX_ECBUS_DBG3_reg))
#define CBUS_TX_ECBUS_DBG3_inst_adr                                                  "0x0067"
#define CBUS_TX_ECBUS_DBG3_inst                                                      0x0067
#define CBUS_TX_ECBUS_DBG3_ecbus_debug3_shift                                        (0)
#define CBUS_TX_ECBUS_DBG3_ecbus_debug3_mask                                         (0xFFFFFFFF)
#define CBUS_TX_ECBUS_DBG3_ecbus_debug3(data)                                        (0xFFFFFFFF&((data)<<0))
#define CBUS_TX_ECBUS_DBG3_ecbus_debug3_src(data)                                    ((0xFFFFFFFF&(data))>>0)
#define CBUS_TX_ECBUS_DBG3_get_ecbus_debug3(data)                                    ((0xFFFFFFFF&(data))>>0)


#define CBUS_TX_RM_CTRL                                                              0x98037DE0
#define CBUS_TX_RM_CTRL_reg_addr                                                     "0xD8037DE0"
#define CBUS_TX_RM_CTRL_reg                                                          0xD8037DE0
#define set_CBUS_TX_RM_CTRL_reg(data)   (*((volatile unsigned int*) CBUS_TX_RM_CTRL_reg)=data)
#define get_CBUS_TX_RM_CTRL_reg   (*((volatile unsigned int*) CBUS_TX_RM_CTRL_reg))
#define CBUS_TX_RM_CTRL_inst_adr                                                     "0x0078"
#define CBUS_TX_RM_CTRL_inst                                                         0x0078
#define CBUS_TX_RM_CTRL_ecbus_drf_test_resume_shift                                  (13)
#define CBUS_TX_RM_CTRL_ecbus_drf_test_resume_mask                                   (0x00002000)
#define CBUS_TX_RM_CTRL_ecbus_drf_test_resume(data)                                  (0x00002000&((data)<<13))
#define CBUS_TX_RM_CTRL_ecbus_drf_test_resume_src(data)                              ((0x00002000&(data))>>13)
#define CBUS_TX_RM_CTRL_get_ecbus_drf_test_resume(data)                              ((0x00002000&(data))>>13)
#define CBUS_TX_RM_CTRL_ecbus_drf_bist_en_shift                                      (11)
#define CBUS_TX_RM_CTRL_ecbus_drf_bist_en_mask                                       (0x00000800)
#define CBUS_TX_RM_CTRL_ecbus_drf_bist_en(data)                                      (0x00000800&((data)<<11))
#define CBUS_TX_RM_CTRL_ecbus_drf_bist_en_src(data)                                  ((0x00000800&(data))>>11)
#define CBUS_TX_RM_CTRL_get_ecbus_drf_bist_en(data)                                  ((0x00000800&(data))>>11)
#define CBUS_TX_RM_CTRL_ecbus_bist_en_shift                                          (9)
#define CBUS_TX_RM_CTRL_ecbus_bist_en_mask                                           (0x00000200)
#define CBUS_TX_RM_CTRL_ecbus_bist_en(data)                                          (0x00000200&((data)<<9))
#define CBUS_TX_RM_CTRL_ecbus_bist_en_src(data)                                      ((0x00000200&(data))>>9)
#define CBUS_TX_RM_CTRL_get_ecbus_bist_en(data)                                      ((0x00000200&(data))>>9)
#define CBUS_TX_RM_CTRL_ecbus_rme_shift                                              (8)
#define CBUS_TX_RM_CTRL_ecbus_rme_mask                                               (0x00000100)
#define CBUS_TX_RM_CTRL_ecbus_rme(data)                                              (0x00000100&((data)<<8))
#define CBUS_TX_RM_CTRL_ecbus_rme_src(data)                                          ((0x00000100&(data))>>8)
#define CBUS_TX_RM_CTRL_get_ecbus_rme(data)                                          ((0x00000100&(data))>>8)
#define CBUS_TX_RM_CTRL_ecbus_rm_shift                                               (0)
#define CBUS_TX_RM_CTRL_ecbus_rm_mask                                                (0x0000000F)
#define CBUS_TX_RM_CTRL_ecbus_rm(data)                                               (0x0000000F&((data)<<0))
#define CBUS_TX_RM_CTRL_ecbus_rm_src(data)                                           ((0x0000000F&(data))>>0)
#define CBUS_TX_RM_CTRL_get_ecbus_rm(data)                                           ((0x0000000F&(data))>>0)


#define CBUS_TX_DRF_STATUS                                                           0x98037DE4
#define CBUS_TX_DRF_STATUS_reg_addr                                                  "0xD8037DE4"
#define CBUS_TX_DRF_STATUS_reg                                                       0xD8037DE4
#define set_CBUS_TX_DRF_STATUS_reg(data)   (*((volatile unsigned int*) CBUS_TX_DRF_STATUS_reg)=data)
#define get_CBUS_TX_DRF_STATUS_reg   (*((volatile unsigned int*) CBUS_TX_DRF_STATUS_reg))
#define CBUS_TX_DRF_STATUS_inst_adr                                                  "0x0079"
#define CBUS_TX_DRF_STATUS_inst                                                      0x0079
#define CBUS_TX_DRF_STATUS_ecbus_drf_start_pause_shift                               (0)
#define CBUS_TX_DRF_STATUS_ecbus_drf_start_pause_mask                                (0x00000001)
#define CBUS_TX_DRF_STATUS_ecbus_drf_start_pause(data)                               (0x00000001&((data)<<0))
#define CBUS_TX_DRF_STATUS_ecbus_drf_start_pause_src(data)                           ((0x00000001&(data))>>0)
#define CBUS_TX_DRF_STATUS_get_ecbus_drf_start_pause(data)                           ((0x00000001&(data))>>0)


#define CBUS_TX_SRAM_BIST_STATUS                                                     0x98037DE8
#define CBUS_TX_SRAM_BIST_STATUS_reg_addr                                            "0xD8037DE8"
#define CBUS_TX_SRAM_BIST_STATUS_reg                                                 0xD8037DE8
#define set_CBUS_TX_SRAM_BIST_STATUS_reg(data)   (*((volatile unsigned int*) CBUS_TX_SRAM_BIST_STATUS_reg)=data)
#define get_CBUS_TX_SRAM_BIST_STATUS_reg   (*((volatile unsigned int*) CBUS_TX_SRAM_BIST_STATUS_reg))
#define CBUS_TX_SRAM_BIST_STATUS_inst_adr                                            "0x007A"
#define CBUS_TX_SRAM_BIST_STATUS_inst                                                0x007A
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_drf_bist_fail_shift                           (17)
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_drf_bist_fail_mask                            (0x00060000)
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_drf_bist_fail(data)                           (0x00060000&((data)<<17))
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_drf_bist_fail_src(data)                       ((0x00060000&(data))>>17)
#define CBUS_TX_SRAM_BIST_STATUS_get_ecbus_drf_bist_fail(data)                       ((0x00060000&(data))>>17)
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_drf_bist_done_shift                           (16)
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_drf_bist_done_mask                            (0x00010000)
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_drf_bist_done(data)                           (0x00010000&((data)<<16))
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_drf_bist_done_src(data)                       ((0x00010000&(data))>>16)
#define CBUS_TX_SRAM_BIST_STATUS_get_ecbus_drf_bist_done(data)                       ((0x00010000&(data))>>16)
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_bist_fail_shift                               (1)
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_bist_fail_mask                                (0x00000006)
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_bist_fail(data)                               (0x00000006&((data)<<1))
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_bist_fail_src(data)                           ((0x00000006&(data))>>1)
#define CBUS_TX_SRAM_BIST_STATUS_get_ecbus_bist_fail(data)                           ((0x00000006&(data))>>1)
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_bist_done_shift                               (0)
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_bist_done_mask                                (0x00000001)
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_bist_done(data)                               (0x00000001&((data)<<0))
#define CBUS_TX_SRAM_BIST_STATUS_ecbus_bist_done_src(data)                           ((0x00000001&(data))>>0)
#define CBUS_TX_SRAM_BIST_STATUS_get_ecbus_bist_done(data)                           ((0x00000001&(data))>>0)


#define CBUS_TX_LS_CTRL                                                              0x98037DEC
#define CBUS_TX_LS_CTRL_reg_addr                                                     "0xD8037DEC"
#define CBUS_TX_LS_CTRL_reg                                                          0xD8037DEC
#define set_CBUS_TX_LS_CTRL_reg(data)   (*((volatile unsigned int*) CBUS_TX_LS_CTRL_reg)=data)
#define get_CBUS_TX_LS_CTRL_reg   (*((volatile unsigned int*) CBUS_TX_LS_CTRL_reg))
#define CBUS_TX_LS_CTRL_inst_adr                                                     "0x007B"
#define CBUS_TX_LS_CTRL_inst                                                         0x007B
#define CBUS_TX_LS_CTRL_gating_bypass0_shift                                         (31)
#define CBUS_TX_LS_CTRL_gating_bypass0_mask                                          (0x80000000)
#define CBUS_TX_LS_CTRL_gating_bypass0(data)                                         (0x80000000&((data)<<31))
#define CBUS_TX_LS_CTRL_gating_bypass0_src(data)                                     ((0x80000000&(data))>>31)
#define CBUS_TX_LS_CTRL_get_gating_bypass0(data)                                     ((0x80000000&(data))>>31)
#define CBUS_TX_LS_CTRL_gating_bypass1_shift                                         (30)
#define CBUS_TX_LS_CTRL_gating_bypass1_mask                                          (0x40000000)
#define CBUS_TX_LS_CTRL_gating_bypass1(data)                                         (0x40000000&((data)<<30))
#define CBUS_TX_LS_CTRL_gating_bypass1_src(data)                                     ((0x40000000&(data))>>30)
#define CBUS_TX_LS_CTRL_get_gating_bypass1(data)                                     ((0x40000000&(data))>>30)
#define CBUS_TX_LS_CTRL_gating_bypass2_shift                                         (29)
#define CBUS_TX_LS_CTRL_gating_bypass2_mask                                          (0x20000000)
#define CBUS_TX_LS_CTRL_gating_bypass2(data)                                         (0x20000000&((data)<<29))
#define CBUS_TX_LS_CTRL_gating_bypass2_src(data)                                     ((0x20000000&(data))>>29)
#define CBUS_TX_LS_CTRL_get_gating_bypass2(data)                                     ((0x20000000&(data))>>29)
#define CBUS_TX_LS_CTRL_SRAM_LS_shift                                                (0)
#define CBUS_TX_LS_CTRL_SRAM_LS_mask                                                 (0x00000001)
#define CBUS_TX_LS_CTRL_SRAM_LS(data)                                                (0x00000001&((data)<<0))
#define CBUS_TX_LS_CTRL_SRAM_LS_src(data)                                            ((0x00000001&(data))>>0)
#define CBUS_TX_LS_CTRL_get_SRAM_LS(data)                                            ((0x00000001&(data))>>0)


#endif
