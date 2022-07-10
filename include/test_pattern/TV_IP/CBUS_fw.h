/*===========*@date:2015/4/14===========*/

#ifndef _CBUS_REG_H_INCLUDED_
#define _CBUS_REG_H_INCLUDED_

//#define  _CBUS_USE_STRUCT
#ifdef _CBUS_USE_STRUCT

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    dev_state:8;
}MSC_reg_00;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    mhl_ver:8;
}MSC_reg_01;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    dev_cat:1;
    unsigned int    plim:2;
    unsigned int    pow:1;
    unsigned int    dev_type:4;
}MSC_reg_02;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    adop_id_h:8;
}MSC_reg_03;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    adop_id_l:8;
}MSC_reg_04;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    vid_link_md:2;
    unsigned int    supp_vga:1;
    unsigned int    supp_islands:1;
    unsigned int    supp_ppixel:1;
    unsigned int    supp_yuv422:1;
    unsigned int    supp_yuv444:1;
    unsigned int    supp_rgb444:1;
}MSC_reg_05;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    aud_link_md:5;
    unsigned int    aud_hbr:1;
    unsigned int    aud_8ch:1;
    unsigned int    aud_2ch:1;
}MSC_reg_06;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    supp_vt:1;
    unsigned int    video_type:3;
    unsigned int    vt_game:1;
    unsigned int    vt_cinema:1;
    unsigned int    vt_photo:1;
    unsigned int    vt_graphics:1;
}MSC_reg_07;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ld_gui:1;
    unsigned int    ld_speaker:1;
    unsigned int    ld_record:1;
    unsigned int    ld_tuner:1;
    unsigned int    ld_media:1;
    unsigned int    ld_audio:1;
    unsigned int    ld_video:1;
    unsigned int    ld_display:1;
}MSC_reg_08;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    bandwid:8;
}MSC_reg_09;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    feature_flag:1;
    unsigned int    rbp_support:1;
    unsigned int    xvycc_support:1;
    unsigned int    ucp_recv_supp:1;
    unsigned int    ucp_send_supp:1;
    unsigned int    sp_supp:1;
    unsigned int    rap_supp:1;
    unsigned int    rcp_supp:1;
}MSC_reg_0a;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    device_id_h:8;
}MSC_reg_0b;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    device_id_l:8;
}MSC_reg_0c;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scr_size:8;
}MSC_reg_0d;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    stat_size:4;
    unsigned int    int_size:4;
}MSC_reg_0e;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    cap_0f:8;
}MSC_reg_0f;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rchg_int_7:1;
    unsigned int    feat_complete:1;
    unsigned int    feat_req:1;
    unsigned int    cbus_3d_req:1;
    unsigned int    grt_wrt:1;
    unsigned int    req_wrt:1;
    unsigned int    dscr_chg:1;
    unsigned int    dcap_chg:1;
}MSC_reg_20;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    dchg_int_7:1;
    unsigned int    dchg_int_6:1;
    unsigned int    dchg_int_5:1;
    unsigned int    dchg_int_4:1;
    unsigned int    dchg_int_3:1;
    unsigned int    dchg_int_2:1;
    unsigned int    edid_chg:1;
    unsigned int    dchg_int_0:1;
}MSC_reg_21;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    chg22_7:1;
    unsigned int    chg22_6:1;
    unsigned int    chg22_5:1;
    unsigned int    chg22_4:1;
    unsigned int    chg22_3:1;
    unsigned int    chg22_2:1;
    unsigned int    chg22_1:1;
    unsigned int    chg22_0:1;
}MSC_reg_22;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    chg23_7:1;
    unsigned int    chg23_6:1;
    unsigned int    chg23_5:1;
    unsigned int    chg23_4:1;
    unsigned int    chg23_3:1;
    unsigned int    chg23_2:1;
    unsigned int    chg23_1:1;
    unsigned int    chg23_0:1;
}MSC_reg_23;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    chg24_7:1;
    unsigned int    chg24_6:1;
    unsigned int    chg24_5:1;
    unsigned int    chg24_4:1;
    unsigned int    chg24_3:1;
    unsigned int    chg24_2:1;
    unsigned int    chg24_1:1;
    unsigned int    chg24_0:1;
}MSC_reg_24;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    chg25_7:1;
    unsigned int    chg25_6:1;
    unsigned int    chg25_5:1;
    unsigned int    chg25_4:1;
    unsigned int    chg25_3:1;
    unsigned int    chg25_2:1;
    unsigned int    chg25_1:1;
    unsigned int    chg25_0:1;
}MSC_reg_25;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    chg26_7:1;
    unsigned int    chg26_6:1;
    unsigned int    chg26_5:1;
    unsigned int    chg26_4:1;
    unsigned int    chg26_3:1;
    unsigned int    chg26_2:1;
    unsigned int    chg26_1:1;
    unsigned int    chg26_0:1;
}MSC_reg_26;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    chg27_7:1;
    unsigned int    chg27_6:1;
    unsigned int    chg27_5:1;
    unsigned int    chg27_4:1;
    unsigned int    chg27_3:1;
    unsigned int    chg27_2:1;
    unsigned int    chg27_1:1;
    unsigned int    chg27_0:1;
}MSC_reg_27;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    conn_rdy:2;
    unsigned int    plim_stat:3;
    unsigned int    pow_stat:1;
    unsigned int    xdevcap_supp:1;
    unsigned int    dcap_rdy:1;
}MSC_reg_30;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    link_mode:3;
    unsigned int    muted:1;
    unsigned int    path_en:1;
    unsigned int    clk_mode:3;
}MSC_reg_31;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    mhl_version_stat:8;
}MSC_reg_32;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    stat_33:8;
}MSC_reg_33;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    stat_34:8;
}MSC_reg_34;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    stat_35:8;
}MSC_reg_35;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    stat_36:8;
}MSC_reg_36;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    stat_37:8;
}MSC_reg_37;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_40:8;
}MSC_reg_40;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_41:8;
}MSC_reg_41;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_42:8;
}MSC_reg_42;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_43:8;
}MSC_reg_43;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_44:8;
}MSC_reg_44;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_45:8;
}MSC_reg_45;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_46:8;
}MSC_reg_46;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_47:8;
}MSC_reg_47;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_48:8;
}MSC_reg_48;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_49:8;
}MSC_reg_49;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_4a:8;
}MSC_reg_4a;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_4b:8;
}MSC_reg_4b;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_4c:8;
}MSC_reg_4c;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_4d:8;
}MSC_reg_4d;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_4e:8;
}MSC_reg_4e;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_4f:8;
}MSC_reg_4f;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_50:8;
}MSC_reg_50;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_51:8;
}MSC_reg_51;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_52:8;
}MSC_reg_52;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_53:8;
}MSC_reg_53;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_54:8;
}MSC_reg_54;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_55:8;
}MSC_reg_55;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_56:8;
}MSC_reg_56;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_57:8;
}MSC_reg_57;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_58:8;
}MSC_reg_58;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_59:8;
}MSC_reg_59;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_5a:8;
}MSC_reg_5a;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_5b:8;
}MSC_reg_5b;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_5c:8;
}MSC_reg_5c;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_5d:8;
}MSC_reg_5d;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_5e:8;
}MSC_reg_5e;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scratch_5f:8;
}MSC_reg_5f;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ecbus_spd_76:2;
    unsigned int    ecbus_d_8b:1;
    unsigned int    ecbus_d_150:1;
    unsigned int    ecbus_spd_3:1;
    unsigned int    ecbus_s_12b:1;
    unsigned int    ecbus_s_8b:1;
    unsigned int    ecbus_s_075:1;
}MSC_reg_80;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    tmds_spd:5;
    unsigned int    tmds_600:1;
    unsigned int    tmds_300:1;
    unsigned int    tmds_150:1;
}MSC_reg_81;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ecbus_dev_roles:3;
    unsigned int    hid_dev:1;
    unsigned int    hid_host:1;
    unsigned int    dev_charger:1;
    unsigned int    dev_device:1;
    unsigned int    dev_host:1;
}MSC_reg_82;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    log_dev_mapx:7;
    unsigned int    ld_phone:1;
}MSC_reg_83;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xcap_84:8;
}MSC_reg_84;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xcap_85:8;
}MSC_reg_85;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xcap_86:8;
}MSC_reg_86;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xcap_87:8;
}MSC_reg_87;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xcap_88:8;
}MSC_reg_88;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xcap_89:8;
}MSC_reg_89;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xcap_8a:8;
}MSC_reg_8a;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xcap_8b:8;
}MSC_reg_8b;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xcap_8c:8;
}MSC_reg_8c;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xcap_8d:8;
}MSC_reg_8d;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xcap_8e:8;
}MSC_reg_8e;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xcap_8f:8;
}MSC_reg_8f;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    cur_ecbus_md:4;
    unsigned int    ecbus_md:2;
    unsigned int    slot_md:2;
}MSC_reg_90;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    av_link_md:6;
    unsigned int    link_st:2;
}MSC_reg_91;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    av_link_ctrl:5;
    unsigned int    link_rate:3;
}MSC_reg_92;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    sink_st_3:2;
    unsigned int    sink_st_2:2;
    unsigned int    sink_st_1:2;
    unsigned int    sink_st_0:2;
}MSC_reg_93;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_94:8;
}MSC_reg_94;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_95:8;
}MSC_reg_95;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_96:8;
}MSC_reg_96;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_97:8;
}MSC_reg_97;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_98:8;
}MSC_reg_98;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_99:8;
}MSC_reg_99;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_9a:8;
}MSC_reg_9a;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_9b:8;
}MSC_reg_9b;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_9c:8;
}MSC_reg_9c;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_9d:8;
}MSC_reg_9d;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_9e:8;
}MSC_reg_9e;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_9f:8;
}MSC_reg_9f;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_a0:8;
}MSC_reg_a0;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_a1:8;
}MSC_reg_a1;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_a2:8;
}MSC_reg_a2;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_a3:8;
}MSC_reg_a3;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_a4:8;
}MSC_reg_a4;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_a5:8;
}MSC_reg_a5;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_a6:8;
}MSC_reg_a6;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_a7:8;
}MSC_reg_a7;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_a8:8;
}MSC_reg_a8;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_a9:8;
}MSC_reg_a9;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_aa:8;
}MSC_reg_aa;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_ab:8;
}MSC_reg_ab;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_ac:8;
}MSC_reg_ac;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_ad:8;
}MSC_reg_ad;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_ae:8;
}MSC_reg_ae;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    xstat_af:8;
}MSC_reg_af;

typedef struct
{
    unsigned int    reserved_0:14;
    unsigned int    sync0_hb_8_0:9;
    unsigned int    sync0_lb_8_0:9;
}CBUS_link_00;

typedef struct
{
    unsigned int    reserved_0:16;
    unsigned int    sync1_hb_7_0:8;
    unsigned int    sync1_lb_7_0:8;
}CBUS_link_01;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    sync_bit_time:8;
}CBUS_link_02;

typedef struct
{
    unsigned int    reserved_0:23;
    unsigned int    abs_thres_en:1;
    unsigned int    abs_threshold:8;
}CBUS_link_03;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    parity_time:8;
}CBUS_link_04;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    parity_fail:1;
    unsigned int    parity_irq_en:1;
    unsigned int    ctrl_16_resv:1;
    unsigned int    parity_limit:5;
}CBUS_link_05;

typedef struct
{
    unsigned int    reserved_0:25;
    unsigned int    ack_fall:7;
}CBUS_link_06;

typedef struct
{
    unsigned int    reserved_0:25;
    unsigned int    ack_0:7;
}CBUS_link_07;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    tx_bit_time:8;
}CBUS_link_08;

typedef struct
{
    unsigned int    reserved_0:23;
    unsigned int    tx_ack_div2:1;
    unsigned int    chk_win_up:3;
    unsigned int    chk_win_lo:2;
    unsigned int    fast_reply_en:1;
    unsigned int    ctrl_1b_resv:2;
}CBUS_link_09;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    reserved_1:1;
    unsigned int    tx_ack_fal:7;
}CBUS_link_0a;

typedef struct
{
    unsigned int    reserved_0:25;
    unsigned int    tx_ack_low_hb:7;
}CBUS_link_0b;

typedef struct
{
    unsigned int    reserved_0:25;
    unsigned int    tx_ack_low_lb:7;
}CBUS_link_0c;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    retry_lv:3;
    unsigned int    retry_flag:1;
    unsigned int    ctrl_1f_resv:4;
}CBUS_link_0d;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    drv_str:2;
    unsigned int    drv_hi_cbus:6;
}CBUS_link_0e;

typedef struct
{
    unsigned int    reserved_0:26;
    unsigned int    wait:4;
    unsigned int    req_opp_int:2;
}CBUS_link_0f;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    req_opp_flt:8;
}CBUS_link_10;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    req_cont:8;
}CBUS_link_11;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    req_hold:4;
    unsigned int    resp_hold:4;
}CBUS_link_12;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    glob_time:2;
    unsigned int    link_time:5;
    unsigned int    link_err:1;
}CBUS_link_13;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    chk_point:6;
    unsigned int    chk_err:1;
    unsigned int    avoid_conf:1;
}CBUS_link_14;

typedef struct
{
    unsigned int    reserved_0:26;
    unsigned int    mcumsc_en:1;
    unsigned int    msc_wait_arb:1;
    unsigned int    ctrl_28_resv:4;
}CBUS_msc_00;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    na_msc_cmd:8;
}CBUS_msc_01;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    na_msc_offset:8;
}CBUS_msc_02;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rx_fifo_full:1;
    unsigned int    rx_fifo_empty:1;
    unsigned int    rx_fifo_clr:1;
    unsigned int    na_rx_len:5;
}CBUS_msc_03;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rx_fifo_data:8;
}CBUS_msc_04;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    fwdef_cmd_rev:8;
}CBUS_msc_05;

typedef struct
{
    unsigned int    reserved_0:3;
    unsigned int    ucp_irq:1;
    unsigned int    ucpk_irq:1;
    unsigned int    ucpe_irq:1;
    unsigned int    dcap_rdy_chg:1;
    unsigned int    muted_chg:1;
    unsigned int    path_en_chg:1;
    unsigned int    clk_mode_chg:1;
    unsigned int    msge_irq:1;
    unsigned int    rcp_irq:1;
    unsigned int    rcpk_irq:1;
    unsigned int    rcpe_irq:1;
    unsigned int    rap_irq:1;
    unsigned int    rapk_irq:1;
    unsigned int    msg_sub_irq:1;
    unsigned int    wr_stat_irq:1;
    unsigned int    rd_devcap_irq:1;
    unsigned int    get_stat_irq:1;
    unsigned int    get_id_irq:1;
    unsigned int    get_msg_irq:1;
    unsigned int    sc1_err_irq:1;
    unsigned int    ddc_err_irq:1;
    unsigned int    msc_err_irq:1;
    unsigned int    wr_burst_irq:1;
    unsigned int    sc3_err_irq:1;
    unsigned int    fwdef_cmd_irq:1;
    unsigned int    allmsc_cmd_irq:1;
    unsigned int    abort_res_irq:1;
    unsigned int    abort_req_irq:1;
    unsigned int    ddc_abort_irq:1;
}CBUS_msc_06;

typedef struct
{
    unsigned int    reserved_0:3;
    unsigned int    ucp_irq_en:1;
    unsigned int    ucpk_irq_en:1;
    unsigned int    ucpe_irq_en:1;
    unsigned int    dcap_rdy_irq_en:1;
    unsigned int    muted_chg_irq_en:1;
    unsigned int    path_en_irq_en:1;
    unsigned int    clk_mode_irq_en:1;
    unsigned int    msge_irq_en:1;
    unsigned int    rcp_irq_en:1;
    unsigned int    rcpk_irq_en:1;
    unsigned int    rcpe_irq_en:1;
    unsigned int    rap_irq_en:1;
    unsigned int    rapk_irq_en:1;
    unsigned int    msg_sub_irq_en:1;
    unsigned int    wr_stat_irq_en:1;
    unsigned int    rd_devcap_irq_en:1;
    unsigned int    get_stat_irq_en:1;
    unsigned int    get_id_irq_en:1;
    unsigned int    get_msg_irq_en:1;
    unsigned int    sc1_err_irq_en:1;
    unsigned int    ddc_err_irq_en:1;
    unsigned int    msc_err_irq_en:1;
    unsigned int    wr_burst_irq_en:1;
    unsigned int    sc3_err_irq_en:1;
    unsigned int    fwdef_cmd_irq_en:1;
    unsigned int    allmsc_cmd_irq_en:1;
    unsigned int    abort_res_irq_en:1;
    unsigned int    abort_req_irq_en:1;
    unsigned int    ddc_abort_irq_en:1;
}CBUS_msc_07;

typedef struct
{
    unsigned int    rchg_irq_en:3;
    unsigned int    cbus_3d_req_irq_en:1;
    unsigned int    grt_irq_en:1;
    unsigned int    req_irq_en:1;
    unsigned int    dscr_irq_en:1;
    unsigned int    dcap_irq_en:1;
    unsigned int    dchg_bit7_irq_en:1;
    unsigned int    dchg_bit6_irq_en:1;
    unsigned int    dchg_bit5_irq_en:1;
    unsigned int    dchg_bit4_irq_en:1;
    unsigned int    dchg_bit3_irq_en:1;
    unsigned int    dchg_bit2_irq_en:1;
    unsigned int    edid_irq_en:1;
    unsigned int    dchg_bit0_irq_en:1;
    unsigned int    chg22_irq_en:8;
    unsigned int    chg23_irq_en:8;
}CBUS_msc_08;

typedef struct
{
    unsigned int    chg24_irq_en:8;
    unsigned int    chg25_irq_en:8;
    unsigned int    chg26_irq_en:8;
    unsigned int    chg27_irq_en:8;
}CBUS_msc_09;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    msc_err_code:8;
}CBUS_msc_0a;

typedef struct
{
    unsigned int    reserved_0:22;
    unsigned int    rcp_reply_abort:1;
    unsigned int    rcp_reply_nack:1;
    unsigned int    vendor_id:8;
}CBUS_msc_0b;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    msg_cmd:8;
}CBUS_msc_0c;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    msg_dat:8;
}CBUS_msc_0d;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    msge_rcv:8;
}CBUS_msc_0e;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rcp_rcv:8;
}CBUS_msc_0f;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rcpk_rcv:8;
}CBUS_msc_10;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rcpe_rcv:8;
}CBUS_msc_11;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rap_rcv:8;
}CBUS_msc_12;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rapk_rcv:8;
}CBUS_msc_13;

typedef struct
{
    unsigned int    reserved_0:26;
    unsigned int    burst_timeout:1;
    unsigned int    wb_id_chk:1;
    unsigned int    burst_wait:4;
}CBUS_msc_14;

typedef struct
{
    unsigned int    reserved_0:16;
    unsigned int    adop_idh_rcv:8;
    unsigned int    adop_idl_rcv:8;
}CBUS_msc_15;

typedef struct
{
    unsigned int    reserved_0:2;
    unsigned int    auto_handshake:1;
    unsigned int    insert_id:1;
    unsigned int    wb_byte_num0:6;
    unsigned int    wb_byte_num1:6;
    unsigned int    adop_txid_h:8;
    unsigned int    adop_txid_l:8;
}CBUS_msc_16;

typedef struct
{
    unsigned int    reserved_0:29;
    unsigned int    que_fsm_clr:1;
    unsigned int    sch_fsm_clr:1;
    unsigned int    spi_fsm_clr:1;
}CBUS_msc_17;

typedef struct
{
    unsigned int    reserved_0:20;
    unsigned int    que_fsm:4;
    unsigned int    sch_fsm:4;
    unsigned int    spi_fsm:4;
}CBUS_msc_18;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    cap_offset:8;
}CBUS_msc_19;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    int_offset:8;
}CBUS_msc_1a;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    sta_offset:8;
}CBUS_msc_1b;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    scr_offset:8;
}CBUS_msc_1c;

typedef struct
{
    unsigned int    reserved_0:30;
    unsigned int    ddc_err_force:1;
    unsigned int    msc_err_force:1;
}CBUS_msc_1d;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ddc_err_fw:8;
}CBUS_msc_1e;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    msc_err_fw:8;
}CBUS_msc_1f;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ucp_rcv:8;
}CBUS_msc_20;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ucpk_rcv:8;
}CBUS_msc_21;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ucpe_rcv:8;
}CBUS_msc_22;

typedef struct
{
    unsigned int    reserved_0:23;
    unsigned int    fw0_req:1;
    unsigned int    fw0_fifo_clr:1;
    unsigned int    fw0_fifo_full:1;
    unsigned int    fw0_fifo_empty:1;
    unsigned int    fw0_tx_case:3;
    unsigned int    fw0_head:2;
}FW0_req_00;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    fw0_cmd1:8;
}FW0_req_01;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    fw0_cmd2:8;
}FW0_req_02;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    fw0_offset:8;
}FW0_req_03;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    fw0_data:8;
}FW0_req_04;

typedef struct
{
    unsigned int    reserved_0:22;
    unsigned int    fw0_rty_ovr:1;
    unsigned int    fw0_fin:1;
    unsigned int    fw0_cmd_event:1;
    unsigned int    fw0_data_event:1;
    unsigned int    fw0_rcv_err:1;
    unsigned int    fw0_fin_irq_en:1;
    unsigned int    fw0_cmd_irq_en:1;
    unsigned int    fw0_data_irq_en:1;
    unsigned int    fw0_wait_case:2;
}FW0_req_05;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    fw0_cmd_rcv:8;
}FW0_req_06;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    fw0_data_rcv:8;
}FW0_req_07;

typedef struct
{
    unsigned int    reserved_0:18;
    unsigned int    fw0_rd_en:1;
    unsigned int    fw0_fifo_len:5;
    unsigned int    fw0_rdata:8;
}FW0_req_08;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ddc_err_code:8;
}CBUS_ddc_00;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    iic_ck_tgt:8;
}CBUS_ddc_01;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    mcuddc_en:1;
    unsigned int    ddc_prior_dis:1;
    unsigned int    ddc_cmd_event:1;
    unsigned int    ddc_data_event:1;
    unsigned int    ddc_cmd_irq_en:1;
    unsigned int    ddc_data_irq_en:1;
    unsigned int    ddc_req_ctrl:1;
    unsigned int    ddc_req:1;
}CBUS_ddc_02;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ddc_rcv_cmd:8;
}CBUS_ddc_03;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ddc_rcv_data:8;
}CBUS_ddc_04;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ddc_data_fw:8;
}CBUS_ddc_05;

typedef struct
{
    unsigned int    reserved_0:28;
    unsigned int    ddc_eof_irq:1;
    unsigned int    ddc_eof_irq_en:1;
    unsigned int    ddcrd_rst_en:1;
    unsigned int    ddcrd_new_md:1;
}CBUS_ddc_06;

typedef struct
{
    unsigned int    reserved_0:26;
    unsigned int    clk_mod_vwd:1;
    unsigned int    clk_mod_awd:1;
    unsigned int    mute_en_vwd:1;
    unsigned int    mute_en_awd:1;
    unsigned int    path_en_off_vwd:1;
    unsigned int    path_en_off_awd:1;
}CBUS_wdog;

typedef struct
{
    unsigned int    reserved_0:26;
    unsigned int    arbiter_irq:1;
    unsigned int    ddc_irq:1;
    unsigned int    msc_ch_irq:1;
    unsigned int    msc_int_irq:1;
    unsigned int    msc_stat_irq:1;
    unsigned int    ctrl_01_resv:1;
}CBUS_int_index;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    cbus_test_md:2;
    unsigned int    fw_out:1;
    unsigned int    dbg_sel:3;
    unsigned int    reserved_1:2;
}CBUS_test;

typedef struct
{
    unsigned int    cbus_dummy0_29_16:14;
    unsigned int    ddc_idle_no_tx_abort_gated:1;
    unsigned int    msc_clientt0_que_gated:1;
    unsigned int    cbus_dummy0_15_0:16;
}CBUS_dummy0;

typedef struct
{
    unsigned int    reserved_0:11;
    unsigned int    cbus_core_irq_en:1;
    unsigned int    cbus1_irq_en:1;
    unsigned int    ecbus_dmac_irq_en:1;
    unsigned int    dummy:2;
    unsigned int    reserved_1:11;
    unsigned int    cbus_core_irq:1;
    unsigned int    cbus1_irq:1;
    unsigned int    ecbus_dmac_irq:1;
    unsigned int    reserved_2:2;
}CBUS_irq;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    cbus3_en:1;
    unsigned int    cbus1_en:1;
    unsigned int    dummy:6;
}OCBUS_ctrl_00;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    cbus1_retry_num:4;
    unsigned int    invalid_chk:1;
    unsigned int    cbus1_retry_irq_en:1;
    unsigned int    cbus1_retry_limit:1;
    unsigned int    cbus1_coll:1;
}OCBUS_ctrl_01;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    reserved_1:6;
    unsigned int    wr_xstat_irq:1;
    unsigned int    rd_xdevcap_irq:1;
}OCBUS_ctrl_10;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    reserved_1:6;
    unsigned int    wr_xstat_irq_en:1;
    unsigned int    rd_xdevcap_irq_en:1;
}OCBUS_ctrl_11;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rbp_irq:1;
    unsigned int    rbpk_irq:1;
    unsigned int    rbpe_irq:1;
    unsigned int    ucp_irq:1;
    unsigned int    ucpk_irq:1;
    unsigned int    ucpe_irq:1;
    unsigned int    rusb_irq:1;
    unsigned int    rusbk_irq:1;
}OCBUS_ctrl_12;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rhid_irq:1;
    unsigned int    rhidk_irq:1;
    unsigned int    att_irq:1;
    unsigned int    attk_irq:1;
    unsigned int    btrig_irq:1;
    unsigned int    breq_irq:1;
    unsigned int    brdy_irq:1;
    unsigned int    bstop_irq:1;
}OCBUS_ctrl_13;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rbp_irq_en:1;
    unsigned int    rbpk_irq_en:1;
    unsigned int    rbpe_irq_en:1;
    unsigned int    ucp_irq_en:1;
    unsigned int    ucpk_irq_en:1;
    unsigned int    ucpe_irq_en:1;
    unsigned int    rusb_irq_en:1;
    unsigned int    rusbk_irq_en:1;
}OCBUS_ctrl_14;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rhid_irq_en:1;
    unsigned int    rhidk_irq_en:1;
    unsigned int    att_irq_en:1;
    unsigned int    attk_irq_en:1;
    unsigned int    btrig_irq_en:1;
    unsigned int    breq_irq_en:1;
    unsigned int    brdy_irq_en:1;
    unsigned int    bstop_irq_en:1;
}OCBUS_ctrl_15;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rbp_rcv:8;
}OCBUS_ctrl_16;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rbpk_rcv:8;
}OCBUS_ctrl_17;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rbpe_rcv:8;
}OCBUS_ctrl_18;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ucp_rcv:8;
}OCBUS_ctrl_19;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ucpk_rcv:8;
}OCBUS_ctrl_1a;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    ucpe_rcv:8;
}OCBUS_ctrl_1b;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rusb_rcv:8;
}OCBUS_ctrl_1c;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rusbk_rcv:8;
}OCBUS_ctrl_1d;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rhid_rcv:8;
}OCBUS_ctrl_1e;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    rhidk_rcv:8;
}OCBUS_ctrl_1f;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    att_rcv:8;
}OCBUS_ctrl_20;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    attk_rcv:8;
}OCBUS_ctrl_21;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    btrig_rcv:8;
}OCBUS_ctrl_22;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    breq_rcv:8;
}OCBUS_ctrl_23;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    brdy_rcv:8;
}OCBUS_ctrl_24;

typedef struct
{
    unsigned int    reserved_0:24;
    unsigned int    bstop_rcv:8;
}OCBUS_ctrl_25;
#endif


#define MSC_REG_00                                                    0x98035000
#define MSC_REG_00_reg_addr                                           "0xd8035000"
#define MSC_REG_00_reg                                                0xd8035000
#define MSC_REG_00_inst_addr                                          "0x0000"
#define MSC_REG_00_inst                                               0x0000
#define set_MSC_REG_00_reg(data)                                      (*((volatile unsigned int*)MSC_REG_00_reg)=data)
#define get_MSC_REG_00_reg                                            (*((volatile unsigned int*)MSC_REG_00_reg))
#define MSC_REG_00_dev_state_shift                                    (0)
#define MSC_REG_00_dev_state_mask                                     (0x000000FF)
#define MSC_REG_00_dev_state(data)                                    (0x000000FF&(data))
#define MSC_REG_00_get_dev_state(data)                                (0x000000FF&(data))


#define MSC_REG_01                                                    0x98035004
#define MSC_REG_01_reg_addr                                           "0xd8035004"
#define MSC_REG_01_reg                                                0xd8035004
#define MSC_REG_01_inst_addr                                          "0x0001"
#define MSC_REG_01_inst                                               0x0001
#define set_MSC_REG_01_reg(data)                                      (*((volatile unsigned int*)MSC_REG_01_reg)=data)
#define get_MSC_REG_01_reg                                            (*((volatile unsigned int*)MSC_REG_01_reg))
#define MSC_REG_01_mhl_ver_shift                                      (0)
#define MSC_REG_01_mhl_ver_mask                                       (0x000000FF)
#define MSC_REG_01_mhl_ver(data)                                      (0x000000FF&(data))
#define MSC_REG_01_get_mhl_ver(data)                                  (0x000000FF&(data))


#define MSC_REG_02                                                    0x98035008
#define MSC_REG_02_reg_addr                                           "0xd8035008"
#define MSC_REG_02_reg                                                0xd8035008
#define MSC_REG_02_inst_addr                                          "0x0002"
#define MSC_REG_02_inst                                               0x0002
#define set_MSC_REG_02_reg(data)                                      (*((volatile unsigned int*)MSC_REG_02_reg)=data)
#define get_MSC_REG_02_reg                                            (*((volatile unsigned int*)MSC_REG_02_reg))
#define MSC_REG_02_dev_cat_shift                                      (7)
#define MSC_REG_02_plim_shift                                         (5)
#define MSC_REG_02_pow_shift                                          (4)
#define MSC_REG_02_dev_type_shift                                     (0)
#define MSC_REG_02_dev_cat_mask                                       (0x00000080)
#define MSC_REG_02_plim_mask                                          (0x00000060)
#define MSC_REG_02_pow_mask                                           (0x00000010)
#define MSC_REG_02_dev_type_mask                                      (0x0000000F)
#define MSC_REG_02_dev_cat(data)                                      (0x00000080&((data)<<7))
#define MSC_REG_02_plim(data)                                         (0x00000060&((data)<<5))
#define MSC_REG_02_pow(data)                                          (0x00000010&((data)<<4))
#define MSC_REG_02_dev_type(data)                                     (0x0000000F&(data))
#define MSC_REG_02_get_dev_cat(data)                                  ((0x00000080&(data))>>7)
#define MSC_REG_02_get_plim(data)                                     ((0x00000060&(data))>>5)
#define MSC_REG_02_get_pow(data)                                      ((0x00000010&(data))>>4)
#define MSC_REG_02_get_dev_type(data)                                 (0x0000000F&(data))


#define MSC_REG_03                                                    0x9803500c
#define MSC_REG_03_reg_addr                                           "0xd803500c"
#define MSC_REG_03_reg                                                0xd803500c
#define MSC_REG_03_inst_addr                                          "0x0003"
#define MSC_REG_03_inst                                               0x0003
#define set_MSC_REG_03_reg(data)                                      (*((volatile unsigned int*)MSC_REG_03_reg)=data)
#define get_MSC_REG_03_reg                                            (*((volatile unsigned int*)MSC_REG_03_reg))
#define MSC_REG_03_adop_id_h_shift                                    (0)
#define MSC_REG_03_adop_id_h_mask                                     (0x000000FF)
#define MSC_REG_03_adop_id_h(data)                                    (0x000000FF&(data))
#define MSC_REG_03_get_adop_id_h(data)                                (0x000000FF&(data))


#define MSC_REG_04                                                    0x98035010
#define MSC_REG_04_reg_addr                                           "0xd8035010"
#define MSC_REG_04_reg                                                0xd8035010
#define MSC_REG_04_inst_addr                                          "0x0004"
#define MSC_REG_04_inst                                               0x0004
#define set_MSC_REG_04_reg(data)                                      (*((volatile unsigned int*)MSC_REG_04_reg)=data)
#define get_MSC_REG_04_reg                                            (*((volatile unsigned int*)MSC_REG_04_reg))
#define MSC_REG_04_adop_id_l_shift                                    (0)
#define MSC_REG_04_adop_id_l_mask                                     (0x000000FF)
#define MSC_REG_04_adop_id_l(data)                                    (0x000000FF&(data))
#define MSC_REG_04_get_adop_id_l(data)                                (0x000000FF&(data))


#define MSC_REG_05                                                    0x98035014
#define MSC_REG_05_reg_addr                                           "0xd8035014"
#define MSC_REG_05_reg                                                0xd8035014
#define MSC_REG_05_inst_addr                                          "0x0005"
#define MSC_REG_05_inst                                               0x0005
#define set_MSC_REG_05_reg(data)                                      (*((volatile unsigned int*)MSC_REG_05_reg)=data)
#define get_MSC_REG_05_reg                                            (*((volatile unsigned int*)MSC_REG_05_reg))
#define MSC_REG_05_vid_link_md_shift                                  (6)
#define MSC_REG_05_supp_vga_shift                                     (5)
#define MSC_REG_05_supp_islands_shift                                 (4)
#define MSC_REG_05_supp_ppixel_shift                                  (3)
#define MSC_REG_05_supp_yuv422_shift                                  (2)
#define MSC_REG_05_supp_yuv444_shift                                  (1)
#define MSC_REG_05_supp_rgb444_shift                                  (0)
#define MSC_REG_05_vid_link_md_mask                                   (0x000000C0)
#define MSC_REG_05_supp_vga_mask                                      (0x00000020)
#define MSC_REG_05_supp_islands_mask                                  (0x00000010)
#define MSC_REG_05_supp_ppixel_mask                                   (0x00000008)
#define MSC_REG_05_supp_yuv422_mask                                   (0x00000004)
#define MSC_REG_05_supp_yuv444_mask                                   (0x00000002)
#define MSC_REG_05_supp_rgb444_mask                                   (0x00000001)
#define MSC_REG_05_vid_link_md(data)                                  (0x000000C0&((data)<<6))
#define MSC_REG_05_supp_vga(data)                                     (0x00000020&((data)<<5))
#define MSC_REG_05_supp_islands(data)                                 (0x00000010&((data)<<4))
#define MSC_REG_05_supp_ppixel(data)                                  (0x00000008&((data)<<3))
#define MSC_REG_05_supp_yuv422(data)                                  (0x00000004&((data)<<2))
#define MSC_REG_05_supp_yuv444(data)                                  (0x00000002&((data)<<1))
#define MSC_REG_05_supp_rgb444(data)                                  (0x00000001&(data))
#define MSC_REG_05_get_vid_link_md(data)                              ((0x000000C0&(data))>>6)
#define MSC_REG_05_get_supp_vga(data)                                 ((0x00000020&(data))>>5)
#define MSC_REG_05_get_supp_islands(data)                             ((0x00000010&(data))>>4)
#define MSC_REG_05_get_supp_ppixel(data)                              ((0x00000008&(data))>>3)
#define MSC_REG_05_get_supp_yuv422(data)                              ((0x00000004&(data))>>2)
#define MSC_REG_05_get_supp_yuv444(data)                              ((0x00000002&(data))>>1)
#define MSC_REG_05_get_supp_rgb444(data)                              (0x00000001&(data))


#define MSC_REG_06                                                    0x98035018
#define MSC_REG_06_reg_addr                                           "0xd8035018"
#define MSC_REG_06_reg                                                0xd8035018
#define MSC_REG_06_inst_addr                                          "0x0006"
#define MSC_REG_06_inst                                               0x0006
#define set_MSC_REG_06_reg(data)                                      (*((volatile unsigned int*)MSC_REG_06_reg)=data)
#define get_MSC_REG_06_reg                                            (*((volatile unsigned int*)MSC_REG_06_reg))
#define MSC_REG_06_aud_link_md_shift                                  (3)
#define MSC_REG_06_aud_hbr_shift                                      (2)
#define MSC_REG_06_aud_8ch_shift                                      (1)
#define MSC_REG_06_aud_2ch_shift                                      (0)
#define MSC_REG_06_aud_link_md_mask                                   (0x000000F8)
#define MSC_REG_06_aud_hbr_mask                                       (0x00000004)
#define MSC_REG_06_aud_8ch_mask                                       (0x00000002)
#define MSC_REG_06_aud_2ch_mask                                       (0x00000001)
#define MSC_REG_06_aud_link_md(data)                                  (0x000000F8&((data)<<3))
#define MSC_REG_06_aud_hbr(data)                                      (0x00000004&((data)<<2))
#define MSC_REG_06_aud_8ch(data)                                      (0x00000002&((data)<<1))
#define MSC_REG_06_aud_2ch(data)                                      (0x00000001&(data))
#define MSC_REG_06_get_aud_link_md(data)                              ((0x000000F8&(data))>>3)
#define MSC_REG_06_get_aud_hbr(data)                                  ((0x00000004&(data))>>2)
#define MSC_REG_06_get_aud_8ch(data)                                  ((0x00000002&(data))>>1)
#define MSC_REG_06_get_aud_2ch(data)                                  (0x00000001&(data))


#define MSC_REG_07                                                    0x9803501c
#define MSC_REG_07_reg_addr                                           "0xd803501c"
#define MSC_REG_07_reg                                                0xd803501c
#define MSC_REG_07_inst_addr                                          "0x0007"
#define MSC_REG_07_inst                                               0x0007
#define set_MSC_REG_07_reg(data)                                      (*((volatile unsigned int*)MSC_REG_07_reg)=data)
#define get_MSC_REG_07_reg                                            (*((volatile unsigned int*)MSC_REG_07_reg))
#define MSC_REG_07_supp_vt_shift                                      (7)
#define MSC_REG_07_video_type_shift                                   (4)
#define MSC_REG_07_vt_game_shift                                      (3)
#define MSC_REG_07_vt_cinema_shift                                    (2)
#define MSC_REG_07_vt_photo_shift                                     (1)
#define MSC_REG_07_vt_graphics_shift                                  (0)
#define MSC_REG_07_supp_vt_mask                                       (0x00000080)
#define MSC_REG_07_video_type_mask                                    (0x00000070)
#define MSC_REG_07_vt_game_mask                                       (0x00000008)
#define MSC_REG_07_vt_cinema_mask                                     (0x00000004)
#define MSC_REG_07_vt_photo_mask                                      (0x00000002)
#define MSC_REG_07_vt_graphics_mask                                   (0x00000001)
#define MSC_REG_07_supp_vt(data)                                      (0x00000080&((data)<<7))
#define MSC_REG_07_video_type(data)                                   (0x00000070&((data)<<4))
#define MSC_REG_07_vt_game(data)                                      (0x00000008&((data)<<3))
#define MSC_REG_07_vt_cinema(data)                                    (0x00000004&((data)<<2))
#define MSC_REG_07_vt_photo(data)                                     (0x00000002&((data)<<1))
#define MSC_REG_07_vt_graphics(data)                                  (0x00000001&(data))
#define MSC_REG_07_get_supp_vt(data)                                  ((0x00000080&(data))>>7)
#define MSC_REG_07_get_video_type(data)                               ((0x00000070&(data))>>4)
#define MSC_REG_07_get_vt_game(data)                                  ((0x00000008&(data))>>3)
#define MSC_REG_07_get_vt_cinema(data)                                ((0x00000004&(data))>>2)
#define MSC_REG_07_get_vt_photo(data)                                 ((0x00000002&(data))>>1)
#define MSC_REG_07_get_vt_graphics(data)                              (0x00000001&(data))


#define MSC_REG_08                                                    0x98035020
#define MSC_REG_08_reg_addr                                           "0xd8035020"
#define MSC_REG_08_reg                                                0xd8035020
#define MSC_REG_08_inst_addr                                          "0x0008"
#define MSC_REG_08_inst                                               0x0008
#define set_MSC_REG_08_reg(data)                                      (*((volatile unsigned int*)MSC_REG_08_reg)=data)
#define get_MSC_REG_08_reg                                            (*((volatile unsigned int*)MSC_REG_08_reg))
#define MSC_REG_08_ld_gui_shift                                       (7)
#define MSC_REG_08_ld_speaker_shift                                   (6)
#define MSC_REG_08_ld_record_shift                                    (5)
#define MSC_REG_08_ld_tuner_shift                                     (4)
#define MSC_REG_08_ld_media_shift                                     (3)
#define MSC_REG_08_ld_audio_shift                                     (2)
#define MSC_REG_08_ld_video_shift                                     (1)
#define MSC_REG_08_ld_display_shift                                   (0)
#define MSC_REG_08_ld_gui_mask                                        (0x00000080)
#define MSC_REG_08_ld_speaker_mask                                    (0x00000040)
#define MSC_REG_08_ld_record_mask                                     (0x00000020)
#define MSC_REG_08_ld_tuner_mask                                      (0x00000010)
#define MSC_REG_08_ld_media_mask                                      (0x00000008)
#define MSC_REG_08_ld_audio_mask                                      (0x00000004)
#define MSC_REG_08_ld_video_mask                                      (0x00000002)
#define MSC_REG_08_ld_display_mask                                    (0x00000001)
#define MSC_REG_08_ld_gui(data)                                       (0x00000080&((data)<<7))
#define MSC_REG_08_ld_speaker(data)                                   (0x00000040&((data)<<6))
#define MSC_REG_08_ld_record(data)                                    (0x00000020&((data)<<5))
#define MSC_REG_08_ld_tuner(data)                                     (0x00000010&((data)<<4))
#define MSC_REG_08_ld_media(data)                                     (0x00000008&((data)<<3))
#define MSC_REG_08_ld_audio(data)                                     (0x00000004&((data)<<2))
#define MSC_REG_08_ld_video(data)                                     (0x00000002&((data)<<1))
#define MSC_REG_08_ld_display(data)                                   (0x00000001&(data))
#define MSC_REG_08_get_ld_gui(data)                                   ((0x00000080&(data))>>7)
#define MSC_REG_08_get_ld_speaker(data)                               ((0x00000040&(data))>>6)
#define MSC_REG_08_get_ld_record(data)                                ((0x00000020&(data))>>5)
#define MSC_REG_08_get_ld_tuner(data)                                 ((0x00000010&(data))>>4)
#define MSC_REG_08_get_ld_media(data)                                 ((0x00000008&(data))>>3)
#define MSC_REG_08_get_ld_audio(data)                                 ((0x00000004&(data))>>2)
#define MSC_REG_08_get_ld_video(data)                                 ((0x00000002&(data))>>1)
#define MSC_REG_08_get_ld_display(data)                               (0x00000001&(data))


#define MSC_REG_09                                                    0x98035024
#define MSC_REG_09_reg_addr                                           "0xd8035024"
#define MSC_REG_09_reg                                                0xd8035024
#define MSC_REG_09_inst_addr                                          "0x0009"
#define MSC_REG_09_inst                                               0x0009
#define set_MSC_REG_09_reg(data)                                      (*((volatile unsigned int*)MSC_REG_09_reg)=data)
#define get_MSC_REG_09_reg                                            (*((volatile unsigned int*)MSC_REG_09_reg))
#define MSC_REG_09_bandwid_shift                                      (0)
#define MSC_REG_09_bandwid_mask                                       (0x000000FF)
#define MSC_REG_09_bandwid(data)                                      (0x000000FF&(data))
#define MSC_REG_09_get_bandwid(data)                                  (0x000000FF&(data))


#define MSC_REG_0A                                                    0x98035028
#define MSC_REG_0A_reg_addr                                           "0xd8035028"
#define MSC_REG_0A_reg                                                0xd8035028
#define MSC_REG_0A_inst_addr                                          "0x000A"
#define MSC_REG_0A_inst                                               0x000A
#define set_MSC_REG_0A_reg(data)                                      (*((volatile unsigned int*)MSC_REG_0A_reg)=data)
#define get_MSC_REG_0A_reg                                            (*((volatile unsigned int*)MSC_REG_0A_reg))
#define MSC_REG_0A_feature_flag_shift                                 (7)
#define MSC_REG_0A_rbp_support_shift                                  (6)
#define MSC_REG_0A_xvycc_support_shift                                (5)
#define MSC_REG_0A_ucp_recv_supp_shift                                (4)
#define MSC_REG_0A_ucp_send_supp_shift                                (3)
#define MSC_REG_0A_sp_supp_shift                                      (2)
#define MSC_REG_0A_rap_supp_shift                                     (1)
#define MSC_REG_0A_rcp_supp_shift                                     (0)
#define MSC_REG_0A_feature_flag_mask                                  (0x00000080)
#define MSC_REG_0A_rbp_support_mask                                   (0x00000040)
#define MSC_REG_0A_xvycc_support_mask                                 (0x00000020)
#define MSC_REG_0A_ucp_recv_supp_mask                                 (0x00000010)
#define MSC_REG_0A_ucp_send_supp_mask                                 (0x00000008)
#define MSC_REG_0A_sp_supp_mask                                       (0x00000004)
#define MSC_REG_0A_rap_supp_mask                                      (0x00000002)
#define MSC_REG_0A_rcp_supp_mask                                      (0x00000001)
#define MSC_REG_0A_feature_flag(data)                                 (0x00000080&((data)<<7))
#define MSC_REG_0A_rbp_support(data)                                  (0x00000040&((data)<<6))
#define MSC_REG_0A_xvycc_support(data)                                (0x00000020&((data)<<5))
#define MSC_REG_0A_ucp_recv_supp(data)                                (0x00000010&((data)<<4))
#define MSC_REG_0A_ucp_send_supp(data)                                (0x00000008&((data)<<3))
#define MSC_REG_0A_sp_supp(data)                                      (0x00000004&((data)<<2))
#define MSC_REG_0A_rap_supp(data)                                     (0x00000002&((data)<<1))
#define MSC_REG_0A_rcp_supp(data)                                     (0x00000001&(data))
#define MSC_REG_0A_get_feature_flag(data)                             ((0x00000080&(data))>>7)
#define MSC_REG_0A_get_rbp_support(data)                              ((0x00000040&(data))>>6)
#define MSC_REG_0A_get_xvycc_support(data)                            ((0x00000020&(data))>>5)
#define MSC_REG_0A_get_ucp_recv_supp(data)                            ((0x00000010&(data))>>4)
#define MSC_REG_0A_get_ucp_send_supp(data)                            ((0x00000008&(data))>>3)
#define MSC_REG_0A_get_sp_supp(data)                                  ((0x00000004&(data))>>2)
#define MSC_REG_0A_get_rap_supp(data)                                 ((0x00000002&(data))>>1)
#define MSC_REG_0A_get_rcp_supp(data)                                 (0x00000001&(data))


#define MSC_REG_0B                                                    0x9803502c
#define MSC_REG_0B_reg_addr                                           "0xd803502c"
#define MSC_REG_0B_reg                                                0xd803502c
#define MSC_REG_0B_inst_addr                                          "0x000B"
#define MSC_REG_0B_inst                                               0x000B
#define set_MSC_REG_0B_reg(data)                                      (*((volatile unsigned int*)MSC_REG_0B_reg)=data)
#define get_MSC_REG_0B_reg                                            (*((volatile unsigned int*)MSC_REG_0B_reg))
#define MSC_REG_0B_device_id_h_shift                                  (0)
#define MSC_REG_0B_device_id_h_mask                                   (0x000000FF)
#define MSC_REG_0B_device_id_h(data)                                  (0x000000FF&(data))
#define MSC_REG_0B_get_device_id_h(data)                              (0x000000FF&(data))


#define MSC_REG_0C                                                    0x98035030
#define MSC_REG_0C_reg_addr                                           "0xd8035030"
#define MSC_REG_0C_reg                                                0xd8035030
#define MSC_REG_0C_inst_addr                                          "0x000C"
#define MSC_REG_0C_inst                                               0x000C
#define set_MSC_REG_0C_reg(data)                                      (*((volatile unsigned int*)MSC_REG_0C_reg)=data)
#define get_MSC_REG_0C_reg                                            (*((volatile unsigned int*)MSC_REG_0C_reg))
#define MSC_REG_0C_device_id_l_shift                                  (0)
#define MSC_REG_0C_device_id_l_mask                                   (0x000000FF)
#define MSC_REG_0C_device_id_l(data)                                  (0x000000FF&(data))
#define MSC_REG_0C_get_device_id_l(data)                              (0x000000FF&(data))


#define MSC_REG_0D                                                    0x98035034
#define MSC_REG_0D_reg_addr                                           "0xd8035034"
#define MSC_REG_0D_reg                                                0xd8035034
#define MSC_REG_0D_inst_addr                                          "0x000D"
#define MSC_REG_0D_inst                                               0x000D
#define set_MSC_REG_0D_reg(data)                                      (*((volatile unsigned int*)MSC_REG_0D_reg)=data)
#define get_MSC_REG_0D_reg                                            (*((volatile unsigned int*)MSC_REG_0D_reg))
#define MSC_REG_0D_scr_size_shift                                     (0)
#define MSC_REG_0D_scr_size_mask                                      (0x000000FF)
#define MSC_REG_0D_scr_size(data)                                     (0x000000FF&(data))
#define MSC_REG_0D_get_scr_size(data)                                 (0x000000FF&(data))


#define MSC_REG_0E                                                    0x98035038
#define MSC_REG_0E_reg_addr                                           "0xd8035038"
#define MSC_REG_0E_reg                                                0xd8035038
#define MSC_REG_0E_inst_addr                                          "0x000E"
#define MSC_REG_0E_inst                                               0x000E
#define set_MSC_REG_0E_reg(data)                                      (*((volatile unsigned int*)MSC_REG_0E_reg)=data)
#define get_MSC_REG_0E_reg                                            (*((volatile unsigned int*)MSC_REG_0E_reg))
#define MSC_REG_0E_stat_size_shift                                    (4)
#define MSC_REG_0E_int_size_shift                                     (0)
#define MSC_REG_0E_stat_size_mask                                     (0x000000F0)
#define MSC_REG_0E_int_size_mask                                      (0x0000000F)
#define MSC_REG_0E_stat_size(data)                                    (0x000000F0&((data)<<4))
#define MSC_REG_0E_int_size(data)                                     (0x0000000F&(data))
#define MSC_REG_0E_get_stat_size(data)                                ((0x000000F0&(data))>>4)
#define MSC_REG_0E_get_int_size(data)                                 (0x0000000F&(data))


#define MSC_REG_0F                                                    0x9803503c
#define MSC_REG_0F_reg_addr                                           "0xd803503c"
#define MSC_REG_0F_reg                                                0xd803503c
#define MSC_REG_0F_inst_addr                                          "0x000F"
#define MSC_REG_0F_inst                                               0x000F
#define set_MSC_REG_0F_reg(data)                                      (*((volatile unsigned int*)MSC_REG_0F_reg)=data)
#define get_MSC_REG_0F_reg                                            (*((volatile unsigned int*)MSC_REG_0F_reg))
#define MSC_REG_0F_cap_0f_shift                                       (0)
#define MSC_REG_0F_cap_0f_mask                                        (0x000000FF)
#define MSC_REG_0F_cap_0f(data)                                       (0x000000FF&(data))
#define MSC_REG_0F_get_cap_0f(data)                                   (0x000000FF&(data))


#define MSC_REG_20                                                    0x98035080
#define MSC_REG_20_reg_addr                                           "0xd8035080"
#define MSC_REG_20_reg                                                0xd8035080
#define MSC_REG_20_inst_addr                                          "0x0020"
#define MSC_REG_20_inst                                               0x0020
#define set_MSC_REG_20_reg(data)                                      (*((volatile unsigned int*)MSC_REG_20_reg)=data)
#define get_MSC_REG_20_reg                                            (*((volatile unsigned int*)MSC_REG_20_reg))
#define MSC_REG_20_rchg_int_7_shift                                   (7)
#define MSC_REG_20_feat_complete_shift                                (6)
#define MSC_REG_20_feat_req_shift                                     (5)
#define MSC_REG_20_cbus_3d_req_shift                                  (4)
#define MSC_REG_20_grt_wrt_shift                                      (3)
#define MSC_REG_20_req_wrt_shift                                      (2)
#define MSC_REG_20_dscr_chg_shift                                     (1)
#define MSC_REG_20_dcap_chg_shift                                     (0)
#define MSC_REG_20_rchg_int_7_mask                                    (0x00000080)
#define MSC_REG_20_feat_complete_mask                                 (0x00000040)
#define MSC_REG_20_feat_req_mask                                      (0x00000020)
#define MSC_REG_20_cbus_3d_req_mask                                   (0x00000010)
#define MSC_REG_20_grt_wrt_mask                                       (0x00000008)
#define MSC_REG_20_req_wrt_mask                                       (0x00000004)
#define MSC_REG_20_dscr_chg_mask                                      (0x00000002)
#define MSC_REG_20_dcap_chg_mask                                      (0x00000001)
#define MSC_REG_20_rchg_int_7(data)                                   (0x00000080&((data)<<7))
#define MSC_REG_20_feat_complete(data)                                (0x00000040&((data)<<6))
#define MSC_REG_20_feat_req(data)                                     (0x00000020&((data)<<5))
#define MSC_REG_20_cbus_3d_req(data)                                  (0x00000010&((data)<<4))
#define MSC_REG_20_grt_wrt(data)                                      (0x00000008&((data)<<3))
#define MSC_REG_20_req_wrt(data)                                      (0x00000004&((data)<<2))
#define MSC_REG_20_dscr_chg(data)                                     (0x00000002&((data)<<1))
#define MSC_REG_20_dcap_chg(data)                                     (0x00000001&(data))
#define MSC_REG_20_get_rchg_int_7(data)                               ((0x00000080&(data))>>7)
#define MSC_REG_20_get_feat_complete(data)                            ((0x00000040&(data))>>6)
#define MSC_REG_20_get_feat_req(data)                                 ((0x00000020&(data))>>5)
#define MSC_REG_20_get_cbus_3d_req(data)                              ((0x00000010&(data))>>4)
#define MSC_REG_20_get_grt_wrt(data)                                  ((0x00000008&(data))>>3)
#define MSC_REG_20_get_req_wrt(data)                                  ((0x00000004&(data))>>2)
#define MSC_REG_20_get_dscr_chg(data)                                 ((0x00000002&(data))>>1)
#define MSC_REG_20_get_dcap_chg(data)                                 (0x00000001&(data))


#define MSC_REG_21                                                    0x98035084
#define MSC_REG_21_reg_addr                                           "0xd8035084"
#define MSC_REG_21_reg                                                0xd8035084
#define MSC_REG_21_inst_addr                                          "0x0021"
#define MSC_REG_21_inst                                               0x0021
#define set_MSC_REG_21_reg(data)                                      (*((volatile unsigned int*)MSC_REG_21_reg)=data)
#define get_MSC_REG_21_reg                                            (*((volatile unsigned int*)MSC_REG_21_reg))
#define MSC_REG_21_dchg_int_7_shift                                   (7)
#define MSC_REG_21_dchg_int_6_shift                                   (6)
#define MSC_REG_21_dchg_int_5_shift                                   (5)
#define MSC_REG_21_dchg_int_4_shift                                   (4)
#define MSC_REG_21_dchg_int_3_shift                                   (3)
#define MSC_REG_21_dchg_int_2_shift                                   (2)
#define MSC_REG_21_edid_chg_shift                                     (1)
#define MSC_REG_21_dchg_int_0_shift                                   (0)
#define MSC_REG_21_dchg_int_7_mask                                    (0x00000080)
#define MSC_REG_21_dchg_int_6_mask                                    (0x00000040)
#define MSC_REG_21_dchg_int_5_mask                                    (0x00000020)
#define MSC_REG_21_dchg_int_4_mask                                    (0x00000010)
#define MSC_REG_21_dchg_int_3_mask                                    (0x00000008)
#define MSC_REG_21_dchg_int_2_mask                                    (0x00000004)
#define MSC_REG_21_edid_chg_mask                                      (0x00000002)
#define MSC_REG_21_dchg_int_0_mask                                    (0x00000001)
#define MSC_REG_21_dchg_int_7(data)                                   (0x00000080&((data)<<7))
#define MSC_REG_21_dchg_int_6(data)                                   (0x00000040&((data)<<6))
#define MSC_REG_21_dchg_int_5(data)                                   (0x00000020&((data)<<5))
#define MSC_REG_21_dchg_int_4(data)                                   (0x00000010&((data)<<4))
#define MSC_REG_21_dchg_int_3(data)                                   (0x00000008&((data)<<3))
#define MSC_REG_21_dchg_int_2(data)                                   (0x00000004&((data)<<2))
#define MSC_REG_21_edid_chg(data)                                     (0x00000002&((data)<<1))
#define MSC_REG_21_dchg_int_0(data)                                   (0x00000001&(data))
#define MSC_REG_21_get_dchg_int_7(data)                               ((0x00000080&(data))>>7)
#define MSC_REG_21_get_dchg_int_6(data)                               ((0x00000040&(data))>>6)
#define MSC_REG_21_get_dchg_int_5(data)                               ((0x00000020&(data))>>5)
#define MSC_REG_21_get_dchg_int_4(data)                               ((0x00000010&(data))>>4)
#define MSC_REG_21_get_dchg_int_3(data)                               ((0x00000008&(data))>>3)
#define MSC_REG_21_get_dchg_int_2(data)                               ((0x00000004&(data))>>2)
#define MSC_REG_21_get_edid_chg(data)                                 ((0x00000002&(data))>>1)
#define MSC_REG_21_get_dchg_int_0(data)                               (0x00000001&(data))


#define MSC_REG_22                                                    0x98035088
#define MSC_REG_22_reg_addr                                           "0xd8035088"
#define MSC_REG_22_reg                                                0xd8035088
#define MSC_REG_22_inst_addr                                          "0x0022"
#define MSC_REG_22_inst                                               0x0022
#define set_MSC_REG_22_reg(data)                                      (*((volatile unsigned int*)MSC_REG_22_reg)=data)
#define get_MSC_REG_22_reg                                            (*((volatile unsigned int*)MSC_REG_22_reg))
#define MSC_REG_22_chg22_7_shift                                      (7)
#define MSC_REG_22_chg22_6_shift                                      (6)
#define MSC_REG_22_chg22_5_shift                                      (5)
#define MSC_REG_22_chg22_4_shift                                      (4)
#define MSC_REG_22_chg22_3_shift                                      (3)
#define MSC_REG_22_chg22_2_shift                                      (2)
#define MSC_REG_22_chg22_1_shift                                      (1)
#define MSC_REG_22_chg22_0_shift                                      (0)
#define MSC_REG_22_chg22_7_mask                                       (0x00000080)
#define MSC_REG_22_chg22_6_mask                                       (0x00000040)
#define MSC_REG_22_chg22_5_mask                                       (0x00000020)
#define MSC_REG_22_chg22_4_mask                                       (0x00000010)
#define MSC_REG_22_chg22_3_mask                                       (0x00000008)
#define MSC_REG_22_chg22_2_mask                                       (0x00000004)
#define MSC_REG_22_chg22_1_mask                                       (0x00000002)
#define MSC_REG_22_chg22_0_mask                                       (0x00000001)
#define MSC_REG_22_chg22_7(data)                                      (0x00000080&((data)<<7))
#define MSC_REG_22_chg22_6(data)                                      (0x00000040&((data)<<6))
#define MSC_REG_22_chg22_5(data)                                      (0x00000020&((data)<<5))
#define MSC_REG_22_chg22_4(data)                                      (0x00000010&((data)<<4))
#define MSC_REG_22_chg22_3(data)                                      (0x00000008&((data)<<3))
#define MSC_REG_22_chg22_2(data)                                      (0x00000004&((data)<<2))
#define MSC_REG_22_chg22_1(data)                                      (0x00000002&((data)<<1))
#define MSC_REG_22_chg22_0(data)                                      (0x00000001&(data))
#define MSC_REG_22_get_chg22_7(data)                                  ((0x00000080&(data))>>7)
#define MSC_REG_22_get_chg22_6(data)                                  ((0x00000040&(data))>>6)
#define MSC_REG_22_get_chg22_5(data)                                  ((0x00000020&(data))>>5)
#define MSC_REG_22_get_chg22_4(data)                                  ((0x00000010&(data))>>4)
#define MSC_REG_22_get_chg22_3(data)                                  ((0x00000008&(data))>>3)
#define MSC_REG_22_get_chg22_2(data)                                  ((0x00000004&(data))>>2)
#define MSC_REG_22_get_chg22_1(data)                                  ((0x00000002&(data))>>1)
#define MSC_REG_22_get_chg22_0(data)                                  (0x00000001&(data))


#define MSC_REG_23                                                    0x9803508c
#define MSC_REG_23_reg_addr                                           "0xd803508c"
#define MSC_REG_23_reg                                                0xd803508c
#define MSC_REG_23_inst_addr                                          "0x0023"
#define MSC_REG_23_inst                                               0x0023
#define set_MSC_REG_23_reg(data)                                      (*((volatile unsigned int*)MSC_REG_23_reg)=data)
#define get_MSC_REG_23_reg                                            (*((volatile unsigned int*)MSC_REG_23_reg))
#define MSC_REG_23_chg23_7_shift                                      (7)
#define MSC_REG_23_chg23_6_shift                                      (6)
#define MSC_REG_23_chg23_5_shift                                      (5)
#define MSC_REG_23_chg23_4_shift                                      (4)
#define MSC_REG_23_chg23_3_shift                                      (3)
#define MSC_REG_23_chg23_2_shift                                      (2)
#define MSC_REG_23_chg23_1_shift                                      (1)
#define MSC_REG_23_chg23_0_shift                                      (0)
#define MSC_REG_23_chg23_7_mask                                       (0x00000080)
#define MSC_REG_23_chg23_6_mask                                       (0x00000040)
#define MSC_REG_23_chg23_5_mask                                       (0x00000020)
#define MSC_REG_23_chg23_4_mask                                       (0x00000010)
#define MSC_REG_23_chg23_3_mask                                       (0x00000008)
#define MSC_REG_23_chg23_2_mask                                       (0x00000004)
#define MSC_REG_23_chg23_1_mask                                       (0x00000002)
#define MSC_REG_23_chg23_0_mask                                       (0x00000001)
#define MSC_REG_23_chg23_7(data)                                      (0x00000080&((data)<<7))
#define MSC_REG_23_chg23_6(data)                                      (0x00000040&((data)<<6))
#define MSC_REG_23_chg23_5(data)                                      (0x00000020&((data)<<5))
#define MSC_REG_23_chg23_4(data)                                      (0x00000010&((data)<<4))
#define MSC_REG_23_chg23_3(data)                                      (0x00000008&((data)<<3))
#define MSC_REG_23_chg23_2(data)                                      (0x00000004&((data)<<2))
#define MSC_REG_23_chg23_1(data)                                      (0x00000002&((data)<<1))
#define MSC_REG_23_chg23_0(data)                                      (0x00000001&(data))
#define MSC_REG_23_get_chg23_7(data)                                  ((0x00000080&(data))>>7)
#define MSC_REG_23_get_chg23_6(data)                                  ((0x00000040&(data))>>6)
#define MSC_REG_23_get_chg23_5(data)                                  ((0x00000020&(data))>>5)
#define MSC_REG_23_get_chg23_4(data)                                  ((0x00000010&(data))>>4)
#define MSC_REG_23_get_chg23_3(data)                                  ((0x00000008&(data))>>3)
#define MSC_REG_23_get_chg23_2(data)                                  ((0x00000004&(data))>>2)
#define MSC_REG_23_get_chg23_1(data)                                  ((0x00000002&(data))>>1)
#define MSC_REG_23_get_chg23_0(data)                                  (0x00000001&(data))


#define MSC_REG_24                                                    0x98035090
#define MSC_REG_24_reg_addr                                           "0xd8035090"
#define MSC_REG_24_reg                                                0xd8035090
#define MSC_REG_24_inst_addr                                          "0x0024"
#define MSC_REG_24_inst                                               0x0024
#define set_MSC_REG_24_reg(data)                                      (*((volatile unsigned int*)MSC_REG_24_reg)=data)
#define get_MSC_REG_24_reg                                            (*((volatile unsigned int*)MSC_REG_24_reg))
#define MSC_REG_24_chg24_7_shift                                      (7)
#define MSC_REG_24_chg24_6_shift                                      (6)
#define MSC_REG_24_chg24_5_shift                                      (5)
#define MSC_REG_24_chg24_4_shift                                      (4)
#define MSC_REG_24_chg24_3_shift                                      (3)
#define MSC_REG_24_chg24_2_shift                                      (2)
#define MSC_REG_24_chg24_1_shift                                      (1)
#define MSC_REG_24_chg24_0_shift                                      (0)
#define MSC_REG_24_chg24_7_mask                                       (0x00000080)
#define MSC_REG_24_chg24_6_mask                                       (0x00000040)
#define MSC_REG_24_chg24_5_mask                                       (0x00000020)
#define MSC_REG_24_chg24_4_mask                                       (0x00000010)
#define MSC_REG_24_chg24_3_mask                                       (0x00000008)
#define MSC_REG_24_chg24_2_mask                                       (0x00000004)
#define MSC_REG_24_chg24_1_mask                                       (0x00000002)
#define MSC_REG_24_chg24_0_mask                                       (0x00000001)
#define MSC_REG_24_chg24_7(data)                                      (0x00000080&((data)<<7))
#define MSC_REG_24_chg24_6(data)                                      (0x00000040&((data)<<6))
#define MSC_REG_24_chg24_5(data)                                      (0x00000020&((data)<<5))
#define MSC_REG_24_chg24_4(data)                                      (0x00000010&((data)<<4))
#define MSC_REG_24_chg24_3(data)                                      (0x00000008&((data)<<3))
#define MSC_REG_24_chg24_2(data)                                      (0x00000004&((data)<<2))
#define MSC_REG_24_chg24_1(data)                                      (0x00000002&((data)<<1))
#define MSC_REG_24_chg24_0(data)                                      (0x00000001&(data))
#define MSC_REG_24_get_chg24_7(data)                                  ((0x00000080&(data))>>7)
#define MSC_REG_24_get_chg24_6(data)                                  ((0x00000040&(data))>>6)
#define MSC_REG_24_get_chg24_5(data)                                  ((0x00000020&(data))>>5)
#define MSC_REG_24_get_chg24_4(data)                                  ((0x00000010&(data))>>4)
#define MSC_REG_24_get_chg24_3(data)                                  ((0x00000008&(data))>>3)
#define MSC_REG_24_get_chg24_2(data)                                  ((0x00000004&(data))>>2)
#define MSC_REG_24_get_chg24_1(data)                                  ((0x00000002&(data))>>1)
#define MSC_REG_24_get_chg24_0(data)                                  (0x00000001&(data))


#define MSC_REG_25                                                    0x98035094
#define MSC_REG_25_reg_addr                                           "0xd8035094"
#define MSC_REG_25_reg                                                0xd8035094
#define MSC_REG_25_inst_addr                                          "0x0025"
#define MSC_REG_25_inst                                               0x0025
#define set_MSC_REG_25_reg(data)                                      (*((volatile unsigned int*)MSC_REG_25_reg)=data)
#define get_MSC_REG_25_reg                                            (*((volatile unsigned int*)MSC_REG_25_reg))
#define MSC_REG_25_chg25_7_shift                                      (7)
#define MSC_REG_25_chg25_6_shift                                      (6)
#define MSC_REG_25_chg25_5_shift                                      (5)
#define MSC_REG_25_chg25_4_shift                                      (4)
#define MSC_REG_25_chg25_3_shift                                      (3)
#define MSC_REG_25_chg25_2_shift                                      (2)
#define MSC_REG_25_chg25_1_shift                                      (1)
#define MSC_REG_25_chg25_0_shift                                      (0)
#define MSC_REG_25_chg25_7_mask                                       (0x00000080)
#define MSC_REG_25_chg25_6_mask                                       (0x00000040)
#define MSC_REG_25_chg25_5_mask                                       (0x00000020)
#define MSC_REG_25_chg25_4_mask                                       (0x00000010)
#define MSC_REG_25_chg25_3_mask                                       (0x00000008)
#define MSC_REG_25_chg25_2_mask                                       (0x00000004)
#define MSC_REG_25_chg25_1_mask                                       (0x00000002)
#define MSC_REG_25_chg25_0_mask                                       (0x00000001)
#define MSC_REG_25_chg25_7(data)                                      (0x00000080&((data)<<7))
#define MSC_REG_25_chg25_6(data)                                      (0x00000040&((data)<<6))
#define MSC_REG_25_chg25_5(data)                                      (0x00000020&((data)<<5))
#define MSC_REG_25_chg25_4(data)                                      (0x00000010&((data)<<4))
#define MSC_REG_25_chg25_3(data)                                      (0x00000008&((data)<<3))
#define MSC_REG_25_chg25_2(data)                                      (0x00000004&((data)<<2))
#define MSC_REG_25_chg25_1(data)                                      (0x00000002&((data)<<1))
#define MSC_REG_25_chg25_0(data)                                      (0x00000001&(data))
#define MSC_REG_25_get_chg25_7(data)                                  ((0x00000080&(data))>>7)
#define MSC_REG_25_get_chg25_6(data)                                  ((0x00000040&(data))>>6)
#define MSC_REG_25_get_chg25_5(data)                                  ((0x00000020&(data))>>5)
#define MSC_REG_25_get_chg25_4(data)                                  ((0x00000010&(data))>>4)
#define MSC_REG_25_get_chg25_3(data)                                  ((0x00000008&(data))>>3)
#define MSC_REG_25_get_chg25_2(data)                                  ((0x00000004&(data))>>2)
#define MSC_REG_25_get_chg25_1(data)                                  ((0x00000002&(data))>>1)
#define MSC_REG_25_get_chg25_0(data)                                  (0x00000001&(data))


#define MSC_REG_26                                                    0x98035098
#define MSC_REG_26_reg_addr                                           "0xd8035098"
#define MSC_REG_26_reg                                                0xd8035098
#define MSC_REG_26_inst_addr                                          "0x0026"
#define MSC_REG_26_inst                                               0x0026
#define set_MSC_REG_26_reg(data)                                      (*((volatile unsigned int*)MSC_REG_26_reg)=data)
#define get_MSC_REG_26_reg                                            (*((volatile unsigned int*)MSC_REG_26_reg))
#define MSC_REG_26_chg26_7_shift                                      (7)
#define MSC_REG_26_chg26_6_shift                                      (6)
#define MSC_REG_26_chg26_5_shift                                      (5)
#define MSC_REG_26_chg26_4_shift                                      (4)
#define MSC_REG_26_chg26_3_shift                                      (3)
#define MSC_REG_26_chg26_2_shift                                      (2)
#define MSC_REG_26_chg26_1_shift                                      (1)
#define MSC_REG_26_chg26_0_shift                                      (0)
#define MSC_REG_26_chg26_7_mask                                       (0x00000080)
#define MSC_REG_26_chg26_6_mask                                       (0x00000040)
#define MSC_REG_26_chg26_5_mask                                       (0x00000020)
#define MSC_REG_26_chg26_4_mask                                       (0x00000010)
#define MSC_REG_26_chg26_3_mask                                       (0x00000008)
#define MSC_REG_26_chg26_2_mask                                       (0x00000004)
#define MSC_REG_26_chg26_1_mask                                       (0x00000002)
#define MSC_REG_26_chg26_0_mask                                       (0x00000001)
#define MSC_REG_26_chg26_7(data)                                      (0x00000080&((data)<<7))
#define MSC_REG_26_chg26_6(data)                                      (0x00000040&((data)<<6))
#define MSC_REG_26_chg26_5(data)                                      (0x00000020&((data)<<5))
#define MSC_REG_26_chg26_4(data)                                      (0x00000010&((data)<<4))
#define MSC_REG_26_chg26_3(data)                                      (0x00000008&((data)<<3))
#define MSC_REG_26_chg26_2(data)                                      (0x00000004&((data)<<2))
#define MSC_REG_26_chg26_1(data)                                      (0x00000002&((data)<<1))
#define MSC_REG_26_chg26_0(data)                                      (0x00000001&(data))
#define MSC_REG_26_get_chg26_7(data)                                  ((0x00000080&(data))>>7)
#define MSC_REG_26_get_chg26_6(data)                                  ((0x00000040&(data))>>6)
#define MSC_REG_26_get_chg26_5(data)                                  ((0x00000020&(data))>>5)
#define MSC_REG_26_get_chg26_4(data)                                  ((0x00000010&(data))>>4)
#define MSC_REG_26_get_chg26_3(data)                                  ((0x00000008&(data))>>3)
#define MSC_REG_26_get_chg26_2(data)                                  ((0x00000004&(data))>>2)
#define MSC_REG_26_get_chg26_1(data)                                  ((0x00000002&(data))>>1)
#define MSC_REG_26_get_chg26_0(data)                                  (0x00000001&(data))


#define MSC_REG_27                                                    0x9803509c
#define MSC_REG_27_reg_addr                                           "0xd803509c"
#define MSC_REG_27_reg                                                0xd803509c
#define MSC_REG_27_inst_addr                                          "0x0027"
#define MSC_REG_27_inst                                               0x0027
#define set_MSC_REG_27_reg(data)                                      (*((volatile unsigned int*)MSC_REG_27_reg)=data)
#define get_MSC_REG_27_reg                                            (*((volatile unsigned int*)MSC_REG_27_reg))
#define MSC_REG_27_chg27_7_shift                                      (7)
#define MSC_REG_27_chg27_6_shift                                      (6)
#define MSC_REG_27_chg27_5_shift                                      (5)
#define MSC_REG_27_chg27_4_shift                                      (4)
#define MSC_REG_27_chg27_3_shift                                      (3)
#define MSC_REG_27_chg27_2_shift                                      (2)
#define MSC_REG_27_chg27_1_shift                                      (1)
#define MSC_REG_27_chg27_0_shift                                      (0)
#define MSC_REG_27_chg27_7_mask                                       (0x00000080)
#define MSC_REG_27_chg27_6_mask                                       (0x00000040)
#define MSC_REG_27_chg27_5_mask                                       (0x00000020)
#define MSC_REG_27_chg27_4_mask                                       (0x00000010)
#define MSC_REG_27_chg27_3_mask                                       (0x00000008)
#define MSC_REG_27_chg27_2_mask                                       (0x00000004)
#define MSC_REG_27_chg27_1_mask                                       (0x00000002)
#define MSC_REG_27_chg27_0_mask                                       (0x00000001)
#define MSC_REG_27_chg27_7(data)                                      (0x00000080&((data)<<7))
#define MSC_REG_27_chg27_6(data)                                      (0x00000040&((data)<<6))
#define MSC_REG_27_chg27_5(data)                                      (0x00000020&((data)<<5))
#define MSC_REG_27_chg27_4(data)                                      (0x00000010&((data)<<4))
#define MSC_REG_27_chg27_3(data)                                      (0x00000008&((data)<<3))
#define MSC_REG_27_chg27_2(data)                                      (0x00000004&((data)<<2))
#define MSC_REG_27_chg27_1(data)                                      (0x00000002&((data)<<1))
#define MSC_REG_27_chg27_0(data)                                      (0x00000001&(data))
#define MSC_REG_27_get_chg27_7(data)                                  ((0x00000080&(data))>>7)
#define MSC_REG_27_get_chg27_6(data)                                  ((0x00000040&(data))>>6)
#define MSC_REG_27_get_chg27_5(data)                                  ((0x00000020&(data))>>5)
#define MSC_REG_27_get_chg27_4(data)                                  ((0x00000010&(data))>>4)
#define MSC_REG_27_get_chg27_3(data)                                  ((0x00000008&(data))>>3)
#define MSC_REG_27_get_chg27_2(data)                                  ((0x00000004&(data))>>2)
#define MSC_REG_27_get_chg27_1(data)                                  ((0x00000002&(data))>>1)
#define MSC_REG_27_get_chg27_0(data)                                  (0x00000001&(data))


#define MSC_REG_30                                                    0x980350c0
#define MSC_REG_30_reg_addr                                           "0xd80350c0"
#define MSC_REG_30_reg                                                0xd80350c0
#define MSC_REG_30_inst_addr                                          "0x0030"
#define MSC_REG_30_inst                                               0x0030
#define set_MSC_REG_30_reg(data)                                      (*((volatile unsigned int*)MSC_REG_30_reg)=data)
#define get_MSC_REG_30_reg                                            (*((volatile unsigned int*)MSC_REG_30_reg))
#define MSC_REG_30_conn_rdy_shift                                     (6)
#define MSC_REG_30_plim_stat_shift                                    (3)
#define MSC_REG_30_pow_stat_shift                                     (2)
#define MSC_REG_30_xdevcap_supp_shift                                 (1)
#define MSC_REG_30_dcap_rdy_shift                                     (0)
#define MSC_REG_30_conn_rdy_mask                                      (0x000000C0)
#define MSC_REG_30_plim_stat_mask                                     (0x00000038)
#define MSC_REG_30_pow_stat_mask                                      (0x00000004)
#define MSC_REG_30_xdevcap_supp_mask                                  (0x00000002)
#define MSC_REG_30_dcap_rdy_mask                                      (0x00000001)
#define MSC_REG_30_conn_rdy(data)                                     (0x000000C0&((data)<<6))
#define MSC_REG_30_plim_stat(data)                                    (0x00000038&((data)<<3))
#define MSC_REG_30_pow_stat(data)                                     (0x00000004&((data)<<2))
#define MSC_REG_30_xdevcap_supp(data)                                 (0x00000002&((data)<<1))
#define MSC_REG_30_dcap_rdy(data)                                     (0x00000001&(data))
#define MSC_REG_30_get_conn_rdy(data)                                 ((0x000000C0&(data))>>6)
#define MSC_REG_30_get_plim_stat(data)                                ((0x00000038&(data))>>3)
#define MSC_REG_30_get_pow_stat(data)                                 ((0x00000004&(data))>>2)
#define MSC_REG_30_get_xdevcap_supp(data)                             ((0x00000002&(data))>>1)
#define MSC_REG_30_get_dcap_rdy(data)                                 (0x00000001&(data))


#define MSC_REG_31                                                    0x980350c4
#define MSC_REG_31_reg_addr                                           "0xd80350c4"
#define MSC_REG_31_reg                                                0xd80350c4
#define MSC_REG_31_inst_addr                                          "0x0031"
#define MSC_REG_31_inst                                               0x0031
#define set_MSC_REG_31_reg(data)                                      (*((volatile unsigned int*)MSC_REG_31_reg)=data)
#define get_MSC_REG_31_reg                                            (*((volatile unsigned int*)MSC_REG_31_reg))
#define MSC_REG_31_link_mode_shift                                    (5)
#define MSC_REG_31_muted_shift                                        (4)
#define MSC_REG_31_path_en_shift                                      (3)
#define MSC_REG_31_clk_mode_shift                                     (0)
#define MSC_REG_31_link_mode_mask                                     (0x000000E0)
#define MSC_REG_31_muted_mask                                         (0x00000010)
#define MSC_REG_31_path_en_mask                                       (0x00000008)
#define MSC_REG_31_clk_mode_mask                                      (0x00000007)
#define MSC_REG_31_link_mode(data)                                    (0x000000E0&((data)<<5))
#define MSC_REG_31_muted(data)                                        (0x00000010&((data)<<4))
#define MSC_REG_31_path_en(data)                                      (0x00000008&((data)<<3))
#define MSC_REG_31_clk_mode(data)                                     (0x00000007&(data))
#define MSC_REG_31_get_link_mode(data)                                ((0x000000E0&(data))>>5)
#define MSC_REG_31_get_muted(data)                                    ((0x00000010&(data))>>4)
#define MSC_REG_31_get_path_en(data)                                  ((0x00000008&(data))>>3)
#define MSC_REG_31_get_clk_mode(data)                                 (0x00000007&(data))


#define MSC_REG_32                                                    0x980350c8
#define MSC_REG_32_reg_addr                                           "0xd80350c8"
#define MSC_REG_32_reg                                                0xd80350c8
#define MSC_REG_32_inst_addr                                          "0x0032"
#define MSC_REG_32_inst                                               0x0032
#define set_MSC_REG_32_reg(data)                                      (*((volatile unsigned int*)MSC_REG_32_reg)=data)
#define get_MSC_REG_32_reg                                            (*((volatile unsigned int*)MSC_REG_32_reg))
#define MSC_REG_32_mhl_version_stat_shift                             (0)
#define MSC_REG_32_mhl_version_stat_mask                              (0x000000FF)
#define MSC_REG_32_mhl_version_stat(data)                             (0x000000FF&(data))
#define MSC_REG_32_get_mhl_version_stat(data)                         (0x000000FF&(data))


#define MSC_REG_33                                                    0x980350cc
#define MSC_REG_33_reg_addr                                           "0xd80350cc"
#define MSC_REG_33_reg                                                0xd80350cc
#define MSC_REG_33_inst_addr                                          "0x0033"
#define MSC_REG_33_inst                                               0x0033
#define set_MSC_REG_33_reg(data)                                      (*((volatile unsigned int*)MSC_REG_33_reg)=data)
#define get_MSC_REG_33_reg                                            (*((volatile unsigned int*)MSC_REG_33_reg))
#define MSC_REG_33_stat_33_shift                                      (0)
#define MSC_REG_33_stat_33_mask                                       (0x000000FF)
#define MSC_REG_33_stat_33(data)                                      (0x000000FF&(data))
#define MSC_REG_33_get_stat_33(data)                                  (0x000000FF&(data))


#define MSC_REG_34                                                    0x980350d0
#define MSC_REG_34_reg_addr                                           "0xd80350d0"
#define MSC_REG_34_reg                                                0xd80350d0
#define MSC_REG_34_inst_addr                                          "0x0034"
#define MSC_REG_34_inst                                               0x0034
#define set_MSC_REG_34_reg(data)                                      (*((volatile unsigned int*)MSC_REG_34_reg)=data)
#define get_MSC_REG_34_reg                                            (*((volatile unsigned int*)MSC_REG_34_reg))
#define MSC_REG_34_stat_34_shift                                      (0)
#define MSC_REG_34_stat_34_mask                                       (0x000000FF)
#define MSC_REG_34_stat_34(data)                                      (0x000000FF&(data))
#define MSC_REG_34_get_stat_34(data)                                  (0x000000FF&(data))


#define MSC_REG_35                                                    0x980350d4
#define MSC_REG_35_reg_addr                                           "0xd80350d4"
#define MSC_REG_35_reg                                                0xd80350d4
#define MSC_REG_35_inst_addr                                          "0x0035"
#define MSC_REG_35_inst                                               0x0035
#define set_MSC_REG_35_reg(data)                                      (*((volatile unsigned int*)MSC_REG_35_reg)=data)
#define get_MSC_REG_35_reg                                            (*((volatile unsigned int*)MSC_REG_35_reg))
#define MSC_REG_35_stat_35_shift                                      (0)
#define MSC_REG_35_stat_35_mask                                       (0x000000FF)
#define MSC_REG_35_stat_35(data)                                      (0x000000FF&(data))
#define MSC_REG_35_get_stat_35(data)                                  (0x000000FF&(data))


#define MSC_REG_36                                                    0x980350d8
#define MSC_REG_36_reg_addr                                           "0xd80350d8"
#define MSC_REG_36_reg                                                0xd80350d8
#define MSC_REG_36_inst_addr                                          "0x0036"
#define MSC_REG_36_inst                                               0x0036
#define set_MSC_REG_36_reg(data)                                      (*((volatile unsigned int*)MSC_REG_36_reg)=data)
#define get_MSC_REG_36_reg                                            (*((volatile unsigned int*)MSC_REG_36_reg))
#define MSC_REG_36_stat_36_shift                                      (0)
#define MSC_REG_36_stat_36_mask                                       (0x000000FF)
#define MSC_REG_36_stat_36(data)                                      (0x000000FF&(data))
#define MSC_REG_36_get_stat_36(data)                                  (0x000000FF&(data))


#define MSC_REG_37                                                    0x980350dc
#define MSC_REG_37_reg_addr                                           "0xd80350dc"
#define MSC_REG_37_reg                                                0xd80350dc
#define MSC_REG_37_inst_addr                                          "0x0037"
#define MSC_REG_37_inst                                               0x0037
#define set_MSC_REG_37_reg(data)                                      (*((volatile unsigned int*)MSC_REG_37_reg)=data)
#define get_MSC_REG_37_reg                                            (*((volatile unsigned int*)MSC_REG_37_reg))
#define MSC_REG_37_stat_37_shift                                      (0)
#define MSC_REG_37_stat_37_mask                                       (0x000000FF)
#define MSC_REG_37_stat_37(data)                                      (0x000000FF&(data))
#define MSC_REG_37_get_stat_37(data)                                  (0x000000FF&(data))


#define MSC_REG_40                                                    0x98035100
#define MSC_REG_40_reg_addr                                           "0xd8035100"
#define MSC_REG_40_reg                                                0xd8035100
#define MSC_REG_40_inst_addr                                          "0x0040"
#define MSC_REG_40_inst                                               0x0040
#define set_MSC_REG_40_reg(data)                                      (*((volatile unsigned int*)MSC_REG_40_reg)=data)
#define get_MSC_REG_40_reg                                            (*((volatile unsigned int*)MSC_REG_40_reg))
#define MSC_REG_40_scratch_40_shift                                   (0)
#define MSC_REG_40_scratch_40_mask                                    (0x000000FF)
#define MSC_REG_40_scratch_40(data)                                   (0x000000FF&(data))
#define MSC_REG_40_get_scratch_40(data)                               (0x000000FF&(data))


#define MSC_REG_41                                                    0x98035104
#define MSC_REG_41_reg_addr                                           "0xd8035104"
#define MSC_REG_41_reg                                                0xd8035104
#define MSC_REG_41_inst_addr                                          "0x0041"
#define MSC_REG_41_inst                                               0x0041
#define set_MSC_REG_41_reg(data)                                      (*((volatile unsigned int*)MSC_REG_41_reg)=data)
#define get_MSC_REG_41_reg                                            (*((volatile unsigned int*)MSC_REG_41_reg))
#define MSC_REG_41_scratch_41_shift                                   (0)
#define MSC_REG_41_scratch_41_mask                                    (0x000000FF)
#define MSC_REG_41_scratch_41(data)                                   (0x000000FF&(data))
#define MSC_REG_41_get_scratch_41(data)                               (0x000000FF&(data))


#define MSC_REG_42                                                    0x98035108
#define MSC_REG_42_reg_addr                                           "0xd8035108"
#define MSC_REG_42_reg                                                0xd8035108
#define MSC_REG_42_inst_addr                                          "0x0042"
#define MSC_REG_42_inst                                               0x0042
#define set_MSC_REG_42_reg(data)                                      (*((volatile unsigned int*)MSC_REG_42_reg)=data)
#define get_MSC_REG_42_reg                                            (*((volatile unsigned int*)MSC_REG_42_reg))
#define MSC_REG_42_scratch_42_shift                                   (0)
#define MSC_REG_42_scratch_42_mask                                    (0x000000FF)
#define MSC_REG_42_scratch_42(data)                                   (0x000000FF&(data))
#define MSC_REG_42_get_scratch_42(data)                               (0x000000FF&(data))


#define MSC_REG_43                                                    0x9803510c
#define MSC_REG_43_reg_addr                                           "0xd803510c"
#define MSC_REG_43_reg                                                0xd803510c
#define MSC_REG_43_inst_addr                                          "0x0043"
#define MSC_REG_43_inst                                               0x0043
#define set_MSC_REG_43_reg(data)                                      (*((volatile unsigned int*)MSC_REG_43_reg)=data)
#define get_MSC_REG_43_reg                                            (*((volatile unsigned int*)MSC_REG_43_reg))
#define MSC_REG_43_scratch_43_shift                                   (0)
#define MSC_REG_43_scratch_43_mask                                    (0x000000FF)
#define MSC_REG_43_scratch_43(data)                                   (0x000000FF&(data))
#define MSC_REG_43_get_scratch_43(data)                               (0x000000FF&(data))


#define MSC_REG_44                                                    0x98035110
#define MSC_REG_44_reg_addr                                           "0xd8035110"
#define MSC_REG_44_reg                                                0xd8035110
#define MSC_REG_44_inst_addr                                          "0x0044"
#define MSC_REG_44_inst                                               0x0044
#define set_MSC_REG_44_reg(data)                                      (*((volatile unsigned int*)MSC_REG_44_reg)=data)
#define get_MSC_REG_44_reg                                            (*((volatile unsigned int*)MSC_REG_44_reg))
#define MSC_REG_44_scratch_44_shift                                   (0)
#define MSC_REG_44_scratch_44_mask                                    (0x000000FF)
#define MSC_REG_44_scratch_44(data)                                   (0x000000FF&(data))
#define MSC_REG_44_get_scratch_44(data)                               (0x000000FF&(data))


#define MSC_REG_45                                                    0x98035114
#define MSC_REG_45_reg_addr                                           "0xd8035114"
#define MSC_REG_45_reg                                                0xd8035114
#define MSC_REG_45_inst_addr                                          "0x0045"
#define MSC_REG_45_inst                                               0x0045
#define set_MSC_REG_45_reg(data)                                      (*((volatile unsigned int*)MSC_REG_45_reg)=data)
#define get_MSC_REG_45_reg                                            (*((volatile unsigned int*)MSC_REG_45_reg))
#define MSC_REG_45_scratch_45_shift                                   (0)
#define MSC_REG_45_scratch_45_mask                                    (0x000000FF)
#define MSC_REG_45_scratch_45(data)                                   (0x000000FF&(data))
#define MSC_REG_45_get_scratch_45(data)                               (0x000000FF&(data))


#define MSC_REG_46                                                    0x98035118
#define MSC_REG_46_reg_addr                                           "0xd8035118"
#define MSC_REG_46_reg                                                0xd8035118
#define MSC_REG_46_inst_addr                                          "0x0046"
#define MSC_REG_46_inst                                               0x0046
#define set_MSC_REG_46_reg(data)                                      (*((volatile unsigned int*)MSC_REG_46_reg)=data)
#define get_MSC_REG_46_reg                                            (*((volatile unsigned int*)MSC_REG_46_reg))
#define MSC_REG_46_scratch_46_shift                                   (0)
#define MSC_REG_46_scratch_46_mask                                    (0x000000FF)
#define MSC_REG_46_scratch_46(data)                                   (0x000000FF&(data))
#define MSC_REG_46_get_scratch_46(data)                               (0x000000FF&(data))


#define MSC_REG_47                                                    0x9803511c
#define MSC_REG_47_reg_addr                                           "0xd803511c"
#define MSC_REG_47_reg                                                0xd803511c
#define MSC_REG_47_inst_addr                                          "0x0047"
#define MSC_REG_47_inst                                               0x0047
#define set_MSC_REG_47_reg(data)                                      (*((volatile unsigned int*)MSC_REG_47_reg)=data)
#define get_MSC_REG_47_reg                                            (*((volatile unsigned int*)MSC_REG_47_reg))
#define MSC_REG_47_scratch_47_shift                                   (0)
#define MSC_REG_47_scratch_47_mask                                    (0x000000FF)
#define MSC_REG_47_scratch_47(data)                                   (0x000000FF&(data))
#define MSC_REG_47_get_scratch_47(data)                               (0x000000FF&(data))


#define MSC_REG_48                                                    0x98035120
#define MSC_REG_48_reg_addr                                           "0xd8035120"
#define MSC_REG_48_reg                                                0xd8035120
#define MSC_REG_48_inst_addr                                          "0x0048"
#define MSC_REG_48_inst                                               0x0048
#define set_MSC_REG_48_reg(data)                                      (*((volatile unsigned int*)MSC_REG_48_reg)=data)
#define get_MSC_REG_48_reg                                            (*((volatile unsigned int*)MSC_REG_48_reg))
#define MSC_REG_48_scratch_48_shift                                   (0)
#define MSC_REG_48_scratch_48_mask                                    (0x000000FF)
#define MSC_REG_48_scratch_48(data)                                   (0x000000FF&(data))
#define MSC_REG_48_get_scratch_48(data)                               (0x000000FF&(data))


#define MSC_REG_49                                                    0x98035124
#define MSC_REG_49_reg_addr                                           "0xd8035124"
#define MSC_REG_49_reg                                                0xd8035124
#define MSC_REG_49_inst_addr                                          "0x0049"
#define MSC_REG_49_inst                                               0x0049
#define set_MSC_REG_49_reg(data)                                      (*((volatile unsigned int*)MSC_REG_49_reg)=data)
#define get_MSC_REG_49_reg                                            (*((volatile unsigned int*)MSC_REG_49_reg))
#define MSC_REG_49_scratch_49_shift                                   (0)
#define MSC_REG_49_scratch_49_mask                                    (0x000000FF)
#define MSC_REG_49_scratch_49(data)                                   (0x000000FF&(data))
#define MSC_REG_49_get_scratch_49(data)                               (0x000000FF&(data))


#define MSC_REG_4A                                                    0x98035128
#define MSC_REG_4A_reg_addr                                           "0xd8035128"
#define MSC_REG_4A_reg                                                0xd8035128
#define MSC_REG_4A_inst_addr                                          "0x004A"
#define MSC_REG_4A_inst                                               0x004A
#define set_MSC_REG_4A_reg(data)                                      (*((volatile unsigned int*)MSC_REG_4A_reg)=data)
#define get_MSC_REG_4A_reg                                            (*((volatile unsigned int*)MSC_REG_4A_reg))
#define MSC_REG_4A_scratch_4a_shift                                   (0)
#define MSC_REG_4A_scratch_4a_mask                                    (0x000000FF)
#define MSC_REG_4A_scratch_4a(data)                                   (0x000000FF&(data))
#define MSC_REG_4A_get_scratch_4a(data)                               (0x000000FF&(data))


#define MSC_REG_4B                                                    0x9803512c
#define MSC_REG_4B_reg_addr                                           "0xd803512c"
#define MSC_REG_4B_reg                                                0xd803512c
#define MSC_REG_4B_inst_addr                                          "0x004B"
#define MSC_REG_4B_inst                                               0x004B
#define set_MSC_REG_4B_reg(data)                                      (*((volatile unsigned int*)MSC_REG_4B_reg)=data)
#define get_MSC_REG_4B_reg                                            (*((volatile unsigned int*)MSC_REG_4B_reg))
#define MSC_REG_4B_scratch_4b_shift                                   (0)
#define MSC_REG_4B_scratch_4b_mask                                    (0x000000FF)
#define MSC_REG_4B_scratch_4b(data)                                   (0x000000FF&(data))
#define MSC_REG_4B_get_scratch_4b(data)                               (0x000000FF&(data))


#define MSC_REG_4C                                                    0x98035130
#define MSC_REG_4C_reg_addr                                           "0xd8035130"
#define MSC_REG_4C_reg                                                0xd8035130
#define MSC_REG_4C_inst_addr                                          "0x004C"
#define MSC_REG_4C_inst                                               0x004C
#define set_MSC_REG_4C_reg(data)                                      (*((volatile unsigned int*)MSC_REG_4C_reg)=data)
#define get_MSC_REG_4C_reg                                            (*((volatile unsigned int*)MSC_REG_4C_reg))
#define MSC_REG_4C_scratch_4c_shift                                   (0)
#define MSC_REG_4C_scratch_4c_mask                                    (0x000000FF)
#define MSC_REG_4C_scratch_4c(data)                                   (0x000000FF&(data))
#define MSC_REG_4C_get_scratch_4c(data)                               (0x000000FF&(data))


#define MSC_REG_4D                                                    0x98035134
#define MSC_REG_4D_reg_addr                                           "0xd8035134"
#define MSC_REG_4D_reg                                                0xd8035134
#define MSC_REG_4D_inst_addr                                          "0x004D"
#define MSC_REG_4D_inst                                               0x004D
#define set_MSC_REG_4D_reg(data)                                      (*((volatile unsigned int*)MSC_REG_4D_reg)=data)
#define get_MSC_REG_4D_reg                                            (*((volatile unsigned int*)MSC_REG_4D_reg))
#define MSC_REG_4D_scratch_4d_shift                                   (0)
#define MSC_REG_4D_scratch_4d_mask                                    (0x000000FF)
#define MSC_REG_4D_scratch_4d(data)                                   (0x000000FF&(data))
#define MSC_REG_4D_get_scratch_4d(data)                               (0x000000FF&(data))


#define MSC_REG_4E                                                    0x98035138
#define MSC_REG_4E_reg_addr                                           "0xd8035138"
#define MSC_REG_4E_reg                                                0xd8035138
#define MSC_REG_4E_inst_addr                                          "0x004E"
#define MSC_REG_4E_inst                                               0x004E
#define set_MSC_REG_4E_reg(data)                                      (*((volatile unsigned int*)MSC_REG_4E_reg)=data)
#define get_MSC_REG_4E_reg                                            (*((volatile unsigned int*)MSC_REG_4E_reg))
#define MSC_REG_4E_scratch_4e_shift                                   (0)
#define MSC_REG_4E_scratch_4e_mask                                    (0x000000FF)
#define MSC_REG_4E_scratch_4e(data)                                   (0x000000FF&(data))
#define MSC_REG_4E_get_scratch_4e(data)                               (0x000000FF&(data))


#define MSC_REG_4F                                                    0x9803513c
#define MSC_REG_4F_reg_addr                                           "0xd803513c"
#define MSC_REG_4F_reg                                                0xd803513c
#define MSC_REG_4F_inst_addr                                          "0x004F"
#define MSC_REG_4F_inst                                               0x004F
#define set_MSC_REG_4F_reg(data)                                      (*((volatile unsigned int*)MSC_REG_4F_reg)=data)
#define get_MSC_REG_4F_reg                                            (*((volatile unsigned int*)MSC_REG_4F_reg))
#define MSC_REG_4F_scratch_4f_shift                                   (0)
#define MSC_REG_4F_scratch_4f_mask                                    (0x000000FF)
#define MSC_REG_4F_scratch_4f(data)                                   (0x000000FF&(data))
#define MSC_REG_4F_get_scratch_4f(data)                               (0x000000FF&(data))


#define MSC_REG_50                                                    0x98035140
#define MSC_REG_50_reg_addr                                           "0xd8035140"
#define MSC_REG_50_reg                                                0xd8035140
#define MSC_REG_50_inst_addr                                          "0x0050"
#define MSC_REG_50_inst                                               0x0050
#define set_MSC_REG_50_reg(data)                                      (*((volatile unsigned int*)MSC_REG_50_reg)=data)
#define get_MSC_REG_50_reg                                            (*((volatile unsigned int*)MSC_REG_50_reg))
#define MSC_REG_50_scratch_50_shift                                   (0)
#define MSC_REG_50_scratch_50_mask                                    (0x000000FF)
#define MSC_REG_50_scratch_50(data)                                   (0x000000FF&(data))
#define MSC_REG_50_get_scratch_50(data)                               (0x000000FF&(data))


#define MSC_REG_51                                                    0x98035144
#define MSC_REG_51_reg_addr                                           "0xd8035144"
#define MSC_REG_51_reg                                                0xd8035144
#define MSC_REG_51_inst_addr                                          "0x0051"
#define MSC_REG_51_inst                                               0x0051
#define set_MSC_REG_51_reg(data)                                      (*((volatile unsigned int*)MSC_REG_51_reg)=data)
#define get_MSC_REG_51_reg                                            (*((volatile unsigned int*)MSC_REG_51_reg))
#define MSC_REG_51_scratch_51_shift                                   (0)
#define MSC_REG_51_scratch_51_mask                                    (0x000000FF)
#define MSC_REG_51_scratch_51(data)                                   (0x000000FF&(data))
#define MSC_REG_51_get_scratch_51(data)                               (0x000000FF&(data))


#define MSC_REG_52                                                    0x98035148
#define MSC_REG_52_reg_addr                                           "0xd8035148"
#define MSC_REG_52_reg                                                0xd8035148
#define MSC_REG_52_inst_addr                                          "0x0052"
#define MSC_REG_52_inst                                               0x0052
#define set_MSC_REG_52_reg(data)                                      (*((volatile unsigned int*)MSC_REG_52_reg)=data)
#define get_MSC_REG_52_reg                                            (*((volatile unsigned int*)MSC_REG_52_reg))
#define MSC_REG_52_scratch_52_shift                                   (0)
#define MSC_REG_52_scratch_52_mask                                    (0x000000FF)
#define MSC_REG_52_scratch_52(data)                                   (0x000000FF&(data))
#define MSC_REG_52_get_scratch_52(data)                               (0x000000FF&(data))


#define MSC_REG_53                                                    0x9803514c
#define MSC_REG_53_reg_addr                                           "0xd803514c"
#define MSC_REG_53_reg                                                0xd803514c
#define MSC_REG_53_inst_addr                                          "0x0053"
#define MSC_REG_53_inst                                               0x0053
#define set_MSC_REG_53_reg(data)                                      (*((volatile unsigned int*)MSC_REG_53_reg)=data)
#define get_MSC_REG_53_reg                                            (*((volatile unsigned int*)MSC_REG_53_reg))
#define MSC_REG_53_scratch_53_shift                                   (0)
#define MSC_REG_53_scratch_53_mask                                    (0x000000FF)
#define MSC_REG_53_scratch_53(data)                                   (0x000000FF&(data))
#define MSC_REG_53_get_scratch_53(data)                               (0x000000FF&(data))


#define MSC_REG_54                                                    0x98035150
#define MSC_REG_54_reg_addr                                           "0xd8035150"
#define MSC_REG_54_reg                                                0xd8035150
#define MSC_REG_54_inst_addr                                          "0x0054"
#define MSC_REG_54_inst                                               0x0054
#define set_MSC_REG_54_reg(data)                                      (*((volatile unsigned int*)MSC_REG_54_reg)=data)
#define get_MSC_REG_54_reg                                            (*((volatile unsigned int*)MSC_REG_54_reg))
#define MSC_REG_54_scratch_54_shift                                   (0)
#define MSC_REG_54_scratch_54_mask                                    (0x000000FF)
#define MSC_REG_54_scratch_54(data)                                   (0x000000FF&(data))
#define MSC_REG_54_get_scratch_54(data)                               (0x000000FF&(data))


#define MSC_REG_55                                                    0x98035154
#define MSC_REG_55_reg_addr                                           "0xd8035154"
#define MSC_REG_55_reg                                                0xd8035154
#define MSC_REG_55_inst_addr                                          "0x0055"
#define MSC_REG_55_inst                                               0x0055
#define set_MSC_REG_55_reg(data)                                      (*((volatile unsigned int*)MSC_REG_55_reg)=data)
#define get_MSC_REG_55_reg                                            (*((volatile unsigned int*)MSC_REG_55_reg))
#define MSC_REG_55_scratch_55_shift                                   (0)
#define MSC_REG_55_scratch_55_mask                                    (0x000000FF)
#define MSC_REG_55_scratch_55(data)                                   (0x000000FF&(data))
#define MSC_REG_55_get_scratch_55(data)                               (0x000000FF&(data))


#define MSC_REG_56                                                    0x98035158
#define MSC_REG_56_reg_addr                                           "0xd8035158"
#define MSC_REG_56_reg                                                0xd8035158
#define MSC_REG_56_inst_addr                                          "0x0056"
#define MSC_REG_56_inst                                               0x0056
#define set_MSC_REG_56_reg(data)                                      (*((volatile unsigned int*)MSC_REG_56_reg)=data)
#define get_MSC_REG_56_reg                                            (*((volatile unsigned int*)MSC_REG_56_reg))
#define MSC_REG_56_scratch_56_shift                                   (0)
#define MSC_REG_56_scratch_56_mask                                    (0x000000FF)
#define MSC_REG_56_scratch_56(data)                                   (0x000000FF&(data))
#define MSC_REG_56_get_scratch_56(data)                               (0x000000FF&(data))


#define MSC_REG_57                                                    0x9803515c
#define MSC_REG_57_reg_addr                                           "0xd803515c"
#define MSC_REG_57_reg                                                0xd803515c
#define MSC_REG_57_inst_addr                                          "0x0057"
#define MSC_REG_57_inst                                               0x0057
#define set_MSC_REG_57_reg(data)                                      (*((volatile unsigned int*)MSC_REG_57_reg)=data)
#define get_MSC_REG_57_reg                                            (*((volatile unsigned int*)MSC_REG_57_reg))
#define MSC_REG_57_scratch_57_shift                                   (0)
#define MSC_REG_57_scratch_57_mask                                    (0x000000FF)
#define MSC_REG_57_scratch_57(data)                                   (0x000000FF&(data))
#define MSC_REG_57_get_scratch_57(data)                               (0x000000FF&(data))


#define MSC_REG_58                                                    0x98035160
#define MSC_REG_58_reg_addr                                           "0xd8035160"
#define MSC_REG_58_reg                                                0xd8035160
#define MSC_REG_58_inst_addr                                          "0x0058"
#define MSC_REG_58_inst                                               0x0058
#define set_MSC_REG_58_reg(data)                                      (*((volatile unsigned int*)MSC_REG_58_reg)=data)
#define get_MSC_REG_58_reg                                            (*((volatile unsigned int*)MSC_REG_58_reg))
#define MSC_REG_58_scratch_58_shift                                   (0)
#define MSC_REG_58_scratch_58_mask                                    (0x000000FF)
#define MSC_REG_58_scratch_58(data)                                   (0x000000FF&(data))
#define MSC_REG_58_get_scratch_58(data)                               (0x000000FF&(data))


#define MSC_REG_59                                                    0x98035164
#define MSC_REG_59_reg_addr                                           "0xd8035164"
#define MSC_REG_59_reg                                                0xd8035164
#define MSC_REG_59_inst_addr                                          "0x0059"
#define MSC_REG_59_inst                                               0x0059
#define set_MSC_REG_59_reg(data)                                      (*((volatile unsigned int*)MSC_REG_59_reg)=data)
#define get_MSC_REG_59_reg                                            (*((volatile unsigned int*)MSC_REG_59_reg))
#define MSC_REG_59_scratch_59_shift                                   (0)
#define MSC_REG_59_scratch_59_mask                                    (0x000000FF)
#define MSC_REG_59_scratch_59(data)                                   (0x000000FF&(data))
#define MSC_REG_59_get_scratch_59(data)                               (0x000000FF&(data))


#define MSC_REG_5A                                                    0x98035168
#define MSC_REG_5A_reg_addr                                           "0xd8035168"
#define MSC_REG_5A_reg                                                0xd8035168
#define MSC_REG_5A_inst_addr                                          "0x005A"
#define MSC_REG_5A_inst                                               0x005A
#define set_MSC_REG_5A_reg(data)                                      (*((volatile unsigned int*)MSC_REG_5A_reg)=data)
#define get_MSC_REG_5A_reg                                            (*((volatile unsigned int*)MSC_REG_5A_reg))
#define MSC_REG_5A_scratch_5a_shift                                   (0)
#define MSC_REG_5A_scratch_5a_mask                                    (0x000000FF)
#define MSC_REG_5A_scratch_5a(data)                                   (0x000000FF&(data))
#define MSC_REG_5A_get_scratch_5a(data)                               (0x000000FF&(data))


#define MSC_REG_5B                                                    0x9803516c
#define MSC_REG_5B_reg_addr                                           "0xd803516c"
#define MSC_REG_5B_reg                                                0xd803516c
#define MSC_REG_5B_inst_addr                                          "0x005B"
#define MSC_REG_5B_inst                                               0x005B
#define set_MSC_REG_5B_reg(data)                                      (*((volatile unsigned int*)MSC_REG_5B_reg)=data)
#define get_MSC_REG_5B_reg                                            (*((volatile unsigned int*)MSC_REG_5B_reg))
#define MSC_REG_5B_scratch_5b_shift                                   (0)
#define MSC_REG_5B_scratch_5b_mask                                    (0x000000FF)
#define MSC_REG_5B_scratch_5b(data)                                   (0x000000FF&(data))
#define MSC_REG_5B_get_scratch_5b(data)                               (0x000000FF&(data))


#define MSC_REG_5C                                                    0x98035170
#define MSC_REG_5C_reg_addr                                           "0xd8035170"
#define MSC_REG_5C_reg                                                0xd8035170
#define MSC_REG_5C_inst_addr                                          "0x005C"
#define MSC_REG_5C_inst                                               0x005C
#define set_MSC_REG_5C_reg(data)                                      (*((volatile unsigned int*)MSC_REG_5C_reg)=data)
#define get_MSC_REG_5C_reg                                            (*((volatile unsigned int*)MSC_REG_5C_reg))
#define MSC_REG_5C_scratch_5c_shift                                   (0)
#define MSC_REG_5C_scratch_5c_mask                                    (0x000000FF)
#define MSC_REG_5C_scratch_5c(data)                                   (0x000000FF&(data))
#define MSC_REG_5C_get_scratch_5c(data)                               (0x000000FF&(data))


#define MSC_REG_5D                                                    0x98035174
#define MSC_REG_5D_reg_addr                                           "0xd8035174"
#define MSC_REG_5D_reg                                                0xd8035174
#define MSC_REG_5D_inst_addr                                          "0x005D"
#define MSC_REG_5D_inst                                               0x005D
#define set_MSC_REG_5D_reg(data)                                      (*((volatile unsigned int*)MSC_REG_5D_reg)=data)
#define get_MSC_REG_5D_reg                                            (*((volatile unsigned int*)MSC_REG_5D_reg))
#define MSC_REG_5D_scratch_5d_shift                                   (0)
#define MSC_REG_5D_scratch_5d_mask                                    (0x000000FF)
#define MSC_REG_5D_scratch_5d(data)                                   (0x000000FF&(data))
#define MSC_REG_5D_get_scratch_5d(data)                               (0x000000FF&(data))


#define MSC_REG_5E                                                    0x98035178
#define MSC_REG_5E_reg_addr                                           "0xd8035178"
#define MSC_REG_5E_reg                                                0xd8035178
#define MSC_REG_5E_inst_addr                                          "0x005E"
#define MSC_REG_5E_inst                                               0x005E
#define set_MSC_REG_5E_reg(data)                                      (*((volatile unsigned int*)MSC_REG_5E_reg)=data)
#define get_MSC_REG_5E_reg                                            (*((volatile unsigned int*)MSC_REG_5E_reg))
#define MSC_REG_5E_scratch_5e_shift                                   (0)
#define MSC_REG_5E_scratch_5e_mask                                    (0x000000FF)
#define MSC_REG_5E_scratch_5e(data)                                   (0x000000FF&(data))
#define MSC_REG_5E_get_scratch_5e(data)                               (0x000000FF&(data))


#define MSC_REG_5F                                                    0x9803517c
#define MSC_REG_5F_reg_addr                                           "0xd803517c"
#define MSC_REG_5F_reg                                                0xd803517c
#define MSC_REG_5F_inst_addr                                          "0x005F"
#define MSC_REG_5F_inst                                               0x005F
#define set_MSC_REG_5F_reg(data)                                      (*((volatile unsigned int*)MSC_REG_5F_reg)=data)
#define get_MSC_REG_5F_reg                                            (*((volatile unsigned int*)MSC_REG_5F_reg))
#define MSC_REG_5F_scratch_5f_shift                                   (0)
#define MSC_REG_5F_scratch_5f_mask                                    (0x000000FF)
#define MSC_REG_5F_scratch_5f(data)                                   (0x000000FF&(data))
#define MSC_REG_5F_get_scratch_5f(data)                               (0x000000FF&(data))


#define MSC_REG_80                                                    0x98035180
#define MSC_REG_80_reg_addr                                           "0xd8035180"
#define MSC_REG_80_reg                                                0xd8035180
#define MSC_REG_80_inst_addr                                          "0x0060"
#define MSC_REG_80_inst                                               0x0060
#define set_MSC_REG_80_reg(data)                                      (*((volatile unsigned int*)MSC_REG_80_reg)=data)
#define get_MSC_REG_80_reg                                            (*((volatile unsigned int*)MSC_REG_80_reg))
#define MSC_REG_80_ecbus_spd_76_shift                                 (6)
#define MSC_REG_80_ecbus_d_8b_shift                                   (5)
#define MSC_REG_80_ecbus_d_150_shift                                  (4)
#define MSC_REG_80_ecbus_spd_3_shift                                  (3)
#define MSC_REG_80_ecbus_s_12b_shift                                  (2)
#define MSC_REG_80_ecbus_s_8b_shift                                   (1)
#define MSC_REG_80_ecbus_s_075_shift                                  (0)
#define MSC_REG_80_ecbus_spd_76_mask                                  (0x000000C0)
#define MSC_REG_80_ecbus_d_8b_mask                                    (0x00000020)
#define MSC_REG_80_ecbus_d_150_mask                                   (0x00000010)
#define MSC_REG_80_ecbus_spd_3_mask                                   (0x00000008)
#define MSC_REG_80_ecbus_s_12b_mask                                   (0x00000004)
#define MSC_REG_80_ecbus_s_8b_mask                                    (0x00000002)
#define MSC_REG_80_ecbus_s_075_mask                                   (0x00000001)
#define MSC_REG_80_ecbus_spd_76(data)                                 (0x000000C0&((data)<<6))
#define MSC_REG_80_ecbus_d_8b(data)                                   (0x00000020&((data)<<5))
#define MSC_REG_80_ecbus_d_150(data)                                  (0x00000010&((data)<<4))
#define MSC_REG_80_ecbus_spd_3(data)                                  (0x00000008&((data)<<3))
#define MSC_REG_80_ecbus_s_12b(data)                                  (0x00000004&((data)<<2))
#define MSC_REG_80_ecbus_s_8b(data)                                   (0x00000002&((data)<<1))
#define MSC_REG_80_ecbus_s_075(data)                                  (0x00000001&(data))
#define MSC_REG_80_get_ecbus_spd_76(data)                             ((0x000000C0&(data))>>6)
#define MSC_REG_80_get_ecbus_d_8b(data)                               ((0x00000020&(data))>>5)
#define MSC_REG_80_get_ecbus_d_150(data)                              ((0x00000010&(data))>>4)
#define MSC_REG_80_get_ecbus_spd_3(data)                              ((0x00000008&(data))>>3)
#define MSC_REG_80_get_ecbus_s_12b(data)                              ((0x00000004&(data))>>2)
#define MSC_REG_80_get_ecbus_s_8b(data)                               ((0x00000002&(data))>>1)
#define MSC_REG_80_get_ecbus_s_075(data)                              (0x00000001&(data))


#define MSC_REG_81                                                    0x98035184
#define MSC_REG_81_reg_addr                                           "0xd8035184"
#define MSC_REG_81_reg                                                0xd8035184
#define MSC_REG_81_inst_addr                                          "0x0061"
#define MSC_REG_81_inst                                               0x0061
#define set_MSC_REG_81_reg(data)                                      (*((volatile unsigned int*)MSC_REG_81_reg)=data)
#define get_MSC_REG_81_reg                                            (*((volatile unsigned int*)MSC_REG_81_reg))
#define MSC_REG_81_tmds_spd_shift                                     (3)
#define MSC_REG_81_tmds_600_shift                                     (2)
#define MSC_REG_81_tmds_300_shift                                     (1)
#define MSC_REG_81_tmds_150_shift                                     (0)
#define MSC_REG_81_tmds_spd_mask                                      (0x000000F8)
#define MSC_REG_81_tmds_600_mask                                      (0x00000004)
#define MSC_REG_81_tmds_300_mask                                      (0x00000002)
#define MSC_REG_81_tmds_150_mask                                      (0x00000001)
#define MSC_REG_81_tmds_spd(data)                                     (0x000000F8&((data)<<3))
#define MSC_REG_81_tmds_600(data)                                     (0x00000004&((data)<<2))
#define MSC_REG_81_tmds_300(data)                                     (0x00000002&((data)<<1))
#define MSC_REG_81_tmds_150(data)                                     (0x00000001&(data))
#define MSC_REG_81_get_tmds_spd(data)                                 ((0x000000F8&(data))>>3)
#define MSC_REG_81_get_tmds_600(data)                                 ((0x00000004&(data))>>2)
#define MSC_REG_81_get_tmds_300(data)                                 ((0x00000002&(data))>>1)
#define MSC_REG_81_get_tmds_150(data)                                 (0x00000001&(data))


#define MSC_REG_82                                                    0x98035188
#define MSC_REG_82_reg_addr                                           "0xd8035188"
#define MSC_REG_82_reg                                                0xd8035188
#define MSC_REG_82_inst_addr                                          "0x0062"
#define MSC_REG_82_inst                                               0x0062
#define set_MSC_REG_82_reg(data)                                      (*((volatile unsigned int*)MSC_REG_82_reg)=data)
#define get_MSC_REG_82_reg                                            (*((volatile unsigned int*)MSC_REG_82_reg))
#define MSC_REG_82_ecbus_dev_roles_shift                              (5)
#define MSC_REG_82_hid_dev_shift                                      (4)
#define MSC_REG_82_hid_host_shift                                     (3)
#define MSC_REG_82_dev_charger_shift                                  (2)
#define MSC_REG_82_dev_device_shift                                   (1)
#define MSC_REG_82_dev_host_shift                                     (0)
#define MSC_REG_82_ecbus_dev_roles_mask                               (0x000000E0)
#define MSC_REG_82_hid_dev_mask                                       (0x00000010)
#define MSC_REG_82_hid_host_mask                                      (0x00000008)
#define MSC_REG_82_dev_charger_mask                                   (0x00000004)
#define MSC_REG_82_dev_device_mask                                    (0x00000002)
#define MSC_REG_82_dev_host_mask                                      (0x00000001)
#define MSC_REG_82_ecbus_dev_roles(data)                              (0x000000E0&((data)<<5))
#define MSC_REG_82_hid_dev(data)                                      (0x00000010&((data)<<4))
#define MSC_REG_82_hid_host(data)                                     (0x00000008&((data)<<3))
#define MSC_REG_82_dev_charger(data)                                  (0x00000004&((data)<<2))
#define MSC_REG_82_dev_device(data)                                   (0x00000002&((data)<<1))
#define MSC_REG_82_dev_host(data)                                     (0x00000001&(data))
#define MSC_REG_82_get_ecbus_dev_roles(data)                          ((0x000000E0&(data))>>5)
#define MSC_REG_82_get_hid_dev(data)                                  ((0x00000010&(data))>>4)
#define MSC_REG_82_get_hid_host(data)                                 ((0x00000008&(data))>>3)
#define MSC_REG_82_get_dev_charger(data)                              ((0x00000004&(data))>>2)
#define MSC_REG_82_get_dev_device(data)                               ((0x00000002&(data))>>1)
#define MSC_REG_82_get_dev_host(data)                                 (0x00000001&(data))


#define MSC_REG_83                                                    0x9803518c
#define MSC_REG_83_reg_addr                                           "0xd803518c"
#define MSC_REG_83_reg                                                0xd803518c
#define MSC_REG_83_inst_addr                                          "0x0063"
#define MSC_REG_83_inst                                               0x0063
#define set_MSC_REG_83_reg(data)                                      (*((volatile unsigned int*)MSC_REG_83_reg)=data)
#define get_MSC_REG_83_reg                                            (*((volatile unsigned int*)MSC_REG_83_reg))
#define MSC_REG_83_log_dev_mapx_shift                                 (1)
#define MSC_REG_83_ld_phone_shift                                     (0)
#define MSC_REG_83_log_dev_mapx_mask                                  (0x000000FE)
#define MSC_REG_83_ld_phone_mask                                      (0x00000001)
#define MSC_REG_83_log_dev_mapx(data)                                 (0x000000FE&((data)<<1))
#define MSC_REG_83_ld_phone(data)                                     (0x00000001&(data))
#define MSC_REG_83_get_log_dev_mapx(data)                             ((0x000000FE&(data))>>1)
#define MSC_REG_83_get_ld_phone(data)                                 (0x00000001&(data))


#define MSC_REG_84                                                    0x98035190
#define MSC_REG_84_reg_addr                                           "0xd8035190"
#define MSC_REG_84_reg                                                0xd8035190
#define MSC_REG_84_inst_addr                                          "0x0064"
#define MSC_REG_84_inst                                               0x0064
#define set_MSC_REG_84_reg(data)                                      (*((volatile unsigned int*)MSC_REG_84_reg)=data)
#define get_MSC_REG_84_reg                                            (*((volatile unsigned int*)MSC_REG_84_reg))
#define MSC_REG_84_xcap_84_shift                                      (0)
#define MSC_REG_84_xcap_84_mask                                       (0x000000FF)
#define MSC_REG_84_xcap_84(data)                                      (0x000000FF&(data))
#define MSC_REG_84_get_xcap_84(data)                                  (0x000000FF&(data))


#define MSC_REG_85                                                    0x98035194
#define MSC_REG_85_reg_addr                                           "0xd8035194"
#define MSC_REG_85_reg                                                0xd8035194
#define MSC_REG_85_inst_addr                                          "0x0065"
#define MSC_REG_85_inst                                               0x0065
#define set_MSC_REG_85_reg(data)                                      (*((volatile unsigned int*)MSC_REG_85_reg)=data)
#define get_MSC_REG_85_reg                                            (*((volatile unsigned int*)MSC_REG_85_reg))
#define MSC_REG_85_xcap_85_shift                                      (0)
#define MSC_REG_85_xcap_85_mask                                       (0x000000FF)
#define MSC_REG_85_xcap_85(data)                                      (0x000000FF&(data))
#define MSC_REG_85_get_xcap_85(data)                                  (0x000000FF&(data))


#define MSC_REG_86                                                    0x98035198
#define MSC_REG_86_reg_addr                                           "0xd8035198"
#define MSC_REG_86_reg                                                0xd8035198
#define MSC_REG_86_inst_addr                                          "0x0066"
#define MSC_REG_86_inst                                               0x0066
#define set_MSC_REG_86_reg(data)                                      (*((volatile unsigned int*)MSC_REG_86_reg)=data)
#define get_MSC_REG_86_reg                                            (*((volatile unsigned int*)MSC_REG_86_reg))
#define MSC_REG_86_xcap_86_shift                                      (0)
#define MSC_REG_86_xcap_86_mask                                       (0x000000FF)
#define MSC_REG_86_xcap_86(data)                                      (0x000000FF&(data))
#define MSC_REG_86_get_xcap_86(data)                                  (0x000000FF&(data))


#define MSC_REG_87                                                    0x9803519c
#define MSC_REG_87_reg_addr                                           "0xd803519c"
#define MSC_REG_87_reg                                                0xd803519c
#define MSC_REG_87_inst_addr                                          "0x0067"
#define MSC_REG_87_inst                                               0x0067
#define set_MSC_REG_87_reg(data)                                      (*((volatile unsigned int*)MSC_REG_87_reg)=data)
#define get_MSC_REG_87_reg                                            (*((volatile unsigned int*)MSC_REG_87_reg))
#define MSC_REG_87_xcap_87_shift                                      (0)
#define MSC_REG_87_xcap_87_mask                                       (0x000000FF)
#define MSC_REG_87_xcap_87(data)                                      (0x000000FF&(data))
#define MSC_REG_87_get_xcap_87(data)                                  (0x000000FF&(data))


#define MSC_REG_88                                                    0x980351a0
#define MSC_REG_88_reg_addr                                           "0xd80351a0"
#define MSC_REG_88_reg                                                0xd80351a0
#define MSC_REG_88_inst_addr                                          "0x0068"
#define MSC_REG_88_inst                                               0x0068
#define set_MSC_REG_88_reg(data)                                      (*((volatile unsigned int*)MSC_REG_88_reg)=data)
#define get_MSC_REG_88_reg                                            (*((volatile unsigned int*)MSC_REG_88_reg))
#define MSC_REG_88_xcap_88_shift                                      (0)
#define MSC_REG_88_xcap_88_mask                                       (0x000000FF)
#define MSC_REG_88_xcap_88(data)                                      (0x000000FF&(data))
#define MSC_REG_88_get_xcap_88(data)                                  (0x000000FF&(data))


#define MSC_REG_89                                                    0x980351a4
#define MSC_REG_89_reg_addr                                           "0xd80351a4"
#define MSC_REG_89_reg                                                0xd80351a4
#define MSC_REG_89_inst_addr                                          "0x0069"
#define MSC_REG_89_inst                                               0x0069
#define set_MSC_REG_89_reg(data)                                      (*((volatile unsigned int*)MSC_REG_89_reg)=data)
#define get_MSC_REG_89_reg                                            (*((volatile unsigned int*)MSC_REG_89_reg))
#define MSC_REG_89_xcap_89_shift                                      (0)
#define MSC_REG_89_xcap_89_mask                                       (0x000000FF)
#define MSC_REG_89_xcap_89(data)                                      (0x000000FF&(data))
#define MSC_REG_89_get_xcap_89(data)                                  (0x000000FF&(data))


#define MSC_REG_8A                                                    0x980351a8
#define MSC_REG_8A_reg_addr                                           "0xd80351a8"
#define MSC_REG_8A_reg                                                0xd80351a8
#define MSC_REG_8A_inst_addr                                          "0x006A"
#define MSC_REG_8A_inst                                               0x006A
#define set_MSC_REG_8A_reg(data)                                      (*((volatile unsigned int*)MSC_REG_8A_reg)=data)
#define get_MSC_REG_8A_reg                                            (*((volatile unsigned int*)MSC_REG_8A_reg))
#define MSC_REG_8A_xcap_8a_shift                                      (0)
#define MSC_REG_8A_xcap_8a_mask                                       (0x000000FF)
#define MSC_REG_8A_xcap_8a(data)                                      (0x000000FF&(data))
#define MSC_REG_8A_get_xcap_8a(data)                                  (0x000000FF&(data))


#define MSC_REG_8B                                                    0x980351ac
#define MSC_REG_8B_reg_addr                                           "0xd80351ac"
#define MSC_REG_8B_reg                                                0xd80351ac
#define MSC_REG_8B_inst_addr                                          "0x006B"
#define MSC_REG_8B_inst                                               0x006B
#define set_MSC_REG_8B_reg(data)                                      (*((volatile unsigned int*)MSC_REG_8B_reg)=data)
#define get_MSC_REG_8B_reg                                            (*((volatile unsigned int*)MSC_REG_8B_reg))
#define MSC_REG_8B_xcap_8b_shift                                      (0)
#define MSC_REG_8B_xcap_8b_mask                                       (0x000000FF)
#define MSC_REG_8B_xcap_8b(data)                                      (0x000000FF&(data))
#define MSC_REG_8B_get_xcap_8b(data)                                  (0x000000FF&(data))


#define MSC_REG_8C                                                    0x980351b0
#define MSC_REG_8C_reg_addr                                           "0xd80351b0"
#define MSC_REG_8C_reg                                                0xd80351b0
#define MSC_REG_8C_inst_addr                                          "0x006C"
#define MSC_REG_8C_inst                                               0x006C
#define set_MSC_REG_8C_reg(data)                                      (*((volatile unsigned int*)MSC_REG_8C_reg)=data)
#define get_MSC_REG_8C_reg                                            (*((volatile unsigned int*)MSC_REG_8C_reg))
#define MSC_REG_8C_xcap_8c_shift                                      (0)
#define MSC_REG_8C_xcap_8c_mask                                       (0x000000FF)
#define MSC_REG_8C_xcap_8c(data)                                      (0x000000FF&(data))
#define MSC_REG_8C_get_xcap_8c(data)                                  (0x000000FF&(data))


#define MSC_REG_8D                                                    0x980351b4
#define MSC_REG_8D_reg_addr                                           "0xd80351b4"
#define MSC_REG_8D_reg                                                0xd80351b4
#define MSC_REG_8D_inst_addr                                          "0x006D"
#define MSC_REG_8D_inst                                               0x006D
#define set_MSC_REG_8D_reg(data)                                      (*((volatile unsigned int*)MSC_REG_8D_reg)=data)
#define get_MSC_REG_8D_reg                                            (*((volatile unsigned int*)MSC_REG_8D_reg))
#define MSC_REG_8D_xcap_8d_shift                                      (0)
#define MSC_REG_8D_xcap_8d_mask                                       (0x000000FF)
#define MSC_REG_8D_xcap_8d(data)                                      (0x000000FF&(data))
#define MSC_REG_8D_get_xcap_8d(data)                                  (0x000000FF&(data))


#define MSC_REG_8E                                                    0x980351b8
#define MSC_REG_8E_reg_addr                                           "0xd80351b8"
#define MSC_REG_8E_reg                                                0xd80351b8
#define MSC_REG_8E_inst_addr                                          "0x006E"
#define MSC_REG_8E_inst                                               0x006E
#define set_MSC_REG_8E_reg(data)                                      (*((volatile unsigned int*)MSC_REG_8E_reg)=data)
#define get_MSC_REG_8E_reg                                            (*((volatile unsigned int*)MSC_REG_8E_reg))
#define MSC_REG_8E_xcap_8e_shift                                      (0)
#define MSC_REG_8E_xcap_8e_mask                                       (0x000000FF)
#define MSC_REG_8E_xcap_8e(data)                                      (0x000000FF&(data))
#define MSC_REG_8E_get_xcap_8e(data)                                  (0x000000FF&(data))


#define MSC_REG_8F                                                    0x980351bc
#define MSC_REG_8F_reg_addr                                           "0xd80351bc"
#define MSC_REG_8F_reg                                                0xd80351bc
#define MSC_REG_8F_inst_addr                                          "0x006F"
#define MSC_REG_8F_inst                                               0x006F
#define set_MSC_REG_8F_reg(data)                                      (*((volatile unsigned int*)MSC_REG_8F_reg)=data)
#define get_MSC_REG_8F_reg                                            (*((volatile unsigned int*)MSC_REG_8F_reg))
#define MSC_REG_8F_xcap_8f_shift                                      (0)
#define MSC_REG_8F_xcap_8f_mask                                       (0x000000FF)
#define MSC_REG_8F_xcap_8f(data)                                      (0x000000FF&(data))
#define MSC_REG_8F_get_xcap_8f(data)                                  (0x000000FF&(data))


#define MSC_REG_90                                                    0x980351c0
#define MSC_REG_90_reg_addr                                           "0xd80351c0"
#define MSC_REG_90_reg                                                0xd80351c0
#define MSC_REG_90_inst_addr                                          "0x0070"
#define MSC_REG_90_inst                                               0x0070
#define set_MSC_REG_90_reg(data)                                      (*((volatile unsigned int*)MSC_REG_90_reg)=data)
#define get_MSC_REG_90_reg                                            (*((volatile unsigned int*)MSC_REG_90_reg))
#define MSC_REG_90_cur_ecbus_md_shift                                 (4)
#define MSC_REG_90_ecbus_md_shift                                     (2)
#define MSC_REG_90_slot_md_shift                                      (0)
#define MSC_REG_90_cur_ecbus_md_mask                                  (0x000000F0)
#define MSC_REG_90_ecbus_md_mask                                      (0x0000000C)
#define MSC_REG_90_slot_md_mask                                       (0x00000003)
#define MSC_REG_90_cur_ecbus_md(data)                                 (0x000000F0&((data)<<4))
#define MSC_REG_90_ecbus_md(data)                                     (0x0000000C&((data)<<2))
#define MSC_REG_90_slot_md(data)                                      (0x00000003&(data))
#define MSC_REG_90_get_cur_ecbus_md(data)                             ((0x000000F0&(data))>>4)
#define MSC_REG_90_get_ecbus_md(data)                                 ((0x0000000C&(data))>>2)
#define MSC_REG_90_get_slot_md(data)                                  (0x00000003&(data))


#define MSC_REG_91                                                    0x980351c4
#define MSC_REG_91_reg_addr                                           "0xd80351c4"
#define MSC_REG_91_reg                                                0xd80351c4
#define MSC_REG_91_inst_addr                                          "0x0071"
#define MSC_REG_91_inst                                               0x0071
#define set_MSC_REG_91_reg(data)                                      (*((volatile unsigned int*)MSC_REG_91_reg)=data)
#define get_MSC_REG_91_reg                                            (*((volatile unsigned int*)MSC_REG_91_reg))
#define MSC_REG_91_av_link_md_shift                                   (2)
#define MSC_REG_91_link_st_shift                                      (0)
#define MSC_REG_91_av_link_md_mask                                    (0x000000FC)
#define MSC_REG_91_link_st_mask                                       (0x00000003)
#define MSC_REG_91_av_link_md(data)                                   (0x000000FC&((data)<<2))
#define MSC_REG_91_link_st(data)                                      (0x00000003&(data))
#define MSC_REG_91_get_av_link_md(data)                               ((0x000000FC&(data))>>2)
#define MSC_REG_91_get_link_st(data)                                  (0x00000003&(data))


#define MSC_REG_92                                                    0x980351c8
#define MSC_REG_92_reg_addr                                           "0xd80351c8"
#define MSC_REG_92_reg                                                0xd80351c8
#define MSC_REG_92_inst_addr                                          "0x0072"
#define MSC_REG_92_inst                                               0x0072
#define set_MSC_REG_92_reg(data)                                      (*((volatile unsigned int*)MSC_REG_92_reg)=data)
#define get_MSC_REG_92_reg                                            (*((volatile unsigned int*)MSC_REG_92_reg))
#define MSC_REG_92_av_link_ctrl_shift                                 (3)
#define MSC_REG_92_link_rate_shift                                    (0)
#define MSC_REG_92_av_link_ctrl_mask                                  (0x000000F8)
#define MSC_REG_92_link_rate_mask                                     (0x00000007)
#define MSC_REG_92_av_link_ctrl(data)                                 (0x000000F8&((data)<<3))
#define MSC_REG_92_link_rate(data)                                    (0x00000007&(data))
#define MSC_REG_92_get_av_link_ctrl(data)                             ((0x000000F8&(data))>>3)
#define MSC_REG_92_get_link_rate(data)                                (0x00000007&(data))


#define MSC_REG_93                                                    0x980351cc
#define MSC_REG_93_reg_addr                                           "0xd80351cc"
#define MSC_REG_93_reg                                                0xd80351cc
#define MSC_REG_93_inst_addr                                          "0x0073"
#define MSC_REG_93_inst                                               0x0073
#define set_MSC_REG_93_reg(data)                                      (*((volatile unsigned int*)MSC_REG_93_reg)=data)
#define get_MSC_REG_93_reg                                            (*((volatile unsigned int*)MSC_REG_93_reg))
#define MSC_REG_93_sink_st_3_shift                                    (6)
#define MSC_REG_93_sink_st_2_shift                                    (4)
#define MSC_REG_93_sink_st_1_shift                                    (2)
#define MSC_REG_93_sink_st_0_shift                                    (0)
#define MSC_REG_93_sink_st_3_mask                                     (0x000000C0)
#define MSC_REG_93_sink_st_2_mask                                     (0x00000030)
#define MSC_REG_93_sink_st_1_mask                                     (0x0000000C)
#define MSC_REG_93_sink_st_0_mask                                     (0x00000003)
#define MSC_REG_93_sink_st_3(data)                                    (0x000000C0&((data)<<6))
#define MSC_REG_93_sink_st_2(data)                                    (0x00000030&((data)<<4))
#define MSC_REG_93_sink_st_1(data)                                    (0x0000000C&((data)<<2))
#define MSC_REG_93_sink_st_0(data)                                    (0x00000003&(data))
#define MSC_REG_93_get_sink_st_3(data)                                ((0x000000C0&(data))>>6)
#define MSC_REG_93_get_sink_st_2(data)                                ((0x00000030&(data))>>4)
#define MSC_REG_93_get_sink_st_1(data)                                ((0x0000000C&(data))>>2)
#define MSC_REG_93_get_sink_st_0(data)                                (0x00000003&(data))


#define MSC_REG_94                                                    0x980351d0
#define MSC_REG_94_reg_addr                                           "0xd80351d0"
#define MSC_REG_94_reg                                                0xd80351d0
#define MSC_REG_94_inst_addr                                          "0x0074"
#define MSC_REG_94_inst                                               0x0074
#define set_MSC_REG_94_reg(data)                                      (*((volatile unsigned int*)MSC_REG_94_reg)=data)
#define get_MSC_REG_94_reg                                            (*((volatile unsigned int*)MSC_REG_94_reg))
#define MSC_REG_94_xstat_94_shift                                     (0)
#define MSC_REG_94_xstat_94_mask                                      (0x000000FF)
#define MSC_REG_94_xstat_94(data)                                     (0x000000FF&(data))
#define MSC_REG_94_get_xstat_94(data)                                 (0x000000FF&(data))


#define MSC_REG_95                                                    0x980351d4
#define MSC_REG_95_reg_addr                                           "0xd80351d4"
#define MSC_REG_95_reg                                                0xd80351d4
#define MSC_REG_95_inst_addr                                          "0x0075"
#define MSC_REG_95_inst                                               0x0075
#define set_MSC_REG_95_reg(data)                                      (*((volatile unsigned int*)MSC_REG_95_reg)=data)
#define get_MSC_REG_95_reg                                            (*((volatile unsigned int*)MSC_REG_95_reg))
#define MSC_REG_95_xstat_95_shift                                     (0)
#define MSC_REG_95_xstat_95_mask                                      (0x000000FF)
#define MSC_REG_95_xstat_95(data)                                     (0x000000FF&(data))
#define MSC_REG_95_get_xstat_95(data)                                 (0x000000FF&(data))


#define MSC_REG_96                                                    0x980351d8
#define MSC_REG_96_reg_addr                                           "0xd80351d8"
#define MSC_REG_96_reg                                                0xd80351d8
#define MSC_REG_96_inst_addr                                          "0x0076"
#define MSC_REG_96_inst                                               0x0076
#define set_MSC_REG_96_reg(data)                                      (*((volatile unsigned int*)MSC_REG_96_reg)=data)
#define get_MSC_REG_96_reg                                            (*((volatile unsigned int*)MSC_REG_96_reg))
#define MSC_REG_96_xstat_96_shift                                     (0)
#define MSC_REG_96_xstat_96_mask                                      (0x000000FF)
#define MSC_REG_96_xstat_96(data)                                     (0x000000FF&(data))
#define MSC_REG_96_get_xstat_96(data)                                 (0x000000FF&(data))


#define MSC_REG_97                                                    0x980351dc
#define MSC_REG_97_reg_addr                                           "0xd80351dc"
#define MSC_REG_97_reg                                                0xd80351dc
#define MSC_REG_97_inst_addr                                          "0x0077"
#define MSC_REG_97_inst                                               0x0077
#define set_MSC_REG_97_reg(data)                                      (*((volatile unsigned int*)MSC_REG_97_reg)=data)
#define get_MSC_REG_97_reg                                            (*((volatile unsigned int*)MSC_REG_97_reg))
#define MSC_REG_97_xstat_97_shift                                     (0)
#define MSC_REG_97_xstat_97_mask                                      (0x000000FF)
#define MSC_REG_97_xstat_97(data)                                     (0x000000FF&(data))
#define MSC_REG_97_get_xstat_97(data)                                 (0x000000FF&(data))


#define MSC_REG_98                                                    0x980351e0
#define MSC_REG_98_reg_addr                                           "0xd80351e0"
#define MSC_REG_98_reg                                                0xd80351e0
#define MSC_REG_98_inst_addr                                          "0x0078"
#define MSC_REG_98_inst                                               0x0078
#define set_MSC_REG_98_reg(data)                                      (*((volatile unsigned int*)MSC_REG_98_reg)=data)
#define get_MSC_REG_98_reg                                            (*((volatile unsigned int*)MSC_REG_98_reg))
#define MSC_REG_98_xstat_98_shift                                     (0)
#define MSC_REG_98_xstat_98_mask                                      (0x000000FF)
#define MSC_REG_98_xstat_98(data)                                     (0x000000FF&(data))
#define MSC_REG_98_get_xstat_98(data)                                 (0x000000FF&(data))


#define MSC_REG_99                                                    0x980351e4
#define MSC_REG_99_reg_addr                                           "0xd80351e4"
#define MSC_REG_99_reg                                                0xd80351e4
#define MSC_REG_99_inst_addr                                          "0x0079"
#define MSC_REG_99_inst                                               0x0079
#define set_MSC_REG_99_reg(data)                                      (*((volatile unsigned int*)MSC_REG_99_reg)=data)
#define get_MSC_REG_99_reg                                            (*((volatile unsigned int*)MSC_REG_99_reg))
#define MSC_REG_99_xstat_99_shift                                     (0)
#define MSC_REG_99_xstat_99_mask                                      (0x000000FF)
#define MSC_REG_99_xstat_99(data)                                     (0x000000FF&(data))
#define MSC_REG_99_get_xstat_99(data)                                 (0x000000FF&(data))


#define MSC_REG_9A                                                    0x980351e8
#define MSC_REG_9A_reg_addr                                           "0xd80351e8"
#define MSC_REG_9A_reg                                                0xd80351e8
#define MSC_REG_9A_inst_addr                                          "0x007A"
#define MSC_REG_9A_inst                                               0x007A
#define set_MSC_REG_9A_reg(data)                                      (*((volatile unsigned int*)MSC_REG_9A_reg)=data)
#define get_MSC_REG_9A_reg                                            (*((volatile unsigned int*)MSC_REG_9A_reg))
#define MSC_REG_9A_xstat_9a_shift                                     (0)
#define MSC_REG_9A_xstat_9a_mask                                      (0x000000FF)
#define MSC_REG_9A_xstat_9a(data)                                     (0x000000FF&(data))
#define MSC_REG_9A_get_xstat_9a(data)                                 (0x000000FF&(data))


#define MSC_REG_9B                                                    0x980351ec
#define MSC_REG_9B_reg_addr                                           "0xd80351ec"
#define MSC_REG_9B_reg                                                0xd80351ec
#define MSC_REG_9B_inst_addr                                          "0x007B"
#define MSC_REG_9B_inst                                               0x007B
#define set_MSC_REG_9B_reg(data)                                      (*((volatile unsigned int*)MSC_REG_9B_reg)=data)
#define get_MSC_REG_9B_reg                                            (*((volatile unsigned int*)MSC_REG_9B_reg))
#define MSC_REG_9B_xstat_9b_shift                                     (0)
#define MSC_REG_9B_xstat_9b_mask                                      (0x000000FF)
#define MSC_REG_9B_xstat_9b(data)                                     (0x000000FF&(data))
#define MSC_REG_9B_get_xstat_9b(data)                                 (0x000000FF&(data))


#define MSC_REG_9C                                                    0x980351f0
#define MSC_REG_9C_reg_addr                                           "0xd80351f0"
#define MSC_REG_9C_reg                                                0xd80351f0
#define MSC_REG_9C_inst_addr                                          "0x007C"
#define MSC_REG_9C_inst                                               0x007C
#define set_MSC_REG_9C_reg(data)                                      (*((volatile unsigned int*)MSC_REG_9C_reg)=data)
#define get_MSC_REG_9C_reg                                            (*((volatile unsigned int*)MSC_REG_9C_reg))
#define MSC_REG_9C_xstat_9c_shift                                     (0)
#define MSC_REG_9C_xstat_9c_mask                                      (0x000000FF)
#define MSC_REG_9C_xstat_9c(data)                                     (0x000000FF&(data))
#define MSC_REG_9C_get_xstat_9c(data)                                 (0x000000FF&(data))


#define MSC_REG_9D                                                    0x980351f4
#define MSC_REG_9D_reg_addr                                           "0xd80351f4"
#define MSC_REG_9D_reg                                                0xd80351f4
#define MSC_REG_9D_inst_addr                                          "0x007D"
#define MSC_REG_9D_inst                                               0x007D
#define set_MSC_REG_9D_reg(data)                                      (*((volatile unsigned int*)MSC_REG_9D_reg)=data)
#define get_MSC_REG_9D_reg                                            (*((volatile unsigned int*)MSC_REG_9D_reg))
#define MSC_REG_9D_xstat_9d_shift                                     (0)
#define MSC_REG_9D_xstat_9d_mask                                      (0x000000FF)
#define MSC_REG_9D_xstat_9d(data)                                     (0x000000FF&(data))
#define MSC_REG_9D_get_xstat_9d(data)                                 (0x000000FF&(data))


#define MSC_REG_9E                                                    0x980351f8
#define MSC_REG_9E_reg_addr                                           "0xd80351f8"
#define MSC_REG_9E_reg                                                0xd80351f8
#define MSC_REG_9E_inst_addr                                          "0x007E"
#define MSC_REG_9E_inst                                               0x007E
#define set_MSC_REG_9E_reg(data)                                      (*((volatile unsigned int*)MSC_REG_9E_reg)=data)
#define get_MSC_REG_9E_reg                                            (*((volatile unsigned int*)MSC_REG_9E_reg))
#define MSC_REG_9E_xstat_9e_shift                                     (0)
#define MSC_REG_9E_xstat_9e_mask                                      (0x000000FF)
#define MSC_REG_9E_xstat_9e(data)                                     (0x000000FF&(data))
#define MSC_REG_9E_get_xstat_9e(data)                                 (0x000000FF&(data))


#define MSC_REG_9F                                                    0x980351fc
#define MSC_REG_9F_reg_addr                                           "0xd80351fc"
#define MSC_REG_9F_reg                                                0xd80351fc
#define MSC_REG_9F_inst_addr                                          "0x007F"
#define MSC_REG_9F_inst                                               0x007F
#define set_MSC_REG_9F_reg(data)                                      (*((volatile unsigned int*)MSC_REG_9F_reg)=data)
#define get_MSC_REG_9F_reg                                            (*((volatile unsigned int*)MSC_REG_9F_reg))
#define MSC_REG_9F_xstat_9f_shift                                     (0)
#define MSC_REG_9F_xstat_9f_mask                                      (0x000000FF)
#define MSC_REG_9F_xstat_9f(data)                                     (0x000000FF&(data))
#define MSC_REG_9F_get_xstat_9f(data)                                 (0x000000FF&(data))


#define MSC_REG_A0                                                    0x98035340
#define MSC_REG_A0_reg_addr                                           "0xd8035340"
#define MSC_REG_A0_reg                                                0xd8035340
#define MSC_REG_A0_inst_addr                                          "0x00D0"
#define MSC_REG_A0_inst                                               0x00D0
#define set_MSC_REG_A0_reg(data)                                      (*((volatile unsigned int*)MSC_REG_A0_reg)=data)
#define get_MSC_REG_A0_reg                                            (*((volatile unsigned int*)MSC_REG_A0_reg))
#define MSC_REG_A0_xstat_a0_shift                                     (0)
#define MSC_REG_A0_xstat_a0_mask                                      (0x000000FF)
#define MSC_REG_A0_xstat_a0(data)                                     (0x000000FF&(data))
#define MSC_REG_A0_get_xstat_a0(data)                                 (0x000000FF&(data))


#define MSC_REG_A1                                                    0x98035344
#define MSC_REG_A1_reg_addr                                           "0xd8035344"
#define MSC_REG_A1_reg                                                0xd8035344
#define MSC_REG_A1_inst_addr                                          "0x00D1"
#define MSC_REG_A1_inst                                               0x00D1
#define set_MSC_REG_A1_reg(data)                                      (*((volatile unsigned int*)MSC_REG_A1_reg)=data)
#define get_MSC_REG_A1_reg                                            (*((volatile unsigned int*)MSC_REG_A1_reg))
#define MSC_REG_A1_xstat_a1_shift                                     (0)
#define MSC_REG_A1_xstat_a1_mask                                      (0x000000FF)
#define MSC_REG_A1_xstat_a1(data)                                     (0x000000FF&(data))
#define MSC_REG_A1_get_xstat_a1(data)                                 (0x000000FF&(data))


#define MSC_REG_A2                                                    0x98035348
#define MSC_REG_A2_reg_addr                                           "0xd8035348"
#define MSC_REG_A2_reg                                                0xd8035348
#define MSC_REG_A2_inst_addr                                          "0x00D2"
#define MSC_REG_A2_inst                                               0x00D2
#define set_MSC_REG_A2_reg(data)                                      (*((volatile unsigned int*)MSC_REG_A2_reg)=data)
#define get_MSC_REG_A2_reg                                            (*((volatile unsigned int*)MSC_REG_A2_reg))
#define MSC_REG_A2_xstat_a2_shift                                     (0)
#define MSC_REG_A2_xstat_a2_mask                                      (0x000000FF)
#define MSC_REG_A2_xstat_a2(data)                                     (0x000000FF&(data))
#define MSC_REG_A2_get_xstat_a2(data)                                 (0x000000FF&(data))


#define MSC_REG_A3                                                    0x9803534c
#define MSC_REG_A3_reg_addr                                           "0xd803534c"
#define MSC_REG_A3_reg                                                0xd803534c
#define MSC_REG_A3_inst_addr                                          "0x00D3"
#define MSC_REG_A3_inst                                               0x00D3
#define set_MSC_REG_A3_reg(data)                                      (*((volatile unsigned int*)MSC_REG_A3_reg)=data)
#define get_MSC_REG_A3_reg                                            (*((volatile unsigned int*)MSC_REG_A3_reg))
#define MSC_REG_A3_xstat_a3_shift                                     (0)
#define MSC_REG_A3_xstat_a3_mask                                      (0x000000FF)
#define MSC_REG_A3_xstat_a3(data)                                     (0x000000FF&(data))
#define MSC_REG_A3_get_xstat_a3(data)                                 (0x000000FF&(data))


#define MSC_REG_A4                                                    0x98035350
#define MSC_REG_A4_reg_addr                                           "0xd8035350"
#define MSC_REG_A4_reg                                                0xd8035350
#define MSC_REG_A4_inst_addr                                          "0x00D4"
#define MSC_REG_A4_inst                                               0x00D4
#define set_MSC_REG_A4_reg(data)                                      (*((volatile unsigned int*)MSC_REG_A4_reg)=data)
#define get_MSC_REG_A4_reg                                            (*((volatile unsigned int*)MSC_REG_A4_reg))
#define MSC_REG_A4_xstat_a4_shift                                     (0)
#define MSC_REG_A4_xstat_a4_mask                                      (0x000000FF)
#define MSC_REG_A4_xstat_a4(data)                                     (0x000000FF&(data))
#define MSC_REG_A4_get_xstat_a4(data)                                 (0x000000FF&(data))


#define MSC_REG_A5                                                    0x98035354
#define MSC_REG_A5_reg_addr                                           "0xd8035354"
#define MSC_REG_A5_reg                                                0xd8035354
#define MSC_REG_A5_inst_addr                                          "0x00D5"
#define MSC_REG_A5_inst                                               0x00D5
#define set_MSC_REG_A5_reg(data)                                      (*((volatile unsigned int*)MSC_REG_A5_reg)=data)
#define get_MSC_REG_A5_reg                                            (*((volatile unsigned int*)MSC_REG_A5_reg))
#define MSC_REG_A5_xstat_a5_shift                                     (0)
#define MSC_REG_A5_xstat_a5_mask                                      (0x000000FF)
#define MSC_REG_A5_xstat_a5(data)                                     (0x000000FF&(data))
#define MSC_REG_A5_get_xstat_a5(data)                                 (0x000000FF&(data))


#define MSC_REG_A6                                                    0x98035358
#define MSC_REG_A6_reg_addr                                           "0xd8035358"
#define MSC_REG_A6_reg                                                0xd8035358
#define MSC_REG_A6_inst_addr                                          "0x00D6"
#define MSC_REG_A6_inst                                               0x00D6
#define set_MSC_REG_A6_reg(data)                                      (*((volatile unsigned int*)MSC_REG_A6_reg)=data)
#define get_MSC_REG_A6_reg                                            (*((volatile unsigned int*)MSC_REG_A6_reg))
#define MSC_REG_A6_xstat_a6_shift                                     (0)
#define MSC_REG_A6_xstat_a6_mask                                      (0x000000FF)
#define MSC_REG_A6_xstat_a6(data)                                     (0x000000FF&(data))
#define MSC_REG_A6_get_xstat_a6(data)                                 (0x000000FF&(data))


#define MSC_REG_A7                                                    0x9803535c
#define MSC_REG_A7_reg_addr                                           "0xd803535c"
#define MSC_REG_A7_reg                                                0xd803535c
#define MSC_REG_A7_inst_addr                                          "0x00D7"
#define MSC_REG_A7_inst                                               0x00D7
#define set_MSC_REG_A7_reg(data)                                      (*((volatile unsigned int*)MSC_REG_A7_reg)=data)
#define get_MSC_REG_A7_reg                                            (*((volatile unsigned int*)MSC_REG_A7_reg))
#define MSC_REG_A7_xstat_a7_shift                                     (0)
#define MSC_REG_A7_xstat_a7_mask                                      (0x000000FF)
#define MSC_REG_A7_xstat_a7(data)                                     (0x000000FF&(data))
#define MSC_REG_A7_get_xstat_a7(data)                                 (0x000000FF&(data))


#define MSC_REG_A8                                                    0x98035360
#define MSC_REG_A8_reg_addr                                           "0xd8035360"
#define MSC_REG_A8_reg                                                0xd8035360
#define MSC_REG_A8_inst_addr                                          "0x00D8"
#define MSC_REG_A8_inst                                               0x00D8
#define set_MSC_REG_A8_reg(data)                                      (*((volatile unsigned int*)MSC_REG_A8_reg)=data)
#define get_MSC_REG_A8_reg                                            (*((volatile unsigned int*)MSC_REG_A8_reg))
#define MSC_REG_A8_xstat_a8_shift                                     (0)
#define MSC_REG_A8_xstat_a8_mask                                      (0x000000FF)
#define MSC_REG_A8_xstat_a8(data)                                     (0x000000FF&(data))
#define MSC_REG_A8_get_xstat_a8(data)                                 (0x000000FF&(data))


#define MSC_REG_A9                                                    0x98035364
#define MSC_REG_A9_reg_addr                                           "0xd8035364"
#define MSC_REG_A9_reg                                                0xd8035364
#define MSC_REG_A9_inst_addr                                          "0x00D9"
#define MSC_REG_A9_inst                                               0x00D9
#define set_MSC_REG_A9_reg(data)                                      (*((volatile unsigned int*)MSC_REG_A9_reg)=data)
#define get_MSC_REG_A9_reg                                            (*((volatile unsigned int*)MSC_REG_A9_reg))
#define MSC_REG_A9_xstat_a9_shift                                     (0)
#define MSC_REG_A9_xstat_a9_mask                                      (0x000000FF)
#define MSC_REG_A9_xstat_a9(data)                                     (0x000000FF&(data))
#define MSC_REG_A9_get_xstat_a9(data)                                 (0x000000FF&(data))


#define MSC_REG_AA                                                    0x98035368
#define MSC_REG_AA_reg_addr                                           "0xd8035368"
#define MSC_REG_AA_reg                                                0xd8035368
#define MSC_REG_AA_inst_addr                                          "0x00DA"
#define MSC_REG_AA_inst                                               0x00DA
#define set_MSC_REG_AA_reg(data)                                      (*((volatile unsigned int*)MSC_REG_AA_reg)=data)
#define get_MSC_REG_AA_reg                                            (*((volatile unsigned int*)MSC_REG_AA_reg))
#define MSC_REG_AA_xstat_aa_shift                                     (0)
#define MSC_REG_AA_xstat_aa_mask                                      (0x000000FF)
#define MSC_REG_AA_xstat_aa(data)                                     (0x000000FF&(data))
#define MSC_REG_AA_get_xstat_aa(data)                                 (0x000000FF&(data))


#define MSC_REG_AB                                                    0x9803536c
#define MSC_REG_AB_reg_addr                                           "0xd803536c"
#define MSC_REG_AB_reg                                                0xd803536c
#define MSC_REG_AB_inst_addr                                          "0x00DB"
#define MSC_REG_AB_inst                                               0x00DB
#define set_MSC_REG_AB_reg(data)                                      (*((volatile unsigned int*)MSC_REG_AB_reg)=data)
#define get_MSC_REG_AB_reg                                            (*((volatile unsigned int*)MSC_REG_AB_reg))
#define MSC_REG_AB_xstat_ab_shift                                     (0)
#define MSC_REG_AB_xstat_ab_mask                                      (0x000000FF)
#define MSC_REG_AB_xstat_ab(data)                                     (0x000000FF&(data))
#define MSC_REG_AB_get_xstat_ab(data)                                 (0x000000FF&(data))


#define MSC_REG_AC                                                    0x98035370
#define MSC_REG_AC_reg_addr                                           "0xd8035370"
#define MSC_REG_AC_reg                                                0xd8035370
#define MSC_REG_AC_inst_addr                                          "0x00DC"
#define MSC_REG_AC_inst                                               0x00DC
#define set_MSC_REG_AC_reg(data)                                      (*((volatile unsigned int*)MSC_REG_AC_reg)=data)
#define get_MSC_REG_AC_reg                                            (*((volatile unsigned int*)MSC_REG_AC_reg))
#define MSC_REG_AC_xstat_ac_shift                                     (0)
#define MSC_REG_AC_xstat_ac_mask                                      (0x000000FF)
#define MSC_REG_AC_xstat_ac(data)                                     (0x000000FF&(data))
#define MSC_REG_AC_get_xstat_ac(data)                                 (0x000000FF&(data))


#define MSC_REG_AD                                                    0x98035374
#define MSC_REG_AD_reg_addr                                           "0xd8035374"
#define MSC_REG_AD_reg                                                0xd8035374
#define MSC_REG_AD_inst_addr                                          "0x00DD"
#define MSC_REG_AD_inst                                               0x00DD
#define set_MSC_REG_AD_reg(data)                                      (*((volatile unsigned int*)MSC_REG_AD_reg)=data)
#define get_MSC_REG_AD_reg                                            (*((volatile unsigned int*)MSC_REG_AD_reg))
#define MSC_REG_AD_xstat_ad_shift                                     (0)
#define MSC_REG_AD_xstat_ad_mask                                      (0x000000FF)
#define MSC_REG_AD_xstat_ad(data)                                     (0x000000FF&(data))
#define MSC_REG_AD_get_xstat_ad(data)                                 (0x000000FF&(data))


#define MSC_REG_AE                                                    0x98035378
#define MSC_REG_AE_reg_addr                                           "0xd8035378"
#define MSC_REG_AE_reg                                                0xd8035378
#define MSC_REG_AE_inst_addr                                          "0x00DE"
#define MSC_REG_AE_inst                                               0x00DE
#define set_MSC_REG_AE_reg(data)                                      (*((volatile unsigned int*)MSC_REG_AE_reg)=data)
#define get_MSC_REG_AE_reg                                            (*((volatile unsigned int*)MSC_REG_AE_reg))
#define MSC_REG_AE_xstat_ae_shift                                     (0)
#define MSC_REG_AE_xstat_ae_mask                                      (0x000000FF)
#define MSC_REG_AE_xstat_ae(data)                                     (0x000000FF&(data))
#define MSC_REG_AE_get_xstat_ae(data)                                 (0x000000FF&(data))


#define MSC_REG_AF                                                    0x9803537c
#define MSC_REG_AF_reg_addr                                           "0xd803537c"
#define MSC_REG_AF_reg                                                0xd803537c
#define MSC_REG_AF_inst_addr                                          "0x00DF"
#define MSC_REG_AF_inst                                               0x00DF
#define set_MSC_REG_AF_reg(data)                                      (*((volatile unsigned int*)MSC_REG_AF_reg)=data)
#define get_MSC_REG_AF_reg                                            (*((volatile unsigned int*)MSC_REG_AF_reg))
#define MSC_REG_AF_xstat_af_shift                                     (0)
#define MSC_REG_AF_xstat_af_mask                                      (0x000000FF)
#define MSC_REG_AF_xstat_af(data)                                     (0x000000FF&(data))
#define MSC_REG_AF_get_xstat_af(data)                                 (0x000000FF&(data))


#define CBUS_LINK_00                                                  0x98035200
#define CBUS_LINK_00_reg_addr                                         "0xd8035200"
#define CBUS_LINK_00_reg                                              0xd8035200
#define CBUS_LINK_00_inst_addr                                        "0x0080"
#define CBUS_LINK_00_inst                                             0x0080
#define set_CBUS_LINK_00_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_00_reg)=data)
#define get_CBUS_LINK_00_reg                                          (*((volatile unsigned int*)CBUS_LINK_00_reg))
#define CBUS_LINK_00_sync0_hb_8_0_shift                               (9)
#define CBUS_LINK_00_sync0_lb_8_0_shift                               (0)
#define CBUS_LINK_00_sync0_hb_8_0_mask                                (0x0003FE00)
#define CBUS_LINK_00_sync0_lb_8_0_mask                                (0x000001FF)
#define CBUS_LINK_00_sync0_hb_8_0(data)                               (0x0003FE00&((data)<<9))
#define CBUS_LINK_00_sync0_lb_8_0(data)                               (0x000001FF&(data))
#define CBUS_LINK_00_get_sync0_hb_8_0(data)                           ((0x0003FE00&(data))>>9)
#define CBUS_LINK_00_get_sync0_lb_8_0(data)                           (0x000001FF&(data))


#define CBUS_LINK_01                                                  0x98035204
#define CBUS_LINK_01_reg_addr                                         "0xd8035204"
#define CBUS_LINK_01_reg                                              0xd8035204
#define CBUS_LINK_01_inst_addr                                        "0x0081"
#define CBUS_LINK_01_inst                                             0x0081
#define set_CBUS_LINK_01_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_01_reg)=data)
#define get_CBUS_LINK_01_reg                                          (*((volatile unsigned int*)CBUS_LINK_01_reg))
#define CBUS_LINK_01_sync1_hb_7_0_shift                               (8)
#define CBUS_LINK_01_sync1_lb_7_0_shift                               (0)
#define CBUS_LINK_01_sync1_hb_7_0_mask                                (0x0000FF00)
#define CBUS_LINK_01_sync1_lb_7_0_mask                                (0x000000FF)
#define CBUS_LINK_01_sync1_hb_7_0(data)                               (0x0000FF00&((data)<<8))
#define CBUS_LINK_01_sync1_lb_7_0(data)                               (0x000000FF&(data))
#define CBUS_LINK_01_get_sync1_hb_7_0(data)                           ((0x0000FF00&(data))>>8)
#define CBUS_LINK_01_get_sync1_lb_7_0(data)                           (0x000000FF&(data))


#define CBUS_LINK_02                                                  0x98035208
#define CBUS_LINK_02_reg_addr                                         "0xd8035208"
#define CBUS_LINK_02_reg                                              0xd8035208
#define CBUS_LINK_02_inst_addr                                        "0x0082"
#define CBUS_LINK_02_inst                                             0x0082
#define set_CBUS_LINK_02_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_02_reg)=data)
#define get_CBUS_LINK_02_reg                                          (*((volatile unsigned int*)CBUS_LINK_02_reg))
#define CBUS_LINK_02_sync_bit_time_shift                              (0)
#define CBUS_LINK_02_sync_bit_time_mask                               (0x000000FF)
#define CBUS_LINK_02_sync_bit_time(data)                              (0x000000FF&(data))
#define CBUS_LINK_02_get_sync_bit_time(data)                          (0x000000FF&(data))


#define CBUS_LINK_03                                                  0x9803520c
#define CBUS_LINK_03_reg_addr                                         "0xd803520c"
#define CBUS_LINK_03_reg                                              0xd803520c
#define CBUS_LINK_03_inst_addr                                        "0x0083"
#define CBUS_LINK_03_inst                                             0x0083
#define set_CBUS_LINK_03_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_03_reg)=data)
#define get_CBUS_LINK_03_reg                                          (*((volatile unsigned int*)CBUS_LINK_03_reg))
#define CBUS_LINK_03_abs_thres_en_shift                               (8)
#define CBUS_LINK_03_abs_threshold_shift                              (0)
#define CBUS_LINK_03_abs_thres_en_mask                                (0x00000100)
#define CBUS_LINK_03_abs_threshold_mask                               (0x000000FF)
#define CBUS_LINK_03_abs_thres_en(data)                               (0x00000100&((data)<<8))
#define CBUS_LINK_03_abs_threshold(data)                              (0x000000FF&(data))
#define CBUS_LINK_03_get_abs_thres_en(data)                           ((0x00000100&(data))>>8)
#define CBUS_LINK_03_get_abs_threshold(data)                          (0x000000FF&(data))


#define CBUS_LINK_04                                                  0x98035210
#define CBUS_LINK_04_reg_addr                                         "0xd8035210"
#define CBUS_LINK_04_reg                                              0xd8035210
#define CBUS_LINK_04_inst_addr                                        "0x0084"
#define CBUS_LINK_04_inst                                             0x0084
#define set_CBUS_LINK_04_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_04_reg)=data)
#define get_CBUS_LINK_04_reg                                          (*((volatile unsigned int*)CBUS_LINK_04_reg))
#define CBUS_LINK_04_parity_time_shift                                (0)
#define CBUS_LINK_04_parity_time_mask                                 (0x000000FF)
#define CBUS_LINK_04_parity_time(data)                                (0x000000FF&(data))
#define CBUS_LINK_04_get_parity_time(data)                            (0x000000FF&(data))


#define CBUS_LINK_05                                                  0x98035214
#define CBUS_LINK_05_reg_addr                                         "0xd8035214"
#define CBUS_LINK_05_reg                                              0xd8035214
#define CBUS_LINK_05_inst_addr                                        "0x0085"
#define CBUS_LINK_05_inst                                             0x0085
#define set_CBUS_LINK_05_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_05_reg)=data)
#define get_CBUS_LINK_05_reg                                          (*((volatile unsigned int*)CBUS_LINK_05_reg))
#define CBUS_LINK_05_parity_fail_shift                                (7)
#define CBUS_LINK_05_parity_irq_en_shift                              (6)
#define CBUS_LINK_05_ctrl_16_resv_shift                               (5)
#define CBUS_LINK_05_parity_limit_shift                               (0)
#define CBUS_LINK_05_parity_fail_mask                                 (0x00000080)
#define CBUS_LINK_05_parity_irq_en_mask                               (0x00000040)
#define CBUS_LINK_05_ctrl_16_resv_mask                                (0x00000020)
#define CBUS_LINK_05_parity_limit_mask                                (0x0000001F)
#define CBUS_LINK_05_parity_fail(data)                                (0x00000080&((data)<<7))
#define CBUS_LINK_05_parity_irq_en(data)                              (0x00000040&((data)<<6))
#define CBUS_LINK_05_ctrl_16_resv(data)                               (0x00000020&((data)<<5))
#define CBUS_LINK_05_parity_limit(data)                               (0x0000001F&(data))
#define CBUS_LINK_05_get_parity_fail(data)                            ((0x00000080&(data))>>7)
#define CBUS_LINK_05_get_parity_irq_en(data)                          ((0x00000040&(data))>>6)
#define CBUS_LINK_05_get_ctrl_16_resv(data)                           ((0x00000020&(data))>>5)
#define CBUS_LINK_05_get_parity_limit(data)                           (0x0000001F&(data))


#define CBUS_LINK_06                                                  0x98035218
#define CBUS_LINK_06_reg_addr                                         "0xd8035218"
#define CBUS_LINK_06_reg                                              0xd8035218
#define CBUS_LINK_06_inst_addr                                        "0x0086"
#define CBUS_LINK_06_inst                                             0x0086
#define set_CBUS_LINK_06_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_06_reg)=data)
#define get_CBUS_LINK_06_reg                                          (*((volatile unsigned int*)CBUS_LINK_06_reg))
#define CBUS_LINK_06_ack_fall_shift                                   (0)
#define CBUS_LINK_06_ack_fall_mask                                    (0x0000007F)
#define CBUS_LINK_06_ack_fall(data)                                   (0x0000007F&(data))
#define CBUS_LINK_06_get_ack_fall(data)                               (0x0000007F&(data))


#define CBUS_LINK_07                                                  0x9803521c
#define CBUS_LINK_07_reg_addr                                         "0xd803521c"
#define CBUS_LINK_07_reg                                              0xd803521c
#define CBUS_LINK_07_inst_addr                                        "0x0087"
#define CBUS_LINK_07_inst                                             0x0087
#define set_CBUS_LINK_07_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_07_reg)=data)
#define get_CBUS_LINK_07_reg                                          (*((volatile unsigned int*)CBUS_LINK_07_reg))
#define CBUS_LINK_07_ack_0_shift                                      (0)
#define CBUS_LINK_07_ack_0_mask                                       (0x0000007F)
#define CBUS_LINK_07_ack_0(data)                                      (0x0000007F&(data))
#define CBUS_LINK_07_get_ack_0(data)                                  (0x0000007F&(data))


#define CBUS_LINK_08                                                  0x98035220
#define CBUS_LINK_08_reg_addr                                         "0xd8035220"
#define CBUS_LINK_08_reg                                              0xd8035220
#define CBUS_LINK_08_inst_addr                                        "0x0088"
#define CBUS_LINK_08_inst                                             0x0088
#define set_CBUS_LINK_08_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_08_reg)=data)
#define get_CBUS_LINK_08_reg                                          (*((volatile unsigned int*)CBUS_LINK_08_reg))
#define CBUS_LINK_08_tx_bit_time_shift                                (0)
#define CBUS_LINK_08_tx_bit_time_mask                                 (0x000000FF)
#define CBUS_LINK_08_tx_bit_time(data)                                (0x000000FF&(data))
#define CBUS_LINK_08_get_tx_bit_time(data)                            (0x000000FF&(data))


#define CBUS_LINK_09                                                  0x98035224
#define CBUS_LINK_09_reg_addr                                         "0xd8035224"
#define CBUS_LINK_09_reg                                              0xd8035224
#define CBUS_LINK_09_inst_addr                                        "0x0089"
#define CBUS_LINK_09_inst                                             0x0089
#define set_CBUS_LINK_09_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_09_reg)=data)
#define get_CBUS_LINK_09_reg                                          (*((volatile unsigned int*)CBUS_LINK_09_reg))
#define CBUS_LINK_09_tx_ack_div2_shift                                (8)
#define CBUS_LINK_09_chk_win_up_shift                                 (5)
#define CBUS_LINK_09_chk_win_lo_shift                                 (3)
#define CBUS_LINK_09_fast_reply_en_shift                              (2)
#define CBUS_LINK_09_ctrl_1b_resv_shift                               (0)
#define CBUS_LINK_09_tx_ack_div2_mask                                 (0x00000100)
#define CBUS_LINK_09_chk_win_up_mask                                  (0x000000E0)
#define CBUS_LINK_09_chk_win_lo_mask                                  (0x00000018)
#define CBUS_LINK_09_fast_reply_en_mask                               (0x00000004)
#define CBUS_LINK_09_ctrl_1b_resv_mask                                (0x00000003)
#define CBUS_LINK_09_tx_ack_div2(data)                                (0x00000100&((data)<<8))
#define CBUS_LINK_09_chk_win_up(data)                                 (0x000000E0&((data)<<5))
#define CBUS_LINK_09_chk_win_lo(data)                                 (0x00000018&((data)<<3))
#define CBUS_LINK_09_fast_reply_en(data)                              (0x00000004&((data)<<2))
#define CBUS_LINK_09_ctrl_1b_resv(data)                               (0x00000003&(data))
#define CBUS_LINK_09_get_tx_ack_div2(data)                            ((0x00000100&(data))>>8)
#define CBUS_LINK_09_get_chk_win_up(data)                             ((0x000000E0&(data))>>5)
#define CBUS_LINK_09_get_chk_win_lo(data)                             ((0x00000018&(data))>>3)
#define CBUS_LINK_09_get_fast_reply_en(data)                          ((0x00000004&(data))>>2)
#define CBUS_LINK_09_get_ctrl_1b_resv(data)                           (0x00000003&(data))


#define CBUS_LINK_0A                                                  0x98035228
#define CBUS_LINK_0A_reg_addr                                         "0xd8035228"
#define CBUS_LINK_0A_reg                                              0xd8035228
#define CBUS_LINK_0A_inst_addr                                        "0x008A"
#define CBUS_LINK_0A_inst                                             0x008A
#define set_CBUS_LINK_0A_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_0A_reg)=data)
#define get_CBUS_LINK_0A_reg                                          (*((volatile unsigned int*)CBUS_LINK_0A_reg))
#define CBUS_LINK_0A_tx_ack_fal_shift                                 (0)
#define CBUS_LINK_0A_tx_ack_fal_mask                                  (0x0000007F)
#define CBUS_LINK_0A_tx_ack_fal(data)                                 (0x0000007F&(data))
#define CBUS_LINK_0A_get_tx_ack_fal(data)                             (0x0000007F&(data))


#define CBUS_LINK_0B                                                  0x9803522c
#define CBUS_LINK_0B_reg_addr                                         "0xd803522c"
#define CBUS_LINK_0B_reg                                              0xd803522c
#define CBUS_LINK_0B_inst_addr                                        "0x008B"
#define CBUS_LINK_0B_inst                                             0x008B
#define set_CBUS_LINK_0B_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_0B_reg)=data)
#define get_CBUS_LINK_0B_reg                                          (*((volatile unsigned int*)CBUS_LINK_0B_reg))
#define CBUS_LINK_0B_tx_ack_low_hb_shift                              (0)
#define CBUS_LINK_0B_tx_ack_low_hb_mask                               (0x0000007F)
#define CBUS_LINK_0B_tx_ack_low_hb(data)                              (0x0000007F&(data))
#define CBUS_LINK_0B_get_tx_ack_low_hb(data)                          (0x0000007F&(data))


#define CBUS_LINK_0C                                                  0x98035230
#define CBUS_LINK_0C_reg_addr                                         "0xd8035230"
#define CBUS_LINK_0C_reg                                              0xd8035230
#define CBUS_LINK_0C_inst_addr                                        "0x008C"
#define CBUS_LINK_0C_inst                                             0x008C
#define set_CBUS_LINK_0C_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_0C_reg)=data)
#define get_CBUS_LINK_0C_reg                                          (*((volatile unsigned int*)CBUS_LINK_0C_reg))
#define CBUS_LINK_0C_tx_ack_low_lb_shift                              (0)
#define CBUS_LINK_0C_tx_ack_low_lb_mask                               (0x0000007F)
#define CBUS_LINK_0C_tx_ack_low_lb(data)                              (0x0000007F&(data))
#define CBUS_LINK_0C_get_tx_ack_low_lb(data)                          (0x0000007F&(data))


#define CBUS_LINK_0D                                                  0x98035234
#define CBUS_LINK_0D_reg_addr                                         "0xd8035234"
#define CBUS_LINK_0D_reg                                              0xd8035234
#define CBUS_LINK_0D_inst_addr                                        "0x008D"
#define CBUS_LINK_0D_inst                                             0x008D
#define set_CBUS_LINK_0D_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_0D_reg)=data)
#define get_CBUS_LINK_0D_reg                                          (*((volatile unsigned int*)CBUS_LINK_0D_reg))
#define CBUS_LINK_0D_retry_lv_shift                                   (5)
#define CBUS_LINK_0D_retry_flag_shift                                 (4)
#define CBUS_LINK_0D_ctrl_1f_resv_shift                               (0)
#define CBUS_LINK_0D_retry_lv_mask                                    (0x000000E0)
#define CBUS_LINK_0D_retry_flag_mask                                  (0x00000010)
#define CBUS_LINK_0D_ctrl_1f_resv_mask                                (0x0000000F)
#define CBUS_LINK_0D_retry_lv(data)                                   (0x000000E0&((data)<<5))
#define CBUS_LINK_0D_retry_flag(data)                                 (0x00000010&((data)<<4))
#define CBUS_LINK_0D_ctrl_1f_resv(data)                               (0x0000000F&(data))
#define CBUS_LINK_0D_get_retry_lv(data)                               ((0x000000E0&(data))>>5)
#define CBUS_LINK_0D_get_retry_flag(data)                             ((0x00000010&(data))>>4)
#define CBUS_LINK_0D_get_ctrl_1f_resv(data)                           (0x0000000F&(data))


#define CBUS_LINK_0E                                                  0x98035238
#define CBUS_LINK_0E_reg_addr                                         "0xd8035238"
#define CBUS_LINK_0E_reg                                              0xd8035238
#define CBUS_LINK_0E_inst_addr                                        "0x008E"
#define CBUS_LINK_0E_inst                                             0x008E
#define set_CBUS_LINK_0E_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_0E_reg)=data)
#define get_CBUS_LINK_0E_reg                                          (*((volatile unsigned int*)CBUS_LINK_0E_reg))
#define CBUS_LINK_0E_drv_str_shift                                    (6)
#define CBUS_LINK_0E_drv_hi_cbus_shift                                (0)
#define CBUS_LINK_0E_drv_str_mask                                     (0x000000C0)
#define CBUS_LINK_0E_drv_hi_cbus_mask                                 (0x0000003F)
#define CBUS_LINK_0E_drv_str(data)                                    (0x000000C0&((data)<<6))
#define CBUS_LINK_0E_drv_hi_cbus(data)                                (0x0000003F&(data))
#define CBUS_LINK_0E_get_drv_str(data)                                ((0x000000C0&(data))>>6)
#define CBUS_LINK_0E_get_drv_hi_cbus(data)                            (0x0000003F&(data))


#define CBUS_LINK_0F                                                  0x9803523c
#define CBUS_LINK_0F_reg_addr                                         "0xd803523c"
#define CBUS_LINK_0F_reg                                              0xd803523c
#define CBUS_LINK_0F_inst_addr                                        "0x008F"
#define CBUS_LINK_0F_inst                                             0x008F
#define set_CBUS_LINK_0F_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_0F_reg)=data)
#define get_CBUS_LINK_0F_reg                                          (*((volatile unsigned int*)CBUS_LINK_0F_reg))
#define CBUS_LINK_0F_wait_shift                                       (2)
#define CBUS_LINK_0F_req_opp_int_shift                                (0)
#define CBUS_LINK_0F_wait_mask                                        (0x0000003C)
#define CBUS_LINK_0F_req_opp_int_mask                                 (0x00000003)
#define CBUS_LINK_0F_wait(data)                                       (0x0000003C&((data)<<2))
#define CBUS_LINK_0F_req_opp_int(data)                                (0x00000003&(data))
#define CBUS_LINK_0F_get_wait(data)                                   ((0x0000003C&(data))>>2)
#define CBUS_LINK_0F_get_req_opp_int(data)                            (0x00000003&(data))


#define CBUS_LINK_10                                                  0x98035240
#define CBUS_LINK_10_reg_addr                                         "0xd8035240"
#define CBUS_LINK_10_reg                                              0xd8035240
#define CBUS_LINK_10_inst_addr                                        "0x0090"
#define CBUS_LINK_10_inst                                             0x0090
#define set_CBUS_LINK_10_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_10_reg)=data)
#define get_CBUS_LINK_10_reg                                          (*((volatile unsigned int*)CBUS_LINK_10_reg))
#define CBUS_LINK_10_req_opp_flt_shift                                (0)
#define CBUS_LINK_10_req_opp_flt_mask                                 (0x000000FF)
#define CBUS_LINK_10_req_opp_flt(data)                                (0x000000FF&(data))
#define CBUS_LINK_10_get_req_opp_flt(data)                            (0x000000FF&(data))


#define CBUS_LINK_11                                                  0x98035244
#define CBUS_LINK_11_reg_addr                                         "0xd8035244"
#define CBUS_LINK_11_reg                                              0xd8035244
#define CBUS_LINK_11_inst_addr                                        "0x0091"
#define CBUS_LINK_11_inst                                             0x0091
#define set_CBUS_LINK_11_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_11_reg)=data)
#define get_CBUS_LINK_11_reg                                          (*((volatile unsigned int*)CBUS_LINK_11_reg))
#define CBUS_LINK_11_req_cont_shift                                   (0)
#define CBUS_LINK_11_req_cont_mask                                    (0x000000FF)
#define CBUS_LINK_11_req_cont(data)                                   (0x000000FF&(data))
#define CBUS_LINK_11_get_req_cont(data)                               (0x000000FF&(data))


#define CBUS_LINK_12                                                  0x98035248
#define CBUS_LINK_12_reg_addr                                         "0xd8035248"
#define CBUS_LINK_12_reg                                              0xd8035248
#define CBUS_LINK_12_inst_addr                                        "0x0092"
#define CBUS_LINK_12_inst                                             0x0092
#define set_CBUS_LINK_12_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_12_reg)=data)
#define get_CBUS_LINK_12_reg                                          (*((volatile unsigned int*)CBUS_LINK_12_reg))
#define CBUS_LINK_12_req_hold_shift                                   (4)
#define CBUS_LINK_12_resp_hold_shift                                  (0)
#define CBUS_LINK_12_req_hold_mask                                    (0x000000F0)
#define CBUS_LINK_12_resp_hold_mask                                   (0x0000000F)
#define CBUS_LINK_12_req_hold(data)                                   (0x000000F0&((data)<<4))
#define CBUS_LINK_12_resp_hold(data)                                  (0x0000000F&(data))
#define CBUS_LINK_12_get_req_hold(data)                               ((0x000000F0&(data))>>4)
#define CBUS_LINK_12_get_resp_hold(data)                              (0x0000000F&(data))


#define CBUS_LINK_13                                                  0x9803524c
#define CBUS_LINK_13_reg_addr                                         "0xd803524c"
#define CBUS_LINK_13_reg                                              0xd803524c
#define CBUS_LINK_13_inst_addr                                        "0x0093"
#define CBUS_LINK_13_inst                                             0x0093
#define set_CBUS_LINK_13_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_13_reg)=data)
#define get_CBUS_LINK_13_reg                                          (*((volatile unsigned int*)CBUS_LINK_13_reg))
#define CBUS_LINK_13_glob_time_shift                                  (6)
#define CBUS_LINK_13_link_time_shift                                  (1)
#define CBUS_LINK_13_link_err_shift                                   (0)
#define CBUS_LINK_13_glob_time_mask                                   (0x000000C0)
#define CBUS_LINK_13_link_time_mask                                   (0x0000003E)
#define CBUS_LINK_13_link_err_mask                                    (0x00000001)
#define CBUS_LINK_13_glob_time(data)                                  (0x000000C0&((data)<<6))
#define CBUS_LINK_13_link_time(data)                                  (0x0000003E&((data)<<1))
#define CBUS_LINK_13_link_err(data)                                   (0x00000001&(data))
#define CBUS_LINK_13_get_glob_time(data)                              ((0x000000C0&(data))>>6)
#define CBUS_LINK_13_get_link_time(data)                              ((0x0000003E&(data))>>1)
#define CBUS_LINK_13_get_link_err(data)                               (0x00000001&(data))


#define CBUS_LINK_14                                                  0x98035250
#define CBUS_LINK_14_reg_addr                                         "0xd8035250"
#define CBUS_LINK_14_reg                                              0xd8035250
#define CBUS_LINK_14_inst_addr                                        "0x0094"
#define CBUS_LINK_14_inst                                             0x0094
#define set_CBUS_LINK_14_reg(data)                                    (*((volatile unsigned int*)CBUS_LINK_14_reg)=data)
#define get_CBUS_LINK_14_reg                                          (*((volatile unsigned int*)CBUS_LINK_14_reg))
#define CBUS_LINK_14_chk_point_shift                                  (2)
#define CBUS_LINK_14_chk_err_shift                                    (1)
#define CBUS_LINK_14_avoid_conf_shift                                 (0)
#define CBUS_LINK_14_chk_point_mask                                   (0x000000FC)
#define CBUS_LINK_14_chk_err_mask                                     (0x00000002)
#define CBUS_LINK_14_avoid_conf_mask                                  (0x00000001)
#define CBUS_LINK_14_chk_point(data)                                  (0x000000FC&((data)<<2))
#define CBUS_LINK_14_chk_err(data)                                    (0x00000002&((data)<<1))
#define CBUS_LINK_14_avoid_conf(data)                                 (0x00000001&(data))
#define CBUS_LINK_14_get_chk_point(data)                              ((0x000000FC&(data))>>2)
#define CBUS_LINK_14_get_chk_err(data)                                ((0x00000002&(data))>>1)
#define CBUS_LINK_14_get_avoid_conf(data)                             (0x00000001&(data))


#define CBUS_MSC_00                                                   0x98035260
#define CBUS_MSC_00_reg_addr                                          "0xd8035260"
#define CBUS_MSC_00_reg                                               0xd8035260
#define CBUS_MSC_00_inst_addr                                         "0x0098"
#define CBUS_MSC_00_inst                                              0x0098
#define set_CBUS_MSC_00_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_00_reg)=data)
#define get_CBUS_MSC_00_reg                                           (*((volatile unsigned int*)CBUS_MSC_00_reg))
#define CBUS_MSC_00_mcumsc_en_shift                                   (5)
#define CBUS_MSC_00_msc_wait_arb_shift                                (4)
#define CBUS_MSC_00_ctrl_28_resv_shift                                (0)
#define CBUS_MSC_00_mcumsc_en_mask                                    (0x00000020)
#define CBUS_MSC_00_msc_wait_arb_mask                                 (0x00000010)
#define CBUS_MSC_00_ctrl_28_resv_mask                                 (0x0000000F)
#define CBUS_MSC_00_mcumsc_en(data)                                   (0x00000020&((data)<<5))
#define CBUS_MSC_00_msc_wait_arb(data)                                (0x00000010&((data)<<4))
#define CBUS_MSC_00_ctrl_28_resv(data)                                (0x0000000F&(data))
#define CBUS_MSC_00_get_mcumsc_en(data)                               ((0x00000020&(data))>>5)
#define CBUS_MSC_00_get_msc_wait_arb(data)                            ((0x00000010&(data))>>4)
#define CBUS_MSC_00_get_ctrl_28_resv(data)                            (0x0000000F&(data))


#define CBUS_MSC_01                                                   0x98035264
#define CBUS_MSC_01_reg_addr                                          "0xd8035264"
#define CBUS_MSC_01_reg                                               0xd8035264
#define CBUS_MSC_01_inst_addr                                         "0x0099"
#define CBUS_MSC_01_inst                                              0x0099
#define set_CBUS_MSC_01_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_01_reg)=data)
#define get_CBUS_MSC_01_reg                                           (*((volatile unsigned int*)CBUS_MSC_01_reg))
#define CBUS_MSC_01_na_msc_cmd_shift                                  (0)
#define CBUS_MSC_01_na_msc_cmd_mask                                   (0x000000FF)
#define CBUS_MSC_01_na_msc_cmd(data)                                  (0x000000FF&(data))
#define CBUS_MSC_01_get_na_msc_cmd(data)                              (0x000000FF&(data))


#define CBUS_MSC_02                                                   0x98035268
#define CBUS_MSC_02_reg_addr                                          "0xd8035268"
#define CBUS_MSC_02_reg                                               0xd8035268
#define CBUS_MSC_02_inst_addr                                         "0x009A"
#define CBUS_MSC_02_inst                                              0x009A
#define set_CBUS_MSC_02_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_02_reg)=data)
#define get_CBUS_MSC_02_reg                                           (*((volatile unsigned int*)CBUS_MSC_02_reg))
#define CBUS_MSC_02_na_msc_offset_shift                               (0)
#define CBUS_MSC_02_na_msc_offset_mask                                (0x000000FF)
#define CBUS_MSC_02_na_msc_offset(data)                               (0x000000FF&(data))
#define CBUS_MSC_02_get_na_msc_offset(data)                           (0x000000FF&(data))


#define CBUS_MSC_03                                                   0x9803526c
#define CBUS_MSC_03_reg_addr                                          "0xd803526c"
#define CBUS_MSC_03_reg                                               0xd803526c
#define CBUS_MSC_03_inst_addr                                         "0x009B"
#define CBUS_MSC_03_inst                                              0x009B
#define set_CBUS_MSC_03_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_03_reg)=data)
#define get_CBUS_MSC_03_reg                                           (*((volatile unsigned int*)CBUS_MSC_03_reg))
#define CBUS_MSC_03_rx_fifo_full_shift                                (7)
#define CBUS_MSC_03_rx_fifo_empty_shift                               (6)
#define CBUS_MSC_03_rx_fifo_clr_shift                                 (5)
#define CBUS_MSC_03_na_rx_len_shift                                   (0)
#define CBUS_MSC_03_rx_fifo_full_mask                                 (0x00000080)
#define CBUS_MSC_03_rx_fifo_empty_mask                                (0x00000040)
#define CBUS_MSC_03_rx_fifo_clr_mask                                  (0x00000020)
#define CBUS_MSC_03_na_rx_len_mask                                    (0x0000001F)
#define CBUS_MSC_03_rx_fifo_full(data)                                (0x00000080&((data)<<7))
#define CBUS_MSC_03_rx_fifo_empty(data)                               (0x00000040&((data)<<6))
#define CBUS_MSC_03_rx_fifo_clr(data)                                 (0x00000020&((data)<<5))
#define CBUS_MSC_03_na_rx_len(data)                                   (0x0000001F&(data))
#define CBUS_MSC_03_get_rx_fifo_full(data)                            ((0x00000080&(data))>>7)
#define CBUS_MSC_03_get_rx_fifo_empty(data)                           ((0x00000040&(data))>>6)
#define CBUS_MSC_03_get_rx_fifo_clr(data)                             ((0x00000020&(data))>>5)
#define CBUS_MSC_03_get_na_rx_len(data)                               (0x0000001F&(data))


#define CBUS_MSC_04                                                   0x98035270
#define CBUS_MSC_04_reg_addr                                          "0xd8035270"
#define CBUS_MSC_04_reg                                               0xd8035270
#define CBUS_MSC_04_inst_addr                                         "0x009C"
#define CBUS_MSC_04_inst                                              0x009C
#define set_CBUS_MSC_04_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_04_reg)=data)
#define get_CBUS_MSC_04_reg                                           (*((volatile unsigned int*)CBUS_MSC_04_reg))
#define CBUS_MSC_04_rx_fifo_data_shift                                (0)
#define CBUS_MSC_04_rx_fifo_data_mask                                 (0x000000FF)
#define CBUS_MSC_04_rx_fifo_data(data)                                (0x000000FF&(data))
#define CBUS_MSC_04_get_rx_fifo_data(data)                            (0x000000FF&(data))


#define CBUS_MSC_05                                                   0x98035274
#define CBUS_MSC_05_reg_addr                                          "0xd8035274"
#define CBUS_MSC_05_reg                                               0xd8035274
#define CBUS_MSC_05_inst_addr                                         "0x009D"
#define CBUS_MSC_05_inst                                              0x009D
#define set_CBUS_MSC_05_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_05_reg)=data)
#define get_CBUS_MSC_05_reg                                           (*((volatile unsigned int*)CBUS_MSC_05_reg))
#define CBUS_MSC_05_fwdef_cmd_rev_shift                               (0)
#define CBUS_MSC_05_fwdef_cmd_rev_mask                                (0x000000FF)
#define CBUS_MSC_05_fwdef_cmd_rev(data)                               (0x000000FF&(data))
#define CBUS_MSC_05_get_fwdef_cmd_rev(data)                           (0x000000FF&(data))


#define CBUS_MSC_06                                                   0x98035278
#define CBUS_MSC_06_reg_addr                                          "0xd8035278"
#define CBUS_MSC_06_reg                                               0xd8035278
#define CBUS_MSC_06_inst_addr                                         "0x009E"
#define CBUS_MSC_06_inst                                              0x009E
#define set_CBUS_MSC_06_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_06_reg)=data)
#define get_CBUS_MSC_06_reg                                           (*((volatile unsigned int*)CBUS_MSC_06_reg))
#define CBUS_MSC_06_ucp_irq_shift                                     (28)
#define CBUS_MSC_06_ucpk_irq_shift                                    (27)
#define CBUS_MSC_06_ucpe_irq_shift                                    (26)
#define CBUS_MSC_06_dcap_rdy_chg_shift                                (25)
#define CBUS_MSC_06_muted_chg_shift                                   (24)
#define CBUS_MSC_06_path_en_chg_shift                                 (23)
#define CBUS_MSC_06_clk_mode_chg_shift                                (22)
#define CBUS_MSC_06_msge_irq_shift                                    (21)
#define CBUS_MSC_06_rcp_irq_shift                                     (20)
#define CBUS_MSC_06_rcpk_irq_shift                                    (19)
#define CBUS_MSC_06_rcpe_irq_shift                                    (18)
#define CBUS_MSC_06_rap_irq_shift                                     (17)
#define CBUS_MSC_06_rapk_irq_shift                                    (16)
#define CBUS_MSC_06_msg_sub_irq_shift                                 (15)
#define CBUS_MSC_06_wr_stat_irq_shift                                 (14)
#define CBUS_MSC_06_rd_devcap_irq_shift                               (13)
#define CBUS_MSC_06_get_stat_irq_shift                                (12)
#define CBUS_MSC_06_get_id_irq_shift                                  (11)
#define CBUS_MSC_06_get_msg_irq_shift                                 (10)
#define CBUS_MSC_06_sc1_err_irq_shift                                 (9)
#define CBUS_MSC_06_ddc_err_irq_shift                                 (8)
#define CBUS_MSC_06_msc_err_irq_shift                                 (7)
#define CBUS_MSC_06_wr_burst_irq_shift                                (6)
#define CBUS_MSC_06_sc3_err_irq_shift                                 (5)
#define CBUS_MSC_06_fwdef_cmd_irq_shift                               (4)
#define CBUS_MSC_06_allmsc_cmd_irq_shift                              (3)
#define CBUS_MSC_06_abort_res_irq_shift                               (2)
#define CBUS_MSC_06_abort_req_irq_shift                               (1)
#define CBUS_MSC_06_ddc_abort_irq_shift                               (0)
#define CBUS_MSC_06_ucp_irq_mask                                      (0x10000000)
#define CBUS_MSC_06_ucpk_irq_mask                                     (0x08000000)
#define CBUS_MSC_06_ucpe_irq_mask                                     (0x04000000)
#define CBUS_MSC_06_dcap_rdy_chg_mask                                 (0x02000000)
#define CBUS_MSC_06_muted_chg_mask                                    (0x01000000)
#define CBUS_MSC_06_path_en_chg_mask                                  (0x00800000)
#define CBUS_MSC_06_clk_mode_chg_mask                                 (0x00400000)
#define CBUS_MSC_06_msge_irq_mask                                     (0x00200000)
#define CBUS_MSC_06_rcp_irq_mask                                      (0x00100000)
#define CBUS_MSC_06_rcpk_irq_mask                                     (0x00080000)
#define CBUS_MSC_06_rcpe_irq_mask                                     (0x00040000)
#define CBUS_MSC_06_rap_irq_mask                                      (0x00020000)
#define CBUS_MSC_06_rapk_irq_mask                                     (0x00010000)
#define CBUS_MSC_06_msg_sub_irq_mask                                  (0x00008000)
#define CBUS_MSC_06_wr_stat_irq_mask                                  (0x00004000)
#define CBUS_MSC_06_rd_devcap_irq_mask                                (0x00002000)
#define CBUS_MSC_06_get_stat_irq_mask                                 (0x00001000)
#define CBUS_MSC_06_get_id_irq_mask                                   (0x00000800)
#define CBUS_MSC_06_get_msg_irq_mask                                  (0x00000400)
#define CBUS_MSC_06_sc1_err_irq_mask                                  (0x00000200)
#define CBUS_MSC_06_ddc_err_irq_mask                                  (0x00000100)
#define CBUS_MSC_06_msc_err_irq_mask                                  (0x00000080)
#define CBUS_MSC_06_wr_burst_irq_mask                                 (0x00000040)
#define CBUS_MSC_06_sc3_err_irq_mask                                  (0x00000020)
#define CBUS_MSC_06_fwdef_cmd_irq_mask                                (0x00000010)
#define CBUS_MSC_06_allmsc_cmd_irq_mask                               (0x00000008)
#define CBUS_MSC_06_abort_res_irq_mask                                (0x00000004)
#define CBUS_MSC_06_abort_req_irq_mask                                (0x00000002)
#define CBUS_MSC_06_ddc_abort_irq_mask                                (0x00000001)
#define CBUS_MSC_06_ucp_irq(data)                                     (0x10000000&((data)<<28))
#define CBUS_MSC_06_ucpk_irq(data)                                    (0x08000000&((data)<<27))
#define CBUS_MSC_06_ucpe_irq(data)                                    (0x04000000&((data)<<26))
#define CBUS_MSC_06_dcap_rdy_chg(data)                                (0x02000000&((data)<<25))
#define CBUS_MSC_06_muted_chg(data)                                   (0x01000000&((data)<<24))
#define CBUS_MSC_06_path_en_chg(data)                                 (0x00800000&((data)<<23))
#define CBUS_MSC_06_clk_mode_chg(data)                                (0x00400000&((data)<<22))
#define CBUS_MSC_06_msge_irq(data)                                    (0x00200000&((data)<<21))
#define CBUS_MSC_06_rcp_irq(data)                                     (0x00100000&((data)<<20))
#define CBUS_MSC_06_rcpk_irq(data)                                    (0x00080000&((data)<<19))
#define CBUS_MSC_06_rcpe_irq(data)                                    (0x00040000&((data)<<18))
#define CBUS_MSC_06_rap_irq(data)                                     (0x00020000&((data)<<17))
#define CBUS_MSC_06_rapk_irq(data)                                    (0x00010000&((data)<<16))
#define CBUS_MSC_06_msg_sub_irq(data)                                 (0x00008000&((data)<<15))
#define CBUS_MSC_06_wr_stat_irq(data)                                 (0x00004000&((data)<<14))
#define CBUS_MSC_06_rd_devcap_irq(data)                               (0x00002000&((data)<<13))
#define CBUS_MSC_06_get_stat_irq(data)                                (0x00001000&((data)<<12))
#define CBUS_MSC_06_get_id_irq(data)                                  (0x00000800&((data)<<11))
#define CBUS_MSC_06_get_msg_irq(data)                                 (0x00000400&((data)<<10))
#define CBUS_MSC_06_sc1_err_irq(data)                                 (0x00000200&((data)<<9))
#define CBUS_MSC_06_ddc_err_irq(data)                                 (0x00000100&((data)<<8))
#define CBUS_MSC_06_msc_err_irq(data)                                 (0x00000080&((data)<<7))
#define CBUS_MSC_06_wr_burst_irq(data)                                (0x00000040&((data)<<6))
#define CBUS_MSC_06_sc3_err_irq(data)                                 (0x00000020&((data)<<5))
#define CBUS_MSC_06_fwdef_cmd_irq(data)                               (0x00000010&((data)<<4))
#define CBUS_MSC_06_allmsc_cmd_irq(data)                              (0x00000008&((data)<<3))
#define CBUS_MSC_06_abort_res_irq(data)                               (0x00000004&((data)<<2))
#define CBUS_MSC_06_abort_req_irq(data)                               (0x00000002&((data)<<1))
#define CBUS_MSC_06_ddc_abort_irq(data)                               (0x00000001&(data))
#define CBUS_MSC_06_get_ucp_irq(data)                                 ((0x10000000&(data))>>28)
#define CBUS_MSC_06_get_ucpk_irq(data)                                ((0x08000000&(data))>>27)
#define CBUS_MSC_06_get_ucpe_irq(data)                                ((0x04000000&(data))>>26)
#define CBUS_MSC_06_get_dcap_rdy_chg(data)                            ((0x02000000&(data))>>25)
#define CBUS_MSC_06_get_muted_chg(data)                               ((0x01000000&(data))>>24)
#define CBUS_MSC_06_get_path_en_chg(data)                             ((0x00800000&(data))>>23)
#define CBUS_MSC_06_get_clk_mode_chg(data)                            ((0x00400000&(data))>>22)
#define CBUS_MSC_06_get_msge_irq(data)                                ((0x00200000&(data))>>21)
#define CBUS_MSC_06_get_rcp_irq(data)                                 ((0x00100000&(data))>>20)
#define CBUS_MSC_06_get_rcpk_irq(data)                                ((0x00080000&(data))>>19)
#define CBUS_MSC_06_get_rcpe_irq(data)                                ((0x00040000&(data))>>18)
#define CBUS_MSC_06_get_rap_irq(data)                                 ((0x00020000&(data))>>17)
#define CBUS_MSC_06_get_rapk_irq(data)                                ((0x00010000&(data))>>16)
#define CBUS_MSC_06_get_msg_sub_irq(data)                             ((0x00008000&(data))>>15)
#define CBUS_MSC_06_get_wr_stat_irq(data)                             ((0x00004000&(data))>>14)
#define CBUS_MSC_06_get_rd_devcap_irq(data)                           ((0x00002000&(data))>>13)
#define CBUS_MSC_06_get_get_stat_irq(data)                            ((0x00001000&(data))>>12)
#define CBUS_MSC_06_get_get_id_irq(data)                              ((0x00000800&(data))>>11)
#define CBUS_MSC_06_get_get_msg_irq(data)                             ((0x00000400&(data))>>10)
#define CBUS_MSC_06_get_sc1_err_irq(data)                             ((0x00000200&(data))>>9)
#define CBUS_MSC_06_get_ddc_err_irq(data)                             ((0x00000100&(data))>>8)
#define CBUS_MSC_06_get_msc_err_irq(data)                             ((0x00000080&(data))>>7)
#define CBUS_MSC_06_get_wr_burst_irq(data)                            ((0x00000040&(data))>>6)
#define CBUS_MSC_06_get_sc3_err_irq(data)                             ((0x00000020&(data))>>5)
#define CBUS_MSC_06_get_fwdef_cmd_irq(data)                           ((0x00000010&(data))>>4)
#define CBUS_MSC_06_get_allmsc_cmd_irq(data)                          ((0x00000008&(data))>>3)
#define CBUS_MSC_06_get_abort_res_irq(data)                           ((0x00000004&(data))>>2)
#define CBUS_MSC_06_get_abort_req_irq(data)                           ((0x00000002&(data))>>1)
#define CBUS_MSC_06_get_ddc_abort_irq(data)                           (0x00000001&(data))


#define CBUS_MSC_07                                                   0x9803527c
#define CBUS_MSC_07_reg_addr                                          "0xd803527c"
#define CBUS_MSC_07_reg                                               0xd803527c
#define CBUS_MSC_07_inst_addr                                         "0x009F"
#define CBUS_MSC_07_inst                                              0x009F
#define set_CBUS_MSC_07_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_07_reg)=data)
#define get_CBUS_MSC_07_reg                                           (*((volatile unsigned int*)CBUS_MSC_07_reg))
#define CBUS_MSC_07_ucp_irq_en_shift                                  (28)
#define CBUS_MSC_07_ucpk_irq_en_shift                                 (27)
#define CBUS_MSC_07_ucpe_irq_en_shift                                 (26)
#define CBUS_MSC_07_dcap_rdy_irq_en_shift                             (25)
#define CBUS_MSC_07_muted_chg_irq_en_shift                            (24)
#define CBUS_MSC_07_path_en_irq_en_shift                              (23)
#define CBUS_MSC_07_clk_mode_irq_en_shift                             (22)
#define CBUS_MSC_07_msge_irq_en_shift                                 (21)
#define CBUS_MSC_07_rcp_irq_en_shift                                  (20)
#define CBUS_MSC_07_rcpk_irq_en_shift                                 (19)
#define CBUS_MSC_07_rcpe_irq_en_shift                                 (18)
#define CBUS_MSC_07_rap_irq_en_shift                                  (17)
#define CBUS_MSC_07_rapk_irq_en_shift                                 (16)
#define CBUS_MSC_07_msg_sub_irq_en_shift                              (15)
#define CBUS_MSC_07_wr_stat_irq_en_shift                              (14)
#define CBUS_MSC_07_rd_devcap_irq_en_shift                            (13)
#define CBUS_MSC_07_get_stat_irq_en_shift                             (12)
#define CBUS_MSC_07_get_id_irq_en_shift                               (11)
#define CBUS_MSC_07_get_msg_irq_en_shift                              (10)
#define CBUS_MSC_07_sc1_err_irq_en_shift                              (9)
#define CBUS_MSC_07_ddc_err_irq_en_shift                              (8)
#define CBUS_MSC_07_msc_err_irq_en_shift                              (7)
#define CBUS_MSC_07_wr_burst_irq_en_shift                             (6)
#define CBUS_MSC_07_sc3_err_irq_en_shift                              (5)
#define CBUS_MSC_07_fwdef_cmd_irq_en_shift                            (4)
#define CBUS_MSC_07_allmsc_cmd_irq_en_shift                           (3)
#define CBUS_MSC_07_abort_res_irq_en_shift                            (2)
#define CBUS_MSC_07_abort_req_irq_en_shift                            (1)
#define CBUS_MSC_07_ddc_abort_irq_en_shift                            (0)
#define CBUS_MSC_07_ucp_irq_en_mask                                   (0x10000000)
#define CBUS_MSC_07_ucpk_irq_en_mask                                  (0x08000000)
#define CBUS_MSC_07_ucpe_irq_en_mask                                  (0x04000000)
#define CBUS_MSC_07_dcap_rdy_irq_en_mask                              (0x02000000)
#define CBUS_MSC_07_muted_chg_irq_en_mask                             (0x01000000)
#define CBUS_MSC_07_path_en_irq_en_mask                               (0x00800000)
#define CBUS_MSC_07_clk_mode_irq_en_mask                              (0x00400000)
#define CBUS_MSC_07_msge_irq_en_mask                                  (0x00200000)
#define CBUS_MSC_07_rcp_irq_en_mask                                   (0x00100000)
#define CBUS_MSC_07_rcpk_irq_en_mask                                  (0x00080000)
#define CBUS_MSC_07_rcpe_irq_en_mask                                  (0x00040000)
#define CBUS_MSC_07_rap_irq_en_mask                                   (0x00020000)
#define CBUS_MSC_07_rapk_irq_en_mask                                  (0x00010000)
#define CBUS_MSC_07_msg_sub_irq_en_mask                               (0x00008000)
#define CBUS_MSC_07_wr_stat_irq_en_mask                               (0x00004000)
#define CBUS_MSC_07_rd_devcap_irq_en_mask                             (0x00002000)
#define CBUS_MSC_07_get_stat_irq_en_mask                              (0x00001000)
#define CBUS_MSC_07_get_id_irq_en_mask                                (0x00000800)
#define CBUS_MSC_07_get_msg_irq_en_mask                               (0x00000400)
#define CBUS_MSC_07_sc1_err_irq_en_mask                               (0x00000200)
#define CBUS_MSC_07_ddc_err_irq_en_mask                               (0x00000100)
#define CBUS_MSC_07_msc_err_irq_en_mask                               (0x00000080)
#define CBUS_MSC_07_wr_burst_irq_en_mask                              (0x00000040)
#define CBUS_MSC_07_sc3_err_irq_en_mask                               (0x00000020)
#define CBUS_MSC_07_fwdef_cmd_irq_en_mask                             (0x00000010)
#define CBUS_MSC_07_allmsc_cmd_irq_en_mask                            (0x00000008)
#define CBUS_MSC_07_abort_res_irq_en_mask                             (0x00000004)
#define CBUS_MSC_07_abort_req_irq_en_mask                             (0x00000002)
#define CBUS_MSC_07_ddc_abort_irq_en_mask                             (0x00000001)
#define CBUS_MSC_07_ucp_irq_en(data)                                  (0x10000000&((data)<<28))
#define CBUS_MSC_07_ucpk_irq_en(data)                                 (0x08000000&((data)<<27))
#define CBUS_MSC_07_ucpe_irq_en(data)                                 (0x04000000&((data)<<26))
#define CBUS_MSC_07_dcap_rdy_irq_en(data)                             (0x02000000&((data)<<25))
#define CBUS_MSC_07_muted_chg_irq_en(data)                            (0x01000000&((data)<<24))
#define CBUS_MSC_07_path_en_irq_en(data)                              (0x00800000&((data)<<23))
#define CBUS_MSC_07_clk_mode_irq_en(data)                             (0x00400000&((data)<<22))
#define CBUS_MSC_07_msge_irq_en(data)                                 (0x00200000&((data)<<21))
#define CBUS_MSC_07_rcp_irq_en(data)                                  (0x00100000&((data)<<20))
#define CBUS_MSC_07_rcpk_irq_en(data)                                 (0x00080000&((data)<<19))
#define CBUS_MSC_07_rcpe_irq_en(data)                                 (0x00040000&((data)<<18))
#define CBUS_MSC_07_rap_irq_en(data)                                  (0x00020000&((data)<<17))
#define CBUS_MSC_07_rapk_irq_en(data)                                 (0x00010000&((data)<<16))
#define CBUS_MSC_07_msg_sub_irq_en(data)                              (0x00008000&((data)<<15))
#define CBUS_MSC_07_wr_stat_irq_en(data)                              (0x00004000&((data)<<14))
#define CBUS_MSC_07_rd_devcap_irq_en(data)                            (0x00002000&((data)<<13))
#define CBUS_MSC_07_get_stat_irq_en(data)                             (0x00001000&((data)<<12))
#define CBUS_MSC_07_get_id_irq_en(data)                               (0x00000800&((data)<<11))
#define CBUS_MSC_07_get_msg_irq_en(data)                              (0x00000400&((data)<<10))
#define CBUS_MSC_07_sc1_err_irq_en(data)                              (0x00000200&((data)<<9))
#define CBUS_MSC_07_ddc_err_irq_en(data)                              (0x00000100&((data)<<8))
#define CBUS_MSC_07_msc_err_irq_en(data)                              (0x00000080&((data)<<7))
#define CBUS_MSC_07_wr_burst_irq_en(data)                             (0x00000040&((data)<<6))
#define CBUS_MSC_07_sc3_err_irq_en(data)                              (0x00000020&((data)<<5))
#define CBUS_MSC_07_fwdef_cmd_irq_en(data)                            (0x00000010&((data)<<4))
#define CBUS_MSC_07_allmsc_cmd_irq_en(data)                           (0x00000008&((data)<<3))
#define CBUS_MSC_07_abort_res_irq_en(data)                            (0x00000004&((data)<<2))
#define CBUS_MSC_07_abort_req_irq_en(data)                            (0x00000002&((data)<<1))
#define CBUS_MSC_07_ddc_abort_irq_en(data)                            (0x00000001&(data))
#define CBUS_MSC_07_get_ucp_irq_en(data)                              ((0x10000000&(data))>>28)
#define CBUS_MSC_07_get_ucpk_irq_en(data)                             ((0x08000000&(data))>>27)
#define CBUS_MSC_07_get_ucpe_irq_en(data)                             ((0x04000000&(data))>>26)
#define CBUS_MSC_07_get_dcap_rdy_irq_en(data)                         ((0x02000000&(data))>>25)
#define CBUS_MSC_07_get_muted_chg_irq_en(data)                        ((0x01000000&(data))>>24)
#define CBUS_MSC_07_get_path_en_irq_en(data)                          ((0x00800000&(data))>>23)
#define CBUS_MSC_07_get_clk_mode_irq_en(data)                         ((0x00400000&(data))>>22)
#define CBUS_MSC_07_get_msge_irq_en(data)                             ((0x00200000&(data))>>21)
#define CBUS_MSC_07_get_rcp_irq_en(data)                              ((0x00100000&(data))>>20)
#define CBUS_MSC_07_get_rcpk_irq_en(data)                             ((0x00080000&(data))>>19)
#define CBUS_MSC_07_get_rcpe_irq_en(data)                             ((0x00040000&(data))>>18)
#define CBUS_MSC_07_get_rap_irq_en(data)                              ((0x00020000&(data))>>17)
#define CBUS_MSC_07_get_rapk_irq_en(data)                             ((0x00010000&(data))>>16)
#define CBUS_MSC_07_get_msg_sub_irq_en(data)                          ((0x00008000&(data))>>15)
#define CBUS_MSC_07_get_wr_stat_irq_en(data)                          ((0x00004000&(data))>>14)
#define CBUS_MSC_07_get_rd_devcap_irq_en(data)                        ((0x00002000&(data))>>13)
#define CBUS_MSC_07_get_get_stat_irq_en(data)                         ((0x00001000&(data))>>12)
#define CBUS_MSC_07_get_get_id_irq_en(data)                           ((0x00000800&(data))>>11)
#define CBUS_MSC_07_get_get_msg_irq_en(data)                          ((0x00000400&(data))>>10)
#define CBUS_MSC_07_get_sc1_err_irq_en(data)                          ((0x00000200&(data))>>9)
#define CBUS_MSC_07_get_ddc_err_irq_en(data)                          ((0x00000100&(data))>>8)
#define CBUS_MSC_07_get_msc_err_irq_en(data)                          ((0x00000080&(data))>>7)
#define CBUS_MSC_07_get_wr_burst_irq_en(data)                         ((0x00000040&(data))>>6)
#define CBUS_MSC_07_get_sc3_err_irq_en(data)                          ((0x00000020&(data))>>5)
#define CBUS_MSC_07_get_fwdef_cmd_irq_en(data)                        ((0x00000010&(data))>>4)
#define CBUS_MSC_07_get_allmsc_cmd_irq_en(data)                       ((0x00000008&(data))>>3)
#define CBUS_MSC_07_get_abort_res_irq_en(data)                        ((0x00000004&(data))>>2)
#define CBUS_MSC_07_get_abort_req_irq_en(data)                        ((0x00000002&(data))>>1)
#define CBUS_MSC_07_get_ddc_abort_irq_en(data)                        (0x00000001&(data))


#define CBUS_MSC_08                                                   0x98035280
#define CBUS_MSC_08_reg_addr                                          "0xd8035280"
#define CBUS_MSC_08_reg                                               0xd8035280
#define CBUS_MSC_08_inst_addr                                         "0x00A0"
#define CBUS_MSC_08_inst                                              0x00A0
#define set_CBUS_MSC_08_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_08_reg)=data)
#define get_CBUS_MSC_08_reg                                           (*((volatile unsigned int*)CBUS_MSC_08_reg))
#define CBUS_MSC_08_rchg_irq_en_shift                                 (29)
#define CBUS_MSC_08_cbus_3d_req_irq_en_shift                          (28)
#define CBUS_MSC_08_grt_irq_en_shift                                  (27)
#define CBUS_MSC_08_req_irq_en_shift                                  (26)
#define CBUS_MSC_08_dscr_irq_en_shift                                 (25)
#define CBUS_MSC_08_dcap_irq_en_shift                                 (24)
#define CBUS_MSC_08_dchg_bit7_irq_en_shift                            (23)
#define CBUS_MSC_08_dchg_bit6_irq_en_shift                            (22)
#define CBUS_MSC_08_dchg_bit5_irq_en_shift                            (21)
#define CBUS_MSC_08_dchg_bit4_irq_en_shift                            (20)
#define CBUS_MSC_08_dchg_bit3_irq_en_shift                            (19)
#define CBUS_MSC_08_dchg_bit2_irq_en_shift                            (18)
#define CBUS_MSC_08_edid_irq_en_shift                                 (17)
#define CBUS_MSC_08_dchg_bit0_irq_en_shift                            (16)
#define CBUS_MSC_08_chg22_irq_en_shift                                (8)
#define CBUS_MSC_08_chg23_irq_en_shift                                (0)
#define CBUS_MSC_08_rchg_irq_en_mask                                  (0xE0000000)
#define CBUS_MSC_08_cbus_3d_req_irq_en_mask                           (0x10000000)
#define CBUS_MSC_08_grt_irq_en_mask                                   (0x08000000)
#define CBUS_MSC_08_req_irq_en_mask                                   (0x04000000)
#define CBUS_MSC_08_dscr_irq_en_mask                                  (0x02000000)
#define CBUS_MSC_08_dcap_irq_en_mask                                  (0x01000000)
#define CBUS_MSC_08_dchg_bit7_irq_en_mask                             (0x00800000)
#define CBUS_MSC_08_dchg_bit6_irq_en_mask                             (0x00400000)
#define CBUS_MSC_08_dchg_bit5_irq_en_mask                             (0x00200000)
#define CBUS_MSC_08_dchg_bit4_irq_en_mask                             (0x00100000)
#define CBUS_MSC_08_dchg_bit3_irq_en_mask                             (0x00080000)
#define CBUS_MSC_08_dchg_bit2_irq_en_mask                             (0x00040000)
#define CBUS_MSC_08_edid_irq_en_mask                                  (0x00020000)
#define CBUS_MSC_08_dchg_bit0_irq_en_mask                             (0x00010000)
#define CBUS_MSC_08_chg22_irq_en_mask                                 (0x0000FF00)
#define CBUS_MSC_08_chg23_irq_en_mask                                 (0x000000FF)
#define CBUS_MSC_08_rchg_irq_en(data)                                 (0xE0000000&((data)<<29))
#define CBUS_MSC_08_cbus_3d_req_irq_en(data)                          (0x10000000&((data)<<28))
#define CBUS_MSC_08_grt_irq_en(data)                                  (0x08000000&((data)<<27))
#define CBUS_MSC_08_req_irq_en(data)                                  (0x04000000&((data)<<26))
#define CBUS_MSC_08_dscr_irq_en(data)                                 (0x02000000&((data)<<25))
#define CBUS_MSC_08_dcap_irq_en(data)                                 (0x01000000&((data)<<24))
#define CBUS_MSC_08_dchg_bit7_irq_en(data)                            (0x00800000&((data)<<23))
#define CBUS_MSC_08_dchg_bit6_irq_en(data)                            (0x00400000&((data)<<22))
#define CBUS_MSC_08_dchg_bit5_irq_en(data)                            (0x00200000&((data)<<21))
#define CBUS_MSC_08_dchg_bit4_irq_en(data)                            (0x00100000&((data)<<20))
#define CBUS_MSC_08_dchg_bit3_irq_en(data)                            (0x00080000&((data)<<19))
#define CBUS_MSC_08_dchg_bit2_irq_en(data)                            (0x00040000&((data)<<18))
#define CBUS_MSC_08_edid_irq_en(data)                                 (0x00020000&((data)<<17))
#define CBUS_MSC_08_dchg_bit0_irq_en(data)                            (0x00010000&((data)<<16))
#define CBUS_MSC_08_chg22_irq_en(data)                                (0x0000FF00&((data)<<8))
#define CBUS_MSC_08_chg23_irq_en(data)                                (0x000000FF&(data))
#define CBUS_MSC_08_get_rchg_irq_en(data)                             ((0xE0000000&(data))>>29)
#define CBUS_MSC_08_get_cbus_3d_req_irq_en(data)                      ((0x10000000&(data))>>28)
#define CBUS_MSC_08_get_grt_irq_en(data)                              ((0x08000000&(data))>>27)
#define CBUS_MSC_08_get_req_irq_en(data)                              ((0x04000000&(data))>>26)
#define CBUS_MSC_08_get_dscr_irq_en(data)                             ((0x02000000&(data))>>25)
#define CBUS_MSC_08_get_dcap_irq_en(data)                             ((0x01000000&(data))>>24)
#define CBUS_MSC_08_get_dchg_bit7_irq_en(data)                        ((0x00800000&(data))>>23)
#define CBUS_MSC_08_get_dchg_bit6_irq_en(data)                        ((0x00400000&(data))>>22)
#define CBUS_MSC_08_get_dchg_bit5_irq_en(data)                        ((0x00200000&(data))>>21)
#define CBUS_MSC_08_get_dchg_bit4_irq_en(data)                        ((0x00100000&(data))>>20)
#define CBUS_MSC_08_get_dchg_bit3_irq_en(data)                        ((0x00080000&(data))>>19)
#define CBUS_MSC_08_get_dchg_bit2_irq_en(data)                        ((0x00040000&(data))>>18)
#define CBUS_MSC_08_get_edid_irq_en(data)                             ((0x00020000&(data))>>17)
#define CBUS_MSC_08_get_dchg_bit0_irq_en(data)                        ((0x00010000&(data))>>16)
#define CBUS_MSC_08_get_chg22_irq_en(data)                            ((0x0000FF00&(data))>>8)
#define CBUS_MSC_08_get_chg23_irq_en(data)                            (0x000000FF&(data))


#define CBUS_MSC_09                                                   0x98035284
#define CBUS_MSC_09_reg_addr                                          "0xd8035284"
#define CBUS_MSC_09_reg                                               0xd8035284
#define CBUS_MSC_09_inst_addr                                         "0x00A1"
#define CBUS_MSC_09_inst                                              0x00A1
#define set_CBUS_MSC_09_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_09_reg)=data)
#define get_CBUS_MSC_09_reg                                           (*((volatile unsigned int*)CBUS_MSC_09_reg))
#define CBUS_MSC_09_chg24_irq_en_shift                                (24)
#define CBUS_MSC_09_chg25_irq_en_shift                                (16)
#define CBUS_MSC_09_chg26_irq_en_shift                                (8)
#define CBUS_MSC_09_chg27_irq_en_shift                                (0)
#define CBUS_MSC_09_chg24_irq_en_mask                                 (0xFF000000)
#define CBUS_MSC_09_chg25_irq_en_mask                                 (0x00FF0000)
#define CBUS_MSC_09_chg26_irq_en_mask                                 (0x0000FF00)
#define CBUS_MSC_09_chg27_irq_en_mask                                 (0x000000FF)
#define CBUS_MSC_09_chg24_irq_en(data)                                (0xFF000000&((data)<<24))
#define CBUS_MSC_09_chg25_irq_en(data)                                (0x00FF0000&((data)<<16))
#define CBUS_MSC_09_chg26_irq_en(data)                                (0x0000FF00&((data)<<8))
#define CBUS_MSC_09_chg27_irq_en(data)                                (0x000000FF&(data))
#define CBUS_MSC_09_get_chg24_irq_en(data)                            ((0xFF000000&(data))>>24)
#define CBUS_MSC_09_get_chg25_irq_en(data)                            ((0x00FF0000&(data))>>16)
#define CBUS_MSC_09_get_chg26_irq_en(data)                            ((0x0000FF00&(data))>>8)
#define CBUS_MSC_09_get_chg27_irq_en(data)                            (0x000000FF&(data))


#define CBUS_MSC_0A                                                   0x98035288
#define CBUS_MSC_0A_reg_addr                                          "0xd8035288"
#define CBUS_MSC_0A_reg                                               0xd8035288
#define CBUS_MSC_0A_inst_addr                                         "0x00A2"
#define CBUS_MSC_0A_inst                                              0x00A2
#define set_CBUS_MSC_0A_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_0A_reg)=data)
#define get_CBUS_MSC_0A_reg                                           (*((volatile unsigned int*)CBUS_MSC_0A_reg))
#define CBUS_MSC_0A_msc_err_code_shift                                (0)
#define CBUS_MSC_0A_msc_err_code_mask                                 (0x000000FF)
#define CBUS_MSC_0A_msc_err_code(data)                                (0x000000FF&(data))
#define CBUS_MSC_0A_get_msc_err_code(data)                            (0x000000FF&(data))


#define CBUS_MSC_0B                                                   0x9803528c
#define CBUS_MSC_0B_reg_addr                                          "0xd803528c"
#define CBUS_MSC_0B_reg                                               0xd803528c
#define CBUS_MSC_0B_inst_addr                                         "0x00A3"
#define CBUS_MSC_0B_inst                                              0x00A3
#define set_CBUS_MSC_0B_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_0B_reg)=data)
#define get_CBUS_MSC_0B_reg                                           (*((volatile unsigned int*)CBUS_MSC_0B_reg))
#define CBUS_MSC_0B_rcp_reply_abort_shift                             (9)
#define CBUS_MSC_0B_rcp_reply_nack_shift                              (8)
#define CBUS_MSC_0B_vendor_id_shift                                   (0)
#define CBUS_MSC_0B_rcp_reply_abort_mask                              (0x00000200)
#define CBUS_MSC_0B_rcp_reply_nack_mask                               (0x00000100)
#define CBUS_MSC_0B_vendor_id_mask                                    (0x000000FF)
#define CBUS_MSC_0B_rcp_reply_abort(data)                             (0x00000200&((data)<<9))
#define CBUS_MSC_0B_rcp_reply_nack(data)                              (0x00000100&((data)<<8))
#define CBUS_MSC_0B_vendor_id(data)                                   (0x000000FF&(data))
#define CBUS_MSC_0B_get_rcp_reply_abort(data)                         ((0x00000200&(data))>>9)
#define CBUS_MSC_0B_get_rcp_reply_nack(data)                          ((0x00000100&(data))>>8)
#define CBUS_MSC_0B_get_vendor_id(data)                               (0x000000FF&(data))


#define CBUS_MSC_0C                                                   0x98035290
#define CBUS_MSC_0C_reg_addr                                          "0xd8035290"
#define CBUS_MSC_0C_reg                                               0xd8035290
#define CBUS_MSC_0C_inst_addr                                         "0x00A4"
#define CBUS_MSC_0C_inst                                              0x00A4
#define set_CBUS_MSC_0C_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_0C_reg)=data)
#define get_CBUS_MSC_0C_reg                                           (*((volatile unsigned int*)CBUS_MSC_0C_reg))
#define CBUS_MSC_0C_msg_cmd_shift                                     (0)
#define CBUS_MSC_0C_msg_cmd_mask                                      (0x000000FF)
#define CBUS_MSC_0C_msg_cmd(data)                                     (0x000000FF&(data))
#define CBUS_MSC_0C_get_msg_cmd(data)                                 (0x000000FF&(data))


#define CBUS_MSC_0D                                                   0x98035294
#define CBUS_MSC_0D_reg_addr                                          "0xd8035294"
#define CBUS_MSC_0D_reg                                               0xd8035294
#define CBUS_MSC_0D_inst_addr                                         "0x00A5"
#define CBUS_MSC_0D_inst                                              0x00A5
#define set_CBUS_MSC_0D_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_0D_reg)=data)
#define get_CBUS_MSC_0D_reg                                           (*((volatile unsigned int*)CBUS_MSC_0D_reg))
#define CBUS_MSC_0D_msg_dat_shift                                     (0)
#define CBUS_MSC_0D_msg_dat_mask                                      (0x000000FF)
#define CBUS_MSC_0D_msg_dat(data)                                     (0x000000FF&(data))
#define CBUS_MSC_0D_get_msg_dat(data)                                 (0x000000FF&(data))


#define CBUS_MSC_0E                                                   0x98035298
#define CBUS_MSC_0E_reg_addr                                          "0xd8035298"
#define CBUS_MSC_0E_reg                                               0xd8035298
#define CBUS_MSC_0E_inst_addr                                         "0x00A6"
#define CBUS_MSC_0E_inst                                              0x00A6
#define set_CBUS_MSC_0E_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_0E_reg)=data)
#define get_CBUS_MSC_0E_reg                                           (*((volatile unsigned int*)CBUS_MSC_0E_reg))
#define CBUS_MSC_0E_msge_rcv_shift                                    (0)
#define CBUS_MSC_0E_msge_rcv_mask                                     (0x000000FF)
#define CBUS_MSC_0E_msge_rcv(data)                                    (0x000000FF&(data))
#define CBUS_MSC_0E_get_msge_rcv(data)                                (0x000000FF&(data))


#define CBUS_MSC_0F                                                   0x9803529c
#define CBUS_MSC_0F_reg_addr                                          "0xd803529c"
#define CBUS_MSC_0F_reg                                               0xd803529c
#define CBUS_MSC_0F_inst_addr                                         "0x00A7"
#define CBUS_MSC_0F_inst                                              0x00A7
#define set_CBUS_MSC_0F_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_0F_reg)=data)
#define get_CBUS_MSC_0F_reg                                           (*((volatile unsigned int*)CBUS_MSC_0F_reg))
#define CBUS_MSC_0F_rcp_rcv_shift                                     (0)
#define CBUS_MSC_0F_rcp_rcv_mask                                      (0x000000FF)
#define CBUS_MSC_0F_rcp_rcv(data)                                     (0x000000FF&(data))
#define CBUS_MSC_0F_get_rcp_rcv(data)                                 (0x000000FF&(data))


#define CBUS_MSC_10                                                   0x980352a0
#define CBUS_MSC_10_reg_addr                                          "0xd80352a0"
#define CBUS_MSC_10_reg                                               0xd80352a0
#define CBUS_MSC_10_inst_addr                                         "0x00A8"
#define CBUS_MSC_10_inst                                              0x00A8
#define set_CBUS_MSC_10_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_10_reg)=data)
#define get_CBUS_MSC_10_reg                                           (*((volatile unsigned int*)CBUS_MSC_10_reg))
#define CBUS_MSC_10_rcpk_rcv_shift                                    (0)
#define CBUS_MSC_10_rcpk_rcv_mask                                     (0x000000FF)
#define CBUS_MSC_10_rcpk_rcv(data)                                    (0x000000FF&(data))
#define CBUS_MSC_10_get_rcpk_rcv(data)                                (0x000000FF&(data))


#define CBUS_MSC_11                                                   0x980352a4
#define CBUS_MSC_11_reg_addr                                          "0xd80352a4"
#define CBUS_MSC_11_reg                                               0xd80352a4
#define CBUS_MSC_11_inst_addr                                         "0x00A9"
#define CBUS_MSC_11_inst                                              0x00A9
#define set_CBUS_MSC_11_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_11_reg)=data)
#define get_CBUS_MSC_11_reg                                           (*((volatile unsigned int*)CBUS_MSC_11_reg))
#define CBUS_MSC_11_rcpe_rcv_shift                                    (0)
#define CBUS_MSC_11_rcpe_rcv_mask                                     (0x000000FF)
#define CBUS_MSC_11_rcpe_rcv(data)                                    (0x000000FF&(data))
#define CBUS_MSC_11_get_rcpe_rcv(data)                                (0x000000FF&(data))


#define CBUS_MSC_12                                                   0x980352a8
#define CBUS_MSC_12_reg_addr                                          "0xd80352a8"
#define CBUS_MSC_12_reg                                               0xd80352a8
#define CBUS_MSC_12_inst_addr                                         "0x00AA"
#define CBUS_MSC_12_inst                                              0x00AA
#define set_CBUS_MSC_12_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_12_reg)=data)
#define get_CBUS_MSC_12_reg                                           (*((volatile unsigned int*)CBUS_MSC_12_reg))
#define CBUS_MSC_12_rap_rcv_shift                                     (0)
#define CBUS_MSC_12_rap_rcv_mask                                      (0x000000FF)
#define CBUS_MSC_12_rap_rcv(data)                                     (0x000000FF&(data))
#define CBUS_MSC_12_get_rap_rcv(data)                                 (0x000000FF&(data))


#define CBUS_MSC_13                                                   0x980352ac
#define CBUS_MSC_13_reg_addr                                          "0xd80352ac"
#define CBUS_MSC_13_reg                                               0xd80352ac
#define CBUS_MSC_13_inst_addr                                         "0x00AB"
#define CBUS_MSC_13_inst                                              0x00AB
#define set_CBUS_MSC_13_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_13_reg)=data)
#define get_CBUS_MSC_13_reg                                           (*((volatile unsigned int*)CBUS_MSC_13_reg))
#define CBUS_MSC_13_rapk_rcv_shift                                    (0)
#define CBUS_MSC_13_rapk_rcv_mask                                     (0x000000FF)
#define CBUS_MSC_13_rapk_rcv(data)                                    (0x000000FF&(data))
#define CBUS_MSC_13_get_rapk_rcv(data)                                (0x000000FF&(data))


#define CBUS_MSC_14                                                   0x980352b0
#define CBUS_MSC_14_reg_addr                                          "0xd80352b0"
#define CBUS_MSC_14_reg                                               0xd80352b0
#define CBUS_MSC_14_inst_addr                                         "0x00AC"
#define CBUS_MSC_14_inst                                              0x00AC
#define set_CBUS_MSC_14_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_14_reg)=data)
#define get_CBUS_MSC_14_reg                                           (*((volatile unsigned int*)CBUS_MSC_14_reg))
#define CBUS_MSC_14_burst_timeout_shift                               (5)
#define CBUS_MSC_14_wb_id_chk_shift                                   (4)
#define CBUS_MSC_14_burst_wait_shift                                  (0)
#define CBUS_MSC_14_burst_timeout_mask                                (0x00000020)
#define CBUS_MSC_14_wb_id_chk_mask                                    (0x00000010)
#define CBUS_MSC_14_burst_wait_mask                                   (0x0000000F)
#define CBUS_MSC_14_burst_timeout(data)                               (0x00000020&((data)<<5))
#define CBUS_MSC_14_wb_id_chk(data)                                   (0x00000010&((data)<<4))
#define CBUS_MSC_14_burst_wait(data)                                  (0x0000000F&(data))
#define CBUS_MSC_14_get_burst_timeout(data)                           ((0x00000020&(data))>>5)
#define CBUS_MSC_14_get_wb_id_chk(data)                               ((0x00000010&(data))>>4)
#define CBUS_MSC_14_get_burst_wait(data)                              (0x0000000F&(data))


#define CBUS_MSC_15                                                   0x980352b4
#define CBUS_MSC_15_reg_addr                                          "0xd80352b4"
#define CBUS_MSC_15_reg                                               0xd80352b4
#define CBUS_MSC_15_inst_addr                                         "0x00AD"
#define CBUS_MSC_15_inst                                              0x00AD
#define set_CBUS_MSC_15_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_15_reg)=data)
#define get_CBUS_MSC_15_reg                                           (*((volatile unsigned int*)CBUS_MSC_15_reg))
#define CBUS_MSC_15_adop_idh_rcv_shift                                (8)
#define CBUS_MSC_15_adop_idl_rcv_shift                                (0)
#define CBUS_MSC_15_adop_idh_rcv_mask                                 (0x0000FF00)
#define CBUS_MSC_15_adop_idl_rcv_mask                                 (0x000000FF)
#define CBUS_MSC_15_adop_idh_rcv(data)                                (0x0000FF00&((data)<<8))
#define CBUS_MSC_15_adop_idl_rcv(data)                                (0x000000FF&(data))
#define CBUS_MSC_15_get_adop_idh_rcv(data)                            ((0x0000FF00&(data))>>8)
#define CBUS_MSC_15_get_adop_idl_rcv(data)                            (0x000000FF&(data))


#define CBUS_MSC_16                                                   0x980352b8
#define CBUS_MSC_16_reg_addr                                          "0xd80352b8"
#define CBUS_MSC_16_reg                                               0xd80352b8
#define CBUS_MSC_16_inst_addr                                         "0x00AE"
#define CBUS_MSC_16_inst                                              0x00AE
#define set_CBUS_MSC_16_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_16_reg)=data)
#define get_CBUS_MSC_16_reg                                           (*((volatile unsigned int*)CBUS_MSC_16_reg))
#define CBUS_MSC_16_auto_handshake_shift                              (29)
#define CBUS_MSC_16_insert_id_shift                                   (28)
#define CBUS_MSC_16_wb_byte_num0_shift                                (22)
#define CBUS_MSC_16_wb_byte_num1_shift                                (16)
#define CBUS_MSC_16_adop_txid_h_shift                                 (8)
#define CBUS_MSC_16_adop_txid_l_shift                                 (0)
#define CBUS_MSC_16_auto_handshake_mask                               (0x20000000)
#define CBUS_MSC_16_insert_id_mask                                    (0x10000000)
#define CBUS_MSC_16_wb_byte_num0_mask                                 (0x0FC00000)
#define CBUS_MSC_16_wb_byte_num1_mask                                 (0x003F0000)
#define CBUS_MSC_16_adop_txid_h_mask                                  (0x0000FF00)
#define CBUS_MSC_16_adop_txid_l_mask                                  (0x000000FF)
#define CBUS_MSC_16_auto_handshake(data)                              (0x20000000&((data)<<29))
#define CBUS_MSC_16_insert_id(data)                                   (0x10000000&((data)<<28))
#define CBUS_MSC_16_wb_byte_num0(data)                                (0x0FC00000&((data)<<22))
#define CBUS_MSC_16_wb_byte_num1(data)                                (0x003F0000&((data)<<16))
#define CBUS_MSC_16_adop_txid_h(data)                                 (0x0000FF00&((data)<<8))
#define CBUS_MSC_16_adop_txid_l(data)                                 (0x000000FF&(data))
#define CBUS_MSC_16_get_auto_handshake(data)                          ((0x20000000&(data))>>29)
#define CBUS_MSC_16_get_insert_id(data)                               ((0x10000000&(data))>>28)
#define CBUS_MSC_16_get_wb_byte_num0(data)                            ((0x0FC00000&(data))>>22)
#define CBUS_MSC_16_get_wb_byte_num1(data)                            ((0x003F0000&(data))>>16)
#define CBUS_MSC_16_get_adop_txid_h(data)                             ((0x0000FF00&(data))>>8)
#define CBUS_MSC_16_get_adop_txid_l(data)                             (0x000000FF&(data))


#define CBUS_MSC_17                                                   0x980352bc
#define CBUS_MSC_17_reg_addr                                          "0xd80352bc"
#define CBUS_MSC_17_reg                                               0xd80352bc
#define CBUS_MSC_17_inst_addr                                         "0x00AF"
#define CBUS_MSC_17_inst                                              0x00AF
#define set_CBUS_MSC_17_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_17_reg)=data)
#define get_CBUS_MSC_17_reg                                           (*((volatile unsigned int*)CBUS_MSC_17_reg))
#define CBUS_MSC_17_que_fsm_clr_shift                                 (2)
#define CBUS_MSC_17_sch_fsm_clr_shift                                 (1)
#define CBUS_MSC_17_spi_fsm_clr_shift                                 (0)
#define CBUS_MSC_17_que_fsm_clr_mask                                  (0x00000004)
#define CBUS_MSC_17_sch_fsm_clr_mask                                  (0x00000002)
#define CBUS_MSC_17_spi_fsm_clr_mask                                  (0x00000001)
#define CBUS_MSC_17_que_fsm_clr(data)                                 (0x00000004&((data)<<2))
#define CBUS_MSC_17_sch_fsm_clr(data)                                 (0x00000002&((data)<<1))
#define CBUS_MSC_17_spi_fsm_clr(data)                                 (0x00000001&(data))
#define CBUS_MSC_17_get_que_fsm_clr(data)                             ((0x00000004&(data))>>2)
#define CBUS_MSC_17_get_sch_fsm_clr(data)                             ((0x00000002&(data))>>1)
#define CBUS_MSC_17_get_spi_fsm_clr(data)                             (0x00000001&(data))


#define CBUS_MSC_18                                                   0x980352c0
#define CBUS_MSC_18_reg_addr                                          "0xd80352c0"
#define CBUS_MSC_18_reg                                               0xd80352c0
#define CBUS_MSC_18_inst_addr                                         "0x00B0"
#define CBUS_MSC_18_inst                                              0x00B0
#define set_CBUS_MSC_18_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_18_reg)=data)
#define get_CBUS_MSC_18_reg                                           (*((volatile unsigned int*)CBUS_MSC_18_reg))
#define CBUS_MSC_18_que_fsm_shift                                     (8)
#define CBUS_MSC_18_sch_fsm_shift                                     (4)
#define CBUS_MSC_18_spi_fsm_shift                                     (0)
#define CBUS_MSC_18_que_fsm_mask                                      (0x00000F00)
#define CBUS_MSC_18_sch_fsm_mask                                      (0x000000F0)
#define CBUS_MSC_18_spi_fsm_mask                                      (0x0000000F)
#define CBUS_MSC_18_que_fsm(data)                                     (0x00000F00&((data)<<8))
#define CBUS_MSC_18_sch_fsm(data)                                     (0x000000F0&((data)<<4))
#define CBUS_MSC_18_spi_fsm(data)                                     (0x0000000F&(data))
#define CBUS_MSC_18_get_que_fsm(data)                                 ((0x00000F00&(data))>>8)
#define CBUS_MSC_18_get_sch_fsm(data)                                 ((0x000000F0&(data))>>4)
#define CBUS_MSC_18_get_spi_fsm(data)                                 (0x0000000F&(data))


#define CBUS_MSC_19                                                   0x980352c4
#define CBUS_MSC_19_reg_addr                                          "0xd80352c4"
#define CBUS_MSC_19_reg                                               0xd80352c4
#define CBUS_MSC_19_inst_addr                                         "0x00B1"
#define CBUS_MSC_19_inst                                              0x00B1
#define set_CBUS_MSC_19_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_19_reg)=data)
#define get_CBUS_MSC_19_reg                                           (*((volatile unsigned int*)CBUS_MSC_19_reg))
#define CBUS_MSC_19_cap_offset_shift                                  (0)
#define CBUS_MSC_19_cap_offset_mask                                   (0x000000FF)
#define CBUS_MSC_19_cap_offset(data)                                  (0x000000FF&(data))
#define CBUS_MSC_19_get_cap_offset(data)                              (0x000000FF&(data))


#define CBUS_MSC_1A                                                   0x980352c8
#define CBUS_MSC_1A_reg_addr                                          "0xd80352c8"
#define CBUS_MSC_1A_reg                                               0xd80352c8
#define CBUS_MSC_1A_inst_addr                                         "0x00B2"
#define CBUS_MSC_1A_inst                                              0x00B2
#define set_CBUS_MSC_1A_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_1A_reg)=data)
#define get_CBUS_MSC_1A_reg                                           (*((volatile unsigned int*)CBUS_MSC_1A_reg))
#define CBUS_MSC_1A_int_offset_shift                                  (0)
#define CBUS_MSC_1A_int_offset_mask                                   (0x000000FF)
#define CBUS_MSC_1A_int_offset(data)                                  (0x000000FF&(data))
#define CBUS_MSC_1A_get_int_offset(data)                              (0x000000FF&(data))


#define CBUS_MSC_1B                                                   0x980352cc
#define CBUS_MSC_1B_reg_addr                                          "0xd80352cc"
#define CBUS_MSC_1B_reg                                               0xd80352cc
#define CBUS_MSC_1B_inst_addr                                         "0x00B3"
#define CBUS_MSC_1B_inst                                              0x00B3
#define set_CBUS_MSC_1B_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_1B_reg)=data)
#define get_CBUS_MSC_1B_reg                                           (*((volatile unsigned int*)CBUS_MSC_1B_reg))
#define CBUS_MSC_1B_sta_offset_shift                                  (0)
#define CBUS_MSC_1B_sta_offset_mask                                   (0x000000FF)
#define CBUS_MSC_1B_sta_offset(data)                                  (0x000000FF&(data))
#define CBUS_MSC_1B_get_sta_offset(data)                              (0x000000FF&(data))


#define CBUS_MSC_1C                                                   0x980352d0
#define CBUS_MSC_1C_reg_addr                                          "0xd80352d0"
#define CBUS_MSC_1C_reg                                               0xd80352d0
#define CBUS_MSC_1C_inst_addr                                         "0x00B4"
#define CBUS_MSC_1C_inst                                              0x00B4
#define set_CBUS_MSC_1C_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_1C_reg)=data)
#define get_CBUS_MSC_1C_reg                                           (*((volatile unsigned int*)CBUS_MSC_1C_reg))
#define CBUS_MSC_1C_scr_offset_shift                                  (0)
#define CBUS_MSC_1C_scr_offset_mask                                   (0x000000FF)
#define CBUS_MSC_1C_scr_offset(data)                                  (0x000000FF&(data))
#define CBUS_MSC_1C_get_scr_offset(data)                              (0x000000FF&(data))


#define CBUS_MSC_1D                                                   0x980352d4
#define CBUS_MSC_1D_reg_addr                                          "0xd80352d4"
#define CBUS_MSC_1D_reg                                               0xd80352d4
#define CBUS_MSC_1D_inst_addr                                         "0x00B5"
#define CBUS_MSC_1D_inst                                              0x00B5
#define set_CBUS_MSC_1D_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_1D_reg)=data)
#define get_CBUS_MSC_1D_reg                                           (*((volatile unsigned int*)CBUS_MSC_1D_reg))
#define CBUS_MSC_1D_ddc_err_force_shift                               (1)
#define CBUS_MSC_1D_msc_err_force_shift                               (0)
#define CBUS_MSC_1D_ddc_err_force_mask                                (0x00000002)
#define CBUS_MSC_1D_msc_err_force_mask                                (0x00000001)
#define CBUS_MSC_1D_ddc_err_force(data)                               (0x00000002&((data)<<1))
#define CBUS_MSC_1D_msc_err_force(data)                               (0x00000001&(data))
#define CBUS_MSC_1D_get_ddc_err_force(data)                           ((0x00000002&(data))>>1)
#define CBUS_MSC_1D_get_msc_err_force(data)                           (0x00000001&(data))


#define CBUS_MSC_1E                                                   0x980352d8
#define CBUS_MSC_1E_reg_addr                                          "0xd80352d8"
#define CBUS_MSC_1E_reg                                               0xd80352d8
#define CBUS_MSC_1E_inst_addr                                         "0x00B6"
#define CBUS_MSC_1E_inst                                              0x00B6
#define set_CBUS_MSC_1E_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_1E_reg)=data)
#define get_CBUS_MSC_1E_reg                                           (*((volatile unsigned int*)CBUS_MSC_1E_reg))
#define CBUS_MSC_1E_ddc_err_fw_shift                                  (0)
#define CBUS_MSC_1E_ddc_err_fw_mask                                   (0x000000FF)
#define CBUS_MSC_1E_ddc_err_fw(data)                                  (0x000000FF&(data))
#define CBUS_MSC_1E_get_ddc_err_fw(data)                              (0x000000FF&(data))


#define CBUS_MSC_1F                                                   0x980352dc
#define CBUS_MSC_1F_reg_addr                                          "0xd80352dc"
#define CBUS_MSC_1F_reg                                               0xd80352dc
#define CBUS_MSC_1F_inst_addr                                         "0x00B7"
#define CBUS_MSC_1F_inst                                              0x00B7
#define set_CBUS_MSC_1F_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_1F_reg)=data)
#define get_CBUS_MSC_1F_reg                                           (*((volatile unsigned int*)CBUS_MSC_1F_reg))
#define CBUS_MSC_1F_msc_err_fw_shift                                  (0)
#define CBUS_MSC_1F_msc_err_fw_mask                                   (0x000000FF)
#define CBUS_MSC_1F_msc_err_fw(data)                                  (0x000000FF&(data))
#define CBUS_MSC_1F_get_msc_err_fw(data)                              (0x000000FF&(data))


#define CBUS_MSC_20                                                   0x980352e0
#define CBUS_MSC_20_reg_addr                                          "0xd80352e0"
#define CBUS_MSC_20_reg                                               0xd80352e0
#define CBUS_MSC_20_inst_addr                                         "0x00B8"
#define CBUS_MSC_20_inst                                              0x00B8
#define set_CBUS_MSC_20_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_20_reg)=data)
#define get_CBUS_MSC_20_reg                                           (*((volatile unsigned int*)CBUS_MSC_20_reg))
#define CBUS_MSC_20_ucp_rcv_shift                                     (0)
#define CBUS_MSC_20_ucp_rcv_mask                                      (0x000000FF)
#define CBUS_MSC_20_ucp_rcv(data)                                     (0x000000FF&(data))
#define CBUS_MSC_20_get_ucp_rcv(data)                                 (0x000000FF&(data))


#define CBUS_MSC_21                                                   0x980352e4
#define CBUS_MSC_21_reg_addr                                          "0xd80352e4"
#define CBUS_MSC_21_reg                                               0xd80352e4
#define CBUS_MSC_21_inst_addr                                         "0x00B9"
#define CBUS_MSC_21_inst                                              0x00B9
#define set_CBUS_MSC_21_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_21_reg)=data)
#define get_CBUS_MSC_21_reg                                           (*((volatile unsigned int*)CBUS_MSC_21_reg))
#define CBUS_MSC_21_ucpk_rcv_shift                                    (0)
#define CBUS_MSC_21_ucpk_rcv_mask                                     (0x000000FF)
#define CBUS_MSC_21_ucpk_rcv(data)                                    (0x000000FF&(data))
#define CBUS_MSC_21_get_ucpk_rcv(data)                                (0x000000FF&(data))


#define CBUS_MSC_22                                                   0x980352e8
#define CBUS_MSC_22_reg_addr                                          "0xd80352e8"
#define CBUS_MSC_22_reg                                               0xd80352e8
#define CBUS_MSC_22_inst_addr                                         "0x00BA"
#define CBUS_MSC_22_inst                                              0x00BA
#define set_CBUS_MSC_22_reg(data)                                     (*((volatile unsigned int*)CBUS_MSC_22_reg)=data)
#define get_CBUS_MSC_22_reg                                           (*((volatile unsigned int*)CBUS_MSC_22_reg))
#define CBUS_MSC_22_ucpe_rcv_shift                                    (0)
#define CBUS_MSC_22_ucpe_rcv_mask                                     (0x000000FF)
#define CBUS_MSC_22_ucpe_rcv(data)                                    (0x000000FF&(data))
#define CBUS_MSC_22_get_ucpe_rcv(data)                                (0x000000FF&(data))


#define FW0_REQ_00                                                    0x98035300
#define FW0_REQ_00_reg_addr                                           "0xd8035300"
#define FW0_REQ_00_reg                                                0xd8035300
#define FW0_REQ_00_inst_addr                                          "0x00C0"
#define FW0_REQ_00_inst                                               0x00C0
#define set_FW0_REQ_00_reg(data)                                      (*((volatile unsigned int*)FW0_REQ_00_reg)=data)
#define get_FW0_REQ_00_reg                                            (*((volatile unsigned int*)FW0_REQ_00_reg))
#define FW0_REQ_00_fw0_req_shift                                      (8)
#define FW0_REQ_00_fw0_fifo_clr_shift                                 (7)
#define FW0_REQ_00_fw0_fifo_full_shift                                (6)
#define FW0_REQ_00_fw0_fifo_empty_shift                               (5)
#define FW0_REQ_00_fw0_tx_case_shift                                  (2)
#define FW0_REQ_00_fw0_head_shift                                     (0)
#define FW0_REQ_00_fw0_req_mask                                       (0x00000100)
#define FW0_REQ_00_fw0_fifo_clr_mask                                  (0x00000080)
#define FW0_REQ_00_fw0_fifo_full_mask                                 (0x00000040)
#define FW0_REQ_00_fw0_fifo_empty_mask                                (0x00000020)
#define FW0_REQ_00_fw0_tx_case_mask                                   (0x0000001C)
#define FW0_REQ_00_fw0_head_mask                                      (0x00000003)
#define FW0_REQ_00_fw0_req(data)                                      (0x00000100&((data)<<8))
#define FW0_REQ_00_fw0_fifo_clr(data)                                 (0x00000080&((data)<<7))
#define FW0_REQ_00_fw0_fifo_full(data)                                (0x00000040&((data)<<6))
#define FW0_REQ_00_fw0_fifo_empty(data)                               (0x00000020&((data)<<5))
#define FW0_REQ_00_fw0_tx_case(data)                                  (0x0000001C&((data)<<2))
#define FW0_REQ_00_fw0_head(data)                                     (0x00000003&(data))
#define FW0_REQ_00_get_fw0_req(data)                                  ((0x00000100&(data))>>8)
#define FW0_REQ_00_get_fw0_fifo_clr(data)                             ((0x00000080&(data))>>7)
#define FW0_REQ_00_get_fw0_fifo_full(data)                            ((0x00000040&(data))>>6)
#define FW0_REQ_00_get_fw0_fifo_empty(data)                           ((0x00000020&(data))>>5)
#define FW0_REQ_00_get_fw0_tx_case(data)                              ((0x0000001C&(data))>>2)
#define FW0_REQ_00_get_fw0_head(data)                                 (0x00000003&(data))


#define FW0_REQ_01                                                    0x98035304
#define FW0_REQ_01_reg_addr                                           "0xd8035304"
#define FW0_REQ_01_reg                                                0xd8035304
#define FW0_REQ_01_inst_addr                                          "0x00C1"
#define FW0_REQ_01_inst                                               0x00C1
#define set_FW0_REQ_01_reg(data)                                      (*((volatile unsigned int*)FW0_REQ_01_reg)=data)
#define get_FW0_REQ_01_reg                                            (*((volatile unsigned int*)FW0_REQ_01_reg))
#define FW0_REQ_01_fw0_cmd1_shift                                     (0)
#define FW0_REQ_01_fw0_cmd1_mask                                      (0x000000FF)
#define FW0_REQ_01_fw0_cmd1(data)                                     (0x000000FF&(data))
#define FW0_REQ_01_get_fw0_cmd1(data)                                 (0x000000FF&(data))


#define FW0_REQ_02                                                    0x98035308
#define FW0_REQ_02_reg_addr                                           "0xd8035308"
#define FW0_REQ_02_reg                                                0xd8035308
#define FW0_REQ_02_inst_addr                                          "0x00C2"
#define FW0_REQ_02_inst                                               0x00C2
#define set_FW0_REQ_02_reg(data)                                      (*((volatile unsigned int*)FW0_REQ_02_reg)=data)
#define get_FW0_REQ_02_reg                                            (*((volatile unsigned int*)FW0_REQ_02_reg))
#define FW0_REQ_02_fw0_cmd2_shift                                     (0)
#define FW0_REQ_02_fw0_cmd2_mask                                      (0x000000FF)
#define FW0_REQ_02_fw0_cmd2(data)                                     (0x000000FF&(data))
#define FW0_REQ_02_get_fw0_cmd2(data)                                 (0x000000FF&(data))


#define FW0_REQ_03                                                    0x9803530c
#define FW0_REQ_03_reg_addr                                           "0xd803530c"
#define FW0_REQ_03_reg                                                0xd803530c
#define FW0_REQ_03_inst_addr                                          "0x00C3"
#define FW0_REQ_03_inst                                               0x00C3
#define set_FW0_REQ_03_reg(data)                                      (*((volatile unsigned int*)FW0_REQ_03_reg)=data)
#define get_FW0_REQ_03_reg                                            (*((volatile unsigned int*)FW0_REQ_03_reg))
#define FW0_REQ_03_fw0_offset_shift                                   (0)
#define FW0_REQ_03_fw0_offset_mask                                    (0x000000FF)
#define FW0_REQ_03_fw0_offset(data)                                   (0x000000FF&(data))
#define FW0_REQ_03_get_fw0_offset(data)                               (0x000000FF&(data))


#define FW0_REQ_04                                                    0x98035310
#define FW0_REQ_04_reg_addr                                           "0xd8035310"
#define FW0_REQ_04_reg                                                0xd8035310
#define FW0_REQ_04_inst_addr                                          "0x00C4"
#define FW0_REQ_04_inst                                               0x00C4
#define set_FW0_REQ_04_reg(data)                                      (*((volatile unsigned int*)FW0_REQ_04_reg)=data)
#define get_FW0_REQ_04_reg                                            (*((volatile unsigned int*)FW0_REQ_04_reg))
#define FW0_REQ_04_fw0_data_shift                                     (0)
#define FW0_REQ_04_fw0_data_mask                                      (0x000000FF)
#define FW0_REQ_04_fw0_data(data)                                     (0x000000FF&(data))
#define FW0_REQ_04_get_fw0_data(data)                                 (0x000000FF&(data))


#define FW0_REQ_05                                                    0x98035314
#define FW0_REQ_05_reg_addr                                           "0xd8035314"
#define FW0_REQ_05_reg                                                0xd8035314
#define FW0_REQ_05_inst_addr                                          "0x00C5"
#define FW0_REQ_05_inst                                               0x00C5
#define set_FW0_REQ_05_reg(data)                                      (*((volatile unsigned int*)FW0_REQ_05_reg)=data)
#define get_FW0_REQ_05_reg                                            (*((volatile unsigned int*)FW0_REQ_05_reg))
#define FW0_REQ_05_fw0_rty_ovr_shift                                  (9)
#define FW0_REQ_05_fw0_fin_shift                                      (8)
#define FW0_REQ_05_fw0_cmd_event_shift                                (7)
#define FW0_REQ_05_fw0_data_event_shift                               (6)
#define FW0_REQ_05_fw0_rcv_err_shift                                  (5)
#define FW0_REQ_05_fw0_fin_irq_en_shift                               (4)
#define FW0_REQ_05_fw0_cmd_irq_en_shift                               (3)
#define FW0_REQ_05_fw0_data_irq_en_shift                              (2)
#define FW0_REQ_05_fw0_wait_case_shift                                (0)
#define FW0_REQ_05_fw0_rty_ovr_mask                                   (0x00000200)
#define FW0_REQ_05_fw0_fin_mask                                       (0x00000100)
#define FW0_REQ_05_fw0_cmd_event_mask                                 (0x00000080)
#define FW0_REQ_05_fw0_data_event_mask                                (0x00000040)
#define FW0_REQ_05_fw0_rcv_err_mask                                   (0x00000020)
#define FW0_REQ_05_fw0_fin_irq_en_mask                                (0x00000010)
#define FW0_REQ_05_fw0_cmd_irq_en_mask                                (0x00000008)
#define FW0_REQ_05_fw0_data_irq_en_mask                               (0x00000004)
#define FW0_REQ_05_fw0_wait_case_mask                                 (0x00000003)
#define FW0_REQ_05_fw0_rty_ovr(data)                                  (0x00000200&((data)<<9))
#define FW0_REQ_05_fw0_fin(data)                                      (0x00000100&((data)<<8))
#define FW0_REQ_05_fw0_cmd_event(data)                                (0x00000080&((data)<<7))
#define FW0_REQ_05_fw0_data_event(data)                               (0x00000040&((data)<<6))
#define FW0_REQ_05_fw0_rcv_err(data)                                  (0x00000020&((data)<<5))
#define FW0_REQ_05_fw0_fin_irq_en(data)                               (0x00000010&((data)<<4))
#define FW0_REQ_05_fw0_cmd_irq_en(data)                               (0x00000008&((data)<<3))
#define FW0_REQ_05_fw0_data_irq_en(data)                              (0x00000004&((data)<<2))
#define FW0_REQ_05_fw0_wait_case(data)                                (0x00000003&(data))
#define FW0_REQ_05_get_fw0_rty_ovr(data)                              ((0x00000200&(data))>>9)
#define FW0_REQ_05_get_fw0_fin(data)                                  ((0x00000100&(data))>>8)
#define FW0_REQ_05_get_fw0_cmd_event(data)                            ((0x00000080&(data))>>7)
#define FW0_REQ_05_get_fw0_data_event(data)                           ((0x00000040&(data))>>6)
#define FW0_REQ_05_get_fw0_rcv_err(data)                              ((0x00000020&(data))>>5)
#define FW0_REQ_05_get_fw0_fin_irq_en(data)                           ((0x00000010&(data))>>4)
#define FW0_REQ_05_get_fw0_cmd_irq_en(data)                           ((0x00000008&(data))>>3)
#define FW0_REQ_05_get_fw0_data_irq_en(data)                          ((0x00000004&(data))>>2)
#define FW0_REQ_05_get_fw0_wait_case(data)                            (0x00000003&(data))


#define FW0_REQ_06                                                    0x98035318
#define FW0_REQ_06_reg_addr                                           "0xd8035318"
#define FW0_REQ_06_reg                                                0xd8035318
#define FW0_REQ_06_inst_addr                                          "0x00C6"
#define FW0_REQ_06_inst                                               0x00C6
#define set_FW0_REQ_06_reg(data)                                      (*((volatile unsigned int*)FW0_REQ_06_reg)=data)
#define get_FW0_REQ_06_reg                                            (*((volatile unsigned int*)FW0_REQ_06_reg))
#define FW0_REQ_06_fw0_cmd_rcv_shift                                  (0)
#define FW0_REQ_06_fw0_cmd_rcv_mask                                   (0x000000FF)
#define FW0_REQ_06_fw0_cmd_rcv(data)                                  (0x000000FF&(data))
#define FW0_REQ_06_get_fw0_cmd_rcv(data)                              (0x000000FF&(data))


#define FW0_REQ_07                                                    0x9803531c
#define FW0_REQ_07_reg_addr                                           "0xd803531c"
#define FW0_REQ_07_reg                                                0xd803531c
#define FW0_REQ_07_inst_addr                                          "0x00C7"
#define FW0_REQ_07_inst                                               0x00C7
#define set_FW0_REQ_07_reg(data)                                      (*((volatile unsigned int*)FW0_REQ_07_reg)=data)
#define get_FW0_REQ_07_reg                                            (*((volatile unsigned int*)FW0_REQ_07_reg))
#define FW0_REQ_07_fw0_data_rcv_shift                                 (0)
#define FW0_REQ_07_fw0_data_rcv_mask                                  (0x000000FF)
#define FW0_REQ_07_fw0_data_rcv(data)                                 (0x000000FF&(data))
#define FW0_REQ_07_get_fw0_data_rcv(data)                             (0x000000FF&(data))


#define FW0_REQ_08                                                    0x98035320
#define FW0_REQ_08_reg_addr                                           "0xd8035320"
#define FW0_REQ_08_reg                                                0xd8035320
#define FW0_REQ_08_inst_addr                                          "0x00C8"
#define FW0_REQ_08_inst                                               0x00C8
#define set_FW0_REQ_08_reg(data)                                      (*((volatile unsigned int*)FW0_REQ_08_reg)=data)
#define get_FW0_REQ_08_reg                                            (*((volatile unsigned int*)FW0_REQ_08_reg))
#define FW0_REQ_08_fw0_rd_en_shift                                    (13)
#define FW0_REQ_08_fw0_fifo_len_shift                                 (8)
#define FW0_REQ_08_fw0_rdata_shift                                    (0)
#define FW0_REQ_08_fw0_rd_en_mask                                     (0x00002000)
#define FW0_REQ_08_fw0_fifo_len_mask                                  (0x00001F00)
#define FW0_REQ_08_fw0_rdata_mask                                     (0x000000FF)
#define FW0_REQ_08_fw0_rd_en(data)                                    (0x00002000&((data)<<13))
#define FW0_REQ_08_fw0_fifo_len(data)                                 (0x00001F00&((data)<<8))
#define FW0_REQ_08_fw0_rdata(data)                                    (0x000000FF&(data))
#define FW0_REQ_08_get_fw0_rd_en(data)                                ((0x00002000&(data))>>13)
#define FW0_REQ_08_get_fw0_fifo_len(data)                             ((0x00001F00&(data))>>8)
#define FW0_REQ_08_get_fw0_rdata(data)                                (0x000000FF&(data))


#define CBUS_DDC_00                                                   0x980353c0
#define CBUS_DDC_00_reg_addr                                          "0xd80353c0"
#define CBUS_DDC_00_reg                                               0xd80353c0
#define CBUS_DDC_00_inst_addr                                         "0x00F0"
#define CBUS_DDC_00_inst                                              0x00F0
#define set_CBUS_DDC_00_reg(data)                                     (*((volatile unsigned int*)CBUS_DDC_00_reg)=data)
#define get_CBUS_DDC_00_reg                                           (*((volatile unsigned int*)CBUS_DDC_00_reg))
#define CBUS_DDC_00_ddc_err_code_shift                                (0)
#define CBUS_DDC_00_ddc_err_code_mask                                 (0x000000FF)
#define CBUS_DDC_00_ddc_err_code(data)                                (0x000000FF&(data))
#define CBUS_DDC_00_get_ddc_err_code(data)                            (0x000000FF&(data))


#define CBUS_DDC_01                                                   0x980353c4
#define CBUS_DDC_01_reg_addr                                          "0xd80353c4"
#define CBUS_DDC_01_reg                                               0xd80353c4
#define CBUS_DDC_01_inst_addr                                         "0x00F1"
#define CBUS_DDC_01_inst                                              0x00F1
#define set_CBUS_DDC_01_reg(data)                                     (*((volatile unsigned int*)CBUS_DDC_01_reg)=data)
#define get_CBUS_DDC_01_reg                                           (*((volatile unsigned int*)CBUS_DDC_01_reg))
#define CBUS_DDC_01_iic_ck_tgt_shift                                  (0)
#define CBUS_DDC_01_iic_ck_tgt_mask                                   (0x000000FF)
#define CBUS_DDC_01_iic_ck_tgt(data)                                  (0x000000FF&(data))
#define CBUS_DDC_01_get_iic_ck_tgt(data)                              (0x000000FF&(data))


#define CBUS_DDC_02                                                   0x980353c8
#define CBUS_DDC_02_reg_addr                                          "0xd80353c8"
#define CBUS_DDC_02_reg                                               0xd80353c8
#define CBUS_DDC_02_inst_addr                                         "0x00F2"
#define CBUS_DDC_02_inst                                              0x00F2
#define set_CBUS_DDC_02_reg(data)                                     (*((volatile unsigned int*)CBUS_DDC_02_reg)=data)
#define get_CBUS_DDC_02_reg                                           (*((volatile unsigned int*)CBUS_DDC_02_reg))
#define CBUS_DDC_02_mcuddc_en_shift                                   (7)
#define CBUS_DDC_02_ddc_prior_dis_shift                               (6)
#define CBUS_DDC_02_ddc_cmd_event_shift                               (5)
#define CBUS_DDC_02_ddc_data_event_shift                              (4)
#define CBUS_DDC_02_ddc_cmd_irq_en_shift                              (3)
#define CBUS_DDC_02_ddc_data_irq_en_shift                             (2)
#define CBUS_DDC_02_ddc_req_ctrl_shift                                (1)
#define CBUS_DDC_02_ddc_req_shift                                     (0)
#define CBUS_DDC_02_mcuddc_en_mask                                    (0x00000080)
#define CBUS_DDC_02_ddc_prior_dis_mask                                (0x00000040)
#define CBUS_DDC_02_ddc_cmd_event_mask                                (0x00000020)
#define CBUS_DDC_02_ddc_data_event_mask                               (0x00000010)
#define CBUS_DDC_02_ddc_cmd_irq_en_mask                               (0x00000008)
#define CBUS_DDC_02_ddc_data_irq_en_mask                              (0x00000004)
#define CBUS_DDC_02_ddc_req_ctrl_mask                                 (0x00000002)
#define CBUS_DDC_02_ddc_req_mask                                      (0x00000001)
#define CBUS_DDC_02_mcuddc_en(data)                                   (0x00000080&((data)<<7))
#define CBUS_DDC_02_ddc_prior_dis(data)                               (0x00000040&((data)<<6))
#define CBUS_DDC_02_ddc_cmd_event(data)                               (0x00000020&((data)<<5))
#define CBUS_DDC_02_ddc_data_event(data)                              (0x00000010&((data)<<4))
#define CBUS_DDC_02_ddc_cmd_irq_en(data)                              (0x00000008&((data)<<3))
#define CBUS_DDC_02_ddc_data_irq_en(data)                             (0x00000004&((data)<<2))
#define CBUS_DDC_02_ddc_req_ctrl(data)                                (0x00000002&((data)<<1))
#define CBUS_DDC_02_ddc_req(data)                                     (0x00000001&(data))
#define CBUS_DDC_02_get_mcuddc_en(data)                               ((0x00000080&(data))>>7)
#define CBUS_DDC_02_get_ddc_prior_dis(data)                           ((0x00000040&(data))>>6)
#define CBUS_DDC_02_get_ddc_cmd_event(data)                           ((0x00000020&(data))>>5)
#define CBUS_DDC_02_get_ddc_data_event(data)                          ((0x00000010&(data))>>4)
#define CBUS_DDC_02_get_ddc_cmd_irq_en(data)                          ((0x00000008&(data))>>3)
#define CBUS_DDC_02_get_ddc_data_irq_en(data)                         ((0x00000004&(data))>>2)
#define CBUS_DDC_02_get_ddc_req_ctrl(data)                            ((0x00000002&(data))>>1)
#define CBUS_DDC_02_get_ddc_req(data)                                 (0x00000001&(data))


#define CBUS_DDC_03                                                   0x980353cc
#define CBUS_DDC_03_reg_addr                                          "0xd80353cc"
#define CBUS_DDC_03_reg                                               0xd80353cc
#define CBUS_DDC_03_inst_addr                                         "0x00F3"
#define CBUS_DDC_03_inst                                              0x00F3
#define set_CBUS_DDC_03_reg(data)                                     (*((volatile unsigned int*)CBUS_DDC_03_reg)=data)
#define get_CBUS_DDC_03_reg                                           (*((volatile unsigned int*)CBUS_DDC_03_reg))
#define CBUS_DDC_03_ddc_rcv_cmd_shift                                 (0)
#define CBUS_DDC_03_ddc_rcv_cmd_mask                                  (0x000000FF)
#define CBUS_DDC_03_ddc_rcv_cmd(data)                                 (0x000000FF&(data))
#define CBUS_DDC_03_get_ddc_rcv_cmd(data)                             (0x000000FF&(data))


#define CBUS_DDC_04                                                   0x980353d0
#define CBUS_DDC_04_reg_addr                                          "0xd80353d0"
#define CBUS_DDC_04_reg                                               0xd80353d0
#define CBUS_DDC_04_inst_addr                                         "0x00F4"
#define CBUS_DDC_04_inst                                              0x00F4
#define set_CBUS_DDC_04_reg(data)                                     (*((volatile unsigned int*)CBUS_DDC_04_reg)=data)
#define get_CBUS_DDC_04_reg                                           (*((volatile unsigned int*)CBUS_DDC_04_reg))
#define CBUS_DDC_04_ddc_rcv_data_shift                                (0)
#define CBUS_DDC_04_ddc_rcv_data_mask                                 (0x000000FF)
#define CBUS_DDC_04_ddc_rcv_data(data)                                (0x000000FF&(data))
#define CBUS_DDC_04_get_ddc_rcv_data(data)                            (0x000000FF&(data))


#define CBUS_DDC_05                                                   0x980353d4
#define CBUS_DDC_05_reg_addr                                          "0xd80353d4"
#define CBUS_DDC_05_reg                                               0xd80353d4
#define CBUS_DDC_05_inst_addr                                         "0x00F5"
#define CBUS_DDC_05_inst                                              0x00F5
#define set_CBUS_DDC_05_reg(data)                                     (*((volatile unsigned int*)CBUS_DDC_05_reg)=data)
#define get_CBUS_DDC_05_reg                                           (*((volatile unsigned int*)CBUS_DDC_05_reg))
#define CBUS_DDC_05_ddc_data_fw_shift                                 (0)
#define CBUS_DDC_05_ddc_data_fw_mask                                  (0x000000FF)
#define CBUS_DDC_05_ddc_data_fw(data)                                 (0x000000FF&(data))
#define CBUS_DDC_05_get_ddc_data_fw(data)                             (0x000000FF&(data))


#define CBUS_DDC_06                                                   0x980353d8
#define CBUS_DDC_06_reg_addr                                          "0xd80353d8"
#define CBUS_DDC_06_reg                                               0xd80353d8
#define CBUS_DDC_06_inst_addr                                         "0x00F6"
#define CBUS_DDC_06_inst                                              0x00F6
#define set_CBUS_DDC_06_reg(data)                                     (*((volatile unsigned int*)CBUS_DDC_06_reg)=data)
#define get_CBUS_DDC_06_reg                                           (*((volatile unsigned int*)CBUS_DDC_06_reg))
#define CBUS_DDC_06_ddc_eof_irq_shift                                 (3)
#define CBUS_DDC_06_ddc_eof_irq_en_shift                              (2)
#define CBUS_DDC_06_ddcrd_rst_en_shift                                (1)
#define CBUS_DDC_06_ddcrd_new_md_shift                                (0)
#define CBUS_DDC_06_ddc_eof_irq_mask                                  (0x00000008)
#define CBUS_DDC_06_ddc_eof_irq_en_mask                               (0x00000004)
#define CBUS_DDC_06_ddcrd_rst_en_mask                                 (0x00000002)
#define CBUS_DDC_06_ddcrd_new_md_mask                                 (0x00000001)
#define CBUS_DDC_06_ddc_eof_irq(data)                                 (0x00000008&((data)<<3))
#define CBUS_DDC_06_ddc_eof_irq_en(data)                              (0x00000004&((data)<<2))
#define CBUS_DDC_06_ddcrd_rst_en(data)                                (0x00000002&((data)<<1))
#define CBUS_DDC_06_ddcrd_new_md(data)                                (0x00000001&(data))
#define CBUS_DDC_06_get_ddc_eof_irq(data)                             ((0x00000008&(data))>>3)
#define CBUS_DDC_06_get_ddc_eof_irq_en(data)                          ((0x00000004&(data))>>2)
#define CBUS_DDC_06_get_ddcrd_rst_en(data)                            ((0x00000002&(data))>>1)
#define CBUS_DDC_06_get_ddcrd_new_md(data)                            (0x00000001&(data))


#define CBUS_WDOG                                                     0x980353e0
#define CBUS_WDOG_reg_addr                                            "0xd80353e0"
#define CBUS_WDOG_reg                                                 0xd80353e0
#define CBUS_WDOG_inst_addr                                           "0x00F8"
#define CBUS_WDOG_inst                                                0x00F8
#define set_CBUS_WDOG_reg(data)                                       (*((volatile unsigned int*)CBUS_WDOG_reg)=data)
#define get_CBUS_WDOG_reg                                             (*((volatile unsigned int*)CBUS_WDOG_reg))
#define CBUS_WDOG_clk_mod_vwd_shift                                   (5)
#define CBUS_WDOG_clk_mod_awd_shift                                   (4)
#define CBUS_WDOG_mute_en_vwd_shift                                   (3)
#define CBUS_WDOG_mute_en_awd_shift                                   (2)
#define CBUS_WDOG_path_en_off_vwd_shift                               (1)
#define CBUS_WDOG_path_en_off_awd_shift                               (0)
#define CBUS_WDOG_clk_mod_vwd_mask                                    (0x00000020)
#define CBUS_WDOG_clk_mod_awd_mask                                    (0x00000010)
#define CBUS_WDOG_mute_en_vwd_mask                                    (0x00000008)
#define CBUS_WDOG_mute_en_awd_mask                                    (0x00000004)
#define CBUS_WDOG_path_en_off_vwd_mask                                (0x00000002)
#define CBUS_WDOG_path_en_off_awd_mask                                (0x00000001)
#define CBUS_WDOG_clk_mod_vwd(data)                                   (0x00000020&((data)<<5))
#define CBUS_WDOG_clk_mod_awd(data)                                   (0x00000010&((data)<<4))
#define CBUS_WDOG_mute_en_vwd(data)                                   (0x00000008&((data)<<3))
#define CBUS_WDOG_mute_en_awd(data)                                   (0x00000004&((data)<<2))
#define CBUS_WDOG_path_en_off_vwd(data)                               (0x00000002&((data)<<1))
#define CBUS_WDOG_path_en_off_awd(data)                               (0x00000001&(data))
#define CBUS_WDOG_get_clk_mod_vwd(data)                               ((0x00000020&(data))>>5)
#define CBUS_WDOG_get_clk_mod_awd(data)                               ((0x00000010&(data))>>4)
#define CBUS_WDOG_get_mute_en_vwd(data)                               ((0x00000008&(data))>>3)
#define CBUS_WDOG_get_mute_en_awd(data)                               ((0x00000004&(data))>>2)
#define CBUS_WDOG_get_path_en_off_vwd(data)                           ((0x00000002&(data))>>1)
#define CBUS_WDOG_get_path_en_off_awd(data)                           (0x00000001&(data))


#define CBUS_INT_INDEX                                                0x980353e4
#define CBUS_INT_INDEX_reg_addr                                       "0xd80353e4"
#define CBUS_INT_INDEX_reg                                            0xd80353e4
#define CBUS_INT_INDEX_inst_addr                                      "0x00F9"
#define CBUS_INT_INDEX_inst                                           0x00F9
#define set_CBUS_INT_INDEX_reg(data)                                  (*((volatile unsigned int*)CBUS_INT_INDEX_reg)=data)
#define get_CBUS_INT_INDEX_reg                                        (*((volatile unsigned int*)CBUS_INT_INDEX_reg))
#define CBUS_INT_INDEX_arbiter_irq_shift                              (5)
#define CBUS_INT_INDEX_ddc_irq_shift                                  (4)
#define CBUS_INT_INDEX_msc_ch_irq_shift                               (3)
#define CBUS_INT_INDEX_msc_int_irq_shift                              (2)
#define CBUS_INT_INDEX_msc_stat_irq_shift                             (1)
#define CBUS_INT_INDEX_ctrl_01_resv_shift                             (0)
#define CBUS_INT_INDEX_arbiter_irq_mask                               (0x00000020)
#define CBUS_INT_INDEX_ddc_irq_mask                                   (0x00000010)
#define CBUS_INT_INDEX_msc_ch_irq_mask                                (0x00000008)
#define CBUS_INT_INDEX_msc_int_irq_mask                               (0x00000004)
#define CBUS_INT_INDEX_msc_stat_irq_mask                              (0x00000002)
#define CBUS_INT_INDEX_ctrl_01_resv_mask                              (0x00000001)
#define CBUS_INT_INDEX_arbiter_irq(data)                              (0x00000020&((data)<<5))
#define CBUS_INT_INDEX_ddc_irq(data)                                  (0x00000010&((data)<<4))
#define CBUS_INT_INDEX_msc_ch_irq(data)                               (0x00000008&((data)<<3))
#define CBUS_INT_INDEX_msc_int_irq(data)                              (0x00000004&((data)<<2))
#define CBUS_INT_INDEX_msc_stat_irq(data)                             (0x00000002&((data)<<1))
#define CBUS_INT_INDEX_ctrl_01_resv(data)                             (0x00000001&(data))
#define CBUS_INT_INDEX_get_arbiter_irq(data)                          ((0x00000020&(data))>>5)
#define CBUS_INT_INDEX_get_ddc_irq(data)                              ((0x00000010&(data))>>4)
#define CBUS_INT_INDEX_get_msc_ch_irq(data)                           ((0x00000008&(data))>>3)
#define CBUS_INT_INDEX_get_msc_int_irq(data)                          ((0x00000004&(data))>>2)
#define CBUS_INT_INDEX_get_msc_stat_irq(data)                         ((0x00000002&(data))>>1)
#define CBUS_INT_INDEX_get_ctrl_01_resv(data)                         (0x00000001&(data))


#define CBUS_TEST                                                     0x980353e8
#define CBUS_TEST_reg_addr                                            "0xd80353e8"
#define CBUS_TEST_reg                                                 0xd80353e8
#define CBUS_TEST_inst_addr                                           "0x00FA"
#define CBUS_TEST_inst                                                0x00FA
#define set_CBUS_TEST_reg(data)                                       (*((volatile unsigned int*)CBUS_TEST_reg)=data)
#define get_CBUS_TEST_reg                                             (*((volatile unsigned int*)CBUS_TEST_reg))
#define CBUS_TEST_cbus_test_md_shift                                  (6)
#define CBUS_TEST_fw_out_shift                                        (5)
#define CBUS_TEST_dbg_sel_shift                                       (2)
#define CBUS_TEST_cbus_test_md_mask                                   (0x000000C0)
#define CBUS_TEST_fw_out_mask                                         (0x00000020)
#define CBUS_TEST_dbg_sel_mask                                        (0x0000001C)
#define CBUS_TEST_cbus_test_md(data)                                  (0x000000C0&((data)<<6))
#define CBUS_TEST_fw_out(data)                                        (0x00000020&((data)<<5))
#define CBUS_TEST_dbg_sel(data)                                       (0x0000001C&((data)<<2))
#define CBUS_TEST_get_cbus_test_md(data)                              ((0x000000C0&(data))>>6)
#define CBUS_TEST_get_fw_out(data)                                    ((0x00000020&(data))>>5)
#define CBUS_TEST_get_dbg_sel(data)                                   ((0x0000001C&(data))>>2)


#define CBUS_DUMMY0                                                   0x980353ec
#define CBUS_DUMMY0_reg_addr                                          "0xd80353ec"
#define CBUS_DUMMY0_reg                                               0xd80353ec
#define CBUS_DUMMY0_inst_addr                                         "0x00FB"
#define CBUS_DUMMY0_inst                                              0x00FB
#define set_CBUS_DUMMY0_reg(data)                                     (*((volatile unsigned int*)CBUS_DUMMY0_reg)=data)
#define get_CBUS_DUMMY0_reg                                           (*((volatile unsigned int*)CBUS_DUMMY0_reg))
#define CBUS_DUMMY0_cbus_dummy0_29_16_shift                           (18)
#define CBUS_DUMMY0_ddc_idle_no_tx_abort_gated_shift                  (17)
#define CBUS_DUMMY0_msc_clientt0_que_gated_shift                      (16)
#define CBUS_DUMMY0_cbus_dummy0_15_0_shift                            (0)
#define CBUS_DUMMY0_cbus_dummy0_29_16_mask                            (0xFFFC0000)
#define CBUS_DUMMY0_ddc_idle_no_tx_abort_gated_mask                   (0x00020000)
#define CBUS_DUMMY0_msc_clientt0_que_gated_mask                       (0x00010000)
#define CBUS_DUMMY0_cbus_dummy0_15_0_mask                             (0x0000FFFF)
#define CBUS_DUMMY0_cbus_dummy0_29_16(data)                           (0xFFFC0000&((data)<<18))
#define CBUS_DUMMY0_ddc_idle_no_tx_abort_gated(data)                  (0x00020000&((data)<<17))
#define CBUS_DUMMY0_msc_clientt0_que_gated(data)                      (0x00010000&((data)<<16))
#define CBUS_DUMMY0_cbus_dummy0_15_0(data)                            (0x0000FFFF&(data))
#define CBUS_DUMMY0_get_cbus_dummy0_29_16(data)                       ((0xFFFC0000&(data))>>18)
#define CBUS_DUMMY0_get_ddc_idle_no_tx_abort_gated(data)              ((0x00020000&(data))>>17)
#define CBUS_DUMMY0_get_msc_clientt0_que_gated(data)                  ((0x00010000&(data))>>16)
#define CBUS_DUMMY0_get_cbus_dummy0_15_0(data)                        (0x0000FFFF&(data))


#define CBUS_IRQ                                                      0x980353f0
#define CBUS_IRQ_reg_addr                                             "0xd80353f0"
#define CBUS_IRQ_reg                                                  0xd80353f0
#define CBUS_IRQ_inst_addr                                            "0x00FC"
#define CBUS_IRQ_inst                                                 0x00FC
#define set_CBUS_IRQ_reg(data)                                        (*((volatile unsigned int*)CBUS_IRQ_reg)=data)
#define get_CBUS_IRQ_reg                                              (*((volatile unsigned int*)CBUS_IRQ_reg))
#define CBUS_IRQ_cbus_core_irq_en_shift                               (20)
#define CBUS_IRQ_cbus1_irq_en_shift                                   (19)
#define CBUS_IRQ_ecbus_dmac_irq_en_shift                              (18)
#define CBUS_IRQ_dummy_17_16_shift                                    (16)
#define CBUS_IRQ_cbus_core_irq_shift                                  (4)
#define CBUS_IRQ_cbus1_irq_shift                                      (3)
#define CBUS_IRQ_ecbus_dmac_irq_shift                                 (2)
#define CBUS_IRQ_cbus_core_irq_en_mask                                (0x00100000)
#define CBUS_IRQ_cbus1_irq_en_mask                                    (0x00080000)
#define CBUS_IRQ_ecbus_dmac_irq_en_mask                               (0x00040000)
#define CBUS_IRQ_dummy_17_16_mask                                     (0x00030000)
#define CBUS_IRQ_cbus_core_irq_mask                                   (0x00000010)
#define CBUS_IRQ_cbus1_irq_mask                                       (0x00000008)
#define CBUS_IRQ_ecbus_dmac_irq_mask                                  (0x00000004)
#define CBUS_IRQ_cbus_core_irq_en(data)                               (0x00100000&((data)<<20))
#define CBUS_IRQ_cbus1_irq_en(data)                                   (0x00080000&((data)<<19))
#define CBUS_IRQ_ecbus_dmac_irq_en(data)                              (0x00040000&((data)<<18))
#define CBUS_IRQ_dummy_17_16(data)                                    (0x00030000&((data)<<16))
#define CBUS_IRQ_cbus_core_irq(data)                                  (0x00000010&((data)<<4))
#define CBUS_IRQ_cbus1_irq(data)                                      (0x00000008&((data)<<3))
#define CBUS_IRQ_ecbus_dmac_irq(data)                                 (0x00000004&((data)<<2))
#define CBUS_IRQ_get_cbus_core_irq_en(data)                           ((0x00100000&(data))>>20)
#define CBUS_IRQ_get_cbus1_irq_en(data)                               ((0x00080000&(data))>>19)
#define CBUS_IRQ_get_ecbus_dmac_irq_en(data)                          ((0x00040000&(data))>>18)
#define CBUS_IRQ_get_dummy_17_16(data)                                ((0x00030000&(data))>>16)
#define CBUS_IRQ_get_cbus_core_irq(data)                              ((0x00000010&(data))>>4)
#define CBUS_IRQ_get_cbus1_irq(data)                                  ((0x00000008&(data))>>3)
#define CBUS_IRQ_get_ecbus_dmac_irq(data)                             ((0x00000004&(data))>>2)


#define OCBUS_CTRL_00                                                 0x98035400
#define OCBUS_CTRL_00_reg_addr                                        "0xd8035400"
#define OCBUS_CTRL_00_reg                                             0xd8035400
#define OCBUS_CTRL_00_inst_addr                                       "0x0100"
#define OCBUS_CTRL_00_inst                                            0x0100
#define set_OCBUS_CTRL_00_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_00_reg)=data)
#define get_OCBUS_CTRL_00_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_00_reg))
#define OCBUS_CTRL_00_cbus3_en_shift                                  (7)
#define OCBUS_CTRL_00_cbus1_en_shift                                  (6)
#define OCBUS_CTRL_00_dummy_5_0_shift                                 (0)
#define OCBUS_CTRL_00_cbus3_en_mask                                   (0x00000080)
#define OCBUS_CTRL_00_cbus1_en_mask                                   (0x00000040)
#define OCBUS_CTRL_00_dummy_5_0_mask                                  (0x0000003F)
#define OCBUS_CTRL_00_cbus3_en(data)                                  (0x00000080&((data)<<7))
#define OCBUS_CTRL_00_cbus1_en(data)                                  (0x00000040&((data)<<6))
#define OCBUS_CTRL_00_dummy_5_0(data)                                 (0x0000003F&(data))
#define OCBUS_CTRL_00_get_cbus3_en(data)                              ((0x00000080&(data))>>7)
#define OCBUS_CTRL_00_get_cbus1_en(data)                              ((0x00000040&(data))>>6)
#define OCBUS_CTRL_00_get_dummy_5_0(data)                             (0x0000003F&(data))


#define OCBUS_CTRL_01                                                 0x98035404
#define OCBUS_CTRL_01_reg_addr                                        "0xd8035404"
#define OCBUS_CTRL_01_reg                                             0xd8035404
#define OCBUS_CTRL_01_inst_addr                                       "0x0101"
#define OCBUS_CTRL_01_inst                                            0x0101
#define set_OCBUS_CTRL_01_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_01_reg)=data)
#define get_OCBUS_CTRL_01_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_01_reg))
#define OCBUS_CTRL_01_cbus1_retry_num_shift                           (4)
#define OCBUS_CTRL_01_invalid_chk_shift                               (3)
#define OCBUS_CTRL_01_cbus1_retry_irq_en_shift                        (2)
#define OCBUS_CTRL_01_cbus1_retry_limit_shift                         (1)
#define OCBUS_CTRL_01_cbus1_coll_shift                                (0)
#define OCBUS_CTRL_01_cbus1_retry_num_mask                            (0x000000F0)
#define OCBUS_CTRL_01_invalid_chk_mask                                (0x00000008)
#define OCBUS_CTRL_01_cbus1_retry_irq_en_mask                         (0x00000004)
#define OCBUS_CTRL_01_cbus1_retry_limit_mask                          (0x00000002)
#define OCBUS_CTRL_01_cbus1_coll_mask                                 (0x00000001)
#define OCBUS_CTRL_01_cbus1_retry_num(data)                           (0x000000F0&((data)<<4))
#define OCBUS_CTRL_01_invalid_chk(data)                               (0x00000008&((data)<<3))
#define OCBUS_CTRL_01_cbus1_retry_irq_en(data)                        (0x00000004&((data)<<2))
#define OCBUS_CTRL_01_cbus1_retry_limit(data)                         (0x00000002&((data)<<1))
#define OCBUS_CTRL_01_cbus1_coll(data)                                (0x00000001&(data))
#define OCBUS_CTRL_01_get_cbus1_retry_num(data)                       ((0x000000F0&(data))>>4)
#define OCBUS_CTRL_01_get_invalid_chk(data)                           ((0x00000008&(data))>>3)
#define OCBUS_CTRL_01_get_cbus1_retry_irq_en(data)                    ((0x00000004&(data))>>2)
#define OCBUS_CTRL_01_get_cbus1_retry_limit(data)                     ((0x00000002&(data))>>1)
#define OCBUS_CTRL_01_get_cbus1_coll(data)                            (0x00000001&(data))


#define OCBUS_CTRL_10                                                 0x98035408
#define OCBUS_CTRL_10_reg_addr                                        "0xd8035408"
#define OCBUS_CTRL_10_reg                                             0xd8035408
#define OCBUS_CTRL_10_inst_addr                                       "0x0102"
#define OCBUS_CTRL_10_inst                                            0x0102
#define set_OCBUS_CTRL_10_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_10_reg)=data)
#define get_OCBUS_CTRL_10_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_10_reg))
#define OCBUS_CTRL_10_wr_xstat_irq_shift                              (1)
#define OCBUS_CTRL_10_rd_xdevcap_irq_shift                            (0)
#define OCBUS_CTRL_10_wr_xstat_irq_mask                               (0x00000002)
#define OCBUS_CTRL_10_rd_xdevcap_irq_mask                             (0x00000001)
#define OCBUS_CTRL_10_wr_xstat_irq(data)                              (0x00000002&((data)<<1))
#define OCBUS_CTRL_10_rd_xdevcap_irq(data)                            (0x00000001&(data))
#define OCBUS_CTRL_10_get_wr_xstat_irq(data)                          ((0x00000002&(data))>>1)
#define OCBUS_CTRL_10_get_rd_xdevcap_irq(data)                        (0x00000001&(data))


#define OCBUS_CTRL_11                                                 0x9803540c
#define OCBUS_CTRL_11_reg_addr                                        "0xd803540c"
#define OCBUS_CTRL_11_reg                                             0xd803540c
#define OCBUS_CTRL_11_inst_addr                                       "0x0103"
#define OCBUS_CTRL_11_inst                                            0x0103
#define set_OCBUS_CTRL_11_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_11_reg)=data)
#define get_OCBUS_CTRL_11_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_11_reg))
#define OCBUS_CTRL_11_wr_xstat_irq_en_shift                           (1)
#define OCBUS_CTRL_11_rd_xdevcap_irq_en_shift                         (0)
#define OCBUS_CTRL_11_wr_xstat_irq_en_mask                            (0x00000002)
#define OCBUS_CTRL_11_rd_xdevcap_irq_en_mask                          (0x00000001)
#define OCBUS_CTRL_11_wr_xstat_irq_en(data)                           (0x00000002&((data)<<1))
#define OCBUS_CTRL_11_rd_xdevcap_irq_en(data)                         (0x00000001&(data))
#define OCBUS_CTRL_11_get_wr_xstat_irq_en(data)                       ((0x00000002&(data))>>1)
#define OCBUS_CTRL_11_get_rd_xdevcap_irq_en(data)                     (0x00000001&(data))


#define OCBUS_CTRL_12                                                 0x98035410
#define OCBUS_CTRL_12_reg_addr                                        "0xd8035410"
#define OCBUS_CTRL_12_reg                                             0xd8035410
#define OCBUS_CTRL_12_inst_addr                                       "0x0104"
#define OCBUS_CTRL_12_inst                                            0x0104
#define set_OCBUS_CTRL_12_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_12_reg)=data)
#define get_OCBUS_CTRL_12_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_12_reg))
#define OCBUS_CTRL_12_rbp_irq_shift                                   (7)
#define OCBUS_CTRL_12_rbpk_irq_shift                                  (6)
#define OCBUS_CTRL_12_rbpe_irq_shift                                  (5)
#define OCBUS_CTRL_12_ucp_irq_shift                                   (4)
#define OCBUS_CTRL_12_ucpk_irq_shift                                  (3)
#define OCBUS_CTRL_12_ucpe_irq_shift                                  (2)
#define OCBUS_CTRL_12_rusb_irq_shift                                  (1)
#define OCBUS_CTRL_12_rusbk_irq_shift                                 (0)
#define OCBUS_CTRL_12_rbp_irq_mask                                    (0x00000080)
#define OCBUS_CTRL_12_rbpk_irq_mask                                   (0x00000040)
#define OCBUS_CTRL_12_rbpe_irq_mask                                   (0x00000020)
#define OCBUS_CTRL_12_ucp_irq_mask                                    (0x00000010)
#define OCBUS_CTRL_12_ucpk_irq_mask                                   (0x00000008)
#define OCBUS_CTRL_12_ucpe_irq_mask                                   (0x00000004)
#define OCBUS_CTRL_12_rusb_irq_mask                                   (0x00000002)
#define OCBUS_CTRL_12_rusbk_irq_mask                                  (0x00000001)
#define OCBUS_CTRL_12_rbp_irq(data)                                   (0x00000080&((data)<<7))
#define OCBUS_CTRL_12_rbpk_irq(data)                                  (0x00000040&((data)<<6))
#define OCBUS_CTRL_12_rbpe_irq(data)                                  (0x00000020&((data)<<5))
#define OCBUS_CTRL_12_ucp_irq(data)                                   (0x00000010&((data)<<4))
#define OCBUS_CTRL_12_ucpk_irq(data)                                  (0x00000008&((data)<<3))
#define OCBUS_CTRL_12_ucpe_irq(data)                                  (0x00000004&((data)<<2))
#define OCBUS_CTRL_12_rusb_irq(data)                                  (0x00000002&((data)<<1))
#define OCBUS_CTRL_12_rusbk_irq(data)                                 (0x00000001&(data))
#define OCBUS_CTRL_12_get_rbp_irq(data)                               ((0x00000080&(data))>>7)
#define OCBUS_CTRL_12_get_rbpk_irq(data)                              ((0x00000040&(data))>>6)
#define OCBUS_CTRL_12_get_rbpe_irq(data)                              ((0x00000020&(data))>>5)
#define OCBUS_CTRL_12_get_ucp_irq(data)                               ((0x00000010&(data))>>4)
#define OCBUS_CTRL_12_get_ucpk_irq(data)                              ((0x00000008&(data))>>3)
#define OCBUS_CTRL_12_get_ucpe_irq(data)                              ((0x00000004&(data))>>2)
#define OCBUS_CTRL_12_get_rusb_irq(data)                              ((0x00000002&(data))>>1)
#define OCBUS_CTRL_12_get_rusbk_irq(data)                             (0x00000001&(data))


#define OCBUS_CTRL_13                                                 0x98035414
#define OCBUS_CTRL_13_reg_addr                                        "0xd8035414"
#define OCBUS_CTRL_13_reg                                             0xd8035414
#define OCBUS_CTRL_13_inst_addr                                       "0x0105"
#define OCBUS_CTRL_13_inst                                            0x0105
#define set_OCBUS_CTRL_13_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_13_reg)=data)
#define get_OCBUS_CTRL_13_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_13_reg))
#define OCBUS_CTRL_13_rhid_irq_shift                                  (7)
#define OCBUS_CTRL_13_rhidk_irq_shift                                 (6)
#define OCBUS_CTRL_13_att_irq_shift                                   (5)
#define OCBUS_CTRL_13_attk_irq_shift                                  (4)
#define OCBUS_CTRL_13_btrig_irq_shift                                 (3)
#define OCBUS_CTRL_13_breq_irq_shift                                  (2)
#define OCBUS_CTRL_13_brdy_irq_shift                                  (1)
#define OCBUS_CTRL_13_bstop_irq_shift                                 (0)
#define OCBUS_CTRL_13_rhid_irq_mask                                   (0x00000080)
#define OCBUS_CTRL_13_rhidk_irq_mask                                  (0x00000040)
#define OCBUS_CTRL_13_att_irq_mask                                    (0x00000020)
#define OCBUS_CTRL_13_attk_irq_mask                                   (0x00000010)
#define OCBUS_CTRL_13_btrig_irq_mask                                  (0x00000008)
#define OCBUS_CTRL_13_breq_irq_mask                                   (0x00000004)
#define OCBUS_CTRL_13_brdy_irq_mask                                   (0x00000002)
#define OCBUS_CTRL_13_bstop_irq_mask                                  (0x00000001)
#define OCBUS_CTRL_13_rhid_irq(data)                                  (0x00000080&((data)<<7))
#define OCBUS_CTRL_13_rhidk_irq(data)                                 (0x00000040&((data)<<6))
#define OCBUS_CTRL_13_att_irq(data)                                   (0x00000020&((data)<<5))
#define OCBUS_CTRL_13_attk_irq(data)                                  (0x00000010&((data)<<4))
#define OCBUS_CTRL_13_btrig_irq(data)                                 (0x00000008&((data)<<3))
#define OCBUS_CTRL_13_breq_irq(data)                                  (0x00000004&((data)<<2))
#define OCBUS_CTRL_13_brdy_irq(data)                                  (0x00000002&((data)<<1))
#define OCBUS_CTRL_13_bstop_irq(data)                                 (0x00000001&(data))
#define OCBUS_CTRL_13_get_rhid_irq(data)                              ((0x00000080&(data))>>7)
#define OCBUS_CTRL_13_get_rhidk_irq(data)                             ((0x00000040&(data))>>6)
#define OCBUS_CTRL_13_get_att_irq(data)                               ((0x00000020&(data))>>5)
#define OCBUS_CTRL_13_get_attk_irq(data)                              ((0x00000010&(data))>>4)
#define OCBUS_CTRL_13_get_btrig_irq(data)                             ((0x00000008&(data))>>3)
#define OCBUS_CTRL_13_get_breq_irq(data)                              ((0x00000004&(data))>>2)
#define OCBUS_CTRL_13_get_brdy_irq(data)                              ((0x00000002&(data))>>1)
#define OCBUS_CTRL_13_get_bstop_irq(data)                             (0x00000001&(data))


#define OCBUS_CTRL_14                                                 0x98035418
#define OCBUS_CTRL_14_reg_addr                                        "0xd8035418"
#define OCBUS_CTRL_14_reg                                             0xd8035418
#define OCBUS_CTRL_14_inst_addr                                       "0x0106"
#define OCBUS_CTRL_14_inst                                            0x0106
#define set_OCBUS_CTRL_14_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_14_reg)=data)
#define get_OCBUS_CTRL_14_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_14_reg))
#define OCBUS_CTRL_14_rbp_irq_en_shift                                (7)
#define OCBUS_CTRL_14_rbpk_irq_en_shift                               (6)
#define OCBUS_CTRL_14_rbpe_irq_en_shift                               (5)
#define OCBUS_CTRL_14_ucp_irq_en_shift                                (4)
#define OCBUS_CTRL_14_ucpk_irq_en_shift                               (3)
#define OCBUS_CTRL_14_ucpe_irq_en_shift                               (2)
#define OCBUS_CTRL_14_rusb_irq_en_shift                               (1)
#define OCBUS_CTRL_14_rusbk_irq_en_shift                              (0)
#define OCBUS_CTRL_14_rbp_irq_en_mask                                 (0x00000080)
#define OCBUS_CTRL_14_rbpk_irq_en_mask                                (0x00000040)
#define OCBUS_CTRL_14_rbpe_irq_en_mask                                (0x00000020)
#define OCBUS_CTRL_14_ucp_irq_en_mask                                 (0x00000010)
#define OCBUS_CTRL_14_ucpk_irq_en_mask                                (0x00000008)
#define OCBUS_CTRL_14_ucpe_irq_en_mask                                (0x00000004)
#define OCBUS_CTRL_14_rusb_irq_en_mask                                (0x00000002)
#define OCBUS_CTRL_14_rusbk_irq_en_mask                               (0x00000001)
#define OCBUS_CTRL_14_rbp_irq_en(data)                                (0x00000080&((data)<<7))
#define OCBUS_CTRL_14_rbpk_irq_en(data)                               (0x00000040&((data)<<6))
#define OCBUS_CTRL_14_rbpe_irq_en(data)                               (0x00000020&((data)<<5))
#define OCBUS_CTRL_14_ucp_irq_en(data)                                (0x00000010&((data)<<4))
#define OCBUS_CTRL_14_ucpk_irq_en(data)                               (0x00000008&((data)<<3))
#define OCBUS_CTRL_14_ucpe_irq_en(data)                               (0x00000004&((data)<<2))
#define OCBUS_CTRL_14_rusb_irq_en(data)                               (0x00000002&((data)<<1))
#define OCBUS_CTRL_14_rusbk_irq_en(data)                              (0x00000001&(data))
#define OCBUS_CTRL_14_get_rbp_irq_en(data)                            ((0x00000080&(data))>>7)
#define OCBUS_CTRL_14_get_rbpk_irq_en(data)                           ((0x00000040&(data))>>6)
#define OCBUS_CTRL_14_get_rbpe_irq_en(data)                           ((0x00000020&(data))>>5)
#define OCBUS_CTRL_14_get_ucp_irq_en(data)                            ((0x00000010&(data))>>4)
#define OCBUS_CTRL_14_get_ucpk_irq_en(data)                           ((0x00000008&(data))>>3)
#define OCBUS_CTRL_14_get_ucpe_irq_en(data)                           ((0x00000004&(data))>>2)
#define OCBUS_CTRL_14_get_rusb_irq_en(data)                           ((0x00000002&(data))>>1)
#define OCBUS_CTRL_14_get_rusbk_irq_en(data)                          (0x00000001&(data))


#define OCBUS_CTRL_15                                                 0x9803541c
#define OCBUS_CTRL_15_reg_addr                                        "0xd803541c"
#define OCBUS_CTRL_15_reg                                             0xd803541c
#define OCBUS_CTRL_15_inst_addr                                       "0x0107"
#define OCBUS_CTRL_15_inst                                            0x0107
#define set_OCBUS_CTRL_15_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_15_reg)=data)
#define get_OCBUS_CTRL_15_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_15_reg))
#define OCBUS_CTRL_15_rhid_irq_en_shift                               (7)
#define OCBUS_CTRL_15_rhidk_irq_en_shift                              (6)
#define OCBUS_CTRL_15_att_irq_en_shift                                (5)
#define OCBUS_CTRL_15_attk_irq_en_shift                               (4)
#define OCBUS_CTRL_15_btrig_irq_en_shift                              (3)
#define OCBUS_CTRL_15_breq_irq_en_shift                               (2)
#define OCBUS_CTRL_15_brdy_irq_en_shift                               (1)
#define OCBUS_CTRL_15_bstop_irq_en_shift                              (0)
#define OCBUS_CTRL_15_rhid_irq_en_mask                                (0x00000080)
#define OCBUS_CTRL_15_rhidk_irq_en_mask                               (0x00000040)
#define OCBUS_CTRL_15_att_irq_en_mask                                 (0x00000020)
#define OCBUS_CTRL_15_attk_irq_en_mask                                (0x00000010)
#define OCBUS_CTRL_15_btrig_irq_en_mask                               (0x00000008)
#define OCBUS_CTRL_15_breq_irq_en_mask                                (0x00000004)
#define OCBUS_CTRL_15_brdy_irq_en_mask                                (0x00000002)
#define OCBUS_CTRL_15_bstop_irq_en_mask                               (0x00000001)
#define OCBUS_CTRL_15_rhid_irq_en(data)                               (0x00000080&((data)<<7))
#define OCBUS_CTRL_15_rhidk_irq_en(data)                              (0x00000040&((data)<<6))
#define OCBUS_CTRL_15_att_irq_en(data)                                (0x00000020&((data)<<5))
#define OCBUS_CTRL_15_attk_irq_en(data)                               (0x00000010&((data)<<4))
#define OCBUS_CTRL_15_btrig_irq_en(data)                              (0x00000008&((data)<<3))
#define OCBUS_CTRL_15_breq_irq_en(data)                               (0x00000004&((data)<<2))
#define OCBUS_CTRL_15_brdy_irq_en(data)                               (0x00000002&((data)<<1))
#define OCBUS_CTRL_15_bstop_irq_en(data)                              (0x00000001&(data))
#define OCBUS_CTRL_15_get_rhid_irq_en(data)                           ((0x00000080&(data))>>7)
#define OCBUS_CTRL_15_get_rhidk_irq_en(data)                          ((0x00000040&(data))>>6)
#define OCBUS_CTRL_15_get_att_irq_en(data)                            ((0x00000020&(data))>>5)
#define OCBUS_CTRL_15_get_attk_irq_en(data)                           ((0x00000010&(data))>>4)
#define OCBUS_CTRL_15_get_btrig_irq_en(data)                          ((0x00000008&(data))>>3)
#define OCBUS_CTRL_15_get_breq_irq_en(data)                           ((0x00000004&(data))>>2)
#define OCBUS_CTRL_15_get_brdy_irq_en(data)                           ((0x00000002&(data))>>1)
#define OCBUS_CTRL_15_get_bstop_irq_en(data)                          (0x00000001&(data))


#define OCBUS_CTRL_16                                                 0x98035420
#define OCBUS_CTRL_16_reg_addr                                        "0xd8035420"
#define OCBUS_CTRL_16_reg                                             0xd8035420
#define OCBUS_CTRL_16_inst_addr                                       "0x0108"
#define OCBUS_CTRL_16_inst                                            0x0108
#define set_OCBUS_CTRL_16_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_16_reg)=data)
#define get_OCBUS_CTRL_16_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_16_reg))
#define OCBUS_CTRL_16_rbp_rcv_shift                                   (0)
#define OCBUS_CTRL_16_rbp_rcv_mask                                    (0x000000FF)
#define OCBUS_CTRL_16_rbp_rcv(data)                                   (0x000000FF&(data))
#define OCBUS_CTRL_16_get_rbp_rcv(data)                               (0x000000FF&(data))


#define OCBUS_CTRL_17                                                 0x98035424
#define OCBUS_CTRL_17_reg_addr                                        "0xd8035424"
#define OCBUS_CTRL_17_reg                                             0xd8035424
#define OCBUS_CTRL_17_inst_addr                                       "0x0109"
#define OCBUS_CTRL_17_inst                                            0x0109
#define set_OCBUS_CTRL_17_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_17_reg)=data)
#define get_OCBUS_CTRL_17_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_17_reg))
#define OCBUS_CTRL_17_rbpk_rcv_shift                                  (0)
#define OCBUS_CTRL_17_rbpk_rcv_mask                                   (0x000000FF)
#define OCBUS_CTRL_17_rbpk_rcv(data)                                  (0x000000FF&(data))
#define OCBUS_CTRL_17_get_rbpk_rcv(data)                              (0x000000FF&(data))


#define OCBUS_CTRL_18                                                 0x98035428
#define OCBUS_CTRL_18_reg_addr                                        "0xd8035428"
#define OCBUS_CTRL_18_reg                                             0xd8035428
#define OCBUS_CTRL_18_inst_addr                                       "0x010A"
#define OCBUS_CTRL_18_inst                                            0x010A
#define set_OCBUS_CTRL_18_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_18_reg)=data)
#define get_OCBUS_CTRL_18_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_18_reg))
#define OCBUS_CTRL_18_rbpe_rcv_shift                                  (0)
#define OCBUS_CTRL_18_rbpe_rcv_mask                                   (0x000000FF)
#define OCBUS_CTRL_18_rbpe_rcv(data)                                  (0x000000FF&(data))
#define OCBUS_CTRL_18_get_rbpe_rcv(data)                              (0x000000FF&(data))


#define OCBUS_CTRL_19                                                 0x9803542c
#define OCBUS_CTRL_19_reg_addr                                        "0xd803542c"
#define OCBUS_CTRL_19_reg                                             0xd803542c
#define OCBUS_CTRL_19_inst_addr                                       "0x010B"
#define OCBUS_CTRL_19_inst                                            0x010B
#define set_OCBUS_CTRL_19_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_19_reg)=data)
#define get_OCBUS_CTRL_19_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_19_reg))
#define OCBUS_CTRL_19_ucp_rcv_shift                                   (0)
#define OCBUS_CTRL_19_ucp_rcv_mask                                    (0x000000FF)
#define OCBUS_CTRL_19_ucp_rcv(data)                                   (0x000000FF&(data))
#define OCBUS_CTRL_19_get_ucp_rcv(data)                               (0x000000FF&(data))


#define OCBUS_CTRL_1A                                                 0x98035430
#define OCBUS_CTRL_1A_reg_addr                                        "0xd8035430"
#define OCBUS_CTRL_1A_reg                                             0xd8035430
#define OCBUS_CTRL_1A_inst_addr                                       "0x010C"
#define OCBUS_CTRL_1A_inst                                            0x010C
#define set_OCBUS_CTRL_1A_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_1A_reg)=data)
#define get_OCBUS_CTRL_1A_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_1A_reg))
#define OCBUS_CTRL_1A_ucpk_rcv_shift                                  (0)
#define OCBUS_CTRL_1A_ucpk_rcv_mask                                   (0x000000FF)
#define OCBUS_CTRL_1A_ucpk_rcv(data)                                  (0x000000FF&(data))
#define OCBUS_CTRL_1A_get_ucpk_rcv(data)                              (0x000000FF&(data))


#define OCBUS_CTRL_1B                                                 0x98035434
#define OCBUS_CTRL_1B_reg_addr                                        "0xd8035434"
#define OCBUS_CTRL_1B_reg                                             0xd8035434
#define OCBUS_CTRL_1B_inst_addr                                       "0x010D"
#define OCBUS_CTRL_1B_inst                                            0x010D
#define set_OCBUS_CTRL_1B_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_1B_reg)=data)
#define get_OCBUS_CTRL_1B_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_1B_reg))
#define OCBUS_CTRL_1B_ucpe_rcv_shift                                  (0)
#define OCBUS_CTRL_1B_ucpe_rcv_mask                                   (0x000000FF)
#define OCBUS_CTRL_1B_ucpe_rcv(data)                                  (0x000000FF&(data))
#define OCBUS_CTRL_1B_get_ucpe_rcv(data)                              (0x000000FF&(data))


#define OCBUS_CTRL_1C                                                 0x98035438
#define OCBUS_CTRL_1C_reg_addr                                        "0xd8035438"
#define OCBUS_CTRL_1C_reg                                             0xd8035438
#define OCBUS_CTRL_1C_inst_addr                                       "0x010E"
#define OCBUS_CTRL_1C_inst                                            0x010E
#define set_OCBUS_CTRL_1C_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_1C_reg)=data)
#define get_OCBUS_CTRL_1C_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_1C_reg))
#define OCBUS_CTRL_1C_rusb_rcv_shift                                  (0)
#define OCBUS_CTRL_1C_rusb_rcv_mask                                   (0x000000FF)
#define OCBUS_CTRL_1C_rusb_rcv(data)                                  (0x000000FF&(data))
#define OCBUS_CTRL_1C_get_rusb_rcv(data)                              (0x000000FF&(data))


#define OCBUS_CTRL_1D                                                 0x9803543c
#define OCBUS_CTRL_1D_reg_addr                                        "0xd803543c"
#define OCBUS_CTRL_1D_reg                                             0xd803543c
#define OCBUS_CTRL_1D_inst_addr                                       "0x010F"
#define OCBUS_CTRL_1D_inst                                            0x010F
#define set_OCBUS_CTRL_1D_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_1D_reg)=data)
#define get_OCBUS_CTRL_1D_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_1D_reg))
#define OCBUS_CTRL_1D_rusbk_rcv_shift                                 (0)
#define OCBUS_CTRL_1D_rusbk_rcv_mask                                  (0x000000FF)
#define OCBUS_CTRL_1D_rusbk_rcv(data)                                 (0x000000FF&(data))
#define OCBUS_CTRL_1D_get_rusbk_rcv(data)                             (0x000000FF&(data))


#define OCBUS_CTRL_1E                                                 0x98035440
#define OCBUS_CTRL_1E_reg_addr                                        "0xd8035440"
#define OCBUS_CTRL_1E_reg                                             0xd8035440
#define OCBUS_CTRL_1E_inst_addr                                       "0x0110"
#define OCBUS_CTRL_1E_inst                                            0x0110
#define set_OCBUS_CTRL_1E_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_1E_reg)=data)
#define get_OCBUS_CTRL_1E_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_1E_reg))
#define OCBUS_CTRL_1E_rhid_rcv_shift                                  (0)
#define OCBUS_CTRL_1E_rhid_rcv_mask                                   (0x000000FF)
#define OCBUS_CTRL_1E_rhid_rcv(data)                                  (0x000000FF&(data))
#define OCBUS_CTRL_1E_get_rhid_rcv(data)                              (0x000000FF&(data))


#define OCBUS_CTRL_1F                                                 0x98035444
#define OCBUS_CTRL_1F_reg_addr                                        "0xd8035444"
#define OCBUS_CTRL_1F_reg                                             0xd8035444
#define OCBUS_CTRL_1F_inst_addr                                       "0x0111"
#define OCBUS_CTRL_1F_inst                                            0x0111
#define set_OCBUS_CTRL_1F_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_1F_reg)=data)
#define get_OCBUS_CTRL_1F_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_1F_reg))
#define OCBUS_CTRL_1F_rhidk_rcv_shift                                 (0)
#define OCBUS_CTRL_1F_rhidk_rcv_mask                                  (0x000000FF)
#define OCBUS_CTRL_1F_rhidk_rcv(data)                                 (0x000000FF&(data))
#define OCBUS_CTRL_1F_get_rhidk_rcv(data)                             (0x000000FF&(data))


#define OCBUS_CTRL_20                                                 0x98035448
#define OCBUS_CTRL_20_reg_addr                                        "0xd8035448"
#define OCBUS_CTRL_20_reg                                             0xd8035448
#define OCBUS_CTRL_20_inst_addr                                       "0x0112"
#define OCBUS_CTRL_20_inst                                            0x0112
#define set_OCBUS_CTRL_20_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_20_reg)=data)
#define get_OCBUS_CTRL_20_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_20_reg))
#define OCBUS_CTRL_20_att_rcv_shift                                   (0)
#define OCBUS_CTRL_20_att_rcv_mask                                    (0x000000FF)
#define OCBUS_CTRL_20_att_rcv(data)                                   (0x000000FF&(data))
#define OCBUS_CTRL_20_get_att_rcv(data)                               (0x000000FF&(data))


#define OCBUS_CTRL_21                                                 0x9803544c
#define OCBUS_CTRL_21_reg_addr                                        "0xd803544c"
#define OCBUS_CTRL_21_reg                                             0xd803544c
#define OCBUS_CTRL_21_inst_addr                                       "0x0113"
#define OCBUS_CTRL_21_inst                                            0x0113
#define set_OCBUS_CTRL_21_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_21_reg)=data)
#define get_OCBUS_CTRL_21_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_21_reg))
#define OCBUS_CTRL_21_attk_rcv_shift                                  (0)
#define OCBUS_CTRL_21_attk_rcv_mask                                   (0x000000FF)
#define OCBUS_CTRL_21_attk_rcv(data)                                  (0x000000FF&(data))
#define OCBUS_CTRL_21_get_attk_rcv(data)                              (0x000000FF&(data))


#define OCBUS_CTRL_22                                                 0x98035450
#define OCBUS_CTRL_22_reg_addr                                        "0xd8035450"
#define OCBUS_CTRL_22_reg                                             0xd8035450
#define OCBUS_CTRL_22_inst_addr                                       "0x0114"
#define OCBUS_CTRL_22_inst                                            0x0114
#define set_OCBUS_CTRL_22_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_22_reg)=data)
#define get_OCBUS_CTRL_22_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_22_reg))
#define OCBUS_CTRL_22_btrig_rcv_shift                                 (0)
#define OCBUS_CTRL_22_btrig_rcv_mask                                  (0x000000FF)
#define OCBUS_CTRL_22_btrig_rcv(data)                                 (0x000000FF&(data))
#define OCBUS_CTRL_22_get_btrig_rcv(data)                             (0x000000FF&(data))


#define OCBUS_CTRL_23                                                 0x98035454
#define OCBUS_CTRL_23_reg_addr                                        "0xd8035454"
#define OCBUS_CTRL_23_reg                                             0xd8035454
#define OCBUS_CTRL_23_inst_addr                                       "0x0115"
#define OCBUS_CTRL_23_inst                                            0x0115
#define set_OCBUS_CTRL_23_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_23_reg)=data)
#define get_OCBUS_CTRL_23_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_23_reg))
#define OCBUS_CTRL_23_breq_rcv_shift                                  (0)
#define OCBUS_CTRL_23_breq_rcv_mask                                   (0x000000FF)
#define OCBUS_CTRL_23_breq_rcv(data)                                  (0x000000FF&(data))
#define OCBUS_CTRL_23_get_breq_rcv(data)                              (0x000000FF&(data))


#define OCBUS_CTRL_24                                                 0x98035458
#define OCBUS_CTRL_24_reg_addr                                        "0xd8035458"
#define OCBUS_CTRL_24_reg                                             0xd8035458
#define OCBUS_CTRL_24_inst_addr                                       "0x0116"
#define OCBUS_CTRL_24_inst                                            0x0116
#define set_OCBUS_CTRL_24_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_24_reg)=data)
#define get_OCBUS_CTRL_24_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_24_reg))
#define OCBUS_CTRL_24_brdy_rcv_shift                                  (0)
#define OCBUS_CTRL_24_brdy_rcv_mask                                   (0x000000FF)
#define OCBUS_CTRL_24_brdy_rcv(data)                                  (0x000000FF&(data))
#define OCBUS_CTRL_24_get_brdy_rcv(data)                              (0x000000FF&(data))


#define OCBUS_CTRL_25                                                 0x9803545c
#define OCBUS_CTRL_25_reg_addr                                        "0xd803545c"
#define OCBUS_CTRL_25_reg                                             0xd803545c
#define OCBUS_CTRL_25_inst_addr                                       "0x0117"
#define OCBUS_CTRL_25_inst                                            0x0117
#define set_OCBUS_CTRL_25_reg(data)                                   (*((volatile unsigned int*)OCBUS_CTRL_25_reg)=data)
#define get_OCBUS_CTRL_25_reg                                         (*((volatile unsigned int*)OCBUS_CTRL_25_reg))
#define OCBUS_CTRL_25_bstop_rcv_shift                                 (0)
#define OCBUS_CTRL_25_bstop_rcv_mask                                  (0x000000FF)
#define OCBUS_CTRL_25_bstop_rcv(data)                                 (0x000000FF&(data))
#define OCBUS_CTRL_25_get_bstop_rcv(data)                             (0x000000FF&(data))
#endif
