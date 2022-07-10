/**************************************************************
// Spec Version                  : 0.6
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Module_Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/6/28 12:57:20
***************************************************************/


#ifndef _SC_WRAP_DVFS_REG_H_INCLUDED_
#define _SC_WRAP_DVFS_REG_H_INCLUDED_
#ifdef  _SC_WRAP_DVFS_USE_STRUCT
typedef struct 
{
unsigned int     dy_icg_en_dvfs:1;
unsigned int     reserved_0:2;
unsigned int     AXIM_CLKDIV:1;
unsigned int     DBGPWRDUP:4;
unsigned int     reserved_1:3;
unsigned int     CLKENTRC:1;
unsigned int     CLKENAPB:1;
unsigned int     CLKENATB:1;
unsigned int     CLKENAPBCS:1;
unsigned int     CLKENATBCS:1;
unsigned int     reserved_2:2;
unsigned int     nPRESETDBG:1;
unsigned int     nSOCDEBUGRESET:1;
unsigned int     nGICRESET:1;
unsigned int     L2FLUSHREQ:1;
unsigned int     nL2RESET:1;
unsigned int     L2RSTDISABLE:1;
unsigned int     nCORERESET:4;
unsigned int     nCOREPORESET:4;
}SC_WRAP_DVFS_SC_CRT_CTRL;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     WARMRSTREQ:4;
unsigned int     SMPEN:4;
unsigned int     reserved_1:5;
unsigned int     L2FLUSHDONE:1;
unsigned int     reserved_2:1;
unsigned int     STANDBYWFIL2:1;
unsigned int     STANDBYWFE:4;
unsigned int     STANDBYWFI:4;
}SC_WRAP_DVFS_SC_STAT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     nFRQOUT:4;
unsigned int     nIRQOUT:4;
unsigned int     reserved_1:3;
unsigned int     nEXTERRIRQ:1;
unsigned int     nPMUIRQ:4;
}SC_WRAP_DVFS_SC_INT_STAT;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     cfgsdisable_i:1;
unsigned int     cp15disable_i:4;
}SC_WRAP_DVFS_SC_SEC_CTRL;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     PMUEVENT0:30;
}SC_WRAP_DVFS_SC_PMUEVENT0;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     PMUEVENT1:30;
}SC_WRAP_DVFS_SC_PMUEVENT1;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     PMUEVENT2:30;
}SC_WRAP_DVFS_SC_PMUEVENT2;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     PMUEVENT3:30;
}SC_WRAP_DVFS_SC_PMUEVENT3;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     PMIRQ_EN:4;
unsigned int     IRQOUT_EN:4;
unsigned int     reserved_1:3;
unsigned int     EXTERRIRQ_EN:1;
unsigned int     PMUIRQ_EN:4;
}SC_WRAP_DVFS_SC_INT_CTRL;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     speed_en:8;
unsigned int     reserved_1:11;
unsigned int     wire_sel:1;
unsigned int     ro_sel:3;
unsigned int     dss_rst_n:1;
}SC_WRAP_DVFS_SC_DSS_0_CTRL;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     count_out:20;
unsigned int     reserved_1:3;
unsigned int     ready:1;
}SC_WRAP_DVFS_SC_DSS_0_STATUS;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     count_out:20;
unsigned int     reserved_1:3;
unsigned int     ready:1;
}SC_WRAP_DVFS_SC_DSS_1_STATUS;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     count_out:20;
unsigned int     reserved_1:3;
unsigned int     ready:1;
}SC_WRAP_DVFS_SC_DSS_2_STATUS;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     count_out:20;
unsigned int     reserved_1:3;
unsigned int     ready:1;
}SC_WRAP_DVFS_SC_DSS_3_STATUS;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     count_out:20;
unsigned int     reserved_1:3;
unsigned int     ready:1;
}SC_WRAP_DVFS_SC_DSS_4_STATUS;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     count_out:20;
unsigned int     reserved_1:3;
unsigned int     ready:1;
}SC_WRAP_DVFS_SC_DSS_5_STATUS;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     count_out:20;
unsigned int     reserved_1:3;
unsigned int     ready:1;
}SC_WRAP_DVFS_SC_DSS_6_STATUS;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     count_out:20;
unsigned int     reserved_1:3;
unsigned int     ready:1;
}SC_WRAP_DVFS_SC_DSS_7_STATUS;

typedef struct 
{
unsigned int     reserved_0:3;
unsigned int     reg_a:29;
}SC_WRAP_DVFS_TM_SENSOR_CTRL0;

typedef struct 
{
unsigned int     reserved_0:3;
unsigned int     reg_chopen:1;
unsigned int     reg_cal_en:1;
unsigned int     reg_biasdem_sel:1;
unsigned int     reg_biaschop:1;
unsigned int     reg_adccksel:3;
unsigned int     reg_b:22;
}SC_WRAP_DVFS_TM_SENSOR_CTRL1;

typedef struct 
{
unsigned int     reserved_0:7;
unsigned int     reg_vbe_biassel:2;
unsigned int     reg_sdm_test_en:1;
unsigned int     reg_sdm_test:1;
unsigned int     reg_rstb:1;
unsigned int     reg_resol:2;
unsigned int     reg_ppow:1;
unsigned int     reg_osccursel:2;
unsigned int     reg_order3:1;
unsigned int     reg_opcursel:2;
unsigned int     reg_hold_en:1;
unsigned int     reg_hold_dly:2;
unsigned int     reg_filteredgesel:1;
unsigned int     reg_dsr:3;
unsigned int     reg_cksourcesel:1;
unsigned int     reg_chopfreqsel:4;
}SC_WRAP_DVFS_TM_SENSOR_CTRL2;

typedef struct 
{
unsigned int     reserved_0:10;
unsigned int     reg_offset:22;
}SC_WRAP_DVFS_TM_SENSOR_CTRL3;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     reg_r:24;
}SC_WRAP_DVFS_TM_SENSOR_CTRL4;

typedef struct 
{
unsigned int     reserved_0:9;
unsigned int     reg_s:23;
}SC_WRAP_DVFS_TM_SENSOR_CTRL5;

typedef struct 
{
unsigned int     reserved_0:13;
unsigned int     ct_out:19;
}SC_WRAP_DVFS_TM_SENSOR_STATUS1;

typedef struct 
{
unsigned int     reserved_0:10;
unsigned int     u_out:22;
}SC_WRAP_DVFS_TM_SENSOR_STATUS2;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     sc_bist_rstn:1;
unsigned int     reserved_1:2;
unsigned int     sc_bisr_pwr_rstn:1;
unsigned int     sc_bisr_rstn:1;
}SC_WRAP_DVFS_MBIST_RESET;

typedef struct 
{
unsigned int     reserved_0:14;
unsigned int     sc_mbist_share_bus_en:1;
unsigned int     sc_mbist0_all_mode:1;
unsigned int     sc_bist_mode0_ddata:1;
unsigned int     sc_bist_mode0_dtag:1;
unsigned int     sc_bist_mode0_ddirty:1;
unsigned int     sc_bist_mode0_idata:1;
unsigned int     sc_bist_mode0_itag:1;
unsigned int     sc_bist_mode0_btac0:1;
unsigned int     sc_bist_mode0_btac1:1;
unsigned int     sc_bist_mode0_tlb:1;
unsigned int     reserved_1:1;
unsigned int     sc_bist_mode0_scu:1;
unsigned int     sc_bist_mode0_l2_tag:1;
unsigned int     sc_bist_mode0_l2_victim:1;
unsigned int     sc_drf_bisr_mode:1;
unsigned int     sc_drf_bist_mode0:1;
unsigned int     reserved_2:1;
unsigned int     sc_bist_mode0_all:1;
}SC_WRAP_DVFS_MBIST_MODE;

typedef struct 
{
unsigned int     reserved_0:14;
unsigned int     sc_mbistack0_dbg:1;
unsigned int     sc_mbistack_all:1;
unsigned int     sc_bist_done0_ddata:1;
unsigned int     sc_bist_done0_dtag:1;
unsigned int     sc_bist_done0_ddirty:1;
unsigned int     sc_bist_done0_idata:1;
unsigned int     sc_bist_done0_itag:1;
unsigned int     sc_bist_done0_btac0:1;
unsigned int     sc_bist_done0_btac1:1;
unsigned int     sc_bist_done0_tlb:1;
unsigned int     reserved_1:1;
unsigned int     sc_bist_done0_scu:1;
unsigned int     sc_bist_done0_l2_tag:1;
unsigned int     sc_bist_done0_l2_victim:1;
unsigned int     sc_drf_bisr_done:1;
unsigned int     sc_drf_bist_done0:1;
unsigned int     sc_bisr_done:1;
unsigned int     reserved_2:1;
}SC_WRAP_DVFS_MBIST_DONE;

typedef struct 
{
unsigned int     reserved_0:18;
unsigned int     sc_drf_bisr_fail:1;
unsigned int     sc_bisr_fail:1;
unsigned int     reserved_1:2;
unsigned int     sc_drf_bist_fail0_l2:1;
unsigned int     sc_bist_fail0_l2:1;
unsigned int     sc_cpu3_drf_bist_fail0:1;
unsigned int     sc_cpu2_drf_bist_fail0:1;
unsigned int     sc_cpu1_drf_bist_fail0:1;
unsigned int     sc_cpu0_drf_bist_fail0:1;
unsigned int     sc_cpu3_bist_fail0:1;
unsigned int     sc_cpu2_bist_fail0:1;
unsigned int     sc_cpu1_bist_fail0:1;
unsigned int     sc_cpu0_bist_fail0:1;
}SC_WRAP_DVFS_MBIST_FAIL;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     sc_cpu0_bist_fail0_ddata:8;
unsigned int     sc_cpu0_bist_fail0_dtag:4;
unsigned int     reserved_1:1;
unsigned int     sc_cpu0_bist_fail0_ddirty:1;
unsigned int     sc_cpu0_bist_fail0_idata:2;
unsigned int     sc_cpu0_bist_fail0_itag:2;
unsigned int     sc_cpu0_bist_fail0_btac0:1;
unsigned int     sc_cpu0_bist_fail0_btac1:1;
unsigned int     sc_cpu0_bist_fail0_tlb:4;
unsigned int     sc_cpu0_bist_fail0_scu:4;
}SC_WRAP_DVFS_CPU0_BIST_FAIL;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     sc_cpu1_bist_fail0_ddata:8;
unsigned int     sc_cpu1_bist_fail0_dtag:4;
unsigned int     reserved_1:1;
unsigned int     sc_cpu1_bist_fail0_ddirty:1;
unsigned int     sc_cpu1_bist_fail0_idata:2;
unsigned int     sc_cpu1_bist_fail0_itag:2;
unsigned int     sc_cpu1_bist_fail0_btac0:1;
unsigned int     sc_cpu1_bist_fail0_btac1:1;
unsigned int     sc_cpu1_bist_fail0_tlb:4;
unsigned int     sc_cpu1_bist_fail0_scu:4;
}SC_WRAP_DVFS_CPU1_BIST_FAIL;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     sc_cpu2_bist_fail0_ddata:8;
unsigned int     sc_cpu2_bist_fail0_dtag:4;
unsigned int     reserved_1:1;
unsigned int     sc_cpu2_bist_fail0_ddirty:1;
unsigned int     sc_cpu2_bist_fail0_idata:2;
unsigned int     sc_cpu2_bist_fail0_itag:2;
unsigned int     sc_cpu2_bist_fail0_btac0:1;
unsigned int     sc_cpu2_bist_fail0_btac1:1;
unsigned int     sc_cpu2_bist_fail0_tlb:4;
unsigned int     sc_cpu2_bist_fail0_scu:4;
}SC_WRAP_DVFS_CPU2_BIST_FAIL;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     sc_cpu3_bist_fail0_ddata:8;
unsigned int     sc_cpu3_bist_fail0_dtag:4;
unsigned int     reserved_1:1;
unsigned int     sc_cpu3_bist_fail0_ddirty:1;
unsigned int     sc_cpu3_bist_fail0_idata:2;
unsigned int     sc_cpu3_bist_fail0_itag:2;
unsigned int     sc_cpu3_bist_fail0_btac0:1;
unsigned int     sc_cpu3_bist_fail0_btac1:1;
unsigned int     sc_cpu3_bist_fail0_tlb:4;
unsigned int     sc_cpu3_bist_fail0_scu:4;
}SC_WRAP_DVFS_CPU3_BIST_FAIL;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     sc_cpu0_drf_bist_fail0_ddata:8;
unsigned int     sc_cpu0_drf_bist_fail0_dtag:4;
unsigned int     reserved_1:1;
unsigned int     sc_cpu0_drf_bist_fail0_ddirty:1;
unsigned int     sc_cpu0_drf_bist_fail0_idata:2;
unsigned int     sc_cpu0_drf_bist_fail0_itag:2;
unsigned int     sc_cpu0_drf_bist_fail0_btac0:1;
unsigned int     sc_cpu0_drf_bist_fail0_btac1:1;
unsigned int     sc_cpu0_drf_bist_fail0_tlb:4;
unsigned int     sc_cpu0_drf_bist_fail0_scu:4;
}SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     sc_cpu1_drf_bist_fail0_ddata:8;
unsigned int     sc_cpu1_drf_bist_fail0_dtag:4;
unsigned int     reserved_1:1;
unsigned int     sc_cpu1_drf_bist_fail0_ddirty:1;
unsigned int     sc_cpu1_drf_bist_fail0_idata:2;
unsigned int     sc_cpu1_drf_bist_fail0_itag:2;
unsigned int     sc_cpu1_drf_bist_fail0_btac0:1;
unsigned int     sc_cpu1_drf_bist_fail0_btac1:1;
unsigned int     sc_cpu1_drf_bist_fail0_tlb:4;
unsigned int     sc_cpu1_drf_bist_fail0_scu:4;
}SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     sc_cpu2_drf_bist_fail0_ddata:8;
unsigned int     sc_cpu2_drf_bist_fail0_dtag:4;
unsigned int     reserved_1:1;
unsigned int     sc_cpu2_drf_bist_fail0_ddirty:1;
unsigned int     sc_cpu2_drf_bist_fail0_idata:2;
unsigned int     sc_cpu2_drf_bist_fail0_itag:2;
unsigned int     sc_cpu2_drf_bist_fail0_btac0:1;
unsigned int     sc_cpu2_drf_bist_fail0_btac1:1;
unsigned int     sc_cpu2_drf_bist_fail0_tlb:4;
unsigned int     sc_cpu2_drf_bist_fail0_scu:4;
}SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     sc_cpu3_drf_bist_fail0_ddata:8;
unsigned int     sc_cpu3_drf_bist_fail0_dtag:4;
unsigned int     reserved_1:1;
unsigned int     sc_cpu3_drf_bist_fail0_ddirty:1;
unsigned int     sc_cpu3_drf_bist_fail0_idata:2;
unsigned int     sc_cpu3_drf_bist_fail0_itag:2;
unsigned int     sc_cpu3_drf_bist_fail0_btac0:1;
unsigned int     sc_cpu3_drf_bist_fail0_btac1:1;
unsigned int     sc_cpu3_drf_bist_fail0_tlb:4;
unsigned int     sc_cpu3_drf_bist_fail0_scu:4;
}SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     sc_bist_fail0_l2_victim:1;
unsigned int     sc_bist_fail0_l2_tag:16;
}SC_WRAP_DVFS_L2_BIST_FAIL;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     sc_drf_bist_fail0_l2_victim:1;
unsigned int     sc_drf_bist_fail0_l2_tag:16;
}SC_WRAP_DVFS_L2_DRF_BIST_FAIL;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     sc_drf_bisr_test_resume:1;
unsigned int     reserved_1:3;
unsigned int     sc_drf_test_resume0:1;
}SC_WRAP_DVFS_DRF_TEST_RESUME;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     sc_drf_bisr_start_pause:1;
unsigned int     reserved_1:3;
unsigned int     sc_drf_start_pause0:1;
}SC_WRAP_DVFS_CPU_DRF_START_PAUSE;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     sc_bisr_hold_remap:1;
}SC_WRAP_DVFS_HOLD_REMAP;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     sc_bisr_second_run_en:1;
}SC_WRAP_DVFS_SECOND_RUN_EN;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     sc_bisr_repaired:1;
}SC_WRAP_DVFS_BISR_REPAIR;

typedef struct 
{
unsigned int     sc_drf_bisr_fail:16;
unsigned int     sc_bisr_fail:16;
}SC_WRAP_DVFS_BISR_FAIL_SEP;

typedef struct 
{
unsigned int     sc_bisr_out_31_0:32;
}SC_WRAP_DVFS_L2_DATA_BISR_OUT_1;

typedef struct 
{
unsigned int     sc_bisr_out_63_32:32;
}SC_WRAP_DVFS_L2_DATA_BISR_OUT_2;

typedef struct 
{
unsigned int     sc_bisr_out_95_64:32;
}SC_WRAP_DVFS_L2_DATA_BISR_OUT_3;

typedef struct 
{
unsigned int     sc_bisr_out_127_96:32;
}SC_WRAP_DVFS_L2_DATA_BISR_OUT_4;

typedef struct 
{
unsigned int     sc_bisr_out_159_128:32;
}SC_WRAP_DVFS_L2_DATA_BISR_OUT_5;

typedef struct 
{
unsigned int     sc_bisr_out_191_160:32;
}SC_WRAP_DVFS_L2_DATA_BISR_OUT_6;

typedef struct 
{
unsigned int     reserved_0:22;
unsigned int     emaw_idata:2;
unsigned int     reserved_1:3;
unsigned int     emas_idata:1;
unsigned int     reserved_2:1;
unsigned int     ema_idata:3;
}SC_WRAP_DVFS_SRAM_CTRL_IDATA;

typedef struct 
{
unsigned int     reserved_0:22;
unsigned int     emaw_itag:2;
unsigned int     reserved_1:3;
unsigned int     emas_itag:1;
unsigned int     reserved_2:1;
unsigned int     ema_itag:3;
}SC_WRAP_DVFS_SRAM_CTRL_ITAG;

typedef struct 
{
unsigned int     reserved_0:22;
unsigned int     emaw_ddata:2;
unsigned int     reserved_1:3;
unsigned int     emas_ddata:1;
unsigned int     reserved_2:1;
unsigned int     ema_ddata:3;
}SC_WRAP_DVFS_SRAM_CTRL_DDATA;

typedef struct 
{
unsigned int     reserved_0:22;
unsigned int     emaw_dtag:2;
unsigned int     reserved_1:3;
unsigned int     emas_dtag:1;
unsigned int     reserved_2:1;
unsigned int     ema_dtag:3;
}SC_WRAP_DVFS_SRAM_CTRL_DTAG;

typedef struct 
{
unsigned int     reserved_0:22;
unsigned int     emaw_ddirty:2;
unsigned int     reserved_1:3;
unsigned int     emas_ddirty:1;
unsigned int     reserved_2:1;
unsigned int     ema_ddirty:3;
}SC_WRAP_DVFS_SRAM_CTRL_DDIRTY;

typedef struct 
{
unsigned int     reserved_0:22;
unsigned int     emaw_tlb:2;
unsigned int     reserved_1:3;
unsigned int     emas_tlb:1;
unsigned int     reserved_2:1;
unsigned int     ema_tlb:3;
}SC_WRAP_DVFS_SRAM_CTRL_TLB;

typedef struct 
{
unsigned int     reserved_0:22;
unsigned int     emaw_btac0:2;
unsigned int     reserved_1:3;
unsigned int     emas_btac0:1;
unsigned int     reserved_2:1;
unsigned int     ema_btac0:3;
}SC_WRAP_DVFS_SRAM_CTRL_BTAC0;

typedef struct 
{
unsigned int     reserved_0:22;
unsigned int     emaw_btac1:2;
unsigned int     reserved_1:3;
unsigned int     emas_btac1:1;
unsigned int     reserved_2:1;
unsigned int     ema_btac1:3;
}SC_WRAP_DVFS_SRAM_CTRL_BTAC1;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     emaw_scu_l1d_tag:2;
unsigned int     emas_scu_l1d_tag:1;
unsigned int     ema_scu_l1d_tag:3;
unsigned int     reserved_1:2;
unsigned int     emaw_l2_victim:2;
unsigned int     emas_l2_victim:1;
unsigned int     ema_l2_victim:3;
unsigned int     reserved_2:2;
unsigned int     emaw_l2_tag:2;
unsigned int     emas_l2_tag:1;
unsigned int     ema_l2_tag:3;
unsigned int     reserved_3:2;
unsigned int     emaw_l2_data:2;
unsigned int     reserved_4:1;
unsigned int     ema_l2_data:3;
}SC_WRAP_DVFS_SRAM_CTRL_L2;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     sc_RET2N_L2:1;
unsigned int     sc_RET1N_L2:1;
unsigned int     sc_RET2N_L1:4;
unsigned int     sc_RET1N_L1:4;
unsigned int     sc_core_pwrctrl_2nd_in:4;
unsigned int     sc_core_pwrctrl_in:4;
unsigned int     reserved_1:4;
unsigned int     sc_core_clamp_en:4;
}SC_WRAP_DVFS_SC_LOW_POWER_CTRL;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     sc_core_pwrctrl_2nd_out:4;
unsigned int     sc_core_pwrctrl_out:4;
unsigned int     reserved_1:4;
unsigned int     PARM_L1:4;
}SC_WRAP_DVFS_SC_LOW_POWER_STATUS;

typedef struct 
{
unsigned int     data_0:32;
}SC_WRAP_DVFS_SC_DUMMY_0;

typedef struct 
{
unsigned int     data_1:32;
}SC_WRAP_DVFS_SC_DUMMY_1;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     PLLTST_EN:1;
unsigned int     reserved_1:2;
unsigned int     PLLTST_MUX_CTRL:2;
unsigned int     reserved_2:2;
unsigned int     PLLTST_DIV:2;
}SC_WRAP_DVFS_SC_PLL_CTRL;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     WDO_PLLA:1;
}SC_WRAP_DVFS_SC_PLL_STAT;

#endif

#define SC_WRAP_DVFS_SC_CRT_CTRL                                                     0x9801D100
#define SC_WRAP_DVFS_SC_CRT_CTRL_reg_addr                                            "0xD801D100"
#define SC_WRAP_DVFS_SC_CRT_CTRL_reg                                                 0xD801D100
#define set_SC_WRAP_DVFS_SC_CRT_CTRL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_CRT_CTRL_reg)=data)
#define get_SC_WRAP_DVFS_SC_CRT_CTRL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_CRT_CTRL_reg))
#define SC_WRAP_DVFS_SC_CRT_CTRL_inst_adr                                            "0x0040"
#define SC_WRAP_DVFS_SC_CRT_CTRL_inst                                                0x0040
#define SC_WRAP_DVFS_SC_CRT_CTRL_dy_icg_en_dvfs_shift                                (31)
#define SC_WRAP_DVFS_SC_CRT_CTRL_dy_icg_en_dvfs_mask                                 (0x80000000)
#define SC_WRAP_DVFS_SC_CRT_CTRL_dy_icg_en_dvfs(data)                                (0x80000000&((data)<<31))
#define SC_WRAP_DVFS_SC_CRT_CTRL_dy_icg_en_dvfs_src(data)                            ((0x80000000&(data))>>31)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_dy_icg_en_dvfs(data)                            ((0x80000000&(data))>>31)
#define SC_WRAP_DVFS_SC_CRT_CTRL_AXIM_CLKDIV_shift                                   (28)
#define SC_WRAP_DVFS_SC_CRT_CTRL_AXIM_CLKDIV_mask                                    (0x10000000)
#define SC_WRAP_DVFS_SC_CRT_CTRL_AXIM_CLKDIV(data)                                   (0x10000000&((data)<<28))
#define SC_WRAP_DVFS_SC_CRT_CTRL_AXIM_CLKDIV_src(data)                               ((0x10000000&(data))>>28)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_AXIM_CLKDIV(data)                               ((0x10000000&(data))>>28)
#define SC_WRAP_DVFS_SC_CRT_CTRL_DBGPWRDUP_shift                                     (24)
#define SC_WRAP_DVFS_SC_CRT_CTRL_DBGPWRDUP_mask                                      (0x0F000000)
#define SC_WRAP_DVFS_SC_CRT_CTRL_DBGPWRDUP(data)                                     (0x0F000000&((data)<<24))
#define SC_WRAP_DVFS_SC_CRT_CTRL_DBGPWRDUP_src(data)                                 ((0x0F000000&(data))>>24)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_DBGPWRDUP(data)                                 ((0x0F000000&(data))>>24)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENTRC_shift                                      (20)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENTRC_mask                                       (0x00100000)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENTRC(data)                                      (0x00100000&((data)<<20))
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENTRC_src(data)                                  ((0x00100000&(data))>>20)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_CLKENTRC(data)                                  ((0x00100000&(data))>>20)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENAPB_shift                                      (19)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENAPB_mask                                       (0x00080000)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENAPB(data)                                      (0x00080000&((data)<<19))
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENAPB_src(data)                                  ((0x00080000&(data))>>19)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_CLKENAPB(data)                                  ((0x00080000&(data))>>19)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENATB_shift                                      (18)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENATB_mask                                       (0x00040000)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENATB(data)                                      (0x00040000&((data)<<18))
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENATB_src(data)                                  ((0x00040000&(data))>>18)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_CLKENATB(data)                                  ((0x00040000&(data))>>18)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENAPBCS_shift                                    (17)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENAPBCS_mask                                     (0x00020000)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENAPBCS(data)                                    (0x00020000&((data)<<17))
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENAPBCS_src(data)                                ((0x00020000&(data))>>17)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_CLKENAPBCS(data)                                ((0x00020000&(data))>>17)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENATBCS_shift                                    (16)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENATBCS_mask                                     (0x00010000)
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENATBCS(data)                                    (0x00010000&((data)<<16))
#define SC_WRAP_DVFS_SC_CRT_CTRL_CLKENATBCS_src(data)                                ((0x00010000&(data))>>16)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_CLKENATBCS(data)                                ((0x00010000&(data))>>16)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nPRESETDBG_shift                                    (13)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nPRESETDBG_mask                                     (0x00002000)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nPRESETDBG(data)                                    (0x00002000&((data)<<13))
#define SC_WRAP_DVFS_SC_CRT_CTRL_nPRESETDBG_src(data)                                ((0x00002000&(data))>>13)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_nPRESETDBG(data)                                ((0x00002000&(data))>>13)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nSOCDEBUGRESET_shift                                (12)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nSOCDEBUGRESET_mask                                 (0x00001000)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nSOCDEBUGRESET(data)                                (0x00001000&((data)<<12))
#define SC_WRAP_DVFS_SC_CRT_CTRL_nSOCDEBUGRESET_src(data)                            ((0x00001000&(data))>>12)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_nSOCDEBUGRESET(data)                            ((0x00001000&(data))>>12)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nGICRESET_shift                                     (11)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nGICRESET_mask                                      (0x00000800)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nGICRESET(data)                                     (0x00000800&((data)<<11))
#define SC_WRAP_DVFS_SC_CRT_CTRL_nGICRESET_src(data)                                 ((0x00000800&(data))>>11)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_nGICRESET(data)                                 ((0x00000800&(data))>>11)
#define SC_WRAP_DVFS_SC_CRT_CTRL_L2FLUSHREQ_shift                                    (10)
#define SC_WRAP_DVFS_SC_CRT_CTRL_L2FLUSHREQ_mask                                     (0x00000400)
#define SC_WRAP_DVFS_SC_CRT_CTRL_L2FLUSHREQ(data)                                    (0x00000400&((data)<<10))
#define SC_WRAP_DVFS_SC_CRT_CTRL_L2FLUSHREQ_src(data)                                ((0x00000400&(data))>>10)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_L2FLUSHREQ(data)                                ((0x00000400&(data))>>10)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nL2RESET_shift                                      (9)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nL2RESET_mask                                       (0x00000200)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nL2RESET(data)                                      (0x00000200&((data)<<9))
#define SC_WRAP_DVFS_SC_CRT_CTRL_nL2RESET_src(data)                                  ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_nL2RESET(data)                                  ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_SC_CRT_CTRL_L2RSTDISABLE_shift                                  (8)
#define SC_WRAP_DVFS_SC_CRT_CTRL_L2RSTDISABLE_mask                                   (0x00000100)
#define SC_WRAP_DVFS_SC_CRT_CTRL_L2RSTDISABLE(data)                                  (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_SC_CRT_CTRL_L2RSTDISABLE_src(data)                              ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_L2RSTDISABLE(data)                              ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nCORERESET_shift                                    (4)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nCORERESET_mask                                     (0x000000F0)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nCORERESET(data)                                    (0x000000F0&((data)<<4))
#define SC_WRAP_DVFS_SC_CRT_CTRL_nCORERESET_src(data)                                ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_nCORERESET(data)                                ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nCOREPORESET_shift                                  (0)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nCOREPORESET_mask                                   (0x0000000F)
#define SC_WRAP_DVFS_SC_CRT_CTRL_nCOREPORESET(data)                                  (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_SC_CRT_CTRL_nCOREPORESET_src(data)                              ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_SC_CRT_CTRL_get_nCOREPORESET(data)                              ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_SC_STAT                                                         0x9801D104
#define SC_WRAP_DVFS_SC_STAT_reg_addr                                                "0xD801D104"
#define SC_WRAP_DVFS_SC_STAT_reg                                                     0xD801D104
#define set_SC_WRAP_DVFS_SC_STAT_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_STAT_reg)=data)
#define get_SC_WRAP_DVFS_SC_STAT_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_STAT_reg))
#define SC_WRAP_DVFS_SC_STAT_inst_adr                                                "0x0041"
#define SC_WRAP_DVFS_SC_STAT_inst                                                    0x0041
#define SC_WRAP_DVFS_SC_STAT_WARMRSTREQ_shift                                        (20)
#define SC_WRAP_DVFS_SC_STAT_WARMRSTREQ_mask                                         (0x00F00000)
#define SC_WRAP_DVFS_SC_STAT_WARMRSTREQ(data)                                        (0x00F00000&((data)<<20))
#define SC_WRAP_DVFS_SC_STAT_WARMRSTREQ_src(data)                                    ((0x00F00000&(data))>>20)
#define SC_WRAP_DVFS_SC_STAT_get_WARMRSTREQ(data)                                    ((0x00F00000&(data))>>20)
#define SC_WRAP_DVFS_SC_STAT_SMPEN_shift                                             (16)
#define SC_WRAP_DVFS_SC_STAT_SMPEN_mask                                              (0x000F0000)
#define SC_WRAP_DVFS_SC_STAT_SMPEN(data)                                             (0x000F0000&((data)<<16))
#define SC_WRAP_DVFS_SC_STAT_SMPEN_src(data)                                         ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_SC_STAT_get_SMPEN(data)                                         ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_SC_STAT_L2FLUSHDONE_shift                                       (10)
#define SC_WRAP_DVFS_SC_STAT_L2FLUSHDONE_mask                                        (0x00000400)
#define SC_WRAP_DVFS_SC_STAT_L2FLUSHDONE(data)                                       (0x00000400&((data)<<10))
#define SC_WRAP_DVFS_SC_STAT_L2FLUSHDONE_src(data)                                   ((0x00000400&(data))>>10)
#define SC_WRAP_DVFS_SC_STAT_get_L2FLUSHDONE(data)                                   ((0x00000400&(data))>>10)
#define SC_WRAP_DVFS_SC_STAT_STANDBYWFIL2_shift                                      (8)
#define SC_WRAP_DVFS_SC_STAT_STANDBYWFIL2_mask                                       (0x00000100)
#define SC_WRAP_DVFS_SC_STAT_STANDBYWFIL2(data)                                      (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_SC_STAT_STANDBYWFIL2_src(data)                                  ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_SC_STAT_get_STANDBYWFIL2(data)                                  ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_SC_STAT_STANDBYWFE_shift                                        (4)
#define SC_WRAP_DVFS_SC_STAT_STANDBYWFE_mask                                         (0x000000F0)
#define SC_WRAP_DVFS_SC_STAT_STANDBYWFE(data)                                        (0x000000F0&((data)<<4))
#define SC_WRAP_DVFS_SC_STAT_STANDBYWFE_src(data)                                    ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_SC_STAT_get_STANDBYWFE(data)                                    ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_SC_STAT_STANDBYWFI_shift                                        (0)
#define SC_WRAP_DVFS_SC_STAT_STANDBYWFI_mask                                         (0x0000000F)
#define SC_WRAP_DVFS_SC_STAT_STANDBYWFI(data)                                        (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_SC_STAT_STANDBYWFI_src(data)                                    ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_SC_STAT_get_STANDBYWFI(data)                                    ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_SC_INT_STAT                                                     0x9801D108
#define SC_WRAP_DVFS_SC_INT_STAT_reg_addr                                            "0xD801D108"
#define SC_WRAP_DVFS_SC_INT_STAT_reg                                                 0xD801D108
#define set_SC_WRAP_DVFS_SC_INT_STAT_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_INT_STAT_reg)=data)
#define get_SC_WRAP_DVFS_SC_INT_STAT_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_INT_STAT_reg))
#define SC_WRAP_DVFS_SC_INT_STAT_inst_adr                                            "0x0042"
#define SC_WRAP_DVFS_SC_INT_STAT_inst                                                0x0042
#define SC_WRAP_DVFS_SC_INT_STAT_nFRQOUT_shift                                       (12)
#define SC_WRAP_DVFS_SC_INT_STAT_nFRQOUT_mask                                        (0x0000F000)
#define SC_WRAP_DVFS_SC_INT_STAT_nFRQOUT(data)                                       (0x0000F000&((data)<<12))
#define SC_WRAP_DVFS_SC_INT_STAT_nFRQOUT_src(data)                                   ((0x0000F000&(data))>>12)
#define SC_WRAP_DVFS_SC_INT_STAT_get_nFRQOUT(data)                                   ((0x0000F000&(data))>>12)
#define SC_WRAP_DVFS_SC_INT_STAT_nIRQOUT_shift                                       (8)
#define SC_WRAP_DVFS_SC_INT_STAT_nIRQOUT_mask                                        (0x00000F00)
#define SC_WRAP_DVFS_SC_INT_STAT_nIRQOUT(data)                                       (0x00000F00&((data)<<8))
#define SC_WRAP_DVFS_SC_INT_STAT_nIRQOUT_src(data)                                   ((0x00000F00&(data))>>8)
#define SC_WRAP_DVFS_SC_INT_STAT_get_nIRQOUT(data)                                   ((0x00000F00&(data))>>8)
#define SC_WRAP_DVFS_SC_INT_STAT_nEXTERRIRQ_shift                                    (4)
#define SC_WRAP_DVFS_SC_INT_STAT_nEXTERRIRQ_mask                                     (0x00000010)
#define SC_WRAP_DVFS_SC_INT_STAT_nEXTERRIRQ(data)                                    (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_SC_INT_STAT_nEXTERRIRQ_src(data)                                ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SC_INT_STAT_get_nEXTERRIRQ(data)                                ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SC_INT_STAT_nPMUIRQ_shift                                       (0)
#define SC_WRAP_DVFS_SC_INT_STAT_nPMUIRQ_mask                                        (0x0000000F)
#define SC_WRAP_DVFS_SC_INT_STAT_nPMUIRQ(data)                                       (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_SC_INT_STAT_nPMUIRQ_src(data)                                   ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_SC_INT_STAT_get_nPMUIRQ(data)                                   ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_SC_SEC_CTRL                                                     0x9801D10C
#define SC_WRAP_DVFS_SC_SEC_CTRL_reg_addr                                            "0xD801D10C"
#define SC_WRAP_DVFS_SC_SEC_CTRL_reg                                                 0xD801D10C
#define set_SC_WRAP_DVFS_SC_SEC_CTRL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_SEC_CTRL_reg)=data)
#define get_SC_WRAP_DVFS_SC_SEC_CTRL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_SEC_CTRL_reg))
#define SC_WRAP_DVFS_SC_SEC_CTRL_inst_adr                                            "0x0043"
#define SC_WRAP_DVFS_SC_SEC_CTRL_inst                                                0x0043
#define SC_WRAP_DVFS_SC_SEC_CTRL_cfgsdisable_i_shift                                 (4)
#define SC_WRAP_DVFS_SC_SEC_CTRL_cfgsdisable_i_mask                                  (0x00000010)
#define SC_WRAP_DVFS_SC_SEC_CTRL_cfgsdisable_i(data)                                 (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_SC_SEC_CTRL_cfgsdisable_i_src(data)                             ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SC_SEC_CTRL_get_cfgsdisable_i(data)                             ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SC_SEC_CTRL_cp15disable_i_shift                                 (0)
#define SC_WRAP_DVFS_SC_SEC_CTRL_cp15disable_i_mask                                  (0x0000000F)
#define SC_WRAP_DVFS_SC_SEC_CTRL_cp15disable_i(data)                                 (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_SC_SEC_CTRL_cp15disable_i_src(data)                             ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_SC_SEC_CTRL_get_cp15disable_i(data)                             ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_SC_PMUEVENT0                                                    0x9801D110
#define SC_WRAP_DVFS_SC_PMUEVENT0_reg_addr                                           "0xD801D110"
#define SC_WRAP_DVFS_SC_PMUEVENT0_reg                                                0xD801D110
#define set_SC_WRAP_DVFS_SC_PMUEVENT0_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_PMUEVENT0_reg)=data)
#define get_SC_WRAP_DVFS_SC_PMUEVENT0_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_PMUEVENT0_reg))
#define SC_WRAP_DVFS_SC_PMUEVENT0_inst_adr                                           "0x0044"
#define SC_WRAP_DVFS_SC_PMUEVENT0_inst                                               0x0044
#define SC_WRAP_DVFS_SC_PMUEVENT0_PMUEVENT0_shift                                    (0)
#define SC_WRAP_DVFS_SC_PMUEVENT0_PMUEVENT0_mask                                     (0x3FFFFFFF)
#define SC_WRAP_DVFS_SC_PMUEVENT0_PMUEVENT0(data)                                    (0x3FFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_SC_PMUEVENT0_PMUEVENT0_src(data)                                ((0x3FFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_SC_PMUEVENT0_get_PMUEVENT0(data)                                ((0x3FFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_SC_PMUEVENT1                                                    0x9801D114
#define SC_WRAP_DVFS_SC_PMUEVENT1_reg_addr                                           "0xD801D114"
#define SC_WRAP_DVFS_SC_PMUEVENT1_reg                                                0xD801D114
#define set_SC_WRAP_DVFS_SC_PMUEVENT1_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_PMUEVENT1_reg)=data)
#define get_SC_WRAP_DVFS_SC_PMUEVENT1_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_PMUEVENT1_reg))
#define SC_WRAP_DVFS_SC_PMUEVENT1_inst_adr                                           "0x0045"
#define SC_WRAP_DVFS_SC_PMUEVENT1_inst                                               0x0045
#define SC_WRAP_DVFS_SC_PMUEVENT1_PMUEVENT1_shift                                    (0)
#define SC_WRAP_DVFS_SC_PMUEVENT1_PMUEVENT1_mask                                     (0x3FFFFFFF)
#define SC_WRAP_DVFS_SC_PMUEVENT1_PMUEVENT1(data)                                    (0x3FFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_SC_PMUEVENT1_PMUEVENT1_src(data)                                ((0x3FFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_SC_PMUEVENT1_get_PMUEVENT1(data)                                ((0x3FFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_SC_PMUEVENT2                                                    0x9801D118
#define SC_WRAP_DVFS_SC_PMUEVENT2_reg_addr                                           "0xD801D118"
#define SC_WRAP_DVFS_SC_PMUEVENT2_reg                                                0xD801D118
#define set_SC_WRAP_DVFS_SC_PMUEVENT2_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_PMUEVENT2_reg)=data)
#define get_SC_WRAP_DVFS_SC_PMUEVENT2_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_PMUEVENT2_reg))
#define SC_WRAP_DVFS_SC_PMUEVENT2_inst_adr                                           "0x0046"
#define SC_WRAP_DVFS_SC_PMUEVENT2_inst                                               0x0046
#define SC_WRAP_DVFS_SC_PMUEVENT2_PMUEVENT2_shift                                    (0)
#define SC_WRAP_DVFS_SC_PMUEVENT2_PMUEVENT2_mask                                     (0x3FFFFFFF)
#define SC_WRAP_DVFS_SC_PMUEVENT2_PMUEVENT2(data)                                    (0x3FFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_SC_PMUEVENT2_PMUEVENT2_src(data)                                ((0x3FFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_SC_PMUEVENT2_get_PMUEVENT2(data)                                ((0x3FFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_SC_PMUEVENT3                                                    0x9801D11C
#define SC_WRAP_DVFS_SC_PMUEVENT3_reg_addr                                           "0xD801D11C"
#define SC_WRAP_DVFS_SC_PMUEVENT3_reg                                                0xD801D11C
#define set_SC_WRAP_DVFS_SC_PMUEVENT3_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_PMUEVENT3_reg)=data)
#define get_SC_WRAP_DVFS_SC_PMUEVENT3_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_PMUEVENT3_reg))
#define SC_WRAP_DVFS_SC_PMUEVENT3_inst_adr                                           "0x0047"
#define SC_WRAP_DVFS_SC_PMUEVENT3_inst                                               0x0047
#define SC_WRAP_DVFS_SC_PMUEVENT3_PMUEVENT3_shift                                    (0)
#define SC_WRAP_DVFS_SC_PMUEVENT3_PMUEVENT3_mask                                     (0x3FFFFFFF)
#define SC_WRAP_DVFS_SC_PMUEVENT3_PMUEVENT3(data)                                    (0x3FFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_SC_PMUEVENT3_PMUEVENT3_src(data)                                ((0x3FFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_SC_PMUEVENT3_get_PMUEVENT3(data)                                ((0x3FFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_SC_INT_CTRL                                                     0x9801D120
#define SC_WRAP_DVFS_SC_INT_CTRL_reg_addr                                            "0xD801D120"
#define SC_WRAP_DVFS_SC_INT_CTRL_reg                                                 0xD801D120
#define set_SC_WRAP_DVFS_SC_INT_CTRL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_INT_CTRL_reg)=data)
#define get_SC_WRAP_DVFS_SC_INT_CTRL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_INT_CTRL_reg))
#define SC_WRAP_DVFS_SC_INT_CTRL_inst_adr                                            "0x0048"
#define SC_WRAP_DVFS_SC_INT_CTRL_inst                                                0x0048
#define SC_WRAP_DVFS_SC_INT_CTRL_PMIRQ_EN_shift                                      (12)
#define SC_WRAP_DVFS_SC_INT_CTRL_PMIRQ_EN_mask                                       (0x0000F000)
#define SC_WRAP_DVFS_SC_INT_CTRL_PMIRQ_EN(data)                                      (0x0000F000&((data)<<12))
#define SC_WRAP_DVFS_SC_INT_CTRL_PMIRQ_EN_src(data)                                  ((0x0000F000&(data))>>12)
#define SC_WRAP_DVFS_SC_INT_CTRL_get_PMIRQ_EN(data)                                  ((0x0000F000&(data))>>12)
#define SC_WRAP_DVFS_SC_INT_CTRL_IRQOUT_EN_shift                                     (8)
#define SC_WRAP_DVFS_SC_INT_CTRL_IRQOUT_EN_mask                                      (0x00000F00)
#define SC_WRAP_DVFS_SC_INT_CTRL_IRQOUT_EN(data)                                     (0x00000F00&((data)<<8))
#define SC_WRAP_DVFS_SC_INT_CTRL_IRQOUT_EN_src(data)                                 ((0x00000F00&(data))>>8)
#define SC_WRAP_DVFS_SC_INT_CTRL_get_IRQOUT_EN(data)                                 ((0x00000F00&(data))>>8)
#define SC_WRAP_DVFS_SC_INT_CTRL_EXTERRIRQ_EN_shift                                  (4)
#define SC_WRAP_DVFS_SC_INT_CTRL_EXTERRIRQ_EN_mask                                   (0x00000010)
#define SC_WRAP_DVFS_SC_INT_CTRL_EXTERRIRQ_EN(data)                                  (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_SC_INT_CTRL_EXTERRIRQ_EN_src(data)                              ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SC_INT_CTRL_get_EXTERRIRQ_EN(data)                              ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SC_INT_CTRL_PMUIRQ_EN_shift                                     (0)
#define SC_WRAP_DVFS_SC_INT_CTRL_PMUIRQ_EN_mask                                      (0x0000000F)
#define SC_WRAP_DVFS_SC_INT_CTRL_PMUIRQ_EN(data)                                     (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_SC_INT_CTRL_PMUIRQ_EN_src(data)                                 ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_SC_INT_CTRL_get_PMUIRQ_EN(data)                                 ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_SC_DSS_0_CTRL                                                   0x9801D128
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_reg_addr                                          "0xD801D128"
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_reg                                               0xD801D128
#define set_SC_WRAP_DVFS_SC_DSS_0_CTRL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_0_CTRL_reg)=data)
#define get_SC_WRAP_DVFS_SC_DSS_0_CTRL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_0_CTRL_reg))
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_inst_adr                                          "0x004A"
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_inst                                              0x004A
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_speed_en_shift                                    (16)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_speed_en_mask                                     (0x00FF0000)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_speed_en(data)                                    (0x00FF0000&((data)<<16))
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_speed_en_src(data)                                ((0x00FF0000&(data))>>16)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_get_speed_en(data)                                ((0x00FF0000&(data))>>16)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_wire_sel_shift                                    (4)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_wire_sel_mask                                     (0x00000010)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_wire_sel(data)                                    (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_wire_sel_src(data)                                ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_get_wire_sel(data)                                ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_ro_sel_shift                                      (1)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_ro_sel_mask                                       (0x0000000E)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_ro_sel(data)                                      (0x0000000E&((data)<<1))
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_ro_sel_src(data)                                  ((0x0000000E&(data))>>1)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_get_ro_sel(data)                                  ((0x0000000E&(data))>>1)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_dss_rst_n_shift                                   (0)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_dss_rst_n_mask                                    (0x00000001)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_dss_rst_n(data)                                   (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_dss_rst_n_src(data)                               ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_SC_DSS_0_CTRL_get_dss_rst_n(data)                               ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_SC_DSS_0_STATUS                                                 0x9801D130
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_reg_addr                                        "0xD801D130"
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_reg                                             0xD801D130
#define set_SC_WRAP_DVFS_SC_DSS_0_STATUS_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_0_STATUS_reg)=data)
#define get_SC_WRAP_DVFS_SC_DSS_0_STATUS_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_0_STATUS_reg))
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_inst_adr                                        "0x004C"
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_inst                                            0x004C
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_count_out_shift                                 (4)
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_count_out_mask                                  (0x00FFFFF0)
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_count_out(data)                                 (0x00FFFFF0&((data)<<4))
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_count_out_src(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_get_count_out(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_ready_shift                                     (0)
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_ready_mask                                      (0x00000001)
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_ready(data)                                     (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_ready_src(data)                                 ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_SC_DSS_0_STATUS_get_ready(data)                                 ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_SC_DSS_1_STATUS                                                 0x9801D134
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_reg_addr                                        "0xD801D134"
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_reg                                             0xD801D134
#define set_SC_WRAP_DVFS_SC_DSS_1_STATUS_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_1_STATUS_reg)=data)
#define get_SC_WRAP_DVFS_SC_DSS_1_STATUS_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_1_STATUS_reg))
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_inst_adr                                        "0x004D"
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_inst                                            0x004D
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_count_out_shift                                 (4)
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_count_out_mask                                  (0x00FFFFF0)
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_count_out(data)                                 (0x00FFFFF0&((data)<<4))
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_count_out_src(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_get_count_out(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_ready_shift                                     (0)
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_ready_mask                                      (0x00000001)
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_ready(data)                                     (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_ready_src(data)                                 ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_SC_DSS_1_STATUS_get_ready(data)                                 ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_SC_DSS_2_STATUS                                                 0x9801D138
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_reg_addr                                        "0xD801D138"
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_reg                                             0xD801D138
#define set_SC_WRAP_DVFS_SC_DSS_2_STATUS_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_2_STATUS_reg)=data)
#define get_SC_WRAP_DVFS_SC_DSS_2_STATUS_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_2_STATUS_reg))
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_inst_adr                                        "0x004E"
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_inst                                            0x004E
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_count_out_shift                                 (4)
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_count_out_mask                                  (0x00FFFFF0)
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_count_out(data)                                 (0x00FFFFF0&((data)<<4))
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_count_out_src(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_get_count_out(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_ready_shift                                     (0)
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_ready_mask                                      (0x00000001)
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_ready(data)                                     (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_ready_src(data)                                 ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_SC_DSS_2_STATUS_get_ready(data)                                 ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_SC_DSS_3_STATUS                                                 0x9801D13C
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_reg_addr                                        "0xD801D13C"
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_reg                                             0xD801D13C
#define set_SC_WRAP_DVFS_SC_DSS_3_STATUS_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_3_STATUS_reg)=data)
#define get_SC_WRAP_DVFS_SC_DSS_3_STATUS_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_3_STATUS_reg))
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_inst_adr                                        "0x004F"
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_inst                                            0x004F
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_count_out_shift                                 (4)
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_count_out_mask                                  (0x00FFFFF0)
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_count_out(data)                                 (0x00FFFFF0&((data)<<4))
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_count_out_src(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_get_count_out(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_ready_shift                                     (0)
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_ready_mask                                      (0x00000001)
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_ready(data)                                     (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_ready_src(data)                                 ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_SC_DSS_3_STATUS_get_ready(data)                                 ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_SC_DSS_4_STATUS                                                 0x9801D140
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_reg_addr                                        "0xD801D140"
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_reg                                             0xD801D140
#define set_SC_WRAP_DVFS_SC_DSS_4_STATUS_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_4_STATUS_reg)=data)
#define get_SC_WRAP_DVFS_SC_DSS_4_STATUS_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_4_STATUS_reg))
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_inst_adr                                        "0x0050"
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_inst                                            0x0050
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_count_out_shift                                 (4)
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_count_out_mask                                  (0x00FFFFF0)
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_count_out(data)                                 (0x00FFFFF0&((data)<<4))
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_count_out_src(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_get_count_out(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_ready_shift                                     (0)
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_ready_mask                                      (0x00000001)
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_ready(data)                                     (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_ready_src(data)                                 ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_SC_DSS_4_STATUS_get_ready(data)                                 ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_SC_DSS_5_STATUS                                                 0x9801D144
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_reg_addr                                        "0xD801D144"
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_reg                                             0xD801D144
#define set_SC_WRAP_DVFS_SC_DSS_5_STATUS_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_5_STATUS_reg)=data)
#define get_SC_WRAP_DVFS_SC_DSS_5_STATUS_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_5_STATUS_reg))
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_inst_adr                                        "0x0051"
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_inst                                            0x0051
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_count_out_shift                                 (4)
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_count_out_mask                                  (0x00FFFFF0)
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_count_out(data)                                 (0x00FFFFF0&((data)<<4))
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_count_out_src(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_get_count_out(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_ready_shift                                     (0)
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_ready_mask                                      (0x00000001)
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_ready(data)                                     (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_ready_src(data)                                 ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_SC_DSS_5_STATUS_get_ready(data)                                 ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_SC_DSS_6_STATUS                                                 0x9801D148
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_reg_addr                                        "0xD801D148"
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_reg                                             0xD801D148
#define set_SC_WRAP_DVFS_SC_DSS_6_STATUS_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_6_STATUS_reg)=data)
#define get_SC_WRAP_DVFS_SC_DSS_6_STATUS_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_6_STATUS_reg))
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_inst_adr                                        "0x0052"
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_inst                                            0x0052
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_count_out_shift                                 (4)
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_count_out_mask                                  (0x00FFFFF0)
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_count_out(data)                                 (0x00FFFFF0&((data)<<4))
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_count_out_src(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_get_count_out(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_ready_shift                                     (0)
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_ready_mask                                      (0x00000001)
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_ready(data)                                     (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_ready_src(data)                                 ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_SC_DSS_6_STATUS_get_ready(data)                                 ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_SC_DSS_7_STATUS                                                 0x9801D14C
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_reg_addr                                        "0xD801D14C"
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_reg                                             0xD801D14C
#define set_SC_WRAP_DVFS_SC_DSS_7_STATUS_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_7_STATUS_reg)=data)
#define get_SC_WRAP_DVFS_SC_DSS_7_STATUS_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DSS_7_STATUS_reg))
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_inst_adr                                        "0x0053"
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_inst                                            0x0053
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_count_out_shift                                 (4)
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_count_out_mask                                  (0x00FFFFF0)
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_count_out(data)                                 (0x00FFFFF0&((data)<<4))
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_count_out_src(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_get_count_out(data)                             ((0x00FFFFF0&(data))>>4)
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_ready_shift                                     (0)
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_ready_mask                                      (0x00000001)
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_ready(data)                                     (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_ready_src(data)                                 ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_SC_DSS_7_STATUS_get_ready(data)                                 ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_TM_SENSOR_CTRL0                                                 0x9801D150
#define SC_WRAP_DVFS_TM_SENSOR_CTRL0_reg_addr                                        "0xD801D150"
#define SC_WRAP_DVFS_TM_SENSOR_CTRL0_reg                                             0xD801D150
#define set_SC_WRAP_DVFS_TM_SENSOR_CTRL0_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_CTRL0_reg)=data)
#define get_SC_WRAP_DVFS_TM_SENSOR_CTRL0_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_CTRL0_reg))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL0_inst_adr                                        "0x0054"
#define SC_WRAP_DVFS_TM_SENSOR_CTRL0_inst                                            0x0054
#define SC_WRAP_DVFS_TM_SENSOR_CTRL0_reg_a_shift                                     (0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL0_reg_a_mask                                      (0x1FFFFFFF)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL0_reg_a(data)                                     (0x1FFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL0_reg_a_src(data)                                 ((0x1FFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL0_get_reg_a(data)                                 ((0x1FFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_TM_SENSOR_CTRL1                                                 0x9801D154
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_addr                                        "0xD801D154"
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg                                             0xD801D154
#define set_SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg)=data)
#define get_SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_inst_adr                                        "0x0055"
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_inst                                            0x0055
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_chopen_shift                                (28)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_chopen_mask                                 (0x10000000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_chopen(data)                                (0x10000000&((data)<<28))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_chopen_src(data)                            ((0x10000000&(data))>>28)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_get_reg_chopen(data)                            ((0x10000000&(data))>>28)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_cal_en_shift                                (27)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_cal_en_mask                                 (0x08000000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_cal_en(data)                                (0x08000000&((data)<<27))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_cal_en_src(data)                            ((0x08000000&(data))>>27)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_get_reg_cal_en(data)                            ((0x08000000&(data))>>27)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_biasdem_sel_shift                           (26)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_biasdem_sel_mask                            (0x04000000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_biasdem_sel(data)                           (0x04000000&((data)<<26))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_biasdem_sel_src(data)                       ((0x04000000&(data))>>26)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_get_reg_biasdem_sel(data)                       ((0x04000000&(data))>>26)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_biaschop_shift                              (25)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_biaschop_mask                               (0x02000000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_biaschop(data)                              (0x02000000&((data)<<25))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_biaschop_src(data)                          ((0x02000000&(data))>>25)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_get_reg_biaschop(data)                          ((0x02000000&(data))>>25)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_adccksel_shift                              (22)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_adccksel_mask                               (0x01C00000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_adccksel(data)                              (0x01C00000&((data)<<22))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_adccksel_src(data)                          ((0x01C00000&(data))>>22)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_get_reg_adccksel(data)                          ((0x01C00000&(data))>>22)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_b_shift                                     (0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_b_mask                                      (0x003FFFFF)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_b(data)                                     (0x003FFFFF&((data)<<0))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_reg_b_src(data)                                 ((0x003FFFFF&(data))>>0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL1_get_reg_b(data)                                 ((0x003FFFFF&(data))>>0)


#define SC_WRAP_DVFS_TM_SENSOR_CTRL2                                                 0x9801D158
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_addr                                        "0xD801D158"
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg                                             0xD801D158
#define set_SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg)=data)
#define get_SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_inst_adr                                        "0x0056"
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_inst                                            0x0056
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_vbe_biassel_shift                           (23)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_vbe_biassel_mask                            (0x01800000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_vbe_biassel(data)                           (0x01800000&((data)<<23))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_vbe_biassel_src(data)                       ((0x01800000&(data))>>23)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_vbe_biassel(data)                       ((0x01800000&(data))>>23)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_sdm_test_en_shift                           (22)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_sdm_test_en_mask                            (0x00400000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_sdm_test_en(data)                           (0x00400000&((data)<<22))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_sdm_test_en_src(data)                       ((0x00400000&(data))>>22)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_sdm_test_en(data)                       ((0x00400000&(data))>>22)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_sdm_test_shift                              (21)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_sdm_test_mask                               (0x00200000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_sdm_test(data)                              (0x00200000&((data)<<21))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_sdm_test_src(data)                          ((0x00200000&(data))>>21)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_sdm_test(data)                          ((0x00200000&(data))>>21)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_rstb_shift                                  (20)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_rstb_mask                                   (0x00100000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_rstb(data)                                  (0x00100000&((data)<<20))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_rstb_src(data)                              ((0x00100000&(data))>>20)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_rstb(data)                              ((0x00100000&(data))>>20)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_resol_shift                                 (18)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_resol_mask                                  (0x000C0000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_resol(data)                                 (0x000C0000&((data)<<18))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_resol_src(data)                             ((0x000C0000&(data))>>18)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_resol(data)                             ((0x000C0000&(data))>>18)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_ppow_shift                                  (17)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_ppow_mask                                   (0x00020000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_ppow(data)                                  (0x00020000&((data)<<17))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_ppow_src(data)                              ((0x00020000&(data))>>17)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_ppow(data)                              ((0x00020000&(data))>>17)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_osccursel_shift                             (15)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_osccursel_mask                              (0x00018000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_osccursel(data)                             (0x00018000&((data)<<15))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_osccursel_src(data)                         ((0x00018000&(data))>>15)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_osccursel(data)                         ((0x00018000&(data))>>15)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_order3_shift                                (14)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_order3_mask                                 (0x00004000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_order3(data)                                (0x00004000&((data)<<14))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_order3_src(data)                            ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_order3(data)                            ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_opcursel_shift                              (12)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_opcursel_mask                               (0x00003000)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_opcursel(data)                              (0x00003000&((data)<<12))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_opcursel_src(data)                          ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_opcursel(data)                          ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_hold_en_shift                               (11)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_hold_en_mask                                (0x00000800)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_hold_en(data)                               (0x00000800&((data)<<11))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_hold_en_src(data)                           ((0x00000800&(data))>>11)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_hold_en(data)                           ((0x00000800&(data))>>11)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_hold_dly_shift                              (9)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_hold_dly_mask                               (0x00000600)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_hold_dly(data)                              (0x00000600&((data)<<9))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_hold_dly_src(data)                          ((0x00000600&(data))>>9)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_hold_dly(data)                          ((0x00000600&(data))>>9)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_filteredgesel_shift                         (8)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_filteredgesel_mask                          (0x00000100)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_filteredgesel(data)                         (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_filteredgesel_src(data)                     ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_filteredgesel(data)                     ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_dsr_shift                                   (5)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_dsr_mask                                    (0x000000E0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_dsr(data)                                   (0x000000E0&((data)<<5))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_dsr_src(data)                               ((0x000000E0&(data))>>5)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_dsr(data)                               ((0x000000E0&(data))>>5)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_cksourcesel_shift                           (4)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_cksourcesel_mask                            (0x00000010)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_cksourcesel(data)                           (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_cksourcesel_src(data)                       ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_cksourcesel(data)                       ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_chopfreqsel_shift                           (0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_chopfreqsel_mask                            (0x0000000F)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_chopfreqsel(data)                           (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_reg_chopfreqsel_src(data)                       ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL2_get_reg_chopfreqsel(data)                       ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_TM_SENSOR_CTRL3                                                 0x9801D15C
#define SC_WRAP_DVFS_TM_SENSOR_CTRL3_reg_addr                                        "0xD801D15C"
#define SC_WRAP_DVFS_TM_SENSOR_CTRL3_reg                                             0xD801D15C
#define set_SC_WRAP_DVFS_TM_SENSOR_CTRL3_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_CTRL3_reg)=data)
#define get_SC_WRAP_DVFS_TM_SENSOR_CTRL3_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_CTRL3_reg))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL3_inst_adr                                        "0x0057"
#define SC_WRAP_DVFS_TM_SENSOR_CTRL3_inst                                            0x0057
#define SC_WRAP_DVFS_TM_SENSOR_CTRL3_reg_offset_shift                                (0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL3_reg_offset_mask                                 (0x003FFFFF)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL3_reg_offset(data)                                (0x003FFFFF&((data)<<0))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL3_reg_offset_src(data)                            ((0x003FFFFF&(data))>>0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL3_get_reg_offset(data)                            ((0x003FFFFF&(data))>>0)


#define SC_WRAP_DVFS_TM_SENSOR_CTRL4                                                 0x9801D160
#define SC_WRAP_DVFS_TM_SENSOR_CTRL4_reg_addr                                        "0xD801D160"
#define SC_WRAP_DVFS_TM_SENSOR_CTRL4_reg                                             0xD801D160
#define set_SC_WRAP_DVFS_TM_SENSOR_CTRL4_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_CTRL4_reg)=data)
#define get_SC_WRAP_DVFS_TM_SENSOR_CTRL4_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_CTRL4_reg))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL4_inst_adr                                        "0x0058"
#define SC_WRAP_DVFS_TM_SENSOR_CTRL4_inst                                            0x0058
#define SC_WRAP_DVFS_TM_SENSOR_CTRL4_reg_r_shift                                     (0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL4_reg_r_mask                                      (0x00FFFFFF)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL4_reg_r(data)                                     (0x00FFFFFF&((data)<<0))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL4_reg_r_src(data)                                 ((0x00FFFFFF&(data))>>0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL4_get_reg_r(data)                                 ((0x00FFFFFF&(data))>>0)


#define SC_WRAP_DVFS_TM_SENSOR_CTRL5                                                 0x9801D164
#define SC_WRAP_DVFS_TM_SENSOR_CTRL5_reg_addr                                        "0xD801D164"
#define SC_WRAP_DVFS_TM_SENSOR_CTRL5_reg                                             0xD801D164
#define set_SC_WRAP_DVFS_TM_SENSOR_CTRL5_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_CTRL5_reg)=data)
#define get_SC_WRAP_DVFS_TM_SENSOR_CTRL5_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_CTRL5_reg))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL5_inst_adr                                        "0x0059"
#define SC_WRAP_DVFS_TM_SENSOR_CTRL5_inst                                            0x0059
#define SC_WRAP_DVFS_TM_SENSOR_CTRL5_reg_s_shift                                     (0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL5_reg_s_mask                                      (0x007FFFFF)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL5_reg_s(data)                                     (0x007FFFFF&((data)<<0))
#define SC_WRAP_DVFS_TM_SENSOR_CTRL5_reg_s_src(data)                                 ((0x007FFFFF&(data))>>0)
#define SC_WRAP_DVFS_TM_SENSOR_CTRL5_get_reg_s(data)                                 ((0x007FFFFF&(data))>>0)


#define SC_WRAP_DVFS_TM_SENSOR_STATUS1                                               0x9801D168
#define SC_WRAP_DVFS_TM_SENSOR_STATUS1_reg_addr                                      "0xD801D168"
#define SC_WRAP_DVFS_TM_SENSOR_STATUS1_reg                                           0xD801D168
#define set_SC_WRAP_DVFS_TM_SENSOR_STATUS1_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_STATUS1_reg)=data)
#define get_SC_WRAP_DVFS_TM_SENSOR_STATUS1_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_STATUS1_reg))
#define SC_WRAP_DVFS_TM_SENSOR_STATUS1_inst_adr                                      "0x005A"
#define SC_WRAP_DVFS_TM_SENSOR_STATUS1_inst                                          0x005A
#define SC_WRAP_DVFS_TM_SENSOR_STATUS1_ct_out_shift                                  (0)
#define SC_WRAP_DVFS_TM_SENSOR_STATUS1_ct_out_mask                                   (0x0007FFFF)
#define SC_WRAP_DVFS_TM_SENSOR_STATUS1_ct_out(data)                                  (0x0007FFFF&((data)<<0))
#define SC_WRAP_DVFS_TM_SENSOR_STATUS1_ct_out_src(data)                              ((0x0007FFFF&(data))>>0)
#define SC_WRAP_DVFS_TM_SENSOR_STATUS1_get_ct_out(data)                              ((0x0007FFFF&(data))>>0)


#define SC_WRAP_DVFS_TM_SENSOR_STATUS2                                               0x9801D16C
#define SC_WRAP_DVFS_TM_SENSOR_STATUS2_reg_addr                                      "0xD801D16C"
#define SC_WRAP_DVFS_TM_SENSOR_STATUS2_reg                                           0xD801D16C
#define set_SC_WRAP_DVFS_TM_SENSOR_STATUS2_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_STATUS2_reg)=data)
#define get_SC_WRAP_DVFS_TM_SENSOR_STATUS2_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_TM_SENSOR_STATUS2_reg))
#define SC_WRAP_DVFS_TM_SENSOR_STATUS2_inst_adr                                      "0x005B"
#define SC_WRAP_DVFS_TM_SENSOR_STATUS2_inst                                          0x005B
#define SC_WRAP_DVFS_TM_SENSOR_STATUS2_u_out_shift                                   (0)
#define SC_WRAP_DVFS_TM_SENSOR_STATUS2_u_out_mask                                    (0x003FFFFF)
#define SC_WRAP_DVFS_TM_SENSOR_STATUS2_u_out(data)                                   (0x003FFFFF&((data)<<0))
#define SC_WRAP_DVFS_TM_SENSOR_STATUS2_u_out_src(data)                               ((0x003FFFFF&(data))>>0)
#define SC_WRAP_DVFS_TM_SENSOR_STATUS2_get_u_out(data)                               ((0x003FFFFF&(data))>>0)


#define SC_WRAP_DVFS_MBIST_RESET                                                     0x9801D300
#define SC_WRAP_DVFS_MBIST_RESET_reg_addr                                            "0xD801D300"
#define SC_WRAP_DVFS_MBIST_RESET_reg                                                 0xD801D300
#define set_SC_WRAP_DVFS_MBIST_RESET_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_MBIST_RESET_reg)=data)
#define get_SC_WRAP_DVFS_MBIST_RESET_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_MBIST_RESET_reg))
#define SC_WRAP_DVFS_MBIST_RESET_inst_adr                                            "0x00C0"
#define SC_WRAP_DVFS_MBIST_RESET_inst                                                0x00C0
#define SC_WRAP_DVFS_MBIST_RESET_sc_bist_rstn_shift                                  (4)
#define SC_WRAP_DVFS_MBIST_RESET_sc_bist_rstn_mask                                   (0x00000010)
#define SC_WRAP_DVFS_MBIST_RESET_sc_bist_rstn(data)                                  (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_MBIST_RESET_sc_bist_rstn_src(data)                              ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_MBIST_RESET_get_sc_bist_rstn(data)                              ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_MBIST_RESET_sc_bisr_pwr_rstn_shift                              (1)
#define SC_WRAP_DVFS_MBIST_RESET_sc_bisr_pwr_rstn_mask                               (0x00000002)
#define SC_WRAP_DVFS_MBIST_RESET_sc_bisr_pwr_rstn(data)                              (0x00000002&((data)<<1))
#define SC_WRAP_DVFS_MBIST_RESET_sc_bisr_pwr_rstn_src(data)                          ((0x00000002&(data))>>1)
#define SC_WRAP_DVFS_MBIST_RESET_get_sc_bisr_pwr_rstn(data)                          ((0x00000002&(data))>>1)
#define SC_WRAP_DVFS_MBIST_RESET_sc_bisr_rstn_shift                                  (0)
#define SC_WRAP_DVFS_MBIST_RESET_sc_bisr_rstn_mask                                   (0x00000001)
#define SC_WRAP_DVFS_MBIST_RESET_sc_bisr_rstn(data)                                  (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_MBIST_RESET_sc_bisr_rstn_src(data)                              ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_MBIST_RESET_get_sc_bisr_rstn(data)                              ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_MBIST_MODE                                                      0x9801D304
#define SC_WRAP_DVFS_MBIST_MODE_reg_addr                                             "0xD801D304"
#define SC_WRAP_DVFS_MBIST_MODE_reg                                                  0xD801D304
#define set_SC_WRAP_DVFS_MBIST_MODE_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_MBIST_MODE_reg)=data)
#define get_SC_WRAP_DVFS_MBIST_MODE_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_MBIST_MODE_reg))
#define SC_WRAP_DVFS_MBIST_MODE_inst_adr                                             "0x00C1"
#define SC_WRAP_DVFS_MBIST_MODE_inst                                                 0x00C1
#define SC_WRAP_DVFS_MBIST_MODE_sc_mbist_share_bus_en_shift                          (17)
#define SC_WRAP_DVFS_MBIST_MODE_sc_mbist_share_bus_en_mask                           (0x00020000)
#define SC_WRAP_DVFS_MBIST_MODE_sc_mbist_share_bus_en(data)                          (0x00020000&((data)<<17))
#define SC_WRAP_DVFS_MBIST_MODE_sc_mbist_share_bus_en_src(data)                      ((0x00020000&(data))>>17)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_mbist_share_bus_en(data)                      ((0x00020000&(data))>>17)
#define SC_WRAP_DVFS_MBIST_MODE_sc_mbist0_all_mode_shift                             (16)
#define SC_WRAP_DVFS_MBIST_MODE_sc_mbist0_all_mode_mask                              (0x00010000)
#define SC_WRAP_DVFS_MBIST_MODE_sc_mbist0_all_mode(data)                             (0x00010000&((data)<<16))
#define SC_WRAP_DVFS_MBIST_MODE_sc_mbist0_all_mode_src(data)                         ((0x00010000&(data))>>16)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_mbist0_all_mode(data)                         ((0x00010000&(data))>>16)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_ddata_shift                            (15)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_ddata_mask                             (0x00008000)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_ddata(data)                            (0x00008000&((data)<<15))
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_ddata_src(data)                        ((0x00008000&(data))>>15)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_bist_mode0_ddata(data)                        ((0x00008000&(data))>>15)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_dtag_shift                             (14)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_dtag_mask                              (0x00004000)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_dtag(data)                             (0x00004000&((data)<<14))
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_dtag_src(data)                         ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_bist_mode0_dtag(data)                         ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_ddirty_shift                           (13)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_ddirty_mask                            (0x00002000)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_ddirty(data)                           (0x00002000&((data)<<13))
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_ddirty_src(data)                       ((0x00002000&(data))>>13)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_bist_mode0_ddirty(data)                       ((0x00002000&(data))>>13)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_idata_shift                            (12)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_idata_mask                             (0x00001000)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_idata(data)                            (0x00001000&((data)<<12))
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_idata_src(data)                        ((0x00001000&(data))>>12)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_bist_mode0_idata(data)                        ((0x00001000&(data))>>12)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_itag_shift                             (11)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_itag_mask                              (0x00000800)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_itag(data)                             (0x00000800&((data)<<11))
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_itag_src(data)                         ((0x00000800&(data))>>11)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_bist_mode0_itag(data)                         ((0x00000800&(data))>>11)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_btac0_shift                            (10)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_btac0_mask                             (0x00000400)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_btac0(data)                            (0x00000400&((data)<<10))
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_btac0_src(data)                        ((0x00000400&(data))>>10)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_bist_mode0_btac0(data)                        ((0x00000400&(data))>>10)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_btac1_shift                            (9)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_btac1_mask                             (0x00000200)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_btac1(data)                            (0x00000200&((data)<<9))
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_btac1_src(data)                        ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_bist_mode0_btac1(data)                        ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_tlb_shift                              (8)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_tlb_mask                               (0x00000100)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_tlb(data)                              (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_tlb_src(data)                          ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_bist_mode0_tlb(data)                          ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_scu_shift                              (6)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_scu_mask                               (0x00000040)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_scu(data)                              (0x00000040&((data)<<6))
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_scu_src(data)                          ((0x00000040&(data))>>6)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_bist_mode0_scu(data)                          ((0x00000040&(data))>>6)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_l2_tag_shift                           (5)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_l2_tag_mask                            (0x00000020)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_l2_tag(data)                           (0x00000020&((data)<<5))
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_l2_tag_src(data)                       ((0x00000020&(data))>>5)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_bist_mode0_l2_tag(data)                       ((0x00000020&(data))>>5)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_l2_victim_shift                        (4)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_l2_victim_mask                         (0x00000010)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_l2_victim(data)                        (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_l2_victim_src(data)                    ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_bist_mode0_l2_victim(data)                    ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_MBIST_MODE_sc_drf_bisr_mode_shift                               (3)
#define SC_WRAP_DVFS_MBIST_MODE_sc_drf_bisr_mode_mask                                (0x00000008)
#define SC_WRAP_DVFS_MBIST_MODE_sc_drf_bisr_mode(data)                               (0x00000008&((data)<<3))
#define SC_WRAP_DVFS_MBIST_MODE_sc_drf_bisr_mode_src(data)                           ((0x00000008&(data))>>3)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_drf_bisr_mode(data)                           ((0x00000008&(data))>>3)
#define SC_WRAP_DVFS_MBIST_MODE_sc_drf_bist_mode0_shift                              (2)
#define SC_WRAP_DVFS_MBIST_MODE_sc_drf_bist_mode0_mask                               (0x00000004)
#define SC_WRAP_DVFS_MBIST_MODE_sc_drf_bist_mode0(data)                              (0x00000004&((data)<<2))
#define SC_WRAP_DVFS_MBIST_MODE_sc_drf_bist_mode0_src(data)                          ((0x00000004&(data))>>2)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_drf_bist_mode0(data)                          ((0x00000004&(data))>>2)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_all_shift                              (0)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_all_mask                               (0x00000001)
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_all(data)                              (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_MBIST_MODE_sc_bist_mode0_all_src(data)                          ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_MBIST_MODE_get_sc_bist_mode0_all(data)                          ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_MBIST_DONE                                                      0x9801D308
#define SC_WRAP_DVFS_MBIST_DONE_reg_addr                                             "0xD801D308"
#define SC_WRAP_DVFS_MBIST_DONE_reg                                                  0xD801D308
#define set_SC_WRAP_DVFS_MBIST_DONE_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_MBIST_DONE_reg)=data)
#define get_SC_WRAP_DVFS_MBIST_DONE_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_MBIST_DONE_reg))
#define SC_WRAP_DVFS_MBIST_DONE_inst_adr                                             "0x00C2"
#define SC_WRAP_DVFS_MBIST_DONE_inst                                                 0x00C2
#define SC_WRAP_DVFS_MBIST_DONE_sc_mbistack0_dbg_shift                               (17)
#define SC_WRAP_DVFS_MBIST_DONE_sc_mbistack0_dbg_mask                                (0x00020000)
#define SC_WRAP_DVFS_MBIST_DONE_sc_mbistack0_dbg(data)                               (0x00020000&((data)<<17))
#define SC_WRAP_DVFS_MBIST_DONE_sc_mbistack0_dbg_src(data)                           ((0x00020000&(data))>>17)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_mbistack0_dbg(data)                           ((0x00020000&(data))>>17)
#define SC_WRAP_DVFS_MBIST_DONE_sc_mbistack_all_shift                                (16)
#define SC_WRAP_DVFS_MBIST_DONE_sc_mbistack_all_mask                                 (0x00010000)
#define SC_WRAP_DVFS_MBIST_DONE_sc_mbistack_all(data)                                (0x00010000&((data)<<16))
#define SC_WRAP_DVFS_MBIST_DONE_sc_mbistack_all_src(data)                            ((0x00010000&(data))>>16)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_mbistack_all(data)                            ((0x00010000&(data))>>16)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_ddata_shift                            (15)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_ddata_mask                             (0x00008000)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_ddata(data)                            (0x00008000&((data)<<15))
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_ddata_src(data)                        ((0x00008000&(data))>>15)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_bist_done0_ddata(data)                        ((0x00008000&(data))>>15)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_dtag_shift                             (14)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_dtag_mask                              (0x00004000)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_dtag(data)                             (0x00004000&((data)<<14))
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_dtag_src(data)                         ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_bist_done0_dtag(data)                         ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_ddirty_shift                           (13)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_ddirty_mask                            (0x00002000)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_ddirty(data)                           (0x00002000&((data)<<13))
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_ddirty_src(data)                       ((0x00002000&(data))>>13)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_bist_done0_ddirty(data)                       ((0x00002000&(data))>>13)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_idata_shift                            (12)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_idata_mask                             (0x00001000)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_idata(data)                            (0x00001000&((data)<<12))
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_idata_src(data)                        ((0x00001000&(data))>>12)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_bist_done0_idata(data)                        ((0x00001000&(data))>>12)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_itag_shift                             (11)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_itag_mask                              (0x00000800)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_itag(data)                             (0x00000800&((data)<<11))
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_itag_src(data)                         ((0x00000800&(data))>>11)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_bist_done0_itag(data)                         ((0x00000800&(data))>>11)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_btac0_shift                            (10)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_btac0_mask                             (0x00000400)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_btac0(data)                            (0x00000400&((data)<<10))
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_btac0_src(data)                        ((0x00000400&(data))>>10)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_bist_done0_btac0(data)                        ((0x00000400&(data))>>10)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_btac1_shift                            (9)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_btac1_mask                             (0x00000200)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_btac1(data)                            (0x00000200&((data)<<9))
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_btac1_src(data)                        ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_bist_done0_btac1(data)                        ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_tlb_shift                              (8)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_tlb_mask                               (0x00000100)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_tlb(data)                              (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_tlb_src(data)                          ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_bist_done0_tlb(data)                          ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_scu_shift                              (6)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_scu_mask                               (0x00000040)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_scu(data)                              (0x00000040&((data)<<6))
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_scu_src(data)                          ((0x00000040&(data))>>6)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_bist_done0_scu(data)                          ((0x00000040&(data))>>6)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_l2_tag_shift                           (5)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_l2_tag_mask                            (0x00000020)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_l2_tag(data)                           (0x00000020&((data)<<5))
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_l2_tag_src(data)                       ((0x00000020&(data))>>5)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_bist_done0_l2_tag(data)                       ((0x00000020&(data))>>5)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_l2_victim_shift                        (4)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_l2_victim_mask                         (0x00000010)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_l2_victim(data)                        (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_MBIST_DONE_sc_bist_done0_l2_victim_src(data)                    ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_bist_done0_l2_victim(data)                    ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_MBIST_DONE_sc_drf_bisr_done_shift                               (3)
#define SC_WRAP_DVFS_MBIST_DONE_sc_drf_bisr_done_mask                                (0x00000008)
#define SC_WRAP_DVFS_MBIST_DONE_sc_drf_bisr_done(data)                               (0x00000008&((data)<<3))
#define SC_WRAP_DVFS_MBIST_DONE_sc_drf_bisr_done_src(data)                           ((0x00000008&(data))>>3)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_drf_bisr_done(data)                           ((0x00000008&(data))>>3)
#define SC_WRAP_DVFS_MBIST_DONE_sc_drf_bist_done0_shift                              (2)
#define SC_WRAP_DVFS_MBIST_DONE_sc_drf_bist_done0_mask                               (0x00000004)
#define SC_WRAP_DVFS_MBIST_DONE_sc_drf_bist_done0(data)                              (0x00000004&((data)<<2))
#define SC_WRAP_DVFS_MBIST_DONE_sc_drf_bist_done0_src(data)                          ((0x00000004&(data))>>2)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_drf_bist_done0(data)                          ((0x00000004&(data))>>2)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bisr_done_shift                                   (1)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bisr_done_mask                                    (0x00000002)
#define SC_WRAP_DVFS_MBIST_DONE_sc_bisr_done(data)                                   (0x00000002&((data)<<1))
#define SC_WRAP_DVFS_MBIST_DONE_sc_bisr_done_src(data)                               ((0x00000002&(data))>>1)
#define SC_WRAP_DVFS_MBIST_DONE_get_sc_bisr_done(data)                               ((0x00000002&(data))>>1)


#define SC_WRAP_DVFS_MBIST_FAIL                                                      0x9801D30C
#define SC_WRAP_DVFS_MBIST_FAIL_reg_addr                                             "0xD801D30C"
#define SC_WRAP_DVFS_MBIST_FAIL_reg                                                  0xD801D30C
#define set_SC_WRAP_DVFS_MBIST_FAIL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_MBIST_FAIL_reg)=data)
#define get_SC_WRAP_DVFS_MBIST_FAIL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_MBIST_FAIL_reg))
#define SC_WRAP_DVFS_MBIST_FAIL_inst_adr                                             "0x00C3"
#define SC_WRAP_DVFS_MBIST_FAIL_inst                                                 0x00C3
#define SC_WRAP_DVFS_MBIST_FAIL_sc_drf_bisr_fail_shift                               (13)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_drf_bisr_fail_mask                                (0x00002000)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_drf_bisr_fail(data)                               (0x00002000&((data)<<13))
#define SC_WRAP_DVFS_MBIST_FAIL_sc_drf_bisr_fail_src(data)                           ((0x00002000&(data))>>13)
#define SC_WRAP_DVFS_MBIST_FAIL_get_sc_drf_bisr_fail(data)                           ((0x00002000&(data))>>13)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_bisr_fail_shift                                   (12)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_bisr_fail_mask                                    (0x00001000)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_bisr_fail(data)                                   (0x00001000&((data)<<12))
#define SC_WRAP_DVFS_MBIST_FAIL_sc_bisr_fail_src(data)                               ((0x00001000&(data))>>12)
#define SC_WRAP_DVFS_MBIST_FAIL_get_sc_bisr_fail(data)                               ((0x00001000&(data))>>12)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_drf_bist_fail0_l2_shift                           (9)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_drf_bist_fail0_l2_mask                            (0x00000200)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_drf_bist_fail0_l2(data)                           (0x00000200&((data)<<9))
#define SC_WRAP_DVFS_MBIST_FAIL_sc_drf_bist_fail0_l2_src(data)                       ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_MBIST_FAIL_get_sc_drf_bist_fail0_l2(data)                       ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_bist_fail0_l2_shift                               (8)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_bist_fail0_l2_mask                                (0x00000100)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_bist_fail0_l2(data)                               (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_MBIST_FAIL_sc_bist_fail0_l2_src(data)                           ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_MBIST_FAIL_get_sc_bist_fail0_l2(data)                           ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu3_drf_bist_fail0_shift                         (7)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu3_drf_bist_fail0_mask                          (0x00000080)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu3_drf_bist_fail0(data)                         (0x00000080&((data)<<7))
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu3_drf_bist_fail0_src(data)                     ((0x00000080&(data))>>7)
#define SC_WRAP_DVFS_MBIST_FAIL_get_sc_cpu3_drf_bist_fail0(data)                     ((0x00000080&(data))>>7)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu2_drf_bist_fail0_shift                         (6)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu2_drf_bist_fail0_mask                          (0x00000040)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu2_drf_bist_fail0(data)                         (0x00000040&((data)<<6))
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu2_drf_bist_fail0_src(data)                     ((0x00000040&(data))>>6)
#define SC_WRAP_DVFS_MBIST_FAIL_get_sc_cpu2_drf_bist_fail0(data)                     ((0x00000040&(data))>>6)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu1_drf_bist_fail0_shift                         (5)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu1_drf_bist_fail0_mask                          (0x00000020)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu1_drf_bist_fail0(data)                         (0x00000020&((data)<<5))
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu1_drf_bist_fail0_src(data)                     ((0x00000020&(data))>>5)
#define SC_WRAP_DVFS_MBIST_FAIL_get_sc_cpu1_drf_bist_fail0(data)                     ((0x00000020&(data))>>5)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu0_drf_bist_fail0_shift                         (4)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu0_drf_bist_fail0_mask                          (0x00000010)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu0_drf_bist_fail0(data)                         (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu0_drf_bist_fail0_src(data)                     ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_MBIST_FAIL_get_sc_cpu0_drf_bist_fail0(data)                     ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu3_bist_fail0_shift                             (3)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu3_bist_fail0_mask                              (0x00000008)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu3_bist_fail0(data)                             (0x00000008&((data)<<3))
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu3_bist_fail0_src(data)                         ((0x00000008&(data))>>3)
#define SC_WRAP_DVFS_MBIST_FAIL_get_sc_cpu3_bist_fail0(data)                         ((0x00000008&(data))>>3)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu2_bist_fail0_shift                             (2)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu2_bist_fail0_mask                              (0x00000004)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu2_bist_fail0(data)                             (0x00000004&((data)<<2))
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu2_bist_fail0_src(data)                         ((0x00000004&(data))>>2)
#define SC_WRAP_DVFS_MBIST_FAIL_get_sc_cpu2_bist_fail0(data)                         ((0x00000004&(data))>>2)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu1_bist_fail0_shift                             (1)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu1_bist_fail0_mask                              (0x00000002)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu1_bist_fail0(data)                             (0x00000002&((data)<<1))
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu1_bist_fail0_src(data)                         ((0x00000002&(data))>>1)
#define SC_WRAP_DVFS_MBIST_FAIL_get_sc_cpu1_bist_fail0(data)                         ((0x00000002&(data))>>1)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu0_bist_fail0_shift                             (0)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu0_bist_fail0_mask                              (0x00000001)
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu0_bist_fail0(data)                             (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_MBIST_FAIL_sc_cpu0_bist_fail0_src(data)                         ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_MBIST_FAIL_get_sc_cpu0_bist_fail0(data)                         ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_CPU0_BIST_FAIL                                                  0x9801D310
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_reg_addr                                         "0xD801D310"
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_reg                                              0xD801D310
#define set_SC_WRAP_DVFS_CPU0_BIST_FAIL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU0_BIST_FAIL_reg)=data)
#define get_SC_WRAP_DVFS_CPU0_BIST_FAIL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU0_BIST_FAIL_reg))
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_inst_adr                                         "0x00C4"
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_inst                                             0x00C4
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_ddata_shift                   (20)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_ddata_mask                    (0x0FF00000)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_ddata(data)                   (0x0FF00000&((data)<<20))
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_ddata_src(data)               ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_get_sc_cpu0_bist_fail0_ddata(data)               ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_dtag_shift                    (16)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_dtag_mask                     (0x000F0000)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_dtag(data)                    (0x000F0000&((data)<<16))
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_dtag_src(data)                ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_get_sc_cpu0_bist_fail0_dtag(data)                ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_ddirty_shift                  (14)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_ddirty_mask                   (0x00004000)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_ddirty(data)                  (0x00004000&((data)<<14))
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_ddirty_src(data)              ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_get_sc_cpu0_bist_fail0_ddirty(data)              ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_idata_shift                   (12)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_idata_mask                    (0x00003000)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_idata(data)                   (0x00003000&((data)<<12))
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_idata_src(data)               ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_get_sc_cpu0_bist_fail0_idata(data)               ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_itag_shift                    (10)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_itag_mask                     (0x00000C00)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_itag(data)                    (0x00000C00&((data)<<10))
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_itag_src(data)                ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_get_sc_cpu0_bist_fail0_itag(data)                ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_btac0_shift                   (9)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_btac0_mask                    (0x00000200)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_btac0(data)                   (0x00000200&((data)<<9))
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_btac0_src(data)               ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_get_sc_cpu0_bist_fail0_btac0(data)               ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_btac1_shift                   (8)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_btac1_mask                    (0x00000100)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_btac1(data)                   (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_btac1_src(data)               ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_get_sc_cpu0_bist_fail0_btac1(data)               ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_tlb_shift                     (4)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_tlb_mask                      (0x000000F0)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_tlb(data)                     (0x000000F0&((data)<<4))
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_tlb_src(data)                 ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_get_sc_cpu0_bist_fail0_tlb(data)                 ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_scu_shift                     (0)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_scu_mask                      (0x0000000F)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_scu(data)                     (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_sc_cpu0_bist_fail0_scu_src(data)                 ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_CPU0_BIST_FAIL_get_sc_cpu0_bist_fail0_scu(data)                 ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_CPU1_BIST_FAIL                                                  0x9801D314
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_reg_addr                                         "0xD801D314"
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_reg                                              0xD801D314
#define set_SC_WRAP_DVFS_CPU1_BIST_FAIL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU1_BIST_FAIL_reg)=data)
#define get_SC_WRAP_DVFS_CPU1_BIST_FAIL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU1_BIST_FAIL_reg))
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_inst_adr                                         "0x00C5"
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_inst                                             0x00C5
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_ddata_shift                   (20)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_ddata_mask                    (0x0FF00000)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_ddata(data)                   (0x0FF00000&((data)<<20))
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_ddata_src(data)               ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_get_sc_cpu1_bist_fail0_ddata(data)               ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_dtag_shift                    (16)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_dtag_mask                     (0x000F0000)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_dtag(data)                    (0x000F0000&((data)<<16))
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_dtag_src(data)                ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_get_sc_cpu1_bist_fail0_dtag(data)                ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_ddirty_shift                  (14)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_ddirty_mask                   (0x00004000)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_ddirty(data)                  (0x00004000&((data)<<14))
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_ddirty_src(data)              ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_get_sc_cpu1_bist_fail0_ddirty(data)              ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_idata_shift                   (12)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_idata_mask                    (0x00003000)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_idata(data)                   (0x00003000&((data)<<12))
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_idata_src(data)               ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_get_sc_cpu1_bist_fail0_idata(data)               ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_itag_shift                    (10)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_itag_mask                     (0x00000C00)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_itag(data)                    (0x00000C00&((data)<<10))
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_itag_src(data)                ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_get_sc_cpu1_bist_fail0_itag(data)                ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_btac0_shift                   (9)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_btac0_mask                    (0x00000200)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_btac0(data)                   (0x00000200&((data)<<9))
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_btac0_src(data)               ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_get_sc_cpu1_bist_fail0_btac0(data)               ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_btac1_shift                   (8)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_btac1_mask                    (0x00000100)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_btac1(data)                   (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_btac1_src(data)               ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_get_sc_cpu1_bist_fail0_btac1(data)               ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_tlb_shift                     (4)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_tlb_mask                      (0x000000F0)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_tlb(data)                     (0x000000F0&((data)<<4))
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_tlb_src(data)                 ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_get_sc_cpu1_bist_fail0_tlb(data)                 ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_scu_shift                     (0)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_scu_mask                      (0x0000000F)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_scu(data)                     (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_sc_cpu1_bist_fail0_scu_src(data)                 ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_CPU1_BIST_FAIL_get_sc_cpu1_bist_fail0_scu(data)                 ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_CPU2_BIST_FAIL                                                  0x9801D318
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_reg_addr                                         "0xD801D318"
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_reg                                              0xD801D318
#define set_SC_WRAP_DVFS_CPU2_BIST_FAIL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU2_BIST_FAIL_reg)=data)
#define get_SC_WRAP_DVFS_CPU2_BIST_FAIL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU2_BIST_FAIL_reg))
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_inst_adr                                         "0x00C6"
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_inst                                             0x00C6
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_ddata_shift                   (20)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_ddata_mask                    (0x0FF00000)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_ddata(data)                   (0x0FF00000&((data)<<20))
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_ddata_src(data)               ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_get_sc_cpu2_bist_fail0_ddata(data)               ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_dtag_shift                    (16)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_dtag_mask                     (0x000F0000)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_dtag(data)                    (0x000F0000&((data)<<16))
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_dtag_src(data)                ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_get_sc_cpu2_bist_fail0_dtag(data)                ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_ddirty_shift                  (14)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_ddirty_mask                   (0x00004000)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_ddirty(data)                  (0x00004000&((data)<<14))
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_ddirty_src(data)              ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_get_sc_cpu2_bist_fail0_ddirty(data)              ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_idata_shift                   (12)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_idata_mask                    (0x00003000)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_idata(data)                   (0x00003000&((data)<<12))
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_idata_src(data)               ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_get_sc_cpu2_bist_fail0_idata(data)               ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_itag_shift                    (10)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_itag_mask                     (0x00000C00)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_itag(data)                    (0x00000C00&((data)<<10))
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_itag_src(data)                ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_get_sc_cpu2_bist_fail0_itag(data)                ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_btac0_shift                   (9)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_btac0_mask                    (0x00000200)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_btac0(data)                   (0x00000200&((data)<<9))
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_btac0_src(data)               ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_get_sc_cpu2_bist_fail0_btac0(data)               ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_btac1_shift                   (8)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_btac1_mask                    (0x00000100)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_btac1(data)                   (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_btac1_src(data)               ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_get_sc_cpu2_bist_fail0_btac1(data)               ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_tlb_shift                     (4)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_tlb_mask                      (0x000000F0)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_tlb(data)                     (0x000000F0&((data)<<4))
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_tlb_src(data)                 ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_get_sc_cpu2_bist_fail0_tlb(data)                 ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_scu_shift                     (0)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_scu_mask                      (0x0000000F)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_scu(data)                     (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_sc_cpu2_bist_fail0_scu_src(data)                 ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_CPU2_BIST_FAIL_get_sc_cpu2_bist_fail0_scu(data)                 ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_CPU3_BIST_FAIL                                                  0x9801D31C
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_reg_addr                                         "0xD801D31C"
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_reg                                              0xD801D31C
#define set_SC_WRAP_DVFS_CPU3_BIST_FAIL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU3_BIST_FAIL_reg)=data)
#define get_SC_WRAP_DVFS_CPU3_BIST_FAIL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU3_BIST_FAIL_reg))
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_inst_adr                                         "0x00C7"
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_inst                                             0x00C7
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_ddata_shift                   (20)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_ddata_mask                    (0x0FF00000)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_ddata(data)                   (0x0FF00000&((data)<<20))
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_ddata_src(data)               ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_get_sc_cpu3_bist_fail0_ddata(data)               ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_dtag_shift                    (16)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_dtag_mask                     (0x000F0000)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_dtag(data)                    (0x000F0000&((data)<<16))
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_dtag_src(data)                ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_get_sc_cpu3_bist_fail0_dtag(data)                ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_ddirty_shift                  (14)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_ddirty_mask                   (0x00004000)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_ddirty(data)                  (0x00004000&((data)<<14))
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_ddirty_src(data)              ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_get_sc_cpu3_bist_fail0_ddirty(data)              ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_idata_shift                   (12)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_idata_mask                    (0x00003000)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_idata(data)                   (0x00003000&((data)<<12))
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_idata_src(data)               ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_get_sc_cpu3_bist_fail0_idata(data)               ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_itag_shift                    (10)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_itag_mask                     (0x00000C00)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_itag(data)                    (0x00000C00&((data)<<10))
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_itag_src(data)                ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_get_sc_cpu3_bist_fail0_itag(data)                ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_btac0_shift                   (9)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_btac0_mask                    (0x00000200)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_btac0(data)                   (0x00000200&((data)<<9))
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_btac0_src(data)               ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_get_sc_cpu3_bist_fail0_btac0(data)               ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_btac1_shift                   (8)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_btac1_mask                    (0x00000100)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_btac1(data)                   (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_btac1_src(data)               ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_get_sc_cpu3_bist_fail0_btac1(data)               ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_tlb_shift                     (4)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_tlb_mask                      (0x000000F0)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_tlb(data)                     (0x000000F0&((data)<<4))
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_tlb_src(data)                 ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_get_sc_cpu3_bist_fail0_tlb(data)                 ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_scu_shift                     (0)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_scu_mask                      (0x0000000F)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_scu(data)                     (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_sc_cpu3_bist_fail0_scu_src(data)                 ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_CPU3_BIST_FAIL_get_sc_cpu3_bist_fail0_scu(data)                 ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL                                              0x9801D320
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_reg_addr                                     "0xD801D320"
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_reg                                          0xD801D320
#define set_SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_reg)=data)
#define get_SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_reg))
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_inst_adr                                     "0x00C8"
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_inst                                         0x00C8
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_ddata_shift           (20)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_ddata_mask            (0x0FF00000)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_ddata(data)           (0x0FF00000&((data)<<20))
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_ddata_src(data)       ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_get_sc_cpu0_drf_bist_fail0_ddata(data)       ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_dtag_shift            (16)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_dtag_mask             (0x000F0000)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_dtag(data)            (0x000F0000&((data)<<16))
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_dtag_src(data)        ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_get_sc_cpu0_drf_bist_fail0_dtag(data)        ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_ddirty_shift          (14)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_ddirty_mask           (0x00004000)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_ddirty(data)          (0x00004000&((data)<<14))
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_ddirty_src(data)      ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_get_sc_cpu0_drf_bist_fail0_ddirty(data)      ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_idata_shift           (12)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_idata_mask            (0x00003000)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_idata(data)           (0x00003000&((data)<<12))
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_idata_src(data)       ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_get_sc_cpu0_drf_bist_fail0_idata(data)       ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_itag_shift            (10)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_itag_mask             (0x00000C00)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_itag(data)            (0x00000C00&((data)<<10))
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_itag_src(data)        ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_get_sc_cpu0_drf_bist_fail0_itag(data)        ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_btac0_shift           (9)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_btac0_mask            (0x00000200)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_btac0(data)           (0x00000200&((data)<<9))
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_btac0_src(data)       ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_get_sc_cpu0_drf_bist_fail0_btac0(data)       ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_btac1_shift           (8)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_btac1_mask            (0x00000100)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_btac1(data)           (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_btac1_src(data)       ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_get_sc_cpu0_drf_bist_fail0_btac1(data)       ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_tlb_shift             (4)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_tlb_mask              (0x000000F0)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_tlb(data)             (0x000000F0&((data)<<4))
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_tlb_src(data)         ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_get_sc_cpu0_drf_bist_fail0_tlb(data)         ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_scu_shift             (0)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_scu_mask              (0x0000000F)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_scu(data)             (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_sc_cpu0_drf_bist_fail0_scu_src(data)         ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_CPU0_DRF_BIST_FAIL_get_sc_cpu0_drf_bist_fail0_scu(data)         ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL                                              0x9801D324
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_reg_addr                                     "0xD801D324"
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_reg                                          0xD801D324
#define set_SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_reg)=data)
#define get_SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_reg))
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_inst_adr                                     "0x00C9"
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_inst                                         0x00C9
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_ddata_shift           (20)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_ddata_mask            (0x0FF00000)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_ddata(data)           (0x0FF00000&((data)<<20))
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_ddata_src(data)       ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_get_sc_cpu1_drf_bist_fail0_ddata(data)       ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_dtag_shift            (16)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_dtag_mask             (0x000F0000)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_dtag(data)            (0x000F0000&((data)<<16))
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_dtag_src(data)        ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_get_sc_cpu1_drf_bist_fail0_dtag(data)        ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_ddirty_shift          (14)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_ddirty_mask           (0x00004000)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_ddirty(data)          (0x00004000&((data)<<14))
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_ddirty_src(data)      ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_get_sc_cpu1_drf_bist_fail0_ddirty(data)      ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_idata_shift           (12)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_idata_mask            (0x00003000)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_idata(data)           (0x00003000&((data)<<12))
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_idata_src(data)       ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_get_sc_cpu1_drf_bist_fail0_idata(data)       ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_itag_shift            (10)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_itag_mask             (0x00000C00)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_itag(data)            (0x00000C00&((data)<<10))
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_itag_src(data)        ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_get_sc_cpu1_drf_bist_fail0_itag(data)        ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_btac0_shift           (9)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_btac0_mask            (0x00000200)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_btac0(data)           (0x00000200&((data)<<9))
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_btac0_src(data)       ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_get_sc_cpu1_drf_bist_fail0_btac0(data)       ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_btac1_shift           (8)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_btac1_mask            (0x00000100)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_btac1(data)           (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_btac1_src(data)       ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_get_sc_cpu1_drf_bist_fail0_btac1(data)       ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_tlb_shift             (4)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_tlb_mask              (0x000000F0)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_tlb(data)             (0x000000F0&((data)<<4))
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_tlb_src(data)         ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_get_sc_cpu1_drf_bist_fail0_tlb(data)         ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_scu_shift             (0)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_scu_mask              (0x0000000F)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_scu(data)             (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_sc_cpu1_drf_bist_fail0_scu_src(data)         ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_CPU1_DRF_BIST_FAIL_get_sc_cpu1_drf_bist_fail0_scu(data)         ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL                                              0x9801D328
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_reg_addr                                     "0xD801D328"
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_reg                                          0xD801D328
#define set_SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_reg)=data)
#define get_SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_reg))
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_inst_adr                                     "0x00CA"
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_inst                                         0x00CA
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_ddata_shift           (20)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_ddata_mask            (0x0FF00000)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_ddata(data)           (0x0FF00000&((data)<<20))
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_ddata_src(data)       ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_get_sc_cpu2_drf_bist_fail0_ddata(data)       ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_dtag_shift            (16)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_dtag_mask             (0x000F0000)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_dtag(data)            (0x000F0000&((data)<<16))
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_dtag_src(data)        ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_get_sc_cpu2_drf_bist_fail0_dtag(data)        ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_ddirty_shift          (14)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_ddirty_mask           (0x00004000)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_ddirty(data)          (0x00004000&((data)<<14))
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_ddirty_src(data)      ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_get_sc_cpu2_drf_bist_fail0_ddirty(data)      ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_idata_shift           (12)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_idata_mask            (0x00003000)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_idata(data)           (0x00003000&((data)<<12))
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_idata_src(data)       ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_get_sc_cpu2_drf_bist_fail0_idata(data)       ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_itag_shift            (10)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_itag_mask             (0x00000C00)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_itag(data)            (0x00000C00&((data)<<10))
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_itag_src(data)        ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_get_sc_cpu2_drf_bist_fail0_itag(data)        ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_btac0_shift           (9)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_btac0_mask            (0x00000200)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_btac0(data)           (0x00000200&((data)<<9))
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_btac0_src(data)       ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_get_sc_cpu2_drf_bist_fail0_btac0(data)       ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_btac1_shift           (8)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_btac1_mask            (0x00000100)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_btac1(data)           (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_btac1_src(data)       ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_get_sc_cpu2_drf_bist_fail0_btac1(data)       ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_tlb_shift             (4)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_tlb_mask              (0x000000F0)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_tlb(data)             (0x000000F0&((data)<<4))
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_tlb_src(data)         ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_get_sc_cpu2_drf_bist_fail0_tlb(data)         ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_scu_shift             (0)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_scu_mask              (0x0000000F)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_scu(data)             (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_sc_cpu2_drf_bist_fail0_scu_src(data)         ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_CPU2_DRF_BIST_FAIL_get_sc_cpu2_drf_bist_fail0_scu(data)         ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL                                              0x9801D32C
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_reg_addr                                     "0xD801D32C"
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_reg                                          0xD801D32C
#define set_SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_reg)=data)
#define get_SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_reg))
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_inst_adr                                     "0x00CB"
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_inst                                         0x00CB
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_ddata_shift           (20)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_ddata_mask            (0x0FF00000)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_ddata(data)           (0x0FF00000&((data)<<20))
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_ddata_src(data)       ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_get_sc_cpu3_drf_bist_fail0_ddata(data)       ((0x0FF00000&(data))>>20)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_dtag_shift            (16)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_dtag_mask             (0x000F0000)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_dtag(data)            (0x000F0000&((data)<<16))
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_dtag_src(data)        ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_get_sc_cpu3_drf_bist_fail0_dtag(data)        ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_ddirty_shift          (14)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_ddirty_mask           (0x00004000)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_ddirty(data)          (0x00004000&((data)<<14))
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_ddirty_src(data)      ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_get_sc_cpu3_drf_bist_fail0_ddirty(data)      ((0x00004000&(data))>>14)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_idata_shift           (12)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_idata_mask            (0x00003000)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_idata(data)           (0x00003000&((data)<<12))
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_idata_src(data)       ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_get_sc_cpu3_drf_bist_fail0_idata(data)       ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_itag_shift            (10)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_itag_mask             (0x00000C00)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_itag(data)            (0x00000C00&((data)<<10))
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_itag_src(data)        ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_get_sc_cpu3_drf_bist_fail0_itag(data)        ((0x00000C00&(data))>>10)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_btac0_shift           (9)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_btac0_mask            (0x00000200)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_btac0(data)           (0x00000200&((data)<<9))
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_btac0_src(data)       ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_get_sc_cpu3_drf_bist_fail0_btac0(data)       ((0x00000200&(data))>>9)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_btac1_shift           (8)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_btac1_mask            (0x00000100)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_btac1(data)           (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_btac1_src(data)       ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_get_sc_cpu3_drf_bist_fail0_btac1(data)       ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_tlb_shift             (4)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_tlb_mask              (0x000000F0)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_tlb(data)             (0x000000F0&((data)<<4))
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_tlb_src(data)         ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_get_sc_cpu3_drf_bist_fail0_tlb(data)         ((0x000000F0&(data))>>4)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_scu_shift             (0)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_scu_mask              (0x0000000F)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_scu(data)             (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_sc_cpu3_drf_bist_fail0_scu_src(data)         ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_CPU3_DRF_BIST_FAIL_get_sc_cpu3_drf_bist_fail0_scu(data)         ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_L2_BIST_FAIL                                                    0x9801D330
#define SC_WRAP_DVFS_L2_BIST_FAIL_reg_addr                                           "0xD801D330"
#define SC_WRAP_DVFS_L2_BIST_FAIL_reg                                                0xD801D330
#define set_SC_WRAP_DVFS_L2_BIST_FAIL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_BIST_FAIL_reg)=data)
#define get_SC_WRAP_DVFS_L2_BIST_FAIL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_BIST_FAIL_reg))
#define SC_WRAP_DVFS_L2_BIST_FAIL_inst_adr                                           "0x00CC"
#define SC_WRAP_DVFS_L2_BIST_FAIL_inst                                               0x00CC
#define SC_WRAP_DVFS_L2_BIST_FAIL_sc_bist_fail0_l2_victim_shift                      (16)
#define SC_WRAP_DVFS_L2_BIST_FAIL_sc_bist_fail0_l2_victim_mask                       (0x00010000)
#define SC_WRAP_DVFS_L2_BIST_FAIL_sc_bist_fail0_l2_victim(data)                      (0x00010000&((data)<<16))
#define SC_WRAP_DVFS_L2_BIST_FAIL_sc_bist_fail0_l2_victim_src(data)                  ((0x00010000&(data))>>16)
#define SC_WRAP_DVFS_L2_BIST_FAIL_get_sc_bist_fail0_l2_victim(data)                  ((0x00010000&(data))>>16)
#define SC_WRAP_DVFS_L2_BIST_FAIL_sc_bist_fail0_l2_tag_shift                         (0)
#define SC_WRAP_DVFS_L2_BIST_FAIL_sc_bist_fail0_l2_tag_mask                          (0x0000FFFF)
#define SC_WRAP_DVFS_L2_BIST_FAIL_sc_bist_fail0_l2_tag(data)                         (0x0000FFFF&((data)<<0))
#define SC_WRAP_DVFS_L2_BIST_FAIL_sc_bist_fail0_l2_tag_src(data)                     ((0x0000FFFF&(data))>>0)
#define SC_WRAP_DVFS_L2_BIST_FAIL_get_sc_bist_fail0_l2_tag(data)                     ((0x0000FFFF&(data))>>0)


#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL                                                0x9801D334
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_reg_addr                                       "0xD801D334"
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_reg                                            0xD801D334
#define set_SC_WRAP_DVFS_L2_DRF_BIST_FAIL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DRF_BIST_FAIL_reg)=data)
#define get_SC_WRAP_DVFS_L2_DRF_BIST_FAIL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DRF_BIST_FAIL_reg))
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_inst_adr                                       "0x00CD"
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_inst                                           0x00CD
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_sc_drf_bist_fail0_l2_victim_shift              (16)
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_sc_drf_bist_fail0_l2_victim_mask               (0x00010000)
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_sc_drf_bist_fail0_l2_victim(data)              (0x00010000&((data)<<16))
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_sc_drf_bist_fail0_l2_victim_src(data)          ((0x00010000&(data))>>16)
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_get_sc_drf_bist_fail0_l2_victim(data)          ((0x00010000&(data))>>16)
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_sc_drf_bist_fail0_l2_tag_shift                 (0)
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_sc_drf_bist_fail0_l2_tag_mask                  (0x0000FFFF)
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_sc_drf_bist_fail0_l2_tag(data)                 (0x0000FFFF&((data)<<0))
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_sc_drf_bist_fail0_l2_tag_src(data)             ((0x0000FFFF&(data))>>0)
#define SC_WRAP_DVFS_L2_DRF_BIST_FAIL_get_sc_drf_bist_fail0_l2_tag(data)             ((0x0000FFFF&(data))>>0)


#define SC_WRAP_DVFS_DRF_TEST_RESUME                                                 0x9801D338
#define SC_WRAP_DVFS_DRF_TEST_RESUME_reg_addr                                        "0xD801D338"
#define SC_WRAP_DVFS_DRF_TEST_RESUME_reg                                             0xD801D338
#define set_SC_WRAP_DVFS_DRF_TEST_RESUME_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_DRF_TEST_RESUME_reg)=data)
#define get_SC_WRAP_DVFS_DRF_TEST_RESUME_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_DRF_TEST_RESUME_reg))
#define SC_WRAP_DVFS_DRF_TEST_RESUME_inst_adr                                        "0x00CE"
#define SC_WRAP_DVFS_DRF_TEST_RESUME_inst                                            0x00CE
#define SC_WRAP_DVFS_DRF_TEST_RESUME_sc_drf_bisr_test_resume_shift                   (4)
#define SC_WRAP_DVFS_DRF_TEST_RESUME_sc_drf_bisr_test_resume_mask                    (0x00000010)
#define SC_WRAP_DVFS_DRF_TEST_RESUME_sc_drf_bisr_test_resume(data)                   (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_DRF_TEST_RESUME_sc_drf_bisr_test_resume_src(data)               ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_DRF_TEST_RESUME_get_sc_drf_bisr_test_resume(data)               ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_DRF_TEST_RESUME_sc_drf_test_resume0_shift                       (0)
#define SC_WRAP_DVFS_DRF_TEST_RESUME_sc_drf_test_resume0_mask                        (0x00000001)
#define SC_WRAP_DVFS_DRF_TEST_RESUME_sc_drf_test_resume0(data)                       (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_DRF_TEST_RESUME_sc_drf_test_resume0_src(data)                   ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_DRF_TEST_RESUME_get_sc_drf_test_resume0(data)                   ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE                                             0x9801D33C
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_reg_addr                                    "0xD801D33C"
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_reg                                         0xD801D33C
#define set_SC_WRAP_DVFS_CPU_DRF_START_PAUSE_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU_DRF_START_PAUSE_reg)=data)
#define get_SC_WRAP_DVFS_CPU_DRF_START_PAUSE_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_CPU_DRF_START_PAUSE_reg))
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_inst_adr                                    "0x00CF"
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_inst                                        0x00CF
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_sc_drf_bisr_start_pause_shift               (4)
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_sc_drf_bisr_start_pause_mask                (0x00000010)
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_sc_drf_bisr_start_pause(data)               (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_sc_drf_bisr_start_pause_src(data)           ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_get_sc_drf_bisr_start_pause(data)           ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_sc_drf_start_pause0_shift                   (0)
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_sc_drf_start_pause0_mask                    (0x00000001)
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_sc_drf_start_pause0(data)                   (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_sc_drf_start_pause0_src(data)               ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_CPU_DRF_START_PAUSE_get_sc_drf_start_pause0(data)               ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_HOLD_REMAP                                                      0x9801D400
#define SC_WRAP_DVFS_HOLD_REMAP_reg_addr                                             "0xD801D400"
#define SC_WRAP_DVFS_HOLD_REMAP_reg                                                  0xD801D400
#define set_SC_WRAP_DVFS_HOLD_REMAP_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_HOLD_REMAP_reg)=data)
#define get_SC_WRAP_DVFS_HOLD_REMAP_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_HOLD_REMAP_reg))
#define SC_WRAP_DVFS_HOLD_REMAP_inst_adr                                             "0x0000"
#define SC_WRAP_DVFS_HOLD_REMAP_inst                                                 0x0000
#define SC_WRAP_DVFS_HOLD_REMAP_sc_bisr_hold_remap_shift                             (0)
#define SC_WRAP_DVFS_HOLD_REMAP_sc_bisr_hold_remap_mask                              (0x00000001)
#define SC_WRAP_DVFS_HOLD_REMAP_sc_bisr_hold_remap(data)                             (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_HOLD_REMAP_sc_bisr_hold_remap_src(data)                         ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_HOLD_REMAP_get_sc_bisr_hold_remap(data)                         ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_SECOND_RUN_EN                                                   0x9801D404
#define SC_WRAP_DVFS_SECOND_RUN_EN_reg_addr                                          "0xD801D404"
#define SC_WRAP_DVFS_SECOND_RUN_EN_reg                                               0xD801D404
#define set_SC_WRAP_DVFS_SECOND_RUN_EN_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SECOND_RUN_EN_reg)=data)
#define get_SC_WRAP_DVFS_SECOND_RUN_EN_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SECOND_RUN_EN_reg))
#define SC_WRAP_DVFS_SECOND_RUN_EN_inst_adr                                          "0x0001"
#define SC_WRAP_DVFS_SECOND_RUN_EN_inst                                              0x0001
#define SC_WRAP_DVFS_SECOND_RUN_EN_sc_bisr_second_run_en_shift                       (0)
#define SC_WRAP_DVFS_SECOND_RUN_EN_sc_bisr_second_run_en_mask                        (0x00000001)
#define SC_WRAP_DVFS_SECOND_RUN_EN_sc_bisr_second_run_en(data)                       (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_SECOND_RUN_EN_sc_bisr_second_run_en_src(data)                   ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_SECOND_RUN_EN_get_sc_bisr_second_run_en(data)                   ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_BISR_REPAIR                                                     0x9801D408
#define SC_WRAP_DVFS_BISR_REPAIR_reg_addr                                            "0xD801D408"
#define SC_WRAP_DVFS_BISR_REPAIR_reg                                                 0xD801D408
#define set_SC_WRAP_DVFS_BISR_REPAIR_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_BISR_REPAIR_reg)=data)
#define get_SC_WRAP_DVFS_BISR_REPAIR_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_BISR_REPAIR_reg))
#define SC_WRAP_DVFS_BISR_REPAIR_inst_adr                                            "0x0002"
#define SC_WRAP_DVFS_BISR_REPAIR_inst                                                0x0002
#define SC_WRAP_DVFS_BISR_REPAIR_sc_bisr_repaired_shift                              (0)
#define SC_WRAP_DVFS_BISR_REPAIR_sc_bisr_repaired_mask                               (0x00000001)
#define SC_WRAP_DVFS_BISR_REPAIR_sc_bisr_repaired(data)                              (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_BISR_REPAIR_sc_bisr_repaired_src(data)                          ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_BISR_REPAIR_get_sc_bisr_repaired(data)                          ((0x00000001&(data))>>0)


#define SC_WRAP_DVFS_BISR_FAIL_SEP                                                   0x9801D40C
#define SC_WRAP_DVFS_BISR_FAIL_SEP_reg_addr                                          "0xD801D40C"
#define SC_WRAP_DVFS_BISR_FAIL_SEP_reg                                               0xD801D40C
#define set_SC_WRAP_DVFS_BISR_FAIL_SEP_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_BISR_FAIL_SEP_reg)=data)
#define get_SC_WRAP_DVFS_BISR_FAIL_SEP_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_BISR_FAIL_SEP_reg))
#define SC_WRAP_DVFS_BISR_FAIL_SEP_inst_adr                                          "0x0003"
#define SC_WRAP_DVFS_BISR_FAIL_SEP_inst                                              0x0003
#define SC_WRAP_DVFS_BISR_FAIL_SEP_sc_drf_bisr_fail_shift                            (16)
#define SC_WRAP_DVFS_BISR_FAIL_SEP_sc_drf_bisr_fail_mask                             (0xFFFF0000)
#define SC_WRAP_DVFS_BISR_FAIL_SEP_sc_drf_bisr_fail(data)                            (0xFFFF0000&((data)<<16))
#define SC_WRAP_DVFS_BISR_FAIL_SEP_sc_drf_bisr_fail_src(data)                        ((0xFFFF0000&(data))>>16)
#define SC_WRAP_DVFS_BISR_FAIL_SEP_get_sc_drf_bisr_fail(data)                        ((0xFFFF0000&(data))>>16)
#define SC_WRAP_DVFS_BISR_FAIL_SEP_sc_bisr_fail_shift                                (0)
#define SC_WRAP_DVFS_BISR_FAIL_SEP_sc_bisr_fail_mask                                 (0x0000FFFF)
#define SC_WRAP_DVFS_BISR_FAIL_SEP_sc_bisr_fail(data)                                (0x0000FFFF&((data)<<0))
#define SC_WRAP_DVFS_BISR_FAIL_SEP_sc_bisr_fail_src(data)                            ((0x0000FFFF&(data))>>0)
#define SC_WRAP_DVFS_BISR_FAIL_SEP_get_sc_bisr_fail(data)                            ((0x0000FFFF&(data))>>0)


#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_1                                              0x9801D410
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_reg_addr                                     "0xD801D410"
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_reg                                          0xD801D410
#define set_SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_reg)=data)
#define get_SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_reg))
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_inst_adr                                     "0x0004"
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_inst                                         0x0004
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_sc_bisr_out_31_0_shift                       (0)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_sc_bisr_out_31_0_mask                        (0xFFFFFFFF)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_sc_bisr_out_31_0(data)                       (0xFFFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_sc_bisr_out_31_0_src(data)                   ((0xFFFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_1_get_sc_bisr_out_31_0(data)                   ((0xFFFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_2                                              0x9801D414
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_reg_addr                                     "0xD801D414"
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_reg                                          0xD801D414
#define set_SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_reg)=data)
#define get_SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_reg))
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_inst_adr                                     "0x0005"
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_inst                                         0x0005
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_sc_bisr_out_63_32_shift                      (0)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_sc_bisr_out_63_32_mask                       (0xFFFFFFFF)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_sc_bisr_out_63_32(data)                      (0xFFFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_sc_bisr_out_63_32_src(data)                  ((0xFFFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_2_get_sc_bisr_out_63_32(data)                  ((0xFFFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_3                                              0x9801D418
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_reg_addr                                     "0xD801D418"
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_reg                                          0xD801D418
#define set_SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_reg)=data)
#define get_SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_reg))
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_inst_adr                                     "0x0006"
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_inst                                         0x0006
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_sc_bisr_out_95_64_shift                      (0)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_sc_bisr_out_95_64_mask                       (0xFFFFFFFF)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_sc_bisr_out_95_64(data)                      (0xFFFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_sc_bisr_out_95_64_src(data)                  ((0xFFFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_3_get_sc_bisr_out_95_64(data)                  ((0xFFFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_4                                              0x9801D420
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_reg_addr                                     "0xD801D420"
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_reg                                          0xD801D420
#define set_SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_reg)=data)
#define get_SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_reg))
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_inst_adr                                     "0x0008"
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_inst                                         0x0008
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_sc_bisr_out_127_96_shift                     (0)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_sc_bisr_out_127_96_mask                      (0xFFFFFFFF)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_sc_bisr_out_127_96(data)                     (0xFFFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_sc_bisr_out_127_96_src(data)                 ((0xFFFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_4_get_sc_bisr_out_127_96(data)                 ((0xFFFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_5                                              0x9801D424
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_reg_addr                                     "0xD801D424"
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_reg                                          0xD801D424
#define set_SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_reg)=data)
#define get_SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_reg))
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_inst_adr                                     "0x0009"
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_inst                                         0x0009
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_sc_bisr_out_159_128_shift                    (0)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_sc_bisr_out_159_128_mask                     (0xFFFFFFFF)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_sc_bisr_out_159_128(data)                    (0xFFFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_sc_bisr_out_159_128_src(data)                ((0xFFFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_5_get_sc_bisr_out_159_128(data)                ((0xFFFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_6                                              0x9801D428
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_reg_addr                                     "0xD801D428"
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_reg                                          0xD801D428
#define set_SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_reg)=data)
#define get_SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_reg))
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_inst_adr                                     "0x000A"
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_inst                                         0x000A
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_sc_bisr_out_191_160_shift                    (0)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_sc_bisr_out_191_160_mask                     (0xFFFFFFFF)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_sc_bisr_out_191_160(data)                    (0xFFFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_sc_bisr_out_191_160_src(data)                ((0xFFFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_L2_DATA_BISR_OUT_6_get_sc_bisr_out_191_160(data)                ((0xFFFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_SRAM_CTRL_IDATA                                                 0x9801D500
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_reg_addr                                        "0xD801D500"
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_reg                                             0xD801D500
#define set_SC_WRAP_DVFS_SRAM_CTRL_IDATA_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_IDATA_reg)=data)
#define get_SC_WRAP_DVFS_SRAM_CTRL_IDATA_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_IDATA_reg))
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_inst_adr                                        "0x0040"
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_inst                                            0x0040
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_emaw_idata_shift                                (8)
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_emaw_idata_mask                                 (0x00000300)
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_emaw_idata(data)                                (0x00000300&((data)<<8))
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_emaw_idata_src(data)                            ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_get_emaw_idata(data)                            ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_emas_idata_shift                                (4)
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_emas_idata_mask                                 (0x00000010)
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_emas_idata(data)                                (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_emas_idata_src(data)                            ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_get_emas_idata(data)                            ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_ema_idata_shift                                 (0)
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_ema_idata_mask                                  (0x00000007)
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_ema_idata(data)                                 (0x00000007&((data)<<0))
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_ema_idata_src(data)                             ((0x00000007&(data))>>0)
#define SC_WRAP_DVFS_SRAM_CTRL_IDATA_get_ema_idata(data)                             ((0x00000007&(data))>>0)


#define SC_WRAP_DVFS_SRAM_CTRL_ITAG                                                  0x9801D504
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_reg_addr                                         "0xD801D504"
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_reg                                              0xD801D504
#define set_SC_WRAP_DVFS_SRAM_CTRL_ITAG_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_ITAG_reg)=data)
#define get_SC_WRAP_DVFS_SRAM_CTRL_ITAG_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_ITAG_reg))
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_inst_adr                                         "0x0041"
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_inst                                             0x0041
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_emaw_itag_shift                                  (8)
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_emaw_itag_mask                                   (0x00000300)
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_emaw_itag(data)                                  (0x00000300&((data)<<8))
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_emaw_itag_src(data)                              ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_get_emaw_itag(data)                              ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_emas_itag_shift                                  (4)
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_emas_itag_mask                                   (0x00000010)
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_emas_itag(data)                                  (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_emas_itag_src(data)                              ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_get_emas_itag(data)                              ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_ema_itag_shift                                   (0)
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_ema_itag_mask                                    (0x00000007)
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_ema_itag(data)                                   (0x00000007&((data)<<0))
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_ema_itag_src(data)                               ((0x00000007&(data))>>0)
#define SC_WRAP_DVFS_SRAM_CTRL_ITAG_get_ema_itag(data)                               ((0x00000007&(data))>>0)


#define SC_WRAP_DVFS_SRAM_CTRL_DDATA                                                 0x9801D508
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_reg_addr                                        "0xD801D508"
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_reg                                             0xD801D508
#define set_SC_WRAP_DVFS_SRAM_CTRL_DDATA_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_DDATA_reg)=data)
#define get_SC_WRAP_DVFS_SRAM_CTRL_DDATA_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_DDATA_reg))
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_inst_adr                                        "0x0042"
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_inst                                            0x0042
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_emaw_ddata_shift                                (8)
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_emaw_ddata_mask                                 (0x00000300)
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_emaw_ddata(data)                                (0x00000300&((data)<<8))
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_emaw_ddata_src(data)                            ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_get_emaw_ddata(data)                            ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_emas_ddata_shift                                (4)
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_emas_ddata_mask                                 (0x00000010)
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_emas_ddata(data)                                (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_emas_ddata_src(data)                            ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_get_emas_ddata(data)                            ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_ema_ddata_shift                                 (0)
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_ema_ddata_mask                                  (0x00000007)
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_ema_ddata(data)                                 (0x00000007&((data)<<0))
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_ema_ddata_src(data)                             ((0x00000007&(data))>>0)
#define SC_WRAP_DVFS_SRAM_CTRL_DDATA_get_ema_ddata(data)                             ((0x00000007&(data))>>0)


#define SC_WRAP_DVFS_SRAM_CTRL_DTAG                                                  0x9801D50C
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_reg_addr                                         "0xD801D50C"
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_reg                                              0xD801D50C
#define set_SC_WRAP_DVFS_SRAM_CTRL_DTAG_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_DTAG_reg)=data)
#define get_SC_WRAP_DVFS_SRAM_CTRL_DTAG_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_DTAG_reg))
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_inst_adr                                         "0x0043"
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_inst                                             0x0043
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_emaw_dtag_shift                                  (8)
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_emaw_dtag_mask                                   (0x00000300)
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_emaw_dtag(data)                                  (0x00000300&((data)<<8))
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_emaw_dtag_src(data)                              ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_get_emaw_dtag(data)                              ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_emas_dtag_shift                                  (4)
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_emas_dtag_mask                                   (0x00000010)
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_emas_dtag(data)                                  (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_emas_dtag_src(data)                              ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_get_emas_dtag(data)                              ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_ema_dtag_shift                                   (0)
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_ema_dtag_mask                                    (0x00000007)
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_ema_dtag(data)                                   (0x00000007&((data)<<0))
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_ema_dtag_src(data)                               ((0x00000007&(data))>>0)
#define SC_WRAP_DVFS_SRAM_CTRL_DTAG_get_ema_dtag(data)                               ((0x00000007&(data))>>0)


#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY                                                0x9801D510
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_reg_addr                                       "0xD801D510"
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_reg                                            0xD801D510
#define set_SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_reg)=data)
#define get_SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_reg))
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_inst_adr                                       "0x0044"
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_inst                                           0x0044
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_emaw_ddirty_shift                              (8)
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_emaw_ddirty_mask                               (0x00000300)
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_emaw_ddirty(data)                              (0x00000300&((data)<<8))
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_emaw_ddirty_src(data)                          ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_get_emaw_ddirty(data)                          ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_emas_ddirty_shift                              (4)
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_emas_ddirty_mask                               (0x00000010)
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_emas_ddirty(data)                              (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_emas_ddirty_src(data)                          ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_get_emas_ddirty(data)                          ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_ema_ddirty_shift                               (0)
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_ema_ddirty_mask                                (0x00000007)
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_ema_ddirty(data)                               (0x00000007&((data)<<0))
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_ema_ddirty_src(data)                           ((0x00000007&(data))>>0)
#define SC_WRAP_DVFS_SRAM_CTRL_DDIRTY_get_ema_ddirty(data)                           ((0x00000007&(data))>>0)


#define SC_WRAP_DVFS_SRAM_CTRL_TLB                                                   0x9801D514
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_reg_addr                                          "0xD801D514"
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_reg                                               0xD801D514
#define set_SC_WRAP_DVFS_SRAM_CTRL_TLB_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_TLB_reg)=data)
#define get_SC_WRAP_DVFS_SRAM_CTRL_TLB_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_TLB_reg))
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_inst_adr                                          "0x0045"
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_inst                                              0x0045
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_emaw_tlb_shift                                    (8)
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_emaw_tlb_mask                                     (0x00000300)
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_emaw_tlb(data)                                    (0x00000300&((data)<<8))
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_emaw_tlb_src(data)                                ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_get_emaw_tlb(data)                                ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_emas_tlb_shift                                    (4)
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_emas_tlb_mask                                     (0x00000010)
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_emas_tlb(data)                                    (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_emas_tlb_src(data)                                ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_get_emas_tlb(data)                                ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_ema_tlb_shift                                     (0)
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_ema_tlb_mask                                      (0x00000007)
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_ema_tlb(data)                                     (0x00000007&((data)<<0))
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_ema_tlb_src(data)                                 ((0x00000007&(data))>>0)
#define SC_WRAP_DVFS_SRAM_CTRL_TLB_get_ema_tlb(data)                                 ((0x00000007&(data))>>0)


#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0                                                 0x9801D518
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_reg_addr                                        "0xD801D518"
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_reg                                             0xD801D518
#define set_SC_WRAP_DVFS_SRAM_CTRL_BTAC0_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_BTAC0_reg)=data)
#define get_SC_WRAP_DVFS_SRAM_CTRL_BTAC0_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_BTAC0_reg))
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_inst_adr                                        "0x0046"
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_inst                                            0x0046
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_emaw_btac0_shift                                (8)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_emaw_btac0_mask                                 (0x00000300)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_emaw_btac0(data)                                (0x00000300&((data)<<8))
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_emaw_btac0_src(data)                            ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_get_emaw_btac0(data)                            ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_emas_btac0_shift                                (4)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_emas_btac0_mask                                 (0x00000010)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_emas_btac0(data)                                (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_emas_btac0_src(data)                            ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_get_emas_btac0(data)                            ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_ema_btac0_shift                                 (0)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_ema_btac0_mask                                  (0x00000007)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_ema_btac0(data)                                 (0x00000007&((data)<<0))
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_ema_btac0_src(data)                             ((0x00000007&(data))>>0)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC0_get_ema_btac0(data)                             ((0x00000007&(data))>>0)


#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1                                                 0x9801D51C
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_reg_addr                                        "0xD801D51C"
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_reg                                             0xD801D51C
#define set_SC_WRAP_DVFS_SRAM_CTRL_BTAC1_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_BTAC1_reg)=data)
#define get_SC_WRAP_DVFS_SRAM_CTRL_BTAC1_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_BTAC1_reg))
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_inst_adr                                        "0x0047"
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_inst                                            0x0047
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_emaw_btac1_shift                                (8)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_emaw_btac1_mask                                 (0x00000300)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_emaw_btac1(data)                                (0x00000300&((data)<<8))
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_emaw_btac1_src(data)                            ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_get_emaw_btac1(data)                            ((0x00000300&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_emas_btac1_shift                                (4)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_emas_btac1_mask                                 (0x00000010)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_emas_btac1(data)                                (0x00000010&((data)<<4))
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_emas_btac1_src(data)                            ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_get_emas_btac1(data)                            ((0x00000010&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_ema_btac1_shift                                 (0)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_ema_btac1_mask                                  (0x00000007)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_ema_btac1(data)                                 (0x00000007&((data)<<0))
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_ema_btac1_src(data)                             ((0x00000007&(data))>>0)
#define SC_WRAP_DVFS_SRAM_CTRL_BTAC1_get_ema_btac1(data)                             ((0x00000007&(data))>>0)


#define SC_WRAP_DVFS_SRAM_CTRL_L2                                                    0x9801D520
#define SC_WRAP_DVFS_SRAM_CTRL_L2_reg_addr                                           "0xD801D520"
#define SC_WRAP_DVFS_SRAM_CTRL_L2_reg                                                0xD801D520
#define set_SC_WRAP_DVFS_SRAM_CTRL_L2_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_L2_reg)=data)
#define get_SC_WRAP_DVFS_SRAM_CTRL_L2_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SRAM_CTRL_L2_reg))
#define SC_WRAP_DVFS_SRAM_CTRL_L2_inst_adr                                           "0x0048"
#define SC_WRAP_DVFS_SRAM_CTRL_L2_inst                                               0x0048
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_scu_l1d_tag_shift                             (28)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_scu_l1d_tag_mask                              (0x30000000)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_scu_l1d_tag(data)                             (0x30000000&((data)<<28))
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_scu_l1d_tag_src(data)                         ((0x30000000&(data))>>28)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_get_emaw_scu_l1d_tag(data)                         ((0x30000000&(data))>>28)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emas_scu_l1d_tag_shift                             (27)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emas_scu_l1d_tag_mask                              (0x08000000)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emas_scu_l1d_tag(data)                             (0x08000000&((data)<<27))
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emas_scu_l1d_tag_src(data)                         ((0x08000000&(data))>>27)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_get_emas_scu_l1d_tag(data)                         ((0x08000000&(data))>>27)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_scu_l1d_tag_shift                              (24)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_scu_l1d_tag_mask                               (0x07000000)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_scu_l1d_tag(data)                              (0x07000000&((data)<<24))
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_scu_l1d_tag_src(data)                          ((0x07000000&(data))>>24)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_get_ema_scu_l1d_tag(data)                          ((0x07000000&(data))>>24)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_l2_victim_shift                               (20)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_l2_victim_mask                                (0x00300000)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_l2_victim(data)                               (0x00300000&((data)<<20))
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_l2_victim_src(data)                           ((0x00300000&(data))>>20)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_get_emaw_l2_victim(data)                           ((0x00300000&(data))>>20)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emas_l2_victim_shift                               (19)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emas_l2_victim_mask                                (0x00080000)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emas_l2_victim(data)                               (0x00080000&((data)<<19))
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emas_l2_victim_src(data)                           ((0x00080000&(data))>>19)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_get_emas_l2_victim(data)                           ((0x00080000&(data))>>19)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_l2_victim_shift                                (16)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_l2_victim_mask                                 (0x00070000)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_l2_victim(data)                                (0x00070000&((data)<<16))
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_l2_victim_src(data)                            ((0x00070000&(data))>>16)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_get_ema_l2_victim(data)                            ((0x00070000&(data))>>16)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_l2_tag_shift                                  (12)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_l2_tag_mask                                   (0x00003000)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_l2_tag(data)                                  (0x00003000&((data)<<12))
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_l2_tag_src(data)                              ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_get_emaw_l2_tag(data)                              ((0x00003000&(data))>>12)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emas_l2_tag_shift                                  (11)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emas_l2_tag_mask                                   (0x00000800)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emas_l2_tag(data)                                  (0x00000800&((data)<<11))
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emas_l2_tag_src(data)                              ((0x00000800&(data))>>11)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_get_emas_l2_tag(data)                              ((0x00000800&(data))>>11)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_l2_tag_shift                                   (8)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_l2_tag_mask                                    (0x00000700)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_l2_tag(data)                                   (0x00000700&((data)<<8))
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_l2_tag_src(data)                               ((0x00000700&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_get_ema_l2_tag(data)                               ((0x00000700&(data))>>8)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_l2_data_shift                                 (4)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_l2_data_mask                                  (0x00000030)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_l2_data(data)                                 (0x00000030&((data)<<4))
#define SC_WRAP_DVFS_SRAM_CTRL_L2_emaw_l2_data_src(data)                             ((0x00000030&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_get_emaw_l2_data(data)                             ((0x00000030&(data))>>4)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_l2_data_shift                                  (0)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_l2_data_mask                                   (0x00000007)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_l2_data(data)                                  (0x00000007&((data)<<0))
#define SC_WRAP_DVFS_SRAM_CTRL_L2_ema_l2_data_src(data)                              ((0x00000007&(data))>>0)
#define SC_WRAP_DVFS_SRAM_CTRL_L2_get_ema_l2_data(data)                              ((0x00000007&(data))>>0)


#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL                                               0x9801D530
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_reg_addr                                      "0xD801D530"
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_reg                                           0xD801D530
#define set_SC_WRAP_DVFS_SC_LOW_POWER_CTRL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_LOW_POWER_CTRL_reg)=data)
#define get_SC_WRAP_DVFS_SC_LOW_POWER_CTRL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_LOW_POWER_CTRL_reg))
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_inst_adr                                      "0x004C"
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_inst                                          0x004C
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET2N_L2_shift                             (25)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET2N_L2_mask                              (0x02000000)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET2N_L2(data)                             (0x02000000&((data)<<25))
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET2N_L2_src(data)                         ((0x02000000&(data))>>25)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_get_sc_RET2N_L2(data)                         ((0x02000000&(data))>>25)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET1N_L2_shift                             (24)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET1N_L2_mask                              (0x01000000)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET1N_L2(data)                             (0x01000000&((data)<<24))
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET1N_L2_src(data)                         ((0x01000000&(data))>>24)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_get_sc_RET1N_L2(data)                         ((0x01000000&(data))>>24)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET2N_L1_shift                             (20)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET2N_L1_mask                              (0x00F00000)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET2N_L1(data)                             (0x00F00000&((data)<<20))
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET2N_L1_src(data)                         ((0x00F00000&(data))>>20)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_get_sc_RET2N_L1(data)                         ((0x00F00000&(data))>>20)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET1N_L1_shift                             (16)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET1N_L1_mask                              (0x000F0000)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET1N_L1(data)                             (0x000F0000&((data)<<16))
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_RET1N_L1_src(data)                         ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_get_sc_RET1N_L1(data)                         ((0x000F0000&(data))>>16)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_core_pwrctrl_2nd_in_shift                  (12)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_core_pwrctrl_2nd_in_mask                   (0x0000F000)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_core_pwrctrl_2nd_in(data)                  (0x0000F000&((data)<<12))
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_core_pwrctrl_2nd_in_src(data)              ((0x0000F000&(data))>>12)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_get_sc_core_pwrctrl_2nd_in(data)              ((0x0000F000&(data))>>12)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_core_pwrctrl_in_shift                      (8)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_core_pwrctrl_in_mask                       (0x00000F00)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_core_pwrctrl_in(data)                      (0x00000F00&((data)<<8))
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_core_pwrctrl_in_src(data)                  ((0x00000F00&(data))>>8)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_get_sc_core_pwrctrl_in(data)                  ((0x00000F00&(data))>>8)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_core_clamp_en_shift                        (0)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_core_clamp_en_mask                         (0x0000000F)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_core_clamp_en(data)                        (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_sc_core_clamp_en_src(data)                    ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_SC_LOW_POWER_CTRL_get_sc_core_clamp_en(data)                    ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS                                             0x9801D534
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_reg_addr                                    "0xD801D534"
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_reg                                         0xD801D534
#define set_SC_WRAP_DVFS_SC_LOW_POWER_STATUS_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_LOW_POWER_STATUS_reg)=data)
#define get_SC_WRAP_DVFS_SC_LOW_POWER_STATUS_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_LOW_POWER_STATUS_reg))
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_inst_adr                                    "0x004D"
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_inst                                        0x004D
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_sc_core_pwrctrl_2nd_out_shift               (12)
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_sc_core_pwrctrl_2nd_out_mask                (0x0000F000)
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_sc_core_pwrctrl_2nd_out(data)               (0x0000F000&((data)<<12))
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_sc_core_pwrctrl_2nd_out_src(data)           ((0x0000F000&(data))>>12)
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_get_sc_core_pwrctrl_2nd_out(data)           ((0x0000F000&(data))>>12)
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_sc_core_pwrctrl_out_shift                   (8)
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_sc_core_pwrctrl_out_mask                    (0x00000F00)
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_sc_core_pwrctrl_out(data)                   (0x00000F00&((data)<<8))
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_sc_core_pwrctrl_out_src(data)               ((0x00000F00&(data))>>8)
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_get_sc_core_pwrctrl_out(data)               ((0x00000F00&(data))>>8)
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_PARM_L1_shift                               (0)
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_PARM_L1_mask                                (0x0000000F)
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_PARM_L1(data)                               (0x0000000F&((data)<<0))
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_PARM_L1_src(data)                           ((0x0000000F&(data))>>0)
#define SC_WRAP_DVFS_SC_LOW_POWER_STATUS_get_PARM_L1(data)                           ((0x0000000F&(data))>>0)


#define SC_WRAP_DVFS_SC_DUMMY_0                                                      0x9801D600
#define SC_WRAP_DVFS_SC_DUMMY_0_reg_addr                                             "0xD801D600"
#define SC_WRAP_DVFS_SC_DUMMY_0_reg                                                  0xD801D600
#define set_SC_WRAP_DVFS_SC_DUMMY_0_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DUMMY_0_reg)=data)
#define get_SC_WRAP_DVFS_SC_DUMMY_0_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DUMMY_0_reg))
#define SC_WRAP_DVFS_SC_DUMMY_0_inst_adr                                             "0x0080"
#define SC_WRAP_DVFS_SC_DUMMY_0_inst                                                 0x0080
#define SC_WRAP_DVFS_SC_DUMMY_0_data_0_shift                                         (0)
#define SC_WRAP_DVFS_SC_DUMMY_0_data_0_mask                                          (0xFFFFFFFF)
#define SC_WRAP_DVFS_SC_DUMMY_0_data_0(data)                                         (0xFFFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_SC_DUMMY_0_data_0_src(data)                                     ((0xFFFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_SC_DUMMY_0_get_data_0(data)                                     ((0xFFFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_SC_DUMMY_1                                                      0x9801D604
#define SC_WRAP_DVFS_SC_DUMMY_1_reg_addr                                             "0xD801D604"
#define SC_WRAP_DVFS_SC_DUMMY_1_reg                                                  0xD801D604
#define set_SC_WRAP_DVFS_SC_DUMMY_1_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DUMMY_1_reg)=data)
#define get_SC_WRAP_DVFS_SC_DUMMY_1_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_DUMMY_1_reg))
#define SC_WRAP_DVFS_SC_DUMMY_1_inst_adr                                             "0x0081"
#define SC_WRAP_DVFS_SC_DUMMY_1_inst                                                 0x0081
#define SC_WRAP_DVFS_SC_DUMMY_1_data_1_shift                                         (0)
#define SC_WRAP_DVFS_SC_DUMMY_1_data_1_mask                                          (0xFFFFFFFF)
#define SC_WRAP_DVFS_SC_DUMMY_1_data_1(data)                                         (0xFFFFFFFF&((data)<<0))
#define SC_WRAP_DVFS_SC_DUMMY_1_data_1_src(data)                                     ((0xFFFFFFFF&(data))>>0)
#define SC_WRAP_DVFS_SC_DUMMY_1_get_data_1(data)                                     ((0xFFFFFFFF&(data))>>0)


#define SC_WRAP_DVFS_SC_PLL_CTRL                                                     0x9801D700
#define SC_WRAP_DVFS_SC_PLL_CTRL_reg_addr                                            "0xD801D700"
#define SC_WRAP_DVFS_SC_PLL_CTRL_reg                                                 0xD801D700
#define set_SC_WRAP_DVFS_SC_PLL_CTRL_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_PLL_CTRL_reg)=data)
#define get_SC_WRAP_DVFS_SC_PLL_CTRL_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_PLL_CTRL_reg))
#define SC_WRAP_DVFS_SC_PLL_CTRL_inst_adr                                            "0x00C0"
#define SC_WRAP_DVFS_SC_PLL_CTRL_inst                                                0x00C0
#define SC_WRAP_DVFS_SC_PLL_CTRL_PLLTST_EN_shift                                     (8)
#define SC_WRAP_DVFS_SC_PLL_CTRL_PLLTST_EN_mask                                      (0x00000100)
#define SC_WRAP_DVFS_SC_PLL_CTRL_PLLTST_EN(data)                                     (0x00000100&((data)<<8))
#define SC_WRAP_DVFS_SC_PLL_CTRL_PLLTST_EN_src(data)                                 ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_SC_PLL_CTRL_get_PLLTST_EN(data)                                 ((0x00000100&(data))>>8)
#define SC_WRAP_DVFS_SC_PLL_CTRL_PLLTST_MUX_CTRL_shift                               (4)
#define SC_WRAP_DVFS_SC_PLL_CTRL_PLLTST_MUX_CTRL_mask                                (0x00000030)
#define SC_WRAP_DVFS_SC_PLL_CTRL_PLLTST_MUX_CTRL(data)                               (0x00000030&((data)<<4))
#define SC_WRAP_DVFS_SC_PLL_CTRL_PLLTST_MUX_CTRL_src(data)                           ((0x00000030&(data))>>4)
#define SC_WRAP_DVFS_SC_PLL_CTRL_get_PLLTST_MUX_CTRL(data)                           ((0x00000030&(data))>>4)
#define SC_WRAP_DVFS_SC_PLL_CTRL_PLLTST_DIV_shift                                    (0)
#define SC_WRAP_DVFS_SC_PLL_CTRL_PLLTST_DIV_mask                                     (0x00000003)
#define SC_WRAP_DVFS_SC_PLL_CTRL_PLLTST_DIV(data)                                    (0x00000003&((data)<<0))
#define SC_WRAP_DVFS_SC_PLL_CTRL_PLLTST_DIV_src(data)                                ((0x00000003&(data))>>0)
#define SC_WRAP_DVFS_SC_PLL_CTRL_get_PLLTST_DIV(data)                                ((0x00000003&(data))>>0)


#define SC_WRAP_DVFS_SC_PLL_STAT                                                     0x9801D704
#define SC_WRAP_DVFS_SC_PLL_STAT_reg_addr                                            "0xD801D704"
#define SC_WRAP_DVFS_SC_PLL_STAT_reg                                                 0xD801D704
#define set_SC_WRAP_DVFS_SC_PLL_STAT_reg(data)   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_PLL_STAT_reg)=data)
#define get_SC_WRAP_DVFS_SC_PLL_STAT_reg   (*((volatile unsigned int*) SC_WRAP_DVFS_SC_PLL_STAT_reg))
#define SC_WRAP_DVFS_SC_PLL_STAT_inst_adr                                            "0x00C1"
#define SC_WRAP_DVFS_SC_PLL_STAT_inst                                                0x00C1
#define SC_WRAP_DVFS_SC_PLL_STAT_WDO_PLLA_shift                                      (0)
#define SC_WRAP_DVFS_SC_PLL_STAT_WDO_PLLA_mask                                       (0x00000001)
#define SC_WRAP_DVFS_SC_PLL_STAT_WDO_PLLA(data)                                      (0x00000001&((data)<<0))
#define SC_WRAP_DVFS_SC_PLL_STAT_WDO_PLLA_src(data)                                  ((0x00000001&(data))>>0)
#define SC_WRAP_DVFS_SC_PLL_STAT_get_WDO_PLLA(data)                                  ((0x00000001&(data))>>0)


#endif
