/**************************************************************
// Spec Version                  : 1.6
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Module_Register_Name
// Naming Rule                   : Module_Register_Name
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/7/9 13:46:8
***************************************************************/


#ifndef _AIO_REG_H_INCLUDED_
#define _AIO_REG_H_INCLUDED_
#ifdef  _AIO_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     raw_timout_thld:7;
unsigned int     raw_timout_ctrl:1;
unsigned int     raw_send:1;
unsigned int     hdmirx:1;
unsigned int     edgeneg:1;
unsigned int     wsdelay:1;
unsigned int     slave:1;
unsigned int     bit:3;
unsigned int     reserved_1:9;
unsigned int     rmute0:1;
unsigned int     lmute0:1;
unsigned int     en0:1;
}AIO_I_I2S_GCTL;

typedef struct 
{
unsigned int     reserved_0:14;
unsigned int     rgain:7;
unsigned int     lgain:7;
unsigned int     r2ren:1;
unsigned int     r2len:1;
unsigned int     l2ren:1;
unsigned int     l2len:1;
}AIO_I_I2S_LBMIX;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     adc_en:1;
unsigned int     pin_share:1;
unsigned int     pcm2chsel:1;
unsigned int     wsperiod:6;
unsigned int     protocol:2;
unsigned int     wsdelay:1;
unsigned int     slave:1;
unsigned int     bit:3;
unsigned int     reserved_1:5;
unsigned int     sel:1;
unsigned int     rmute3:1;
unsigned int     lmute3:1;
unsigned int     rmute2:1;
unsigned int     lmute2:1;
unsigned int     rmute1:1;
unsigned int     lmute1:1;
unsigned int     rmute0:1;
unsigned int     lmute0:1;
unsigned int     en0:1;
}AIO_O_I2S_GCTL;

typedef struct 
{
unsigned int     cs1:32;
}AIO_O_PCM_CS1;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     cs2:16;
}AIO_O_PCM_CS2;

typedef struct 
{
unsigned int     reserved_0:22;
unsigned int     pcm2chsel:1;
unsigned int     bit:3;
unsigned int     wait_en:1;
unsigned int     valid:1;
unsigned int     format:1;
unsigned int     rmute:1;
unsigned int     lmute:1;
unsigned int     en:1;
}AIO_O_SPF_GCTL;

typedef struct 
{
unsigned int     cs1:32;
}AIO_O_RAW_CS1;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     cs2:16;
}AIO_O_RAW_CS2;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     realgo:1;
unsigned int     spcnt:7;
unsigned int     fcnt:8;
}AIO_O_SPF_FCNT;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     pcm8chlben:1;
unsigned int     pcm8chlbsel:2;
unsigned int     pcm2chsel:1;
unsigned int     clk_sel:3;
unsigned int     pcmsync:1;
unsigned int     pkt:1;
unsigned int     sample_flat:4;
unsigned int     rmute3:1;
unsigned int     lmute3:1;
unsigned int     rmute2:1;
unsigned int     lmute2:1;
unsigned int     rmute1:1;
unsigned int     lmute1:1;
unsigned int     8ch:1;
unsigned int     bit:3;
unsigned int     wait_en:1;
unsigned int     reserved_1:1;
unsigned int     rmute:1;
unsigned int     lmute:1;
unsigned int     switch_wait_en:1;
unsigned int     sel:2;
unsigned int     en:1;
}AIO_O_HDMI_GCTL;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     realgo:1;
unsigned int     fcnt:8;
}AIO_O_HDMI_FCNT;

typedef struct 
{
unsigned int     cs1:32;
}AIO_O_HDMI_CS1;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     cs2:16;
}AIO_O_HDMI_CS2;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     userdata:8;
unsigned int     valid:8;
}AIO_O_HDMI_INFO;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     daad_lp_en:1;
unsigned int     adda_lp_en:1;
unsigned int     pcm2chsel:1;
unsigned int     rgain:7;
unsigned int     lgain:7;
unsigned int     bit:3;
unsigned int     hpfen:1;
unsigned int     rmute:1;
unsigned int     lmute:1;
unsigned int     en:1;
}AIO_O_ACDAC_GCTL;

typedef struct 
{
unsigned int     write_en14:1;
unsigned int     isel_df2se:2;
unsigned int     write_en13:1;
unsigned int     isel_depop:2;
unsigned int     write_en12:1;
unsigned int     isel_dacvcm:2;
unsigned int     write_en11:1;
unsigned int     isel_dacop:2;
unsigned int     write_en10:1;
unsigned int     powvref:1;
unsigned int     write_en9:1;
unsigned int     powmbias:1;
unsigned int     reserved_0:2;
unsigned int     write_en7:1;
unsigned int     powdf2se:1;
unsigned int     write_en6:1;
unsigned int     powdepop:1;
unsigned int     write_en5:1;
unsigned int     powdac:1;
unsigned int     write_en4:1;
unsigned int     mutel:1;
unsigned int     write_en3:1;
unsigned int     muter:1;
unsigned int     write_en2:1;
unsigned int     normal:1;
unsigned int     write_en1:1;
unsigned int     vcmh_sel:1;
}AIO_O_ACANA_GCTL1;

typedef struct 
{
unsigned int     write_en12:1;
unsigned int     crt_depop_clk_sel:2;
unsigned int     write_en11:1;
unsigned int     depop_rampsel:1;
unsigned int     write_en10:1;
unsigned int     depop_csel:2;
unsigned int     write_en9:1;
unsigned int     depop_enramp:1;
unsigned int     write_en8:1;
unsigned int     vrp_sel:2;
unsigned int     write_en7:1;
unsigned int     isel_vcmh:2;
unsigned int     reserved_0:3;
unsigned int     write_en5:1;
unsigned int     vref_vrefsel:2;
unsigned int     reserved_1:4;
unsigned int     write_en2:1;
unsigned int     isel_vref:2;
unsigned int     reserved_2:3;
}AIO_O_ACANA_GCTL2;

typedef struct 
{
unsigned int     REG_BB_ADCFE_GSELL:2;
unsigned int     REG_BB_ADCFE_GSELR:2;
unsigned int     REG_BB_ADC_OSSEL:2;
unsigned int     REG_BB_ISEL_ADCAA:2;
unsigned int     REG_BB_ISEL_ADCCOMP:2;
unsigned int     REG_BB_ISEL_ADCSUM:2;
unsigned int     REG_BB_ISEL_ADCVCM:2;
unsigned int     REG_BB_ISEL_ADCST1:2;
unsigned int     REG_BB_ISEL_ADCST2:2;
unsigned int     REG_BB_MICBIAS_OCSEL:2;
unsigned int     REG_BB_ADCFE_MUTE_L:3;
unsigned int     REG_BB_ADCFE_MUTE_R:3;
unsigned int     REG_BB_ISEL_MICBIAS:2;
unsigned int     REG_BB_ISEL_MICBST:2;
unsigned int     reserved_0:2;
}AIO_I_ACANA_ADC_GCTL1;

typedef struct 
{
unsigned int     REG_BB_ADC_CKXEN:1;
unsigned int     REG_BB_MICBIAS_ENCHX:1;
unsigned int     REG_BB_MICBIAS_POWSHDT:1;
unsigned int     REG_BB_ADC_FF_POW:1;
unsigned int     REG_BB_ADC_CPEN:1;
unsigned int     REG_BB_MICBIAS_POW:1;
unsigned int     REG_BB_MICBIAS_VSET:1;
unsigned int     REG_BB_MICBST_ENDFL:1;
unsigned int     REG_BB_MICBST_ENDFR:1;
unsigned int     REG_BB_MICBST_ENPDRL:1;
unsigned int     REG_BB_MICBST_ENPDRR:1;
unsigned int     REG_BB_MICBST_GSELL:2;
unsigned int     REG_BB_MICBST_GSELR:2;
unsigned int     REG_BB_MICBST_POW:2;
unsigned int     bb_micbias_clk_sel:2;
unsigned int     rst_adac:1;
unsigned int     REG_ADAC_RSVD:4;
unsigned int     reserved_0:8;
}AIO_I_ACANA_ADC_GCTL2;

typedef struct 
{
unsigned int     REG_BB_MICBIAS_OC:1;
unsigned int     reserved_0:31;
}AIO_I_ACANA_ADC_GCTL3;

typedef struct 
{
unsigned int     alc_atk_mode_rc_ctr:1;
unsigned int     alc_atk_noise_rate:5;
unsigned int     alc_atk_rate:5;
unsigned int     alc_atk_speed_up_rate:5;
unsigned int     alc_speed_up_en:1;
unsigned int     alc_zd_full_ov_en:1;
unsigned int     alc_bk_gain_l:6;
unsigned int     alc_bk_gain_r:6;
unsigned int     alc_ctr_en:1;
unsigned int     alc_drc_en:1;
}AIO_I_ADC_ALC1;

typedef struct 
{
unsigned int     alc_drc_ratio_sel:2;
unsigned int     alc_drc_ratio_sel2:2;
unsigned int     alc_en:1;
unsigned int     alc_force_fast_rc_ctr:1;
unsigned int     alc_force_fast_rc_en:1;
unsigned int     alc_ft_boost:6;
unsigned int     alc_lpf_coef_sel:3;
unsigned int     alc_min_range:3;
unsigned int     alc_noise_gain_hd:1;
unsigned int     alc_noise_gate_exp:4;
unsigned int     alc_noise_gate_en:1;
unsigned int     alc_noise_gate_drop_en:1;
unsigned int     alc_noise_gate_ratio_sel:2;
unsigned int     alc_noise_gate_ht:3;
unsigned int     reserved_0:1;
}AIO_I_ADC_ALC2;

typedef struct 
{
unsigned int     alc_noise_range:2;
unsigned int     alc_off_gain:8;
unsigned int     alc_rate_sel:3;
unsigned int     alc_rc_fast_en:1;
unsigned int     alc_rc_fast_rate:5;
unsigned int     alc_rc_slow_rate:5;
unsigned int     reserved_0:8;
}AIO_I_ADC_ALC3;

typedef struct 
{
unsigned int     alc_rc_wd_max:8;
unsigned int     alc_rc_wd_min:8;
unsigned int     alc_thfull:2;
unsigned int     alc_thmax:6;
unsigned int     alc_thmax2:6;
unsigned int     reserved_0:2;
}AIO_I_ADC_ALC4;

typedef struct 
{
unsigned int     alc_thnoise:5;
unsigned int     alc_thmin:6;
unsigned int     alc_thzero:3;
unsigned int     alc_thmin_en:1;
unsigned int     alc_zdet_func:2;
unsigned int     alc_zdet_tout:2;
unsigned int     alc_zero_data_en:1;
unsigned int     alc_thmin_fast_rc_en:1;
unsigned int     reserved_0:11;
}AIO_I_ADC_ALC5;

typedef struct 
{
unsigned int     alc_limiter_th:24;
unsigned int     alc_limiter_ratio:3;
unsigned int     alc_zero_data_sel:1;
unsigned int     alc_zero_data_cnt_th:2;
unsigned int     reserved_0:2;
}AIO_I_ADC_ALC6;

typedef struct 
{
unsigned int     alc_zero_data_lsb_sel:3;
unsigned int     alc_bypass_cd_en:1;
unsigned int     alc_atk_wd_max_ovl:1;
unsigned int     alc_atk_wd_max_ovr:1;
unsigned int     alc_atk_wd_min_ovl:1;
unsigned int     alc_atk_wd_min_ovr:1;
unsigned int     alc_gain_out:8;
unsigned int     alc_noise_gate_mode_l:1;
unsigned int     alc_noise_gate_mode_r:1;
unsigned int     alc_op_mode_l:1;
unsigned int     alc_op_mode_r:1;
unsigned int     alc_rc_mode_l:1;
unsigned int     alc_rc_mode_r:1;
unsigned int     alc_zero_data_mode_l:1;
unsigned int     alc_zero_data_mode_r:1;
unsigned int     alc_zero_data_mode_rms_l:1;
unsigned int     alc_zero_data_mode_rms_r:1;
unsigned int     alc_zero_data_mode_amp_l:1;
unsigned int     alc_zero_data_mode_amp_r:1;
unsigned int     alc_bk_rms_hov_l:1;
unsigned int     alc_bk_rms_hov_r:1;
unsigned int     alc_bk_rms_lov_l:1;
unsigned int     alc_bk_rms_lov_r:1;
}AIO_I_ADC_ALC7;

typedef struct 
{
unsigned int     alc_force_fast_rc_mode:1;
unsigned int     alc_ft_rms_hov_l:1;
unsigned int     alc_ft_rms_hov_r:1;
unsigned int     alc_ft_rms_lov_l:1;
unsigned int     alc_ft_rms_lov_r:1;
unsigned int     alc_ft_rms_noise_hov_l:1;
unsigned int     alc_ft_rms_noise_hov_r:1;
unsigned int     alc_ft_rms_noise_lov_l:1;
unsigned int     alc_ft_rms_noise_lov_r:1;
unsigned int     alc_thmax_mode_l:1;
unsigned int     alc_thmax_mode_r:1;
unsigned int     alc_thmax2_mode_l:1;
unsigned int     alc_thmax2_mode_r:1;
unsigned int     alc_thmin_mode_l:1;
unsigned int     alc_thmin_mode_r:1;
unsigned int     alc_bk_amp_full_ov_l:1;
unsigned int     alc_bk_amp_full_ov_r:1;
unsigned int     alc_status:1;
unsigned int     reserved_0:14;
}AIO_I_ADC_ALC8;

typedef struct 
{
unsigned int     eq_para_update:1;
unsigned int     eq_cd_en:1;
unsigned int     eq_dither_sel:2;
unsigned int     reserved_0:28;
}AIO_I_ADC_EQ1;

typedef struct 
{
unsigned int     eq_pre_vol_l:16;
unsigned int     eq_pre_vol_r:16;
}AIO_I_ADC_EQ2;

typedef struct 
{
unsigned int     eq_post_vol_l:16;
unsigned int     eq_post_vol_r:16;
}AIO_I_ADC_EQ3;

typedef struct 
{
unsigned int     eq_hpf_en:1;
unsigned int     eq_hpf_tpy_l:1;
unsigned int     eq_hpf_tpy_r:1;
unsigned int     eq_hpf_wclr:1;
unsigned int     eq_hpf_status:1;
unsigned int     reserved_0:27;
}AIO_I_ADC_EQ4;

typedef struct 
{
unsigned int     eq_hpf_h0_l:16;
unsigned int     eq_hpf_h0_r:16;
}AIO_I_ADC_EQ5;

typedef struct 
{
unsigned int     eq_hpf_a1_l:16;
unsigned int     eq_hpf_a1_r:16;
}AIO_I_ADC_EQ6;

typedef struct 
{
unsigned int     eq_bpf1_en:1;
unsigned int     eq_bpf1_wclr:1;
unsigned int     eq_bpf1_status:1;
unsigned int     reserved_0:29;
}AIO_I_ADC_EQ7;

typedef struct 
{
unsigned int     eq_bpf1_h0_l:16;
unsigned int     eq_bpf1_h0_r:16;
}AIO_I_ADC_EQ8;

typedef struct 
{
unsigned int     eq_bpf1_a1_l:16;
unsigned int     eq_bpf1_a1_r:16;
}AIO_I_ADC_EQ9;

typedef struct 
{
unsigned int     eq_bpf1_a2_l:16;
unsigned int     eq_bpf1_a2_r:16;
}AIO_I_ADC_EQ10;

typedef struct 
{
unsigned int     eq_bpf3_en:1;
unsigned int     eq_bpf3_wclr:1;
unsigned int     eq_bpf3_status:1;
unsigned int     reserved_0:29;
}AIO_I_ADC_EQ11;

typedef struct 
{
unsigned int     eq_bpf3_h0_l:16;
unsigned int     eq_bpf3_h0_r:16;
}AIO_I_ADC_EQ12;

typedef struct 
{
unsigned int     eq_bpf3_a1_l:16;
unsigned int     eq_bpf3_a1_r:16;
}AIO_I_ADC_EQ13;

typedef struct 
{
unsigned int     eq_bpf3_a2_l:16;
unsigned int     eq_bpf3_a2_r:16;
}AIO_I_ADC_EQ14;

typedef struct 
{
unsigned int     eq_bpf4_en:1;
unsigned int     eq_bpf4_wclr:1;
unsigned int     eq_bpf4_status:1;
unsigned int     reserved_0:29;
}AIO_I_ADC_EQ15;

typedef struct 
{
unsigned int     eq_bpf4_h0_l:16;
unsigned int     eq_bpf4_h0_r:16;
}AIO_I_ADC_EQ16;

typedef struct 
{
unsigned int     eq_bpf4_a1_l:16;
unsigned int     eq_bpf4_a1_r:16;
}AIO_I_ADC_EQ17;

typedef struct 
{
unsigned int     eq_bpf4_a2_l:16;
unsigned int     eq_bpf4_a2_r:16;
}AIO_I_ADC_EQ18;

typedef struct 
{
unsigned int     eq_lpf_en:1;
unsigned int     eq_lpf_tpy_l:1;
unsigned int     eq_lpf_tpy_r:1;
unsigned int     eq_lpf_wclr:1;
unsigned int     eq_lpf_status:1;
unsigned int     reserved_0:27;
}AIO_I_ADC_EQ19;

typedef struct 
{
unsigned int     eq_lpf_h0_l:16;
unsigned int     eq_lpf_h0_r:16;
}AIO_I_ADC_EQ20;

typedef struct 
{
unsigned int     eq_lpf_a1_l:16;
unsigned int     eq_lpf_a1_r:16;
}AIO_I_ADC_EQ21;

typedef struct 
{
unsigned int     eq_biquad_h0_l:29;
unsigned int     reserved_0:3;
}AIO_I_ADC_EQ22;

typedef struct 
{
unsigned int     eq_biquad_b1_l:29;
unsigned int     reserved_0:3;
}AIO_I_ADC_EQ23;

typedef struct 
{
unsigned int     eq_biquad_b2_l:29;
unsigned int     reserved_0:3;
}AIO_I_ADC_EQ24;

typedef struct 
{
unsigned int     eq_biquad_a1_l:29;
unsigned int     reserved_0:3;
}AIO_I_ADC_EQ25;

typedef struct 
{
unsigned int     eq_biquad_a2_l:29;
unsigned int     reserved_0:3;
}AIO_I_ADC_EQ26;

typedef struct 
{
unsigned int     eq_biquad_h0_r:29;
unsigned int     reserved_0:3;
}AIO_I_ADC_EQ27;

typedef struct 
{
unsigned int     eq_biquad_b1_r:29;
unsigned int     reserved_0:3;
}AIO_I_ADC_EQ28;

typedef struct 
{
unsigned int     eq_biquad_b2_r:29;
unsigned int     reserved_0:3;
}AIO_I_ADC_EQ29;

typedef struct 
{
unsigned int     eq_biquad_a1_r:29;
unsigned int     reserved_0:3;
}AIO_I_ADC_EQ30;

typedef struct 
{
unsigned int     eq_biquad_a2_r:29;
unsigned int     reserved_0:3;
}AIO_I_ADC_EQ31;

typedef struct 
{
unsigned int     eq_biquad_en:1;
unsigned int     eq_biquad_wclr:1;
unsigned int     eq_biquad_status:1;
unsigned int     reserved_0:29;
}AIO_I_ADC_EQ32;

typedef struct 
{
unsigned int     eq_bpf2_en:1;
unsigned int     eq_bpf2_wclr:1;
unsigned int     eq_bpf2_status:1;
unsigned int     eq_path_en:1;
unsigned int     eq_status:1;
unsigned int     reserved_0:27;
}AIO_I_ADC_EQ33;

typedef struct 
{
unsigned int     eq_bpf2_h0_l:16;
unsigned int     eq_bpf2_h0_r:16;
}AIO_I_ADC_EQ34;

typedef struct 
{
unsigned int     eq_bpf2_a1_l:16;
unsigned int     eq_bpf2_a1_r:16;
}AIO_I_ADC_EQ35;

typedef struct 
{
unsigned int     eq_bpf2_a2_l:16;
unsigned int     eq_bpf2_a2_r:16;
}AIO_I_ADC_EQ36;

typedef struct 
{
unsigned int     en_wnr:1;
unsigned int     en_wnr_fb_det:1;
unsigned int     sel_hpf_fc:6;
unsigned int     sel_wnr_dc_corner:2;
unsigned int     sel_wnr_hi_corner:6;
unsigned int     sel_wnr_lo_corner:6;
unsigned int     sel_wnr_smth_corner:2;
unsigned int     sel_wnr_log_offset:3;
unsigned int     reserved_0:5;
}AIO_I_ADC_WIND1;

typedef struct 
{
unsigned int     sel_wnr_fc_nowind:6;
unsigned int     sel_wnr_fc_breeze:6;
unsigned int     sel_wnr_fc_storm:6;
unsigned int     reserved_0:14;
}AIO_I_ADC_WIND2;

typedef struct 
{
unsigned int     sel_wnr_ff_th_lo:10;
unsigned int     sel_wnr_ff_th_hi:10;
unsigned int     reserved_0:12;
}AIO_I_ADC_WIND3;

typedef struct 
{
unsigned int     sel_wnr_fb_th_1:10;
unsigned int     sel_wnr_fb_th_2:10;
unsigned int     reserved_0:12;
}AIO_I_ADC_WIND4;

typedef struct 
{
unsigned int     sel_wnr_weak_ratio:3;
unsigned int     sel_wnr_strong_ratio:3;
unsigned int     sel_wnr_att_rate:4;
unsigned int     sel_wnr_rel_rate:4;
unsigned int     en_wnr_gat:1;
unsigned int     fg_wnr_load:1;
unsigned int     fg_wnr_wind:1;
unsigned int     fg_wnr_strong:1;
unsigned int     reserved_0:14;
}AIO_I_ADC_WIND5;

typedef struct 
{
unsigned int     log_hi_lv:10;
unsigned int     log_lo_lv:10;
unsigned int     reserved_0:12;
}AIO_I_ADC_WIND6;

typedef struct 
{
unsigned int     wnr_hpf_coef:6;
unsigned int     wnr_hpf_coef_l_sel:3;
unsigned int     wnr_hpf_coef_r_sel:3;
unsigned int     wnr_hpf_2nd_en:1;
unsigned int     wnr_zdet_tout:2;
unsigned int     wnr_zdet_func:2;
unsigned int     reserved_0:15;
}AIO_I_ADC_WIND7;

typedef struct 
{
unsigned int     dmic_lp_en:1;
unsigned int     dmicl_ri_fa_sel:1;
unsigned int     dmicr_ri_fa_sel:1;
unsigned int     dmic_src_en:1;
unsigned int     dmic_lpf1st_fc_sel:2;
unsigned int     daad_lp_en:1;
unsigned int     ad_lr_sel:2;
unsigned int     ad_mix_mute_l:1;
unsigned int     ad_mix_mute_r:1;
unsigned int     dmic_mix_mute_l:1;
unsigned int     dmic_mix_mute_r:1;
unsigned int     ad_hpf_en:1;
unsigned int     ad_hpf_coef:3;
unsigned int     ad_comp_gain:2;
unsigned int     reserved_0:13;
}AIO_I_ADC_ADC1;

typedef struct 
{
unsigned int     ad_mute_l:1;
unsigned int     ad_mute_r:1;
unsigned int     ad_zdet_func:2;
unsigned int     ad_zdet_tout:2;
unsigned int     dmic_boost_en:1;
unsigned int     dmic_boost_gain_l:2;
unsigned int     dmic_boost_gain_r:2;
unsigned int     reserved_0:21;
}AIO_I_ADC_ADC2;

typedef struct 
{
unsigned int     ad_gain_l:7;
unsigned int     ad_gain_r:7;
unsigned int     reserved_0:18;
}AIO_I_ADC_ADC3;

typedef struct 
{
unsigned int     adc_cmp:2;
unsigned int     i2s_data_format_sel:2;
unsigned int     i2s_data_len_sel:2;
unsigned int     inv_i2s_sclk:1;
unsigned int     sel_i2s_rx_ch:2;
unsigned int     fifo_policy:1;
unsigned int     fullb:1;
unsigned int     emptyb:1;
unsigned int     reserved_0:20;
}AIO_I_ADC_I2S;

typedef struct 
{
unsigned int     dac_sample_rate:4;
unsigned int     adc_sample_rate:4;
unsigned int     dimc_clock_sel:3;
unsigned int     da_clk_en:1;
unsigned int     da_ana_clk_en:1;
unsigned int     mod_clk_en:1;
unsigned int     ad_clk_en:1;
unsigned int     ad_ana_clk_en:1;
unsigned int     alc_rst_n:1;
unsigned int     eq_rst_n:1;
unsigned int     wnr_rst_n:1;
unsigned int     ad_rst_n:1;
unsigned int     dmic_src_rst_n:1;
unsigned int     i2so_rst_n:1;
unsigned int     tcon_rst_n:1;
unsigned int     dmic_clk_en:1;
unsigned int     reserved_0:8;
}AIO_I_ADC_TCON;

typedef struct 
{
unsigned int     reserved_0:21;
unsigned int     cnt:10;
unsigned int     go:1;
}AIO_I_ADC_REGSET;

typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     thd:5;
unsigned int     en:1;
}AIO_I_FIFOCTL0;

typedef struct 
{
unsigned int     reserved_0:12;
unsigned int     hdmi8ch_en7:1;
unsigned int     hdmi8ch_en6:1;
unsigned int     hdmi8ch_en5:1;
unsigned int     hdmi8ch_en4:1;
unsigned int     hdmi8ch_en3:1;
unsigned int     emptystopen:1;
unsigned int     thd:5;
unsigned int     hdmi8ch_en2:1;
unsigned int     hdmi8ch_en1:1;
unsigned int     hdmi8ch_en0:1;
unsigned int     hdmiraw_en:1;
unsigned int     raw_en:1;
unsigned int     pcm_en3:1;
unsigned int     pcm_en2:1;
unsigned int     pcm_en1:1;
unsigned int     pcm_en0:1;
}AIO_O_FIFOCTL;

typedef struct 
{
unsigned int     data:32;
}AIO_O_I2S_LDATA0;

typedef struct 
{
unsigned int     data:32;
}AIO_O_I2S_RDATA0;

typedef struct 
{
unsigned int     data:32;
}AIO_O_I2S_LDATA1;

typedef struct 
{
unsigned int     data:32;
}AIO_O_I2S_RDATA1;

typedef struct 
{
unsigned int     data:32;
}AIO_O_I2S_LDATA2;

typedef struct 
{
unsigned int     data:32;
}AIO_O_I2S_RDATA2;

typedef struct 
{
unsigned int     data:32;
}AIO_O_I2S_LDATA3;

typedef struct 
{
unsigned int     data:32;
}AIO_O_I2S_RDATA3;

typedef struct 
{
unsigned int     data:32;
}AIO_O_SPF_LDATA;

typedef struct 
{
unsigned int     data:32;
}AIO_O_SPF_RDATA;

typedef struct 
{
unsigned int     reserved_0:14;
unsigned int     hdmi8ch_empty7:1;
unsigned int     hdmi8ch_empty6:1;
unsigned int     hdmi8ch_empty5:1;
unsigned int     hdmi8ch_empty4:1;
unsigned int     hdmi8ch_empty3:1;
unsigned int     hdmi8ch_empty2:1;
unsigned int     hdmi8ch_empty1:1;
unsigned int     hdmi8ch_empty0:1;
unsigned int     hdmiraw_empty:1;
unsigned int     raw_empty:1;
unsigned int     pcm_empty7:1;
unsigned int     pcm_empty6:1;
unsigned int     pcm_empty5:1;
unsigned int     pcm_empty4:1;
unsigned int     pcm_empty3:1;
unsigned int     pcm_empty2:1;
unsigned int     pcm_empty1:1;
unsigned int     pcm_empty0:1;
}AIO_O_FIFO_STATUS;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_I_PCM_SA;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_I_PCM_EA;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_I_PCM_RP;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_I_PCM_WP;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_HDMI8CH_SA;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_HDMIRAW_SA;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_RAW_SA;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_PCM_SA;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_HDMI8CH_EA;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_HDMIRAW_EA;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_RAW_EA;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_PCM_EA;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_HDMI8CH_RP;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_HDMIRAW_RP;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_RAW_RP;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_PCM_RP;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_HDMI8CH_WP;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_HDMIRAW_WP;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_RAW_WP;

typedef struct 
{
unsigned int     addr:29;
unsigned int     reserved_0:3;
}AIO_O_PCM_WP;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     dmago:1;
}AIO_O_DMA_STATUS;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     go0:1;
unsigned int     reserved_1:1;
}AIO_I_GO;

typedef struct 
{
unsigned int     reserved_0:28;
unsigned int     goacdac:1;
unsigned int     gohdmi:1;
unsigned int     goi2s:1;
unsigned int     gospf:1;
}AIO_O_GO;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     pause0:1;
}AIO_I_PAUSE;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     pause2:1;
unsigned int     pause1:1;
unsigned int     pause0:1;
}AIO_O_PAUSE;

typedef struct 
{
unsigned int     thd:29;
unsigned int     reserved_0:3;
}AIO_I_I2S_DDRTHD;

typedef struct 
{
unsigned int     count:32;
}AIO_I_I2S_TIMCNT;

typedef struct 
{
unsigned int     thd:32;
}AIO_I_I2S_TIMTHD;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     timi2sinte:1;
unsigned int     reserved_1:3;
unsigned int     thdinte0:1;
unsigned int     reserved_2:10;
unsigned int     fifointe1:1;
unsigned int     fifointe0:1;
unsigned int     reserved_3:6;
unsigned int     draminte1:1;
unsigned int     draminte0:1;
unsigned int     write_data:1;
}AIO_I_INTE;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     timi2sints:1;
unsigned int     reserved_1:3;
unsigned int     thdints0:1;
unsigned int     reserved_2:10;
unsigned int     fifoints1:1;
unsigned int     fifoints0:1;
unsigned int     reserved_3:6;
unsigned int     dramints1:1;
unsigned int     dramints0:1;
unsigned int     write_data:1;
}AIO_I_INTS;

typedef struct 
{
unsigned int     thd:29;
unsigned int     reserved_0:3;
}AIO_O_PCM_DDRTHD;

typedef struct 
{
unsigned int     count:32;
}AIO_O_PCM_TIMCNT;

typedef struct 
{
unsigned int     thd:32;
}AIO_O_PCM_TIMTHD;

typedef struct 
{
unsigned int     thd:29;
unsigned int     reserved_0:3;
}AIO_O_RAW_DDRTHD;

typedef struct 
{
unsigned int     count:32;
}AIO_O_RAW_TIMCNT;

typedef struct 
{
unsigned int     thd:32;
}AIO_O_RAW_TIMTHD;

typedef struct 
{
unsigned int     thd:29;
unsigned int     reserved_0:3;
}AIO_O_HDMI_DDRTHD;

typedef struct 
{
unsigned int     count:32;
}AIO_O_HDMI_TIMCNT;

typedef struct 
{
unsigned int     thd:32;
}AIO_O_HDMI_TIMTHD;

typedef struct 
{
unsigned int     reserved_0:7;
unsigned int     hdmi8ch_draminte7:1;
unsigned int     hdmi8ch_draminte6:1;
unsigned int     hdmi8ch_draminte5:1;
unsigned int     hdmi8ch_draminte4:1;
unsigned int     hdmi8ch_draminte3:1;
unsigned int     hdmi8ch_draminte2:1;
unsigned int     hdmi8ch_draminte1:1;
unsigned int     hdmi8ch_draminte0:1;
unsigned int     hdmi8ch_fifointe7:1;
unsigned int     hdmi8ch_fifointe6:1;
unsigned int     hdmi8ch_fifointe5:1;
unsigned int     hdmi8ch_fifointe4:1;
unsigned int     hdmi8ch_fifointe3:1;
unsigned int     hdmi8ch_fifointe2:1;
unsigned int     hdmi8ch_fifointe1:1;
unsigned int     hdmi8ch_fifointe0:1;
unsigned int     rawtiminte:1;
unsigned int     hdmitiminte:1;
unsigned int     rawthdinte:1;
unsigned int     hdmithdinte:1;
unsigned int     hdmiraw_draminte:1;
unsigned int     raw_draminte:1;
unsigned int     hdmiraw_fifointe:1;
unsigned int     raw_fifointe:1;
unsigned int     write_data:1;
}AIO_O_INTE;

typedef struct 
{
unsigned int     reserved_0:13;
unsigned int     pcm_draminte7:1;
unsigned int     pcm_draminte6:1;
unsigned int     pcm_draminte5:1;
unsigned int     pcm_draminte4:1;
unsigned int     pcm_draminte3:1;
unsigned int     pcm_draminte2:1;
unsigned int     pcm_draminte1:1;
unsigned int     pcm_draminte0:1;
unsigned int     pcm_fifointe7:1;
unsigned int     pcm_fifointe6:1;
unsigned int     pcm_fifointe5:1;
unsigned int     pcm_fifointe4:1;
unsigned int     pcm_fifointe3:1;
unsigned int     pcm_fifointe2:1;
unsigned int     pcm_fifointe1:1;
unsigned int     pcm_fifointe0:1;
unsigned int     pcmtiminte:1;
unsigned int     pcmthdinte:1;
unsigned int     write_data:1;
}AIO_O_INTE2;

typedef struct 
{
unsigned int     reserved_0:7;
unsigned int     hdmi8ch_dramints7:1;
unsigned int     hdmi8ch_dramints6:1;
unsigned int     hdmi8ch_dramints5:1;
unsigned int     hdmi8ch_dramints4:1;
unsigned int     hdmi8ch_dramints3:1;
unsigned int     hdmi8ch_dramints2:1;
unsigned int     hdmi8ch_dramints1:1;
unsigned int     hdmi8ch_dramints0:1;
unsigned int     hdmi8ch_fifoints7:1;
unsigned int     hdmi8ch_fifoints6:1;
unsigned int     hdmi8ch_fifoints5:1;
unsigned int     hdmi8ch_fifoints4:1;
unsigned int     hdmi8ch_fifoints3:1;
unsigned int     hdmi8ch_fifoints2:1;
unsigned int     hdmi8ch_fifoints1:1;
unsigned int     hdmi8ch_fifoints0:1;
unsigned int     rawtimints:1;
unsigned int     hdmitimints:1;
unsigned int     rawthdints:1;
unsigned int     hdmithdints:1;
unsigned int     hdmiraw_dramints:1;
unsigned int     raw_dramints:1;
unsigned int     hdmiraw_fifoints:1;
unsigned int     raw_fifoints:1;
unsigned int     write_data:1;
}AIO_O_INTS;

typedef struct 
{
unsigned int     reserved_0:13;
unsigned int     pcm_dramints7:1;
unsigned int     pcm_dramints6:1;
unsigned int     pcm_dramints5:1;
unsigned int     pcm_dramints4:1;
unsigned int     pcm_dramints3:1;
unsigned int     pcm_dramints2:1;
unsigned int     pcm_dramints1:1;
unsigned int     pcm_dramints0:1;
unsigned int     pcm_fifoints7:1;
unsigned int     pcm_fifoints6:1;
unsigned int     pcm_fifoints5:1;
unsigned int     pcm_fifoints4:1;
unsigned int     pcm_fifoints3:1;
unsigned int     pcm_fifoints2:1;
unsigned int     pcm_fifoints1:1;
unsigned int     pcm_fifoints0:1;
unsigned int     pcmtimints:1;
unsigned int     pcmthdints:1;
unsigned int     write_data:1;
}AIO_O_INTS2;

typedef struct 
{
unsigned int     reserved_0:21;
unsigned int     codec_tmode3:1;
unsigned int     codec_tmode2:1;
unsigned int     loopbacken:1;
unsigned int     codec_tmode:1;
unsigned int     dbgen:1;
unsigned int     sel0:3;
unsigned int     sel1:3;
}AIO_DBG;

typedef struct 
{
unsigned int     spare:32;
}AIO_SPARE;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     four_byte_swap_enable:1;
unsigned int     sram_ls_ctrl_enable:1;
unsigned int     sram_gating_enable:1;
unsigned int     dbus_gating_enable:1;
unsigned int     eight_byte_swap_enable:1;
unsigned int     pcm_phase_sync:1;
unsigned int     spf_fs_autoswitch:1;
unsigned int     multireq_en:1;
unsigned int     gating_enable:1;
}AIO_GLOBAL;

typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     drf_test_resume_con2:1;
unsigned int     drf_en_con2:1;
unsigned int     en_con2:1;
unsigned int     drf_test_resume_con1:1;
unsigned int     drf_en_con1:1;
unsigned int     en_con1:1;
}AIO_BIST1;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     drf_start_pause_con2:1;
unsigned int     drf_fail_2_con2:1;
unsigned int     drf_fail_1_con2:1;
unsigned int     drf_fail_0_con2:1;
unsigned int     drf_done_con2:1;
unsigned int     fail_2_con2:1;
unsigned int     fail_1_con2:1;
unsigned int     fail_0_con2:1;
unsigned int     done_con2:1;
unsigned int     drf_start_pause_con1:1;
unsigned int     drf_fail_1_con1:1;
unsigned int     drf_fail_0_con1:1;
unsigned int     drf_done_con1:1;
unsigned int     fail_1_con1:1;
unsigned int     fail_0_con1:1;
unsigned int     done_con1:1;
}AIO_BIST2;

typedef struct 
{
unsigned int     reserved_0:21;
unsigned int     ls_adc:1;
unsigned int     ls2_con2:1;
unsigned int     ls1_con2:1;
unsigned int     ls0_con2:1;
unsigned int     ls1_con1:1;
unsigned int     ls0_con1:1;
unsigned int     rme:1;
unsigned int     rm:4;
}AIO_BIST3;

#endif

#define AIO_I_I2S_GCTL                                                               0x98006000
#define AIO_I_I2S_GCTL_reg_addr                                                      "0xD8006000"
#define AIO_I_I2S_GCTL_reg                                                           0xD8006000
#define set_AIO_I_I2S_GCTL_reg(data)   (*((volatile unsigned int*) AIO_I_I2S_GCTL_reg)=data)
#define get_AIO_I_I2S_GCTL_reg   (*((volatile unsigned int*) AIO_I_I2S_GCTL_reg))
#define AIO_I_I2S_GCTL_inst_adr                                                      "0x0000"
#define AIO_I_I2S_GCTL_inst                                                          0x0000
#define AIO_I_I2S_GCTL_raw_timout_thld_shift                                         (21)
#define AIO_I_I2S_GCTL_raw_timout_thld_mask                                          (0x0FE00000)
#define AIO_I_I2S_GCTL_raw_timout_thld(data)                                         (0x0FE00000&((data)<<21))
#define AIO_I_I2S_GCTL_raw_timout_thld_src(data)                                     ((0x0FE00000&(data))>>21)
#define AIO_I_I2S_GCTL_get_raw_timout_thld(data)                                     ((0x0FE00000&(data))>>21)
#define AIO_I_I2S_GCTL_raw_timout_ctrl_shift                                         (20)
#define AIO_I_I2S_GCTL_raw_timout_ctrl_mask                                          (0x00100000)
#define AIO_I_I2S_GCTL_raw_timout_ctrl(data)                                         (0x00100000&((data)<<20))
#define AIO_I_I2S_GCTL_raw_timout_ctrl_src(data)                                     ((0x00100000&(data))>>20)
#define AIO_I_I2S_GCTL_get_raw_timout_ctrl(data)                                     ((0x00100000&(data))>>20)
#define AIO_I_I2S_GCTL_raw_send_shift                                                (19)
#define AIO_I_I2S_GCTL_raw_send_mask                                                 (0x00080000)
#define AIO_I_I2S_GCTL_raw_send(data)                                                (0x00080000&((data)<<19))
#define AIO_I_I2S_GCTL_raw_send_src(data)                                            ((0x00080000&(data))>>19)
#define AIO_I_I2S_GCTL_get_raw_send(data)                                            ((0x00080000&(data))>>19)
#define AIO_I_I2S_GCTL_hdmirx_shift                                                  (18)
#define AIO_I_I2S_GCTL_hdmirx_mask                                                   (0x00040000)
#define AIO_I_I2S_GCTL_hdmirx(data)                                                  (0x00040000&((data)<<18))
#define AIO_I_I2S_GCTL_hdmirx_src(data)                                              ((0x00040000&(data))>>18)
#define AIO_I_I2S_GCTL_get_hdmirx(data)                                              ((0x00040000&(data))>>18)
#define AIO_I_I2S_GCTL_edgeneg_shift                                                 (17)
#define AIO_I_I2S_GCTL_edgeneg_mask                                                  (0x00020000)
#define AIO_I_I2S_GCTL_edgeneg(data)                                                 (0x00020000&((data)<<17))
#define AIO_I_I2S_GCTL_edgeneg_src(data)                                             ((0x00020000&(data))>>17)
#define AIO_I_I2S_GCTL_get_edgeneg(data)                                             ((0x00020000&(data))>>17)
#define AIO_I_I2S_GCTL_wsdelay_shift                                                 (16)
#define AIO_I_I2S_GCTL_wsdelay_mask                                                  (0x00010000)
#define AIO_I_I2S_GCTL_wsdelay(data)                                                 (0x00010000&((data)<<16))
#define AIO_I_I2S_GCTL_wsdelay_src(data)                                             ((0x00010000&(data))>>16)
#define AIO_I_I2S_GCTL_get_wsdelay(data)                                             ((0x00010000&(data))>>16)
#define AIO_I_I2S_GCTL_slave_shift                                                   (15)
#define AIO_I_I2S_GCTL_slave_mask                                                    (0x00008000)
#define AIO_I_I2S_GCTL_slave(data)                                                   (0x00008000&((data)<<15))
#define AIO_I_I2S_GCTL_slave_src(data)                                               ((0x00008000&(data))>>15)
#define AIO_I_I2S_GCTL_get_slave(data)                                               ((0x00008000&(data))>>15)
#define AIO_I_I2S_GCTL_bit_shift                                                     (12)
#define AIO_I_I2S_GCTL_bit_mask                                                      (0x00007000)
#define AIO_I_I2S_GCTL_bit(data)                                                     (0x00007000&((data)<<12))
#define AIO_I_I2S_GCTL_bit_src(data)                                                 ((0x00007000&(data))>>12)
#define AIO_I_I2S_GCTL_get_bit(data)                                                 ((0x00007000&(data))>>12)
#define AIO_I_I2S_GCTL_rmute0_shift                                                  (2)
#define AIO_I_I2S_GCTL_rmute0_mask                                                   (0x00000004)
#define AIO_I_I2S_GCTL_rmute0(data)                                                  (0x00000004&((data)<<2))
#define AIO_I_I2S_GCTL_rmute0_src(data)                                              ((0x00000004&(data))>>2)
#define AIO_I_I2S_GCTL_get_rmute0(data)                                              ((0x00000004&(data))>>2)
#define AIO_I_I2S_GCTL_lmute0_shift                                                  (1)
#define AIO_I_I2S_GCTL_lmute0_mask                                                   (0x00000002)
#define AIO_I_I2S_GCTL_lmute0(data)                                                  (0x00000002&((data)<<1))
#define AIO_I_I2S_GCTL_lmute0_src(data)                                              ((0x00000002&(data))>>1)
#define AIO_I_I2S_GCTL_get_lmute0(data)                                              ((0x00000002&(data))>>1)
#define AIO_I_I2S_GCTL_en0_shift                                                     (0)
#define AIO_I_I2S_GCTL_en0_mask                                                      (0x00000001)
#define AIO_I_I2S_GCTL_en0(data)                                                     (0x00000001&((data)<<0))
#define AIO_I_I2S_GCTL_en0_src(data)                                                 ((0x00000001&(data))>>0)
#define AIO_I_I2S_GCTL_get_en0(data)                                                 ((0x00000001&(data))>>0)


#define AIO_I_I2S_LBMIX                                                              0x98006014
#define AIO_I_I2S_LBMIX_reg_addr                                                     "0xD8006014"
#define AIO_I_I2S_LBMIX_reg                                                          0xD8006014
#define set_AIO_I_I2S_LBMIX_reg(data)   (*((volatile unsigned int*) AIO_I_I2S_LBMIX_reg)=data)
#define get_AIO_I_I2S_LBMIX_reg   (*((volatile unsigned int*) AIO_I_I2S_LBMIX_reg))
#define AIO_I_I2S_LBMIX_inst_adr                                                     "0x0005"
#define AIO_I_I2S_LBMIX_inst                                                         0x0005
#define AIO_I_I2S_LBMIX_rgain_shift                                                  (11)
#define AIO_I_I2S_LBMIX_rgain_mask                                                   (0x0003F800)
#define AIO_I_I2S_LBMIX_rgain(data)                                                  (0x0003F800&((data)<<11))
#define AIO_I_I2S_LBMIX_rgain_src(data)                                              ((0x0003F800&(data))>>11)
#define AIO_I_I2S_LBMIX_get_rgain(data)                                              ((0x0003F800&(data))>>11)
#define AIO_I_I2S_LBMIX_lgain_shift                                                  (4)
#define AIO_I_I2S_LBMIX_lgain_mask                                                   (0x000007F0)
#define AIO_I_I2S_LBMIX_lgain(data)                                                  (0x000007F0&((data)<<4))
#define AIO_I_I2S_LBMIX_lgain_src(data)                                              ((0x000007F0&(data))>>4)
#define AIO_I_I2S_LBMIX_get_lgain(data)                                              ((0x000007F0&(data))>>4)
#define AIO_I_I2S_LBMIX_r2ren_shift                                                  (3)
#define AIO_I_I2S_LBMIX_r2ren_mask                                                   (0x00000008)
#define AIO_I_I2S_LBMIX_r2ren(data)                                                  (0x00000008&((data)<<3))
#define AIO_I_I2S_LBMIX_r2ren_src(data)                                              ((0x00000008&(data))>>3)
#define AIO_I_I2S_LBMIX_get_r2ren(data)                                              ((0x00000008&(data))>>3)
#define AIO_I_I2S_LBMIX_r2len_shift                                                  (2)
#define AIO_I_I2S_LBMIX_r2len_mask                                                   (0x00000004)
#define AIO_I_I2S_LBMIX_r2len(data)                                                  (0x00000004&((data)<<2))
#define AIO_I_I2S_LBMIX_r2len_src(data)                                              ((0x00000004&(data))>>2)
#define AIO_I_I2S_LBMIX_get_r2len(data)                                              ((0x00000004&(data))>>2)
#define AIO_I_I2S_LBMIX_l2ren_shift                                                  (1)
#define AIO_I_I2S_LBMIX_l2ren_mask                                                   (0x00000002)
#define AIO_I_I2S_LBMIX_l2ren(data)                                                  (0x00000002&((data)<<1))
#define AIO_I_I2S_LBMIX_l2ren_src(data)                                              ((0x00000002&(data))>>1)
#define AIO_I_I2S_LBMIX_get_l2ren(data)                                              ((0x00000002&(data))>>1)
#define AIO_I_I2S_LBMIX_l2len_shift                                                  (0)
#define AIO_I_I2S_LBMIX_l2len_mask                                                   (0x00000001)
#define AIO_I_I2S_LBMIX_l2len(data)                                                  (0x00000001&((data)<<0))
#define AIO_I_I2S_LBMIX_l2len_src(data)                                              ((0x00000001&(data))>>0)
#define AIO_I_I2S_LBMIX_get_l2len(data)                                              ((0x00000001&(data))>>0)


#define AIO_O_I2S_GCTL                                                               0x98006004
#define AIO_O_I2S_GCTL_reg_addr                                                      "0xD8006004"
#define AIO_O_I2S_GCTL_reg                                                           0xD8006004
#define set_AIO_O_I2S_GCTL_reg(data)   (*((volatile unsigned int*) AIO_O_I2S_GCTL_reg)=data)
#define get_AIO_O_I2S_GCTL_reg   (*((volatile unsigned int*) AIO_O_I2S_GCTL_reg))
#define AIO_O_I2S_GCTL_inst_adr                                                      "0x0001"
#define AIO_O_I2S_GCTL_inst                                                          0x0001
#define AIO_O_I2S_GCTL_adc_en_shift                                                  (30)
#define AIO_O_I2S_GCTL_adc_en_mask                                                   (0x40000000)
#define AIO_O_I2S_GCTL_adc_en(data)                                                  (0x40000000&((data)<<30))
#define AIO_O_I2S_GCTL_adc_en_src(data)                                              ((0x40000000&(data))>>30)
#define AIO_O_I2S_GCTL_get_adc_en(data)                                              ((0x40000000&(data))>>30)
#define AIO_O_I2S_GCTL_pin_share_shift                                               (29)
#define AIO_O_I2S_GCTL_pin_share_mask                                                (0x20000000)
#define AIO_O_I2S_GCTL_pin_share(data)                                               (0x20000000&((data)<<29))
#define AIO_O_I2S_GCTL_pin_share_src(data)                                           ((0x20000000&(data))>>29)
#define AIO_O_I2S_GCTL_get_pin_share(data)                                           ((0x20000000&(data))>>29)
#define AIO_O_I2S_GCTL_pcm2chsel_shift                                               (28)
#define AIO_O_I2S_GCTL_pcm2chsel_mask                                                (0x10000000)
#define AIO_O_I2S_GCTL_pcm2chsel(data)                                               (0x10000000&((data)<<28))
#define AIO_O_I2S_GCTL_pcm2chsel_src(data)                                           ((0x10000000&(data))>>28)
#define AIO_O_I2S_GCTL_get_pcm2chsel(data)                                           ((0x10000000&(data))>>28)
#define AIO_O_I2S_GCTL_wsperiod_shift                                                (22)
#define AIO_O_I2S_GCTL_wsperiod_mask                                                 (0x0FC00000)
#define AIO_O_I2S_GCTL_wsperiod(data)                                                (0x0FC00000&((data)<<22))
#define AIO_O_I2S_GCTL_wsperiod_src(data)                                            ((0x0FC00000&(data))>>22)
#define AIO_O_I2S_GCTL_get_wsperiod(data)                                            ((0x0FC00000&(data))>>22)
#define AIO_O_I2S_GCTL_protocol_shift                                                (20)
#define AIO_O_I2S_GCTL_protocol_mask                                                 (0x00300000)
#define AIO_O_I2S_GCTL_protocol(data)                                                (0x00300000&((data)<<20))
#define AIO_O_I2S_GCTL_protocol_src(data)                                            ((0x00300000&(data))>>20)
#define AIO_O_I2S_GCTL_get_protocol(data)                                            ((0x00300000&(data))>>20)
#define AIO_O_I2S_GCTL_wsdelay_shift                                                 (19)
#define AIO_O_I2S_GCTL_wsdelay_mask                                                  (0x00080000)
#define AIO_O_I2S_GCTL_wsdelay(data)                                                 (0x00080000&((data)<<19))
#define AIO_O_I2S_GCTL_wsdelay_src(data)                                             ((0x00080000&(data))>>19)
#define AIO_O_I2S_GCTL_get_wsdelay(data)                                             ((0x00080000&(data))>>19)
#define AIO_O_I2S_GCTL_slave_shift                                                   (18)
#define AIO_O_I2S_GCTL_slave_mask                                                    (0x00040000)
#define AIO_O_I2S_GCTL_slave(data)                                                   (0x00040000&((data)<<18))
#define AIO_O_I2S_GCTL_slave_src(data)                                               ((0x00040000&(data))>>18)
#define AIO_O_I2S_GCTL_get_slave(data)                                               ((0x00040000&(data))>>18)
#define AIO_O_I2S_GCTL_bit_shift                                                     (15)
#define AIO_O_I2S_GCTL_bit_mask                                                      (0x00038000)
#define AIO_O_I2S_GCTL_bit(data)                                                     (0x00038000&((data)<<15))
#define AIO_O_I2S_GCTL_bit_src(data)                                                 ((0x00038000&(data))>>15)
#define AIO_O_I2S_GCTL_get_bit(data)                                                 ((0x00038000&(data))>>15)
#define AIO_O_I2S_GCTL_sel_shift                                                     (9)
#define AIO_O_I2S_GCTL_sel_mask                                                      (0x00000200)
#define AIO_O_I2S_GCTL_sel(data)                                                     (0x00000200&((data)<<9))
#define AIO_O_I2S_GCTL_sel_src(data)                                                 ((0x00000200&(data))>>9)
#define AIO_O_I2S_GCTL_get_sel(data)                                                 ((0x00000200&(data))>>9)
#define AIO_O_I2S_GCTL_rmute3_shift                                                  (8)
#define AIO_O_I2S_GCTL_rmute3_mask                                                   (0x00000100)
#define AIO_O_I2S_GCTL_rmute3(data)                                                  (0x00000100&((data)<<8))
#define AIO_O_I2S_GCTL_rmute3_src(data)                                              ((0x00000100&(data))>>8)
#define AIO_O_I2S_GCTL_get_rmute3(data)                                              ((0x00000100&(data))>>8)
#define AIO_O_I2S_GCTL_lmute3_shift                                                  (7)
#define AIO_O_I2S_GCTL_lmute3_mask                                                   (0x00000080)
#define AIO_O_I2S_GCTL_lmute3(data)                                                  (0x00000080&((data)<<7))
#define AIO_O_I2S_GCTL_lmute3_src(data)                                              ((0x00000080&(data))>>7)
#define AIO_O_I2S_GCTL_get_lmute3(data)                                              ((0x00000080&(data))>>7)
#define AIO_O_I2S_GCTL_rmute2_shift                                                  (6)
#define AIO_O_I2S_GCTL_rmute2_mask                                                   (0x00000040)
#define AIO_O_I2S_GCTL_rmute2(data)                                                  (0x00000040&((data)<<6))
#define AIO_O_I2S_GCTL_rmute2_src(data)                                              ((0x00000040&(data))>>6)
#define AIO_O_I2S_GCTL_get_rmute2(data)                                              ((0x00000040&(data))>>6)
#define AIO_O_I2S_GCTL_lmute2_shift                                                  (5)
#define AIO_O_I2S_GCTL_lmute2_mask                                                   (0x00000020)
#define AIO_O_I2S_GCTL_lmute2(data)                                                  (0x00000020&((data)<<5))
#define AIO_O_I2S_GCTL_lmute2_src(data)                                              ((0x00000020&(data))>>5)
#define AIO_O_I2S_GCTL_get_lmute2(data)                                              ((0x00000020&(data))>>5)
#define AIO_O_I2S_GCTL_rmute1_shift                                                  (4)
#define AIO_O_I2S_GCTL_rmute1_mask                                                   (0x00000010)
#define AIO_O_I2S_GCTL_rmute1(data)                                                  (0x00000010&((data)<<4))
#define AIO_O_I2S_GCTL_rmute1_src(data)                                              ((0x00000010&(data))>>4)
#define AIO_O_I2S_GCTL_get_rmute1(data)                                              ((0x00000010&(data))>>4)
#define AIO_O_I2S_GCTL_lmute1_shift                                                  (3)
#define AIO_O_I2S_GCTL_lmute1_mask                                                   (0x00000008)
#define AIO_O_I2S_GCTL_lmute1(data)                                                  (0x00000008&((data)<<3))
#define AIO_O_I2S_GCTL_lmute1_src(data)                                              ((0x00000008&(data))>>3)
#define AIO_O_I2S_GCTL_get_lmute1(data)                                              ((0x00000008&(data))>>3)
#define AIO_O_I2S_GCTL_rmute0_shift                                                  (2)
#define AIO_O_I2S_GCTL_rmute0_mask                                                   (0x00000004)
#define AIO_O_I2S_GCTL_rmute0(data)                                                  (0x00000004&((data)<<2))
#define AIO_O_I2S_GCTL_rmute0_src(data)                                              ((0x00000004&(data))>>2)
#define AIO_O_I2S_GCTL_get_rmute0(data)                                              ((0x00000004&(data))>>2)
#define AIO_O_I2S_GCTL_lmute0_shift                                                  (1)
#define AIO_O_I2S_GCTL_lmute0_mask                                                   (0x00000002)
#define AIO_O_I2S_GCTL_lmute0(data)                                                  (0x00000002&((data)<<1))
#define AIO_O_I2S_GCTL_lmute0_src(data)                                              ((0x00000002&(data))>>1)
#define AIO_O_I2S_GCTL_get_lmute0(data)                                              ((0x00000002&(data))>>1)
#define AIO_O_I2S_GCTL_en0_shift                                                     (0)
#define AIO_O_I2S_GCTL_en0_mask                                                      (0x00000001)
#define AIO_O_I2S_GCTL_en0(data)                                                     (0x00000001&((data)<<0))
#define AIO_O_I2S_GCTL_en0_src(data)                                                 ((0x00000001&(data))>>0)
#define AIO_O_I2S_GCTL_get_en0(data)                                                 ((0x00000001&(data))>>0)


#define AIO_O_PCM_CS1                                                                0x9800600c
#define AIO_O_PCM_CS1_reg_addr                                                       "0xD800600C"
#define AIO_O_PCM_CS1_reg                                                            0xD800600C
#define set_AIO_O_PCM_CS1_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_CS1_reg)=data)
#define get_AIO_O_PCM_CS1_reg   (*((volatile unsigned int*) AIO_O_PCM_CS1_reg))
#define AIO_O_PCM_CS1_inst_adr                                                       "0x0003"
#define AIO_O_PCM_CS1_inst                                                           0x0003
#define AIO_O_PCM_CS1_cs1_shift                                                      (0)
#define AIO_O_PCM_CS1_cs1_mask                                                       (0xFFFFFFFF)
#define AIO_O_PCM_CS1_cs1(data)                                                      (0xFFFFFFFF&((data)<<0))
#define AIO_O_PCM_CS1_cs1_src(data)                                                  ((0xFFFFFFFF&(data))>>0)
#define AIO_O_PCM_CS1_get_cs1(data)                                                  ((0xFFFFFFFF&(data))>>0)


#define AIO_O_PCM_CS2                                                                0x98006010
#define AIO_O_PCM_CS2_reg_addr                                                       "0xD8006010"
#define AIO_O_PCM_CS2_reg                                                            0xD8006010
#define set_AIO_O_PCM_CS2_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_CS2_reg)=data)
#define get_AIO_O_PCM_CS2_reg   (*((volatile unsigned int*) AIO_O_PCM_CS2_reg))
#define AIO_O_PCM_CS2_inst_adr                                                       "0x0004"
#define AIO_O_PCM_CS2_inst                                                           0x0004
#define AIO_O_PCM_CS2_cs2_shift                                                      (0)
#define AIO_O_PCM_CS2_cs2_mask                                                       (0x0000FFFF)
#define AIO_O_PCM_CS2_cs2(data)                                                      (0x0000FFFF&((data)<<0))
#define AIO_O_PCM_CS2_cs2_src(data)                                                  ((0x0000FFFF&(data))>>0)
#define AIO_O_PCM_CS2_get_cs2(data)                                                  ((0x0000FFFF&(data))>>0)


#define AIO_O_SPF_GCTL                                                               0x98006050
#define AIO_O_SPF_GCTL_reg_addr                                                      "0xD8006050"
#define AIO_O_SPF_GCTL_reg                                                           0xD8006050
#define set_AIO_O_SPF_GCTL_reg(data)   (*((volatile unsigned int*) AIO_O_SPF_GCTL_reg)=data)
#define get_AIO_O_SPF_GCTL_reg   (*((volatile unsigned int*) AIO_O_SPF_GCTL_reg))
#define AIO_O_SPF_GCTL_inst_adr                                                      "0x0014"
#define AIO_O_SPF_GCTL_inst                                                          0x0014
#define AIO_O_SPF_GCTL_pcm2chsel_shift                                               (9)
#define AIO_O_SPF_GCTL_pcm2chsel_mask                                                (0x00000200)
#define AIO_O_SPF_GCTL_pcm2chsel(data)                                               (0x00000200&((data)<<9))
#define AIO_O_SPF_GCTL_pcm2chsel_src(data)                                           ((0x00000200&(data))>>9)
#define AIO_O_SPF_GCTL_get_pcm2chsel(data)                                           ((0x00000200&(data))>>9)
#define AIO_O_SPF_GCTL_bit_shift                                                     (6)
#define AIO_O_SPF_GCTL_bit_mask                                                      (0x000001C0)
#define AIO_O_SPF_GCTL_bit(data)                                                     (0x000001C0&((data)<<6))
#define AIO_O_SPF_GCTL_bit_src(data)                                                 ((0x000001C0&(data))>>6)
#define AIO_O_SPF_GCTL_get_bit(data)                                                 ((0x000001C0&(data))>>6)
#define AIO_O_SPF_GCTL_wait_en_shift                                                 (5)
#define AIO_O_SPF_GCTL_wait_en_mask                                                  (0x00000020)
#define AIO_O_SPF_GCTL_wait_en(data)                                                 (0x00000020&((data)<<5))
#define AIO_O_SPF_GCTL_wait_en_src(data)                                             ((0x00000020&(data))>>5)
#define AIO_O_SPF_GCTL_get_wait_en(data)                                             ((0x00000020&(data))>>5)
#define AIO_O_SPF_GCTL_valid_shift                                                   (4)
#define AIO_O_SPF_GCTL_valid_mask                                                    (0x00000010)
#define AIO_O_SPF_GCTL_valid(data)                                                   (0x00000010&((data)<<4))
#define AIO_O_SPF_GCTL_valid_src(data)                                               ((0x00000010&(data))>>4)
#define AIO_O_SPF_GCTL_get_valid(data)                                               ((0x00000010&(data))>>4)
#define AIO_O_SPF_GCTL_format_shift                                                  (3)
#define AIO_O_SPF_GCTL_format_mask                                                   (0x00000008)
#define AIO_O_SPF_GCTL_format(data)                                                  (0x00000008&((data)<<3))
#define AIO_O_SPF_GCTL_format_src(data)                                              ((0x00000008&(data))>>3)
#define AIO_O_SPF_GCTL_get_format(data)                                              ((0x00000008&(data))>>3)
#define AIO_O_SPF_GCTL_rmute_shift                                                   (2)
#define AIO_O_SPF_GCTL_rmute_mask                                                    (0x00000004)
#define AIO_O_SPF_GCTL_rmute(data)                                                   (0x00000004&((data)<<2))
#define AIO_O_SPF_GCTL_rmute_src(data)                                               ((0x00000004&(data))>>2)
#define AIO_O_SPF_GCTL_get_rmute(data)                                               ((0x00000004&(data))>>2)
#define AIO_O_SPF_GCTL_lmute_shift                                                   (1)
#define AIO_O_SPF_GCTL_lmute_mask                                                    (0x00000002)
#define AIO_O_SPF_GCTL_lmute(data)                                                   (0x00000002&((data)<<1))
#define AIO_O_SPF_GCTL_lmute_src(data)                                               ((0x00000002&(data))>>1)
#define AIO_O_SPF_GCTL_get_lmute(data)                                               ((0x00000002&(data))>>1)
#define AIO_O_SPF_GCTL_en_shift                                                      (0)
#define AIO_O_SPF_GCTL_en_mask                                                       (0x00000001)
#define AIO_O_SPF_GCTL_en(data)                                                      (0x00000001&((data)<<0))
#define AIO_O_SPF_GCTL_en_src(data)                                                  ((0x00000001&(data))>>0)
#define AIO_O_SPF_GCTL_get_en(data)                                                  ((0x00000001&(data))>>0)


#define AIO_O_RAW_CS1                                                                0x98006058
#define AIO_O_RAW_CS1_reg_addr                                                       "0xD8006058"
#define AIO_O_RAW_CS1_reg                                                            0xD8006058
#define set_AIO_O_RAW_CS1_reg(data)   (*((volatile unsigned int*) AIO_O_RAW_CS1_reg)=data)
#define get_AIO_O_RAW_CS1_reg   (*((volatile unsigned int*) AIO_O_RAW_CS1_reg))
#define AIO_O_RAW_CS1_inst_adr                                                       "0x0016"
#define AIO_O_RAW_CS1_inst                                                           0x0016
#define AIO_O_RAW_CS1_cs1_shift                                                      (0)
#define AIO_O_RAW_CS1_cs1_mask                                                       (0xFFFFFFFF)
#define AIO_O_RAW_CS1_cs1(data)                                                      (0xFFFFFFFF&((data)<<0))
#define AIO_O_RAW_CS1_cs1_src(data)                                                  ((0xFFFFFFFF&(data))>>0)
#define AIO_O_RAW_CS1_get_cs1(data)                                                  ((0xFFFFFFFF&(data))>>0)


#define AIO_O_RAW_CS2                                                                0x9800605c
#define AIO_O_RAW_CS2_reg_addr                                                       "0xD800605C"
#define AIO_O_RAW_CS2_reg                                                            0xD800605C
#define set_AIO_O_RAW_CS2_reg(data)   (*((volatile unsigned int*) AIO_O_RAW_CS2_reg)=data)
#define get_AIO_O_RAW_CS2_reg   (*((volatile unsigned int*) AIO_O_RAW_CS2_reg))
#define AIO_O_RAW_CS2_inst_adr                                                       "0x0017"
#define AIO_O_RAW_CS2_inst                                                           0x0017
#define AIO_O_RAW_CS2_cs2_shift                                                      (0)
#define AIO_O_RAW_CS2_cs2_mask                                                       (0x0000FFFF)
#define AIO_O_RAW_CS2_cs2(data)                                                      (0x0000FFFF&((data)<<0))
#define AIO_O_RAW_CS2_cs2_src(data)                                                  ((0x0000FFFF&(data))>>0)
#define AIO_O_RAW_CS2_get_cs2(data)                                                  ((0x0000FFFF&(data))>>0)


#define AIO_O_SPF_FCNT                                                               0x98006060
#define AIO_O_SPF_FCNT_reg_addr                                                      "0xD8006060"
#define AIO_O_SPF_FCNT_reg                                                           0xD8006060
#define set_AIO_O_SPF_FCNT_reg(data)   (*((volatile unsigned int*) AIO_O_SPF_FCNT_reg)=data)
#define get_AIO_O_SPF_FCNT_reg   (*((volatile unsigned int*) AIO_O_SPF_FCNT_reg))
#define AIO_O_SPF_FCNT_inst_adr                                                      "0x0018"
#define AIO_O_SPF_FCNT_inst                                                          0x0018
#define AIO_O_SPF_FCNT_realgo_shift                                                  (15)
#define AIO_O_SPF_FCNT_realgo_mask                                                   (0x00008000)
#define AIO_O_SPF_FCNT_realgo(data)                                                  (0x00008000&((data)<<15))
#define AIO_O_SPF_FCNT_realgo_src(data)                                              ((0x00008000&(data))>>15)
#define AIO_O_SPF_FCNT_get_realgo(data)                                              ((0x00008000&(data))>>15)
#define AIO_O_SPF_FCNT_spcnt_shift                                                   (8)
#define AIO_O_SPF_FCNT_spcnt_mask                                                    (0x00007F00)
#define AIO_O_SPF_FCNT_spcnt(data)                                                   (0x00007F00&((data)<<8))
#define AIO_O_SPF_FCNT_spcnt_src(data)                                               ((0x00007F00&(data))>>8)
#define AIO_O_SPF_FCNT_get_spcnt(data)                                               ((0x00007F00&(data))>>8)
#define AIO_O_SPF_FCNT_fcnt_shift                                                    (0)
#define AIO_O_SPF_FCNT_fcnt_mask                                                     (0x000000FF)
#define AIO_O_SPF_FCNT_fcnt(data)                                                    (0x000000FF&((data)<<0))
#define AIO_O_SPF_FCNT_fcnt_src(data)                                                ((0x000000FF&(data))>>0)
#define AIO_O_SPF_FCNT_get_fcnt(data)                                                ((0x000000FF&(data))>>0)


#define AIO_O_HDMI_GCTL                                                              0x98006070
#define AIO_O_HDMI_GCTL_reg_addr                                                     "0xD8006070"
#define AIO_O_HDMI_GCTL_reg                                                          0xD8006070
#define set_AIO_O_HDMI_GCTL_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI_GCTL_reg)=data)
#define get_AIO_O_HDMI_GCTL_reg   (*((volatile unsigned int*) AIO_O_HDMI_GCTL_reg))
#define AIO_O_HDMI_GCTL_inst_adr                                                     "0x001C"
#define AIO_O_HDMI_GCTL_inst                                                         0x001C
#define AIO_O_HDMI_GCTL_pcm8chlben_shift                                             (30)
#define AIO_O_HDMI_GCTL_pcm8chlben_mask                                              (0x40000000)
#define AIO_O_HDMI_GCTL_pcm8chlben(data)                                             (0x40000000&((data)<<30))
#define AIO_O_HDMI_GCTL_pcm8chlben_src(data)                                         ((0x40000000&(data))>>30)
#define AIO_O_HDMI_GCTL_get_pcm8chlben(data)                                         ((0x40000000&(data))>>30)
#define AIO_O_HDMI_GCTL_pcm8chlbsel_shift                                            (28)
#define AIO_O_HDMI_GCTL_pcm8chlbsel_mask                                             (0x30000000)
#define AIO_O_HDMI_GCTL_pcm8chlbsel(data)                                            (0x30000000&((data)<<28))
#define AIO_O_HDMI_GCTL_pcm8chlbsel_src(data)                                        ((0x30000000&(data))>>28)
#define AIO_O_HDMI_GCTL_get_pcm8chlbsel(data)                                        ((0x30000000&(data))>>28)
#define AIO_O_HDMI_GCTL_pcm2chsel_shift                                              (27)
#define AIO_O_HDMI_GCTL_pcm2chsel_mask                                               (0x08000000)
#define AIO_O_HDMI_GCTL_pcm2chsel(data)                                              (0x08000000&((data)<<27))
#define AIO_O_HDMI_GCTL_pcm2chsel_src(data)                                          ((0x08000000&(data))>>27)
#define AIO_O_HDMI_GCTL_get_pcm2chsel(data)                                          ((0x08000000&(data))>>27)
#define AIO_O_HDMI_GCTL_clk_sel_shift                                                (24)
#define AIO_O_HDMI_GCTL_clk_sel_mask                                                 (0x07000000)
#define AIO_O_HDMI_GCTL_clk_sel(data)                                                (0x07000000&((data)<<24))
#define AIO_O_HDMI_GCTL_clk_sel_src(data)                                            ((0x07000000&(data))>>24)
#define AIO_O_HDMI_GCTL_get_clk_sel(data)                                            ((0x07000000&(data))>>24)
#define AIO_O_HDMI_GCTL_pcmsync_shift                                                (23)
#define AIO_O_HDMI_GCTL_pcmsync_mask                                                 (0x00800000)
#define AIO_O_HDMI_GCTL_pcmsync(data)                                                (0x00800000&((data)<<23))
#define AIO_O_HDMI_GCTL_pcmsync_src(data)                                            ((0x00800000&(data))>>23)
#define AIO_O_HDMI_GCTL_get_pcmsync(data)                                            ((0x00800000&(data))>>23)
#define AIO_O_HDMI_GCTL_pkt_shift                                                    (22)
#define AIO_O_HDMI_GCTL_pkt_mask                                                     (0x00400000)
#define AIO_O_HDMI_GCTL_pkt(data)                                                    (0x00400000&((data)<<22))
#define AIO_O_HDMI_GCTL_pkt_src(data)                                                ((0x00400000&(data))>>22)
#define AIO_O_HDMI_GCTL_get_pkt(data)                                                ((0x00400000&(data))>>22)
#define AIO_O_HDMI_GCTL_sample_flat_shift                                            (18)
#define AIO_O_HDMI_GCTL_sample_flat_mask                                             (0x003C0000)
#define AIO_O_HDMI_GCTL_sample_flat(data)                                            (0x003C0000&((data)<<18))
#define AIO_O_HDMI_GCTL_sample_flat_src(data)                                        ((0x003C0000&(data))>>18)
#define AIO_O_HDMI_GCTL_get_sample_flat(data)                                        ((0x003C0000&(data))>>18)
#define AIO_O_HDMI_GCTL_rmute3_shift                                                 (17)
#define AIO_O_HDMI_GCTL_rmute3_mask                                                  (0x00020000)
#define AIO_O_HDMI_GCTL_rmute3(data)                                                 (0x00020000&((data)<<17))
#define AIO_O_HDMI_GCTL_rmute3_src(data)                                             ((0x00020000&(data))>>17)
#define AIO_O_HDMI_GCTL_get_rmute3(data)                                             ((0x00020000&(data))>>17)
#define AIO_O_HDMI_GCTL_lmute3_shift                                                 (16)
#define AIO_O_HDMI_GCTL_lmute3_mask                                                  (0x00010000)
#define AIO_O_HDMI_GCTL_lmute3(data)                                                 (0x00010000&((data)<<16))
#define AIO_O_HDMI_GCTL_lmute3_src(data)                                             ((0x00010000&(data))>>16)
#define AIO_O_HDMI_GCTL_get_lmute3(data)                                             ((0x00010000&(data))>>16)
#define AIO_O_HDMI_GCTL_rmute2_shift                                                 (15)
#define AIO_O_HDMI_GCTL_rmute2_mask                                                  (0x00008000)
#define AIO_O_HDMI_GCTL_rmute2(data)                                                 (0x00008000&((data)<<15))
#define AIO_O_HDMI_GCTL_rmute2_src(data)                                             ((0x00008000&(data))>>15)
#define AIO_O_HDMI_GCTL_get_rmute2(data)                                             ((0x00008000&(data))>>15)
#define AIO_O_HDMI_GCTL_lmute2_shift                                                 (14)
#define AIO_O_HDMI_GCTL_lmute2_mask                                                  (0x00004000)
#define AIO_O_HDMI_GCTL_lmute2(data)                                                 (0x00004000&((data)<<14))
#define AIO_O_HDMI_GCTL_lmute2_src(data)                                             ((0x00004000&(data))>>14)
#define AIO_O_HDMI_GCTL_get_lmute2(data)                                             ((0x00004000&(data))>>14)
#define AIO_O_HDMI_GCTL_rmute1_shift                                                 (13)
#define AIO_O_HDMI_GCTL_rmute1_mask                                                  (0x00002000)
#define AIO_O_HDMI_GCTL_rmute1(data)                                                 (0x00002000&((data)<<13))
#define AIO_O_HDMI_GCTL_rmute1_src(data)                                             ((0x00002000&(data))>>13)
#define AIO_O_HDMI_GCTL_get_rmute1(data)                                             ((0x00002000&(data))>>13)
#define AIO_O_HDMI_GCTL_lmute1_shift                                                 (12)
#define AIO_O_HDMI_GCTL_lmute1_mask                                                  (0x00001000)
#define AIO_O_HDMI_GCTL_lmute1(data)                                                 (0x00001000&((data)<<12))
#define AIO_O_HDMI_GCTL_lmute1_src(data)                                             ((0x00001000&(data))>>12)
#define AIO_O_HDMI_GCTL_get_lmute1(data)                                             ((0x00001000&(data))>>12)
#define AIO_O_HDMI_GCTL_8ch_shift                                                    (11)
#define AIO_O_HDMI_GCTL_8ch_mask                                                     (0x00000800)
#define AIO_O_HDMI_GCTL_8ch(data)                                                    (0x00000800&((data)<<11))
#define AIO_O_HDMI_GCTL_8ch_src(data)                                                ((0x00000800&(data))>>11)
#define AIO_O_HDMI_GCTL_get_8ch(data)                                                ((0x00000800&(data))>>11)
#define AIO_O_HDMI_GCTL_bit_shift                                                    (8)
#define AIO_O_HDMI_GCTL_bit_mask                                                     (0x00000700)
#define AIO_O_HDMI_GCTL_bit(data)                                                    (0x00000700&((data)<<8))
#define AIO_O_HDMI_GCTL_bit_src(data)                                                ((0x00000700&(data))>>8)
#define AIO_O_HDMI_GCTL_get_bit(data)                                                ((0x00000700&(data))>>8)
#define AIO_O_HDMI_GCTL_wait_en_shift                                                (7)
#define AIO_O_HDMI_GCTL_wait_en_mask                                                 (0x00000080)
#define AIO_O_HDMI_GCTL_wait_en(data)                                                (0x00000080&((data)<<7))
#define AIO_O_HDMI_GCTL_wait_en_src(data)                                            ((0x00000080&(data))>>7)
#define AIO_O_HDMI_GCTL_get_wait_en(data)                                            ((0x00000080&(data))>>7)
#define AIO_O_HDMI_GCTL_rmute_shift                                                  (5)
#define AIO_O_HDMI_GCTL_rmute_mask                                                   (0x00000020)
#define AIO_O_HDMI_GCTL_rmute(data)                                                  (0x00000020&((data)<<5))
#define AIO_O_HDMI_GCTL_rmute_src(data)                                              ((0x00000020&(data))>>5)
#define AIO_O_HDMI_GCTL_get_rmute(data)                                              ((0x00000020&(data))>>5)
#define AIO_O_HDMI_GCTL_lmute_shift                                                  (4)
#define AIO_O_HDMI_GCTL_lmute_mask                                                   (0x00000010)
#define AIO_O_HDMI_GCTL_lmute(data)                                                  (0x00000010&((data)<<4))
#define AIO_O_HDMI_GCTL_lmute_src(data)                                              ((0x00000010&(data))>>4)
#define AIO_O_HDMI_GCTL_get_lmute(data)                                              ((0x00000010&(data))>>4)
#define AIO_O_HDMI_GCTL_switch_wait_en_shift                                         (3)
#define AIO_O_HDMI_GCTL_switch_wait_en_mask                                          (0x00000008)
#define AIO_O_HDMI_GCTL_switch_wait_en(data)                                         (0x00000008&((data)<<3))
#define AIO_O_HDMI_GCTL_switch_wait_en_src(data)                                     ((0x00000008&(data))>>3)
#define AIO_O_HDMI_GCTL_get_switch_wait_en(data)                                     ((0x00000008&(data))>>3)
#define AIO_O_HDMI_GCTL_sel_shift                                                    (1)
#define AIO_O_HDMI_GCTL_sel_mask                                                     (0x00000006)
#define AIO_O_HDMI_GCTL_sel(data)                                                    (0x00000006&((data)<<1))
#define AIO_O_HDMI_GCTL_sel_src(data)                                                ((0x00000006&(data))>>1)
#define AIO_O_HDMI_GCTL_get_sel(data)                                                ((0x00000006&(data))>>1)
#define AIO_O_HDMI_GCTL_en_shift                                                     (0)
#define AIO_O_HDMI_GCTL_en_mask                                                      (0x00000001)
#define AIO_O_HDMI_GCTL_en(data)                                                     (0x00000001&((data)<<0))
#define AIO_O_HDMI_GCTL_en_src(data)                                                 ((0x00000001&(data))>>0)
#define AIO_O_HDMI_GCTL_get_en(data)                                                 ((0x00000001&(data))>>0)


#define AIO_O_HDMI_FCNT                                                              0x98006074
#define AIO_O_HDMI_FCNT_reg_addr                                                     "0xD8006074"
#define AIO_O_HDMI_FCNT_reg                                                          0xD8006074
#define set_AIO_O_HDMI_FCNT_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI_FCNT_reg)=data)
#define get_AIO_O_HDMI_FCNT_reg   (*((volatile unsigned int*) AIO_O_HDMI_FCNT_reg))
#define AIO_O_HDMI_FCNT_inst_adr                                                     "0x001D"
#define AIO_O_HDMI_FCNT_inst                                                         0x001D
#define AIO_O_HDMI_FCNT_realgo_shift                                                 (8)
#define AIO_O_HDMI_FCNT_realgo_mask                                                  (0x00000100)
#define AIO_O_HDMI_FCNT_realgo(data)                                                 (0x00000100&((data)<<8))
#define AIO_O_HDMI_FCNT_realgo_src(data)                                             ((0x00000100&(data))>>8)
#define AIO_O_HDMI_FCNT_get_realgo(data)                                             ((0x00000100&(data))>>8)
#define AIO_O_HDMI_FCNT_fcnt_shift                                                   (0)
#define AIO_O_HDMI_FCNT_fcnt_mask                                                    (0x000000FF)
#define AIO_O_HDMI_FCNT_fcnt(data)                                                   (0x000000FF&((data)<<0))
#define AIO_O_HDMI_FCNT_fcnt_src(data)                                               ((0x000000FF&(data))>>0)
#define AIO_O_HDMI_FCNT_get_fcnt(data)                                               ((0x000000FF&(data))>>0)


#define AIO_O_HDMI_CS1                                                               0x98006078
#define AIO_O_HDMI_CS1_reg_addr                                                      "0xD8006078"
#define AIO_O_HDMI_CS1_reg                                                           0xD8006078
#define set_AIO_O_HDMI_CS1_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI_CS1_reg)=data)
#define get_AIO_O_HDMI_CS1_reg   (*((volatile unsigned int*) AIO_O_HDMI_CS1_reg))
#define AIO_O_HDMI_CS1_inst_adr                                                      "0x001E"
#define AIO_O_HDMI_CS1_inst                                                          0x001E
#define AIO_O_HDMI_CS1_cs1_shift                                                     (0)
#define AIO_O_HDMI_CS1_cs1_mask                                                      (0xFFFFFFFF)
#define AIO_O_HDMI_CS1_cs1(data)                                                     (0xFFFFFFFF&((data)<<0))
#define AIO_O_HDMI_CS1_cs1_src(data)                                                 ((0xFFFFFFFF&(data))>>0)
#define AIO_O_HDMI_CS1_get_cs1(data)                                                 ((0xFFFFFFFF&(data))>>0)


#define AIO_O_HDMI_CS2                                                               0x9800607c
#define AIO_O_HDMI_CS2_reg_addr                                                      "0xD800607C"
#define AIO_O_HDMI_CS2_reg                                                           0xD800607C
#define set_AIO_O_HDMI_CS2_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI_CS2_reg)=data)
#define get_AIO_O_HDMI_CS2_reg   (*((volatile unsigned int*) AIO_O_HDMI_CS2_reg))
#define AIO_O_HDMI_CS2_inst_adr                                                      "0x001F"
#define AIO_O_HDMI_CS2_inst                                                          0x001F
#define AIO_O_HDMI_CS2_cs2_shift                                                     (0)
#define AIO_O_HDMI_CS2_cs2_mask                                                      (0x0000FFFF)
#define AIO_O_HDMI_CS2_cs2(data)                                                     (0x0000FFFF&((data)<<0))
#define AIO_O_HDMI_CS2_cs2_src(data)                                                 ((0x0000FFFF&(data))>>0)
#define AIO_O_HDMI_CS2_get_cs2(data)                                                 ((0x0000FFFF&(data))>>0)


#define AIO_O_HDMI_INFO                                                              0x980060d0
#define AIO_O_HDMI_INFO_reg_addr                                                     "0xD80060D0"
#define AIO_O_HDMI_INFO_reg                                                          0xD80060D0
#define set_AIO_O_HDMI_INFO_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI_INFO_reg)=data)
#define get_AIO_O_HDMI_INFO_reg   (*((volatile unsigned int*) AIO_O_HDMI_INFO_reg))
#define AIO_O_HDMI_INFO_inst_adr                                                     "0x0034"
#define AIO_O_HDMI_INFO_inst                                                         0x0034
#define AIO_O_HDMI_INFO_userdata_shift                                               (8)
#define AIO_O_HDMI_INFO_userdata_mask                                                (0x0000FF00)
#define AIO_O_HDMI_INFO_userdata(data)                                               (0x0000FF00&((data)<<8))
#define AIO_O_HDMI_INFO_userdata_src(data)                                           ((0x0000FF00&(data))>>8)
#define AIO_O_HDMI_INFO_get_userdata(data)                                           ((0x0000FF00&(data))>>8)
#define AIO_O_HDMI_INFO_valid_shift                                                  (0)
#define AIO_O_HDMI_INFO_valid_mask                                                   (0x000000FF)
#define AIO_O_HDMI_INFO_valid(data)                                                  (0x000000FF&((data)<<0))
#define AIO_O_HDMI_INFO_valid_src(data)                                              ((0x000000FF&(data))>>0)
#define AIO_O_HDMI_INFO_get_valid(data)                                              ((0x000000FF&(data))>>0)


#define AIO_O_ACDAC_GCTL                                                             0x98006600
#define AIO_O_ACDAC_GCTL_reg_addr                                                    "0xD8006600"
#define AIO_O_ACDAC_GCTL_reg                                                         0xD8006600
#define set_AIO_O_ACDAC_GCTL_reg(data)   (*((volatile unsigned int*) AIO_O_ACDAC_GCTL_reg)=data)
#define get_AIO_O_ACDAC_GCTL_reg   (*((volatile unsigned int*) AIO_O_ACDAC_GCTL_reg))
#define AIO_O_ACDAC_GCTL_inst_adr                                                    "0x0080"
#define AIO_O_ACDAC_GCTL_inst                                                        0x0080
#define AIO_O_ACDAC_GCTL_daad_lp_en_shift                                            (23)
#define AIO_O_ACDAC_GCTL_daad_lp_en_mask                                             (0x00800000)
#define AIO_O_ACDAC_GCTL_daad_lp_en(data)                                            (0x00800000&((data)<<23))
#define AIO_O_ACDAC_GCTL_daad_lp_en_src(data)                                        ((0x00800000&(data))>>23)
#define AIO_O_ACDAC_GCTL_get_daad_lp_en(data)                                        ((0x00800000&(data))>>23)
#define AIO_O_ACDAC_GCTL_adda_lp_en_shift                                            (22)
#define AIO_O_ACDAC_GCTL_adda_lp_en_mask                                             (0x00400000)
#define AIO_O_ACDAC_GCTL_adda_lp_en(data)                                            (0x00400000&((data)<<22))
#define AIO_O_ACDAC_GCTL_adda_lp_en_src(data)                                        ((0x00400000&(data))>>22)
#define AIO_O_ACDAC_GCTL_get_adda_lp_en(data)                                        ((0x00400000&(data))>>22)
#define AIO_O_ACDAC_GCTL_pcm2chsel_shift                                             (21)
#define AIO_O_ACDAC_GCTL_pcm2chsel_mask                                              (0x00200000)
#define AIO_O_ACDAC_GCTL_pcm2chsel(data)                                             (0x00200000&((data)<<21))
#define AIO_O_ACDAC_GCTL_pcm2chsel_src(data)                                         ((0x00200000&(data))>>21)
#define AIO_O_ACDAC_GCTL_get_pcm2chsel(data)                                         ((0x00200000&(data))>>21)
#define AIO_O_ACDAC_GCTL_rgain_shift                                                 (14)
#define AIO_O_ACDAC_GCTL_rgain_mask                                                  (0x001FC000)
#define AIO_O_ACDAC_GCTL_rgain(data)                                                 (0x001FC000&((data)<<14))
#define AIO_O_ACDAC_GCTL_rgain_src(data)                                             ((0x001FC000&(data))>>14)
#define AIO_O_ACDAC_GCTL_get_rgain(data)                                             ((0x001FC000&(data))>>14)
#define AIO_O_ACDAC_GCTL_lgain_shift                                                 (7)
#define AIO_O_ACDAC_GCTL_lgain_mask                                                  (0x00003F80)
#define AIO_O_ACDAC_GCTL_lgain(data)                                                 (0x00003F80&((data)<<7))
#define AIO_O_ACDAC_GCTL_lgain_src(data)                                             ((0x00003F80&(data))>>7)
#define AIO_O_ACDAC_GCTL_get_lgain(data)                                             ((0x00003F80&(data))>>7)
#define AIO_O_ACDAC_GCTL_bit_shift                                                   (4)
#define AIO_O_ACDAC_GCTL_bit_mask                                                    (0x00000070)
#define AIO_O_ACDAC_GCTL_bit(data)                                                   (0x00000070&((data)<<4))
#define AIO_O_ACDAC_GCTL_bit_src(data)                                               ((0x00000070&(data))>>4)
#define AIO_O_ACDAC_GCTL_get_bit(data)                                               ((0x00000070&(data))>>4)
#define AIO_O_ACDAC_GCTL_hpfen_shift                                                 (3)
#define AIO_O_ACDAC_GCTL_hpfen_mask                                                  (0x00000008)
#define AIO_O_ACDAC_GCTL_hpfen(data)                                                 (0x00000008&((data)<<3))
#define AIO_O_ACDAC_GCTL_hpfen_src(data)                                             ((0x00000008&(data))>>3)
#define AIO_O_ACDAC_GCTL_get_hpfen(data)                                             ((0x00000008&(data))>>3)
#define AIO_O_ACDAC_GCTL_rmute_shift                                                 (2)
#define AIO_O_ACDAC_GCTL_rmute_mask                                                  (0x00000004)
#define AIO_O_ACDAC_GCTL_rmute(data)                                                 (0x00000004&((data)<<2))
#define AIO_O_ACDAC_GCTL_rmute_src(data)                                             ((0x00000004&(data))>>2)
#define AIO_O_ACDAC_GCTL_get_rmute(data)                                             ((0x00000004&(data))>>2)
#define AIO_O_ACDAC_GCTL_lmute_shift                                                 (1)
#define AIO_O_ACDAC_GCTL_lmute_mask                                                  (0x00000002)
#define AIO_O_ACDAC_GCTL_lmute(data)                                                 (0x00000002&((data)<<1))
#define AIO_O_ACDAC_GCTL_lmute_src(data)                                             ((0x00000002&(data))>>1)
#define AIO_O_ACDAC_GCTL_get_lmute(data)                                             ((0x00000002&(data))>>1)
#define AIO_O_ACDAC_GCTL_en_shift                                                    (0)
#define AIO_O_ACDAC_GCTL_en_mask                                                     (0x00000001)
#define AIO_O_ACDAC_GCTL_en(data)                                                    (0x00000001&((data)<<0))
#define AIO_O_ACDAC_GCTL_en_src(data)                                                ((0x00000001&(data))>>0)
#define AIO_O_ACDAC_GCTL_get_en(data)                                                ((0x00000001&(data))>>0)


#define AIO_O_ACANA_GCTL1                                                            0x98006604
#define AIO_O_ACANA_GCTL1_reg_addr                                                   "0xD8006604"
#define AIO_O_ACANA_GCTL1_reg                                                        0xD8006604
#define set_AIO_O_ACANA_GCTL1_reg(data)   (*((volatile unsigned int*) AIO_O_ACANA_GCTL1_reg)=data)
#define get_AIO_O_ACANA_GCTL1_reg   (*((volatile unsigned int*) AIO_O_ACANA_GCTL1_reg))
#define AIO_O_ACANA_GCTL1_inst_adr                                                   "0x0081"
#define AIO_O_ACANA_GCTL1_inst                                                       0x0081
#define AIO_O_ACANA_GCTL1_write_en14_shift                                           (31)
#define AIO_O_ACANA_GCTL1_write_en14_mask                                            (0x80000000)
#define AIO_O_ACANA_GCTL1_write_en14(data)                                           (0x80000000&((data)<<31))
#define AIO_O_ACANA_GCTL1_write_en14_src(data)                                       ((0x80000000&(data))>>31)
#define AIO_O_ACANA_GCTL1_get_write_en14(data)                                       ((0x80000000&(data))>>31)
#define AIO_O_ACANA_GCTL1_isel_df2se_shift                                           (29)
#define AIO_O_ACANA_GCTL1_isel_df2se_mask                                            (0x60000000)
#define AIO_O_ACANA_GCTL1_isel_df2se(data)                                           (0x60000000&((data)<<29))
#define AIO_O_ACANA_GCTL1_isel_df2se_src(data)                                       ((0x60000000&(data))>>29)
#define AIO_O_ACANA_GCTL1_get_isel_df2se(data)                                       ((0x60000000&(data))>>29)
#define AIO_O_ACANA_GCTL1_write_en13_shift                                           (28)
#define AIO_O_ACANA_GCTL1_write_en13_mask                                            (0x10000000)
#define AIO_O_ACANA_GCTL1_write_en13(data)                                           (0x10000000&((data)<<28))
#define AIO_O_ACANA_GCTL1_write_en13_src(data)                                       ((0x10000000&(data))>>28)
#define AIO_O_ACANA_GCTL1_get_write_en13(data)                                       ((0x10000000&(data))>>28)
#define AIO_O_ACANA_GCTL1_isel_depop_shift                                           (26)
#define AIO_O_ACANA_GCTL1_isel_depop_mask                                            (0x0C000000)
#define AIO_O_ACANA_GCTL1_isel_depop(data)                                           (0x0C000000&((data)<<26))
#define AIO_O_ACANA_GCTL1_isel_depop_src(data)                                       ((0x0C000000&(data))>>26)
#define AIO_O_ACANA_GCTL1_get_isel_depop(data)                                       ((0x0C000000&(data))>>26)
#define AIO_O_ACANA_GCTL1_write_en12_shift                                           (25)
#define AIO_O_ACANA_GCTL1_write_en12_mask                                            (0x02000000)
#define AIO_O_ACANA_GCTL1_write_en12(data)                                           (0x02000000&((data)<<25))
#define AIO_O_ACANA_GCTL1_write_en12_src(data)                                       ((0x02000000&(data))>>25)
#define AIO_O_ACANA_GCTL1_get_write_en12(data)                                       ((0x02000000&(data))>>25)
#define AIO_O_ACANA_GCTL1_isel_dacvcm_shift                                          (23)
#define AIO_O_ACANA_GCTL1_isel_dacvcm_mask                                           (0x01800000)
#define AIO_O_ACANA_GCTL1_isel_dacvcm(data)                                          (0x01800000&((data)<<23))
#define AIO_O_ACANA_GCTL1_isel_dacvcm_src(data)                                      ((0x01800000&(data))>>23)
#define AIO_O_ACANA_GCTL1_get_isel_dacvcm(data)                                      ((0x01800000&(data))>>23)
#define AIO_O_ACANA_GCTL1_write_en11_shift                                           (22)
#define AIO_O_ACANA_GCTL1_write_en11_mask                                            (0x00400000)
#define AIO_O_ACANA_GCTL1_write_en11(data)                                           (0x00400000&((data)<<22))
#define AIO_O_ACANA_GCTL1_write_en11_src(data)                                       ((0x00400000&(data))>>22)
#define AIO_O_ACANA_GCTL1_get_write_en11(data)                                       ((0x00400000&(data))>>22)
#define AIO_O_ACANA_GCTL1_isel_dacop_shift                                           (20)
#define AIO_O_ACANA_GCTL1_isel_dacop_mask                                            (0x00300000)
#define AIO_O_ACANA_GCTL1_isel_dacop(data)                                           (0x00300000&((data)<<20))
#define AIO_O_ACANA_GCTL1_isel_dacop_src(data)                                       ((0x00300000&(data))>>20)
#define AIO_O_ACANA_GCTL1_get_isel_dacop(data)                                       ((0x00300000&(data))>>20)
#define AIO_O_ACANA_GCTL1_write_en10_shift                                           (19)
#define AIO_O_ACANA_GCTL1_write_en10_mask                                            (0x00080000)
#define AIO_O_ACANA_GCTL1_write_en10(data)                                           (0x00080000&((data)<<19))
#define AIO_O_ACANA_GCTL1_write_en10_src(data)                                       ((0x00080000&(data))>>19)
#define AIO_O_ACANA_GCTL1_get_write_en10(data)                                       ((0x00080000&(data))>>19)
#define AIO_O_ACANA_GCTL1_powvref_shift                                              (18)
#define AIO_O_ACANA_GCTL1_powvref_mask                                               (0x00040000)
#define AIO_O_ACANA_GCTL1_powvref(data)                                              (0x00040000&((data)<<18))
#define AIO_O_ACANA_GCTL1_powvref_src(data)                                          ((0x00040000&(data))>>18)
#define AIO_O_ACANA_GCTL1_get_powvref(data)                                          ((0x00040000&(data))>>18)
#define AIO_O_ACANA_GCTL1_write_en9_shift                                            (17)
#define AIO_O_ACANA_GCTL1_write_en9_mask                                             (0x00020000)
#define AIO_O_ACANA_GCTL1_write_en9(data)                                            (0x00020000&((data)<<17))
#define AIO_O_ACANA_GCTL1_write_en9_src(data)                                        ((0x00020000&(data))>>17)
#define AIO_O_ACANA_GCTL1_get_write_en9(data)                                        ((0x00020000&(data))>>17)
#define AIO_O_ACANA_GCTL1_powmbias_shift                                             (16)
#define AIO_O_ACANA_GCTL1_powmbias_mask                                              (0x00010000)
#define AIO_O_ACANA_GCTL1_powmbias(data)                                             (0x00010000&((data)<<16))
#define AIO_O_ACANA_GCTL1_powmbias_src(data)                                         ((0x00010000&(data))>>16)
#define AIO_O_ACANA_GCTL1_get_powmbias(data)                                         ((0x00010000&(data))>>16)
#define AIO_O_ACANA_GCTL1_write_en7_shift                                            (13)
#define AIO_O_ACANA_GCTL1_write_en7_mask                                             (0x00002000)
#define AIO_O_ACANA_GCTL1_write_en7(data)                                            (0x00002000&((data)<<13))
#define AIO_O_ACANA_GCTL1_write_en7_src(data)                                        ((0x00002000&(data))>>13)
#define AIO_O_ACANA_GCTL1_get_write_en7(data)                                        ((0x00002000&(data))>>13)
#define AIO_O_ACANA_GCTL1_powdf2se_shift                                             (12)
#define AIO_O_ACANA_GCTL1_powdf2se_mask                                              (0x00001000)
#define AIO_O_ACANA_GCTL1_powdf2se(data)                                             (0x00001000&((data)<<12))
#define AIO_O_ACANA_GCTL1_powdf2se_src(data)                                         ((0x00001000&(data))>>12)
#define AIO_O_ACANA_GCTL1_get_powdf2se(data)                                         ((0x00001000&(data))>>12)
#define AIO_O_ACANA_GCTL1_write_en6_shift                                            (11)
#define AIO_O_ACANA_GCTL1_write_en6_mask                                             (0x00000800)
#define AIO_O_ACANA_GCTL1_write_en6(data)                                            (0x00000800&((data)<<11))
#define AIO_O_ACANA_GCTL1_write_en6_src(data)                                        ((0x00000800&(data))>>11)
#define AIO_O_ACANA_GCTL1_get_write_en6(data)                                        ((0x00000800&(data))>>11)
#define AIO_O_ACANA_GCTL1_powdepop_shift                                             (10)
#define AIO_O_ACANA_GCTL1_powdepop_mask                                              (0x00000400)
#define AIO_O_ACANA_GCTL1_powdepop(data)                                             (0x00000400&((data)<<10))
#define AIO_O_ACANA_GCTL1_powdepop_src(data)                                         ((0x00000400&(data))>>10)
#define AIO_O_ACANA_GCTL1_get_powdepop(data)                                         ((0x00000400&(data))>>10)
#define AIO_O_ACANA_GCTL1_write_en5_shift                                            (9)
#define AIO_O_ACANA_GCTL1_write_en5_mask                                             (0x00000200)
#define AIO_O_ACANA_GCTL1_write_en5(data)                                            (0x00000200&((data)<<9))
#define AIO_O_ACANA_GCTL1_write_en5_src(data)                                        ((0x00000200&(data))>>9)
#define AIO_O_ACANA_GCTL1_get_write_en5(data)                                        ((0x00000200&(data))>>9)
#define AIO_O_ACANA_GCTL1_powdac_shift                                               (8)
#define AIO_O_ACANA_GCTL1_powdac_mask                                                (0x00000100)
#define AIO_O_ACANA_GCTL1_powdac(data)                                               (0x00000100&((data)<<8))
#define AIO_O_ACANA_GCTL1_powdac_src(data)                                           ((0x00000100&(data))>>8)
#define AIO_O_ACANA_GCTL1_get_powdac(data)                                           ((0x00000100&(data))>>8)
#define AIO_O_ACANA_GCTL1_write_en4_shift                                            (7)
#define AIO_O_ACANA_GCTL1_write_en4_mask                                             (0x00000080)
#define AIO_O_ACANA_GCTL1_write_en4(data)                                            (0x00000080&((data)<<7))
#define AIO_O_ACANA_GCTL1_write_en4_src(data)                                        ((0x00000080&(data))>>7)
#define AIO_O_ACANA_GCTL1_get_write_en4(data)                                        ((0x00000080&(data))>>7)
#define AIO_O_ACANA_GCTL1_mutel_shift                                                (6)
#define AIO_O_ACANA_GCTL1_mutel_mask                                                 (0x00000040)
#define AIO_O_ACANA_GCTL1_mutel(data)                                                (0x00000040&((data)<<6))
#define AIO_O_ACANA_GCTL1_mutel_src(data)                                            ((0x00000040&(data))>>6)
#define AIO_O_ACANA_GCTL1_get_mutel(data)                                            ((0x00000040&(data))>>6)
#define AIO_O_ACANA_GCTL1_write_en3_shift                                            (5)
#define AIO_O_ACANA_GCTL1_write_en3_mask                                             (0x00000020)
#define AIO_O_ACANA_GCTL1_write_en3(data)                                            (0x00000020&((data)<<5))
#define AIO_O_ACANA_GCTL1_write_en3_src(data)                                        ((0x00000020&(data))>>5)
#define AIO_O_ACANA_GCTL1_get_write_en3(data)                                        ((0x00000020&(data))>>5)
#define AIO_O_ACANA_GCTL1_muter_shift                                                (4)
#define AIO_O_ACANA_GCTL1_muter_mask                                                 (0x00000010)
#define AIO_O_ACANA_GCTL1_muter(data)                                                (0x00000010&((data)<<4))
#define AIO_O_ACANA_GCTL1_muter_src(data)                                            ((0x00000010&(data))>>4)
#define AIO_O_ACANA_GCTL1_get_muter(data)                                            ((0x00000010&(data))>>4)
#define AIO_O_ACANA_GCTL1_write_en2_shift                                            (3)
#define AIO_O_ACANA_GCTL1_write_en2_mask                                             (0x00000008)
#define AIO_O_ACANA_GCTL1_write_en2(data)                                            (0x00000008&((data)<<3))
#define AIO_O_ACANA_GCTL1_write_en2_src(data)                                        ((0x00000008&(data))>>3)
#define AIO_O_ACANA_GCTL1_get_write_en2(data)                                        ((0x00000008&(data))>>3)
#define AIO_O_ACANA_GCTL1_normal_shift                                               (2)
#define AIO_O_ACANA_GCTL1_normal_mask                                                (0x00000004)
#define AIO_O_ACANA_GCTL1_normal(data)                                               (0x00000004&((data)<<2))
#define AIO_O_ACANA_GCTL1_normal_src(data)                                           ((0x00000004&(data))>>2)
#define AIO_O_ACANA_GCTL1_get_normal(data)                                           ((0x00000004&(data))>>2)
#define AIO_O_ACANA_GCTL1_write_en1_shift                                            (1)
#define AIO_O_ACANA_GCTL1_write_en1_mask                                             (0x00000002)
#define AIO_O_ACANA_GCTL1_write_en1(data)                                            (0x00000002&((data)<<1))
#define AIO_O_ACANA_GCTL1_write_en1_src(data)                                        ((0x00000002&(data))>>1)
#define AIO_O_ACANA_GCTL1_get_write_en1(data)                                        ((0x00000002&(data))>>1)
#define AIO_O_ACANA_GCTL1_vcmh_sel_shift                                             (0)
#define AIO_O_ACANA_GCTL1_vcmh_sel_mask                                              (0x00000001)
#define AIO_O_ACANA_GCTL1_vcmh_sel(data)                                             (0x00000001&((data)<<0))
#define AIO_O_ACANA_GCTL1_vcmh_sel_src(data)                                         ((0x00000001&(data))>>0)
#define AIO_O_ACANA_GCTL1_get_vcmh_sel(data)                                         ((0x00000001&(data))>>0)


#define AIO_O_ACANA_GCTL2                                                            0x98006608
#define AIO_O_ACANA_GCTL2_reg_addr                                                   "0xD8006608"
#define AIO_O_ACANA_GCTL2_reg                                                        0xD8006608
#define set_AIO_O_ACANA_GCTL2_reg(data)   (*((volatile unsigned int*) AIO_O_ACANA_GCTL2_reg)=data)
#define get_AIO_O_ACANA_GCTL2_reg   (*((volatile unsigned int*) AIO_O_ACANA_GCTL2_reg))
#define AIO_O_ACANA_GCTL2_inst_adr                                                   "0x0082"
#define AIO_O_ACANA_GCTL2_inst                                                       0x0082
#define AIO_O_ACANA_GCTL2_write_en12_shift                                           (31)
#define AIO_O_ACANA_GCTL2_write_en12_mask                                            (0x80000000)
#define AIO_O_ACANA_GCTL2_write_en12(data)                                           (0x80000000&((data)<<31))
#define AIO_O_ACANA_GCTL2_write_en12_src(data)                                       ((0x80000000&(data))>>31)
#define AIO_O_ACANA_GCTL2_get_write_en12(data)                                       ((0x80000000&(data))>>31)
#define AIO_O_ACANA_GCTL2_crt_depop_clk_sel_shift                                    (29)
#define AIO_O_ACANA_GCTL2_crt_depop_clk_sel_mask                                     (0x60000000)
#define AIO_O_ACANA_GCTL2_crt_depop_clk_sel(data)                                    (0x60000000&((data)<<29))
#define AIO_O_ACANA_GCTL2_crt_depop_clk_sel_src(data)                                ((0x60000000&(data))>>29)
#define AIO_O_ACANA_GCTL2_get_crt_depop_clk_sel(data)                                ((0x60000000&(data))>>29)
#define AIO_O_ACANA_GCTL2_write_en11_shift                                           (28)
#define AIO_O_ACANA_GCTL2_write_en11_mask                                            (0x10000000)
#define AIO_O_ACANA_GCTL2_write_en11(data)                                           (0x10000000&((data)<<28))
#define AIO_O_ACANA_GCTL2_write_en11_src(data)                                       ((0x10000000&(data))>>28)
#define AIO_O_ACANA_GCTL2_get_write_en11(data)                                       ((0x10000000&(data))>>28)
#define AIO_O_ACANA_GCTL2_depop_rampsel_shift                                        (27)
#define AIO_O_ACANA_GCTL2_depop_rampsel_mask                                         (0x08000000)
#define AIO_O_ACANA_GCTL2_depop_rampsel(data)                                        (0x08000000&((data)<<27))
#define AIO_O_ACANA_GCTL2_depop_rampsel_src(data)                                    ((0x08000000&(data))>>27)
#define AIO_O_ACANA_GCTL2_get_depop_rampsel(data)                                    ((0x08000000&(data))>>27)
#define AIO_O_ACANA_GCTL2_write_en10_shift                                           (26)
#define AIO_O_ACANA_GCTL2_write_en10_mask                                            (0x04000000)
#define AIO_O_ACANA_GCTL2_write_en10(data)                                           (0x04000000&((data)<<26))
#define AIO_O_ACANA_GCTL2_write_en10_src(data)                                       ((0x04000000&(data))>>26)
#define AIO_O_ACANA_GCTL2_get_write_en10(data)                                       ((0x04000000&(data))>>26)
#define AIO_O_ACANA_GCTL2_depop_csel_shift                                           (24)
#define AIO_O_ACANA_GCTL2_depop_csel_mask                                            (0x03000000)
#define AIO_O_ACANA_GCTL2_depop_csel(data)                                           (0x03000000&((data)<<24))
#define AIO_O_ACANA_GCTL2_depop_csel_src(data)                                       ((0x03000000&(data))>>24)
#define AIO_O_ACANA_GCTL2_get_depop_csel(data)                                       ((0x03000000&(data))>>24)
#define AIO_O_ACANA_GCTL2_write_en9_shift                                            (23)
#define AIO_O_ACANA_GCTL2_write_en9_mask                                             (0x00800000)
#define AIO_O_ACANA_GCTL2_write_en9(data)                                            (0x00800000&((data)<<23))
#define AIO_O_ACANA_GCTL2_write_en9_src(data)                                        ((0x00800000&(data))>>23)
#define AIO_O_ACANA_GCTL2_get_write_en9(data)                                        ((0x00800000&(data))>>23)
#define AIO_O_ACANA_GCTL2_depop_enramp_shift                                         (22)
#define AIO_O_ACANA_GCTL2_depop_enramp_mask                                          (0x00400000)
#define AIO_O_ACANA_GCTL2_depop_enramp(data)                                         (0x00400000&((data)<<22))
#define AIO_O_ACANA_GCTL2_depop_enramp_src(data)                                     ((0x00400000&(data))>>22)
#define AIO_O_ACANA_GCTL2_get_depop_enramp(data)                                     ((0x00400000&(data))>>22)
#define AIO_O_ACANA_GCTL2_write_en8_shift                                            (21)
#define AIO_O_ACANA_GCTL2_write_en8_mask                                             (0x00200000)
#define AIO_O_ACANA_GCTL2_write_en8(data)                                            (0x00200000&((data)<<21))
#define AIO_O_ACANA_GCTL2_write_en8_src(data)                                        ((0x00200000&(data))>>21)
#define AIO_O_ACANA_GCTL2_get_write_en8(data)                                        ((0x00200000&(data))>>21)
#define AIO_O_ACANA_GCTL2_vrp_sel_shift                                              (19)
#define AIO_O_ACANA_GCTL2_vrp_sel_mask                                               (0x00180000)
#define AIO_O_ACANA_GCTL2_vrp_sel(data)                                              (0x00180000&((data)<<19))
#define AIO_O_ACANA_GCTL2_vrp_sel_src(data)                                          ((0x00180000&(data))>>19)
#define AIO_O_ACANA_GCTL2_get_vrp_sel(data)                                          ((0x00180000&(data))>>19)
#define AIO_O_ACANA_GCTL2_write_en7_shift                                            (18)
#define AIO_O_ACANA_GCTL2_write_en7_mask                                             (0x00040000)
#define AIO_O_ACANA_GCTL2_write_en7(data)                                            (0x00040000&((data)<<18))
#define AIO_O_ACANA_GCTL2_write_en7_src(data)                                        ((0x00040000&(data))>>18)
#define AIO_O_ACANA_GCTL2_get_write_en7(data)                                        ((0x00040000&(data))>>18)
#define AIO_O_ACANA_GCTL2_isel_vcmh_shift                                            (16)
#define AIO_O_ACANA_GCTL2_isel_vcmh_mask                                             (0x00030000)
#define AIO_O_ACANA_GCTL2_isel_vcmh(data)                                            (0x00030000&((data)<<16))
#define AIO_O_ACANA_GCTL2_isel_vcmh_src(data)                                        ((0x00030000&(data))>>16)
#define AIO_O_ACANA_GCTL2_get_isel_vcmh(data)                                        ((0x00030000&(data))>>16)
#define AIO_O_ACANA_GCTL2_write_en5_shift                                            (12)
#define AIO_O_ACANA_GCTL2_write_en5_mask                                             (0x00001000)
#define AIO_O_ACANA_GCTL2_write_en5(data)                                            (0x00001000&((data)<<12))
#define AIO_O_ACANA_GCTL2_write_en5_src(data)                                        ((0x00001000&(data))>>12)
#define AIO_O_ACANA_GCTL2_get_write_en5(data)                                        ((0x00001000&(data))>>12)
#define AIO_O_ACANA_GCTL2_vref_vrefsel_shift                                         (10)
#define AIO_O_ACANA_GCTL2_vref_vrefsel_mask                                          (0x00000C00)
#define AIO_O_ACANA_GCTL2_vref_vrefsel(data)                                         (0x00000C00&((data)<<10))
#define AIO_O_ACANA_GCTL2_vref_vrefsel_src(data)                                     ((0x00000C00&(data))>>10)
#define AIO_O_ACANA_GCTL2_get_vref_vrefsel(data)                                     ((0x00000C00&(data))>>10)
#define AIO_O_ACANA_GCTL2_write_en2_shift                                            (5)
#define AIO_O_ACANA_GCTL2_write_en2_mask                                             (0x00000020)
#define AIO_O_ACANA_GCTL2_write_en2(data)                                            (0x00000020&((data)<<5))
#define AIO_O_ACANA_GCTL2_write_en2_src(data)                                        ((0x00000020&(data))>>5)
#define AIO_O_ACANA_GCTL2_get_write_en2(data)                                        ((0x00000020&(data))>>5)
#define AIO_O_ACANA_GCTL2_isel_vref_shift                                            (3)
#define AIO_O_ACANA_GCTL2_isel_vref_mask                                             (0x00000018)
#define AIO_O_ACANA_GCTL2_isel_vref(data)                                            (0x00000018&((data)<<3))
#define AIO_O_ACANA_GCTL2_isel_vref_src(data)                                        ((0x00000018&(data))>>3)
#define AIO_O_ACANA_GCTL2_get_isel_vref(data)                                        ((0x00000018&(data))>>3)


#define AIO_I_ACANA_ADC_GCTL1                                                        0x9800660c
#define AIO_I_ACANA_ADC_GCTL1_reg_addr                                               "0xD800660C"
#define AIO_I_ACANA_ADC_GCTL1_reg                                                    0xD800660C
#define set_AIO_I_ACANA_ADC_GCTL1_reg(data)   (*((volatile unsigned int*) AIO_I_ACANA_ADC_GCTL1_reg)=data)
#define get_AIO_I_ACANA_ADC_GCTL1_reg   (*((volatile unsigned int*) AIO_I_ACANA_ADC_GCTL1_reg))
#define AIO_I_ACANA_ADC_GCTL1_inst_adr                                               "0x0083"
#define AIO_I_ACANA_ADC_GCTL1_inst                                                   0x0083
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_GSELL_shift                               (30)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_GSELL_mask                                (0xC0000000)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_GSELL(data)                               (0xC0000000&((data)<<30))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_GSELL_src(data)                           ((0xC0000000&(data))>>30)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ADCFE_GSELL(data)                           ((0xC0000000&(data))>>30)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_GSELR_shift                               (28)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_GSELR_mask                                (0x30000000)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_GSELR(data)                               (0x30000000&((data)<<28))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_GSELR_src(data)                           ((0x30000000&(data))>>28)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ADCFE_GSELR(data)                           ((0x30000000&(data))>>28)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADC_OSSEL_shift                                 (26)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADC_OSSEL_mask                                  (0x0C000000)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADC_OSSEL(data)                                 (0x0C000000&((data)<<26))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADC_OSSEL_src(data)                             ((0x0C000000&(data))>>26)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ADC_OSSEL(data)                             ((0x0C000000&(data))>>26)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCAA_shift                                (24)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCAA_mask                                 (0x03000000)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCAA(data)                                (0x03000000&((data)<<24))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCAA_src(data)                            ((0x03000000&(data))>>24)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ISEL_ADCAA(data)                            ((0x03000000&(data))>>24)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCCOMP_shift                              (22)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCCOMP_mask                               (0x00C00000)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCCOMP(data)                              (0x00C00000&((data)<<22))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCCOMP_src(data)                          ((0x00C00000&(data))>>22)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ISEL_ADCCOMP(data)                          ((0x00C00000&(data))>>22)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCSUM_shift                               (20)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCSUM_mask                                (0x00300000)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCSUM(data)                               (0x00300000&((data)<<20))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCSUM_src(data)                           ((0x00300000&(data))>>20)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ISEL_ADCSUM(data)                           ((0x00300000&(data))>>20)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCVCM_shift                               (18)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCVCM_mask                                (0x000C0000)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCVCM(data)                               (0x000C0000&((data)<<18))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCVCM_src(data)                           ((0x000C0000&(data))>>18)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ISEL_ADCVCM(data)                           ((0x000C0000&(data))>>18)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCST1_shift                               (16)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCST1_mask                                (0x00030000)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCST1(data)                               (0x00030000&((data)<<16))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCST1_src(data)                           ((0x00030000&(data))>>16)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ISEL_ADCST1(data)                           ((0x00030000&(data))>>16)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCST2_shift                               (14)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCST2_mask                                (0x0000C000)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCST2(data)                               (0x0000C000&((data)<<14))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_ADCST2_src(data)                           ((0x0000C000&(data))>>14)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ISEL_ADCST2(data)                           ((0x0000C000&(data))>>14)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_MICBIAS_OCSEL_shift                             (12)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_MICBIAS_OCSEL_mask                              (0x00003000)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_MICBIAS_OCSEL(data)                             (0x00003000&((data)<<12))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_MICBIAS_OCSEL_src(data)                         ((0x00003000&(data))>>12)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_MICBIAS_OCSEL(data)                         ((0x00003000&(data))>>12)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_MUTE_L_shift                              (9)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_MUTE_L_mask                               (0x00000E00)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_MUTE_L(data)                              (0x00000E00&((data)<<9))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_MUTE_L_src(data)                          ((0x00000E00&(data))>>9)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ADCFE_MUTE_L(data)                          ((0x00000E00&(data))>>9)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_MUTE_R_shift                              (6)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_MUTE_R_mask                               (0x000001C0)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_MUTE_R(data)                              (0x000001C0&((data)<<6))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ADCFE_MUTE_R_src(data)                          ((0x000001C0&(data))>>6)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ADCFE_MUTE_R(data)                          ((0x000001C0&(data))>>6)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_MICBIAS_shift                              (4)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_MICBIAS_mask                               (0x00000030)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_MICBIAS(data)                              (0x00000030&((data)<<4))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_MICBIAS_src(data)                          ((0x00000030&(data))>>4)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ISEL_MICBIAS(data)                          ((0x00000030&(data))>>4)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_MICBST_shift                               (2)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_MICBST_mask                                (0x0000000C)
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_MICBST(data)                               (0x0000000C&((data)<<2))
#define AIO_I_ACANA_ADC_GCTL1_REG_BB_ISEL_MICBST_src(data)                           ((0x0000000C&(data))>>2)
#define AIO_I_ACANA_ADC_GCTL1_get_REG_BB_ISEL_MICBST(data)                           ((0x0000000C&(data))>>2)


#define AIO_I_ACANA_ADC_GCTL2                                                        0x98006610
#define AIO_I_ACANA_ADC_GCTL2_reg_addr                                               "0xD8006610"
#define AIO_I_ACANA_ADC_GCTL2_reg                                                    0xD8006610
#define set_AIO_I_ACANA_ADC_GCTL2_reg(data)   (*((volatile unsigned int*) AIO_I_ACANA_ADC_GCTL2_reg)=data)
#define get_AIO_I_ACANA_ADC_GCTL2_reg   (*((volatile unsigned int*) AIO_I_ACANA_ADC_GCTL2_reg))
#define AIO_I_ACANA_ADC_GCTL2_inst_adr                                               "0x0084"
#define AIO_I_ACANA_ADC_GCTL2_inst                                                   0x0084
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_ADC_CKXEN_shift                                 (31)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_ADC_CKXEN_mask                                  (0x80000000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_ADC_CKXEN(data)                                 (0x80000000&((data)<<31))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_ADC_CKXEN_src(data)                             ((0x80000000&(data))>>31)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_ADC_CKXEN(data)                             ((0x80000000&(data))>>31)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_ENCHX_shift                             (30)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_ENCHX_mask                              (0x40000000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_ENCHX(data)                             (0x40000000&((data)<<30))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_ENCHX_src(data)                         ((0x40000000&(data))>>30)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_MICBIAS_ENCHX(data)                         ((0x40000000&(data))>>30)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_POWSHDT_shift                           (29)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_POWSHDT_mask                            (0x20000000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_POWSHDT(data)                           (0x20000000&((data)<<29))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_POWSHDT_src(data)                       ((0x20000000&(data))>>29)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_MICBIAS_POWSHDT(data)                       ((0x20000000&(data))>>29)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_ADC_FF_POW_shift                                (28)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_ADC_FF_POW_mask                                 (0x10000000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_ADC_FF_POW(data)                                (0x10000000&((data)<<28))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_ADC_FF_POW_src(data)                            ((0x10000000&(data))>>28)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_ADC_FF_POW(data)                            ((0x10000000&(data))>>28)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_ADC_CPEN_shift                                  (27)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_ADC_CPEN_mask                                   (0x08000000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_ADC_CPEN(data)                                  (0x08000000&((data)<<27))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_ADC_CPEN_src(data)                              ((0x08000000&(data))>>27)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_ADC_CPEN(data)                              ((0x08000000&(data))>>27)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_POW_shift                               (26)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_POW_mask                                (0x04000000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_POW(data)                               (0x04000000&((data)<<26))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_POW_src(data)                           ((0x04000000&(data))>>26)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_MICBIAS_POW(data)                           ((0x04000000&(data))>>26)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_VSET_shift                              (25)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_VSET_mask                               (0x02000000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_VSET(data)                              (0x02000000&((data)<<25))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBIAS_VSET_src(data)                          ((0x02000000&(data))>>25)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_MICBIAS_VSET(data)                          ((0x02000000&(data))>>25)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENDFL_shift                              (24)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENDFL_mask                               (0x01000000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENDFL(data)                              (0x01000000&((data)<<24))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENDFL_src(data)                          ((0x01000000&(data))>>24)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_MICBST_ENDFL(data)                          ((0x01000000&(data))>>24)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENDFR_shift                              (23)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENDFR_mask                               (0x00800000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENDFR(data)                              (0x00800000&((data)<<23))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENDFR_src(data)                          ((0x00800000&(data))>>23)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_MICBST_ENDFR(data)                          ((0x00800000&(data))>>23)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENPDRL_shift                             (22)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENPDRL_mask                              (0x00400000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENPDRL(data)                             (0x00400000&((data)<<22))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENPDRL_src(data)                         ((0x00400000&(data))>>22)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_MICBST_ENPDRL(data)                         ((0x00400000&(data))>>22)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENPDRR_shift                             (21)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENPDRR_mask                              (0x00200000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENPDRR(data)                             (0x00200000&((data)<<21))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_ENPDRR_src(data)                         ((0x00200000&(data))>>21)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_MICBST_ENPDRR(data)                         ((0x00200000&(data))>>21)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_GSELL_shift                              (19)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_GSELL_mask                               (0x00180000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_GSELL(data)                              (0x00180000&((data)<<19))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_GSELL_src(data)                          ((0x00180000&(data))>>19)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_MICBST_GSELL(data)                          ((0x00180000&(data))>>19)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_GSELR_shift                              (17)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_GSELR_mask                               (0x00060000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_GSELR(data)                              (0x00060000&((data)<<17))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_GSELR_src(data)                          ((0x00060000&(data))>>17)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_MICBST_GSELR(data)                          ((0x00060000&(data))>>17)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_POW_shift                                (15)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_POW_mask                                 (0x00018000)
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_POW(data)                                (0x00018000&((data)<<15))
#define AIO_I_ACANA_ADC_GCTL2_REG_BB_MICBST_POW_src(data)                            ((0x00018000&(data))>>15)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_BB_MICBST_POW(data)                            ((0x00018000&(data))>>15)
#define AIO_I_ACANA_ADC_GCTL2_bb_micbias_clk_sel_shift                               (13)
#define AIO_I_ACANA_ADC_GCTL2_bb_micbias_clk_sel_mask                                (0x00006000)
#define AIO_I_ACANA_ADC_GCTL2_bb_micbias_clk_sel(data)                               (0x00006000&((data)<<13))
#define AIO_I_ACANA_ADC_GCTL2_bb_micbias_clk_sel_src(data)                           ((0x00006000&(data))>>13)
#define AIO_I_ACANA_ADC_GCTL2_get_bb_micbias_clk_sel(data)                           ((0x00006000&(data))>>13)
#define AIO_I_ACANA_ADC_GCTL2_rst_adac_shift                                         (12)
#define AIO_I_ACANA_ADC_GCTL2_rst_adac_mask                                          (0x00001000)
#define AIO_I_ACANA_ADC_GCTL2_rst_adac(data)                                         (0x00001000&((data)<<12))
#define AIO_I_ACANA_ADC_GCTL2_rst_adac_src(data)                                     ((0x00001000&(data))>>12)
#define AIO_I_ACANA_ADC_GCTL2_get_rst_adac(data)                                     ((0x00001000&(data))>>12)
#define AIO_I_ACANA_ADC_GCTL2_REG_ADAC_RSVD_shift                                    (8)
#define AIO_I_ACANA_ADC_GCTL2_REG_ADAC_RSVD_mask                                     (0x00000F00)
#define AIO_I_ACANA_ADC_GCTL2_REG_ADAC_RSVD(data)                                    (0x00000F00&((data)<<8))
#define AIO_I_ACANA_ADC_GCTL2_REG_ADAC_RSVD_src(data)                                ((0x00000F00&(data))>>8)
#define AIO_I_ACANA_ADC_GCTL2_get_REG_ADAC_RSVD(data)                                ((0x00000F00&(data))>>8)


#define AIO_I_ACANA_ADC_GCTL3                                                        0x98006614
#define AIO_I_ACANA_ADC_GCTL3_reg_addr                                               "0xD8006614"
#define AIO_I_ACANA_ADC_GCTL3_reg                                                    0xD8006614
#define set_AIO_I_ACANA_ADC_GCTL3_reg(data)   (*((volatile unsigned int*) AIO_I_ACANA_ADC_GCTL3_reg)=data)
#define get_AIO_I_ACANA_ADC_GCTL3_reg   (*((volatile unsigned int*) AIO_I_ACANA_ADC_GCTL3_reg))
#define AIO_I_ACANA_ADC_GCTL3_inst_adr                                               "0x0085"
#define AIO_I_ACANA_ADC_GCTL3_inst                                                   0x0085
#define AIO_I_ACANA_ADC_GCTL3_REG_BB_MICBIAS_OC_shift                                (31)
#define AIO_I_ACANA_ADC_GCTL3_REG_BB_MICBIAS_OC_mask                                 (0x80000000)
#define AIO_I_ACANA_ADC_GCTL3_REG_BB_MICBIAS_OC(data)                                (0x80000000&((data)<<31))
#define AIO_I_ACANA_ADC_GCTL3_REG_BB_MICBIAS_OC_src(data)                            ((0x80000000&(data))>>31)
#define AIO_I_ACANA_ADC_GCTL3_get_REG_BB_MICBIAS_OC(data)                            ((0x80000000&(data))>>31)


#define AIO_I_ADC_ALC1                                                               0x98006630
#define AIO_I_ADC_ALC1_reg_addr                                                      "0xD8006630"
#define AIO_I_ADC_ALC1_reg                                                           0xD8006630
#define set_AIO_I_ADC_ALC1_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_ALC1_reg)=data)
#define get_AIO_I_ADC_ALC1_reg   (*((volatile unsigned int*) AIO_I_ADC_ALC1_reg))
#define AIO_I_ADC_ALC1_inst_adr                                                      "0x008C"
#define AIO_I_ADC_ALC1_inst                                                          0x008C
#define AIO_I_ADC_ALC1_alc_atk_mode_rc_ctr_shift                                     (31)
#define AIO_I_ADC_ALC1_alc_atk_mode_rc_ctr_mask                                      (0x80000000)
#define AIO_I_ADC_ALC1_alc_atk_mode_rc_ctr(data)                                     (0x80000000&((data)<<31))
#define AIO_I_ADC_ALC1_alc_atk_mode_rc_ctr_src(data)                                 ((0x80000000&(data))>>31)
#define AIO_I_ADC_ALC1_get_alc_atk_mode_rc_ctr(data)                                 ((0x80000000&(data))>>31)
#define AIO_I_ADC_ALC1_alc_atk_noise_rate_shift                                      (26)
#define AIO_I_ADC_ALC1_alc_atk_noise_rate_mask                                       (0x7C000000)
#define AIO_I_ADC_ALC1_alc_atk_noise_rate(data)                                      (0x7C000000&((data)<<26))
#define AIO_I_ADC_ALC1_alc_atk_noise_rate_src(data)                                  ((0x7C000000&(data))>>26)
#define AIO_I_ADC_ALC1_get_alc_atk_noise_rate(data)                                  ((0x7C000000&(data))>>26)
#define AIO_I_ADC_ALC1_alc_atk_rate_shift                                            (21)
#define AIO_I_ADC_ALC1_alc_atk_rate_mask                                             (0x03E00000)
#define AIO_I_ADC_ALC1_alc_atk_rate(data)                                            (0x03E00000&((data)<<21))
#define AIO_I_ADC_ALC1_alc_atk_rate_src(data)                                        ((0x03E00000&(data))>>21)
#define AIO_I_ADC_ALC1_get_alc_atk_rate(data)                                        ((0x03E00000&(data))>>21)
#define AIO_I_ADC_ALC1_alc_atk_speed_up_rate_shift                                   (16)
#define AIO_I_ADC_ALC1_alc_atk_speed_up_rate_mask                                    (0x001F0000)
#define AIO_I_ADC_ALC1_alc_atk_speed_up_rate(data)                                   (0x001F0000&((data)<<16))
#define AIO_I_ADC_ALC1_alc_atk_speed_up_rate_src(data)                               ((0x001F0000&(data))>>16)
#define AIO_I_ADC_ALC1_get_alc_atk_speed_up_rate(data)                               ((0x001F0000&(data))>>16)
#define AIO_I_ADC_ALC1_alc_speed_up_en_shift                                         (15)
#define AIO_I_ADC_ALC1_alc_speed_up_en_mask                                          (0x00008000)
#define AIO_I_ADC_ALC1_alc_speed_up_en(data)                                         (0x00008000&((data)<<15))
#define AIO_I_ADC_ALC1_alc_speed_up_en_src(data)                                     ((0x00008000&(data))>>15)
#define AIO_I_ADC_ALC1_get_alc_speed_up_en(data)                                     ((0x00008000&(data))>>15)
#define AIO_I_ADC_ALC1_alc_zd_full_ov_en_shift                                       (14)
#define AIO_I_ADC_ALC1_alc_zd_full_ov_en_mask                                        (0x00004000)
#define AIO_I_ADC_ALC1_alc_zd_full_ov_en(data)                                       (0x00004000&((data)<<14))
#define AIO_I_ADC_ALC1_alc_zd_full_ov_en_src(data)                                   ((0x00004000&(data))>>14)
#define AIO_I_ADC_ALC1_get_alc_zd_full_ov_en(data)                                   ((0x00004000&(data))>>14)
#define AIO_I_ADC_ALC1_alc_bk_gain_l_shift                                           (8)
#define AIO_I_ADC_ALC1_alc_bk_gain_l_mask                                            (0x00003F00)
#define AIO_I_ADC_ALC1_alc_bk_gain_l(data)                                           (0x00003F00&((data)<<8))
#define AIO_I_ADC_ALC1_alc_bk_gain_l_src(data)                                       ((0x00003F00&(data))>>8)
#define AIO_I_ADC_ALC1_get_alc_bk_gain_l(data)                                       ((0x00003F00&(data))>>8)
#define AIO_I_ADC_ALC1_alc_bk_gain_r_shift                                           (2)
#define AIO_I_ADC_ALC1_alc_bk_gain_r_mask                                            (0x000000FC)
#define AIO_I_ADC_ALC1_alc_bk_gain_r(data)                                           (0x000000FC&((data)<<2))
#define AIO_I_ADC_ALC1_alc_bk_gain_r_src(data)                                       ((0x000000FC&(data))>>2)
#define AIO_I_ADC_ALC1_get_alc_bk_gain_r(data)                                       ((0x000000FC&(data))>>2)
#define AIO_I_ADC_ALC1_alc_ctr_en_shift                                              (1)
#define AIO_I_ADC_ALC1_alc_ctr_en_mask                                               (0x00000002)
#define AIO_I_ADC_ALC1_alc_ctr_en(data)                                              (0x00000002&((data)<<1))
#define AIO_I_ADC_ALC1_alc_ctr_en_src(data)                                          ((0x00000002&(data))>>1)
#define AIO_I_ADC_ALC1_get_alc_ctr_en(data)                                          ((0x00000002&(data))>>1)
#define AIO_I_ADC_ALC1_alc_drc_en_shift                                              (0)
#define AIO_I_ADC_ALC1_alc_drc_en_mask                                               (0x00000001)
#define AIO_I_ADC_ALC1_alc_drc_en(data)                                              (0x00000001&((data)<<0))
#define AIO_I_ADC_ALC1_alc_drc_en_src(data)                                          ((0x00000001&(data))>>0)
#define AIO_I_ADC_ALC1_get_alc_drc_en(data)                                          ((0x00000001&(data))>>0)


#define AIO_I_ADC_ALC2                                                               0x98006634
#define AIO_I_ADC_ALC2_reg_addr                                                      "0xD8006634"
#define AIO_I_ADC_ALC2_reg                                                           0xD8006634
#define set_AIO_I_ADC_ALC2_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_ALC2_reg)=data)
#define get_AIO_I_ADC_ALC2_reg   (*((volatile unsigned int*) AIO_I_ADC_ALC2_reg))
#define AIO_I_ADC_ALC2_inst_adr                                                      "0x008D"
#define AIO_I_ADC_ALC2_inst                                                          0x008D
#define AIO_I_ADC_ALC2_alc_drc_ratio_sel_shift                                       (30)
#define AIO_I_ADC_ALC2_alc_drc_ratio_sel_mask                                        (0xC0000000)
#define AIO_I_ADC_ALC2_alc_drc_ratio_sel(data)                                       (0xC0000000&((data)<<30))
#define AIO_I_ADC_ALC2_alc_drc_ratio_sel_src(data)                                   ((0xC0000000&(data))>>30)
#define AIO_I_ADC_ALC2_get_alc_drc_ratio_sel(data)                                   ((0xC0000000&(data))>>30)
#define AIO_I_ADC_ALC2_alc_drc_ratio_sel2_shift                                      (28)
#define AIO_I_ADC_ALC2_alc_drc_ratio_sel2_mask                                       (0x30000000)
#define AIO_I_ADC_ALC2_alc_drc_ratio_sel2(data)                                      (0x30000000&((data)<<28))
#define AIO_I_ADC_ALC2_alc_drc_ratio_sel2_src(data)                                  ((0x30000000&(data))>>28)
#define AIO_I_ADC_ALC2_get_alc_drc_ratio_sel2(data)                                  ((0x30000000&(data))>>28)
#define AIO_I_ADC_ALC2_alc_en_shift                                                  (27)
#define AIO_I_ADC_ALC2_alc_en_mask                                                   (0x08000000)
#define AIO_I_ADC_ALC2_alc_en(data)                                                  (0x08000000&((data)<<27))
#define AIO_I_ADC_ALC2_alc_en_src(data)                                              ((0x08000000&(data))>>27)
#define AIO_I_ADC_ALC2_get_alc_en(data)                                              ((0x08000000&(data))>>27)
#define AIO_I_ADC_ALC2_alc_force_fast_rc_ctr_shift                                   (26)
#define AIO_I_ADC_ALC2_alc_force_fast_rc_ctr_mask                                    (0x04000000)
#define AIO_I_ADC_ALC2_alc_force_fast_rc_ctr(data)                                   (0x04000000&((data)<<26))
#define AIO_I_ADC_ALC2_alc_force_fast_rc_ctr_src(data)                               ((0x04000000&(data))>>26)
#define AIO_I_ADC_ALC2_get_alc_force_fast_rc_ctr(data)                               ((0x04000000&(data))>>26)
#define AIO_I_ADC_ALC2_alc_force_fast_rc_en_shift                                    (25)
#define AIO_I_ADC_ALC2_alc_force_fast_rc_en_mask                                     (0x02000000)
#define AIO_I_ADC_ALC2_alc_force_fast_rc_en(data)                                    (0x02000000&((data)<<25))
#define AIO_I_ADC_ALC2_alc_force_fast_rc_en_src(data)                                ((0x02000000&(data))>>25)
#define AIO_I_ADC_ALC2_get_alc_force_fast_rc_en(data)                                ((0x02000000&(data))>>25)
#define AIO_I_ADC_ALC2_alc_ft_boost_shift                                            (19)
#define AIO_I_ADC_ALC2_alc_ft_boost_mask                                             (0x01F80000)
#define AIO_I_ADC_ALC2_alc_ft_boost(data)                                            (0x01F80000&((data)<<19))
#define AIO_I_ADC_ALC2_alc_ft_boost_src(data)                                        ((0x01F80000&(data))>>19)
#define AIO_I_ADC_ALC2_get_alc_ft_boost(data)                                        ((0x01F80000&(data))>>19)
#define AIO_I_ADC_ALC2_alc_lpf_coef_sel_shift                                        (16)
#define AIO_I_ADC_ALC2_alc_lpf_coef_sel_mask                                         (0x00070000)
#define AIO_I_ADC_ALC2_alc_lpf_coef_sel(data)                                        (0x00070000&((data)<<16))
#define AIO_I_ADC_ALC2_alc_lpf_coef_sel_src(data)                                    ((0x00070000&(data))>>16)
#define AIO_I_ADC_ALC2_get_alc_lpf_coef_sel(data)                                    ((0x00070000&(data))>>16)
#define AIO_I_ADC_ALC2_alc_min_range_shift                                           (13)
#define AIO_I_ADC_ALC2_alc_min_range_mask                                            (0x0000E000)
#define AIO_I_ADC_ALC2_alc_min_range(data)                                           (0x0000E000&((data)<<13))
#define AIO_I_ADC_ALC2_alc_min_range_src(data)                                       ((0x0000E000&(data))>>13)
#define AIO_I_ADC_ALC2_get_alc_min_range(data)                                       ((0x0000E000&(data))>>13)
#define AIO_I_ADC_ALC2_alc_noise_gain_hd_shift                                       (12)
#define AIO_I_ADC_ALC2_alc_noise_gain_hd_mask                                        (0x00001000)
#define AIO_I_ADC_ALC2_alc_noise_gain_hd(data)                                       (0x00001000&((data)<<12))
#define AIO_I_ADC_ALC2_alc_noise_gain_hd_src(data)                                   ((0x00001000&(data))>>12)
#define AIO_I_ADC_ALC2_get_alc_noise_gain_hd(data)                                   ((0x00001000&(data))>>12)
#define AIO_I_ADC_ALC2_alc_noise_gate_exp_shift                                      (8)
#define AIO_I_ADC_ALC2_alc_noise_gate_exp_mask                                       (0x00000F00)
#define AIO_I_ADC_ALC2_alc_noise_gate_exp(data)                                      (0x00000F00&((data)<<8))
#define AIO_I_ADC_ALC2_alc_noise_gate_exp_src(data)                                  ((0x00000F00&(data))>>8)
#define AIO_I_ADC_ALC2_get_alc_noise_gate_exp(data)                                  ((0x00000F00&(data))>>8)
#define AIO_I_ADC_ALC2_alc_noise_gate_en_shift                                       (7)
#define AIO_I_ADC_ALC2_alc_noise_gate_en_mask                                        (0x00000080)
#define AIO_I_ADC_ALC2_alc_noise_gate_en(data)                                       (0x00000080&((data)<<7))
#define AIO_I_ADC_ALC2_alc_noise_gate_en_src(data)                                   ((0x00000080&(data))>>7)
#define AIO_I_ADC_ALC2_get_alc_noise_gate_en(data)                                   ((0x00000080&(data))>>7)
#define AIO_I_ADC_ALC2_alc_noise_gate_drop_en_shift                                  (6)
#define AIO_I_ADC_ALC2_alc_noise_gate_drop_en_mask                                   (0x00000040)
#define AIO_I_ADC_ALC2_alc_noise_gate_drop_en(data)                                  (0x00000040&((data)<<6))
#define AIO_I_ADC_ALC2_alc_noise_gate_drop_en_src(data)                              ((0x00000040&(data))>>6)
#define AIO_I_ADC_ALC2_get_alc_noise_gate_drop_en(data)                              ((0x00000040&(data))>>6)
#define AIO_I_ADC_ALC2_alc_noise_gate_ratio_sel_shift                                (4)
#define AIO_I_ADC_ALC2_alc_noise_gate_ratio_sel_mask                                 (0x00000030)
#define AIO_I_ADC_ALC2_alc_noise_gate_ratio_sel(data)                                (0x00000030&((data)<<4))
#define AIO_I_ADC_ALC2_alc_noise_gate_ratio_sel_src(data)                            ((0x00000030&(data))>>4)
#define AIO_I_ADC_ALC2_get_alc_noise_gate_ratio_sel(data)                            ((0x00000030&(data))>>4)
#define AIO_I_ADC_ALC2_alc_noise_gate_ht_shift                                       (1)
#define AIO_I_ADC_ALC2_alc_noise_gate_ht_mask                                        (0x0000000E)
#define AIO_I_ADC_ALC2_alc_noise_gate_ht(data)                                       (0x0000000E&((data)<<1))
#define AIO_I_ADC_ALC2_alc_noise_gate_ht_src(data)                                   ((0x0000000E&(data))>>1)
#define AIO_I_ADC_ALC2_get_alc_noise_gate_ht(data)                                   ((0x0000000E&(data))>>1)


#define AIO_I_ADC_ALC3                                                               0x98006638
#define AIO_I_ADC_ALC3_reg_addr                                                      "0xD8006638"
#define AIO_I_ADC_ALC3_reg                                                           0xD8006638
#define set_AIO_I_ADC_ALC3_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_ALC3_reg)=data)
#define get_AIO_I_ADC_ALC3_reg   (*((volatile unsigned int*) AIO_I_ADC_ALC3_reg))
#define AIO_I_ADC_ALC3_inst_adr                                                      "0x008E"
#define AIO_I_ADC_ALC3_inst                                                          0x008E
#define AIO_I_ADC_ALC3_alc_noise_range_shift                                         (30)
#define AIO_I_ADC_ALC3_alc_noise_range_mask                                          (0xC0000000)
#define AIO_I_ADC_ALC3_alc_noise_range(data)                                         (0xC0000000&((data)<<30))
#define AIO_I_ADC_ALC3_alc_noise_range_src(data)                                     ((0xC0000000&(data))>>30)
#define AIO_I_ADC_ALC3_get_alc_noise_range(data)                                     ((0xC0000000&(data))>>30)
#define AIO_I_ADC_ALC3_alc_off_gain_shift                                            (22)
#define AIO_I_ADC_ALC3_alc_off_gain_mask                                             (0x3FC00000)
#define AIO_I_ADC_ALC3_alc_off_gain(data)                                            (0x3FC00000&((data)<<22))
#define AIO_I_ADC_ALC3_alc_off_gain_src(data)                                        ((0x3FC00000&(data))>>22)
#define AIO_I_ADC_ALC3_get_alc_off_gain(data)                                        ((0x3FC00000&(data))>>22)
#define AIO_I_ADC_ALC3_alc_rate_sel_shift                                            (19)
#define AIO_I_ADC_ALC3_alc_rate_sel_mask                                             (0x00380000)
#define AIO_I_ADC_ALC3_alc_rate_sel(data)                                            (0x00380000&((data)<<19))
#define AIO_I_ADC_ALC3_alc_rate_sel_src(data)                                        ((0x00380000&(data))>>19)
#define AIO_I_ADC_ALC3_get_alc_rate_sel(data)                                        ((0x00380000&(data))>>19)
#define AIO_I_ADC_ALC3_alc_rc_fast_en_shift                                          (18)
#define AIO_I_ADC_ALC3_alc_rc_fast_en_mask                                           (0x00040000)
#define AIO_I_ADC_ALC3_alc_rc_fast_en(data)                                          (0x00040000&((data)<<18))
#define AIO_I_ADC_ALC3_alc_rc_fast_en_src(data)                                      ((0x00040000&(data))>>18)
#define AIO_I_ADC_ALC3_get_alc_rc_fast_en(data)                                      ((0x00040000&(data))>>18)
#define AIO_I_ADC_ALC3_alc_rc_fast_rate_shift                                        (13)
#define AIO_I_ADC_ALC3_alc_rc_fast_rate_mask                                         (0x0003E000)
#define AIO_I_ADC_ALC3_alc_rc_fast_rate(data)                                        (0x0003E000&((data)<<13))
#define AIO_I_ADC_ALC3_alc_rc_fast_rate_src(data)                                    ((0x0003E000&(data))>>13)
#define AIO_I_ADC_ALC3_get_alc_rc_fast_rate(data)                                    ((0x0003E000&(data))>>13)
#define AIO_I_ADC_ALC3_alc_rc_slow_rate_shift                                        (8)
#define AIO_I_ADC_ALC3_alc_rc_slow_rate_mask                                         (0x00001F00)
#define AIO_I_ADC_ALC3_alc_rc_slow_rate(data)                                        (0x00001F00&((data)<<8))
#define AIO_I_ADC_ALC3_alc_rc_slow_rate_src(data)                                    ((0x00001F00&(data))>>8)
#define AIO_I_ADC_ALC3_get_alc_rc_slow_rate(data)                                    ((0x00001F00&(data))>>8)


#define AIO_I_ADC_ALC4                                                               0x9800663c
#define AIO_I_ADC_ALC4_reg_addr                                                      "0xD800663C"
#define AIO_I_ADC_ALC4_reg                                                           0xD800663C
#define set_AIO_I_ADC_ALC4_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_ALC4_reg)=data)
#define get_AIO_I_ADC_ALC4_reg   (*((volatile unsigned int*) AIO_I_ADC_ALC4_reg))
#define AIO_I_ADC_ALC4_inst_adr                                                      "0x008F"
#define AIO_I_ADC_ALC4_inst                                                          0x008F
#define AIO_I_ADC_ALC4_alc_rc_wd_max_shift                                           (24)
#define AIO_I_ADC_ALC4_alc_rc_wd_max_mask                                            (0xFF000000)
#define AIO_I_ADC_ALC4_alc_rc_wd_max(data)                                           (0xFF000000&((data)<<24))
#define AIO_I_ADC_ALC4_alc_rc_wd_max_src(data)                                       ((0xFF000000&(data))>>24)
#define AIO_I_ADC_ALC4_get_alc_rc_wd_max(data)                                       ((0xFF000000&(data))>>24)
#define AIO_I_ADC_ALC4_alc_rc_wd_min_shift                                           (16)
#define AIO_I_ADC_ALC4_alc_rc_wd_min_mask                                            (0x00FF0000)
#define AIO_I_ADC_ALC4_alc_rc_wd_min(data)                                           (0x00FF0000&((data)<<16))
#define AIO_I_ADC_ALC4_alc_rc_wd_min_src(data)                                       ((0x00FF0000&(data))>>16)
#define AIO_I_ADC_ALC4_get_alc_rc_wd_min(data)                                       ((0x00FF0000&(data))>>16)
#define AIO_I_ADC_ALC4_alc_thfull_shift                                              (14)
#define AIO_I_ADC_ALC4_alc_thfull_mask                                               (0x0000C000)
#define AIO_I_ADC_ALC4_alc_thfull(data)                                              (0x0000C000&((data)<<14))
#define AIO_I_ADC_ALC4_alc_thfull_src(data)                                          ((0x0000C000&(data))>>14)
#define AIO_I_ADC_ALC4_get_alc_thfull(data)                                          ((0x0000C000&(data))>>14)
#define AIO_I_ADC_ALC4_alc_thmax_shift                                               (8)
#define AIO_I_ADC_ALC4_alc_thmax_mask                                                (0x00003F00)
#define AIO_I_ADC_ALC4_alc_thmax(data)                                               (0x00003F00&((data)<<8))
#define AIO_I_ADC_ALC4_alc_thmax_src(data)                                           ((0x00003F00&(data))>>8)
#define AIO_I_ADC_ALC4_get_alc_thmax(data)                                           ((0x00003F00&(data))>>8)
#define AIO_I_ADC_ALC4_alc_thmax2_shift                                              (2)
#define AIO_I_ADC_ALC4_alc_thmax2_mask                                               (0x000000FC)
#define AIO_I_ADC_ALC4_alc_thmax2(data)                                              (0x000000FC&((data)<<2))
#define AIO_I_ADC_ALC4_alc_thmax2_src(data)                                          ((0x000000FC&(data))>>2)
#define AIO_I_ADC_ALC4_get_alc_thmax2(data)                                          ((0x000000FC&(data))>>2)


#define AIO_I_ADC_ALC5                                                               0x98006640
#define AIO_I_ADC_ALC5_reg_addr                                                      "0xD8006640"
#define AIO_I_ADC_ALC5_reg                                                           0xD8006640
#define set_AIO_I_ADC_ALC5_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_ALC5_reg)=data)
#define get_AIO_I_ADC_ALC5_reg   (*((volatile unsigned int*) AIO_I_ADC_ALC5_reg))
#define AIO_I_ADC_ALC5_inst_adr                                                      "0x0090"
#define AIO_I_ADC_ALC5_inst                                                          0x0090
#define AIO_I_ADC_ALC5_alc_thnoise_shift                                             (27)
#define AIO_I_ADC_ALC5_alc_thnoise_mask                                              (0xF8000000)
#define AIO_I_ADC_ALC5_alc_thnoise(data)                                             (0xF8000000&((data)<<27))
#define AIO_I_ADC_ALC5_alc_thnoise_src(data)                                         ((0xF8000000&(data))>>27)
#define AIO_I_ADC_ALC5_get_alc_thnoise(data)                                         ((0xF8000000&(data))>>27)
#define AIO_I_ADC_ALC5_alc_thmin_shift                                               (21)
#define AIO_I_ADC_ALC5_alc_thmin_mask                                                (0x07E00000)
#define AIO_I_ADC_ALC5_alc_thmin(data)                                               (0x07E00000&((data)<<21))
#define AIO_I_ADC_ALC5_alc_thmin_src(data)                                           ((0x07E00000&(data))>>21)
#define AIO_I_ADC_ALC5_get_alc_thmin(data)                                           ((0x07E00000&(data))>>21)
#define AIO_I_ADC_ALC5_alc_thzero_shift                                              (18)
#define AIO_I_ADC_ALC5_alc_thzero_mask                                               (0x001C0000)
#define AIO_I_ADC_ALC5_alc_thzero(data)                                              (0x001C0000&((data)<<18))
#define AIO_I_ADC_ALC5_alc_thzero_src(data)                                          ((0x001C0000&(data))>>18)
#define AIO_I_ADC_ALC5_get_alc_thzero(data)                                          ((0x001C0000&(data))>>18)
#define AIO_I_ADC_ALC5_alc_thmin_en_shift                                            (17)
#define AIO_I_ADC_ALC5_alc_thmin_en_mask                                             (0x00020000)
#define AIO_I_ADC_ALC5_alc_thmin_en(data)                                            (0x00020000&((data)<<17))
#define AIO_I_ADC_ALC5_alc_thmin_en_src(data)                                        ((0x00020000&(data))>>17)
#define AIO_I_ADC_ALC5_get_alc_thmin_en(data)                                        ((0x00020000&(data))>>17)
#define AIO_I_ADC_ALC5_alc_zdet_func_shift                                           (15)
#define AIO_I_ADC_ALC5_alc_zdet_func_mask                                            (0x00018000)
#define AIO_I_ADC_ALC5_alc_zdet_func(data)                                           (0x00018000&((data)<<15))
#define AIO_I_ADC_ALC5_alc_zdet_func_src(data)                                       ((0x00018000&(data))>>15)
#define AIO_I_ADC_ALC5_get_alc_zdet_func(data)                                       ((0x00018000&(data))>>15)
#define AIO_I_ADC_ALC5_alc_zdet_tout_shift                                           (13)
#define AIO_I_ADC_ALC5_alc_zdet_tout_mask                                            (0x00006000)
#define AIO_I_ADC_ALC5_alc_zdet_tout(data)                                           (0x00006000&((data)<<13))
#define AIO_I_ADC_ALC5_alc_zdet_tout_src(data)                                       ((0x00006000&(data))>>13)
#define AIO_I_ADC_ALC5_get_alc_zdet_tout(data)                                       ((0x00006000&(data))>>13)
#define AIO_I_ADC_ALC5_alc_zero_data_en_shift                                        (12)
#define AIO_I_ADC_ALC5_alc_zero_data_en_mask                                         (0x00001000)
#define AIO_I_ADC_ALC5_alc_zero_data_en(data)                                        (0x00001000&((data)<<12))
#define AIO_I_ADC_ALC5_alc_zero_data_en_src(data)                                    ((0x00001000&(data))>>12)
#define AIO_I_ADC_ALC5_get_alc_zero_data_en(data)                                    ((0x00001000&(data))>>12)
#define AIO_I_ADC_ALC5_alc_thmin_fast_rc_en_shift                                    (11)
#define AIO_I_ADC_ALC5_alc_thmin_fast_rc_en_mask                                     (0x00000800)
#define AIO_I_ADC_ALC5_alc_thmin_fast_rc_en(data)                                    (0x00000800&((data)<<11))
#define AIO_I_ADC_ALC5_alc_thmin_fast_rc_en_src(data)                                ((0x00000800&(data))>>11)
#define AIO_I_ADC_ALC5_get_alc_thmin_fast_rc_en(data)                                ((0x00000800&(data))>>11)


#define AIO_I_ADC_ALC6                                                               0x98006644
#define AIO_I_ADC_ALC6_reg_addr                                                      "0xD8006644"
#define AIO_I_ADC_ALC6_reg                                                           0xD8006644
#define set_AIO_I_ADC_ALC6_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_ALC6_reg)=data)
#define get_AIO_I_ADC_ALC6_reg   (*((volatile unsigned int*) AIO_I_ADC_ALC6_reg))
#define AIO_I_ADC_ALC6_inst_adr                                                      "0x0091"
#define AIO_I_ADC_ALC6_inst                                                          0x0091
#define AIO_I_ADC_ALC6_alc_limiter_th_shift                                          (8)
#define AIO_I_ADC_ALC6_alc_limiter_th_mask                                           (0xFFFFFF00)
#define AIO_I_ADC_ALC6_alc_limiter_th(data)                                          (0xFFFFFF00&((data)<<8))
#define AIO_I_ADC_ALC6_alc_limiter_th_src(data)                                      ((0xFFFFFF00&(data))>>8)
#define AIO_I_ADC_ALC6_get_alc_limiter_th(data)                                      ((0xFFFFFF00&(data))>>8)
#define AIO_I_ADC_ALC6_alc_limiter_ratio_shift                                       (5)
#define AIO_I_ADC_ALC6_alc_limiter_ratio_mask                                        (0x000000E0)
#define AIO_I_ADC_ALC6_alc_limiter_ratio(data)                                       (0x000000E0&((data)<<5))
#define AIO_I_ADC_ALC6_alc_limiter_ratio_src(data)                                   ((0x000000E0&(data))>>5)
#define AIO_I_ADC_ALC6_get_alc_limiter_ratio(data)                                   ((0x000000E0&(data))>>5)
#define AIO_I_ADC_ALC6_alc_zero_data_sel_shift                                       (4)
#define AIO_I_ADC_ALC6_alc_zero_data_sel_mask                                        (0x00000010)
#define AIO_I_ADC_ALC6_alc_zero_data_sel(data)                                       (0x00000010&((data)<<4))
#define AIO_I_ADC_ALC6_alc_zero_data_sel_src(data)                                   ((0x00000010&(data))>>4)
#define AIO_I_ADC_ALC6_get_alc_zero_data_sel(data)                                   ((0x00000010&(data))>>4)
#define AIO_I_ADC_ALC6_alc_zero_data_cnt_th_shift                                    (2)
#define AIO_I_ADC_ALC6_alc_zero_data_cnt_th_mask                                     (0x0000000C)
#define AIO_I_ADC_ALC6_alc_zero_data_cnt_th(data)                                    (0x0000000C&((data)<<2))
#define AIO_I_ADC_ALC6_alc_zero_data_cnt_th_src(data)                                ((0x0000000C&(data))>>2)
#define AIO_I_ADC_ALC6_get_alc_zero_data_cnt_th(data)                                ((0x0000000C&(data))>>2)


#define AIO_I_ADC_ALC7                                                               0x98006648
#define AIO_I_ADC_ALC7_reg_addr                                                      "0xD8006648"
#define AIO_I_ADC_ALC7_reg                                                           0xD8006648
#define set_AIO_I_ADC_ALC7_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_ALC7_reg)=data)
#define get_AIO_I_ADC_ALC7_reg   (*((volatile unsigned int*) AIO_I_ADC_ALC7_reg))
#define AIO_I_ADC_ALC7_inst_adr                                                      "0x0092"
#define AIO_I_ADC_ALC7_inst                                                          0x0092
#define AIO_I_ADC_ALC7_alc_zero_data_lsb_sel_shift                                   (29)
#define AIO_I_ADC_ALC7_alc_zero_data_lsb_sel_mask                                    (0xE0000000)
#define AIO_I_ADC_ALC7_alc_zero_data_lsb_sel(data)                                   (0xE0000000&((data)<<29))
#define AIO_I_ADC_ALC7_alc_zero_data_lsb_sel_src(data)                               ((0xE0000000&(data))>>29)
#define AIO_I_ADC_ALC7_get_alc_zero_data_lsb_sel(data)                               ((0xE0000000&(data))>>29)
#define AIO_I_ADC_ALC7_alc_bypass_cd_en_shift                                        (28)
#define AIO_I_ADC_ALC7_alc_bypass_cd_en_mask                                         (0x10000000)
#define AIO_I_ADC_ALC7_alc_bypass_cd_en(data)                                        (0x10000000&((data)<<28))
#define AIO_I_ADC_ALC7_alc_bypass_cd_en_src(data)                                    ((0x10000000&(data))>>28)
#define AIO_I_ADC_ALC7_get_alc_bypass_cd_en(data)                                    ((0x10000000&(data))>>28)
#define AIO_I_ADC_ALC7_alc_atk_wd_max_ovl_shift                                      (27)
#define AIO_I_ADC_ALC7_alc_atk_wd_max_ovl_mask                                       (0x08000000)
#define AIO_I_ADC_ALC7_alc_atk_wd_max_ovl(data)                                      (0x08000000&((data)<<27))
#define AIO_I_ADC_ALC7_alc_atk_wd_max_ovl_src(data)                                  ((0x08000000&(data))>>27)
#define AIO_I_ADC_ALC7_get_alc_atk_wd_max_ovl(data)                                  ((0x08000000&(data))>>27)
#define AIO_I_ADC_ALC7_alc_atk_wd_max_ovr_shift                                      (26)
#define AIO_I_ADC_ALC7_alc_atk_wd_max_ovr_mask                                       (0x04000000)
#define AIO_I_ADC_ALC7_alc_atk_wd_max_ovr(data)                                      (0x04000000&((data)<<26))
#define AIO_I_ADC_ALC7_alc_atk_wd_max_ovr_src(data)                                  ((0x04000000&(data))>>26)
#define AIO_I_ADC_ALC7_get_alc_atk_wd_max_ovr(data)                                  ((0x04000000&(data))>>26)
#define AIO_I_ADC_ALC7_alc_atk_wd_min_ovl_shift                                      (25)
#define AIO_I_ADC_ALC7_alc_atk_wd_min_ovl_mask                                       (0x02000000)
#define AIO_I_ADC_ALC7_alc_atk_wd_min_ovl(data)                                      (0x02000000&((data)<<25))
#define AIO_I_ADC_ALC7_alc_atk_wd_min_ovl_src(data)                                  ((0x02000000&(data))>>25)
#define AIO_I_ADC_ALC7_get_alc_atk_wd_min_ovl(data)                                  ((0x02000000&(data))>>25)
#define AIO_I_ADC_ALC7_alc_atk_wd_min_ovr_shift                                      (24)
#define AIO_I_ADC_ALC7_alc_atk_wd_min_ovr_mask                                       (0x01000000)
#define AIO_I_ADC_ALC7_alc_atk_wd_min_ovr(data)                                      (0x01000000&((data)<<24))
#define AIO_I_ADC_ALC7_alc_atk_wd_min_ovr_src(data)                                  ((0x01000000&(data))>>24)
#define AIO_I_ADC_ALC7_get_alc_atk_wd_min_ovr(data)                                  ((0x01000000&(data))>>24)
#define AIO_I_ADC_ALC7_alc_gain_out_shift                                            (16)
#define AIO_I_ADC_ALC7_alc_gain_out_mask                                             (0x00FF0000)
#define AIO_I_ADC_ALC7_alc_gain_out(data)                                            (0x00FF0000&((data)<<16))
#define AIO_I_ADC_ALC7_alc_gain_out_src(data)                                        ((0x00FF0000&(data))>>16)
#define AIO_I_ADC_ALC7_get_alc_gain_out(data)                                        ((0x00FF0000&(data))>>16)
#define AIO_I_ADC_ALC7_alc_noise_gate_mode_l_shift                                   (15)
#define AIO_I_ADC_ALC7_alc_noise_gate_mode_l_mask                                    (0x00008000)
#define AIO_I_ADC_ALC7_alc_noise_gate_mode_l(data)                                   (0x00008000&((data)<<15))
#define AIO_I_ADC_ALC7_alc_noise_gate_mode_l_src(data)                               ((0x00008000&(data))>>15)
#define AIO_I_ADC_ALC7_get_alc_noise_gate_mode_l(data)                               ((0x00008000&(data))>>15)
#define AIO_I_ADC_ALC7_alc_noise_gate_mode_r_shift                                   (14)
#define AIO_I_ADC_ALC7_alc_noise_gate_mode_r_mask                                    (0x00004000)
#define AIO_I_ADC_ALC7_alc_noise_gate_mode_r(data)                                   (0x00004000&((data)<<14))
#define AIO_I_ADC_ALC7_alc_noise_gate_mode_r_src(data)                               ((0x00004000&(data))>>14)
#define AIO_I_ADC_ALC7_get_alc_noise_gate_mode_r(data)                               ((0x00004000&(data))>>14)
#define AIO_I_ADC_ALC7_alc_op_mode_l_shift                                           (13)
#define AIO_I_ADC_ALC7_alc_op_mode_l_mask                                            (0x00002000)
#define AIO_I_ADC_ALC7_alc_op_mode_l(data)                                           (0x00002000&((data)<<13))
#define AIO_I_ADC_ALC7_alc_op_mode_l_src(data)                                       ((0x00002000&(data))>>13)
#define AIO_I_ADC_ALC7_get_alc_op_mode_l(data)                                       ((0x00002000&(data))>>13)
#define AIO_I_ADC_ALC7_alc_op_mode_r_shift                                           (12)
#define AIO_I_ADC_ALC7_alc_op_mode_r_mask                                            (0x00001000)
#define AIO_I_ADC_ALC7_alc_op_mode_r(data)                                           (0x00001000&((data)<<12))
#define AIO_I_ADC_ALC7_alc_op_mode_r_src(data)                                       ((0x00001000&(data))>>12)
#define AIO_I_ADC_ALC7_get_alc_op_mode_r(data)                                       ((0x00001000&(data))>>12)
#define AIO_I_ADC_ALC7_alc_rc_mode_l_shift                                           (11)
#define AIO_I_ADC_ALC7_alc_rc_mode_l_mask                                            (0x00000800)
#define AIO_I_ADC_ALC7_alc_rc_mode_l(data)                                           (0x00000800&((data)<<11))
#define AIO_I_ADC_ALC7_alc_rc_mode_l_src(data)                                       ((0x00000800&(data))>>11)
#define AIO_I_ADC_ALC7_get_alc_rc_mode_l(data)                                       ((0x00000800&(data))>>11)
#define AIO_I_ADC_ALC7_alc_rc_mode_r_shift                                           (10)
#define AIO_I_ADC_ALC7_alc_rc_mode_r_mask                                            (0x00000400)
#define AIO_I_ADC_ALC7_alc_rc_mode_r(data)                                           (0x00000400&((data)<<10))
#define AIO_I_ADC_ALC7_alc_rc_mode_r_src(data)                                       ((0x00000400&(data))>>10)
#define AIO_I_ADC_ALC7_get_alc_rc_mode_r(data)                                       ((0x00000400&(data))>>10)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_l_shift                                    (9)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_l_mask                                     (0x00000200)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_l(data)                                    (0x00000200&((data)<<9))
#define AIO_I_ADC_ALC7_alc_zero_data_mode_l_src(data)                                ((0x00000200&(data))>>9)
#define AIO_I_ADC_ALC7_get_alc_zero_data_mode_l(data)                                ((0x00000200&(data))>>9)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_r_shift                                    (8)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_r_mask                                     (0x00000100)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_r(data)                                    (0x00000100&((data)<<8))
#define AIO_I_ADC_ALC7_alc_zero_data_mode_r_src(data)                                ((0x00000100&(data))>>8)
#define AIO_I_ADC_ALC7_get_alc_zero_data_mode_r(data)                                ((0x00000100&(data))>>8)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_rms_l_shift                                (7)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_rms_l_mask                                 (0x00000080)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_rms_l(data)                                (0x00000080&((data)<<7))
#define AIO_I_ADC_ALC7_alc_zero_data_mode_rms_l_src(data)                            ((0x00000080&(data))>>7)
#define AIO_I_ADC_ALC7_get_alc_zero_data_mode_rms_l(data)                            ((0x00000080&(data))>>7)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_rms_r_shift                                (6)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_rms_r_mask                                 (0x00000040)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_rms_r(data)                                (0x00000040&((data)<<6))
#define AIO_I_ADC_ALC7_alc_zero_data_mode_rms_r_src(data)                            ((0x00000040&(data))>>6)
#define AIO_I_ADC_ALC7_get_alc_zero_data_mode_rms_r(data)                            ((0x00000040&(data))>>6)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_amp_l_shift                                (5)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_amp_l_mask                                 (0x00000020)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_amp_l(data)                                (0x00000020&((data)<<5))
#define AIO_I_ADC_ALC7_alc_zero_data_mode_amp_l_src(data)                            ((0x00000020&(data))>>5)
#define AIO_I_ADC_ALC7_get_alc_zero_data_mode_amp_l(data)                            ((0x00000020&(data))>>5)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_amp_r_shift                                (4)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_amp_r_mask                                 (0x00000010)
#define AIO_I_ADC_ALC7_alc_zero_data_mode_amp_r(data)                                (0x00000010&((data)<<4))
#define AIO_I_ADC_ALC7_alc_zero_data_mode_amp_r_src(data)                            ((0x00000010&(data))>>4)
#define AIO_I_ADC_ALC7_get_alc_zero_data_mode_amp_r(data)                            ((0x00000010&(data))>>4)
#define AIO_I_ADC_ALC7_alc_bk_rms_hov_l_shift                                        (3)
#define AIO_I_ADC_ALC7_alc_bk_rms_hov_l_mask                                         (0x00000008)
#define AIO_I_ADC_ALC7_alc_bk_rms_hov_l(data)                                        (0x00000008&((data)<<3))
#define AIO_I_ADC_ALC7_alc_bk_rms_hov_l_src(data)                                    ((0x00000008&(data))>>3)
#define AIO_I_ADC_ALC7_get_alc_bk_rms_hov_l(data)                                    ((0x00000008&(data))>>3)
#define AIO_I_ADC_ALC7_alc_bk_rms_hov_r_shift                                        (2)
#define AIO_I_ADC_ALC7_alc_bk_rms_hov_r_mask                                         (0x00000004)
#define AIO_I_ADC_ALC7_alc_bk_rms_hov_r(data)                                        (0x00000004&((data)<<2))
#define AIO_I_ADC_ALC7_alc_bk_rms_hov_r_src(data)                                    ((0x00000004&(data))>>2)
#define AIO_I_ADC_ALC7_get_alc_bk_rms_hov_r(data)                                    ((0x00000004&(data))>>2)
#define AIO_I_ADC_ALC7_alc_bk_rms_lov_l_shift                                        (1)
#define AIO_I_ADC_ALC7_alc_bk_rms_lov_l_mask                                         (0x00000002)
#define AIO_I_ADC_ALC7_alc_bk_rms_lov_l(data)                                        (0x00000002&((data)<<1))
#define AIO_I_ADC_ALC7_alc_bk_rms_lov_l_src(data)                                    ((0x00000002&(data))>>1)
#define AIO_I_ADC_ALC7_get_alc_bk_rms_lov_l(data)                                    ((0x00000002&(data))>>1)
#define AIO_I_ADC_ALC7_alc_bk_rms_lov_r_shift                                        (0)
#define AIO_I_ADC_ALC7_alc_bk_rms_lov_r_mask                                         (0x00000001)
#define AIO_I_ADC_ALC7_alc_bk_rms_lov_r(data)                                        (0x00000001&((data)<<0))
#define AIO_I_ADC_ALC7_alc_bk_rms_lov_r_src(data)                                    ((0x00000001&(data))>>0)
#define AIO_I_ADC_ALC7_get_alc_bk_rms_lov_r(data)                                    ((0x00000001&(data))>>0)


#define AIO_I_ADC_ALC8                                                               0x9800664c
#define AIO_I_ADC_ALC8_reg_addr                                                      "0xD800664C"
#define AIO_I_ADC_ALC8_reg                                                           0xD800664C
#define set_AIO_I_ADC_ALC8_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_ALC8_reg)=data)
#define get_AIO_I_ADC_ALC8_reg   (*((volatile unsigned int*) AIO_I_ADC_ALC8_reg))
#define AIO_I_ADC_ALC8_inst_adr                                                      "0x0093"
#define AIO_I_ADC_ALC8_inst                                                          0x0093
#define AIO_I_ADC_ALC8_alc_force_fast_rc_mode_shift                                  (31)
#define AIO_I_ADC_ALC8_alc_force_fast_rc_mode_mask                                   (0x80000000)
#define AIO_I_ADC_ALC8_alc_force_fast_rc_mode(data)                                  (0x80000000&((data)<<31))
#define AIO_I_ADC_ALC8_alc_force_fast_rc_mode_src(data)                              ((0x80000000&(data))>>31)
#define AIO_I_ADC_ALC8_get_alc_force_fast_rc_mode(data)                              ((0x80000000&(data))>>31)
#define AIO_I_ADC_ALC8_alc_ft_rms_hov_l_shift                                        (30)
#define AIO_I_ADC_ALC8_alc_ft_rms_hov_l_mask                                         (0x40000000)
#define AIO_I_ADC_ALC8_alc_ft_rms_hov_l(data)                                        (0x40000000&((data)<<30))
#define AIO_I_ADC_ALC8_alc_ft_rms_hov_l_src(data)                                    ((0x40000000&(data))>>30)
#define AIO_I_ADC_ALC8_get_alc_ft_rms_hov_l(data)                                    ((0x40000000&(data))>>30)
#define AIO_I_ADC_ALC8_alc_ft_rms_hov_r_shift                                        (29)
#define AIO_I_ADC_ALC8_alc_ft_rms_hov_r_mask                                         (0x20000000)
#define AIO_I_ADC_ALC8_alc_ft_rms_hov_r(data)                                        (0x20000000&((data)<<29))
#define AIO_I_ADC_ALC8_alc_ft_rms_hov_r_src(data)                                    ((0x20000000&(data))>>29)
#define AIO_I_ADC_ALC8_get_alc_ft_rms_hov_r(data)                                    ((0x20000000&(data))>>29)
#define AIO_I_ADC_ALC8_alc_ft_rms_lov_l_shift                                        (28)
#define AIO_I_ADC_ALC8_alc_ft_rms_lov_l_mask                                         (0x10000000)
#define AIO_I_ADC_ALC8_alc_ft_rms_lov_l(data)                                        (0x10000000&((data)<<28))
#define AIO_I_ADC_ALC8_alc_ft_rms_lov_l_src(data)                                    ((0x10000000&(data))>>28)
#define AIO_I_ADC_ALC8_get_alc_ft_rms_lov_l(data)                                    ((0x10000000&(data))>>28)
#define AIO_I_ADC_ALC8_alc_ft_rms_lov_r_shift                                        (27)
#define AIO_I_ADC_ALC8_alc_ft_rms_lov_r_mask                                         (0x08000000)
#define AIO_I_ADC_ALC8_alc_ft_rms_lov_r(data)                                        (0x08000000&((data)<<27))
#define AIO_I_ADC_ALC8_alc_ft_rms_lov_r_src(data)                                    ((0x08000000&(data))>>27)
#define AIO_I_ADC_ALC8_get_alc_ft_rms_lov_r(data)                                    ((0x08000000&(data))>>27)
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_hov_l_shift                                  (26)
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_hov_l_mask                                   (0x04000000)
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_hov_l(data)                                  (0x04000000&((data)<<26))
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_hov_l_src(data)                              ((0x04000000&(data))>>26)
#define AIO_I_ADC_ALC8_get_alc_ft_rms_noise_hov_l(data)                              ((0x04000000&(data))>>26)
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_hov_r_shift                                  (25)
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_hov_r_mask                                   (0x02000000)
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_hov_r(data)                                  (0x02000000&((data)<<25))
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_hov_r_src(data)                              ((0x02000000&(data))>>25)
#define AIO_I_ADC_ALC8_get_alc_ft_rms_noise_hov_r(data)                              ((0x02000000&(data))>>25)
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_lov_l_shift                                  (24)
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_lov_l_mask                                   (0x01000000)
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_lov_l(data)                                  (0x01000000&((data)<<24))
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_lov_l_src(data)                              ((0x01000000&(data))>>24)
#define AIO_I_ADC_ALC8_get_alc_ft_rms_noise_lov_l(data)                              ((0x01000000&(data))>>24)
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_lov_r_shift                                  (23)
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_lov_r_mask                                   (0x00800000)
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_lov_r(data)                                  (0x00800000&((data)<<23))
#define AIO_I_ADC_ALC8_alc_ft_rms_noise_lov_r_src(data)                              ((0x00800000&(data))>>23)
#define AIO_I_ADC_ALC8_get_alc_ft_rms_noise_lov_r(data)                              ((0x00800000&(data))>>23)
#define AIO_I_ADC_ALC8_alc_thmax_mode_l_shift                                        (22)
#define AIO_I_ADC_ALC8_alc_thmax_mode_l_mask                                         (0x00400000)
#define AIO_I_ADC_ALC8_alc_thmax_mode_l(data)                                        (0x00400000&((data)<<22))
#define AIO_I_ADC_ALC8_alc_thmax_mode_l_src(data)                                    ((0x00400000&(data))>>22)
#define AIO_I_ADC_ALC8_get_alc_thmax_mode_l(data)                                    ((0x00400000&(data))>>22)
#define AIO_I_ADC_ALC8_alc_thmax_mode_r_shift                                        (21)
#define AIO_I_ADC_ALC8_alc_thmax_mode_r_mask                                         (0x00200000)
#define AIO_I_ADC_ALC8_alc_thmax_mode_r(data)                                        (0x00200000&((data)<<21))
#define AIO_I_ADC_ALC8_alc_thmax_mode_r_src(data)                                    ((0x00200000&(data))>>21)
#define AIO_I_ADC_ALC8_get_alc_thmax_mode_r(data)                                    ((0x00200000&(data))>>21)
#define AIO_I_ADC_ALC8_alc_thmax2_mode_l_shift                                       (20)
#define AIO_I_ADC_ALC8_alc_thmax2_mode_l_mask                                        (0x00100000)
#define AIO_I_ADC_ALC8_alc_thmax2_mode_l(data)                                       (0x00100000&((data)<<20))
#define AIO_I_ADC_ALC8_alc_thmax2_mode_l_src(data)                                   ((0x00100000&(data))>>20)
#define AIO_I_ADC_ALC8_get_alc_thmax2_mode_l(data)                                   ((0x00100000&(data))>>20)
#define AIO_I_ADC_ALC8_alc_thmax2_mode_r_shift                                       (19)
#define AIO_I_ADC_ALC8_alc_thmax2_mode_r_mask                                        (0x00080000)
#define AIO_I_ADC_ALC8_alc_thmax2_mode_r(data)                                       (0x00080000&((data)<<19))
#define AIO_I_ADC_ALC8_alc_thmax2_mode_r_src(data)                                   ((0x00080000&(data))>>19)
#define AIO_I_ADC_ALC8_get_alc_thmax2_mode_r(data)                                   ((0x00080000&(data))>>19)
#define AIO_I_ADC_ALC8_alc_thmin_mode_l_shift                                        (18)
#define AIO_I_ADC_ALC8_alc_thmin_mode_l_mask                                         (0x00040000)
#define AIO_I_ADC_ALC8_alc_thmin_mode_l(data)                                        (0x00040000&((data)<<18))
#define AIO_I_ADC_ALC8_alc_thmin_mode_l_src(data)                                    ((0x00040000&(data))>>18)
#define AIO_I_ADC_ALC8_get_alc_thmin_mode_l(data)                                    ((0x00040000&(data))>>18)
#define AIO_I_ADC_ALC8_alc_thmin_mode_r_shift                                        (17)
#define AIO_I_ADC_ALC8_alc_thmin_mode_r_mask                                         (0x00020000)
#define AIO_I_ADC_ALC8_alc_thmin_mode_r(data)                                        (0x00020000&((data)<<17))
#define AIO_I_ADC_ALC8_alc_thmin_mode_r_src(data)                                    ((0x00020000&(data))>>17)
#define AIO_I_ADC_ALC8_get_alc_thmin_mode_r(data)                                    ((0x00020000&(data))>>17)
#define AIO_I_ADC_ALC8_alc_bk_amp_full_ov_l_shift                                    (16)
#define AIO_I_ADC_ALC8_alc_bk_amp_full_ov_l_mask                                     (0x00010000)
#define AIO_I_ADC_ALC8_alc_bk_amp_full_ov_l(data)                                    (0x00010000&((data)<<16))
#define AIO_I_ADC_ALC8_alc_bk_amp_full_ov_l_src(data)                                ((0x00010000&(data))>>16)
#define AIO_I_ADC_ALC8_get_alc_bk_amp_full_ov_l(data)                                ((0x00010000&(data))>>16)
#define AIO_I_ADC_ALC8_alc_bk_amp_full_ov_r_shift                                    (15)
#define AIO_I_ADC_ALC8_alc_bk_amp_full_ov_r_mask                                     (0x00008000)
#define AIO_I_ADC_ALC8_alc_bk_amp_full_ov_r(data)                                    (0x00008000&((data)<<15))
#define AIO_I_ADC_ALC8_alc_bk_amp_full_ov_r_src(data)                                ((0x00008000&(data))>>15)
#define AIO_I_ADC_ALC8_get_alc_bk_amp_full_ov_r(data)                                ((0x00008000&(data))>>15)
#define AIO_I_ADC_ALC8_alc_status_shift                                              (14)
#define AIO_I_ADC_ALC8_alc_status_mask                                               (0x00004000)
#define AIO_I_ADC_ALC8_alc_status(data)                                              (0x00004000&((data)<<14))
#define AIO_I_ADC_ALC8_alc_status_src(data)                                          ((0x00004000&(data))>>14)
#define AIO_I_ADC_ALC8_get_alc_status(data)                                          ((0x00004000&(data))>>14)


#define AIO_I_ADC_EQ1                                                                0x98006650
#define AIO_I_ADC_EQ1_reg_addr                                                       "0xD8006650"
#define AIO_I_ADC_EQ1_reg                                                            0xD8006650
#define set_AIO_I_ADC_EQ1_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ1_reg)=data)
#define get_AIO_I_ADC_EQ1_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ1_reg))
#define AIO_I_ADC_EQ1_inst_adr                                                       "0x0094"
#define AIO_I_ADC_EQ1_inst                                                           0x0094
#define AIO_I_ADC_EQ1_eq_para_update_shift                                           (31)
#define AIO_I_ADC_EQ1_eq_para_update_mask                                            (0x80000000)
#define AIO_I_ADC_EQ1_eq_para_update(data)                                           (0x80000000&((data)<<31))
#define AIO_I_ADC_EQ1_eq_para_update_src(data)                                       ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ1_get_eq_para_update(data)                                       ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ1_eq_cd_en_shift                                                 (30)
#define AIO_I_ADC_EQ1_eq_cd_en_mask                                                  (0x40000000)
#define AIO_I_ADC_EQ1_eq_cd_en(data)                                                 (0x40000000&((data)<<30))
#define AIO_I_ADC_EQ1_eq_cd_en_src(data)                                             ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ1_get_eq_cd_en(data)                                             ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ1_eq_dither_sel_shift                                            (28)
#define AIO_I_ADC_EQ1_eq_dither_sel_mask                                             (0x30000000)
#define AIO_I_ADC_EQ1_eq_dither_sel(data)                                            (0x30000000&((data)<<28))
#define AIO_I_ADC_EQ1_eq_dither_sel_src(data)                                        ((0x30000000&(data))>>28)
#define AIO_I_ADC_EQ1_get_eq_dither_sel(data)                                        ((0x30000000&(data))>>28)


#define AIO_I_ADC_EQ2                                                                0x98006654
#define AIO_I_ADC_EQ2_reg_addr                                                       "0xD8006654"
#define AIO_I_ADC_EQ2_reg                                                            0xD8006654
#define set_AIO_I_ADC_EQ2_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ2_reg)=data)
#define get_AIO_I_ADC_EQ2_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ2_reg))
#define AIO_I_ADC_EQ2_inst_adr                                                       "0x0095"
#define AIO_I_ADC_EQ2_inst                                                           0x0095
#define AIO_I_ADC_EQ2_eq_pre_vol_l_shift                                             (16)
#define AIO_I_ADC_EQ2_eq_pre_vol_l_mask                                              (0xFFFF0000)
#define AIO_I_ADC_EQ2_eq_pre_vol_l(data)                                             (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ2_eq_pre_vol_l_src(data)                                         ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ2_get_eq_pre_vol_l(data)                                         ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ2_eq_pre_vol_r_shift                                             (0)
#define AIO_I_ADC_EQ2_eq_pre_vol_r_mask                                              (0x0000FFFF)
#define AIO_I_ADC_EQ2_eq_pre_vol_r(data)                                             (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ2_eq_pre_vol_r_src(data)                                         ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ2_get_eq_pre_vol_r(data)                                         ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ3                                                                0x98006658
#define AIO_I_ADC_EQ3_reg_addr                                                       "0xD8006658"
#define AIO_I_ADC_EQ3_reg                                                            0xD8006658
#define set_AIO_I_ADC_EQ3_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ3_reg)=data)
#define get_AIO_I_ADC_EQ3_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ3_reg))
#define AIO_I_ADC_EQ3_inst_adr                                                       "0x0096"
#define AIO_I_ADC_EQ3_inst                                                           0x0096
#define AIO_I_ADC_EQ3_eq_post_vol_l_shift                                            (16)
#define AIO_I_ADC_EQ3_eq_post_vol_l_mask                                             (0xFFFF0000)
#define AIO_I_ADC_EQ3_eq_post_vol_l(data)                                            (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ3_eq_post_vol_l_src(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ3_get_eq_post_vol_l(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ3_eq_post_vol_r_shift                                            (0)
#define AIO_I_ADC_EQ3_eq_post_vol_r_mask                                             (0x0000FFFF)
#define AIO_I_ADC_EQ3_eq_post_vol_r(data)                                            (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ3_eq_post_vol_r_src(data)                                        ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ3_get_eq_post_vol_r(data)                                        ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ4                                                                0x9800665c
#define AIO_I_ADC_EQ4_reg_addr                                                       "0xD800665C"
#define AIO_I_ADC_EQ4_reg                                                            0xD800665C
#define set_AIO_I_ADC_EQ4_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ4_reg)=data)
#define get_AIO_I_ADC_EQ4_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ4_reg))
#define AIO_I_ADC_EQ4_inst_adr                                                       "0x0097"
#define AIO_I_ADC_EQ4_inst                                                           0x0097
#define AIO_I_ADC_EQ4_eq_hpf_en_shift                                                (31)
#define AIO_I_ADC_EQ4_eq_hpf_en_mask                                                 (0x80000000)
#define AIO_I_ADC_EQ4_eq_hpf_en(data)                                                (0x80000000&((data)<<31))
#define AIO_I_ADC_EQ4_eq_hpf_en_src(data)                                            ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ4_get_eq_hpf_en(data)                                            ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ4_eq_hpf_tpy_l_shift                                             (30)
#define AIO_I_ADC_EQ4_eq_hpf_tpy_l_mask                                              (0x40000000)
#define AIO_I_ADC_EQ4_eq_hpf_tpy_l(data)                                             (0x40000000&((data)<<30))
#define AIO_I_ADC_EQ4_eq_hpf_tpy_l_src(data)                                         ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ4_get_eq_hpf_tpy_l(data)                                         ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ4_eq_hpf_tpy_r_shift                                             (29)
#define AIO_I_ADC_EQ4_eq_hpf_tpy_r_mask                                              (0x20000000)
#define AIO_I_ADC_EQ4_eq_hpf_tpy_r(data)                                             (0x20000000&((data)<<29))
#define AIO_I_ADC_EQ4_eq_hpf_tpy_r_src(data)                                         ((0x20000000&(data))>>29)
#define AIO_I_ADC_EQ4_get_eq_hpf_tpy_r(data)                                         ((0x20000000&(data))>>29)
#define AIO_I_ADC_EQ4_eq_hpf_wclr_shift                                              (28)
#define AIO_I_ADC_EQ4_eq_hpf_wclr_mask                                               (0x10000000)
#define AIO_I_ADC_EQ4_eq_hpf_wclr(data)                                              (0x10000000&((data)<<28))
#define AIO_I_ADC_EQ4_eq_hpf_wclr_src(data)                                          ((0x10000000&(data))>>28)
#define AIO_I_ADC_EQ4_get_eq_hpf_wclr(data)                                          ((0x10000000&(data))>>28)
#define AIO_I_ADC_EQ4_eq_hpf_status_shift                                            (27)
#define AIO_I_ADC_EQ4_eq_hpf_status_mask                                             (0x08000000)
#define AIO_I_ADC_EQ4_eq_hpf_status(data)                                            (0x08000000&((data)<<27))
#define AIO_I_ADC_EQ4_eq_hpf_status_src(data)                                        ((0x08000000&(data))>>27)
#define AIO_I_ADC_EQ4_get_eq_hpf_status(data)                                        ((0x08000000&(data))>>27)


#define AIO_I_ADC_EQ5                                                                0x98006660
#define AIO_I_ADC_EQ5_reg_addr                                                       "0xD8006660"
#define AIO_I_ADC_EQ5_reg                                                            0xD8006660
#define set_AIO_I_ADC_EQ5_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ5_reg)=data)
#define get_AIO_I_ADC_EQ5_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ5_reg))
#define AIO_I_ADC_EQ5_inst_adr                                                       "0x0098"
#define AIO_I_ADC_EQ5_inst                                                           0x0098
#define AIO_I_ADC_EQ5_eq_hpf_h0_l_shift                                              (16)
#define AIO_I_ADC_EQ5_eq_hpf_h0_l_mask                                               (0xFFFF0000)
#define AIO_I_ADC_EQ5_eq_hpf_h0_l(data)                                              (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ5_eq_hpf_h0_l_src(data)                                          ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ5_get_eq_hpf_h0_l(data)                                          ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ5_eq_hpf_h0_r_shift                                              (0)
#define AIO_I_ADC_EQ5_eq_hpf_h0_r_mask                                               (0x0000FFFF)
#define AIO_I_ADC_EQ5_eq_hpf_h0_r(data)                                              (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ5_eq_hpf_h0_r_src(data)                                          ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ5_get_eq_hpf_h0_r(data)                                          ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ6                                                                0x98006664
#define AIO_I_ADC_EQ6_reg_addr                                                       "0xD8006664"
#define AIO_I_ADC_EQ6_reg                                                            0xD8006664
#define set_AIO_I_ADC_EQ6_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ6_reg)=data)
#define get_AIO_I_ADC_EQ6_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ6_reg))
#define AIO_I_ADC_EQ6_inst_adr                                                       "0x0099"
#define AIO_I_ADC_EQ6_inst                                                           0x0099
#define AIO_I_ADC_EQ6_eq_hpf_a1_l_shift                                              (16)
#define AIO_I_ADC_EQ6_eq_hpf_a1_l_mask                                               (0xFFFF0000)
#define AIO_I_ADC_EQ6_eq_hpf_a1_l(data)                                              (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ6_eq_hpf_a1_l_src(data)                                          ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ6_get_eq_hpf_a1_l(data)                                          ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ6_eq_hpf_a1_r_shift                                              (0)
#define AIO_I_ADC_EQ6_eq_hpf_a1_r_mask                                               (0x0000FFFF)
#define AIO_I_ADC_EQ6_eq_hpf_a1_r(data)                                              (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ6_eq_hpf_a1_r_src(data)                                          ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ6_get_eq_hpf_a1_r(data)                                          ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ7                                                                0x9800666c
#define AIO_I_ADC_EQ7_reg_addr                                                       "0xD800666C"
#define AIO_I_ADC_EQ7_reg                                                            0xD800666C
#define set_AIO_I_ADC_EQ7_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ7_reg)=data)
#define get_AIO_I_ADC_EQ7_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ7_reg))
#define AIO_I_ADC_EQ7_inst_adr                                                       "0x009B"
#define AIO_I_ADC_EQ7_inst                                                           0x009B
#define AIO_I_ADC_EQ7_eq_bpf1_en_shift                                               (31)
#define AIO_I_ADC_EQ7_eq_bpf1_en_mask                                                (0x80000000)
#define AIO_I_ADC_EQ7_eq_bpf1_en(data)                                               (0x80000000&((data)<<31))
#define AIO_I_ADC_EQ7_eq_bpf1_en_src(data)                                           ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ7_get_eq_bpf1_en(data)                                           ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ7_eq_bpf1_wclr_shift                                             (30)
#define AIO_I_ADC_EQ7_eq_bpf1_wclr_mask                                              (0x40000000)
#define AIO_I_ADC_EQ7_eq_bpf1_wclr(data)                                             (0x40000000&((data)<<30))
#define AIO_I_ADC_EQ7_eq_bpf1_wclr_src(data)                                         ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ7_get_eq_bpf1_wclr(data)                                         ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ7_eq_bpf1_status_shift                                           (29)
#define AIO_I_ADC_EQ7_eq_bpf1_status_mask                                            (0x20000000)
#define AIO_I_ADC_EQ7_eq_bpf1_status(data)                                           (0x20000000&((data)<<29))
#define AIO_I_ADC_EQ7_eq_bpf1_status_src(data)                                       ((0x20000000&(data))>>29)
#define AIO_I_ADC_EQ7_get_eq_bpf1_status(data)                                       ((0x20000000&(data))>>29)


#define AIO_I_ADC_EQ8                                                                0x98006670
#define AIO_I_ADC_EQ8_reg_addr                                                       "0xD8006670"
#define AIO_I_ADC_EQ8_reg                                                            0xD8006670
#define set_AIO_I_ADC_EQ8_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ8_reg)=data)
#define get_AIO_I_ADC_EQ8_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ8_reg))
#define AIO_I_ADC_EQ8_inst_adr                                                       "0x009C"
#define AIO_I_ADC_EQ8_inst                                                           0x009C
#define AIO_I_ADC_EQ8_eq_bpf1_h0_l_shift                                             (16)
#define AIO_I_ADC_EQ8_eq_bpf1_h0_l_mask                                              (0xFFFF0000)
#define AIO_I_ADC_EQ8_eq_bpf1_h0_l(data)                                             (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ8_eq_bpf1_h0_l_src(data)                                         ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ8_get_eq_bpf1_h0_l(data)                                         ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ8_eq_bpf1_h0_r_shift                                             (0)
#define AIO_I_ADC_EQ8_eq_bpf1_h0_r_mask                                              (0x0000FFFF)
#define AIO_I_ADC_EQ8_eq_bpf1_h0_r(data)                                             (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ8_eq_bpf1_h0_r_src(data)                                         ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ8_get_eq_bpf1_h0_r(data)                                         ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ9                                                                0x98006674
#define AIO_I_ADC_EQ9_reg_addr                                                       "0xD8006674"
#define AIO_I_ADC_EQ9_reg                                                            0xD8006674
#define set_AIO_I_ADC_EQ9_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ9_reg)=data)
#define get_AIO_I_ADC_EQ9_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ9_reg))
#define AIO_I_ADC_EQ9_inst_adr                                                       "0x009D"
#define AIO_I_ADC_EQ9_inst                                                           0x009D
#define AIO_I_ADC_EQ9_eq_bpf1_a1_l_shift                                             (16)
#define AIO_I_ADC_EQ9_eq_bpf1_a1_l_mask                                              (0xFFFF0000)
#define AIO_I_ADC_EQ9_eq_bpf1_a1_l(data)                                             (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ9_eq_bpf1_a1_l_src(data)                                         ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ9_get_eq_bpf1_a1_l(data)                                         ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ9_eq_bpf1_a1_r_shift                                             (0)
#define AIO_I_ADC_EQ9_eq_bpf1_a1_r_mask                                              (0x0000FFFF)
#define AIO_I_ADC_EQ9_eq_bpf1_a1_r(data)                                             (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ9_eq_bpf1_a1_r_src(data)                                         ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ9_get_eq_bpf1_a1_r(data)                                         ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ10                                                               0x98006678
#define AIO_I_ADC_EQ10_reg_addr                                                      "0xD8006678"
#define AIO_I_ADC_EQ10_reg                                                           0xD8006678
#define set_AIO_I_ADC_EQ10_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ10_reg)=data)
#define get_AIO_I_ADC_EQ10_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ10_reg))
#define AIO_I_ADC_EQ10_inst_adr                                                      "0x009E"
#define AIO_I_ADC_EQ10_inst                                                          0x009E
#define AIO_I_ADC_EQ10_eq_bpf1_a2_l_shift                                            (16)
#define AIO_I_ADC_EQ10_eq_bpf1_a2_l_mask                                             (0xFFFF0000)
#define AIO_I_ADC_EQ10_eq_bpf1_a2_l(data)                                            (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ10_eq_bpf1_a2_l_src(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ10_get_eq_bpf1_a2_l(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ10_eq_bpf1_a2_r_shift                                            (0)
#define AIO_I_ADC_EQ10_eq_bpf1_a2_r_mask                                             (0x0000FFFF)
#define AIO_I_ADC_EQ10_eq_bpf1_a2_r(data)                                            (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ10_eq_bpf1_a2_r_src(data)                                        ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ10_get_eq_bpf1_a2_r(data)                                        ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ11                                                               0x9800667c
#define AIO_I_ADC_EQ11_reg_addr                                                      "0xD800667C"
#define AIO_I_ADC_EQ11_reg                                                           0xD800667C
#define set_AIO_I_ADC_EQ11_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ11_reg)=data)
#define get_AIO_I_ADC_EQ11_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ11_reg))
#define AIO_I_ADC_EQ11_inst_adr                                                      "0x009F"
#define AIO_I_ADC_EQ11_inst                                                          0x009F
#define AIO_I_ADC_EQ11_eq_bpf3_en_shift                                              (31)
#define AIO_I_ADC_EQ11_eq_bpf3_en_mask                                               (0x80000000)
#define AIO_I_ADC_EQ11_eq_bpf3_en(data)                                              (0x80000000&((data)<<31))
#define AIO_I_ADC_EQ11_eq_bpf3_en_src(data)                                          ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ11_get_eq_bpf3_en(data)                                          ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ11_eq_bpf3_wclr_shift                                            (30)
#define AIO_I_ADC_EQ11_eq_bpf3_wclr_mask                                             (0x40000000)
#define AIO_I_ADC_EQ11_eq_bpf3_wclr(data)                                            (0x40000000&((data)<<30))
#define AIO_I_ADC_EQ11_eq_bpf3_wclr_src(data)                                        ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ11_get_eq_bpf3_wclr(data)                                        ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ11_eq_bpf3_status_shift                                          (29)
#define AIO_I_ADC_EQ11_eq_bpf3_status_mask                                           (0x20000000)
#define AIO_I_ADC_EQ11_eq_bpf3_status(data)                                          (0x20000000&((data)<<29))
#define AIO_I_ADC_EQ11_eq_bpf3_status_src(data)                                      ((0x20000000&(data))>>29)
#define AIO_I_ADC_EQ11_get_eq_bpf3_status(data)                                      ((0x20000000&(data))>>29)


#define AIO_I_ADC_EQ12                                                               0x98006680
#define AIO_I_ADC_EQ12_reg_addr                                                      "0xD8006680"
#define AIO_I_ADC_EQ12_reg                                                           0xD8006680
#define set_AIO_I_ADC_EQ12_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ12_reg)=data)
#define get_AIO_I_ADC_EQ12_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ12_reg))
#define AIO_I_ADC_EQ12_inst_adr                                                      "0x00A0"
#define AIO_I_ADC_EQ12_inst                                                          0x00A0
#define AIO_I_ADC_EQ12_eq_bpf3_h0_l_shift                                            (16)
#define AIO_I_ADC_EQ12_eq_bpf3_h0_l_mask                                             (0xFFFF0000)
#define AIO_I_ADC_EQ12_eq_bpf3_h0_l(data)                                            (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ12_eq_bpf3_h0_l_src(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ12_get_eq_bpf3_h0_l(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ12_eq_bpf3_h0_r_shift                                            (0)
#define AIO_I_ADC_EQ12_eq_bpf3_h0_r_mask                                             (0x0000FFFF)
#define AIO_I_ADC_EQ12_eq_bpf3_h0_r(data)                                            (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ12_eq_bpf3_h0_r_src(data)                                        ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ12_get_eq_bpf3_h0_r(data)                                        ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ13                                                               0x98006684
#define AIO_I_ADC_EQ13_reg_addr                                                      "0xD8006684"
#define AIO_I_ADC_EQ13_reg                                                           0xD8006684
#define set_AIO_I_ADC_EQ13_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ13_reg)=data)
#define get_AIO_I_ADC_EQ13_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ13_reg))
#define AIO_I_ADC_EQ13_inst_adr                                                      "0x00A1"
#define AIO_I_ADC_EQ13_inst                                                          0x00A1
#define AIO_I_ADC_EQ13_eq_bpf3_a1_l_shift                                            (16)
#define AIO_I_ADC_EQ13_eq_bpf3_a1_l_mask                                             (0xFFFF0000)
#define AIO_I_ADC_EQ13_eq_bpf3_a1_l(data)                                            (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ13_eq_bpf3_a1_l_src(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ13_get_eq_bpf3_a1_l(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ13_eq_bpf3_a1_r_shift                                            (0)
#define AIO_I_ADC_EQ13_eq_bpf3_a1_r_mask                                             (0x0000FFFF)
#define AIO_I_ADC_EQ13_eq_bpf3_a1_r(data)                                            (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ13_eq_bpf3_a1_r_src(data)                                        ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ13_get_eq_bpf3_a1_r(data)                                        ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ14                                                               0x98006688
#define AIO_I_ADC_EQ14_reg_addr                                                      "0xD8006688"
#define AIO_I_ADC_EQ14_reg                                                           0xD8006688
#define set_AIO_I_ADC_EQ14_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ14_reg)=data)
#define get_AIO_I_ADC_EQ14_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ14_reg))
#define AIO_I_ADC_EQ14_inst_adr                                                      "0x00A2"
#define AIO_I_ADC_EQ14_inst                                                          0x00A2
#define AIO_I_ADC_EQ14_eq_bpf3_a2_l_shift                                            (16)
#define AIO_I_ADC_EQ14_eq_bpf3_a2_l_mask                                             (0xFFFF0000)
#define AIO_I_ADC_EQ14_eq_bpf3_a2_l(data)                                            (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ14_eq_bpf3_a2_l_src(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ14_get_eq_bpf3_a2_l(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ14_eq_bpf3_a2_r_shift                                            (0)
#define AIO_I_ADC_EQ14_eq_bpf3_a2_r_mask                                             (0x0000FFFF)
#define AIO_I_ADC_EQ14_eq_bpf3_a2_r(data)                                            (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ14_eq_bpf3_a2_r_src(data)                                        ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ14_get_eq_bpf3_a2_r(data)                                        ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ15                                                               0x9800668c
#define AIO_I_ADC_EQ15_reg_addr                                                      "0xD800668C"
#define AIO_I_ADC_EQ15_reg                                                           0xD800668C
#define set_AIO_I_ADC_EQ15_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ15_reg)=data)
#define get_AIO_I_ADC_EQ15_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ15_reg))
#define AIO_I_ADC_EQ15_inst_adr                                                      "0x00A3"
#define AIO_I_ADC_EQ15_inst                                                          0x00A3
#define AIO_I_ADC_EQ15_eq_bpf4_en_shift                                              (31)
#define AIO_I_ADC_EQ15_eq_bpf4_en_mask                                               (0x80000000)
#define AIO_I_ADC_EQ15_eq_bpf4_en(data)                                              (0x80000000&((data)<<31))
#define AIO_I_ADC_EQ15_eq_bpf4_en_src(data)                                          ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ15_get_eq_bpf4_en(data)                                          ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ15_eq_bpf4_wclr_shift                                            (30)
#define AIO_I_ADC_EQ15_eq_bpf4_wclr_mask                                             (0x40000000)
#define AIO_I_ADC_EQ15_eq_bpf4_wclr(data)                                            (0x40000000&((data)<<30))
#define AIO_I_ADC_EQ15_eq_bpf4_wclr_src(data)                                        ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ15_get_eq_bpf4_wclr(data)                                        ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ15_eq_bpf4_status_shift                                          (29)
#define AIO_I_ADC_EQ15_eq_bpf4_status_mask                                           (0x20000000)
#define AIO_I_ADC_EQ15_eq_bpf4_status(data)                                          (0x20000000&((data)<<29))
#define AIO_I_ADC_EQ15_eq_bpf4_status_src(data)                                      ((0x20000000&(data))>>29)
#define AIO_I_ADC_EQ15_get_eq_bpf4_status(data)                                      ((0x20000000&(data))>>29)


#define AIO_I_ADC_EQ16                                                               0x98006690
#define AIO_I_ADC_EQ16_reg_addr                                                      "0xD8006690"
#define AIO_I_ADC_EQ16_reg                                                           0xD8006690
#define set_AIO_I_ADC_EQ16_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ16_reg)=data)
#define get_AIO_I_ADC_EQ16_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ16_reg))
#define AIO_I_ADC_EQ16_inst_adr                                                      "0x00A4"
#define AIO_I_ADC_EQ16_inst                                                          0x00A4
#define AIO_I_ADC_EQ16_eq_bpf4_h0_l_shift                                            (16)
#define AIO_I_ADC_EQ16_eq_bpf4_h0_l_mask                                             (0xFFFF0000)
#define AIO_I_ADC_EQ16_eq_bpf4_h0_l(data)                                            (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ16_eq_bpf4_h0_l_src(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ16_get_eq_bpf4_h0_l(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ16_eq_bpf4_h0_r_shift                                            (0)
#define AIO_I_ADC_EQ16_eq_bpf4_h0_r_mask                                             (0x0000FFFF)
#define AIO_I_ADC_EQ16_eq_bpf4_h0_r(data)                                            (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ16_eq_bpf4_h0_r_src(data)                                        ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ16_get_eq_bpf4_h0_r(data)                                        ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ17                                                               0x98006694
#define AIO_I_ADC_EQ17_reg_addr                                                      "0xD8006694"
#define AIO_I_ADC_EQ17_reg                                                           0xD8006694
#define set_AIO_I_ADC_EQ17_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ17_reg)=data)
#define get_AIO_I_ADC_EQ17_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ17_reg))
#define AIO_I_ADC_EQ17_inst_adr                                                      "0x00A5"
#define AIO_I_ADC_EQ17_inst                                                          0x00A5
#define AIO_I_ADC_EQ17_eq_bpf4_a1_l_shift                                            (16)
#define AIO_I_ADC_EQ17_eq_bpf4_a1_l_mask                                             (0xFFFF0000)
#define AIO_I_ADC_EQ17_eq_bpf4_a1_l(data)                                            (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ17_eq_bpf4_a1_l_src(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ17_get_eq_bpf4_a1_l(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ17_eq_bpf4_a1_r_shift                                            (0)
#define AIO_I_ADC_EQ17_eq_bpf4_a1_r_mask                                             (0x0000FFFF)
#define AIO_I_ADC_EQ17_eq_bpf4_a1_r(data)                                            (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ17_eq_bpf4_a1_r_src(data)                                        ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ17_get_eq_bpf4_a1_r(data)                                        ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ18                                                               0x98006698
#define AIO_I_ADC_EQ18_reg_addr                                                      "0xD8006698"
#define AIO_I_ADC_EQ18_reg                                                           0xD8006698
#define set_AIO_I_ADC_EQ18_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ18_reg)=data)
#define get_AIO_I_ADC_EQ18_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ18_reg))
#define AIO_I_ADC_EQ18_inst_adr                                                      "0x00A6"
#define AIO_I_ADC_EQ18_inst                                                          0x00A6
#define AIO_I_ADC_EQ18_eq_bpf4_a2_l_shift                                            (16)
#define AIO_I_ADC_EQ18_eq_bpf4_a2_l_mask                                             (0xFFFF0000)
#define AIO_I_ADC_EQ18_eq_bpf4_a2_l(data)                                            (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ18_eq_bpf4_a2_l_src(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ18_get_eq_bpf4_a2_l(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ18_eq_bpf4_a2_r_shift                                            (0)
#define AIO_I_ADC_EQ18_eq_bpf4_a2_r_mask                                             (0x0000FFFF)
#define AIO_I_ADC_EQ18_eq_bpf4_a2_r(data)                                            (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ18_eq_bpf4_a2_r_src(data)                                        ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ18_get_eq_bpf4_a2_r(data)                                        ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ19                                                               0x9800669c
#define AIO_I_ADC_EQ19_reg_addr                                                      "0xD800669C"
#define AIO_I_ADC_EQ19_reg                                                           0xD800669C
#define set_AIO_I_ADC_EQ19_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ19_reg)=data)
#define get_AIO_I_ADC_EQ19_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ19_reg))
#define AIO_I_ADC_EQ19_inst_adr                                                      "0x00A7"
#define AIO_I_ADC_EQ19_inst                                                          0x00A7
#define AIO_I_ADC_EQ19_eq_lpf_en_shift                                               (31)
#define AIO_I_ADC_EQ19_eq_lpf_en_mask                                                (0x80000000)
#define AIO_I_ADC_EQ19_eq_lpf_en(data)                                               (0x80000000&((data)<<31))
#define AIO_I_ADC_EQ19_eq_lpf_en_src(data)                                           ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ19_get_eq_lpf_en(data)                                           ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ19_eq_lpf_tpy_l_shift                                            (30)
#define AIO_I_ADC_EQ19_eq_lpf_tpy_l_mask                                             (0x40000000)
#define AIO_I_ADC_EQ19_eq_lpf_tpy_l(data)                                            (0x40000000&((data)<<30))
#define AIO_I_ADC_EQ19_eq_lpf_tpy_l_src(data)                                        ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ19_get_eq_lpf_tpy_l(data)                                        ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ19_eq_lpf_tpy_r_shift                                            (29)
#define AIO_I_ADC_EQ19_eq_lpf_tpy_r_mask                                             (0x20000000)
#define AIO_I_ADC_EQ19_eq_lpf_tpy_r(data)                                            (0x20000000&((data)<<29))
#define AIO_I_ADC_EQ19_eq_lpf_tpy_r_src(data)                                        ((0x20000000&(data))>>29)
#define AIO_I_ADC_EQ19_get_eq_lpf_tpy_r(data)                                        ((0x20000000&(data))>>29)
#define AIO_I_ADC_EQ19_eq_lpf_wclr_shift                                             (28)
#define AIO_I_ADC_EQ19_eq_lpf_wclr_mask                                              (0x10000000)
#define AIO_I_ADC_EQ19_eq_lpf_wclr(data)                                             (0x10000000&((data)<<28))
#define AIO_I_ADC_EQ19_eq_lpf_wclr_src(data)                                         ((0x10000000&(data))>>28)
#define AIO_I_ADC_EQ19_get_eq_lpf_wclr(data)                                         ((0x10000000&(data))>>28)
#define AIO_I_ADC_EQ19_eq_lpf_status_shift                                           (27)
#define AIO_I_ADC_EQ19_eq_lpf_status_mask                                            (0x08000000)
#define AIO_I_ADC_EQ19_eq_lpf_status(data)                                           (0x08000000&((data)<<27))
#define AIO_I_ADC_EQ19_eq_lpf_status_src(data)                                       ((0x08000000&(data))>>27)
#define AIO_I_ADC_EQ19_get_eq_lpf_status(data)                                       ((0x08000000&(data))>>27)


#define AIO_I_ADC_EQ20                                                               0x980066a0
#define AIO_I_ADC_EQ20_reg_addr                                                      "0xD80066A0"
#define AIO_I_ADC_EQ20_reg                                                           0xD80066A0
#define set_AIO_I_ADC_EQ20_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ20_reg)=data)
#define get_AIO_I_ADC_EQ20_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ20_reg))
#define AIO_I_ADC_EQ20_inst_adr                                                      "0x00A8"
#define AIO_I_ADC_EQ20_inst                                                          0x00A8
#define AIO_I_ADC_EQ20_eq_lpf_h0_l_shift                                             (16)
#define AIO_I_ADC_EQ20_eq_lpf_h0_l_mask                                              (0xFFFF0000)
#define AIO_I_ADC_EQ20_eq_lpf_h0_l(data)                                             (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ20_eq_lpf_h0_l_src(data)                                         ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ20_get_eq_lpf_h0_l(data)                                         ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ20_eq_lpf_h0_r_shift                                             (0)
#define AIO_I_ADC_EQ20_eq_lpf_h0_r_mask                                              (0x0000FFFF)
#define AIO_I_ADC_EQ20_eq_lpf_h0_r(data)                                             (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ20_eq_lpf_h0_r_src(data)                                         ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ20_get_eq_lpf_h0_r(data)                                         ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ21                                                               0x980066a4
#define AIO_I_ADC_EQ21_reg_addr                                                      "0xD80066A4"
#define AIO_I_ADC_EQ21_reg                                                           0xD80066A4
#define set_AIO_I_ADC_EQ21_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ21_reg)=data)
#define get_AIO_I_ADC_EQ21_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ21_reg))
#define AIO_I_ADC_EQ21_inst_adr                                                      "0x00A9"
#define AIO_I_ADC_EQ21_inst                                                          0x00A9
#define AIO_I_ADC_EQ21_eq_lpf_a1_l_shift                                             (16)
#define AIO_I_ADC_EQ21_eq_lpf_a1_l_mask                                              (0xFFFF0000)
#define AIO_I_ADC_EQ21_eq_lpf_a1_l(data)                                             (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ21_eq_lpf_a1_l_src(data)                                         ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ21_get_eq_lpf_a1_l(data)                                         ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ21_eq_lpf_a1_r_shift                                             (0)
#define AIO_I_ADC_EQ21_eq_lpf_a1_r_mask                                              (0x0000FFFF)
#define AIO_I_ADC_EQ21_eq_lpf_a1_r(data)                                             (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ21_eq_lpf_a1_r_src(data)                                         ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ21_get_eq_lpf_a1_r(data)                                         ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ22                                                               0x980066a8
#define AIO_I_ADC_EQ22_reg_addr                                                      "0xD80066A8"
#define AIO_I_ADC_EQ22_reg                                                           0xD80066A8
#define set_AIO_I_ADC_EQ22_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ22_reg)=data)
#define get_AIO_I_ADC_EQ22_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ22_reg))
#define AIO_I_ADC_EQ22_inst_adr                                                      "0x00AA"
#define AIO_I_ADC_EQ22_inst                                                          0x00AA
#define AIO_I_ADC_EQ22_eq_biquad_h0_l_shift                                          (3)
#define AIO_I_ADC_EQ22_eq_biquad_h0_l_mask                                           (0xFFFFFFF8)
#define AIO_I_ADC_EQ22_eq_biquad_h0_l(data)                                          (0xFFFFFFF8&((data)<<3))
#define AIO_I_ADC_EQ22_eq_biquad_h0_l_src(data)                                      ((0xFFFFFFF8&(data))>>3)
#define AIO_I_ADC_EQ22_get_eq_biquad_h0_l(data)                                      ((0xFFFFFFF8&(data))>>3)


#define AIO_I_ADC_EQ23                                                               0x980066ac
#define AIO_I_ADC_EQ23_reg_addr                                                      "0xD80066AC"
#define AIO_I_ADC_EQ23_reg                                                           0xD80066AC
#define set_AIO_I_ADC_EQ23_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ23_reg)=data)
#define get_AIO_I_ADC_EQ23_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ23_reg))
#define AIO_I_ADC_EQ23_inst_adr                                                      "0x00AB"
#define AIO_I_ADC_EQ23_inst                                                          0x00AB
#define AIO_I_ADC_EQ23_eq_biquad_b1_l_shift                                          (3)
#define AIO_I_ADC_EQ23_eq_biquad_b1_l_mask                                           (0xFFFFFFF8)
#define AIO_I_ADC_EQ23_eq_biquad_b1_l(data)                                          (0xFFFFFFF8&((data)<<3))
#define AIO_I_ADC_EQ23_eq_biquad_b1_l_src(data)                                      ((0xFFFFFFF8&(data))>>3)
#define AIO_I_ADC_EQ23_get_eq_biquad_b1_l(data)                                      ((0xFFFFFFF8&(data))>>3)


#define AIO_I_ADC_EQ24                                                               0x980066b0
#define AIO_I_ADC_EQ24_reg_addr                                                      "0xD80066B0"
#define AIO_I_ADC_EQ24_reg                                                           0xD80066B0
#define set_AIO_I_ADC_EQ24_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ24_reg)=data)
#define get_AIO_I_ADC_EQ24_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ24_reg))
#define AIO_I_ADC_EQ24_inst_adr                                                      "0x00AC"
#define AIO_I_ADC_EQ24_inst                                                          0x00AC
#define AIO_I_ADC_EQ24_eq_biquad_b2_l_shift                                          (3)
#define AIO_I_ADC_EQ24_eq_biquad_b2_l_mask                                           (0xFFFFFFF8)
#define AIO_I_ADC_EQ24_eq_biquad_b2_l(data)                                          (0xFFFFFFF8&((data)<<3))
#define AIO_I_ADC_EQ24_eq_biquad_b2_l_src(data)                                      ((0xFFFFFFF8&(data))>>3)
#define AIO_I_ADC_EQ24_get_eq_biquad_b2_l(data)                                      ((0xFFFFFFF8&(data))>>3)


#define AIO_I_ADC_EQ25                                                               0x980066b4
#define AIO_I_ADC_EQ25_reg_addr                                                      "0xD80066B4"
#define AIO_I_ADC_EQ25_reg                                                           0xD80066B4
#define set_AIO_I_ADC_EQ25_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ25_reg)=data)
#define get_AIO_I_ADC_EQ25_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ25_reg))
#define AIO_I_ADC_EQ25_inst_adr                                                      "0x00AD"
#define AIO_I_ADC_EQ25_inst                                                          0x00AD
#define AIO_I_ADC_EQ25_eq_biquad_a1_l_shift                                          (3)
#define AIO_I_ADC_EQ25_eq_biquad_a1_l_mask                                           (0xFFFFFFF8)
#define AIO_I_ADC_EQ25_eq_biquad_a1_l(data)                                          (0xFFFFFFF8&((data)<<3))
#define AIO_I_ADC_EQ25_eq_biquad_a1_l_src(data)                                      ((0xFFFFFFF8&(data))>>3)
#define AIO_I_ADC_EQ25_get_eq_biquad_a1_l(data)                                      ((0xFFFFFFF8&(data))>>3)


#define AIO_I_ADC_EQ26                                                               0x980066b8
#define AIO_I_ADC_EQ26_reg_addr                                                      "0xD80066B8"
#define AIO_I_ADC_EQ26_reg                                                           0xD80066B8
#define set_AIO_I_ADC_EQ26_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ26_reg)=data)
#define get_AIO_I_ADC_EQ26_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ26_reg))
#define AIO_I_ADC_EQ26_inst_adr                                                      "0x00AE"
#define AIO_I_ADC_EQ26_inst                                                          0x00AE
#define AIO_I_ADC_EQ26_eq_biquad_a2_l_shift                                          (3)
#define AIO_I_ADC_EQ26_eq_biquad_a2_l_mask                                           (0xFFFFFFF8)
#define AIO_I_ADC_EQ26_eq_biquad_a2_l(data)                                          (0xFFFFFFF8&((data)<<3))
#define AIO_I_ADC_EQ26_eq_biquad_a2_l_src(data)                                      ((0xFFFFFFF8&(data))>>3)
#define AIO_I_ADC_EQ26_get_eq_biquad_a2_l(data)                                      ((0xFFFFFFF8&(data))>>3)


#define AIO_I_ADC_EQ27                                                               0x980066bc
#define AIO_I_ADC_EQ27_reg_addr                                                      "0xD80066BC"
#define AIO_I_ADC_EQ27_reg                                                           0xD80066BC
#define set_AIO_I_ADC_EQ27_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ27_reg)=data)
#define get_AIO_I_ADC_EQ27_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ27_reg))
#define AIO_I_ADC_EQ27_inst_adr                                                      "0x00AF"
#define AIO_I_ADC_EQ27_inst                                                          0x00AF
#define AIO_I_ADC_EQ27_eq_biquad_h0_r_shift                                          (3)
#define AIO_I_ADC_EQ27_eq_biquad_h0_r_mask                                           (0xFFFFFFF8)
#define AIO_I_ADC_EQ27_eq_biquad_h0_r(data)                                          (0xFFFFFFF8&((data)<<3))
#define AIO_I_ADC_EQ27_eq_biquad_h0_r_src(data)                                      ((0xFFFFFFF8&(data))>>3)
#define AIO_I_ADC_EQ27_get_eq_biquad_h0_r(data)                                      ((0xFFFFFFF8&(data))>>3)


#define AIO_I_ADC_EQ28                                                               0x980066c0
#define AIO_I_ADC_EQ28_reg_addr                                                      "0xD80066C0"
#define AIO_I_ADC_EQ28_reg                                                           0xD80066C0
#define set_AIO_I_ADC_EQ28_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ28_reg)=data)
#define get_AIO_I_ADC_EQ28_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ28_reg))
#define AIO_I_ADC_EQ28_inst_adr                                                      "0x00B0"
#define AIO_I_ADC_EQ28_inst                                                          0x00B0
#define AIO_I_ADC_EQ28_eq_biquad_b1_r_shift                                          (3)
#define AIO_I_ADC_EQ28_eq_biquad_b1_r_mask                                           (0xFFFFFFF8)
#define AIO_I_ADC_EQ28_eq_biquad_b1_r(data)                                          (0xFFFFFFF8&((data)<<3))
#define AIO_I_ADC_EQ28_eq_biquad_b1_r_src(data)                                      ((0xFFFFFFF8&(data))>>3)
#define AIO_I_ADC_EQ28_get_eq_biquad_b1_r(data)                                      ((0xFFFFFFF8&(data))>>3)


#define AIO_I_ADC_EQ29                                                               0x980066c4
#define AIO_I_ADC_EQ29_reg_addr                                                      "0xD80066C4"
#define AIO_I_ADC_EQ29_reg                                                           0xD80066C4
#define set_AIO_I_ADC_EQ29_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ29_reg)=data)
#define get_AIO_I_ADC_EQ29_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ29_reg))
#define AIO_I_ADC_EQ29_inst_adr                                                      "0x00B1"
#define AIO_I_ADC_EQ29_inst                                                          0x00B1
#define AIO_I_ADC_EQ29_eq_biquad_b2_r_shift                                          (3)
#define AIO_I_ADC_EQ29_eq_biquad_b2_r_mask                                           (0xFFFFFFF8)
#define AIO_I_ADC_EQ29_eq_biquad_b2_r(data)                                          (0xFFFFFFF8&((data)<<3))
#define AIO_I_ADC_EQ29_eq_biquad_b2_r_src(data)                                      ((0xFFFFFFF8&(data))>>3)
#define AIO_I_ADC_EQ29_get_eq_biquad_b2_r(data)                                      ((0xFFFFFFF8&(data))>>3)


#define AIO_I_ADC_EQ30                                                               0x980066c8
#define AIO_I_ADC_EQ30_reg_addr                                                      "0xD80066C8"
#define AIO_I_ADC_EQ30_reg                                                           0xD80066C8
#define set_AIO_I_ADC_EQ30_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ30_reg)=data)
#define get_AIO_I_ADC_EQ30_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ30_reg))
#define AIO_I_ADC_EQ30_inst_adr                                                      "0x00B2"
#define AIO_I_ADC_EQ30_inst                                                          0x00B2
#define AIO_I_ADC_EQ30_eq_biquad_a1_r_shift                                          (3)
#define AIO_I_ADC_EQ30_eq_biquad_a1_r_mask                                           (0xFFFFFFF8)
#define AIO_I_ADC_EQ30_eq_biquad_a1_r(data)                                          (0xFFFFFFF8&((data)<<3))
#define AIO_I_ADC_EQ30_eq_biquad_a1_r_src(data)                                      ((0xFFFFFFF8&(data))>>3)
#define AIO_I_ADC_EQ30_get_eq_biquad_a1_r(data)                                      ((0xFFFFFFF8&(data))>>3)


#define AIO_I_ADC_EQ31                                                               0x980066cc
#define AIO_I_ADC_EQ31_reg_addr                                                      "0xD80066CC"
#define AIO_I_ADC_EQ31_reg                                                           0xD80066CC
#define set_AIO_I_ADC_EQ31_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ31_reg)=data)
#define get_AIO_I_ADC_EQ31_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ31_reg))
#define AIO_I_ADC_EQ31_inst_adr                                                      "0x00B3"
#define AIO_I_ADC_EQ31_inst                                                          0x00B3
#define AIO_I_ADC_EQ31_eq_biquad_a2_r_shift                                          (3)
#define AIO_I_ADC_EQ31_eq_biquad_a2_r_mask                                           (0xFFFFFFF8)
#define AIO_I_ADC_EQ31_eq_biquad_a2_r(data)                                          (0xFFFFFFF8&((data)<<3))
#define AIO_I_ADC_EQ31_eq_biquad_a2_r_src(data)                                      ((0xFFFFFFF8&(data))>>3)
#define AIO_I_ADC_EQ31_get_eq_biquad_a2_r(data)                                      ((0xFFFFFFF8&(data))>>3)


#define AIO_I_ADC_EQ32                                                               0x980066d0
#define AIO_I_ADC_EQ32_reg_addr                                                      "0xD80066D0"
#define AIO_I_ADC_EQ32_reg                                                           0xD80066D0
#define set_AIO_I_ADC_EQ32_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ32_reg)=data)
#define get_AIO_I_ADC_EQ32_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ32_reg))
#define AIO_I_ADC_EQ32_inst_adr                                                      "0x00B4"
#define AIO_I_ADC_EQ32_inst                                                          0x00B4
#define AIO_I_ADC_EQ32_eq_biquad_en_shift                                            (31)
#define AIO_I_ADC_EQ32_eq_biquad_en_mask                                             (0x80000000)
#define AIO_I_ADC_EQ32_eq_biquad_en(data)                                            (0x80000000&((data)<<31))
#define AIO_I_ADC_EQ32_eq_biquad_en_src(data)                                        ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ32_get_eq_biquad_en(data)                                        ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ32_eq_biquad_wclr_shift                                          (30)
#define AIO_I_ADC_EQ32_eq_biquad_wclr_mask                                           (0x40000000)
#define AIO_I_ADC_EQ32_eq_biquad_wclr(data)                                          (0x40000000&((data)<<30))
#define AIO_I_ADC_EQ32_eq_biquad_wclr_src(data)                                      ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ32_get_eq_biquad_wclr(data)                                      ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ32_eq_biquad_status_shift                                        (29)
#define AIO_I_ADC_EQ32_eq_biquad_status_mask                                         (0x20000000)
#define AIO_I_ADC_EQ32_eq_biquad_status(data)                                        (0x20000000&((data)<<29))
#define AIO_I_ADC_EQ32_eq_biquad_status_src(data)                                    ((0x20000000&(data))>>29)
#define AIO_I_ADC_EQ32_get_eq_biquad_status(data)                                    ((0x20000000&(data))>>29)


#define AIO_I_ADC_EQ33                                                               0x98006700
#define AIO_I_ADC_EQ33_reg_addr                                                      "0xD8006700"
#define AIO_I_ADC_EQ33_reg                                                           0xD8006700
#define set_AIO_I_ADC_EQ33_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ33_reg)=data)
#define get_AIO_I_ADC_EQ33_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ33_reg))
#define AIO_I_ADC_EQ33_inst_adr                                                      "0x00C0"
#define AIO_I_ADC_EQ33_inst                                                          0x00C0
#define AIO_I_ADC_EQ33_eq_bpf2_en_shift                                              (31)
#define AIO_I_ADC_EQ33_eq_bpf2_en_mask                                               (0x80000000)
#define AIO_I_ADC_EQ33_eq_bpf2_en(data)                                              (0x80000000&((data)<<31))
#define AIO_I_ADC_EQ33_eq_bpf2_en_src(data)                                          ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ33_get_eq_bpf2_en(data)                                          ((0x80000000&(data))>>31)
#define AIO_I_ADC_EQ33_eq_bpf2_wclr_shift                                            (30)
#define AIO_I_ADC_EQ33_eq_bpf2_wclr_mask                                             (0x40000000)
#define AIO_I_ADC_EQ33_eq_bpf2_wclr(data)                                            (0x40000000&((data)<<30))
#define AIO_I_ADC_EQ33_eq_bpf2_wclr_src(data)                                        ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ33_get_eq_bpf2_wclr(data)                                        ((0x40000000&(data))>>30)
#define AIO_I_ADC_EQ33_eq_bpf2_status_shift                                          (29)
#define AIO_I_ADC_EQ33_eq_bpf2_status_mask                                           (0x20000000)
#define AIO_I_ADC_EQ33_eq_bpf2_status(data)                                          (0x20000000&((data)<<29))
#define AIO_I_ADC_EQ33_eq_bpf2_status_src(data)                                      ((0x20000000&(data))>>29)
#define AIO_I_ADC_EQ33_get_eq_bpf2_status(data)                                      ((0x20000000&(data))>>29)
#define AIO_I_ADC_EQ33_eq_path_en_shift                                              (28)
#define AIO_I_ADC_EQ33_eq_path_en_mask                                               (0x10000000)
#define AIO_I_ADC_EQ33_eq_path_en(data)                                              (0x10000000&((data)<<28))
#define AIO_I_ADC_EQ33_eq_path_en_src(data)                                          ((0x10000000&(data))>>28)
#define AIO_I_ADC_EQ33_get_eq_path_en(data)                                          ((0x10000000&(data))>>28)
#define AIO_I_ADC_EQ33_eq_status_shift                                               (27)
#define AIO_I_ADC_EQ33_eq_status_mask                                                (0x08000000)
#define AIO_I_ADC_EQ33_eq_status(data)                                               (0x08000000&((data)<<27))
#define AIO_I_ADC_EQ33_eq_status_src(data)                                           ((0x08000000&(data))>>27)
#define AIO_I_ADC_EQ33_get_eq_status(data)                                           ((0x08000000&(data))>>27)


#define AIO_I_ADC_EQ34                                                               0x98006704
#define AIO_I_ADC_EQ34_reg_addr                                                      "0xD8006704"
#define AIO_I_ADC_EQ34_reg                                                           0xD8006704
#define set_AIO_I_ADC_EQ34_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ34_reg)=data)
#define get_AIO_I_ADC_EQ34_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ34_reg))
#define AIO_I_ADC_EQ34_inst_adr                                                      "0x00C1"
#define AIO_I_ADC_EQ34_inst                                                          0x00C1
#define AIO_I_ADC_EQ34_eq_bpf2_h0_l_shift                                            (16)
#define AIO_I_ADC_EQ34_eq_bpf2_h0_l_mask                                             (0xFFFF0000)
#define AIO_I_ADC_EQ34_eq_bpf2_h0_l(data)                                            (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ34_eq_bpf2_h0_l_src(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ34_get_eq_bpf2_h0_l(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ34_eq_bpf2_h0_r_shift                                            (0)
#define AIO_I_ADC_EQ34_eq_bpf2_h0_r_mask                                             (0x0000FFFF)
#define AIO_I_ADC_EQ34_eq_bpf2_h0_r(data)                                            (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ34_eq_bpf2_h0_r_src(data)                                        ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ34_get_eq_bpf2_h0_r(data)                                        ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ35                                                               0x98006708
#define AIO_I_ADC_EQ35_reg_addr                                                      "0xD8006708"
#define AIO_I_ADC_EQ35_reg                                                           0xD8006708
#define set_AIO_I_ADC_EQ35_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ35_reg)=data)
#define get_AIO_I_ADC_EQ35_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ35_reg))
#define AIO_I_ADC_EQ35_inst_adr                                                      "0x00C2"
#define AIO_I_ADC_EQ35_inst                                                          0x00C2
#define AIO_I_ADC_EQ35_eq_bpf2_a1_l_shift                                            (16)
#define AIO_I_ADC_EQ35_eq_bpf2_a1_l_mask                                             (0xFFFF0000)
#define AIO_I_ADC_EQ35_eq_bpf2_a1_l(data)                                            (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ35_eq_bpf2_a1_l_src(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ35_get_eq_bpf2_a1_l(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ35_eq_bpf2_a1_r_shift                                            (0)
#define AIO_I_ADC_EQ35_eq_bpf2_a1_r_mask                                             (0x0000FFFF)
#define AIO_I_ADC_EQ35_eq_bpf2_a1_r(data)                                            (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ35_eq_bpf2_a1_r_src(data)                                        ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ35_get_eq_bpf2_a1_r(data)                                        ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_EQ36                                                               0x9800670c
#define AIO_I_ADC_EQ36_reg_addr                                                      "0xD800670C"
#define AIO_I_ADC_EQ36_reg                                                           0xD800670C
#define set_AIO_I_ADC_EQ36_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_EQ36_reg)=data)
#define get_AIO_I_ADC_EQ36_reg   (*((volatile unsigned int*) AIO_I_ADC_EQ36_reg))
#define AIO_I_ADC_EQ36_inst_adr                                                      "0x00C3"
#define AIO_I_ADC_EQ36_inst                                                          0x00C3
#define AIO_I_ADC_EQ36_eq_bpf2_a2_l_shift                                            (16)
#define AIO_I_ADC_EQ36_eq_bpf2_a2_l_mask                                             (0xFFFF0000)
#define AIO_I_ADC_EQ36_eq_bpf2_a2_l(data)                                            (0xFFFF0000&((data)<<16))
#define AIO_I_ADC_EQ36_eq_bpf2_a2_l_src(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ36_get_eq_bpf2_a2_l(data)                                        ((0xFFFF0000&(data))>>16)
#define AIO_I_ADC_EQ36_eq_bpf2_a2_r_shift                                            (0)
#define AIO_I_ADC_EQ36_eq_bpf2_a2_r_mask                                             (0x0000FFFF)
#define AIO_I_ADC_EQ36_eq_bpf2_a2_r(data)                                            (0x0000FFFF&((data)<<0))
#define AIO_I_ADC_EQ36_eq_bpf2_a2_r_src(data)                                        ((0x0000FFFF&(data))>>0)
#define AIO_I_ADC_EQ36_get_eq_bpf2_a2_r(data)                                        ((0x0000FFFF&(data))>>0)


#define AIO_I_ADC_WIND1                                                              0x980066d4
#define AIO_I_ADC_WIND1_reg_addr                                                     "0xD80066D4"
#define AIO_I_ADC_WIND1_reg                                                          0xD80066D4
#define set_AIO_I_ADC_WIND1_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_WIND1_reg)=data)
#define get_AIO_I_ADC_WIND1_reg   (*((volatile unsigned int*) AIO_I_ADC_WIND1_reg))
#define AIO_I_ADC_WIND1_inst_adr                                                     "0x00B5"
#define AIO_I_ADC_WIND1_inst                                                         0x00B5
#define AIO_I_ADC_WIND1_en_wnr_shift                                                 (31)
#define AIO_I_ADC_WIND1_en_wnr_mask                                                  (0x80000000)
#define AIO_I_ADC_WIND1_en_wnr(data)                                                 (0x80000000&((data)<<31))
#define AIO_I_ADC_WIND1_en_wnr_src(data)                                             ((0x80000000&(data))>>31)
#define AIO_I_ADC_WIND1_get_en_wnr(data)                                             ((0x80000000&(data))>>31)
#define AIO_I_ADC_WIND1_en_wnr_fb_det_shift                                          (30)
#define AIO_I_ADC_WIND1_en_wnr_fb_det_mask                                           (0x40000000)
#define AIO_I_ADC_WIND1_en_wnr_fb_det(data)                                          (0x40000000&((data)<<30))
#define AIO_I_ADC_WIND1_en_wnr_fb_det_src(data)                                      ((0x40000000&(data))>>30)
#define AIO_I_ADC_WIND1_get_en_wnr_fb_det(data)                                      ((0x40000000&(data))>>30)
#define AIO_I_ADC_WIND1_sel_hpf_fc_shift                                             (24)
#define AIO_I_ADC_WIND1_sel_hpf_fc_mask                                              (0x3F000000)
#define AIO_I_ADC_WIND1_sel_hpf_fc(data)                                             (0x3F000000&((data)<<24))
#define AIO_I_ADC_WIND1_sel_hpf_fc_src(data)                                         ((0x3F000000&(data))>>24)
#define AIO_I_ADC_WIND1_get_sel_hpf_fc(data)                                         ((0x3F000000&(data))>>24)
#define AIO_I_ADC_WIND1_sel_wnr_dc_corner_shift                                      (22)
#define AIO_I_ADC_WIND1_sel_wnr_dc_corner_mask                                       (0x00C00000)
#define AIO_I_ADC_WIND1_sel_wnr_dc_corner(data)                                      (0x00C00000&((data)<<22))
#define AIO_I_ADC_WIND1_sel_wnr_dc_corner_src(data)                                  ((0x00C00000&(data))>>22)
#define AIO_I_ADC_WIND1_get_sel_wnr_dc_corner(data)                                  ((0x00C00000&(data))>>22)
#define AIO_I_ADC_WIND1_sel_wnr_hi_corner_shift                                      (16)
#define AIO_I_ADC_WIND1_sel_wnr_hi_corner_mask                                       (0x003F0000)
#define AIO_I_ADC_WIND1_sel_wnr_hi_corner(data)                                      (0x003F0000&((data)<<16))
#define AIO_I_ADC_WIND1_sel_wnr_hi_corner_src(data)                                  ((0x003F0000&(data))>>16)
#define AIO_I_ADC_WIND1_get_sel_wnr_hi_corner(data)                                  ((0x003F0000&(data))>>16)
#define AIO_I_ADC_WIND1_sel_wnr_lo_corner_shift                                      (10)
#define AIO_I_ADC_WIND1_sel_wnr_lo_corner_mask                                       (0x0000FC00)
#define AIO_I_ADC_WIND1_sel_wnr_lo_corner(data)                                      (0x0000FC00&((data)<<10))
#define AIO_I_ADC_WIND1_sel_wnr_lo_corner_src(data)                                  ((0x0000FC00&(data))>>10)
#define AIO_I_ADC_WIND1_get_sel_wnr_lo_corner(data)                                  ((0x0000FC00&(data))>>10)
#define AIO_I_ADC_WIND1_sel_wnr_smth_corner_shift                                    (8)
#define AIO_I_ADC_WIND1_sel_wnr_smth_corner_mask                                     (0x00000300)
#define AIO_I_ADC_WIND1_sel_wnr_smth_corner(data)                                    (0x00000300&((data)<<8))
#define AIO_I_ADC_WIND1_sel_wnr_smth_corner_src(data)                                ((0x00000300&(data))>>8)
#define AIO_I_ADC_WIND1_get_sel_wnr_smth_corner(data)                                ((0x00000300&(data))>>8)
#define AIO_I_ADC_WIND1_sel_wnr_log_offset_shift                                     (5)
#define AIO_I_ADC_WIND1_sel_wnr_log_offset_mask                                      (0x000000E0)
#define AIO_I_ADC_WIND1_sel_wnr_log_offset(data)                                     (0x000000E0&((data)<<5))
#define AIO_I_ADC_WIND1_sel_wnr_log_offset_src(data)                                 ((0x000000E0&(data))>>5)
#define AIO_I_ADC_WIND1_get_sel_wnr_log_offset(data)                                 ((0x000000E0&(data))>>5)


#define AIO_I_ADC_WIND2                                                              0x980066d8
#define AIO_I_ADC_WIND2_reg_addr                                                     "0xD80066D8"
#define AIO_I_ADC_WIND2_reg                                                          0xD80066D8
#define set_AIO_I_ADC_WIND2_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_WIND2_reg)=data)
#define get_AIO_I_ADC_WIND2_reg   (*((volatile unsigned int*) AIO_I_ADC_WIND2_reg))
#define AIO_I_ADC_WIND2_inst_adr                                                     "0x00B6"
#define AIO_I_ADC_WIND2_inst                                                         0x00B6
#define AIO_I_ADC_WIND2_sel_wnr_fc_nowind_shift                                      (26)
#define AIO_I_ADC_WIND2_sel_wnr_fc_nowind_mask                                       (0xFC000000)
#define AIO_I_ADC_WIND2_sel_wnr_fc_nowind(data)                                      (0xFC000000&((data)<<26))
#define AIO_I_ADC_WIND2_sel_wnr_fc_nowind_src(data)                                  ((0xFC000000&(data))>>26)
#define AIO_I_ADC_WIND2_get_sel_wnr_fc_nowind(data)                                  ((0xFC000000&(data))>>26)
#define AIO_I_ADC_WIND2_sel_wnr_fc_breeze_shift                                      (20)
#define AIO_I_ADC_WIND2_sel_wnr_fc_breeze_mask                                       (0x03F00000)
#define AIO_I_ADC_WIND2_sel_wnr_fc_breeze(data)                                      (0x03F00000&((data)<<20))
#define AIO_I_ADC_WIND2_sel_wnr_fc_breeze_src(data)                                  ((0x03F00000&(data))>>20)
#define AIO_I_ADC_WIND2_get_sel_wnr_fc_breeze(data)                                  ((0x03F00000&(data))>>20)
#define AIO_I_ADC_WIND2_sel_wnr_fc_storm_shift                                       (14)
#define AIO_I_ADC_WIND2_sel_wnr_fc_storm_mask                                        (0x000FC000)
#define AIO_I_ADC_WIND2_sel_wnr_fc_storm(data)                                       (0x000FC000&((data)<<14))
#define AIO_I_ADC_WIND2_sel_wnr_fc_storm_src(data)                                   ((0x000FC000&(data))>>14)
#define AIO_I_ADC_WIND2_get_sel_wnr_fc_storm(data)                                   ((0x000FC000&(data))>>14)


#define AIO_I_ADC_WIND3                                                              0x980066dc
#define AIO_I_ADC_WIND3_reg_addr                                                     "0xD80066DC"
#define AIO_I_ADC_WIND3_reg                                                          0xD80066DC
#define set_AIO_I_ADC_WIND3_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_WIND3_reg)=data)
#define get_AIO_I_ADC_WIND3_reg   (*((volatile unsigned int*) AIO_I_ADC_WIND3_reg))
#define AIO_I_ADC_WIND3_inst_adr                                                     "0x00B7"
#define AIO_I_ADC_WIND3_inst                                                         0x00B7
#define AIO_I_ADC_WIND3_sel_wnr_ff_th_lo_shift                                       (22)
#define AIO_I_ADC_WIND3_sel_wnr_ff_th_lo_mask                                        (0xFFC00000)
#define AIO_I_ADC_WIND3_sel_wnr_ff_th_lo(data)                                       (0xFFC00000&((data)<<22))
#define AIO_I_ADC_WIND3_sel_wnr_ff_th_lo_src(data)                                   ((0xFFC00000&(data))>>22)
#define AIO_I_ADC_WIND3_get_sel_wnr_ff_th_lo(data)                                   ((0xFFC00000&(data))>>22)
#define AIO_I_ADC_WIND3_sel_wnr_ff_th_hi_shift                                       (12)
#define AIO_I_ADC_WIND3_sel_wnr_ff_th_hi_mask                                        (0x003FF000)
#define AIO_I_ADC_WIND3_sel_wnr_ff_th_hi(data)                                       (0x003FF000&((data)<<12))
#define AIO_I_ADC_WIND3_sel_wnr_ff_th_hi_src(data)                                   ((0x003FF000&(data))>>12)
#define AIO_I_ADC_WIND3_get_sel_wnr_ff_th_hi(data)                                   ((0x003FF000&(data))>>12)


#define AIO_I_ADC_WIND4                                                              0x980066e0
#define AIO_I_ADC_WIND4_reg_addr                                                     "0xD80066E0"
#define AIO_I_ADC_WIND4_reg                                                          0xD80066E0
#define set_AIO_I_ADC_WIND4_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_WIND4_reg)=data)
#define get_AIO_I_ADC_WIND4_reg   (*((volatile unsigned int*) AIO_I_ADC_WIND4_reg))
#define AIO_I_ADC_WIND4_inst_adr                                                     "0x00B8"
#define AIO_I_ADC_WIND4_inst                                                         0x00B8
#define AIO_I_ADC_WIND4_sel_wnr_fb_th_1_shift                                        (22)
#define AIO_I_ADC_WIND4_sel_wnr_fb_th_1_mask                                         (0xFFC00000)
#define AIO_I_ADC_WIND4_sel_wnr_fb_th_1(data)                                        (0xFFC00000&((data)<<22))
#define AIO_I_ADC_WIND4_sel_wnr_fb_th_1_src(data)                                    ((0xFFC00000&(data))>>22)
#define AIO_I_ADC_WIND4_get_sel_wnr_fb_th_1(data)                                    ((0xFFC00000&(data))>>22)
#define AIO_I_ADC_WIND4_sel_wnr_fb_th_2_shift                                        (12)
#define AIO_I_ADC_WIND4_sel_wnr_fb_th_2_mask                                         (0x003FF000)
#define AIO_I_ADC_WIND4_sel_wnr_fb_th_2(data)                                        (0x003FF000&((data)<<12))
#define AIO_I_ADC_WIND4_sel_wnr_fb_th_2_src(data)                                    ((0x003FF000&(data))>>12)
#define AIO_I_ADC_WIND4_get_sel_wnr_fb_th_2(data)                                    ((0x003FF000&(data))>>12)


#define AIO_I_ADC_WIND5                                                              0x980066e4
#define AIO_I_ADC_WIND5_reg_addr                                                     "0xD80066E4"
#define AIO_I_ADC_WIND5_reg                                                          0xD80066E4
#define set_AIO_I_ADC_WIND5_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_WIND5_reg)=data)
#define get_AIO_I_ADC_WIND5_reg   (*((volatile unsigned int*) AIO_I_ADC_WIND5_reg))
#define AIO_I_ADC_WIND5_inst_adr                                                     "0x00B9"
#define AIO_I_ADC_WIND5_inst                                                         0x00B9
#define AIO_I_ADC_WIND5_sel_wnr_weak_ratio_shift                                     (29)
#define AIO_I_ADC_WIND5_sel_wnr_weak_ratio_mask                                      (0xE0000000)
#define AIO_I_ADC_WIND5_sel_wnr_weak_ratio(data)                                     (0xE0000000&((data)<<29))
#define AIO_I_ADC_WIND5_sel_wnr_weak_ratio_src(data)                                 ((0xE0000000&(data))>>29)
#define AIO_I_ADC_WIND5_get_sel_wnr_weak_ratio(data)                                 ((0xE0000000&(data))>>29)
#define AIO_I_ADC_WIND5_sel_wnr_strong_ratio_shift                                   (26)
#define AIO_I_ADC_WIND5_sel_wnr_strong_ratio_mask                                    (0x1C000000)
#define AIO_I_ADC_WIND5_sel_wnr_strong_ratio(data)                                   (0x1C000000&((data)<<26))
#define AIO_I_ADC_WIND5_sel_wnr_strong_ratio_src(data)                               ((0x1C000000&(data))>>26)
#define AIO_I_ADC_WIND5_get_sel_wnr_strong_ratio(data)                               ((0x1C000000&(data))>>26)
#define AIO_I_ADC_WIND5_sel_wnr_att_rate_shift                                       (22)
#define AIO_I_ADC_WIND5_sel_wnr_att_rate_mask                                        (0x03C00000)
#define AIO_I_ADC_WIND5_sel_wnr_att_rate(data)                                       (0x03C00000&((data)<<22))
#define AIO_I_ADC_WIND5_sel_wnr_att_rate_src(data)                                   ((0x03C00000&(data))>>22)
#define AIO_I_ADC_WIND5_get_sel_wnr_att_rate(data)                                   ((0x03C00000&(data))>>22)
#define AIO_I_ADC_WIND5_sel_wnr_rel_rate_shift                                       (18)
#define AIO_I_ADC_WIND5_sel_wnr_rel_rate_mask                                        (0x003C0000)
#define AIO_I_ADC_WIND5_sel_wnr_rel_rate(data)                                       (0x003C0000&((data)<<18))
#define AIO_I_ADC_WIND5_sel_wnr_rel_rate_src(data)                                   ((0x003C0000&(data))>>18)
#define AIO_I_ADC_WIND5_get_sel_wnr_rel_rate(data)                                   ((0x003C0000&(data))>>18)
#define AIO_I_ADC_WIND5_en_wnr_gat_shift                                             (17)
#define AIO_I_ADC_WIND5_en_wnr_gat_mask                                              (0x00020000)
#define AIO_I_ADC_WIND5_en_wnr_gat(data)                                             (0x00020000&((data)<<17))
#define AIO_I_ADC_WIND5_en_wnr_gat_src(data)                                         ((0x00020000&(data))>>17)
#define AIO_I_ADC_WIND5_get_en_wnr_gat(data)                                         ((0x00020000&(data))>>17)
#define AIO_I_ADC_WIND5_fg_wnr_load_shift                                            (16)
#define AIO_I_ADC_WIND5_fg_wnr_load_mask                                             (0x00010000)
#define AIO_I_ADC_WIND5_fg_wnr_load(data)                                            (0x00010000&((data)<<16))
#define AIO_I_ADC_WIND5_fg_wnr_load_src(data)                                        ((0x00010000&(data))>>16)
#define AIO_I_ADC_WIND5_get_fg_wnr_load(data)                                        ((0x00010000&(data))>>16)
#define AIO_I_ADC_WIND5_fg_wnr_wind_shift                                            (15)
#define AIO_I_ADC_WIND5_fg_wnr_wind_mask                                             (0x00008000)
#define AIO_I_ADC_WIND5_fg_wnr_wind(data)                                            (0x00008000&((data)<<15))
#define AIO_I_ADC_WIND5_fg_wnr_wind_src(data)                                        ((0x00008000&(data))>>15)
#define AIO_I_ADC_WIND5_get_fg_wnr_wind(data)                                        ((0x00008000&(data))>>15)
#define AIO_I_ADC_WIND5_fg_wnr_strong_shift                                          (14)
#define AIO_I_ADC_WIND5_fg_wnr_strong_mask                                           (0x00004000)
#define AIO_I_ADC_WIND5_fg_wnr_strong(data)                                          (0x00004000&((data)<<14))
#define AIO_I_ADC_WIND5_fg_wnr_strong_src(data)                                      ((0x00004000&(data))>>14)
#define AIO_I_ADC_WIND5_get_fg_wnr_strong(data)                                      ((0x00004000&(data))>>14)


#define AIO_I_ADC_WIND6                                                              0x980066e8
#define AIO_I_ADC_WIND6_reg_addr                                                     "0xD80066E8"
#define AIO_I_ADC_WIND6_reg                                                          0xD80066E8
#define set_AIO_I_ADC_WIND6_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_WIND6_reg)=data)
#define get_AIO_I_ADC_WIND6_reg   (*((volatile unsigned int*) AIO_I_ADC_WIND6_reg))
#define AIO_I_ADC_WIND6_inst_adr                                                     "0x00BA"
#define AIO_I_ADC_WIND6_inst                                                         0x00BA
#define AIO_I_ADC_WIND6_log_hi_lv_shift                                              (22)
#define AIO_I_ADC_WIND6_log_hi_lv_mask                                               (0xFFC00000)
#define AIO_I_ADC_WIND6_log_hi_lv(data)                                              (0xFFC00000&((data)<<22))
#define AIO_I_ADC_WIND6_log_hi_lv_src(data)                                          ((0xFFC00000&(data))>>22)
#define AIO_I_ADC_WIND6_get_log_hi_lv(data)                                          ((0xFFC00000&(data))>>22)
#define AIO_I_ADC_WIND6_log_lo_lv_shift                                              (12)
#define AIO_I_ADC_WIND6_log_lo_lv_mask                                               (0x003FF000)
#define AIO_I_ADC_WIND6_log_lo_lv(data)                                              (0x003FF000&((data)<<12))
#define AIO_I_ADC_WIND6_log_lo_lv_src(data)                                          ((0x003FF000&(data))>>12)
#define AIO_I_ADC_WIND6_get_log_lo_lv(data)                                          ((0x003FF000&(data))>>12)


#define AIO_I_ADC_WIND7                                                              0x980066ec
#define AIO_I_ADC_WIND7_reg_addr                                                     "0xD80066EC"
#define AIO_I_ADC_WIND7_reg                                                          0xD80066EC
#define set_AIO_I_ADC_WIND7_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_WIND7_reg)=data)
#define get_AIO_I_ADC_WIND7_reg   (*((volatile unsigned int*) AIO_I_ADC_WIND7_reg))
#define AIO_I_ADC_WIND7_inst_adr                                                     "0x00BB"
#define AIO_I_ADC_WIND7_inst                                                         0x00BB
#define AIO_I_ADC_WIND7_wnr_hpf_coef_shift                                           (26)
#define AIO_I_ADC_WIND7_wnr_hpf_coef_mask                                            (0xFC000000)
#define AIO_I_ADC_WIND7_wnr_hpf_coef(data)                                           (0xFC000000&((data)<<26))
#define AIO_I_ADC_WIND7_wnr_hpf_coef_src(data)                                       ((0xFC000000&(data))>>26)
#define AIO_I_ADC_WIND7_get_wnr_hpf_coef(data)                                       ((0xFC000000&(data))>>26)
#define AIO_I_ADC_WIND7_wnr_hpf_coef_l_sel_shift                                     (23)
#define AIO_I_ADC_WIND7_wnr_hpf_coef_l_sel_mask                                      (0x03800000)
#define AIO_I_ADC_WIND7_wnr_hpf_coef_l_sel(data)                                     (0x03800000&((data)<<23))
#define AIO_I_ADC_WIND7_wnr_hpf_coef_l_sel_src(data)                                 ((0x03800000&(data))>>23)
#define AIO_I_ADC_WIND7_get_wnr_hpf_coef_l_sel(data)                                 ((0x03800000&(data))>>23)
#define AIO_I_ADC_WIND7_wnr_hpf_coef_r_sel_shift                                     (20)
#define AIO_I_ADC_WIND7_wnr_hpf_coef_r_sel_mask                                      (0x00700000)
#define AIO_I_ADC_WIND7_wnr_hpf_coef_r_sel(data)                                     (0x00700000&((data)<<20))
#define AIO_I_ADC_WIND7_wnr_hpf_coef_r_sel_src(data)                                 ((0x00700000&(data))>>20)
#define AIO_I_ADC_WIND7_get_wnr_hpf_coef_r_sel(data)                                 ((0x00700000&(data))>>20)
#define AIO_I_ADC_WIND7_wnr_hpf_2nd_en_shift                                         (19)
#define AIO_I_ADC_WIND7_wnr_hpf_2nd_en_mask                                          (0x00080000)
#define AIO_I_ADC_WIND7_wnr_hpf_2nd_en(data)                                         (0x00080000&((data)<<19))
#define AIO_I_ADC_WIND7_wnr_hpf_2nd_en_src(data)                                     ((0x00080000&(data))>>19)
#define AIO_I_ADC_WIND7_get_wnr_hpf_2nd_en(data)                                     ((0x00080000&(data))>>19)
#define AIO_I_ADC_WIND7_wnr_zdet_tout_shift                                          (17)
#define AIO_I_ADC_WIND7_wnr_zdet_tout_mask                                           (0x00060000)
#define AIO_I_ADC_WIND7_wnr_zdet_tout(data)                                          (0x00060000&((data)<<17))
#define AIO_I_ADC_WIND7_wnr_zdet_tout_src(data)                                      ((0x00060000&(data))>>17)
#define AIO_I_ADC_WIND7_get_wnr_zdet_tout(data)                                      ((0x00060000&(data))>>17)
#define AIO_I_ADC_WIND7_wnr_zdet_func_shift                                          (15)
#define AIO_I_ADC_WIND7_wnr_zdet_func_mask                                           (0x00018000)
#define AIO_I_ADC_WIND7_wnr_zdet_func(data)                                          (0x00018000&((data)<<15))
#define AIO_I_ADC_WIND7_wnr_zdet_func_src(data)                                      ((0x00018000&(data))>>15)
#define AIO_I_ADC_WIND7_get_wnr_zdet_func(data)                                      ((0x00018000&(data))>>15)


#define AIO_I_ADC_ADC1                                                               0x980066f0
#define AIO_I_ADC_ADC1_reg_addr                                                      "0xD80066F0"
#define AIO_I_ADC_ADC1_reg                                                           0xD80066F0
#define set_AIO_I_ADC_ADC1_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_ADC1_reg)=data)
#define get_AIO_I_ADC_ADC1_reg   (*((volatile unsigned int*) AIO_I_ADC_ADC1_reg))
#define AIO_I_ADC_ADC1_inst_adr                                                      "0x00BC"
#define AIO_I_ADC_ADC1_inst                                                          0x00BC
#define AIO_I_ADC_ADC1_dmic_lp_en_shift                                              (31)
#define AIO_I_ADC_ADC1_dmic_lp_en_mask                                               (0x80000000)
#define AIO_I_ADC_ADC1_dmic_lp_en(data)                                              (0x80000000&((data)<<31))
#define AIO_I_ADC_ADC1_dmic_lp_en_src(data)                                          ((0x80000000&(data))>>31)
#define AIO_I_ADC_ADC1_get_dmic_lp_en(data)                                          ((0x80000000&(data))>>31)
#define AIO_I_ADC_ADC1_dmicl_ri_fa_sel_shift                                         (30)
#define AIO_I_ADC_ADC1_dmicl_ri_fa_sel_mask                                          (0x40000000)
#define AIO_I_ADC_ADC1_dmicl_ri_fa_sel(data)                                         (0x40000000&((data)<<30))
#define AIO_I_ADC_ADC1_dmicl_ri_fa_sel_src(data)                                     ((0x40000000&(data))>>30)
#define AIO_I_ADC_ADC1_get_dmicl_ri_fa_sel(data)                                     ((0x40000000&(data))>>30)
#define AIO_I_ADC_ADC1_dmicr_ri_fa_sel_shift                                         (29)
#define AIO_I_ADC_ADC1_dmicr_ri_fa_sel_mask                                          (0x20000000)
#define AIO_I_ADC_ADC1_dmicr_ri_fa_sel(data)                                         (0x20000000&((data)<<29))
#define AIO_I_ADC_ADC1_dmicr_ri_fa_sel_src(data)                                     ((0x20000000&(data))>>29)
#define AIO_I_ADC_ADC1_get_dmicr_ri_fa_sel(data)                                     ((0x20000000&(data))>>29)
#define AIO_I_ADC_ADC1_dmic_src_en_shift                                             (28)
#define AIO_I_ADC_ADC1_dmic_src_en_mask                                              (0x10000000)
#define AIO_I_ADC_ADC1_dmic_src_en(data)                                             (0x10000000&((data)<<28))
#define AIO_I_ADC_ADC1_dmic_src_en_src(data)                                         ((0x10000000&(data))>>28)
#define AIO_I_ADC_ADC1_get_dmic_src_en(data)                                         ((0x10000000&(data))>>28)
#define AIO_I_ADC_ADC1_dmic_lpf1st_fc_sel_shift                                      (26)
#define AIO_I_ADC_ADC1_dmic_lpf1st_fc_sel_mask                                       (0x0C000000)
#define AIO_I_ADC_ADC1_dmic_lpf1st_fc_sel(data)                                      (0x0C000000&((data)<<26))
#define AIO_I_ADC_ADC1_dmic_lpf1st_fc_sel_src(data)                                  ((0x0C000000&(data))>>26)
#define AIO_I_ADC_ADC1_get_dmic_lpf1st_fc_sel(data)                                  ((0x0C000000&(data))>>26)
#define AIO_I_ADC_ADC1_daad_lp_en_shift                                              (25)
#define AIO_I_ADC_ADC1_daad_lp_en_mask                                               (0x02000000)
#define AIO_I_ADC_ADC1_daad_lp_en(data)                                              (0x02000000&((data)<<25))
#define AIO_I_ADC_ADC1_daad_lp_en_src(data)                                          ((0x02000000&(data))>>25)
#define AIO_I_ADC_ADC1_get_daad_lp_en(data)                                          ((0x02000000&(data))>>25)
#define AIO_I_ADC_ADC1_ad_lr_sel_shift                                               (23)
#define AIO_I_ADC_ADC1_ad_lr_sel_mask                                                (0x01800000)
#define AIO_I_ADC_ADC1_ad_lr_sel(data)                                               (0x01800000&((data)<<23))
#define AIO_I_ADC_ADC1_ad_lr_sel_src(data)                                           ((0x01800000&(data))>>23)
#define AIO_I_ADC_ADC1_get_ad_lr_sel(data)                                           ((0x01800000&(data))>>23)
#define AIO_I_ADC_ADC1_ad_mix_mute_l_shift                                           (22)
#define AIO_I_ADC_ADC1_ad_mix_mute_l_mask                                            (0x00400000)
#define AIO_I_ADC_ADC1_ad_mix_mute_l(data)                                           (0x00400000&((data)<<22))
#define AIO_I_ADC_ADC1_ad_mix_mute_l_src(data)                                       ((0x00400000&(data))>>22)
#define AIO_I_ADC_ADC1_get_ad_mix_mute_l(data)                                       ((0x00400000&(data))>>22)
#define AIO_I_ADC_ADC1_ad_mix_mute_r_shift                                           (21)
#define AIO_I_ADC_ADC1_ad_mix_mute_r_mask                                            (0x00200000)
#define AIO_I_ADC_ADC1_ad_mix_mute_r(data)                                           (0x00200000&((data)<<21))
#define AIO_I_ADC_ADC1_ad_mix_mute_r_src(data)                                       ((0x00200000&(data))>>21)
#define AIO_I_ADC_ADC1_get_ad_mix_mute_r(data)                                       ((0x00200000&(data))>>21)
#define AIO_I_ADC_ADC1_dmic_mix_mute_l_shift                                         (20)
#define AIO_I_ADC_ADC1_dmic_mix_mute_l_mask                                          (0x00100000)
#define AIO_I_ADC_ADC1_dmic_mix_mute_l(data)                                         (0x00100000&((data)<<20))
#define AIO_I_ADC_ADC1_dmic_mix_mute_l_src(data)                                     ((0x00100000&(data))>>20)
#define AIO_I_ADC_ADC1_get_dmic_mix_mute_l(data)                                     ((0x00100000&(data))>>20)
#define AIO_I_ADC_ADC1_dmic_mix_mute_r_shift                                         (19)
#define AIO_I_ADC_ADC1_dmic_mix_mute_r_mask                                          (0x00080000)
#define AIO_I_ADC_ADC1_dmic_mix_mute_r(data)                                         (0x00080000&((data)<<19))
#define AIO_I_ADC_ADC1_dmic_mix_mute_r_src(data)                                     ((0x00080000&(data))>>19)
#define AIO_I_ADC_ADC1_get_dmic_mix_mute_r(data)                                     ((0x00080000&(data))>>19)
#define AIO_I_ADC_ADC1_ad_hpf_en_shift                                               (18)
#define AIO_I_ADC_ADC1_ad_hpf_en_mask                                                (0x00040000)
#define AIO_I_ADC_ADC1_ad_hpf_en(data)                                               (0x00040000&((data)<<18))
#define AIO_I_ADC_ADC1_ad_hpf_en_src(data)                                           ((0x00040000&(data))>>18)
#define AIO_I_ADC_ADC1_get_ad_hpf_en(data)                                           ((0x00040000&(data))>>18)
#define AIO_I_ADC_ADC1_ad_hpf_coef_shift                                             (15)
#define AIO_I_ADC_ADC1_ad_hpf_coef_mask                                              (0x00038000)
#define AIO_I_ADC_ADC1_ad_hpf_coef(data)                                             (0x00038000&((data)<<15))
#define AIO_I_ADC_ADC1_ad_hpf_coef_src(data)                                         ((0x00038000&(data))>>15)
#define AIO_I_ADC_ADC1_get_ad_hpf_coef(data)                                         ((0x00038000&(data))>>15)
#define AIO_I_ADC_ADC1_ad_comp_gain_shift                                            (13)
#define AIO_I_ADC_ADC1_ad_comp_gain_mask                                             (0x00006000)
#define AIO_I_ADC_ADC1_ad_comp_gain(data)                                            (0x00006000&((data)<<13))
#define AIO_I_ADC_ADC1_ad_comp_gain_src(data)                                        ((0x00006000&(data))>>13)
#define AIO_I_ADC_ADC1_get_ad_comp_gain(data)                                        ((0x00006000&(data))>>13)


#define AIO_I_ADC_ADC2                                                               0x980066f4
#define AIO_I_ADC_ADC2_reg_addr                                                      "0xD80066F4"
#define AIO_I_ADC_ADC2_reg                                                           0xD80066F4
#define set_AIO_I_ADC_ADC2_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_ADC2_reg)=data)
#define get_AIO_I_ADC_ADC2_reg   (*((volatile unsigned int*) AIO_I_ADC_ADC2_reg))
#define AIO_I_ADC_ADC2_inst_adr                                                      "0x00BD"
#define AIO_I_ADC_ADC2_inst                                                          0x00BD
#define AIO_I_ADC_ADC2_ad_mute_l_shift                                               (31)
#define AIO_I_ADC_ADC2_ad_mute_l_mask                                                (0x80000000)
#define AIO_I_ADC_ADC2_ad_mute_l(data)                                               (0x80000000&((data)<<31))
#define AIO_I_ADC_ADC2_ad_mute_l_src(data)                                           ((0x80000000&(data))>>31)
#define AIO_I_ADC_ADC2_get_ad_mute_l(data)                                           ((0x80000000&(data))>>31)
#define AIO_I_ADC_ADC2_ad_mute_r_shift                                               (30)
#define AIO_I_ADC_ADC2_ad_mute_r_mask                                                (0x40000000)
#define AIO_I_ADC_ADC2_ad_mute_r(data)                                               (0x40000000&((data)<<30))
#define AIO_I_ADC_ADC2_ad_mute_r_src(data)                                           ((0x40000000&(data))>>30)
#define AIO_I_ADC_ADC2_get_ad_mute_r(data)                                           ((0x40000000&(data))>>30)
#define AIO_I_ADC_ADC2_ad_zdet_func_shift                                            (28)
#define AIO_I_ADC_ADC2_ad_zdet_func_mask                                             (0x30000000)
#define AIO_I_ADC_ADC2_ad_zdet_func(data)                                            (0x30000000&((data)<<28))
#define AIO_I_ADC_ADC2_ad_zdet_func_src(data)                                        ((0x30000000&(data))>>28)
#define AIO_I_ADC_ADC2_get_ad_zdet_func(data)                                        ((0x30000000&(data))>>28)
#define AIO_I_ADC_ADC2_ad_zdet_tout_shift                                            (26)
#define AIO_I_ADC_ADC2_ad_zdet_tout_mask                                             (0x0C000000)
#define AIO_I_ADC_ADC2_ad_zdet_tout(data)                                            (0x0C000000&((data)<<26))
#define AIO_I_ADC_ADC2_ad_zdet_tout_src(data)                                        ((0x0C000000&(data))>>26)
#define AIO_I_ADC_ADC2_get_ad_zdet_tout(data)                                        ((0x0C000000&(data))>>26)
#define AIO_I_ADC_ADC2_dmic_boost_en_shift                                           (25)
#define AIO_I_ADC_ADC2_dmic_boost_en_mask                                            (0x02000000)
#define AIO_I_ADC_ADC2_dmic_boost_en(data)                                           (0x02000000&((data)<<25))
#define AIO_I_ADC_ADC2_dmic_boost_en_src(data)                                       ((0x02000000&(data))>>25)
#define AIO_I_ADC_ADC2_get_dmic_boost_en(data)                                       ((0x02000000&(data))>>25)
#define AIO_I_ADC_ADC2_dmic_boost_gain_l_shift                                       (23)
#define AIO_I_ADC_ADC2_dmic_boost_gain_l_mask                                        (0x01800000)
#define AIO_I_ADC_ADC2_dmic_boost_gain_l(data)                                       (0x01800000&((data)<<23))
#define AIO_I_ADC_ADC2_dmic_boost_gain_l_src(data)                                   ((0x01800000&(data))>>23)
#define AIO_I_ADC_ADC2_get_dmic_boost_gain_l(data)                                   ((0x01800000&(data))>>23)
#define AIO_I_ADC_ADC2_dmic_boost_gain_r_shift                                       (21)
#define AIO_I_ADC_ADC2_dmic_boost_gain_r_mask                                        (0x00600000)
#define AIO_I_ADC_ADC2_dmic_boost_gain_r(data)                                       (0x00600000&((data)<<21))
#define AIO_I_ADC_ADC2_dmic_boost_gain_r_src(data)                                   ((0x00600000&(data))>>21)
#define AIO_I_ADC_ADC2_get_dmic_boost_gain_r(data)                                   ((0x00600000&(data))>>21)


#define AIO_I_ADC_ADC3                                                               0x98006714
#define AIO_I_ADC_ADC3_reg_addr                                                      "0xD8006714"
#define AIO_I_ADC_ADC3_reg                                                           0xD8006714
#define set_AIO_I_ADC_ADC3_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_ADC3_reg)=data)
#define get_AIO_I_ADC_ADC3_reg   (*((volatile unsigned int*) AIO_I_ADC_ADC3_reg))
#define AIO_I_ADC_ADC3_inst_adr                                                      "0x00C5"
#define AIO_I_ADC_ADC3_inst                                                          0x00C5
#define AIO_I_ADC_ADC3_ad_gain_l_shift                                               (25)
#define AIO_I_ADC_ADC3_ad_gain_l_mask                                                (0xFE000000)
#define AIO_I_ADC_ADC3_ad_gain_l(data)                                               (0xFE000000&((data)<<25))
#define AIO_I_ADC_ADC3_ad_gain_l_src(data)                                           ((0xFE000000&(data))>>25)
#define AIO_I_ADC_ADC3_get_ad_gain_l(data)                                           ((0xFE000000&(data))>>25)
#define AIO_I_ADC_ADC3_ad_gain_r_shift                                               (18)
#define AIO_I_ADC_ADC3_ad_gain_r_mask                                                (0x01FC0000)
#define AIO_I_ADC_ADC3_ad_gain_r(data)                                               (0x01FC0000&((data)<<18))
#define AIO_I_ADC_ADC3_ad_gain_r_src(data)                                           ((0x01FC0000&(data))>>18)
#define AIO_I_ADC_ADC3_get_ad_gain_r(data)                                           ((0x01FC0000&(data))>>18)


#define AIO_I_ADC_I2S                                                                0x980066f8
#define AIO_I_ADC_I2S_reg_addr                                                       "0xD80066F8"
#define AIO_I_ADC_I2S_reg                                                            0xD80066F8
#define set_AIO_I_ADC_I2S_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_I2S_reg)=data)
#define get_AIO_I_ADC_I2S_reg   (*((volatile unsigned int*) AIO_I_ADC_I2S_reg))
#define AIO_I_ADC_I2S_inst_adr                                                       "0x00BE"
#define AIO_I_ADC_I2S_inst                                                           0x00BE
#define AIO_I_ADC_I2S_adc_cmp_shift                                                  (30)
#define AIO_I_ADC_I2S_adc_cmp_mask                                                   (0xC0000000)
#define AIO_I_ADC_I2S_adc_cmp(data)                                                  (0xC0000000&((data)<<30))
#define AIO_I_ADC_I2S_adc_cmp_src(data)                                              ((0xC0000000&(data))>>30)
#define AIO_I_ADC_I2S_get_adc_cmp(data)                                              ((0xC0000000&(data))>>30)
#define AIO_I_ADC_I2S_i2s_data_format_sel_shift                                      (28)
#define AIO_I_ADC_I2S_i2s_data_format_sel_mask                                       (0x30000000)
#define AIO_I_ADC_I2S_i2s_data_format_sel(data)                                      (0x30000000&((data)<<28))
#define AIO_I_ADC_I2S_i2s_data_format_sel_src(data)                                  ((0x30000000&(data))>>28)
#define AIO_I_ADC_I2S_get_i2s_data_format_sel(data)                                  ((0x30000000&(data))>>28)
#define AIO_I_ADC_I2S_i2s_data_len_sel_shift                                         (26)
#define AIO_I_ADC_I2S_i2s_data_len_sel_mask                                          (0x0C000000)
#define AIO_I_ADC_I2S_i2s_data_len_sel(data)                                         (0x0C000000&((data)<<26))
#define AIO_I_ADC_I2S_i2s_data_len_sel_src(data)                                     ((0x0C000000&(data))>>26)
#define AIO_I_ADC_I2S_get_i2s_data_len_sel(data)                                     ((0x0C000000&(data))>>26)
#define AIO_I_ADC_I2S_inv_i2s_sclk_shift                                             (25)
#define AIO_I_ADC_I2S_inv_i2s_sclk_mask                                              (0x02000000)
#define AIO_I_ADC_I2S_inv_i2s_sclk(data)                                             (0x02000000&((data)<<25))
#define AIO_I_ADC_I2S_inv_i2s_sclk_src(data)                                         ((0x02000000&(data))>>25)
#define AIO_I_ADC_I2S_get_inv_i2s_sclk(data)                                         ((0x02000000&(data))>>25)
#define AIO_I_ADC_I2S_sel_i2s_rx_ch_shift                                            (23)
#define AIO_I_ADC_I2S_sel_i2s_rx_ch_mask                                             (0x01800000)
#define AIO_I_ADC_I2S_sel_i2s_rx_ch(data)                                            (0x01800000&((data)<<23))
#define AIO_I_ADC_I2S_sel_i2s_rx_ch_src(data)                                        ((0x01800000&(data))>>23)
#define AIO_I_ADC_I2S_get_sel_i2s_rx_ch(data)                                        ((0x01800000&(data))>>23)
#define AIO_I_ADC_I2S_fifo_policy_shift                                              (22)
#define AIO_I_ADC_I2S_fifo_policy_mask                                               (0x00400000)
#define AIO_I_ADC_I2S_fifo_policy(data)                                              (0x00400000&((data)<<22))
#define AIO_I_ADC_I2S_fifo_policy_src(data)                                          ((0x00400000&(data))>>22)
#define AIO_I_ADC_I2S_get_fifo_policy(data)                                          ((0x00400000&(data))>>22)
#define AIO_I_ADC_I2S_fullb_shift                                                    (21)
#define AIO_I_ADC_I2S_fullb_mask                                                     (0x00200000)
#define AIO_I_ADC_I2S_fullb(data)                                                    (0x00200000&((data)<<21))
#define AIO_I_ADC_I2S_fullb_src(data)                                                ((0x00200000&(data))>>21)
#define AIO_I_ADC_I2S_get_fullb(data)                                                ((0x00200000&(data))>>21)
#define AIO_I_ADC_I2S_emptyb_shift                                                   (20)
#define AIO_I_ADC_I2S_emptyb_mask                                                    (0x00100000)
#define AIO_I_ADC_I2S_emptyb(data)                                                   (0x00100000&((data)<<20))
#define AIO_I_ADC_I2S_emptyb_src(data)                                               ((0x00100000&(data))>>20)
#define AIO_I_ADC_I2S_get_emptyb(data)                                               ((0x00100000&(data))>>20)


#define AIO_I_ADC_TCON                                                               0x980066fc
#define AIO_I_ADC_TCON_reg_addr                                                      "0xD80066FC"
#define AIO_I_ADC_TCON_reg                                                           0xD80066FC
#define set_AIO_I_ADC_TCON_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_TCON_reg)=data)
#define get_AIO_I_ADC_TCON_reg   (*((volatile unsigned int*) AIO_I_ADC_TCON_reg))
#define AIO_I_ADC_TCON_inst_adr                                                      "0x00BF"
#define AIO_I_ADC_TCON_inst                                                          0x00BF
#define AIO_I_ADC_TCON_dac_sample_rate_shift                                         (28)
#define AIO_I_ADC_TCON_dac_sample_rate_mask                                          (0xF0000000)
#define AIO_I_ADC_TCON_dac_sample_rate(data)                                         (0xF0000000&((data)<<28))
#define AIO_I_ADC_TCON_dac_sample_rate_src(data)                                     ((0xF0000000&(data))>>28)
#define AIO_I_ADC_TCON_get_dac_sample_rate(data)                                     ((0xF0000000&(data))>>28)
#define AIO_I_ADC_TCON_adc_sample_rate_shift                                         (24)
#define AIO_I_ADC_TCON_adc_sample_rate_mask                                          (0x0F000000)
#define AIO_I_ADC_TCON_adc_sample_rate(data)                                         (0x0F000000&((data)<<24))
#define AIO_I_ADC_TCON_adc_sample_rate_src(data)                                     ((0x0F000000&(data))>>24)
#define AIO_I_ADC_TCON_get_adc_sample_rate(data)                                     ((0x0F000000&(data))>>24)
#define AIO_I_ADC_TCON_dimc_clock_sel_shift                                          (21)
#define AIO_I_ADC_TCON_dimc_clock_sel_mask                                           (0x00E00000)
#define AIO_I_ADC_TCON_dimc_clock_sel(data)                                          (0x00E00000&((data)<<21))
#define AIO_I_ADC_TCON_dimc_clock_sel_src(data)                                      ((0x00E00000&(data))>>21)
#define AIO_I_ADC_TCON_get_dimc_clock_sel(data)                                      ((0x00E00000&(data))>>21)
#define AIO_I_ADC_TCON_da_clk_en_shift                                               (20)
#define AIO_I_ADC_TCON_da_clk_en_mask                                                (0x00100000)
#define AIO_I_ADC_TCON_da_clk_en(data)                                               (0x00100000&((data)<<20))
#define AIO_I_ADC_TCON_da_clk_en_src(data)                                           ((0x00100000&(data))>>20)
#define AIO_I_ADC_TCON_get_da_clk_en(data)                                           ((0x00100000&(data))>>20)
#define AIO_I_ADC_TCON_da_ana_clk_en_shift                                           (19)
#define AIO_I_ADC_TCON_da_ana_clk_en_mask                                            (0x00080000)
#define AIO_I_ADC_TCON_da_ana_clk_en(data)                                           (0x00080000&((data)<<19))
#define AIO_I_ADC_TCON_da_ana_clk_en_src(data)                                       ((0x00080000&(data))>>19)
#define AIO_I_ADC_TCON_get_da_ana_clk_en(data)                                       ((0x00080000&(data))>>19)
#define AIO_I_ADC_TCON_mod_clk_en_shift                                              (18)
#define AIO_I_ADC_TCON_mod_clk_en_mask                                               (0x00040000)
#define AIO_I_ADC_TCON_mod_clk_en(data)                                              (0x00040000&((data)<<18))
#define AIO_I_ADC_TCON_mod_clk_en_src(data)                                          ((0x00040000&(data))>>18)
#define AIO_I_ADC_TCON_get_mod_clk_en(data)                                          ((0x00040000&(data))>>18)
#define AIO_I_ADC_TCON_ad_clk_en_shift                                               (17)
#define AIO_I_ADC_TCON_ad_clk_en_mask                                                (0x00020000)
#define AIO_I_ADC_TCON_ad_clk_en(data)                                               (0x00020000&((data)<<17))
#define AIO_I_ADC_TCON_ad_clk_en_src(data)                                           ((0x00020000&(data))>>17)
#define AIO_I_ADC_TCON_get_ad_clk_en(data)                                           ((0x00020000&(data))>>17)
#define AIO_I_ADC_TCON_ad_ana_clk_en_shift                                           (16)
#define AIO_I_ADC_TCON_ad_ana_clk_en_mask                                            (0x00010000)
#define AIO_I_ADC_TCON_ad_ana_clk_en(data)                                           (0x00010000&((data)<<16))
#define AIO_I_ADC_TCON_ad_ana_clk_en_src(data)                                       ((0x00010000&(data))>>16)
#define AIO_I_ADC_TCON_get_ad_ana_clk_en(data)                                       ((0x00010000&(data))>>16)
#define AIO_I_ADC_TCON_alc_rst_n_shift                                               (15)
#define AIO_I_ADC_TCON_alc_rst_n_mask                                                (0x00008000)
#define AIO_I_ADC_TCON_alc_rst_n(data)                                               (0x00008000&((data)<<15))
#define AIO_I_ADC_TCON_alc_rst_n_src(data)                                           ((0x00008000&(data))>>15)
#define AIO_I_ADC_TCON_get_alc_rst_n(data)                                           ((0x00008000&(data))>>15)
#define AIO_I_ADC_TCON_eq_rst_n_shift                                                (14)
#define AIO_I_ADC_TCON_eq_rst_n_mask                                                 (0x00004000)
#define AIO_I_ADC_TCON_eq_rst_n(data)                                                (0x00004000&((data)<<14))
#define AIO_I_ADC_TCON_eq_rst_n_src(data)                                            ((0x00004000&(data))>>14)
#define AIO_I_ADC_TCON_get_eq_rst_n(data)                                            ((0x00004000&(data))>>14)
#define AIO_I_ADC_TCON_wnr_rst_n_shift                                               (13)
#define AIO_I_ADC_TCON_wnr_rst_n_mask                                                (0x00002000)
#define AIO_I_ADC_TCON_wnr_rst_n(data)                                               (0x00002000&((data)<<13))
#define AIO_I_ADC_TCON_wnr_rst_n_src(data)                                           ((0x00002000&(data))>>13)
#define AIO_I_ADC_TCON_get_wnr_rst_n(data)                                           ((0x00002000&(data))>>13)
#define AIO_I_ADC_TCON_ad_rst_n_shift                                                (12)
#define AIO_I_ADC_TCON_ad_rst_n_mask                                                 (0x00001000)
#define AIO_I_ADC_TCON_ad_rst_n(data)                                                (0x00001000&((data)<<12))
#define AIO_I_ADC_TCON_ad_rst_n_src(data)                                            ((0x00001000&(data))>>12)
#define AIO_I_ADC_TCON_get_ad_rst_n(data)                                            ((0x00001000&(data))>>12)
#define AIO_I_ADC_TCON_dmic_src_rst_n_shift                                          (11)
#define AIO_I_ADC_TCON_dmic_src_rst_n_mask                                           (0x00000800)
#define AIO_I_ADC_TCON_dmic_src_rst_n(data)                                          (0x00000800&((data)<<11))
#define AIO_I_ADC_TCON_dmic_src_rst_n_src(data)                                      ((0x00000800&(data))>>11)
#define AIO_I_ADC_TCON_get_dmic_src_rst_n(data)                                      ((0x00000800&(data))>>11)
#define AIO_I_ADC_TCON_i2so_rst_n_shift                                              (10)
#define AIO_I_ADC_TCON_i2so_rst_n_mask                                               (0x00000400)
#define AIO_I_ADC_TCON_i2so_rst_n(data)                                              (0x00000400&((data)<<10))
#define AIO_I_ADC_TCON_i2so_rst_n_src(data)                                          ((0x00000400&(data))>>10)
#define AIO_I_ADC_TCON_get_i2so_rst_n(data)                                          ((0x00000400&(data))>>10)
#define AIO_I_ADC_TCON_tcon_rst_n_shift                                              (9)
#define AIO_I_ADC_TCON_tcon_rst_n_mask                                               (0x00000200)
#define AIO_I_ADC_TCON_tcon_rst_n(data)                                              (0x00000200&((data)<<9))
#define AIO_I_ADC_TCON_tcon_rst_n_src(data)                                          ((0x00000200&(data))>>9)
#define AIO_I_ADC_TCON_get_tcon_rst_n(data)                                          ((0x00000200&(data))>>9)
#define AIO_I_ADC_TCON_dmic_clk_en_shift                                             (8)
#define AIO_I_ADC_TCON_dmic_clk_en_mask                                              (0x00000100)
#define AIO_I_ADC_TCON_dmic_clk_en(data)                                             (0x00000100&((data)<<8))
#define AIO_I_ADC_TCON_dmic_clk_en_src(data)                                         ((0x00000100&(data))>>8)
#define AIO_I_ADC_TCON_get_dmic_clk_en(data)                                         ((0x00000100&(data))>>8)


#define AIO_I_ADC_REGSET                                                             0x98006710
#define AIO_I_ADC_REGSET_reg_addr                                                    "0xD8006710"
#define AIO_I_ADC_REGSET_reg                                                         0xD8006710
#define set_AIO_I_ADC_REGSET_reg(data)   (*((volatile unsigned int*) AIO_I_ADC_REGSET_reg)=data)
#define get_AIO_I_ADC_REGSET_reg   (*((volatile unsigned int*) AIO_I_ADC_REGSET_reg))
#define AIO_I_ADC_REGSET_inst_adr                                                    "0x00C4"
#define AIO_I_ADC_REGSET_inst                                                        0x00C4
#define AIO_I_ADC_REGSET_cnt_shift                                                   (1)
#define AIO_I_ADC_REGSET_cnt_mask                                                    (0x000007FE)
#define AIO_I_ADC_REGSET_cnt(data)                                                   (0x000007FE&((data)<<1))
#define AIO_I_ADC_REGSET_cnt_src(data)                                               ((0x000007FE&(data))>>1)
#define AIO_I_ADC_REGSET_get_cnt(data)                                               ((0x000007FE&(data))>>1)
#define AIO_I_ADC_REGSET_go_shift                                                    (0)
#define AIO_I_ADC_REGSET_go_mask                                                     (0x00000001)
#define AIO_I_ADC_REGSET_go(data)                                                    (0x00000001&((data)<<0))
#define AIO_I_ADC_REGSET_go_src(data)                                                ((0x00000001&(data))>>0)
#define AIO_I_ADC_REGSET_get_go(data)                                                ((0x00000001&(data))>>0)


#define AIO_I_FIFOCTL0                                                               0x98006080
#define AIO_I_FIFOCTL0_reg_addr                                                      "0xD8006080"
#define AIO_I_FIFOCTL0_reg                                                           0xD8006080
#define set_AIO_I_FIFOCTL0_reg(data)   (*((volatile unsigned int*) AIO_I_FIFOCTL0_reg)=data)
#define get_AIO_I_FIFOCTL0_reg   (*((volatile unsigned int*) AIO_I_FIFOCTL0_reg))
#define AIO_I_FIFOCTL0_inst_adr                                                      "0x0020"
#define AIO_I_FIFOCTL0_inst                                                          0x0020
#define AIO_I_FIFOCTL0_thd_shift                                                     (1)
#define AIO_I_FIFOCTL0_thd_mask                                                      (0x0000003E)
#define AIO_I_FIFOCTL0_thd(data)                                                     (0x0000003E&((data)<<1))
#define AIO_I_FIFOCTL0_thd_src(data)                                                 ((0x0000003E&(data))>>1)
#define AIO_I_FIFOCTL0_get_thd(data)                                                 ((0x0000003E&(data))>>1)
#define AIO_I_FIFOCTL0_en_shift                                                      (0)
#define AIO_I_FIFOCTL0_en_mask                                                       (0x00000001)
#define AIO_I_FIFOCTL0_en(data)                                                      (0x00000001&((data)<<0))
#define AIO_I_FIFOCTL0_en_src(data)                                                  ((0x00000001&(data))>>0)
#define AIO_I_FIFOCTL0_get_en(data)                                                  ((0x00000001&(data))>>0)


#define AIO_O_FIFOCTL                                                                0x98006090
#define AIO_O_FIFOCTL_reg_addr                                                       "0xD8006090"
#define AIO_O_FIFOCTL_reg                                                            0xD8006090
#define set_AIO_O_FIFOCTL_reg(data)   (*((volatile unsigned int*) AIO_O_FIFOCTL_reg)=data)
#define get_AIO_O_FIFOCTL_reg   (*((volatile unsigned int*) AIO_O_FIFOCTL_reg))
#define AIO_O_FIFOCTL_inst_adr                                                       "0x0024"
#define AIO_O_FIFOCTL_inst                                                           0x0024
#define AIO_O_FIFOCTL_hdmi8ch_en7_shift                                              (19)
#define AIO_O_FIFOCTL_hdmi8ch_en7_mask                                               (0x00080000)
#define AIO_O_FIFOCTL_hdmi8ch_en7(data)                                              (0x00080000&((data)<<19))
#define AIO_O_FIFOCTL_hdmi8ch_en7_src(data)                                          ((0x00080000&(data))>>19)
#define AIO_O_FIFOCTL_get_hdmi8ch_en7(data)                                          ((0x00080000&(data))>>19)
#define AIO_O_FIFOCTL_hdmi8ch_en6_shift                                              (18)
#define AIO_O_FIFOCTL_hdmi8ch_en6_mask                                               (0x00040000)
#define AIO_O_FIFOCTL_hdmi8ch_en6(data)                                              (0x00040000&((data)<<18))
#define AIO_O_FIFOCTL_hdmi8ch_en6_src(data)                                          ((0x00040000&(data))>>18)
#define AIO_O_FIFOCTL_get_hdmi8ch_en6(data)                                          ((0x00040000&(data))>>18)
#define AIO_O_FIFOCTL_hdmi8ch_en5_shift                                              (17)
#define AIO_O_FIFOCTL_hdmi8ch_en5_mask                                               (0x00020000)
#define AIO_O_FIFOCTL_hdmi8ch_en5(data)                                              (0x00020000&((data)<<17))
#define AIO_O_FIFOCTL_hdmi8ch_en5_src(data)                                          ((0x00020000&(data))>>17)
#define AIO_O_FIFOCTL_get_hdmi8ch_en5(data)                                          ((0x00020000&(data))>>17)
#define AIO_O_FIFOCTL_hdmi8ch_en4_shift                                              (16)
#define AIO_O_FIFOCTL_hdmi8ch_en4_mask                                               (0x00010000)
#define AIO_O_FIFOCTL_hdmi8ch_en4(data)                                              (0x00010000&((data)<<16))
#define AIO_O_FIFOCTL_hdmi8ch_en4_src(data)                                          ((0x00010000&(data))>>16)
#define AIO_O_FIFOCTL_get_hdmi8ch_en4(data)                                          ((0x00010000&(data))>>16)
#define AIO_O_FIFOCTL_hdmi8ch_en3_shift                                              (15)
#define AIO_O_FIFOCTL_hdmi8ch_en3_mask                                               (0x00008000)
#define AIO_O_FIFOCTL_hdmi8ch_en3(data)                                              (0x00008000&((data)<<15))
#define AIO_O_FIFOCTL_hdmi8ch_en3_src(data)                                          ((0x00008000&(data))>>15)
#define AIO_O_FIFOCTL_get_hdmi8ch_en3(data)                                          ((0x00008000&(data))>>15)
#define AIO_O_FIFOCTL_emptystopen_shift                                              (14)
#define AIO_O_FIFOCTL_emptystopen_mask                                               (0x00004000)
#define AIO_O_FIFOCTL_emptystopen(data)                                              (0x00004000&((data)<<14))
#define AIO_O_FIFOCTL_emptystopen_src(data)                                          ((0x00004000&(data))>>14)
#define AIO_O_FIFOCTL_get_emptystopen(data)                                          ((0x00004000&(data))>>14)
#define AIO_O_FIFOCTL_thd_shift                                                      (9)
#define AIO_O_FIFOCTL_thd_mask                                                       (0x00003E00)
#define AIO_O_FIFOCTL_thd(data)                                                      (0x00003E00&((data)<<9))
#define AIO_O_FIFOCTL_thd_src(data)                                                  ((0x00003E00&(data))>>9)
#define AIO_O_FIFOCTL_get_thd(data)                                                  ((0x00003E00&(data))>>9)
#define AIO_O_FIFOCTL_hdmi8ch_en2_shift                                              (8)
#define AIO_O_FIFOCTL_hdmi8ch_en2_mask                                               (0x00000100)
#define AIO_O_FIFOCTL_hdmi8ch_en2(data)                                              (0x00000100&((data)<<8))
#define AIO_O_FIFOCTL_hdmi8ch_en2_src(data)                                          ((0x00000100&(data))>>8)
#define AIO_O_FIFOCTL_get_hdmi8ch_en2(data)                                          ((0x00000100&(data))>>8)
#define AIO_O_FIFOCTL_hdmi8ch_en1_shift                                              (7)
#define AIO_O_FIFOCTL_hdmi8ch_en1_mask                                               (0x00000080)
#define AIO_O_FIFOCTL_hdmi8ch_en1(data)                                              (0x00000080&((data)<<7))
#define AIO_O_FIFOCTL_hdmi8ch_en1_src(data)                                          ((0x00000080&(data))>>7)
#define AIO_O_FIFOCTL_get_hdmi8ch_en1(data)                                          ((0x00000080&(data))>>7)
#define AIO_O_FIFOCTL_hdmi8ch_en0_shift                                              (6)
#define AIO_O_FIFOCTL_hdmi8ch_en0_mask                                               (0x00000040)
#define AIO_O_FIFOCTL_hdmi8ch_en0(data)                                              (0x00000040&((data)<<6))
#define AIO_O_FIFOCTL_hdmi8ch_en0_src(data)                                          ((0x00000040&(data))>>6)
#define AIO_O_FIFOCTL_get_hdmi8ch_en0(data)                                          ((0x00000040&(data))>>6)
#define AIO_O_FIFOCTL_hdmiraw_en_shift                                               (5)
#define AIO_O_FIFOCTL_hdmiraw_en_mask                                                (0x00000020)
#define AIO_O_FIFOCTL_hdmiraw_en(data)                                               (0x00000020&((data)<<5))
#define AIO_O_FIFOCTL_hdmiraw_en_src(data)                                           ((0x00000020&(data))>>5)
#define AIO_O_FIFOCTL_get_hdmiraw_en(data)                                           ((0x00000020&(data))>>5)
#define AIO_O_FIFOCTL_raw_en_shift                                                   (4)
#define AIO_O_FIFOCTL_raw_en_mask                                                    (0x00000010)
#define AIO_O_FIFOCTL_raw_en(data)                                                   (0x00000010&((data)<<4))
#define AIO_O_FIFOCTL_raw_en_src(data)                                               ((0x00000010&(data))>>4)
#define AIO_O_FIFOCTL_get_raw_en(data)                                               ((0x00000010&(data))>>4)
#define AIO_O_FIFOCTL_pcm_en3_shift                                                  (3)
#define AIO_O_FIFOCTL_pcm_en3_mask                                                   (0x00000008)
#define AIO_O_FIFOCTL_pcm_en3(data)                                                  (0x00000008&((data)<<3))
#define AIO_O_FIFOCTL_pcm_en3_src(data)                                              ((0x00000008&(data))>>3)
#define AIO_O_FIFOCTL_get_pcm_en3(data)                                              ((0x00000008&(data))>>3)
#define AIO_O_FIFOCTL_pcm_en2_shift                                                  (2)
#define AIO_O_FIFOCTL_pcm_en2_mask                                                   (0x00000004)
#define AIO_O_FIFOCTL_pcm_en2(data)                                                  (0x00000004&((data)<<2))
#define AIO_O_FIFOCTL_pcm_en2_src(data)                                              ((0x00000004&(data))>>2)
#define AIO_O_FIFOCTL_get_pcm_en2(data)                                              ((0x00000004&(data))>>2)
#define AIO_O_FIFOCTL_pcm_en1_shift                                                  (1)
#define AIO_O_FIFOCTL_pcm_en1_mask                                                   (0x00000002)
#define AIO_O_FIFOCTL_pcm_en1(data)                                                  (0x00000002&((data)<<1))
#define AIO_O_FIFOCTL_pcm_en1_src(data)                                              ((0x00000002&(data))>>1)
#define AIO_O_FIFOCTL_get_pcm_en1(data)                                              ((0x00000002&(data))>>1)
#define AIO_O_FIFOCTL_pcm_en0_shift                                                  (0)
#define AIO_O_FIFOCTL_pcm_en0_mask                                                   (0x00000001)
#define AIO_O_FIFOCTL_pcm_en0(data)                                                  (0x00000001&((data)<<0))
#define AIO_O_FIFOCTL_pcm_en0_src(data)                                              ((0x00000001&(data))>>0)
#define AIO_O_FIFOCTL_get_pcm_en0(data)                                              ((0x00000001&(data))>>0)


#define AIO_O_I2S_LDATA0                                                             0x98006094
#define AIO_O_I2S_LDATA0_reg_addr                                                    "0xD8006094"
#define AIO_O_I2S_LDATA0_reg                                                         0xD8006094
#define set_AIO_O_I2S_LDATA0_reg(data)   (*((volatile unsigned int*) AIO_O_I2S_LDATA0_reg)=data)
#define get_AIO_O_I2S_LDATA0_reg   (*((volatile unsigned int*) AIO_O_I2S_LDATA0_reg))
#define AIO_O_I2S_LDATA0_inst_adr                                                    "0x0025"
#define AIO_O_I2S_LDATA0_inst                                                        0x0025
#define AIO_O_I2S_LDATA0_data_shift                                                  (0)
#define AIO_O_I2S_LDATA0_data_mask                                                   (0xFFFFFFFF)
#define AIO_O_I2S_LDATA0_data(data)                                                  (0xFFFFFFFF&((data)<<0))
#define AIO_O_I2S_LDATA0_data_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define AIO_O_I2S_LDATA0_get_data(data)                                              ((0xFFFFFFFF&(data))>>0)


#define AIO_O_I2S_RDATA0                                                             0x98006098
#define AIO_O_I2S_RDATA0_reg_addr                                                    "0xD8006098"
#define AIO_O_I2S_RDATA0_reg                                                         0xD8006098
#define set_AIO_O_I2S_RDATA0_reg(data)   (*((volatile unsigned int*) AIO_O_I2S_RDATA0_reg)=data)
#define get_AIO_O_I2S_RDATA0_reg   (*((volatile unsigned int*) AIO_O_I2S_RDATA0_reg))
#define AIO_O_I2S_RDATA0_inst_adr                                                    "0x0026"
#define AIO_O_I2S_RDATA0_inst                                                        0x0026
#define AIO_O_I2S_RDATA0_data_shift                                                  (0)
#define AIO_O_I2S_RDATA0_data_mask                                                   (0xFFFFFFFF)
#define AIO_O_I2S_RDATA0_data(data)                                                  (0xFFFFFFFF&((data)<<0))
#define AIO_O_I2S_RDATA0_data_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define AIO_O_I2S_RDATA0_get_data(data)                                              ((0xFFFFFFFF&(data))>>0)


#define AIO_O_I2S_LDATA1                                                             0x9800609c
#define AIO_O_I2S_LDATA1_reg_addr                                                    "0xD800609C"
#define AIO_O_I2S_LDATA1_reg                                                         0xD800609C
#define set_AIO_O_I2S_LDATA1_reg(data)   (*((volatile unsigned int*) AIO_O_I2S_LDATA1_reg)=data)
#define get_AIO_O_I2S_LDATA1_reg   (*((volatile unsigned int*) AIO_O_I2S_LDATA1_reg))
#define AIO_O_I2S_LDATA1_inst_adr                                                    "0x0027"
#define AIO_O_I2S_LDATA1_inst                                                        0x0027
#define AIO_O_I2S_LDATA1_data_shift                                                  (0)
#define AIO_O_I2S_LDATA1_data_mask                                                   (0xFFFFFFFF)
#define AIO_O_I2S_LDATA1_data(data)                                                  (0xFFFFFFFF&((data)<<0))
#define AIO_O_I2S_LDATA1_data_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define AIO_O_I2S_LDATA1_get_data(data)                                              ((0xFFFFFFFF&(data))>>0)


#define AIO_O_I2S_RDATA1                                                             0x980060a0
#define AIO_O_I2S_RDATA1_reg_addr                                                    "0xD80060A0"
#define AIO_O_I2S_RDATA1_reg                                                         0xD80060A0
#define set_AIO_O_I2S_RDATA1_reg(data)   (*((volatile unsigned int*) AIO_O_I2S_RDATA1_reg)=data)
#define get_AIO_O_I2S_RDATA1_reg   (*((volatile unsigned int*) AIO_O_I2S_RDATA1_reg))
#define AIO_O_I2S_RDATA1_inst_adr                                                    "0x0028"
#define AIO_O_I2S_RDATA1_inst                                                        0x0028
#define AIO_O_I2S_RDATA1_data_shift                                                  (0)
#define AIO_O_I2S_RDATA1_data_mask                                                   (0xFFFFFFFF)
#define AIO_O_I2S_RDATA1_data(data)                                                  (0xFFFFFFFF&((data)<<0))
#define AIO_O_I2S_RDATA1_data_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define AIO_O_I2S_RDATA1_get_data(data)                                              ((0xFFFFFFFF&(data))>>0)


#define AIO_O_I2S_LDATA2                                                             0x980060a4
#define AIO_O_I2S_LDATA2_reg_addr                                                    "0xD80060A4"
#define AIO_O_I2S_LDATA2_reg                                                         0xD80060A4
#define set_AIO_O_I2S_LDATA2_reg(data)   (*((volatile unsigned int*) AIO_O_I2S_LDATA2_reg)=data)
#define get_AIO_O_I2S_LDATA2_reg   (*((volatile unsigned int*) AIO_O_I2S_LDATA2_reg))
#define AIO_O_I2S_LDATA2_inst_adr                                                    "0x0029"
#define AIO_O_I2S_LDATA2_inst                                                        0x0029
#define AIO_O_I2S_LDATA2_data_shift                                                  (0)
#define AIO_O_I2S_LDATA2_data_mask                                                   (0xFFFFFFFF)
#define AIO_O_I2S_LDATA2_data(data)                                                  (0xFFFFFFFF&((data)<<0))
#define AIO_O_I2S_LDATA2_data_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define AIO_O_I2S_LDATA2_get_data(data)                                              ((0xFFFFFFFF&(data))>>0)


#define AIO_O_I2S_RDATA2                                                             0x980060a8
#define AIO_O_I2S_RDATA2_reg_addr                                                    "0xD80060A8"
#define AIO_O_I2S_RDATA2_reg                                                         0xD80060A8
#define set_AIO_O_I2S_RDATA2_reg(data)   (*((volatile unsigned int*) AIO_O_I2S_RDATA2_reg)=data)
#define get_AIO_O_I2S_RDATA2_reg   (*((volatile unsigned int*) AIO_O_I2S_RDATA2_reg))
#define AIO_O_I2S_RDATA2_inst_adr                                                    "0x002A"
#define AIO_O_I2S_RDATA2_inst                                                        0x002A
#define AIO_O_I2S_RDATA2_data_shift                                                  (0)
#define AIO_O_I2S_RDATA2_data_mask                                                   (0xFFFFFFFF)
#define AIO_O_I2S_RDATA2_data(data)                                                  (0xFFFFFFFF&((data)<<0))
#define AIO_O_I2S_RDATA2_data_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define AIO_O_I2S_RDATA2_get_data(data)                                              ((0xFFFFFFFF&(data))>>0)


#define AIO_O_I2S_LDATA3                                                             0x980060ac
#define AIO_O_I2S_LDATA3_reg_addr                                                    "0xD80060AC"
#define AIO_O_I2S_LDATA3_reg                                                         0xD80060AC
#define set_AIO_O_I2S_LDATA3_reg(data)   (*((volatile unsigned int*) AIO_O_I2S_LDATA3_reg)=data)
#define get_AIO_O_I2S_LDATA3_reg   (*((volatile unsigned int*) AIO_O_I2S_LDATA3_reg))
#define AIO_O_I2S_LDATA3_inst_adr                                                    "0x002B"
#define AIO_O_I2S_LDATA3_inst                                                        0x002B
#define AIO_O_I2S_LDATA3_data_shift                                                  (0)
#define AIO_O_I2S_LDATA3_data_mask                                                   (0xFFFFFFFF)
#define AIO_O_I2S_LDATA3_data(data)                                                  (0xFFFFFFFF&((data)<<0))
#define AIO_O_I2S_LDATA3_data_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define AIO_O_I2S_LDATA3_get_data(data)                                              ((0xFFFFFFFF&(data))>>0)


#define AIO_O_I2S_RDATA3                                                             0x980060b0
#define AIO_O_I2S_RDATA3_reg_addr                                                    "0xD80060B0"
#define AIO_O_I2S_RDATA3_reg                                                         0xD80060B0
#define set_AIO_O_I2S_RDATA3_reg(data)   (*((volatile unsigned int*) AIO_O_I2S_RDATA3_reg)=data)
#define get_AIO_O_I2S_RDATA3_reg   (*((volatile unsigned int*) AIO_O_I2S_RDATA3_reg))
#define AIO_O_I2S_RDATA3_inst_adr                                                    "0x002C"
#define AIO_O_I2S_RDATA3_inst                                                        0x002C
#define AIO_O_I2S_RDATA3_data_shift                                                  (0)
#define AIO_O_I2S_RDATA3_data_mask                                                   (0xFFFFFFFF)
#define AIO_O_I2S_RDATA3_data(data)                                                  (0xFFFFFFFF&((data)<<0))
#define AIO_O_I2S_RDATA3_data_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define AIO_O_I2S_RDATA3_get_data(data)                                              ((0xFFFFFFFF&(data))>>0)


#define AIO_O_SPF_LDATA                                                              0x980060bc
#define AIO_O_SPF_LDATA_reg_addr                                                     "0xD80060BC"
#define AIO_O_SPF_LDATA_reg                                                          0xD80060BC
#define set_AIO_O_SPF_LDATA_reg(data)   (*((volatile unsigned int*) AIO_O_SPF_LDATA_reg)=data)
#define get_AIO_O_SPF_LDATA_reg   (*((volatile unsigned int*) AIO_O_SPF_LDATA_reg))
#define AIO_O_SPF_LDATA_inst_adr                                                     "0x002F"
#define AIO_O_SPF_LDATA_inst                                                         0x002F
#define AIO_O_SPF_LDATA_data_shift                                                   (0)
#define AIO_O_SPF_LDATA_data_mask                                                    (0xFFFFFFFF)
#define AIO_O_SPF_LDATA_data(data)                                                   (0xFFFFFFFF&((data)<<0))
#define AIO_O_SPF_LDATA_data_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define AIO_O_SPF_LDATA_get_data(data)                                               ((0xFFFFFFFF&(data))>>0)


#define AIO_O_SPF_RDATA                                                              0x980060c0
#define AIO_O_SPF_RDATA_reg_addr                                                     "0xD80060C0"
#define AIO_O_SPF_RDATA_reg                                                          0xD80060C0
#define set_AIO_O_SPF_RDATA_reg(data)   (*((volatile unsigned int*) AIO_O_SPF_RDATA_reg)=data)
#define get_AIO_O_SPF_RDATA_reg   (*((volatile unsigned int*) AIO_O_SPF_RDATA_reg))
#define AIO_O_SPF_RDATA_inst_adr                                                     "0x0030"
#define AIO_O_SPF_RDATA_inst                                                         0x0030
#define AIO_O_SPF_RDATA_data_shift                                                   (0)
#define AIO_O_SPF_RDATA_data_mask                                                    (0xFFFFFFFF)
#define AIO_O_SPF_RDATA_data(data)                                                   (0xFFFFFFFF&((data)<<0))
#define AIO_O_SPF_RDATA_data_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define AIO_O_SPF_RDATA_get_data(data)                                               ((0xFFFFFFFF&(data))>>0)


#define AIO_O_FIFO_STATUS                                                            0x980060c4
#define AIO_O_FIFO_STATUS_reg_addr                                                   "0xD80060C4"
#define AIO_O_FIFO_STATUS_reg                                                        0xD80060C4
#define set_AIO_O_FIFO_STATUS_reg(data)   (*((volatile unsigned int*) AIO_O_FIFO_STATUS_reg)=data)
#define get_AIO_O_FIFO_STATUS_reg   (*((volatile unsigned int*) AIO_O_FIFO_STATUS_reg))
#define AIO_O_FIFO_STATUS_inst_adr                                                   "0x0031"
#define AIO_O_FIFO_STATUS_inst                                                       0x0031
#define AIO_O_FIFO_STATUS_hdmi8ch_empty7_shift                                       (17)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty7_mask                                        (0x00020000)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty7(data)                                       (0x00020000&((data)<<17))
#define AIO_O_FIFO_STATUS_hdmi8ch_empty7_src(data)                                   ((0x00020000&(data))>>17)
#define AIO_O_FIFO_STATUS_get_hdmi8ch_empty7(data)                                   ((0x00020000&(data))>>17)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty6_shift                                       (16)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty6_mask                                        (0x00010000)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty6(data)                                       (0x00010000&((data)<<16))
#define AIO_O_FIFO_STATUS_hdmi8ch_empty6_src(data)                                   ((0x00010000&(data))>>16)
#define AIO_O_FIFO_STATUS_get_hdmi8ch_empty6(data)                                   ((0x00010000&(data))>>16)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty5_shift                                       (15)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty5_mask                                        (0x00008000)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty5(data)                                       (0x00008000&((data)<<15))
#define AIO_O_FIFO_STATUS_hdmi8ch_empty5_src(data)                                   ((0x00008000&(data))>>15)
#define AIO_O_FIFO_STATUS_get_hdmi8ch_empty5(data)                                   ((0x00008000&(data))>>15)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty4_shift                                       (14)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty4_mask                                        (0x00004000)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty4(data)                                       (0x00004000&((data)<<14))
#define AIO_O_FIFO_STATUS_hdmi8ch_empty4_src(data)                                   ((0x00004000&(data))>>14)
#define AIO_O_FIFO_STATUS_get_hdmi8ch_empty4(data)                                   ((0x00004000&(data))>>14)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty3_shift                                       (13)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty3_mask                                        (0x00002000)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty3(data)                                       (0x00002000&((data)<<13))
#define AIO_O_FIFO_STATUS_hdmi8ch_empty3_src(data)                                   ((0x00002000&(data))>>13)
#define AIO_O_FIFO_STATUS_get_hdmi8ch_empty3(data)                                   ((0x00002000&(data))>>13)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty2_shift                                       (12)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty2_mask                                        (0x00001000)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty2(data)                                       (0x00001000&((data)<<12))
#define AIO_O_FIFO_STATUS_hdmi8ch_empty2_src(data)                                   ((0x00001000&(data))>>12)
#define AIO_O_FIFO_STATUS_get_hdmi8ch_empty2(data)                                   ((0x00001000&(data))>>12)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty1_shift                                       (11)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty1_mask                                        (0x00000800)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty1(data)                                       (0x00000800&((data)<<11))
#define AIO_O_FIFO_STATUS_hdmi8ch_empty1_src(data)                                   ((0x00000800&(data))>>11)
#define AIO_O_FIFO_STATUS_get_hdmi8ch_empty1(data)                                   ((0x00000800&(data))>>11)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty0_shift                                       (10)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty0_mask                                        (0x00000400)
#define AIO_O_FIFO_STATUS_hdmi8ch_empty0(data)                                       (0x00000400&((data)<<10))
#define AIO_O_FIFO_STATUS_hdmi8ch_empty0_src(data)                                   ((0x00000400&(data))>>10)
#define AIO_O_FIFO_STATUS_get_hdmi8ch_empty0(data)                                   ((0x00000400&(data))>>10)
#define AIO_O_FIFO_STATUS_hdmiraw_empty_shift                                        (9)
#define AIO_O_FIFO_STATUS_hdmiraw_empty_mask                                         (0x00000200)
#define AIO_O_FIFO_STATUS_hdmiraw_empty(data)                                        (0x00000200&((data)<<9))
#define AIO_O_FIFO_STATUS_hdmiraw_empty_src(data)                                    ((0x00000200&(data))>>9)
#define AIO_O_FIFO_STATUS_get_hdmiraw_empty(data)                                    ((0x00000200&(data))>>9)
#define AIO_O_FIFO_STATUS_raw_empty_shift                                            (8)
#define AIO_O_FIFO_STATUS_raw_empty_mask                                             (0x00000100)
#define AIO_O_FIFO_STATUS_raw_empty(data)                                            (0x00000100&((data)<<8))
#define AIO_O_FIFO_STATUS_raw_empty_src(data)                                        ((0x00000100&(data))>>8)
#define AIO_O_FIFO_STATUS_get_raw_empty(data)                                        ((0x00000100&(data))>>8)
#define AIO_O_FIFO_STATUS_pcm_empty7_shift                                           (7)
#define AIO_O_FIFO_STATUS_pcm_empty7_mask                                            (0x00000080)
#define AIO_O_FIFO_STATUS_pcm_empty7(data)                                           (0x00000080&((data)<<7))
#define AIO_O_FIFO_STATUS_pcm_empty7_src(data)                                       ((0x00000080&(data))>>7)
#define AIO_O_FIFO_STATUS_get_pcm_empty7(data)                                       ((0x00000080&(data))>>7)
#define AIO_O_FIFO_STATUS_pcm_empty6_shift                                           (6)
#define AIO_O_FIFO_STATUS_pcm_empty6_mask                                            (0x00000040)
#define AIO_O_FIFO_STATUS_pcm_empty6(data)                                           (0x00000040&((data)<<6))
#define AIO_O_FIFO_STATUS_pcm_empty6_src(data)                                       ((0x00000040&(data))>>6)
#define AIO_O_FIFO_STATUS_get_pcm_empty6(data)                                       ((0x00000040&(data))>>6)
#define AIO_O_FIFO_STATUS_pcm_empty5_shift                                           (5)
#define AIO_O_FIFO_STATUS_pcm_empty5_mask                                            (0x00000020)
#define AIO_O_FIFO_STATUS_pcm_empty5(data)                                           (0x00000020&((data)<<5))
#define AIO_O_FIFO_STATUS_pcm_empty5_src(data)                                       ((0x00000020&(data))>>5)
#define AIO_O_FIFO_STATUS_get_pcm_empty5(data)                                       ((0x00000020&(data))>>5)
#define AIO_O_FIFO_STATUS_pcm_empty4_shift                                           (4)
#define AIO_O_FIFO_STATUS_pcm_empty4_mask                                            (0x00000010)
#define AIO_O_FIFO_STATUS_pcm_empty4(data)                                           (0x00000010&((data)<<4))
#define AIO_O_FIFO_STATUS_pcm_empty4_src(data)                                       ((0x00000010&(data))>>4)
#define AIO_O_FIFO_STATUS_get_pcm_empty4(data)                                       ((0x00000010&(data))>>4)
#define AIO_O_FIFO_STATUS_pcm_empty3_shift                                           (3)
#define AIO_O_FIFO_STATUS_pcm_empty3_mask                                            (0x00000008)
#define AIO_O_FIFO_STATUS_pcm_empty3(data)                                           (0x00000008&((data)<<3))
#define AIO_O_FIFO_STATUS_pcm_empty3_src(data)                                       ((0x00000008&(data))>>3)
#define AIO_O_FIFO_STATUS_get_pcm_empty3(data)                                       ((0x00000008&(data))>>3)
#define AIO_O_FIFO_STATUS_pcm_empty2_shift                                           (2)
#define AIO_O_FIFO_STATUS_pcm_empty2_mask                                            (0x00000004)
#define AIO_O_FIFO_STATUS_pcm_empty2(data)                                           (0x00000004&((data)<<2))
#define AIO_O_FIFO_STATUS_pcm_empty2_src(data)                                       ((0x00000004&(data))>>2)
#define AIO_O_FIFO_STATUS_get_pcm_empty2(data)                                       ((0x00000004&(data))>>2)
#define AIO_O_FIFO_STATUS_pcm_empty1_shift                                           (1)
#define AIO_O_FIFO_STATUS_pcm_empty1_mask                                            (0x00000002)
#define AIO_O_FIFO_STATUS_pcm_empty1(data)                                           (0x00000002&((data)<<1))
#define AIO_O_FIFO_STATUS_pcm_empty1_src(data)                                       ((0x00000002&(data))>>1)
#define AIO_O_FIFO_STATUS_get_pcm_empty1(data)                                       ((0x00000002&(data))>>1)
#define AIO_O_FIFO_STATUS_pcm_empty0_shift                                           (0)
#define AIO_O_FIFO_STATUS_pcm_empty0_mask                                            (0x00000001)
#define AIO_O_FIFO_STATUS_pcm_empty0(data)                                           (0x00000001&((data)<<0))
#define AIO_O_FIFO_STATUS_pcm_empty0_src(data)                                       ((0x00000001&(data))>>0)
#define AIO_O_FIFO_STATUS_get_pcm_empty0(data)                                       ((0x00000001&(data))>>0)


#define AIO_I_PCM_SA_0                                                               0x98006100
#define AIO_I_PCM_SA_1                                                               0x98006104
#define AIO_I_PCM_SA_0_reg_addr                                                      "0xD8006100"
#define AIO_I_PCM_SA_1_reg_addr                                                      "0xD8006104"
#define AIO_I_PCM_SA_0_reg                                                           0xD8006100
#define AIO_I_PCM_SA_1_reg                                                           0xD8006104
#define set_AIO_I_PCM_SA_0_reg(data)   (*((volatile unsigned int*) AIO_I_PCM_SA_0_reg)=data)
#define set_AIO_I_PCM_SA_1_reg(data)   (*((volatile unsigned int*) AIO_I_PCM_SA_1_reg)=data)
#define get_AIO_I_PCM_SA_0_reg   (*((volatile unsigned int*) AIO_I_PCM_SA_0_reg))
#define get_AIO_I_PCM_SA_1_reg   (*((volatile unsigned int*) AIO_I_PCM_SA_1_reg))
#define AIO_I_PCM_SA_0_inst_adr                                                      "0x0040"
#define AIO_I_PCM_SA_1_inst_adr                                                      "0x0041"
#define AIO_I_PCM_SA_0_inst                                                          0x0040
#define AIO_I_PCM_SA_1_inst                                                          0x0041
#define AIO_I_PCM_SA_addr_shift                                                      (3)
#define AIO_I_PCM_SA_addr_mask                                                       (0xFFFFFFF8)
#define AIO_I_PCM_SA_addr(data)                                                      (0xFFFFFFF8&((data)<<3))
#define AIO_I_PCM_SA_addr_src(data)                                                  ((0xFFFFFFF8&(data))>>3)
#define AIO_I_PCM_SA_get_addr(data)                                                  ((0xFFFFFFF8&(data))>>3)


#define AIO_I_PCM_EA_0                                                               0x98006120
#define AIO_I_PCM_EA_1                                                               0x98006124
#define AIO_I_PCM_EA_0_reg_addr                                                      "0xD8006120"
#define AIO_I_PCM_EA_1_reg_addr                                                      "0xD8006124"
#define AIO_I_PCM_EA_0_reg                                                           0xD8006120
#define AIO_I_PCM_EA_1_reg                                                           0xD8006124
#define set_AIO_I_PCM_EA_0_reg(data)   (*((volatile unsigned int*) AIO_I_PCM_EA_0_reg)=data)
#define set_AIO_I_PCM_EA_1_reg(data)   (*((volatile unsigned int*) AIO_I_PCM_EA_1_reg)=data)
#define get_AIO_I_PCM_EA_0_reg   (*((volatile unsigned int*) AIO_I_PCM_EA_0_reg))
#define get_AIO_I_PCM_EA_1_reg   (*((volatile unsigned int*) AIO_I_PCM_EA_1_reg))
#define AIO_I_PCM_EA_0_inst_adr                                                      "0x0048"
#define AIO_I_PCM_EA_1_inst_adr                                                      "0x0049"
#define AIO_I_PCM_EA_0_inst                                                          0x0048
#define AIO_I_PCM_EA_1_inst                                                          0x0049
#define AIO_I_PCM_EA_addr_shift                                                      (3)
#define AIO_I_PCM_EA_addr_mask                                                       (0xFFFFFFF8)
#define AIO_I_PCM_EA_addr(data)                                                      (0xFFFFFFF8&((data)<<3))
#define AIO_I_PCM_EA_addr_src(data)                                                  ((0xFFFFFFF8&(data))>>3)
#define AIO_I_PCM_EA_get_addr(data)                                                  ((0xFFFFFFF8&(data))>>3)


#define AIO_I_PCM_RP_0                                                               0x98006140
#define AIO_I_PCM_RP_1                                                               0x98006144
#define AIO_I_PCM_RP_0_reg_addr                                                      "0xD8006140"
#define AIO_I_PCM_RP_1_reg_addr                                                      "0xD8006144"
#define AIO_I_PCM_RP_0_reg                                                           0xD8006140
#define AIO_I_PCM_RP_1_reg                                                           0xD8006144
#define set_AIO_I_PCM_RP_0_reg(data)   (*((volatile unsigned int*) AIO_I_PCM_RP_0_reg)=data)
#define set_AIO_I_PCM_RP_1_reg(data)   (*((volatile unsigned int*) AIO_I_PCM_RP_1_reg)=data)
#define get_AIO_I_PCM_RP_0_reg   (*((volatile unsigned int*) AIO_I_PCM_RP_0_reg))
#define get_AIO_I_PCM_RP_1_reg   (*((volatile unsigned int*) AIO_I_PCM_RP_1_reg))
#define AIO_I_PCM_RP_0_inst_adr                                                      "0x0050"
#define AIO_I_PCM_RP_1_inst_adr                                                      "0x0051"
#define AIO_I_PCM_RP_0_inst                                                          0x0050
#define AIO_I_PCM_RP_1_inst                                                          0x0051
#define AIO_I_PCM_RP_addr_shift                                                      (3)
#define AIO_I_PCM_RP_addr_mask                                                       (0xFFFFFFF8)
#define AIO_I_PCM_RP_addr(data)                                                      (0xFFFFFFF8&((data)<<3))
#define AIO_I_PCM_RP_addr_src(data)                                                  ((0xFFFFFFF8&(data))>>3)
#define AIO_I_PCM_RP_get_addr(data)                                                  ((0xFFFFFFF8&(data))>>3)


#define AIO_I_PCM_WP_0                                                               0x98006160
#define AIO_I_PCM_WP_1                                                               0x98006164
#define AIO_I_PCM_WP_0_reg_addr                                                      "0xD8006160"
#define AIO_I_PCM_WP_1_reg_addr                                                      "0xD8006164"
#define AIO_I_PCM_WP_0_reg                                                           0xD8006160
#define AIO_I_PCM_WP_1_reg                                                           0xD8006164
#define set_AIO_I_PCM_WP_0_reg(data)   (*((volatile unsigned int*) AIO_I_PCM_WP_0_reg)=data)
#define set_AIO_I_PCM_WP_1_reg(data)   (*((volatile unsigned int*) AIO_I_PCM_WP_1_reg)=data)
#define get_AIO_I_PCM_WP_0_reg   (*((volatile unsigned int*) AIO_I_PCM_WP_0_reg))
#define get_AIO_I_PCM_WP_1_reg   (*((volatile unsigned int*) AIO_I_PCM_WP_1_reg))
#define AIO_I_PCM_WP_0_inst_adr                                                      "0x0058"
#define AIO_I_PCM_WP_1_inst_adr                                                      "0x0059"
#define AIO_I_PCM_WP_0_inst                                                          0x0058
#define AIO_I_PCM_WP_1_inst                                                          0x0059
#define AIO_I_PCM_WP_addr_shift                                                      (3)
#define AIO_I_PCM_WP_addr_mask                                                       (0xFFFFFFF8)
#define AIO_I_PCM_WP_addr(data)                                                      (0xFFFFFFF8&((data)<<3))
#define AIO_I_PCM_WP_addr_src(data)                                                  ((0xFFFFFFF8&(data))>>3)
#define AIO_I_PCM_WP_get_addr(data)                                                  ((0xFFFFFFF8&(data))>>3)


#define AIO_O_HDMI8CH_SA_0                                                           0x98006180
#define AIO_O_HDMI8CH_SA_1                                                           0x98006184
#define AIO_O_HDMI8CH_SA_2                                                           0x98006188
#define AIO_O_HDMI8CH_SA_3                                                           0x9800618C
#define AIO_O_HDMI8CH_SA_4                                                           0x98006190
#define AIO_O_HDMI8CH_SA_5                                                           0x98006194
#define AIO_O_HDMI8CH_SA_6                                                           0x98006198
#define AIO_O_HDMI8CH_SA_7                                                           0x9800619C
#define AIO_O_HDMI8CH_SA_0_reg_addr                                                  "0xD8006180"
#define AIO_O_HDMI8CH_SA_1_reg_addr                                                  "0xD8006184"
#define AIO_O_HDMI8CH_SA_2_reg_addr                                                  "0xD8006188"
#define AIO_O_HDMI8CH_SA_3_reg_addr                                                  "0xD800618C"
#define AIO_O_HDMI8CH_SA_4_reg_addr                                                  "0xD8006190"
#define AIO_O_HDMI8CH_SA_5_reg_addr                                                  "0xD8006194"
#define AIO_O_HDMI8CH_SA_6_reg_addr                                                  "0xD8006198"
#define AIO_O_HDMI8CH_SA_7_reg_addr                                                  "0xD800619C"
#define AIO_O_HDMI8CH_SA_0_reg                                                       0xD8006180
#define AIO_O_HDMI8CH_SA_1_reg                                                       0xD8006184
#define AIO_O_HDMI8CH_SA_2_reg                                                       0xD8006188
#define AIO_O_HDMI8CH_SA_3_reg                                                       0xD800618C
#define AIO_O_HDMI8CH_SA_4_reg                                                       0xD8006190
#define AIO_O_HDMI8CH_SA_5_reg                                                       0xD8006194
#define AIO_O_HDMI8CH_SA_6_reg                                                       0xD8006198
#define AIO_O_HDMI8CH_SA_7_reg                                                       0xD800619C
#define set_AIO_O_HDMI8CH_SA_0_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_0_reg)=data)
#define set_AIO_O_HDMI8CH_SA_1_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_1_reg)=data)
#define set_AIO_O_HDMI8CH_SA_2_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_2_reg)=data)
#define set_AIO_O_HDMI8CH_SA_3_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_3_reg)=data)
#define set_AIO_O_HDMI8CH_SA_4_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_4_reg)=data)
#define set_AIO_O_HDMI8CH_SA_5_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_5_reg)=data)
#define set_AIO_O_HDMI8CH_SA_6_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_6_reg)=data)
#define set_AIO_O_HDMI8CH_SA_7_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_7_reg)=data)
#define get_AIO_O_HDMI8CH_SA_0_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_0_reg))
#define get_AIO_O_HDMI8CH_SA_1_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_1_reg))
#define get_AIO_O_HDMI8CH_SA_2_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_2_reg))
#define get_AIO_O_HDMI8CH_SA_3_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_3_reg))
#define get_AIO_O_HDMI8CH_SA_4_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_4_reg))
#define get_AIO_O_HDMI8CH_SA_5_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_5_reg))
#define get_AIO_O_HDMI8CH_SA_6_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_6_reg))
#define get_AIO_O_HDMI8CH_SA_7_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_SA_7_reg))
#define AIO_O_HDMI8CH_SA_0_inst_adr                                                  "0x0060"
#define AIO_O_HDMI8CH_SA_1_inst_adr                                                  "0x0061"
#define AIO_O_HDMI8CH_SA_2_inst_adr                                                  "0x0062"
#define AIO_O_HDMI8CH_SA_3_inst_adr                                                  "0x0063"
#define AIO_O_HDMI8CH_SA_4_inst_adr                                                  "0x0064"
#define AIO_O_HDMI8CH_SA_5_inst_adr                                                  "0x0065"
#define AIO_O_HDMI8CH_SA_6_inst_adr                                                  "0x0066"
#define AIO_O_HDMI8CH_SA_7_inst_adr                                                  "0x0067"
#define AIO_O_HDMI8CH_SA_0_inst                                                      0x0060
#define AIO_O_HDMI8CH_SA_1_inst                                                      0x0061
#define AIO_O_HDMI8CH_SA_2_inst                                                      0x0062
#define AIO_O_HDMI8CH_SA_3_inst                                                      0x0063
#define AIO_O_HDMI8CH_SA_4_inst                                                      0x0064
#define AIO_O_HDMI8CH_SA_5_inst                                                      0x0065
#define AIO_O_HDMI8CH_SA_6_inst                                                      0x0066
#define AIO_O_HDMI8CH_SA_7_inst                                                      0x0067
#define AIO_O_HDMI8CH_SA_addr_shift                                                  (3)
#define AIO_O_HDMI8CH_SA_addr_mask                                                   (0xFFFFFFF8)
#define AIO_O_HDMI8CH_SA_addr(data)                                                  (0xFFFFFFF8&((data)<<3))
#define AIO_O_HDMI8CH_SA_addr_src(data)                                              ((0xFFFFFFF8&(data))>>3)
#define AIO_O_HDMI8CH_SA_get_addr(data)                                              ((0xFFFFFFF8&(data))>>3)


#define AIO_O_HDMIRAW_SA                                                             0x980061a0
#define AIO_O_HDMIRAW_SA_reg_addr                                                    "0xD80061A0"
#define AIO_O_HDMIRAW_SA_reg                                                         0xD80061A0
#define set_AIO_O_HDMIRAW_SA_reg(data)   (*((volatile unsigned int*) AIO_O_HDMIRAW_SA_reg)=data)
#define get_AIO_O_HDMIRAW_SA_reg   (*((volatile unsigned int*) AIO_O_HDMIRAW_SA_reg))
#define AIO_O_HDMIRAW_SA_inst_adr                                                    "0x0068"
#define AIO_O_HDMIRAW_SA_inst                                                        0x0068
#define AIO_O_HDMIRAW_SA_addr_shift                                                  (3)
#define AIO_O_HDMIRAW_SA_addr_mask                                                   (0xFFFFFFF8)
#define AIO_O_HDMIRAW_SA_addr(data)                                                  (0xFFFFFFF8&((data)<<3))
#define AIO_O_HDMIRAW_SA_addr_src(data)                                              ((0xFFFFFFF8&(data))>>3)
#define AIO_O_HDMIRAW_SA_get_addr(data)                                              ((0xFFFFFFF8&(data))>>3)


#define AIO_O_RAW_SA                                                                 0x980061a4
#define AIO_O_RAW_SA_reg_addr                                                        "0xD80061A4"
#define AIO_O_RAW_SA_reg                                                             0xD80061A4
#define set_AIO_O_RAW_SA_reg(data)   (*((volatile unsigned int*) AIO_O_RAW_SA_reg)=data)
#define get_AIO_O_RAW_SA_reg   (*((volatile unsigned int*) AIO_O_RAW_SA_reg))
#define AIO_O_RAW_SA_inst_adr                                                        "0x0069"
#define AIO_O_RAW_SA_inst                                                            0x0069
#define AIO_O_RAW_SA_addr_shift                                                      (3)
#define AIO_O_RAW_SA_addr_mask                                                       (0xFFFFFFF8)
#define AIO_O_RAW_SA_addr(data)                                                      (0xFFFFFFF8&((data)<<3))
#define AIO_O_RAW_SA_addr_src(data)                                                  ((0xFFFFFFF8&(data))>>3)
#define AIO_O_RAW_SA_get_addr(data)                                                  ((0xFFFFFFF8&(data))>>3)


#define AIO_O_PCM_SA_0                                                               0x980061B0
#define AIO_O_PCM_SA_1                                                               0x980061B4
#define AIO_O_PCM_SA_2                                                               0x980061B8
#define AIO_O_PCM_SA_3                                                               0x980061BC
#define AIO_O_PCM_SA_4                                                               0x980061C0
#define AIO_O_PCM_SA_5                                                               0x980061C4
#define AIO_O_PCM_SA_6                                                               0x980061C8
#define AIO_O_PCM_SA_7                                                               0x980061CC
#define AIO_O_PCM_SA_0_reg_addr                                                      "0xD80061B0"
#define AIO_O_PCM_SA_1_reg_addr                                                      "0xD80061B4"
#define AIO_O_PCM_SA_2_reg_addr                                                      "0xD80061B8"
#define AIO_O_PCM_SA_3_reg_addr                                                      "0xD80061BC"
#define AIO_O_PCM_SA_4_reg_addr                                                      "0xD80061C0"
#define AIO_O_PCM_SA_5_reg_addr                                                      "0xD80061C4"
#define AIO_O_PCM_SA_6_reg_addr                                                      "0xD80061C8"
#define AIO_O_PCM_SA_7_reg_addr                                                      "0xD80061CC"
#define AIO_O_PCM_SA_0_reg                                                           0xD80061B0
#define AIO_O_PCM_SA_1_reg                                                           0xD80061B4
#define AIO_O_PCM_SA_2_reg                                                           0xD80061B8
#define AIO_O_PCM_SA_3_reg                                                           0xD80061BC
#define AIO_O_PCM_SA_4_reg                                                           0xD80061C0
#define AIO_O_PCM_SA_5_reg                                                           0xD80061C4
#define AIO_O_PCM_SA_6_reg                                                           0xD80061C8
#define AIO_O_PCM_SA_7_reg                                                           0xD80061CC
#define set_AIO_O_PCM_SA_0_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_SA_0_reg)=data)
#define set_AIO_O_PCM_SA_1_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_SA_1_reg)=data)
#define set_AIO_O_PCM_SA_2_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_SA_2_reg)=data)
#define set_AIO_O_PCM_SA_3_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_SA_3_reg)=data)
#define set_AIO_O_PCM_SA_4_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_SA_4_reg)=data)
#define set_AIO_O_PCM_SA_5_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_SA_5_reg)=data)
#define set_AIO_O_PCM_SA_6_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_SA_6_reg)=data)
#define set_AIO_O_PCM_SA_7_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_SA_7_reg)=data)
#define get_AIO_O_PCM_SA_0_reg   (*((volatile unsigned int*) AIO_O_PCM_SA_0_reg))
#define get_AIO_O_PCM_SA_1_reg   (*((volatile unsigned int*) AIO_O_PCM_SA_1_reg))
#define get_AIO_O_PCM_SA_2_reg   (*((volatile unsigned int*) AIO_O_PCM_SA_2_reg))
#define get_AIO_O_PCM_SA_3_reg   (*((volatile unsigned int*) AIO_O_PCM_SA_3_reg))
#define get_AIO_O_PCM_SA_4_reg   (*((volatile unsigned int*) AIO_O_PCM_SA_4_reg))
#define get_AIO_O_PCM_SA_5_reg   (*((volatile unsigned int*) AIO_O_PCM_SA_5_reg))
#define get_AIO_O_PCM_SA_6_reg   (*((volatile unsigned int*) AIO_O_PCM_SA_6_reg))
#define get_AIO_O_PCM_SA_7_reg   (*((volatile unsigned int*) AIO_O_PCM_SA_7_reg))
#define AIO_O_PCM_SA_0_inst_adr                                                      "0x006C"
#define AIO_O_PCM_SA_1_inst_adr                                                      "0x006D"
#define AIO_O_PCM_SA_2_inst_adr                                                      "0x006E"
#define AIO_O_PCM_SA_3_inst_adr                                                      "0x006F"
#define AIO_O_PCM_SA_4_inst_adr                                                      "0x0070"
#define AIO_O_PCM_SA_5_inst_adr                                                      "0x0071"
#define AIO_O_PCM_SA_6_inst_adr                                                      "0x0072"
#define AIO_O_PCM_SA_7_inst_adr                                                      "0x0073"
#define AIO_O_PCM_SA_0_inst                                                          0x006C
#define AIO_O_PCM_SA_1_inst                                                          0x006D
#define AIO_O_PCM_SA_2_inst                                                          0x006E
#define AIO_O_PCM_SA_3_inst                                                          0x006F
#define AIO_O_PCM_SA_4_inst                                                          0x0070
#define AIO_O_PCM_SA_5_inst                                                          0x0071
#define AIO_O_PCM_SA_6_inst                                                          0x0072
#define AIO_O_PCM_SA_7_inst                                                          0x0073
#define AIO_O_PCM_SA_addr_shift                                                      (3)
#define AIO_O_PCM_SA_addr_mask                                                       (0xFFFFFFF8)
#define AIO_O_PCM_SA_addr(data)                                                      (0xFFFFFFF8&((data)<<3))
#define AIO_O_PCM_SA_addr_src(data)                                                  ((0xFFFFFFF8&(data))>>3)
#define AIO_O_PCM_SA_get_addr(data)                                                  ((0xFFFFFFF8&(data))>>3)


#define AIO_O_HDMI8CH_EA_0                                                           0x980061D0
#define AIO_O_HDMI8CH_EA_1                                                           0x980061D4
#define AIO_O_HDMI8CH_EA_2                                                           0x980061D8
#define AIO_O_HDMI8CH_EA_3                                                           0x980061DC
#define AIO_O_HDMI8CH_EA_4                                                           0x980061E0
#define AIO_O_HDMI8CH_EA_5                                                           0x980061E4
#define AIO_O_HDMI8CH_EA_6                                                           0x980061E8
#define AIO_O_HDMI8CH_EA_7                                                           0x980061EC
#define AIO_O_HDMI8CH_EA_0_reg_addr                                                  "0xD80061D0"
#define AIO_O_HDMI8CH_EA_1_reg_addr                                                  "0xD80061D4"
#define AIO_O_HDMI8CH_EA_2_reg_addr                                                  "0xD80061D8"
#define AIO_O_HDMI8CH_EA_3_reg_addr                                                  "0xD80061DC"
#define AIO_O_HDMI8CH_EA_4_reg_addr                                                  "0xD80061E0"
#define AIO_O_HDMI8CH_EA_5_reg_addr                                                  "0xD80061E4"
#define AIO_O_HDMI8CH_EA_6_reg_addr                                                  "0xD80061E8"
#define AIO_O_HDMI8CH_EA_7_reg_addr                                                  "0xD80061EC"
#define AIO_O_HDMI8CH_EA_0_reg                                                       0xD80061D0
#define AIO_O_HDMI8CH_EA_1_reg                                                       0xD80061D4
#define AIO_O_HDMI8CH_EA_2_reg                                                       0xD80061D8
#define AIO_O_HDMI8CH_EA_3_reg                                                       0xD80061DC
#define AIO_O_HDMI8CH_EA_4_reg                                                       0xD80061E0
#define AIO_O_HDMI8CH_EA_5_reg                                                       0xD80061E4
#define AIO_O_HDMI8CH_EA_6_reg                                                       0xD80061E8
#define AIO_O_HDMI8CH_EA_7_reg                                                       0xD80061EC
#define set_AIO_O_HDMI8CH_EA_0_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_0_reg)=data)
#define set_AIO_O_HDMI8CH_EA_1_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_1_reg)=data)
#define set_AIO_O_HDMI8CH_EA_2_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_2_reg)=data)
#define set_AIO_O_HDMI8CH_EA_3_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_3_reg)=data)
#define set_AIO_O_HDMI8CH_EA_4_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_4_reg)=data)
#define set_AIO_O_HDMI8CH_EA_5_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_5_reg)=data)
#define set_AIO_O_HDMI8CH_EA_6_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_6_reg)=data)
#define set_AIO_O_HDMI8CH_EA_7_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_7_reg)=data)
#define get_AIO_O_HDMI8CH_EA_0_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_0_reg))
#define get_AIO_O_HDMI8CH_EA_1_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_1_reg))
#define get_AIO_O_HDMI8CH_EA_2_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_2_reg))
#define get_AIO_O_HDMI8CH_EA_3_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_3_reg))
#define get_AIO_O_HDMI8CH_EA_4_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_4_reg))
#define get_AIO_O_HDMI8CH_EA_5_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_5_reg))
#define get_AIO_O_HDMI8CH_EA_6_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_6_reg))
#define get_AIO_O_HDMI8CH_EA_7_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_EA_7_reg))
#define AIO_O_HDMI8CH_EA_0_inst_adr                                                  "0x0074"
#define AIO_O_HDMI8CH_EA_1_inst_adr                                                  "0x0075"
#define AIO_O_HDMI8CH_EA_2_inst_adr                                                  "0x0076"
#define AIO_O_HDMI8CH_EA_3_inst_adr                                                  "0x0077"
#define AIO_O_HDMI8CH_EA_4_inst_adr                                                  "0x0078"
#define AIO_O_HDMI8CH_EA_5_inst_adr                                                  "0x0079"
#define AIO_O_HDMI8CH_EA_6_inst_adr                                                  "0x007A"
#define AIO_O_HDMI8CH_EA_7_inst_adr                                                  "0x007B"
#define AIO_O_HDMI8CH_EA_0_inst                                                      0x0074
#define AIO_O_HDMI8CH_EA_1_inst                                                      0x0075
#define AIO_O_HDMI8CH_EA_2_inst                                                      0x0076
#define AIO_O_HDMI8CH_EA_3_inst                                                      0x0077
#define AIO_O_HDMI8CH_EA_4_inst                                                      0x0078
#define AIO_O_HDMI8CH_EA_5_inst                                                      0x0079
#define AIO_O_HDMI8CH_EA_6_inst                                                      0x007A
#define AIO_O_HDMI8CH_EA_7_inst                                                      0x007B
#define AIO_O_HDMI8CH_EA_addr_shift                                                  (3)
#define AIO_O_HDMI8CH_EA_addr_mask                                                   (0xFFFFFFF8)
#define AIO_O_HDMI8CH_EA_addr(data)                                                  (0xFFFFFFF8&((data)<<3))
#define AIO_O_HDMI8CH_EA_addr_src(data)                                              ((0xFFFFFFF8&(data))>>3)
#define AIO_O_HDMI8CH_EA_get_addr(data)                                              ((0xFFFFFFF8&(data))>>3)


#define AIO_O_HDMIRAW_EA                                                             0x980061f0
#define AIO_O_HDMIRAW_EA_reg_addr                                                    "0xD80061F0"
#define AIO_O_HDMIRAW_EA_reg                                                         0xD80061F0
#define set_AIO_O_HDMIRAW_EA_reg(data)   (*((volatile unsigned int*) AIO_O_HDMIRAW_EA_reg)=data)
#define get_AIO_O_HDMIRAW_EA_reg   (*((volatile unsigned int*) AIO_O_HDMIRAW_EA_reg))
#define AIO_O_HDMIRAW_EA_inst_adr                                                    "0x007C"
#define AIO_O_HDMIRAW_EA_inst                                                        0x007C
#define AIO_O_HDMIRAW_EA_addr_shift                                                  (3)
#define AIO_O_HDMIRAW_EA_addr_mask                                                   (0xFFFFFFF8)
#define AIO_O_HDMIRAW_EA_addr(data)                                                  (0xFFFFFFF8&((data)<<3))
#define AIO_O_HDMIRAW_EA_addr_src(data)                                              ((0xFFFFFFF8&(data))>>3)
#define AIO_O_HDMIRAW_EA_get_addr(data)                                              ((0xFFFFFFF8&(data))>>3)


#define AIO_O_RAW_EA                                                                 0x980061f4
#define AIO_O_RAW_EA_reg_addr                                                        "0xD80061F4"
#define AIO_O_RAW_EA_reg                                                             0xD80061F4
#define set_AIO_O_RAW_EA_reg(data)   (*((volatile unsigned int*) AIO_O_RAW_EA_reg)=data)
#define get_AIO_O_RAW_EA_reg   (*((volatile unsigned int*) AIO_O_RAW_EA_reg))
#define AIO_O_RAW_EA_inst_adr                                                        "0x007D"
#define AIO_O_RAW_EA_inst                                                            0x007D
#define AIO_O_RAW_EA_addr_shift                                                      (3)
#define AIO_O_RAW_EA_addr_mask                                                       (0xFFFFFFF8)
#define AIO_O_RAW_EA_addr(data)                                                      (0xFFFFFFF8&((data)<<3))
#define AIO_O_RAW_EA_addr_src(data)                                                  ((0xFFFFFFF8&(data))>>3)
#define AIO_O_RAW_EA_get_addr(data)                                                  ((0xFFFFFFF8&(data))>>3)


#define AIO_O_PCM_EA_0                                                               0x98006200
#define AIO_O_PCM_EA_1                                                               0x98006204
#define AIO_O_PCM_EA_2                                                               0x98006208
#define AIO_O_PCM_EA_3                                                               0x9800620C
#define AIO_O_PCM_EA_4                                                               0x98006210
#define AIO_O_PCM_EA_5                                                               0x98006214
#define AIO_O_PCM_EA_6                                                               0x98006218
#define AIO_O_PCM_EA_7                                                               0x9800621C
#define AIO_O_PCM_EA_0_reg_addr                                                      "0xD8006200"
#define AIO_O_PCM_EA_1_reg_addr                                                      "0xD8006204"
#define AIO_O_PCM_EA_2_reg_addr                                                      "0xD8006208"
#define AIO_O_PCM_EA_3_reg_addr                                                      "0xD800620C"
#define AIO_O_PCM_EA_4_reg_addr                                                      "0xD8006210"
#define AIO_O_PCM_EA_5_reg_addr                                                      "0xD8006214"
#define AIO_O_PCM_EA_6_reg_addr                                                      "0xD8006218"
#define AIO_O_PCM_EA_7_reg_addr                                                      "0xD800621C"
#define AIO_O_PCM_EA_0_reg                                                           0xD8006200
#define AIO_O_PCM_EA_1_reg                                                           0xD8006204
#define AIO_O_PCM_EA_2_reg                                                           0xD8006208
#define AIO_O_PCM_EA_3_reg                                                           0xD800620C
#define AIO_O_PCM_EA_4_reg                                                           0xD8006210
#define AIO_O_PCM_EA_5_reg                                                           0xD8006214
#define AIO_O_PCM_EA_6_reg                                                           0xD8006218
#define AIO_O_PCM_EA_7_reg                                                           0xD800621C
#define set_AIO_O_PCM_EA_0_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_EA_0_reg)=data)
#define set_AIO_O_PCM_EA_1_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_EA_1_reg)=data)
#define set_AIO_O_PCM_EA_2_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_EA_2_reg)=data)
#define set_AIO_O_PCM_EA_3_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_EA_3_reg)=data)
#define set_AIO_O_PCM_EA_4_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_EA_4_reg)=data)
#define set_AIO_O_PCM_EA_5_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_EA_5_reg)=data)
#define set_AIO_O_PCM_EA_6_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_EA_6_reg)=data)
#define set_AIO_O_PCM_EA_7_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_EA_7_reg)=data)
#define get_AIO_O_PCM_EA_0_reg   (*((volatile unsigned int*) AIO_O_PCM_EA_0_reg))
#define get_AIO_O_PCM_EA_1_reg   (*((volatile unsigned int*) AIO_O_PCM_EA_1_reg))
#define get_AIO_O_PCM_EA_2_reg   (*((volatile unsigned int*) AIO_O_PCM_EA_2_reg))
#define get_AIO_O_PCM_EA_3_reg   (*((volatile unsigned int*) AIO_O_PCM_EA_3_reg))
#define get_AIO_O_PCM_EA_4_reg   (*((volatile unsigned int*) AIO_O_PCM_EA_4_reg))
#define get_AIO_O_PCM_EA_5_reg   (*((volatile unsigned int*) AIO_O_PCM_EA_5_reg))
#define get_AIO_O_PCM_EA_6_reg   (*((volatile unsigned int*) AIO_O_PCM_EA_6_reg))
#define get_AIO_O_PCM_EA_7_reg   (*((volatile unsigned int*) AIO_O_PCM_EA_7_reg))
#define AIO_O_PCM_EA_0_inst_adr                                                      "0x0080"
#define AIO_O_PCM_EA_1_inst_adr                                                      "0x0081"
#define AIO_O_PCM_EA_2_inst_adr                                                      "0x0082"
#define AIO_O_PCM_EA_3_inst_adr                                                      "0x0083"
#define AIO_O_PCM_EA_4_inst_adr                                                      "0x0084"
#define AIO_O_PCM_EA_5_inst_adr                                                      "0x0085"
#define AIO_O_PCM_EA_6_inst_adr                                                      "0x0086"
#define AIO_O_PCM_EA_7_inst_adr                                                      "0x0087"
#define AIO_O_PCM_EA_0_inst                                                          0x0080
#define AIO_O_PCM_EA_1_inst                                                          0x0081
#define AIO_O_PCM_EA_2_inst                                                          0x0082
#define AIO_O_PCM_EA_3_inst                                                          0x0083
#define AIO_O_PCM_EA_4_inst                                                          0x0084
#define AIO_O_PCM_EA_5_inst                                                          0x0085
#define AIO_O_PCM_EA_6_inst                                                          0x0086
#define AIO_O_PCM_EA_7_inst                                                          0x0087
#define AIO_O_PCM_EA_addr_shift                                                      (3)
#define AIO_O_PCM_EA_addr_mask                                                       (0xFFFFFFF8)
#define AIO_O_PCM_EA_addr(data)                                                      (0xFFFFFFF8&((data)<<3))
#define AIO_O_PCM_EA_addr_src(data)                                                  ((0xFFFFFFF8&(data))>>3)
#define AIO_O_PCM_EA_get_addr(data)                                                  ((0xFFFFFFF8&(data))>>3)


#define AIO_O_HDMI8CH_RP_0                                                           0x98006220
#define AIO_O_HDMI8CH_RP_1                                                           0x98006224
#define AIO_O_HDMI8CH_RP_2                                                           0x98006228
#define AIO_O_HDMI8CH_RP_3                                                           0x9800622C
#define AIO_O_HDMI8CH_RP_4                                                           0x98006230
#define AIO_O_HDMI8CH_RP_5                                                           0x98006234
#define AIO_O_HDMI8CH_RP_6                                                           0x98006238
#define AIO_O_HDMI8CH_RP_7                                                           0x9800623C
#define AIO_O_HDMI8CH_RP_0_reg_addr                                                  "0xD8006220"
#define AIO_O_HDMI8CH_RP_1_reg_addr                                                  "0xD8006224"
#define AIO_O_HDMI8CH_RP_2_reg_addr                                                  "0xD8006228"
#define AIO_O_HDMI8CH_RP_3_reg_addr                                                  "0xD800622C"
#define AIO_O_HDMI8CH_RP_4_reg_addr                                                  "0xD8006230"
#define AIO_O_HDMI8CH_RP_5_reg_addr                                                  "0xD8006234"
#define AIO_O_HDMI8CH_RP_6_reg_addr                                                  "0xD8006238"
#define AIO_O_HDMI8CH_RP_7_reg_addr                                                  "0xD800623C"
#define AIO_O_HDMI8CH_RP_0_reg                                                       0xD8006220
#define AIO_O_HDMI8CH_RP_1_reg                                                       0xD8006224
#define AIO_O_HDMI8CH_RP_2_reg                                                       0xD8006228
#define AIO_O_HDMI8CH_RP_3_reg                                                       0xD800622C
#define AIO_O_HDMI8CH_RP_4_reg                                                       0xD8006230
#define AIO_O_HDMI8CH_RP_5_reg                                                       0xD8006234
#define AIO_O_HDMI8CH_RP_6_reg                                                       0xD8006238
#define AIO_O_HDMI8CH_RP_7_reg                                                       0xD800623C
#define set_AIO_O_HDMI8CH_RP_0_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_0_reg)=data)
#define set_AIO_O_HDMI8CH_RP_1_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_1_reg)=data)
#define set_AIO_O_HDMI8CH_RP_2_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_2_reg)=data)
#define set_AIO_O_HDMI8CH_RP_3_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_3_reg)=data)
#define set_AIO_O_HDMI8CH_RP_4_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_4_reg)=data)
#define set_AIO_O_HDMI8CH_RP_5_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_5_reg)=data)
#define set_AIO_O_HDMI8CH_RP_6_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_6_reg)=data)
#define set_AIO_O_HDMI8CH_RP_7_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_7_reg)=data)
#define get_AIO_O_HDMI8CH_RP_0_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_0_reg))
#define get_AIO_O_HDMI8CH_RP_1_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_1_reg))
#define get_AIO_O_HDMI8CH_RP_2_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_2_reg))
#define get_AIO_O_HDMI8CH_RP_3_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_3_reg))
#define get_AIO_O_HDMI8CH_RP_4_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_4_reg))
#define get_AIO_O_HDMI8CH_RP_5_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_5_reg))
#define get_AIO_O_HDMI8CH_RP_6_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_6_reg))
#define get_AIO_O_HDMI8CH_RP_7_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_RP_7_reg))
#define AIO_O_HDMI8CH_RP_0_inst_adr                                                  "0x0088"
#define AIO_O_HDMI8CH_RP_1_inst_adr                                                  "0x0089"
#define AIO_O_HDMI8CH_RP_2_inst_adr                                                  "0x008A"
#define AIO_O_HDMI8CH_RP_3_inst_adr                                                  "0x008B"
#define AIO_O_HDMI8CH_RP_4_inst_adr                                                  "0x008C"
#define AIO_O_HDMI8CH_RP_5_inst_adr                                                  "0x008D"
#define AIO_O_HDMI8CH_RP_6_inst_adr                                                  "0x008E"
#define AIO_O_HDMI8CH_RP_7_inst_adr                                                  "0x008F"
#define AIO_O_HDMI8CH_RP_0_inst                                                      0x0088
#define AIO_O_HDMI8CH_RP_1_inst                                                      0x0089
#define AIO_O_HDMI8CH_RP_2_inst                                                      0x008A
#define AIO_O_HDMI8CH_RP_3_inst                                                      0x008B
#define AIO_O_HDMI8CH_RP_4_inst                                                      0x008C
#define AIO_O_HDMI8CH_RP_5_inst                                                      0x008D
#define AIO_O_HDMI8CH_RP_6_inst                                                      0x008E
#define AIO_O_HDMI8CH_RP_7_inst                                                      0x008F
#define AIO_O_HDMI8CH_RP_addr_shift                                                  (3)
#define AIO_O_HDMI8CH_RP_addr_mask                                                   (0xFFFFFFF8)
#define AIO_O_HDMI8CH_RP_addr(data)                                                  (0xFFFFFFF8&((data)<<3))
#define AIO_O_HDMI8CH_RP_addr_src(data)                                              ((0xFFFFFFF8&(data))>>3)
#define AIO_O_HDMI8CH_RP_get_addr(data)                                              ((0xFFFFFFF8&(data))>>3)


#define AIO_O_HDMIRAW_RP                                                             0x98006240
#define AIO_O_HDMIRAW_RP_reg_addr                                                    "0xD8006240"
#define AIO_O_HDMIRAW_RP_reg                                                         0xD8006240
#define set_AIO_O_HDMIRAW_RP_reg(data)   (*((volatile unsigned int*) AIO_O_HDMIRAW_RP_reg)=data)
#define get_AIO_O_HDMIRAW_RP_reg   (*((volatile unsigned int*) AIO_O_HDMIRAW_RP_reg))
#define AIO_O_HDMIRAW_RP_inst_adr                                                    "0x0090"
#define AIO_O_HDMIRAW_RP_inst                                                        0x0090
#define AIO_O_HDMIRAW_RP_addr_shift                                                  (3)
#define AIO_O_HDMIRAW_RP_addr_mask                                                   (0xFFFFFFF8)
#define AIO_O_HDMIRAW_RP_addr(data)                                                  (0xFFFFFFF8&((data)<<3))
#define AIO_O_HDMIRAW_RP_addr_src(data)                                              ((0xFFFFFFF8&(data))>>3)
#define AIO_O_HDMIRAW_RP_get_addr(data)                                              ((0xFFFFFFF8&(data))>>3)


#define AIO_O_RAW_RP                                                                 0x98006244
#define AIO_O_RAW_RP_reg_addr                                                        "0xD8006244"
#define AIO_O_RAW_RP_reg                                                             0xD8006244
#define set_AIO_O_RAW_RP_reg(data)   (*((volatile unsigned int*) AIO_O_RAW_RP_reg)=data)
#define get_AIO_O_RAW_RP_reg   (*((volatile unsigned int*) AIO_O_RAW_RP_reg))
#define AIO_O_RAW_RP_inst_adr                                                        "0x0091"
#define AIO_O_RAW_RP_inst                                                            0x0091
#define AIO_O_RAW_RP_addr_shift                                                      (3)
#define AIO_O_RAW_RP_addr_mask                                                       (0xFFFFFFF8)
#define AIO_O_RAW_RP_addr(data)                                                      (0xFFFFFFF8&((data)<<3))
#define AIO_O_RAW_RP_addr_src(data)                                                  ((0xFFFFFFF8&(data))>>3)
#define AIO_O_RAW_RP_get_addr(data)                                                  ((0xFFFFFFF8&(data))>>3)


#define AIO_O_PCM_RP_0                                                               0x98006250
#define AIO_O_PCM_RP_1                                                               0x98006254
#define AIO_O_PCM_RP_2                                                               0x98006258
#define AIO_O_PCM_RP_3                                                               0x9800625C
#define AIO_O_PCM_RP_4                                                               0x98006260
#define AIO_O_PCM_RP_5                                                               0x98006264
#define AIO_O_PCM_RP_6                                                               0x98006268
#define AIO_O_PCM_RP_7                                                               0x9800626C
#define AIO_O_PCM_RP_0_reg_addr                                                      "0xD8006250"
#define AIO_O_PCM_RP_1_reg_addr                                                      "0xD8006254"
#define AIO_O_PCM_RP_2_reg_addr                                                      "0xD8006258"
#define AIO_O_PCM_RP_3_reg_addr                                                      "0xD800625C"
#define AIO_O_PCM_RP_4_reg_addr                                                      "0xD8006260"
#define AIO_O_PCM_RP_5_reg_addr                                                      "0xD8006264"
#define AIO_O_PCM_RP_6_reg_addr                                                      "0xD8006268"
#define AIO_O_PCM_RP_7_reg_addr                                                      "0xD800626C"
#define AIO_O_PCM_RP_0_reg                                                           0xD8006250
#define AIO_O_PCM_RP_1_reg                                                           0xD8006254
#define AIO_O_PCM_RP_2_reg                                                           0xD8006258
#define AIO_O_PCM_RP_3_reg                                                           0xD800625C
#define AIO_O_PCM_RP_4_reg                                                           0xD8006260
#define AIO_O_PCM_RP_5_reg                                                           0xD8006264
#define AIO_O_PCM_RP_6_reg                                                           0xD8006268
#define AIO_O_PCM_RP_7_reg                                                           0xD800626C
#define set_AIO_O_PCM_RP_0_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_RP_0_reg)=data)
#define set_AIO_O_PCM_RP_1_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_RP_1_reg)=data)
#define set_AIO_O_PCM_RP_2_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_RP_2_reg)=data)
#define set_AIO_O_PCM_RP_3_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_RP_3_reg)=data)
#define set_AIO_O_PCM_RP_4_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_RP_4_reg)=data)
#define set_AIO_O_PCM_RP_5_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_RP_5_reg)=data)
#define set_AIO_O_PCM_RP_6_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_RP_6_reg)=data)
#define set_AIO_O_PCM_RP_7_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_RP_7_reg)=data)
#define get_AIO_O_PCM_RP_0_reg   (*((volatile unsigned int*) AIO_O_PCM_RP_0_reg))
#define get_AIO_O_PCM_RP_1_reg   (*((volatile unsigned int*) AIO_O_PCM_RP_1_reg))
#define get_AIO_O_PCM_RP_2_reg   (*((volatile unsigned int*) AIO_O_PCM_RP_2_reg))
#define get_AIO_O_PCM_RP_3_reg   (*((volatile unsigned int*) AIO_O_PCM_RP_3_reg))
#define get_AIO_O_PCM_RP_4_reg   (*((volatile unsigned int*) AIO_O_PCM_RP_4_reg))
#define get_AIO_O_PCM_RP_5_reg   (*((volatile unsigned int*) AIO_O_PCM_RP_5_reg))
#define get_AIO_O_PCM_RP_6_reg   (*((volatile unsigned int*) AIO_O_PCM_RP_6_reg))
#define get_AIO_O_PCM_RP_7_reg   (*((volatile unsigned int*) AIO_O_PCM_RP_7_reg))
#define AIO_O_PCM_RP_0_inst_adr                                                      "0x0094"
#define AIO_O_PCM_RP_1_inst_adr                                                      "0x0095"
#define AIO_O_PCM_RP_2_inst_adr                                                      "0x0096"
#define AIO_O_PCM_RP_3_inst_adr                                                      "0x0097"
#define AIO_O_PCM_RP_4_inst_adr                                                      "0x0098"
#define AIO_O_PCM_RP_5_inst_adr                                                      "0x0099"
#define AIO_O_PCM_RP_6_inst_adr                                                      "0x009A"
#define AIO_O_PCM_RP_7_inst_adr                                                      "0x009B"
#define AIO_O_PCM_RP_0_inst                                                          0x0094
#define AIO_O_PCM_RP_1_inst                                                          0x0095
#define AIO_O_PCM_RP_2_inst                                                          0x0096
#define AIO_O_PCM_RP_3_inst                                                          0x0097
#define AIO_O_PCM_RP_4_inst                                                          0x0098
#define AIO_O_PCM_RP_5_inst                                                          0x0099
#define AIO_O_PCM_RP_6_inst                                                          0x009A
#define AIO_O_PCM_RP_7_inst                                                          0x009B
#define AIO_O_PCM_RP_addr_shift                                                      (3)
#define AIO_O_PCM_RP_addr_mask                                                       (0xFFFFFFF8)
#define AIO_O_PCM_RP_addr(data)                                                      (0xFFFFFFF8&((data)<<3))
#define AIO_O_PCM_RP_addr_src(data)                                                  ((0xFFFFFFF8&(data))>>3)
#define AIO_O_PCM_RP_get_addr(data)                                                  ((0xFFFFFFF8&(data))>>3)


#define AIO_O_HDMI8CH_WP_0                                                           0x98006270
#define AIO_O_HDMI8CH_WP_1                                                           0x98006274
#define AIO_O_HDMI8CH_WP_2                                                           0x98006278
#define AIO_O_HDMI8CH_WP_3                                                           0x9800627C
#define AIO_O_HDMI8CH_WP_4                                                           0x98006280
#define AIO_O_HDMI8CH_WP_5                                                           0x98006284
#define AIO_O_HDMI8CH_WP_6                                                           0x98006288
#define AIO_O_HDMI8CH_WP_7                                                           0x9800628C
#define AIO_O_HDMI8CH_WP_0_reg_addr                                                  "0xD8006270"
#define AIO_O_HDMI8CH_WP_1_reg_addr                                                  "0xD8006274"
#define AIO_O_HDMI8CH_WP_2_reg_addr                                                  "0xD8006278"
#define AIO_O_HDMI8CH_WP_3_reg_addr                                                  "0xD800627C"
#define AIO_O_HDMI8CH_WP_4_reg_addr                                                  "0xD8006280"
#define AIO_O_HDMI8CH_WP_5_reg_addr                                                  "0xD8006284"
#define AIO_O_HDMI8CH_WP_6_reg_addr                                                  "0xD8006288"
#define AIO_O_HDMI8CH_WP_7_reg_addr                                                  "0xD800628C"
#define AIO_O_HDMI8CH_WP_0_reg                                                       0xD8006270
#define AIO_O_HDMI8CH_WP_1_reg                                                       0xD8006274
#define AIO_O_HDMI8CH_WP_2_reg                                                       0xD8006278
#define AIO_O_HDMI8CH_WP_3_reg                                                       0xD800627C
#define AIO_O_HDMI8CH_WP_4_reg                                                       0xD8006280
#define AIO_O_HDMI8CH_WP_5_reg                                                       0xD8006284
#define AIO_O_HDMI8CH_WP_6_reg                                                       0xD8006288
#define AIO_O_HDMI8CH_WP_7_reg                                                       0xD800628C
#define set_AIO_O_HDMI8CH_WP_0_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_0_reg)=data)
#define set_AIO_O_HDMI8CH_WP_1_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_1_reg)=data)
#define set_AIO_O_HDMI8CH_WP_2_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_2_reg)=data)
#define set_AIO_O_HDMI8CH_WP_3_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_3_reg)=data)
#define set_AIO_O_HDMI8CH_WP_4_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_4_reg)=data)
#define set_AIO_O_HDMI8CH_WP_5_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_5_reg)=data)
#define set_AIO_O_HDMI8CH_WP_6_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_6_reg)=data)
#define set_AIO_O_HDMI8CH_WP_7_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_7_reg)=data)
#define get_AIO_O_HDMI8CH_WP_0_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_0_reg))
#define get_AIO_O_HDMI8CH_WP_1_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_1_reg))
#define get_AIO_O_HDMI8CH_WP_2_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_2_reg))
#define get_AIO_O_HDMI8CH_WP_3_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_3_reg))
#define get_AIO_O_HDMI8CH_WP_4_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_4_reg))
#define get_AIO_O_HDMI8CH_WP_5_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_5_reg))
#define get_AIO_O_HDMI8CH_WP_6_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_6_reg))
#define get_AIO_O_HDMI8CH_WP_7_reg   (*((volatile unsigned int*) AIO_O_HDMI8CH_WP_7_reg))
#define AIO_O_HDMI8CH_WP_0_inst_adr                                                  "0x009C"
#define AIO_O_HDMI8CH_WP_1_inst_adr                                                  "0x009D"
#define AIO_O_HDMI8CH_WP_2_inst_adr                                                  "0x009E"
#define AIO_O_HDMI8CH_WP_3_inst_adr                                                  "0x009F"
#define AIO_O_HDMI8CH_WP_4_inst_adr                                                  "0x00A0"
#define AIO_O_HDMI8CH_WP_5_inst_adr                                                  "0x00A1"
#define AIO_O_HDMI8CH_WP_6_inst_adr                                                  "0x00A2"
#define AIO_O_HDMI8CH_WP_7_inst_adr                                                  "0x00A3"
#define AIO_O_HDMI8CH_WP_0_inst                                                      0x009C
#define AIO_O_HDMI8CH_WP_1_inst                                                      0x009D
#define AIO_O_HDMI8CH_WP_2_inst                                                      0x009E
#define AIO_O_HDMI8CH_WP_3_inst                                                      0x009F
#define AIO_O_HDMI8CH_WP_4_inst                                                      0x00A0
#define AIO_O_HDMI8CH_WP_5_inst                                                      0x00A1
#define AIO_O_HDMI8CH_WP_6_inst                                                      0x00A2
#define AIO_O_HDMI8CH_WP_7_inst                                                      0x00A3
#define AIO_O_HDMI8CH_WP_addr_shift                                                  (3)
#define AIO_O_HDMI8CH_WP_addr_mask                                                   (0xFFFFFFF8)
#define AIO_O_HDMI8CH_WP_addr(data)                                                  (0xFFFFFFF8&((data)<<3))
#define AIO_O_HDMI8CH_WP_addr_src(data)                                              ((0xFFFFFFF8&(data))>>3)
#define AIO_O_HDMI8CH_WP_get_addr(data)                                              ((0xFFFFFFF8&(data))>>3)


#define AIO_O_HDMIRAW_WP                                                             0x98006290
#define AIO_O_HDMIRAW_WP_reg_addr                                                    "0xD8006290"
#define AIO_O_HDMIRAW_WP_reg                                                         0xD8006290
#define set_AIO_O_HDMIRAW_WP_reg(data)   (*((volatile unsigned int*) AIO_O_HDMIRAW_WP_reg)=data)
#define get_AIO_O_HDMIRAW_WP_reg   (*((volatile unsigned int*) AIO_O_HDMIRAW_WP_reg))
#define AIO_O_HDMIRAW_WP_inst_adr                                                    "0x00A4"
#define AIO_O_HDMIRAW_WP_inst                                                        0x00A4
#define AIO_O_HDMIRAW_WP_addr_shift                                                  (3)
#define AIO_O_HDMIRAW_WP_addr_mask                                                   (0xFFFFFFF8)
#define AIO_O_HDMIRAW_WP_addr(data)                                                  (0xFFFFFFF8&((data)<<3))
#define AIO_O_HDMIRAW_WP_addr_src(data)                                              ((0xFFFFFFF8&(data))>>3)
#define AIO_O_HDMIRAW_WP_get_addr(data)                                              ((0xFFFFFFF8&(data))>>3)


#define AIO_O_RAW_WP                                                                 0x98006294
#define AIO_O_RAW_WP_reg_addr                                                        "0xD8006294"
#define AIO_O_RAW_WP_reg                                                             0xD8006294
#define set_AIO_O_RAW_WP_reg(data)   (*((volatile unsigned int*) AIO_O_RAW_WP_reg)=data)
#define get_AIO_O_RAW_WP_reg   (*((volatile unsigned int*) AIO_O_RAW_WP_reg))
#define AIO_O_RAW_WP_inst_adr                                                        "0x00A5"
#define AIO_O_RAW_WP_inst                                                            0x00A5
#define AIO_O_RAW_WP_addr_shift                                                      (3)
#define AIO_O_RAW_WP_addr_mask                                                       (0xFFFFFFF8)
#define AIO_O_RAW_WP_addr(data)                                                      (0xFFFFFFF8&((data)<<3))
#define AIO_O_RAW_WP_addr_src(data)                                                  ((0xFFFFFFF8&(data))>>3)
#define AIO_O_RAW_WP_get_addr(data)                                                  ((0xFFFFFFF8&(data))>>3)


#define AIO_O_PCM_WP_0                                                               0x980062A0
#define AIO_O_PCM_WP_1                                                               0x980062A4
#define AIO_O_PCM_WP_2                                                               0x980062A8
#define AIO_O_PCM_WP_3                                                               0x980062AC
#define AIO_O_PCM_WP_4                                                               0x980062B0
#define AIO_O_PCM_WP_5                                                               0x980062B4
#define AIO_O_PCM_WP_6                                                               0x980062B8
#define AIO_O_PCM_WP_7                                                               0x980062BC
#define AIO_O_PCM_WP_0_reg_addr                                                      "0xD80062A0"
#define AIO_O_PCM_WP_1_reg_addr                                                      "0xD80062A4"
#define AIO_O_PCM_WP_2_reg_addr                                                      "0xD80062A8"
#define AIO_O_PCM_WP_3_reg_addr                                                      "0xD80062AC"
#define AIO_O_PCM_WP_4_reg_addr                                                      "0xD80062B0"
#define AIO_O_PCM_WP_5_reg_addr                                                      "0xD80062B4"
#define AIO_O_PCM_WP_6_reg_addr                                                      "0xD80062B8"
#define AIO_O_PCM_WP_7_reg_addr                                                      "0xD80062BC"
#define AIO_O_PCM_WP_0_reg                                                           0xD80062A0
#define AIO_O_PCM_WP_1_reg                                                           0xD80062A4
#define AIO_O_PCM_WP_2_reg                                                           0xD80062A8
#define AIO_O_PCM_WP_3_reg                                                           0xD80062AC
#define AIO_O_PCM_WP_4_reg                                                           0xD80062B0
#define AIO_O_PCM_WP_5_reg                                                           0xD80062B4
#define AIO_O_PCM_WP_6_reg                                                           0xD80062B8
#define AIO_O_PCM_WP_7_reg                                                           0xD80062BC
#define set_AIO_O_PCM_WP_0_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_WP_0_reg)=data)
#define set_AIO_O_PCM_WP_1_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_WP_1_reg)=data)
#define set_AIO_O_PCM_WP_2_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_WP_2_reg)=data)
#define set_AIO_O_PCM_WP_3_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_WP_3_reg)=data)
#define set_AIO_O_PCM_WP_4_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_WP_4_reg)=data)
#define set_AIO_O_PCM_WP_5_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_WP_5_reg)=data)
#define set_AIO_O_PCM_WP_6_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_WP_6_reg)=data)
#define set_AIO_O_PCM_WP_7_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_WP_7_reg)=data)
#define get_AIO_O_PCM_WP_0_reg   (*((volatile unsigned int*) AIO_O_PCM_WP_0_reg))
#define get_AIO_O_PCM_WP_1_reg   (*((volatile unsigned int*) AIO_O_PCM_WP_1_reg))
#define get_AIO_O_PCM_WP_2_reg   (*((volatile unsigned int*) AIO_O_PCM_WP_2_reg))
#define get_AIO_O_PCM_WP_3_reg   (*((volatile unsigned int*) AIO_O_PCM_WP_3_reg))
#define get_AIO_O_PCM_WP_4_reg   (*((volatile unsigned int*) AIO_O_PCM_WP_4_reg))
#define get_AIO_O_PCM_WP_5_reg   (*((volatile unsigned int*) AIO_O_PCM_WP_5_reg))
#define get_AIO_O_PCM_WP_6_reg   (*((volatile unsigned int*) AIO_O_PCM_WP_6_reg))
#define get_AIO_O_PCM_WP_7_reg   (*((volatile unsigned int*) AIO_O_PCM_WP_7_reg))
#define AIO_O_PCM_WP_0_inst_adr                                                      "0x00A8"
#define AIO_O_PCM_WP_1_inst_adr                                                      "0x00A9"
#define AIO_O_PCM_WP_2_inst_adr                                                      "0x00AA"
#define AIO_O_PCM_WP_3_inst_adr                                                      "0x00AB"
#define AIO_O_PCM_WP_4_inst_adr                                                      "0x00AC"
#define AIO_O_PCM_WP_5_inst_adr                                                      "0x00AD"
#define AIO_O_PCM_WP_6_inst_adr                                                      "0x00AE"
#define AIO_O_PCM_WP_7_inst_adr                                                      "0x00AF"
#define AIO_O_PCM_WP_0_inst                                                          0x00A8
#define AIO_O_PCM_WP_1_inst                                                          0x00A9
#define AIO_O_PCM_WP_2_inst                                                          0x00AA
#define AIO_O_PCM_WP_3_inst                                                          0x00AB
#define AIO_O_PCM_WP_4_inst                                                          0x00AC
#define AIO_O_PCM_WP_5_inst                                                          0x00AD
#define AIO_O_PCM_WP_6_inst                                                          0x00AE
#define AIO_O_PCM_WP_7_inst                                                          0x00AF
#define AIO_O_PCM_WP_addr_shift                                                      (3)
#define AIO_O_PCM_WP_addr_mask                                                       (0xFFFFFFF8)
#define AIO_O_PCM_WP_addr(data)                                                      (0xFFFFFFF8&((data)<<3))
#define AIO_O_PCM_WP_addr_src(data)                                                  ((0xFFFFFFF8&(data))>>3)
#define AIO_O_PCM_WP_get_addr(data)                                                  ((0xFFFFFFF8&(data))>>3)


#define AIO_O_DMA_STATUS                                                             0x980062c0
#define AIO_O_DMA_STATUS_reg_addr                                                    "0xD80062C0"
#define AIO_O_DMA_STATUS_reg                                                         0xD80062C0
#define set_AIO_O_DMA_STATUS_reg(data)   (*((volatile unsigned int*) AIO_O_DMA_STATUS_reg)=data)
#define get_AIO_O_DMA_STATUS_reg   (*((volatile unsigned int*) AIO_O_DMA_STATUS_reg))
#define AIO_O_DMA_STATUS_inst_adr                                                    "0x00B0"
#define AIO_O_DMA_STATUS_inst                                                        0x00B0
#define AIO_O_DMA_STATUS_dmago_shift                                                 (0)
#define AIO_O_DMA_STATUS_dmago_mask                                                  (0x00000001)
#define AIO_O_DMA_STATUS_dmago(data)                                                 (0x00000001&((data)<<0))
#define AIO_O_DMA_STATUS_dmago_src(data)                                             ((0x00000001&(data))>>0)
#define AIO_O_DMA_STATUS_get_dmago(data)                                             ((0x00000001&(data))>>0)


#define AIO_I_GO                                                                     0x98006300
#define AIO_I_GO_reg_addr                                                            "0xD8006300"
#define AIO_I_GO_reg                                                                 0xD8006300
#define set_AIO_I_GO_reg(data)   (*((volatile unsigned int*) AIO_I_GO_reg)=data)
#define get_AIO_I_GO_reg   (*((volatile unsigned int*) AIO_I_GO_reg))
#define AIO_I_GO_inst_adr                                                            "0x00C0"
#define AIO_I_GO_inst                                                                0x00C0
#define AIO_I_GO_go0_shift                                                           (1)
#define AIO_I_GO_go0_mask                                                            (0x00000002)
#define AIO_I_GO_go0(data)                                                           (0x00000002&((data)<<1))
#define AIO_I_GO_go0_src(data)                                                       ((0x00000002&(data))>>1)
#define AIO_I_GO_get_go0(data)                                                       ((0x00000002&(data))>>1)


#define AIO_O_GO                                                                     0x98006304
#define AIO_O_GO_reg_addr                                                            "0xD8006304"
#define AIO_O_GO_reg                                                                 0xD8006304
#define set_AIO_O_GO_reg(data)   (*((volatile unsigned int*) AIO_O_GO_reg)=data)
#define get_AIO_O_GO_reg   (*((volatile unsigned int*) AIO_O_GO_reg))
#define AIO_O_GO_inst_adr                                                            "0x00C1"
#define AIO_O_GO_inst                                                                0x00C1
#define AIO_O_GO_goacdac_shift                                                       (3)
#define AIO_O_GO_goacdac_mask                                                        (0x00000008)
#define AIO_O_GO_goacdac(data)                                                       (0x00000008&((data)<<3))
#define AIO_O_GO_goacdac_src(data)                                                   ((0x00000008&(data))>>3)
#define AIO_O_GO_get_goacdac(data)                                                   ((0x00000008&(data))>>3)
#define AIO_O_GO_gohdmi_shift                                                        (2)
#define AIO_O_GO_gohdmi_mask                                                         (0x00000004)
#define AIO_O_GO_gohdmi(data)                                                        (0x00000004&((data)<<2))
#define AIO_O_GO_gohdmi_src(data)                                                    ((0x00000004&(data))>>2)
#define AIO_O_GO_get_gohdmi(data)                                                    ((0x00000004&(data))>>2)
#define AIO_O_GO_goi2s_shift                                                         (1)
#define AIO_O_GO_goi2s_mask                                                          (0x00000002)
#define AIO_O_GO_goi2s(data)                                                         (0x00000002&((data)<<1))
#define AIO_O_GO_goi2s_src(data)                                                     ((0x00000002&(data))>>1)
#define AIO_O_GO_get_goi2s(data)                                                     ((0x00000002&(data))>>1)
#define AIO_O_GO_gospf_shift                                                         (0)
#define AIO_O_GO_gospf_mask                                                          (0x00000001)
#define AIO_O_GO_gospf(data)                                                         (0x00000001&((data)<<0))
#define AIO_O_GO_gospf_src(data)                                                     ((0x00000001&(data))>>0)
#define AIO_O_GO_get_gospf(data)                                                     ((0x00000001&(data))>>0)


#define AIO_I_PAUSE                                                                  0x98006308
#define AIO_I_PAUSE_reg_addr                                                         "0xD8006308"
#define AIO_I_PAUSE_reg                                                              0xD8006308
#define set_AIO_I_PAUSE_reg(data)   (*((volatile unsigned int*) AIO_I_PAUSE_reg)=data)
#define get_AIO_I_PAUSE_reg   (*((volatile unsigned int*) AIO_I_PAUSE_reg))
#define AIO_I_PAUSE_inst_adr                                                         "0x00C2"
#define AIO_I_PAUSE_inst                                                             0x00C2
#define AIO_I_PAUSE_pause0_shift                                                     (0)
#define AIO_I_PAUSE_pause0_mask                                                      (0x00000001)
#define AIO_I_PAUSE_pause0(data)                                                     (0x00000001&((data)<<0))
#define AIO_I_PAUSE_pause0_src(data)                                                 ((0x00000001&(data))>>0)
#define AIO_I_PAUSE_get_pause0(data)                                                 ((0x00000001&(data))>>0)


#define AIO_O_PAUSE                                                                  0x9800630c
#define AIO_O_PAUSE_reg_addr                                                         "0xD800630C"
#define AIO_O_PAUSE_reg                                                              0xD800630C
#define set_AIO_O_PAUSE_reg(data)   (*((volatile unsigned int*) AIO_O_PAUSE_reg)=data)
#define get_AIO_O_PAUSE_reg   (*((volatile unsigned int*) AIO_O_PAUSE_reg))
#define AIO_O_PAUSE_inst_adr                                                         "0x00C3"
#define AIO_O_PAUSE_inst                                                             0x00C3
#define AIO_O_PAUSE_pause2_shift                                                     (2)
#define AIO_O_PAUSE_pause2_mask                                                      (0x00000004)
#define AIO_O_PAUSE_pause2(data)                                                     (0x00000004&((data)<<2))
#define AIO_O_PAUSE_pause2_src(data)                                                 ((0x00000004&(data))>>2)
#define AIO_O_PAUSE_get_pause2(data)                                                 ((0x00000004&(data))>>2)
#define AIO_O_PAUSE_pause1_shift                                                     (1)
#define AIO_O_PAUSE_pause1_mask                                                      (0x00000002)
#define AIO_O_PAUSE_pause1(data)                                                     (0x00000002&((data)<<1))
#define AIO_O_PAUSE_pause1_src(data)                                                 ((0x00000002&(data))>>1)
#define AIO_O_PAUSE_get_pause1(data)                                                 ((0x00000002&(data))>>1)
#define AIO_O_PAUSE_pause0_shift                                                     (0)
#define AIO_O_PAUSE_pause0_mask                                                      (0x00000001)
#define AIO_O_PAUSE_pause0(data)                                                     (0x00000001&((data)<<0))
#define AIO_O_PAUSE_pause0_src(data)                                                 ((0x00000001&(data))>>0)
#define AIO_O_PAUSE_get_pause0(data)                                                 ((0x00000001&(data))>>0)


#define AIO_I_I2S_DDRTHD                                                             0x98006310
#define AIO_I_I2S_DDRTHD_reg_addr                                                    "0xD8006310"
#define AIO_I_I2S_DDRTHD_reg                                                         0xD8006310
#define set_AIO_I_I2S_DDRTHD_reg(data)   (*((volatile unsigned int*) AIO_I_I2S_DDRTHD_reg)=data)
#define get_AIO_I_I2S_DDRTHD_reg   (*((volatile unsigned int*) AIO_I_I2S_DDRTHD_reg))
#define AIO_I_I2S_DDRTHD_inst_adr                                                    "0x00C4"
#define AIO_I_I2S_DDRTHD_inst                                                        0x00C4
#define AIO_I_I2S_DDRTHD_thd_shift                                                   (3)
#define AIO_I_I2S_DDRTHD_thd_mask                                                    (0xFFFFFFF8)
#define AIO_I_I2S_DDRTHD_thd(data)                                                   (0xFFFFFFF8&((data)<<3))
#define AIO_I_I2S_DDRTHD_thd_src(data)                                               ((0xFFFFFFF8&(data))>>3)
#define AIO_I_I2S_DDRTHD_get_thd(data)                                               ((0xFFFFFFF8&(data))>>3)


#define AIO_I_I2S_TIMCNT                                                             0x98006318
#define AIO_I_I2S_TIMCNT_reg_addr                                                    "0xD8006318"
#define AIO_I_I2S_TIMCNT_reg                                                         0xD8006318
#define set_AIO_I_I2S_TIMCNT_reg(data)   (*((volatile unsigned int*) AIO_I_I2S_TIMCNT_reg)=data)
#define get_AIO_I_I2S_TIMCNT_reg   (*((volatile unsigned int*) AIO_I_I2S_TIMCNT_reg))
#define AIO_I_I2S_TIMCNT_inst_adr                                                    "0x00C6"
#define AIO_I_I2S_TIMCNT_inst                                                        0x00C6
#define AIO_I_I2S_TIMCNT_count_shift                                                 (0)
#define AIO_I_I2S_TIMCNT_count_mask                                                  (0xFFFFFFFF)
#define AIO_I_I2S_TIMCNT_count(data)                                                 (0xFFFFFFFF&((data)<<0))
#define AIO_I_I2S_TIMCNT_count_src(data)                                             ((0xFFFFFFFF&(data))>>0)
#define AIO_I_I2S_TIMCNT_get_count(data)                                             ((0xFFFFFFFF&(data))>>0)


#define AIO_I_I2S_TIMTHD                                                             0x98006320
#define AIO_I_I2S_TIMTHD_reg_addr                                                    "0xD8006320"
#define AIO_I_I2S_TIMTHD_reg                                                         0xD8006320
#define set_AIO_I_I2S_TIMTHD_reg(data)   (*((volatile unsigned int*) AIO_I_I2S_TIMTHD_reg)=data)
#define get_AIO_I_I2S_TIMTHD_reg   (*((volatile unsigned int*) AIO_I_I2S_TIMTHD_reg))
#define AIO_I_I2S_TIMTHD_inst_adr                                                    "0x00C8"
#define AIO_I_I2S_TIMTHD_inst                                                        0x00C8
#define AIO_I_I2S_TIMTHD_thd_shift                                                   (0)
#define AIO_I_I2S_TIMTHD_thd_mask                                                    (0xFFFFFFFF)
#define AIO_I_I2S_TIMTHD_thd(data)                                                   (0xFFFFFFFF&((data)<<0))
#define AIO_I_I2S_TIMTHD_thd_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define AIO_I_I2S_TIMTHD_get_thd(data)                                               ((0xFFFFFFFF&(data))>>0)


#define AIO_I_INTE                                                                   0x98006330
#define AIO_I_INTE_reg_addr                                                          "0xD8006330"
#define AIO_I_INTE_reg                                                               0xD8006330
#define set_AIO_I_INTE_reg(data)   (*((volatile unsigned int*) AIO_I_INTE_reg)=data)
#define get_AIO_I_INTE_reg   (*((volatile unsigned int*) AIO_I_INTE_reg))
#define AIO_I_INTE_inst_adr                                                          "0x00CC"
#define AIO_I_INTE_inst                                                              0x00CC
#define AIO_I_INTE_timi2sinte_shift                                                  (25)
#define AIO_I_INTE_timi2sinte_mask                                                   (0x02000000)
#define AIO_I_INTE_timi2sinte(data)                                                  (0x02000000&((data)<<25))
#define AIO_I_INTE_timi2sinte_src(data)                                              ((0x02000000&(data))>>25)
#define AIO_I_INTE_get_timi2sinte(data)                                              ((0x02000000&(data))>>25)
#define AIO_I_INTE_thdinte0_shift                                                    (21)
#define AIO_I_INTE_thdinte0_mask                                                     (0x00200000)
#define AIO_I_INTE_thdinte0(data)                                                    (0x00200000&((data)<<21))
#define AIO_I_INTE_thdinte0_src(data)                                                ((0x00200000&(data))>>21)
#define AIO_I_INTE_get_thdinte0(data)                                                ((0x00200000&(data))>>21)
#define AIO_I_INTE_fifointe1_shift                                                   (10)
#define AIO_I_INTE_fifointe1_mask                                                    (0x00000400)
#define AIO_I_INTE_fifointe1(data)                                                   (0x00000400&((data)<<10))
#define AIO_I_INTE_fifointe1_src(data)                                               ((0x00000400&(data))>>10)
#define AIO_I_INTE_get_fifointe1(data)                                               ((0x00000400&(data))>>10)
#define AIO_I_INTE_fifointe0_shift                                                   (9)
#define AIO_I_INTE_fifointe0_mask                                                    (0x00000200)
#define AIO_I_INTE_fifointe0(data)                                                   (0x00000200&((data)<<9))
#define AIO_I_INTE_fifointe0_src(data)                                               ((0x00000200&(data))>>9)
#define AIO_I_INTE_get_fifointe0(data)                                               ((0x00000200&(data))>>9)
#define AIO_I_INTE_draminte1_shift                                                   (2)
#define AIO_I_INTE_draminte1_mask                                                    (0x00000004)
#define AIO_I_INTE_draminte1(data)                                                   (0x00000004&((data)<<2))
#define AIO_I_INTE_draminte1_src(data)                                               ((0x00000004&(data))>>2)
#define AIO_I_INTE_get_draminte1(data)                                               ((0x00000004&(data))>>2)
#define AIO_I_INTE_draminte0_shift                                                   (1)
#define AIO_I_INTE_draminte0_mask                                                    (0x00000002)
#define AIO_I_INTE_draminte0(data)                                                   (0x00000002&((data)<<1))
#define AIO_I_INTE_draminte0_src(data)                                               ((0x00000002&(data))>>1)
#define AIO_I_INTE_get_draminte0(data)                                               ((0x00000002&(data))>>1)
#define AIO_I_INTE_write_data_shift                                                  (0)
#define AIO_I_INTE_write_data_mask                                                   (0x00000001)
#define AIO_I_INTE_write_data(data)                                                  (0x00000001&((data)<<0))
#define AIO_I_INTE_write_data_src(data)                                              ((0x00000001&(data))>>0)
#define AIO_I_INTE_get_write_data(data)                                              ((0x00000001&(data))>>0)


#define AIO_I_INTS                                                                   0x98006334
#define AIO_I_INTS_reg_addr                                                          "0xD8006334"
#define AIO_I_INTS_reg                                                               0xD8006334
#define set_AIO_I_INTS_reg(data)   (*((volatile unsigned int*) AIO_I_INTS_reg)=data)
#define get_AIO_I_INTS_reg   (*((volatile unsigned int*) AIO_I_INTS_reg))
#define AIO_I_INTS_inst_adr                                                          "0x00CD"
#define AIO_I_INTS_inst                                                              0x00CD
#define AIO_I_INTS_timi2sints_shift                                                  (25)
#define AIO_I_INTS_timi2sints_mask                                                   (0x02000000)
#define AIO_I_INTS_timi2sints(data)                                                  (0x02000000&((data)<<25))
#define AIO_I_INTS_timi2sints_src(data)                                              ((0x02000000&(data))>>25)
#define AIO_I_INTS_get_timi2sints(data)                                              ((0x02000000&(data))>>25)
#define AIO_I_INTS_thdints0_shift                                                    (21)
#define AIO_I_INTS_thdints0_mask                                                     (0x00200000)
#define AIO_I_INTS_thdints0(data)                                                    (0x00200000&((data)<<21))
#define AIO_I_INTS_thdints0_src(data)                                                ((0x00200000&(data))>>21)
#define AIO_I_INTS_get_thdints0(data)                                                ((0x00200000&(data))>>21)
#define AIO_I_INTS_fifoints1_shift                                                   (10)
#define AIO_I_INTS_fifoints1_mask                                                    (0x00000400)
#define AIO_I_INTS_fifoints1(data)                                                   (0x00000400&((data)<<10))
#define AIO_I_INTS_fifoints1_src(data)                                               ((0x00000400&(data))>>10)
#define AIO_I_INTS_get_fifoints1(data)                                               ((0x00000400&(data))>>10)
#define AIO_I_INTS_fifoints0_shift                                                   (9)
#define AIO_I_INTS_fifoints0_mask                                                    (0x00000200)
#define AIO_I_INTS_fifoints0(data)                                                   (0x00000200&((data)<<9))
#define AIO_I_INTS_fifoints0_src(data)                                               ((0x00000200&(data))>>9)
#define AIO_I_INTS_get_fifoints0(data)                                               ((0x00000200&(data))>>9)
#define AIO_I_INTS_dramints1_shift                                                   (2)
#define AIO_I_INTS_dramints1_mask                                                    (0x00000004)
#define AIO_I_INTS_dramints1(data)                                                   (0x00000004&((data)<<2))
#define AIO_I_INTS_dramints1_src(data)                                               ((0x00000004&(data))>>2)
#define AIO_I_INTS_get_dramints1(data)                                               ((0x00000004&(data))>>2)
#define AIO_I_INTS_dramints0_shift                                                   (1)
#define AIO_I_INTS_dramints0_mask                                                    (0x00000002)
#define AIO_I_INTS_dramints0(data)                                                   (0x00000002&((data)<<1))
#define AIO_I_INTS_dramints0_src(data)                                               ((0x00000002&(data))>>1)
#define AIO_I_INTS_get_dramints0(data)                                               ((0x00000002&(data))>>1)
#define AIO_I_INTS_write_data_shift                                                  (0)
#define AIO_I_INTS_write_data_mask                                                   (0x00000001)
#define AIO_I_INTS_write_data(data)                                                  (0x00000001&((data)<<0))
#define AIO_I_INTS_write_data_src(data)                                              ((0x00000001&(data))>>0)
#define AIO_I_INTS_get_write_data(data)                                              ((0x00000001&(data))>>0)


#define AIO_O_PCM_DDRTHD                                                             0x98006400
#define AIO_O_PCM_DDRTHD_reg_addr                                                    "0xD8006400"
#define AIO_O_PCM_DDRTHD_reg                                                         0xD8006400
#define set_AIO_O_PCM_DDRTHD_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_DDRTHD_reg)=data)
#define get_AIO_O_PCM_DDRTHD_reg   (*((volatile unsigned int*) AIO_O_PCM_DDRTHD_reg))
#define AIO_O_PCM_DDRTHD_inst_adr                                                    "0x0000"
#define AIO_O_PCM_DDRTHD_inst                                                        0x0000
#define AIO_O_PCM_DDRTHD_thd_shift                                                   (3)
#define AIO_O_PCM_DDRTHD_thd_mask                                                    (0xFFFFFFF8)
#define AIO_O_PCM_DDRTHD_thd(data)                                                   (0xFFFFFFF8&((data)<<3))
#define AIO_O_PCM_DDRTHD_thd_src(data)                                               ((0xFFFFFFF8&(data))>>3)
#define AIO_O_PCM_DDRTHD_get_thd(data)                                               ((0xFFFFFFF8&(data))>>3)


#define AIO_O_PCM_TIMCNT                                                             0x98006404
#define AIO_O_PCM_TIMCNT_reg_addr                                                    "0xD8006404"
#define AIO_O_PCM_TIMCNT_reg                                                         0xD8006404
#define set_AIO_O_PCM_TIMCNT_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_TIMCNT_reg)=data)
#define get_AIO_O_PCM_TIMCNT_reg   (*((volatile unsigned int*) AIO_O_PCM_TIMCNT_reg))
#define AIO_O_PCM_TIMCNT_inst_adr                                                    "0x0001"
#define AIO_O_PCM_TIMCNT_inst                                                        0x0001
#define AIO_O_PCM_TIMCNT_count_shift                                                 (0)
#define AIO_O_PCM_TIMCNT_count_mask                                                  (0xFFFFFFFF)
#define AIO_O_PCM_TIMCNT_count(data)                                                 (0xFFFFFFFF&((data)<<0))
#define AIO_O_PCM_TIMCNT_count_src(data)                                             ((0xFFFFFFFF&(data))>>0)
#define AIO_O_PCM_TIMCNT_get_count(data)                                             ((0xFFFFFFFF&(data))>>0)


#define AIO_O_PCM_TIMTHD                                                             0x98006408
#define AIO_O_PCM_TIMTHD_reg_addr                                                    "0xD8006408"
#define AIO_O_PCM_TIMTHD_reg                                                         0xD8006408
#define set_AIO_O_PCM_TIMTHD_reg(data)   (*((volatile unsigned int*) AIO_O_PCM_TIMTHD_reg)=data)
#define get_AIO_O_PCM_TIMTHD_reg   (*((volatile unsigned int*) AIO_O_PCM_TIMTHD_reg))
#define AIO_O_PCM_TIMTHD_inst_adr                                                    "0x0002"
#define AIO_O_PCM_TIMTHD_inst                                                        0x0002
#define AIO_O_PCM_TIMTHD_thd_shift                                                   (0)
#define AIO_O_PCM_TIMTHD_thd_mask                                                    (0xFFFFFFFF)
#define AIO_O_PCM_TIMTHD_thd(data)                                                   (0xFFFFFFFF&((data)<<0))
#define AIO_O_PCM_TIMTHD_thd_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define AIO_O_PCM_TIMTHD_get_thd(data)                                               ((0xFFFFFFFF&(data))>>0)


#define AIO_O_RAW_DDRTHD                                                             0x98006410
#define AIO_O_RAW_DDRTHD_reg_addr                                                    "0xD8006410"
#define AIO_O_RAW_DDRTHD_reg                                                         0xD8006410
#define set_AIO_O_RAW_DDRTHD_reg(data)   (*((volatile unsigned int*) AIO_O_RAW_DDRTHD_reg)=data)
#define get_AIO_O_RAW_DDRTHD_reg   (*((volatile unsigned int*) AIO_O_RAW_DDRTHD_reg))
#define AIO_O_RAW_DDRTHD_inst_adr                                                    "0x0004"
#define AIO_O_RAW_DDRTHD_inst                                                        0x0004
#define AIO_O_RAW_DDRTHD_thd_shift                                                   (3)
#define AIO_O_RAW_DDRTHD_thd_mask                                                    (0xFFFFFFF8)
#define AIO_O_RAW_DDRTHD_thd(data)                                                   (0xFFFFFFF8&((data)<<3))
#define AIO_O_RAW_DDRTHD_thd_src(data)                                               ((0xFFFFFFF8&(data))>>3)
#define AIO_O_RAW_DDRTHD_get_thd(data)                                               ((0xFFFFFFF8&(data))>>3)


#define AIO_O_RAW_TIMCNT                                                             0x98006414
#define AIO_O_RAW_TIMCNT_reg_addr                                                    "0xD8006414"
#define AIO_O_RAW_TIMCNT_reg                                                         0xD8006414
#define set_AIO_O_RAW_TIMCNT_reg(data)   (*((volatile unsigned int*) AIO_O_RAW_TIMCNT_reg)=data)
#define get_AIO_O_RAW_TIMCNT_reg   (*((volatile unsigned int*) AIO_O_RAW_TIMCNT_reg))
#define AIO_O_RAW_TIMCNT_inst_adr                                                    "0x0005"
#define AIO_O_RAW_TIMCNT_inst                                                        0x0005
#define AIO_O_RAW_TIMCNT_count_shift                                                 (0)
#define AIO_O_RAW_TIMCNT_count_mask                                                  (0xFFFFFFFF)
#define AIO_O_RAW_TIMCNT_count(data)                                                 (0xFFFFFFFF&((data)<<0))
#define AIO_O_RAW_TIMCNT_count_src(data)                                             ((0xFFFFFFFF&(data))>>0)
#define AIO_O_RAW_TIMCNT_get_count(data)                                             ((0xFFFFFFFF&(data))>>0)


#define AIO_O_RAW_TIMTHD                                                             0x98006418
#define AIO_O_RAW_TIMTHD_reg_addr                                                    "0xD8006418"
#define AIO_O_RAW_TIMTHD_reg                                                         0xD8006418
#define set_AIO_O_RAW_TIMTHD_reg(data)   (*((volatile unsigned int*) AIO_O_RAW_TIMTHD_reg)=data)
#define get_AIO_O_RAW_TIMTHD_reg   (*((volatile unsigned int*) AIO_O_RAW_TIMTHD_reg))
#define AIO_O_RAW_TIMTHD_inst_adr                                                    "0x0006"
#define AIO_O_RAW_TIMTHD_inst                                                        0x0006
#define AIO_O_RAW_TIMTHD_thd_shift                                                   (0)
#define AIO_O_RAW_TIMTHD_thd_mask                                                    (0xFFFFFFFF)
#define AIO_O_RAW_TIMTHD_thd(data)                                                   (0xFFFFFFFF&((data)<<0))
#define AIO_O_RAW_TIMTHD_thd_src(data)                                               ((0xFFFFFFFF&(data))>>0)
#define AIO_O_RAW_TIMTHD_get_thd(data)                                               ((0xFFFFFFFF&(data))>>0)


#define AIO_O_HDMI_DDRTHD                                                            0x98006420
#define AIO_O_HDMI_DDRTHD_reg_addr                                                   "0xD8006420"
#define AIO_O_HDMI_DDRTHD_reg                                                        0xD8006420
#define set_AIO_O_HDMI_DDRTHD_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI_DDRTHD_reg)=data)
#define get_AIO_O_HDMI_DDRTHD_reg   (*((volatile unsigned int*) AIO_O_HDMI_DDRTHD_reg))
#define AIO_O_HDMI_DDRTHD_inst_adr                                                   "0x0008"
#define AIO_O_HDMI_DDRTHD_inst                                                       0x0008
#define AIO_O_HDMI_DDRTHD_thd_shift                                                  (3)
#define AIO_O_HDMI_DDRTHD_thd_mask                                                   (0xFFFFFFF8)
#define AIO_O_HDMI_DDRTHD_thd(data)                                                  (0xFFFFFFF8&((data)<<3))
#define AIO_O_HDMI_DDRTHD_thd_src(data)                                              ((0xFFFFFFF8&(data))>>3)
#define AIO_O_HDMI_DDRTHD_get_thd(data)                                              ((0xFFFFFFF8&(data))>>3)


#define AIO_O_HDMI_TIMCNT                                                            0x98006424
#define AIO_O_HDMI_TIMCNT_reg_addr                                                   "0xD8006424"
#define AIO_O_HDMI_TIMCNT_reg                                                        0xD8006424
#define set_AIO_O_HDMI_TIMCNT_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI_TIMCNT_reg)=data)
#define get_AIO_O_HDMI_TIMCNT_reg   (*((volatile unsigned int*) AIO_O_HDMI_TIMCNT_reg))
#define AIO_O_HDMI_TIMCNT_inst_adr                                                   "0x0009"
#define AIO_O_HDMI_TIMCNT_inst                                                       0x0009
#define AIO_O_HDMI_TIMCNT_count_shift                                                (0)
#define AIO_O_HDMI_TIMCNT_count_mask                                                 (0xFFFFFFFF)
#define AIO_O_HDMI_TIMCNT_count(data)                                                (0xFFFFFFFF&((data)<<0))
#define AIO_O_HDMI_TIMCNT_count_src(data)                                            ((0xFFFFFFFF&(data))>>0)
#define AIO_O_HDMI_TIMCNT_get_count(data)                                            ((0xFFFFFFFF&(data))>>0)


#define AIO_O_HDMI_TIMTHD                                                            0x98006428
#define AIO_O_HDMI_TIMTHD_reg_addr                                                   "0xD8006428"
#define AIO_O_HDMI_TIMTHD_reg                                                        0xD8006428
#define set_AIO_O_HDMI_TIMTHD_reg(data)   (*((volatile unsigned int*) AIO_O_HDMI_TIMTHD_reg)=data)
#define get_AIO_O_HDMI_TIMTHD_reg   (*((volatile unsigned int*) AIO_O_HDMI_TIMTHD_reg))
#define AIO_O_HDMI_TIMTHD_inst_adr                                                   "0x000A"
#define AIO_O_HDMI_TIMTHD_inst                                                       0x000A
#define AIO_O_HDMI_TIMTHD_thd_shift                                                  (0)
#define AIO_O_HDMI_TIMTHD_thd_mask                                                   (0xFFFFFFFF)
#define AIO_O_HDMI_TIMTHD_thd(data)                                                  (0xFFFFFFFF&((data)<<0))
#define AIO_O_HDMI_TIMTHD_thd_src(data)                                              ((0xFFFFFFFF&(data))>>0)
#define AIO_O_HDMI_TIMTHD_get_thd(data)                                              ((0xFFFFFFFF&(data))>>0)


#define AIO_O_INTE                                                                   0x98006440
#define AIO_O_INTE_reg_addr                                                          "0xD8006440"
#define AIO_O_INTE_reg                                                               0xD8006440
#define set_AIO_O_INTE_reg(data)   (*((volatile unsigned int*) AIO_O_INTE_reg)=data)
#define get_AIO_O_INTE_reg   (*((volatile unsigned int*) AIO_O_INTE_reg))
#define AIO_O_INTE_inst_adr                                                          "0x0010"
#define AIO_O_INTE_inst                                                              0x0010
#define AIO_O_INTE_hdmi8ch_draminte7_shift                                           (24)
#define AIO_O_INTE_hdmi8ch_draminte7_mask                                            (0x01000000)
#define AIO_O_INTE_hdmi8ch_draminte7(data)                                           (0x01000000&((data)<<24))
#define AIO_O_INTE_hdmi8ch_draminte7_src(data)                                       ((0x01000000&(data))>>24)
#define AIO_O_INTE_get_hdmi8ch_draminte7(data)                                       ((0x01000000&(data))>>24)
#define AIO_O_INTE_hdmi8ch_draminte6_shift                                           (23)
#define AIO_O_INTE_hdmi8ch_draminte6_mask                                            (0x00800000)
#define AIO_O_INTE_hdmi8ch_draminte6(data)                                           (0x00800000&((data)<<23))
#define AIO_O_INTE_hdmi8ch_draminte6_src(data)                                       ((0x00800000&(data))>>23)
#define AIO_O_INTE_get_hdmi8ch_draminte6(data)                                       ((0x00800000&(data))>>23)
#define AIO_O_INTE_hdmi8ch_draminte5_shift                                           (22)
#define AIO_O_INTE_hdmi8ch_draminte5_mask                                            (0x00400000)
#define AIO_O_INTE_hdmi8ch_draminte5(data)                                           (0x00400000&((data)<<22))
#define AIO_O_INTE_hdmi8ch_draminte5_src(data)                                       ((0x00400000&(data))>>22)
#define AIO_O_INTE_get_hdmi8ch_draminte5(data)                                       ((0x00400000&(data))>>22)
#define AIO_O_INTE_hdmi8ch_draminte4_shift                                           (21)
#define AIO_O_INTE_hdmi8ch_draminte4_mask                                            (0x00200000)
#define AIO_O_INTE_hdmi8ch_draminte4(data)                                           (0x00200000&((data)<<21))
#define AIO_O_INTE_hdmi8ch_draminte4_src(data)                                       ((0x00200000&(data))>>21)
#define AIO_O_INTE_get_hdmi8ch_draminte4(data)                                       ((0x00200000&(data))>>21)
#define AIO_O_INTE_hdmi8ch_draminte3_shift                                           (20)
#define AIO_O_INTE_hdmi8ch_draminte3_mask                                            (0x00100000)
#define AIO_O_INTE_hdmi8ch_draminte3(data)                                           (0x00100000&((data)<<20))
#define AIO_O_INTE_hdmi8ch_draminte3_src(data)                                       ((0x00100000&(data))>>20)
#define AIO_O_INTE_get_hdmi8ch_draminte3(data)                                       ((0x00100000&(data))>>20)
#define AIO_O_INTE_hdmi8ch_draminte2_shift                                           (19)
#define AIO_O_INTE_hdmi8ch_draminte2_mask                                            (0x00080000)
#define AIO_O_INTE_hdmi8ch_draminte2(data)                                           (0x00080000&((data)<<19))
#define AIO_O_INTE_hdmi8ch_draminte2_src(data)                                       ((0x00080000&(data))>>19)
#define AIO_O_INTE_get_hdmi8ch_draminte2(data)                                       ((0x00080000&(data))>>19)
#define AIO_O_INTE_hdmi8ch_draminte1_shift                                           (18)
#define AIO_O_INTE_hdmi8ch_draminte1_mask                                            (0x00040000)
#define AIO_O_INTE_hdmi8ch_draminte1(data)                                           (0x00040000&((data)<<18))
#define AIO_O_INTE_hdmi8ch_draminte1_src(data)                                       ((0x00040000&(data))>>18)
#define AIO_O_INTE_get_hdmi8ch_draminte1(data)                                       ((0x00040000&(data))>>18)
#define AIO_O_INTE_hdmi8ch_draminte0_shift                                           (17)
#define AIO_O_INTE_hdmi8ch_draminte0_mask                                            (0x00020000)
#define AIO_O_INTE_hdmi8ch_draminte0(data)                                           (0x00020000&((data)<<17))
#define AIO_O_INTE_hdmi8ch_draminte0_src(data)                                       ((0x00020000&(data))>>17)
#define AIO_O_INTE_get_hdmi8ch_draminte0(data)                                       ((0x00020000&(data))>>17)
#define AIO_O_INTE_hdmi8ch_fifointe7_shift                                           (16)
#define AIO_O_INTE_hdmi8ch_fifointe7_mask                                            (0x00010000)
#define AIO_O_INTE_hdmi8ch_fifointe7(data)                                           (0x00010000&((data)<<16))
#define AIO_O_INTE_hdmi8ch_fifointe7_src(data)                                       ((0x00010000&(data))>>16)
#define AIO_O_INTE_get_hdmi8ch_fifointe7(data)                                       ((0x00010000&(data))>>16)
#define AIO_O_INTE_hdmi8ch_fifointe6_shift                                           (15)
#define AIO_O_INTE_hdmi8ch_fifointe6_mask                                            (0x00008000)
#define AIO_O_INTE_hdmi8ch_fifointe6(data)                                           (0x00008000&((data)<<15))
#define AIO_O_INTE_hdmi8ch_fifointe6_src(data)                                       ((0x00008000&(data))>>15)
#define AIO_O_INTE_get_hdmi8ch_fifointe6(data)                                       ((0x00008000&(data))>>15)
#define AIO_O_INTE_hdmi8ch_fifointe5_shift                                           (14)
#define AIO_O_INTE_hdmi8ch_fifointe5_mask                                            (0x00004000)
#define AIO_O_INTE_hdmi8ch_fifointe5(data)                                           (0x00004000&((data)<<14))
#define AIO_O_INTE_hdmi8ch_fifointe5_src(data)                                       ((0x00004000&(data))>>14)
#define AIO_O_INTE_get_hdmi8ch_fifointe5(data)                                       ((0x00004000&(data))>>14)
#define AIO_O_INTE_hdmi8ch_fifointe4_shift                                           (13)
#define AIO_O_INTE_hdmi8ch_fifointe4_mask                                            (0x00002000)
#define AIO_O_INTE_hdmi8ch_fifointe4(data)                                           (0x00002000&((data)<<13))
#define AIO_O_INTE_hdmi8ch_fifointe4_src(data)                                       ((0x00002000&(data))>>13)
#define AIO_O_INTE_get_hdmi8ch_fifointe4(data)                                       ((0x00002000&(data))>>13)
#define AIO_O_INTE_hdmi8ch_fifointe3_shift                                           (12)
#define AIO_O_INTE_hdmi8ch_fifointe3_mask                                            (0x00001000)
#define AIO_O_INTE_hdmi8ch_fifointe3(data)                                           (0x00001000&((data)<<12))
#define AIO_O_INTE_hdmi8ch_fifointe3_src(data)                                       ((0x00001000&(data))>>12)
#define AIO_O_INTE_get_hdmi8ch_fifointe3(data)                                       ((0x00001000&(data))>>12)
#define AIO_O_INTE_hdmi8ch_fifointe2_shift                                           (11)
#define AIO_O_INTE_hdmi8ch_fifointe2_mask                                            (0x00000800)
#define AIO_O_INTE_hdmi8ch_fifointe2(data)                                           (0x00000800&((data)<<11))
#define AIO_O_INTE_hdmi8ch_fifointe2_src(data)                                       ((0x00000800&(data))>>11)
#define AIO_O_INTE_get_hdmi8ch_fifointe2(data)                                       ((0x00000800&(data))>>11)
#define AIO_O_INTE_hdmi8ch_fifointe1_shift                                           (10)
#define AIO_O_INTE_hdmi8ch_fifointe1_mask                                            (0x00000400)
#define AIO_O_INTE_hdmi8ch_fifointe1(data)                                           (0x00000400&((data)<<10))
#define AIO_O_INTE_hdmi8ch_fifointe1_src(data)                                       ((0x00000400&(data))>>10)
#define AIO_O_INTE_get_hdmi8ch_fifointe1(data)                                       ((0x00000400&(data))>>10)
#define AIO_O_INTE_hdmi8ch_fifointe0_shift                                           (9)
#define AIO_O_INTE_hdmi8ch_fifointe0_mask                                            (0x00000200)
#define AIO_O_INTE_hdmi8ch_fifointe0(data)                                           (0x00000200&((data)<<9))
#define AIO_O_INTE_hdmi8ch_fifointe0_src(data)                                       ((0x00000200&(data))>>9)
#define AIO_O_INTE_get_hdmi8ch_fifointe0(data)                                       ((0x00000200&(data))>>9)
#define AIO_O_INTE_rawtiminte_shift                                                  (8)
#define AIO_O_INTE_rawtiminte_mask                                                   (0x00000100)
#define AIO_O_INTE_rawtiminte(data)                                                  (0x00000100&((data)<<8))
#define AIO_O_INTE_rawtiminte_src(data)                                              ((0x00000100&(data))>>8)
#define AIO_O_INTE_get_rawtiminte(data)                                              ((0x00000100&(data))>>8)
#define AIO_O_INTE_hdmitiminte_shift                                                 (7)
#define AIO_O_INTE_hdmitiminte_mask                                                  (0x00000080)
#define AIO_O_INTE_hdmitiminte(data)                                                 (0x00000080&((data)<<7))
#define AIO_O_INTE_hdmitiminte_src(data)                                             ((0x00000080&(data))>>7)
#define AIO_O_INTE_get_hdmitiminte(data)                                             ((0x00000080&(data))>>7)
#define AIO_O_INTE_rawthdinte_shift                                                  (6)
#define AIO_O_INTE_rawthdinte_mask                                                   (0x00000040)
#define AIO_O_INTE_rawthdinte(data)                                                  (0x00000040&((data)<<6))
#define AIO_O_INTE_rawthdinte_src(data)                                              ((0x00000040&(data))>>6)
#define AIO_O_INTE_get_rawthdinte(data)                                              ((0x00000040&(data))>>6)
#define AIO_O_INTE_hdmithdinte_shift                                                 (5)
#define AIO_O_INTE_hdmithdinte_mask                                                  (0x00000020)
#define AIO_O_INTE_hdmithdinte(data)                                                 (0x00000020&((data)<<5))
#define AIO_O_INTE_hdmithdinte_src(data)                                             ((0x00000020&(data))>>5)
#define AIO_O_INTE_get_hdmithdinte(data)                                             ((0x00000020&(data))>>5)
#define AIO_O_INTE_hdmiraw_draminte_shift                                            (4)
#define AIO_O_INTE_hdmiraw_draminte_mask                                             (0x00000010)
#define AIO_O_INTE_hdmiraw_draminte(data)                                            (0x00000010&((data)<<4))
#define AIO_O_INTE_hdmiraw_draminte_src(data)                                        ((0x00000010&(data))>>4)
#define AIO_O_INTE_get_hdmiraw_draminte(data)                                        ((0x00000010&(data))>>4)
#define AIO_O_INTE_raw_draminte_shift                                                (3)
#define AIO_O_INTE_raw_draminte_mask                                                 (0x00000008)
#define AIO_O_INTE_raw_draminte(data)                                                (0x00000008&((data)<<3))
#define AIO_O_INTE_raw_draminte_src(data)                                            ((0x00000008&(data))>>3)
#define AIO_O_INTE_get_raw_draminte(data)                                            ((0x00000008&(data))>>3)
#define AIO_O_INTE_hdmiraw_fifointe_shift                                            (2)
#define AIO_O_INTE_hdmiraw_fifointe_mask                                             (0x00000004)
#define AIO_O_INTE_hdmiraw_fifointe(data)                                            (0x00000004&((data)<<2))
#define AIO_O_INTE_hdmiraw_fifointe_src(data)                                        ((0x00000004&(data))>>2)
#define AIO_O_INTE_get_hdmiraw_fifointe(data)                                        ((0x00000004&(data))>>2)
#define AIO_O_INTE_raw_fifointe_shift                                                (1)
#define AIO_O_INTE_raw_fifointe_mask                                                 (0x00000002)
#define AIO_O_INTE_raw_fifointe(data)                                                (0x00000002&((data)<<1))
#define AIO_O_INTE_raw_fifointe_src(data)                                            ((0x00000002&(data))>>1)
#define AIO_O_INTE_get_raw_fifointe(data)                                            ((0x00000002&(data))>>1)
#define AIO_O_INTE_write_data_shift                                                  (0)
#define AIO_O_INTE_write_data_mask                                                   (0x00000001)
#define AIO_O_INTE_write_data(data)                                                  (0x00000001&((data)<<0))
#define AIO_O_INTE_write_data_src(data)                                              ((0x00000001&(data))>>0)
#define AIO_O_INTE_get_write_data(data)                                              ((0x00000001&(data))>>0)


#define AIO_O_INTE2                                                                  0x98006450
#define AIO_O_INTE2_reg_addr                                                         "0xD8006450"
#define AIO_O_INTE2_reg                                                              0xD8006450
#define set_AIO_O_INTE2_reg(data)   (*((volatile unsigned int*) AIO_O_INTE2_reg)=data)
#define get_AIO_O_INTE2_reg   (*((volatile unsigned int*) AIO_O_INTE2_reg))
#define AIO_O_INTE2_inst_adr                                                         "0x0014"
#define AIO_O_INTE2_inst                                                             0x0014
#define AIO_O_INTE2_pcm_draminte7_shift                                              (18)
#define AIO_O_INTE2_pcm_draminte7_mask                                               (0x00040000)
#define AIO_O_INTE2_pcm_draminte7(data)                                              (0x00040000&((data)<<18))
#define AIO_O_INTE2_pcm_draminte7_src(data)                                          ((0x00040000&(data))>>18)
#define AIO_O_INTE2_get_pcm_draminte7(data)                                          ((0x00040000&(data))>>18)
#define AIO_O_INTE2_pcm_draminte6_shift                                              (17)
#define AIO_O_INTE2_pcm_draminte6_mask                                               (0x00020000)
#define AIO_O_INTE2_pcm_draminte6(data)                                              (0x00020000&((data)<<17))
#define AIO_O_INTE2_pcm_draminte6_src(data)                                          ((0x00020000&(data))>>17)
#define AIO_O_INTE2_get_pcm_draminte6(data)                                          ((0x00020000&(data))>>17)
#define AIO_O_INTE2_pcm_draminte5_shift                                              (16)
#define AIO_O_INTE2_pcm_draminte5_mask                                               (0x00010000)
#define AIO_O_INTE2_pcm_draminte5(data)                                              (0x00010000&((data)<<16))
#define AIO_O_INTE2_pcm_draminte5_src(data)                                          ((0x00010000&(data))>>16)
#define AIO_O_INTE2_get_pcm_draminte5(data)                                          ((0x00010000&(data))>>16)
#define AIO_O_INTE2_pcm_draminte4_shift                                              (15)
#define AIO_O_INTE2_pcm_draminte4_mask                                               (0x00008000)
#define AIO_O_INTE2_pcm_draminte4(data)                                              (0x00008000&((data)<<15))
#define AIO_O_INTE2_pcm_draminte4_src(data)                                          ((0x00008000&(data))>>15)
#define AIO_O_INTE2_get_pcm_draminte4(data)                                          ((0x00008000&(data))>>15)
#define AIO_O_INTE2_pcm_draminte3_shift                                              (14)
#define AIO_O_INTE2_pcm_draminte3_mask                                               (0x00004000)
#define AIO_O_INTE2_pcm_draminte3(data)                                              (0x00004000&((data)<<14))
#define AIO_O_INTE2_pcm_draminte3_src(data)                                          ((0x00004000&(data))>>14)
#define AIO_O_INTE2_get_pcm_draminte3(data)                                          ((0x00004000&(data))>>14)
#define AIO_O_INTE2_pcm_draminte2_shift                                              (13)
#define AIO_O_INTE2_pcm_draminte2_mask                                               (0x00002000)
#define AIO_O_INTE2_pcm_draminte2(data)                                              (0x00002000&((data)<<13))
#define AIO_O_INTE2_pcm_draminte2_src(data)                                          ((0x00002000&(data))>>13)
#define AIO_O_INTE2_get_pcm_draminte2(data)                                          ((0x00002000&(data))>>13)
#define AIO_O_INTE2_pcm_draminte1_shift                                              (12)
#define AIO_O_INTE2_pcm_draminte1_mask                                               (0x00001000)
#define AIO_O_INTE2_pcm_draminte1(data)                                              (0x00001000&((data)<<12))
#define AIO_O_INTE2_pcm_draminte1_src(data)                                          ((0x00001000&(data))>>12)
#define AIO_O_INTE2_get_pcm_draminte1(data)                                          ((0x00001000&(data))>>12)
#define AIO_O_INTE2_pcm_draminte0_shift                                              (11)
#define AIO_O_INTE2_pcm_draminte0_mask                                               (0x00000800)
#define AIO_O_INTE2_pcm_draminte0(data)                                              (0x00000800&((data)<<11))
#define AIO_O_INTE2_pcm_draminte0_src(data)                                          ((0x00000800&(data))>>11)
#define AIO_O_INTE2_get_pcm_draminte0(data)                                          ((0x00000800&(data))>>11)
#define AIO_O_INTE2_pcm_fifointe7_shift                                              (10)
#define AIO_O_INTE2_pcm_fifointe7_mask                                               (0x00000400)
#define AIO_O_INTE2_pcm_fifointe7(data)                                              (0x00000400&((data)<<10))
#define AIO_O_INTE2_pcm_fifointe7_src(data)                                          ((0x00000400&(data))>>10)
#define AIO_O_INTE2_get_pcm_fifointe7(data)                                          ((0x00000400&(data))>>10)
#define AIO_O_INTE2_pcm_fifointe6_shift                                              (9)
#define AIO_O_INTE2_pcm_fifointe6_mask                                               (0x00000200)
#define AIO_O_INTE2_pcm_fifointe6(data)                                              (0x00000200&((data)<<9))
#define AIO_O_INTE2_pcm_fifointe6_src(data)                                          ((0x00000200&(data))>>9)
#define AIO_O_INTE2_get_pcm_fifointe6(data)                                          ((0x00000200&(data))>>9)
#define AIO_O_INTE2_pcm_fifointe5_shift                                              (8)
#define AIO_O_INTE2_pcm_fifointe5_mask                                               (0x00000100)
#define AIO_O_INTE2_pcm_fifointe5(data)                                              (0x00000100&((data)<<8))
#define AIO_O_INTE2_pcm_fifointe5_src(data)                                          ((0x00000100&(data))>>8)
#define AIO_O_INTE2_get_pcm_fifointe5(data)                                          ((0x00000100&(data))>>8)
#define AIO_O_INTE2_pcm_fifointe4_shift                                              (7)
#define AIO_O_INTE2_pcm_fifointe4_mask                                               (0x00000080)
#define AIO_O_INTE2_pcm_fifointe4(data)                                              (0x00000080&((data)<<7))
#define AIO_O_INTE2_pcm_fifointe4_src(data)                                          ((0x00000080&(data))>>7)
#define AIO_O_INTE2_get_pcm_fifointe4(data)                                          ((0x00000080&(data))>>7)
#define AIO_O_INTE2_pcm_fifointe3_shift                                              (6)
#define AIO_O_INTE2_pcm_fifointe3_mask                                               (0x00000040)
#define AIO_O_INTE2_pcm_fifointe3(data)                                              (0x00000040&((data)<<6))
#define AIO_O_INTE2_pcm_fifointe3_src(data)                                          ((0x00000040&(data))>>6)
#define AIO_O_INTE2_get_pcm_fifointe3(data)                                          ((0x00000040&(data))>>6)
#define AIO_O_INTE2_pcm_fifointe2_shift                                              (5)
#define AIO_O_INTE2_pcm_fifointe2_mask                                               (0x00000020)
#define AIO_O_INTE2_pcm_fifointe2(data)                                              (0x00000020&((data)<<5))
#define AIO_O_INTE2_pcm_fifointe2_src(data)                                          ((0x00000020&(data))>>5)
#define AIO_O_INTE2_get_pcm_fifointe2(data)                                          ((0x00000020&(data))>>5)
#define AIO_O_INTE2_pcm_fifointe1_shift                                              (4)
#define AIO_O_INTE2_pcm_fifointe1_mask                                               (0x00000010)
#define AIO_O_INTE2_pcm_fifointe1(data)                                              (0x00000010&((data)<<4))
#define AIO_O_INTE2_pcm_fifointe1_src(data)                                          ((0x00000010&(data))>>4)
#define AIO_O_INTE2_get_pcm_fifointe1(data)                                          ((0x00000010&(data))>>4)
#define AIO_O_INTE2_pcm_fifointe0_shift                                              (3)
#define AIO_O_INTE2_pcm_fifointe0_mask                                               (0x00000008)
#define AIO_O_INTE2_pcm_fifointe0(data)                                              (0x00000008&((data)<<3))
#define AIO_O_INTE2_pcm_fifointe0_src(data)                                          ((0x00000008&(data))>>3)
#define AIO_O_INTE2_get_pcm_fifointe0(data)                                          ((0x00000008&(data))>>3)
#define AIO_O_INTE2_pcmtiminte_shift                                                 (2)
#define AIO_O_INTE2_pcmtiminte_mask                                                  (0x00000004)
#define AIO_O_INTE2_pcmtiminte(data)                                                 (0x00000004&((data)<<2))
#define AIO_O_INTE2_pcmtiminte_src(data)                                             ((0x00000004&(data))>>2)
#define AIO_O_INTE2_get_pcmtiminte(data)                                             ((0x00000004&(data))>>2)
#define AIO_O_INTE2_pcmthdinte_shift                                                 (1)
#define AIO_O_INTE2_pcmthdinte_mask                                                  (0x00000002)
#define AIO_O_INTE2_pcmthdinte(data)                                                 (0x00000002&((data)<<1))
#define AIO_O_INTE2_pcmthdinte_src(data)                                             ((0x00000002&(data))>>1)
#define AIO_O_INTE2_get_pcmthdinte(data)                                             ((0x00000002&(data))>>1)
#define AIO_O_INTE2_write_data_shift                                                 (0)
#define AIO_O_INTE2_write_data_mask                                                  (0x00000001)
#define AIO_O_INTE2_write_data(data)                                                 (0x00000001&((data)<<0))
#define AIO_O_INTE2_write_data_src(data)                                             ((0x00000001&(data))>>0)
#define AIO_O_INTE2_get_write_data(data)                                             ((0x00000001&(data))>>0)


#define AIO_O_INTS                                                                   0x98006444
#define AIO_O_INTS_reg_addr                                                          "0xD8006444"
#define AIO_O_INTS_reg                                                               0xD8006444
#define set_AIO_O_INTS_reg(data)   (*((volatile unsigned int*) AIO_O_INTS_reg)=data)
#define get_AIO_O_INTS_reg   (*((volatile unsigned int*) AIO_O_INTS_reg))
#define AIO_O_INTS_inst_adr                                                          "0x0011"
#define AIO_O_INTS_inst                                                              0x0011
#define AIO_O_INTS_hdmi8ch_dramints7_shift                                           (24)
#define AIO_O_INTS_hdmi8ch_dramints7_mask                                            (0x01000000)
#define AIO_O_INTS_hdmi8ch_dramints7(data)                                           (0x01000000&((data)<<24))
#define AIO_O_INTS_hdmi8ch_dramints7_src(data)                                       ((0x01000000&(data))>>24)
#define AIO_O_INTS_get_hdmi8ch_dramints7(data)                                       ((0x01000000&(data))>>24)
#define AIO_O_INTS_hdmi8ch_dramints6_shift                                           (23)
#define AIO_O_INTS_hdmi8ch_dramints6_mask                                            (0x00800000)
#define AIO_O_INTS_hdmi8ch_dramints6(data)                                           (0x00800000&((data)<<23))
#define AIO_O_INTS_hdmi8ch_dramints6_src(data)                                       ((0x00800000&(data))>>23)
#define AIO_O_INTS_get_hdmi8ch_dramints6(data)                                       ((0x00800000&(data))>>23)
#define AIO_O_INTS_hdmi8ch_dramints5_shift                                           (22)
#define AIO_O_INTS_hdmi8ch_dramints5_mask                                            (0x00400000)
#define AIO_O_INTS_hdmi8ch_dramints5(data)                                           (0x00400000&((data)<<22))
#define AIO_O_INTS_hdmi8ch_dramints5_src(data)                                       ((0x00400000&(data))>>22)
#define AIO_O_INTS_get_hdmi8ch_dramints5(data)                                       ((0x00400000&(data))>>22)
#define AIO_O_INTS_hdmi8ch_dramints4_shift                                           (21)
#define AIO_O_INTS_hdmi8ch_dramints4_mask                                            (0x00200000)
#define AIO_O_INTS_hdmi8ch_dramints4(data)                                           (0x00200000&((data)<<21))
#define AIO_O_INTS_hdmi8ch_dramints4_src(data)                                       ((0x00200000&(data))>>21)
#define AIO_O_INTS_get_hdmi8ch_dramints4(data)                                       ((0x00200000&(data))>>21)
#define AIO_O_INTS_hdmi8ch_dramints3_shift                                           (20)
#define AIO_O_INTS_hdmi8ch_dramints3_mask                                            (0x00100000)
#define AIO_O_INTS_hdmi8ch_dramints3(data)                                           (0x00100000&((data)<<20))
#define AIO_O_INTS_hdmi8ch_dramints3_src(data)                                       ((0x00100000&(data))>>20)
#define AIO_O_INTS_get_hdmi8ch_dramints3(data)                                       ((0x00100000&(data))>>20)
#define AIO_O_INTS_hdmi8ch_dramints2_shift                                           (19)
#define AIO_O_INTS_hdmi8ch_dramints2_mask                                            (0x00080000)
#define AIO_O_INTS_hdmi8ch_dramints2(data)                                           (0x00080000&((data)<<19))
#define AIO_O_INTS_hdmi8ch_dramints2_src(data)                                       ((0x00080000&(data))>>19)
#define AIO_O_INTS_get_hdmi8ch_dramints2(data)                                       ((0x00080000&(data))>>19)
#define AIO_O_INTS_hdmi8ch_dramints1_shift                                           (18)
#define AIO_O_INTS_hdmi8ch_dramints1_mask                                            (0x00040000)
#define AIO_O_INTS_hdmi8ch_dramints1(data)                                           (0x00040000&((data)<<18))
#define AIO_O_INTS_hdmi8ch_dramints1_src(data)                                       ((0x00040000&(data))>>18)
#define AIO_O_INTS_get_hdmi8ch_dramints1(data)                                       ((0x00040000&(data))>>18)
#define AIO_O_INTS_hdmi8ch_dramints0_shift                                           (17)
#define AIO_O_INTS_hdmi8ch_dramints0_mask                                            (0x00020000)
#define AIO_O_INTS_hdmi8ch_dramints0(data)                                           (0x00020000&((data)<<17))
#define AIO_O_INTS_hdmi8ch_dramints0_src(data)                                       ((0x00020000&(data))>>17)
#define AIO_O_INTS_get_hdmi8ch_dramints0(data)                                       ((0x00020000&(data))>>17)
#define AIO_O_INTS_hdmi8ch_fifoints7_shift                                           (16)
#define AIO_O_INTS_hdmi8ch_fifoints7_mask                                            (0x00010000)
#define AIO_O_INTS_hdmi8ch_fifoints7(data)                                           (0x00010000&((data)<<16))
#define AIO_O_INTS_hdmi8ch_fifoints7_src(data)                                       ((0x00010000&(data))>>16)
#define AIO_O_INTS_get_hdmi8ch_fifoints7(data)                                       ((0x00010000&(data))>>16)
#define AIO_O_INTS_hdmi8ch_fifoints6_shift                                           (15)
#define AIO_O_INTS_hdmi8ch_fifoints6_mask                                            (0x00008000)
#define AIO_O_INTS_hdmi8ch_fifoints6(data)                                           (0x00008000&((data)<<15))
#define AIO_O_INTS_hdmi8ch_fifoints6_src(data)                                       ((0x00008000&(data))>>15)
#define AIO_O_INTS_get_hdmi8ch_fifoints6(data)                                       ((0x00008000&(data))>>15)
#define AIO_O_INTS_hdmi8ch_fifoints5_shift                                           (14)
#define AIO_O_INTS_hdmi8ch_fifoints5_mask                                            (0x00004000)
#define AIO_O_INTS_hdmi8ch_fifoints5(data)                                           (0x00004000&((data)<<14))
#define AIO_O_INTS_hdmi8ch_fifoints5_src(data)                                       ((0x00004000&(data))>>14)
#define AIO_O_INTS_get_hdmi8ch_fifoints5(data)                                       ((0x00004000&(data))>>14)
#define AIO_O_INTS_hdmi8ch_fifoints4_shift                                           (13)
#define AIO_O_INTS_hdmi8ch_fifoints4_mask                                            (0x00002000)
#define AIO_O_INTS_hdmi8ch_fifoints4(data)                                           (0x00002000&((data)<<13))
#define AIO_O_INTS_hdmi8ch_fifoints4_src(data)                                       ((0x00002000&(data))>>13)
#define AIO_O_INTS_get_hdmi8ch_fifoints4(data)                                       ((0x00002000&(data))>>13)
#define AIO_O_INTS_hdmi8ch_fifoints3_shift                                           (12)
#define AIO_O_INTS_hdmi8ch_fifoints3_mask                                            (0x00001000)
#define AIO_O_INTS_hdmi8ch_fifoints3(data)                                           (0x00001000&((data)<<12))
#define AIO_O_INTS_hdmi8ch_fifoints3_src(data)                                       ((0x00001000&(data))>>12)
#define AIO_O_INTS_get_hdmi8ch_fifoints3(data)                                       ((0x00001000&(data))>>12)
#define AIO_O_INTS_hdmi8ch_fifoints2_shift                                           (11)
#define AIO_O_INTS_hdmi8ch_fifoints2_mask                                            (0x00000800)
#define AIO_O_INTS_hdmi8ch_fifoints2(data)                                           (0x00000800&((data)<<11))
#define AIO_O_INTS_hdmi8ch_fifoints2_src(data)                                       ((0x00000800&(data))>>11)
#define AIO_O_INTS_get_hdmi8ch_fifoints2(data)                                       ((0x00000800&(data))>>11)
#define AIO_O_INTS_hdmi8ch_fifoints1_shift                                           (10)
#define AIO_O_INTS_hdmi8ch_fifoints1_mask                                            (0x00000400)
#define AIO_O_INTS_hdmi8ch_fifoints1(data)                                           (0x00000400&((data)<<10))
#define AIO_O_INTS_hdmi8ch_fifoints1_src(data)                                       ((0x00000400&(data))>>10)
#define AIO_O_INTS_get_hdmi8ch_fifoints1(data)                                       ((0x00000400&(data))>>10)
#define AIO_O_INTS_hdmi8ch_fifoints0_shift                                           (9)
#define AIO_O_INTS_hdmi8ch_fifoints0_mask                                            (0x00000200)
#define AIO_O_INTS_hdmi8ch_fifoints0(data)                                           (0x00000200&((data)<<9))
#define AIO_O_INTS_hdmi8ch_fifoints0_src(data)                                       ((0x00000200&(data))>>9)
#define AIO_O_INTS_get_hdmi8ch_fifoints0(data)                                       ((0x00000200&(data))>>9)
#define AIO_O_INTS_rawtimints_shift                                                  (8)
#define AIO_O_INTS_rawtimints_mask                                                   (0x00000100)
#define AIO_O_INTS_rawtimints(data)                                                  (0x00000100&((data)<<8))
#define AIO_O_INTS_rawtimints_src(data)                                              ((0x00000100&(data))>>8)
#define AIO_O_INTS_get_rawtimints(data)                                              ((0x00000100&(data))>>8)
#define AIO_O_INTS_hdmitimints_shift                                                 (7)
#define AIO_O_INTS_hdmitimints_mask                                                  (0x00000080)
#define AIO_O_INTS_hdmitimints(data)                                                 (0x00000080&((data)<<7))
#define AIO_O_INTS_hdmitimints_src(data)                                             ((0x00000080&(data))>>7)
#define AIO_O_INTS_get_hdmitimints(data)                                             ((0x00000080&(data))>>7)
#define AIO_O_INTS_rawthdints_shift                                                  (6)
#define AIO_O_INTS_rawthdints_mask                                                   (0x00000040)
#define AIO_O_INTS_rawthdints(data)                                                  (0x00000040&((data)<<6))
#define AIO_O_INTS_rawthdints_src(data)                                              ((0x00000040&(data))>>6)
#define AIO_O_INTS_get_rawthdints(data)                                              ((0x00000040&(data))>>6)
#define AIO_O_INTS_hdmithdints_shift                                                 (5)
#define AIO_O_INTS_hdmithdints_mask                                                  (0x00000020)
#define AIO_O_INTS_hdmithdints(data)                                                 (0x00000020&((data)<<5))
#define AIO_O_INTS_hdmithdints_src(data)                                             ((0x00000020&(data))>>5)
#define AIO_O_INTS_get_hdmithdints(data)                                             ((0x00000020&(data))>>5)
#define AIO_O_INTS_hdmiraw_dramints_shift                                            (4)
#define AIO_O_INTS_hdmiraw_dramints_mask                                             (0x00000010)
#define AIO_O_INTS_hdmiraw_dramints(data)                                            (0x00000010&((data)<<4))
#define AIO_O_INTS_hdmiraw_dramints_src(data)                                        ((0x00000010&(data))>>4)
#define AIO_O_INTS_get_hdmiraw_dramints(data)                                        ((0x00000010&(data))>>4)
#define AIO_O_INTS_raw_dramints_shift                                                (3)
#define AIO_O_INTS_raw_dramints_mask                                                 (0x00000008)
#define AIO_O_INTS_raw_dramints(data)                                                (0x00000008&((data)<<3))
#define AIO_O_INTS_raw_dramints_src(data)                                            ((0x00000008&(data))>>3)
#define AIO_O_INTS_get_raw_dramints(data)                                            ((0x00000008&(data))>>3)
#define AIO_O_INTS_hdmiraw_fifoints_shift                                            (2)
#define AIO_O_INTS_hdmiraw_fifoints_mask                                             (0x00000004)
#define AIO_O_INTS_hdmiraw_fifoints(data)                                            (0x00000004&((data)<<2))
#define AIO_O_INTS_hdmiraw_fifoints_src(data)                                        ((0x00000004&(data))>>2)
#define AIO_O_INTS_get_hdmiraw_fifoints(data)                                        ((0x00000004&(data))>>2)
#define AIO_O_INTS_raw_fifoints_shift                                                (1)
#define AIO_O_INTS_raw_fifoints_mask                                                 (0x00000002)
#define AIO_O_INTS_raw_fifoints(data)                                                (0x00000002&((data)<<1))
#define AIO_O_INTS_raw_fifoints_src(data)                                            ((0x00000002&(data))>>1)
#define AIO_O_INTS_get_raw_fifoints(data)                                            ((0x00000002&(data))>>1)
#define AIO_O_INTS_write_data_shift                                                  (0)
#define AIO_O_INTS_write_data_mask                                                   (0x00000001)
#define AIO_O_INTS_write_data(data)                                                  (0x00000001&((data)<<0))
#define AIO_O_INTS_write_data_src(data)                                              ((0x00000001&(data))>>0)
#define AIO_O_INTS_get_write_data(data)                                              ((0x00000001&(data))>>0)


#define AIO_O_INTS2                                                                  0x98006454
#define AIO_O_INTS2_reg_addr                                                         "0xD8006454"
#define AIO_O_INTS2_reg                                                              0xD8006454
#define set_AIO_O_INTS2_reg(data)   (*((volatile unsigned int*) AIO_O_INTS2_reg)=data)
#define get_AIO_O_INTS2_reg   (*((volatile unsigned int*) AIO_O_INTS2_reg))
#define AIO_O_INTS2_inst_adr                                                         "0x0015"
#define AIO_O_INTS2_inst                                                             0x0015
#define AIO_O_INTS2_pcm_dramints7_shift                                              (18)
#define AIO_O_INTS2_pcm_dramints7_mask                                               (0x00040000)
#define AIO_O_INTS2_pcm_dramints7(data)                                              (0x00040000&((data)<<18))
#define AIO_O_INTS2_pcm_dramints7_src(data)                                          ((0x00040000&(data))>>18)
#define AIO_O_INTS2_get_pcm_dramints7(data)                                          ((0x00040000&(data))>>18)
#define AIO_O_INTS2_pcm_dramints6_shift                                              (17)
#define AIO_O_INTS2_pcm_dramints6_mask                                               (0x00020000)
#define AIO_O_INTS2_pcm_dramints6(data)                                              (0x00020000&((data)<<17))
#define AIO_O_INTS2_pcm_dramints6_src(data)                                          ((0x00020000&(data))>>17)
#define AIO_O_INTS2_get_pcm_dramints6(data)                                          ((0x00020000&(data))>>17)
#define AIO_O_INTS2_pcm_dramints5_shift                                              (16)
#define AIO_O_INTS2_pcm_dramints5_mask                                               (0x00010000)
#define AIO_O_INTS2_pcm_dramints5(data)                                              (0x00010000&((data)<<16))
#define AIO_O_INTS2_pcm_dramints5_src(data)                                          ((0x00010000&(data))>>16)
#define AIO_O_INTS2_get_pcm_dramints5(data)                                          ((0x00010000&(data))>>16)
#define AIO_O_INTS2_pcm_dramints4_shift                                              (15)
#define AIO_O_INTS2_pcm_dramints4_mask                                               (0x00008000)
#define AIO_O_INTS2_pcm_dramints4(data)                                              (0x00008000&((data)<<15))
#define AIO_O_INTS2_pcm_dramints4_src(data)                                          ((0x00008000&(data))>>15)
#define AIO_O_INTS2_get_pcm_dramints4(data)                                          ((0x00008000&(data))>>15)
#define AIO_O_INTS2_pcm_dramints3_shift                                              (14)
#define AIO_O_INTS2_pcm_dramints3_mask                                               (0x00004000)
#define AIO_O_INTS2_pcm_dramints3(data)                                              (0x00004000&((data)<<14))
#define AIO_O_INTS2_pcm_dramints3_src(data)                                          ((0x00004000&(data))>>14)
#define AIO_O_INTS2_get_pcm_dramints3(data)                                          ((0x00004000&(data))>>14)
#define AIO_O_INTS2_pcm_dramints2_shift                                              (13)
#define AIO_O_INTS2_pcm_dramints2_mask                                               (0x00002000)
#define AIO_O_INTS2_pcm_dramints2(data)                                              (0x00002000&((data)<<13))
#define AIO_O_INTS2_pcm_dramints2_src(data)                                          ((0x00002000&(data))>>13)
#define AIO_O_INTS2_get_pcm_dramints2(data)                                          ((0x00002000&(data))>>13)
#define AIO_O_INTS2_pcm_dramints1_shift                                              (12)
#define AIO_O_INTS2_pcm_dramints1_mask                                               (0x00001000)
#define AIO_O_INTS2_pcm_dramints1(data)                                              (0x00001000&((data)<<12))
#define AIO_O_INTS2_pcm_dramints1_src(data)                                          ((0x00001000&(data))>>12)
#define AIO_O_INTS2_get_pcm_dramints1(data)                                          ((0x00001000&(data))>>12)
#define AIO_O_INTS2_pcm_dramints0_shift                                              (11)
#define AIO_O_INTS2_pcm_dramints0_mask                                               (0x00000800)
#define AIO_O_INTS2_pcm_dramints0(data)                                              (0x00000800&((data)<<11))
#define AIO_O_INTS2_pcm_dramints0_src(data)                                          ((0x00000800&(data))>>11)
#define AIO_O_INTS2_get_pcm_dramints0(data)                                          ((0x00000800&(data))>>11)
#define AIO_O_INTS2_pcm_fifoints7_shift                                              (10)
#define AIO_O_INTS2_pcm_fifoints7_mask                                               (0x00000400)
#define AIO_O_INTS2_pcm_fifoints7(data)                                              (0x00000400&((data)<<10))
#define AIO_O_INTS2_pcm_fifoints7_src(data)                                          ((0x00000400&(data))>>10)
#define AIO_O_INTS2_get_pcm_fifoints7(data)                                          ((0x00000400&(data))>>10)
#define AIO_O_INTS2_pcm_fifoints6_shift                                              (9)
#define AIO_O_INTS2_pcm_fifoints6_mask                                               (0x00000200)
#define AIO_O_INTS2_pcm_fifoints6(data)                                              (0x00000200&((data)<<9))
#define AIO_O_INTS2_pcm_fifoints6_src(data)                                          ((0x00000200&(data))>>9)
#define AIO_O_INTS2_get_pcm_fifoints6(data)                                          ((0x00000200&(data))>>9)
#define AIO_O_INTS2_pcm_fifoints5_shift                                              (8)
#define AIO_O_INTS2_pcm_fifoints5_mask                                               (0x00000100)
#define AIO_O_INTS2_pcm_fifoints5(data)                                              (0x00000100&((data)<<8))
#define AIO_O_INTS2_pcm_fifoints5_src(data)                                          ((0x00000100&(data))>>8)
#define AIO_O_INTS2_get_pcm_fifoints5(data)                                          ((0x00000100&(data))>>8)
#define AIO_O_INTS2_pcm_fifoints4_shift                                              (7)
#define AIO_O_INTS2_pcm_fifoints4_mask                                               (0x00000080)
#define AIO_O_INTS2_pcm_fifoints4(data)                                              (0x00000080&((data)<<7))
#define AIO_O_INTS2_pcm_fifoints4_src(data)                                          ((0x00000080&(data))>>7)
#define AIO_O_INTS2_get_pcm_fifoints4(data)                                          ((0x00000080&(data))>>7)
#define AIO_O_INTS2_pcm_fifoints3_shift                                              (6)
#define AIO_O_INTS2_pcm_fifoints3_mask                                               (0x00000040)
#define AIO_O_INTS2_pcm_fifoints3(data)                                              (0x00000040&((data)<<6))
#define AIO_O_INTS2_pcm_fifoints3_src(data)                                          ((0x00000040&(data))>>6)
#define AIO_O_INTS2_get_pcm_fifoints3(data)                                          ((0x00000040&(data))>>6)
#define AIO_O_INTS2_pcm_fifoints2_shift                                              (5)
#define AIO_O_INTS2_pcm_fifoints2_mask                                               (0x00000020)
#define AIO_O_INTS2_pcm_fifoints2(data)                                              (0x00000020&((data)<<5))
#define AIO_O_INTS2_pcm_fifoints2_src(data)                                          ((0x00000020&(data))>>5)
#define AIO_O_INTS2_get_pcm_fifoints2(data)                                          ((0x00000020&(data))>>5)
#define AIO_O_INTS2_pcm_fifoints1_shift                                              (4)
#define AIO_O_INTS2_pcm_fifoints1_mask                                               (0x00000010)
#define AIO_O_INTS2_pcm_fifoints1(data)                                              (0x00000010&((data)<<4))
#define AIO_O_INTS2_pcm_fifoints1_src(data)                                          ((0x00000010&(data))>>4)
#define AIO_O_INTS2_get_pcm_fifoints1(data)                                          ((0x00000010&(data))>>4)
#define AIO_O_INTS2_pcm_fifoints0_shift                                              (3)
#define AIO_O_INTS2_pcm_fifoints0_mask                                               (0x00000008)
#define AIO_O_INTS2_pcm_fifoints0(data)                                              (0x00000008&((data)<<3))
#define AIO_O_INTS2_pcm_fifoints0_src(data)                                          ((0x00000008&(data))>>3)
#define AIO_O_INTS2_get_pcm_fifoints0(data)                                          ((0x00000008&(data))>>3)
#define AIO_O_INTS2_pcmtimints_shift                                                 (2)
#define AIO_O_INTS2_pcmtimints_mask                                                  (0x00000004)
#define AIO_O_INTS2_pcmtimints(data)                                                 (0x00000004&((data)<<2))
#define AIO_O_INTS2_pcmtimints_src(data)                                             ((0x00000004&(data))>>2)
#define AIO_O_INTS2_get_pcmtimints(data)                                             ((0x00000004&(data))>>2)
#define AIO_O_INTS2_pcmthdints_shift                                                 (1)
#define AIO_O_INTS2_pcmthdints_mask                                                  (0x00000002)
#define AIO_O_INTS2_pcmthdints(data)                                                 (0x00000002&((data)<<1))
#define AIO_O_INTS2_pcmthdints_src(data)                                             ((0x00000002&(data))>>1)
#define AIO_O_INTS2_get_pcmthdints(data)                                             ((0x00000002&(data))>>1)
#define AIO_O_INTS2_write_data_shift                                                 (0)
#define AIO_O_INTS2_write_data_mask                                                  (0x00000001)
#define AIO_O_INTS2_write_data(data)                                                 (0x00000001&((data)<<0))
#define AIO_O_INTS2_write_data_src(data)                                             ((0x00000001&(data))>>0)
#define AIO_O_INTS2_get_write_data(data)                                             ((0x00000001&(data))>>0)


#define AIO_DBG                                                                      0x98006500
#define AIO_DBG_reg_addr                                                             "0xD8006500"
#define AIO_DBG_reg                                                                  0xD8006500
#define set_AIO_DBG_reg(data)   (*((volatile unsigned int*) AIO_DBG_reg)=data)
#define get_AIO_DBG_reg   (*((volatile unsigned int*) AIO_DBG_reg))
#define AIO_DBG_inst_adr                                                             "0x0040"
#define AIO_DBG_inst                                                                 0x0040
#define AIO_DBG_codec_tmode3_shift                                                   (10)
#define AIO_DBG_codec_tmode3_mask                                                    (0x00000400)
#define AIO_DBG_codec_tmode3(data)                                                   (0x00000400&((data)<<10))
#define AIO_DBG_codec_tmode3_src(data)                                               ((0x00000400&(data))>>10)
#define AIO_DBG_get_codec_tmode3(data)                                               ((0x00000400&(data))>>10)
#define AIO_DBG_codec_tmode2_shift                                                   (9)
#define AIO_DBG_codec_tmode2_mask                                                    (0x00000200)
#define AIO_DBG_codec_tmode2(data)                                                   (0x00000200&((data)<<9))
#define AIO_DBG_codec_tmode2_src(data)                                               ((0x00000200&(data))>>9)
#define AIO_DBG_get_codec_tmode2(data)                                               ((0x00000200&(data))>>9)
#define AIO_DBG_loopbacken_shift                                                     (8)
#define AIO_DBG_loopbacken_mask                                                      (0x00000100)
#define AIO_DBG_loopbacken(data)                                                     (0x00000100&((data)<<8))
#define AIO_DBG_loopbacken_src(data)                                                 ((0x00000100&(data))>>8)
#define AIO_DBG_get_loopbacken(data)                                                 ((0x00000100&(data))>>8)
#define AIO_DBG_codec_tmode_shift                                                    (7)
#define AIO_DBG_codec_tmode_mask                                                     (0x00000080)
#define AIO_DBG_codec_tmode(data)                                                    (0x00000080&((data)<<7))
#define AIO_DBG_codec_tmode_src(data)                                                ((0x00000080&(data))>>7)
#define AIO_DBG_get_codec_tmode(data)                                                ((0x00000080&(data))>>7)
#define AIO_DBG_dbgen_shift                                                          (6)
#define AIO_DBG_dbgen_mask                                                           (0x00000040)
#define AIO_DBG_dbgen(data)                                                          (0x00000040&((data)<<6))
#define AIO_DBG_dbgen_src(data)                                                      ((0x00000040&(data))>>6)
#define AIO_DBG_get_dbgen(data)                                                      ((0x00000040&(data))>>6)
#define AIO_DBG_sel0_shift                                                           (3)
#define AIO_DBG_sel0_mask                                                            (0x00000038)
#define AIO_DBG_sel0(data)                                                           (0x00000038&((data)<<3))
#define AIO_DBG_sel0_src(data)                                                       ((0x00000038&(data))>>3)
#define AIO_DBG_get_sel0(data)                                                       ((0x00000038&(data))>>3)
#define AIO_DBG_sel1_shift                                                           (0)
#define AIO_DBG_sel1_mask                                                            (0x00000007)
#define AIO_DBG_sel1(data)                                                           (0x00000007&((data)<<0))
#define AIO_DBG_sel1_src(data)                                                       ((0x00000007&(data))>>0)
#define AIO_DBG_get_sel1(data)                                                       ((0x00000007&(data))>>0)


#define AIO_SPARE                                                                    0x98006504
#define AIO_SPARE_reg_addr                                                           "0xD8006504"
#define AIO_SPARE_reg                                                                0xD8006504
#define set_AIO_SPARE_reg(data)   (*((volatile unsigned int*) AIO_SPARE_reg)=data)
#define get_AIO_SPARE_reg   (*((volatile unsigned int*) AIO_SPARE_reg))
#define AIO_SPARE_inst_adr                                                           "0x0041"
#define AIO_SPARE_inst                                                               0x0041
#define AIO_SPARE_spare_shift                                                        (0)
#define AIO_SPARE_spare_mask                                                         (0xFFFFFFFF)
#define AIO_SPARE_spare(data)                                                        (0xFFFFFFFF&((data)<<0))
#define AIO_SPARE_spare_src(data)                                                    ((0xFFFFFFFF&(data))>>0)
#define AIO_SPARE_get_spare(data)                                                    ((0xFFFFFFFF&(data))>>0)


#define AIO_GLOBAL                                                                   0x98006508
#define AIO_GLOBAL_reg_addr                                                          "0xD8006508"
#define AIO_GLOBAL_reg                                                               0xD8006508
#define set_AIO_GLOBAL_reg(data)   (*((volatile unsigned int*) AIO_GLOBAL_reg)=data)
#define get_AIO_GLOBAL_reg   (*((volatile unsigned int*) AIO_GLOBAL_reg))
#define AIO_GLOBAL_inst_adr                                                          "0x0042"
#define AIO_GLOBAL_inst                                                              0x0042
#define AIO_GLOBAL_four_byte_swap_enable_shift                                       (8)
#define AIO_GLOBAL_four_byte_swap_enable_mask                                        (0x00000100)
#define AIO_GLOBAL_four_byte_swap_enable(data)                                       (0x00000100&((data)<<8))
#define AIO_GLOBAL_four_byte_swap_enable_src(data)                                   ((0x00000100&(data))>>8)
#define AIO_GLOBAL_get_four_byte_swap_enable(data)                                   ((0x00000100&(data))>>8)
#define AIO_GLOBAL_sram_ls_ctrl_enable_shift                                         (7)
#define AIO_GLOBAL_sram_ls_ctrl_enable_mask                                          (0x00000080)
#define AIO_GLOBAL_sram_ls_ctrl_enable(data)                                         (0x00000080&((data)<<7))
#define AIO_GLOBAL_sram_ls_ctrl_enable_src(data)                                     ((0x00000080&(data))>>7)
#define AIO_GLOBAL_get_sram_ls_ctrl_enable(data)                                     ((0x00000080&(data))>>7)
#define AIO_GLOBAL_sram_gating_enable_shift                                          (6)
#define AIO_GLOBAL_sram_gating_enable_mask                                           (0x00000040)
#define AIO_GLOBAL_sram_gating_enable(data)                                          (0x00000040&((data)<<6))
#define AIO_GLOBAL_sram_gating_enable_src(data)                                      ((0x00000040&(data))>>6)
#define AIO_GLOBAL_get_sram_gating_enable(data)                                      ((0x00000040&(data))>>6)
#define AIO_GLOBAL_dbus_gating_enable_shift                                          (5)
#define AIO_GLOBAL_dbus_gating_enable_mask                                           (0x00000020)
#define AIO_GLOBAL_dbus_gating_enable(data)                                          (0x00000020&((data)<<5))
#define AIO_GLOBAL_dbus_gating_enable_src(data)                                      ((0x00000020&(data))>>5)
#define AIO_GLOBAL_get_dbus_gating_enable(data)                                      ((0x00000020&(data))>>5)
#define AIO_GLOBAL_eight_byte_swap_enable_shift                                      (4)
#define AIO_GLOBAL_eight_byte_swap_enable_mask                                       (0x00000010)
#define AIO_GLOBAL_eight_byte_swap_enable(data)                                      (0x00000010&((data)<<4))
#define AIO_GLOBAL_eight_byte_swap_enable_src(data)                                  ((0x00000010&(data))>>4)
#define AIO_GLOBAL_get_eight_byte_swap_enable(data)                                  ((0x00000010&(data))>>4)
#define AIO_GLOBAL_pcm_phase_sync_shift                                              (3)
#define AIO_GLOBAL_pcm_phase_sync_mask                                               (0x00000008)
#define AIO_GLOBAL_pcm_phase_sync(data)                                              (0x00000008&((data)<<3))
#define AIO_GLOBAL_pcm_phase_sync_src(data)                                          ((0x00000008&(data))>>3)
#define AIO_GLOBAL_get_pcm_phase_sync(data)                                          ((0x00000008&(data))>>3)
#define AIO_GLOBAL_spf_fs_autoswitch_shift                                           (2)
#define AIO_GLOBAL_spf_fs_autoswitch_mask                                            (0x00000004)
#define AIO_GLOBAL_spf_fs_autoswitch(data)                                           (0x00000004&((data)<<2))
#define AIO_GLOBAL_spf_fs_autoswitch_src(data)                                       ((0x00000004&(data))>>2)
#define AIO_GLOBAL_get_spf_fs_autoswitch(data)                                       ((0x00000004&(data))>>2)
#define AIO_GLOBAL_multireq_en_shift                                                 (1)
#define AIO_GLOBAL_multireq_en_mask                                                  (0x00000002)
#define AIO_GLOBAL_multireq_en(data)                                                 (0x00000002&((data)<<1))
#define AIO_GLOBAL_multireq_en_src(data)                                             ((0x00000002&(data))>>1)
#define AIO_GLOBAL_get_multireq_en(data)                                             ((0x00000002&(data))>>1)
#define AIO_GLOBAL_gating_enable_shift                                               (0)
#define AIO_GLOBAL_gating_enable_mask                                                (0x00000001)
#define AIO_GLOBAL_gating_enable(data)                                               (0x00000001&((data)<<0))
#define AIO_GLOBAL_gating_enable_src(data)                                           ((0x00000001&(data))>>0)
#define AIO_GLOBAL_get_gating_enable(data)                                           ((0x00000001&(data))>>0)


#define AIO_BIST1                                                                    0x9800650c
#define AIO_BIST1_reg_addr                                                           "0xD800650C"
#define AIO_BIST1_reg                                                                0xD800650C
#define set_AIO_BIST1_reg(data)   (*((volatile unsigned int*) AIO_BIST1_reg)=data)
#define get_AIO_BIST1_reg   (*((volatile unsigned int*) AIO_BIST1_reg))
#define AIO_BIST1_inst_adr                                                           "0x0043"
#define AIO_BIST1_inst                                                               0x0043
#define AIO_BIST1_drf_test_resume_con2_shift                                         (5)
#define AIO_BIST1_drf_test_resume_con2_mask                                          (0x00000020)
#define AIO_BIST1_drf_test_resume_con2(data)                                         (0x00000020&((data)<<5))
#define AIO_BIST1_drf_test_resume_con2_src(data)                                     ((0x00000020&(data))>>5)
#define AIO_BIST1_get_drf_test_resume_con2(data)                                     ((0x00000020&(data))>>5)
#define AIO_BIST1_drf_en_con2_shift                                                  (4)
#define AIO_BIST1_drf_en_con2_mask                                                   (0x00000010)
#define AIO_BIST1_drf_en_con2(data)                                                  (0x00000010&((data)<<4))
#define AIO_BIST1_drf_en_con2_src(data)                                              ((0x00000010&(data))>>4)
#define AIO_BIST1_get_drf_en_con2(data)                                              ((0x00000010&(data))>>4)
#define AIO_BIST1_en_con2_shift                                                      (3)
#define AIO_BIST1_en_con2_mask                                                       (0x00000008)
#define AIO_BIST1_en_con2(data)                                                      (0x00000008&((data)<<3))
#define AIO_BIST1_en_con2_src(data)                                                  ((0x00000008&(data))>>3)
#define AIO_BIST1_get_en_con2(data)                                                  ((0x00000008&(data))>>3)
#define AIO_BIST1_drf_test_resume_con1_shift                                         (2)
#define AIO_BIST1_drf_test_resume_con1_mask                                          (0x00000004)
#define AIO_BIST1_drf_test_resume_con1(data)                                         (0x00000004&((data)<<2))
#define AIO_BIST1_drf_test_resume_con1_src(data)                                     ((0x00000004&(data))>>2)
#define AIO_BIST1_get_drf_test_resume_con1(data)                                     ((0x00000004&(data))>>2)
#define AIO_BIST1_drf_en_con1_shift                                                  (1)
#define AIO_BIST1_drf_en_con1_mask                                                   (0x00000002)
#define AIO_BIST1_drf_en_con1(data)                                                  (0x00000002&((data)<<1))
#define AIO_BIST1_drf_en_con1_src(data)                                              ((0x00000002&(data))>>1)
#define AIO_BIST1_get_drf_en_con1(data)                                              ((0x00000002&(data))>>1)
#define AIO_BIST1_en_con1_shift                                                      (0)
#define AIO_BIST1_en_con1_mask                                                       (0x00000001)
#define AIO_BIST1_en_con1(data)                                                      (0x00000001&((data)<<0))
#define AIO_BIST1_en_con1_src(data)                                                  ((0x00000001&(data))>>0)
#define AIO_BIST1_get_en_con1(data)                                                  ((0x00000001&(data))>>0)


#define AIO_BIST2                                                                    0x98006510
#define AIO_BIST2_reg_addr                                                           "0xD8006510"
#define AIO_BIST2_reg                                                                0xD8006510
#define set_AIO_BIST2_reg(data)   (*((volatile unsigned int*) AIO_BIST2_reg)=data)
#define get_AIO_BIST2_reg   (*((volatile unsigned int*) AIO_BIST2_reg))
#define AIO_BIST2_inst_adr                                                           "0x0044"
#define AIO_BIST2_inst                                                               0x0044
#define AIO_BIST2_drf_start_pause_con2_shift                                         (15)
#define AIO_BIST2_drf_start_pause_con2_mask                                          (0x00008000)
#define AIO_BIST2_drf_start_pause_con2(data)                                         (0x00008000&((data)<<15))
#define AIO_BIST2_drf_start_pause_con2_src(data)                                     ((0x00008000&(data))>>15)
#define AIO_BIST2_get_drf_start_pause_con2(data)                                     ((0x00008000&(data))>>15)
#define AIO_BIST2_drf_fail_2_con2_shift                                              (14)
#define AIO_BIST2_drf_fail_2_con2_mask                                               (0x00004000)
#define AIO_BIST2_drf_fail_2_con2(data)                                              (0x00004000&((data)<<14))
#define AIO_BIST2_drf_fail_2_con2_src(data)                                          ((0x00004000&(data))>>14)
#define AIO_BIST2_get_drf_fail_2_con2(data)                                          ((0x00004000&(data))>>14)
#define AIO_BIST2_drf_fail_1_con2_shift                                              (13)
#define AIO_BIST2_drf_fail_1_con2_mask                                               (0x00002000)
#define AIO_BIST2_drf_fail_1_con2(data)                                              (0x00002000&((data)<<13))
#define AIO_BIST2_drf_fail_1_con2_src(data)                                          ((0x00002000&(data))>>13)
#define AIO_BIST2_get_drf_fail_1_con2(data)                                          ((0x00002000&(data))>>13)
#define AIO_BIST2_drf_fail_0_con2_shift                                              (12)
#define AIO_BIST2_drf_fail_0_con2_mask                                               (0x00001000)
#define AIO_BIST2_drf_fail_0_con2(data)                                              (0x00001000&((data)<<12))
#define AIO_BIST2_drf_fail_0_con2_src(data)                                          ((0x00001000&(data))>>12)
#define AIO_BIST2_get_drf_fail_0_con2(data)                                          ((0x00001000&(data))>>12)
#define AIO_BIST2_drf_done_con2_shift                                                (11)
#define AIO_BIST2_drf_done_con2_mask                                                 (0x00000800)
#define AIO_BIST2_drf_done_con2(data)                                                (0x00000800&((data)<<11))
#define AIO_BIST2_drf_done_con2_src(data)                                            ((0x00000800&(data))>>11)
#define AIO_BIST2_get_drf_done_con2(data)                                            ((0x00000800&(data))>>11)
#define AIO_BIST2_fail_2_con2_shift                                                  (10)
#define AIO_BIST2_fail_2_con2_mask                                                   (0x00000400)
#define AIO_BIST2_fail_2_con2(data)                                                  (0x00000400&((data)<<10))
#define AIO_BIST2_fail_2_con2_src(data)                                              ((0x00000400&(data))>>10)
#define AIO_BIST2_get_fail_2_con2(data)                                              ((0x00000400&(data))>>10)
#define AIO_BIST2_fail_1_con2_shift                                                  (9)
#define AIO_BIST2_fail_1_con2_mask                                                   (0x00000200)
#define AIO_BIST2_fail_1_con2(data)                                                  (0x00000200&((data)<<9))
#define AIO_BIST2_fail_1_con2_src(data)                                              ((0x00000200&(data))>>9)
#define AIO_BIST2_get_fail_1_con2(data)                                              ((0x00000200&(data))>>9)
#define AIO_BIST2_fail_0_con2_shift                                                  (8)
#define AIO_BIST2_fail_0_con2_mask                                                   (0x00000100)
#define AIO_BIST2_fail_0_con2(data)                                                  (0x00000100&((data)<<8))
#define AIO_BIST2_fail_0_con2_src(data)                                              ((0x00000100&(data))>>8)
#define AIO_BIST2_get_fail_0_con2(data)                                              ((0x00000100&(data))>>8)
#define AIO_BIST2_done_con2_shift                                                    (7)
#define AIO_BIST2_done_con2_mask                                                     (0x00000080)
#define AIO_BIST2_done_con2(data)                                                    (0x00000080&((data)<<7))
#define AIO_BIST2_done_con2_src(data)                                                ((0x00000080&(data))>>7)
#define AIO_BIST2_get_done_con2(data)                                                ((0x00000080&(data))>>7)
#define AIO_BIST2_drf_start_pause_con1_shift                                         (6)
#define AIO_BIST2_drf_start_pause_con1_mask                                          (0x00000040)
#define AIO_BIST2_drf_start_pause_con1(data)                                         (0x00000040&((data)<<6))
#define AIO_BIST2_drf_start_pause_con1_src(data)                                     ((0x00000040&(data))>>6)
#define AIO_BIST2_get_drf_start_pause_con1(data)                                     ((0x00000040&(data))>>6)
#define AIO_BIST2_drf_fail_1_con1_shift                                              (5)
#define AIO_BIST2_drf_fail_1_con1_mask                                               (0x00000020)
#define AIO_BIST2_drf_fail_1_con1(data)                                              (0x00000020&((data)<<5))
#define AIO_BIST2_drf_fail_1_con1_src(data)                                          ((0x00000020&(data))>>5)
#define AIO_BIST2_get_drf_fail_1_con1(data)                                          ((0x00000020&(data))>>5)
#define AIO_BIST2_drf_fail_0_con1_shift                                              (4)
#define AIO_BIST2_drf_fail_0_con1_mask                                               (0x00000010)
#define AIO_BIST2_drf_fail_0_con1(data)                                              (0x00000010&((data)<<4))
#define AIO_BIST2_drf_fail_0_con1_src(data)                                          ((0x00000010&(data))>>4)
#define AIO_BIST2_get_drf_fail_0_con1(data)                                          ((0x00000010&(data))>>4)
#define AIO_BIST2_drf_done_con1_shift                                                (3)
#define AIO_BIST2_drf_done_con1_mask                                                 (0x00000008)
#define AIO_BIST2_drf_done_con1(data)                                                (0x00000008&((data)<<3))
#define AIO_BIST2_drf_done_con1_src(data)                                            ((0x00000008&(data))>>3)
#define AIO_BIST2_get_drf_done_con1(data)                                            ((0x00000008&(data))>>3)
#define AIO_BIST2_fail_1_con1_shift                                                  (2)
#define AIO_BIST2_fail_1_con1_mask                                                   (0x00000004)
#define AIO_BIST2_fail_1_con1(data)                                                  (0x00000004&((data)<<2))
#define AIO_BIST2_fail_1_con1_src(data)                                              ((0x00000004&(data))>>2)
#define AIO_BIST2_get_fail_1_con1(data)                                              ((0x00000004&(data))>>2)
#define AIO_BIST2_fail_0_con1_shift                                                  (1)
#define AIO_BIST2_fail_0_con1_mask                                                   (0x00000002)
#define AIO_BIST2_fail_0_con1(data)                                                  (0x00000002&((data)<<1))
#define AIO_BIST2_fail_0_con1_src(data)                                              ((0x00000002&(data))>>1)
#define AIO_BIST2_get_fail_0_con1(data)                                              ((0x00000002&(data))>>1)
#define AIO_BIST2_done_con1_shift                                                    (0)
#define AIO_BIST2_done_con1_mask                                                     (0x00000001)
#define AIO_BIST2_done_con1(data)                                                    (0x00000001&((data)<<0))
#define AIO_BIST2_done_con1_src(data)                                                ((0x00000001&(data))>>0)
#define AIO_BIST2_get_done_con1(data)                                                ((0x00000001&(data))>>0)


#define AIO_BIST3                                                                    0x98006514
#define AIO_BIST3_reg_addr                                                           "0xD8006514"
#define AIO_BIST3_reg                                                                0xD8006514
#define set_AIO_BIST3_reg(data)   (*((volatile unsigned int*) AIO_BIST3_reg)=data)
#define get_AIO_BIST3_reg   (*((volatile unsigned int*) AIO_BIST3_reg))
#define AIO_BIST3_inst_adr                                                           "0x0045"
#define AIO_BIST3_inst                                                               0x0045
#define AIO_BIST3_ls_adc_shift                                                       (10)
#define AIO_BIST3_ls_adc_mask                                                        (0x00000400)
#define AIO_BIST3_ls_adc(data)                                                       (0x00000400&((data)<<10))
#define AIO_BIST3_ls_adc_src(data)                                                   ((0x00000400&(data))>>10)
#define AIO_BIST3_get_ls_adc(data)                                                   ((0x00000400&(data))>>10)
#define AIO_BIST3_ls2_con2_shift                                                     (9)
#define AIO_BIST3_ls2_con2_mask                                                      (0x00000200)
#define AIO_BIST3_ls2_con2(data)                                                     (0x00000200&((data)<<9))
#define AIO_BIST3_ls2_con2_src(data)                                                 ((0x00000200&(data))>>9)
#define AIO_BIST3_get_ls2_con2(data)                                                 ((0x00000200&(data))>>9)
#define AIO_BIST3_ls1_con2_shift                                                     (8)
#define AIO_BIST3_ls1_con2_mask                                                      (0x00000100)
#define AIO_BIST3_ls1_con2(data)                                                     (0x00000100&((data)<<8))
#define AIO_BIST3_ls1_con2_src(data)                                                 ((0x00000100&(data))>>8)
#define AIO_BIST3_get_ls1_con2(data)                                                 ((0x00000100&(data))>>8)
#define AIO_BIST3_ls0_con2_shift                                                     (7)
#define AIO_BIST3_ls0_con2_mask                                                      (0x00000080)
#define AIO_BIST3_ls0_con2(data)                                                     (0x00000080&((data)<<7))
#define AIO_BIST3_ls0_con2_src(data)                                                 ((0x00000080&(data))>>7)
#define AIO_BIST3_get_ls0_con2(data)                                                 ((0x00000080&(data))>>7)
#define AIO_BIST3_ls1_con1_shift                                                     (6)
#define AIO_BIST3_ls1_con1_mask                                                      (0x00000040)
#define AIO_BIST3_ls1_con1(data)                                                     (0x00000040&((data)<<6))
#define AIO_BIST3_ls1_con1_src(data)                                                 ((0x00000040&(data))>>6)
#define AIO_BIST3_get_ls1_con1(data)                                                 ((0x00000040&(data))>>6)
#define AIO_BIST3_ls0_con1_shift                                                     (5)
#define AIO_BIST3_ls0_con1_mask                                                      (0x00000020)
#define AIO_BIST3_ls0_con1(data)                                                     (0x00000020&((data)<<5))
#define AIO_BIST3_ls0_con1_src(data)                                                 ((0x00000020&(data))>>5)
#define AIO_BIST3_get_ls0_con1(data)                                                 ((0x00000020&(data))>>5)
#define AIO_BIST3_rme_shift                                                          (4)
#define AIO_BIST3_rme_mask                                                           (0x00000010)
#define AIO_BIST3_rme(data)                                                          (0x00000010&((data)<<4))
#define AIO_BIST3_rme_src(data)                                                      ((0x00000010&(data))>>4)
#define AIO_BIST3_get_rme(data)                                                      ((0x00000010&(data))>>4)
#define AIO_BIST3_rm_shift                                                           (0)
#define AIO_BIST3_rm_mask                                                            (0x0000000F)
#define AIO_BIST3_rm(data)                                                           (0x0000000F&((data)<<0))
#define AIO_BIST3_rm_src(data)                                                       ((0x0000000F&(data))>>0)
#define AIO_BIST3_get_rm(data)                                                       ((0x0000000F&(data))>>0)


#endif
