/**************************************************************
// Spec Version                  : 1.00
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Name
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/6/21 13:13:21
***************************************************************/


#ifndef _GPU_WRAPPER_REG_H_INCLUDED_
#define _GPU_WRAPPER_REG_H_INCLUDED_
#ifdef  _GPU_WRAPPER_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     gpu_l2_bisr_mode20:1;
unsigned int     gpu_l2_bist_mode18:1;
unsigned int     gpu_l2_bist_mode17:1;
unsigned int     gpu_cg_bist_mode16:1;
unsigned int     gpu_cg_bist_mode15:1;
unsigned int     gpu_jm_bist_mode1:1;
}BIST_MODE0;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     gpu_sc0_bist_mode14:1;
unsigned int     gpu_sc0_bist_mode13:1;
unsigned int     gpu_sc0_bist_mode12:1;
unsigned int     gpu_sc0_bist_mode11:1;
unsigned int     gpu_sc0_bist_mode10:1;
unsigned int     gpu_sc0_bist_mode9:1;
unsigned int     gpu_sc0_bist_mode8:1;
unsigned int     gpu_sc0_bist_mode7:1;
unsigned int     gpu_sc0_bist_mode6:1;
unsigned int     gpu_sc0_bist_mode5:1;
unsigned int     gpu_sc0_bist_mode3:1;
unsigned int     gpu_sc0_bist_mode2:1;
}BIST_MODE1;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     gpu_sc1_bist_mode14:1;
unsigned int     gpu_sc1_bist_mode13:1;
unsigned int     gpu_sc1_bist_mode12:1;
unsigned int     gpu_sc1_bist_mode11:1;
unsigned int     gpu_sc1_bist_mode10:1;
unsigned int     gpu_sc1_bist_mode9:1;
unsigned int     gpu_sc1_bist_mode8:1;
unsigned int     gpu_sc1_bist_mode7:1;
unsigned int     gpu_sc1_bist_mode6:1;
unsigned int     gpu_sc1_bist_mode5:1;
unsigned int     gpu_sc1_bist_mode3:1;
unsigned int     gpu_sc1_bist_mode2:1;
}BIST_MODE2;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     gpu_sc2_bist_mode14:1;
unsigned int     gpu_sc2_bist_mode13:1;
unsigned int     gpu_sc2_bist_mode12:1;
unsigned int     gpu_sc2_bist_mode11:1;
unsigned int     gpu_sc2_bist_mode10:1;
unsigned int     gpu_sc2_bist_mode9:1;
unsigned int     gpu_sc2_bist_mode8:1;
unsigned int     gpu_sc2_bist_mode7:1;
unsigned int     gpu_sc2_bist_mode6:1;
unsigned int     gpu_sc2_bist_mode5:1;
unsigned int     gpu_sc2_bist_mode3:1;
unsigned int     gpu_sc2_bist_mode2:1;
}BIST_MODE3;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     gpu_pg_test_mode21:1;
unsigned int     gpu_l2_drf_resume20:1;
unsigned int     gpu_l2_drf_resume18:1;
unsigned int     gpu_l2_drf_resume17:1;
unsigned int     gpu_cg_drf_resume16:1;
unsigned int     gpu_cg_drf_resume15:1;
unsigned int     gpu_jm_drf_resume1:1;
unsigned int     gpu_l2_drf_bisr_mode20:1;
unsigned int     gpu_l2_drf_bist_mode18:1;
unsigned int     gpu_l2_drf_bist_mode17:1;
unsigned int     gpu_cg_drf_bist_mode16:1;
unsigned int     gpu_cg_drf_bist_mode15:1;
unsigned int     gpu_jm_drf_bist_mode1:1;
}DRF_BIST_MODE0;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     gpu_sc0_drf_resume14:1;
unsigned int     gpu_sc0_drf_resume13:1;
unsigned int     gpu_sc0_drf_resume12:1;
unsigned int     gpu_sc0_drf_resume11:1;
unsigned int     gpu_sc0_drf_resume10:1;
unsigned int     gpu_sc0_drf_resume9:1;
unsigned int     gpu_sc0_drf_resume8:1;
unsigned int     gpu_sc0_drf_resume7:1;
unsigned int     gpu_sc0_drf_resume6:1;
unsigned int     gpu_sc0_drf_resume5:1;
unsigned int     gpu_sc0_drf_resume3:1;
unsigned int     gpu_sc0_drf_resume2:1;
unsigned int     gpu_sc0_drf_bist_mode14:1;
unsigned int     gpu_sc0_drf_bist_mode13:1;
unsigned int     gpu_sc0_drf_bist_mode12:1;
unsigned int     gpu_sc0_drf_bist_mode11:1;
unsigned int     gpu_sc0_drf_bist_mode10:1;
unsigned int     gpu_sc0_drf_bist_mode9:1;
unsigned int     gpu_sc0_drf_bist_mode8:1;
unsigned int     gpu_sc0_drf_bist_mode7:1;
unsigned int     gpu_sc0_drf_bist_mode6:1;
unsigned int     gpu_sc0_drf_bist_mode5:1;
unsigned int     gpu_sc0_drf_bist_mode3:1;
unsigned int     gpu_sc0_drf_bist_mode2:1;
}DRF_BIST_MODE1;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     gpu_sc1_drf_resume14:1;
unsigned int     gpu_sc1_drf_resume13:1;
unsigned int     gpu_sc1_drf_resume12:1;
unsigned int     gpu_sc1_drf_resume11:1;
unsigned int     gpu_sc1_drf_resume10:1;
unsigned int     gpu_sc1_drf_resume9:1;
unsigned int     gpu_sc1_drf_resume8:1;
unsigned int     gpu_sc1_drf_resume7:1;
unsigned int     gpu_sc1_drf_resume6:1;
unsigned int     gpu_sc1_drf_resume5:1;
unsigned int     gpu_sc1_drf_resume3:1;
unsigned int     gpu_sc1_drf_resume2:1;
unsigned int     gpu_sc1_drf_bist_mode14:1;
unsigned int     gpu_sc1_drf_bist_mode13:1;
unsigned int     gpu_sc1_drf_bist_mode12:1;
unsigned int     gpu_sc1_drf_bist_mode11:1;
unsigned int     gpu_sc1_drf_bist_mode10:1;
unsigned int     gpu_sc1_drf_bist_mode9:1;
unsigned int     gpu_sc1_drf_bist_mode8:1;
unsigned int     gpu_sc1_drf_bist_mode7:1;
unsigned int     gpu_sc1_drf_bist_mode6:1;
unsigned int     gpu_sc1_drf_bist_mode5:1;
unsigned int     gpu_sc1_drf_bist_mode3:1;
unsigned int     gpu_sc1_drf_bist_mode2:1;
}DRF_BIST_MODE2;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     gpu_sc2_drf_resume14:1;
unsigned int     gpu_sc2_drf_resume13:1;
unsigned int     gpu_sc2_drf_resume12:1;
unsigned int     gpu_sc2_drf_resume11:1;
unsigned int     gpu_sc2_drf_resume10:1;
unsigned int     gpu_sc2_drf_resume9:1;
unsigned int     gpu_sc2_drf_resume8:1;
unsigned int     gpu_sc2_drf_resume7:1;
unsigned int     gpu_sc2_drf_resume6:1;
unsigned int     gpu_sc2_drf_resume5:1;
unsigned int     gpu_sc2_drf_resume3:1;
unsigned int     gpu_sc2_drf_resume2:1;
unsigned int     gpu_sc2_drf_bist_mode14:1;
unsigned int     gpu_sc2_drf_bist_mode13:1;
unsigned int     gpu_sc2_drf_bist_mode12:1;
unsigned int     gpu_sc2_drf_bist_mode11:1;
unsigned int     gpu_sc2_drf_bist_mode10:1;
unsigned int     gpu_sc2_drf_bist_mode9:1;
unsigned int     gpu_sc2_drf_bist_mode8:1;
unsigned int     gpu_sc2_drf_bist_mode7:1;
unsigned int     gpu_sc2_drf_bist_mode6:1;
unsigned int     gpu_sc2_drf_bist_mode5:1;
unsigned int     gpu_sc2_drf_bist_mode3:1;
unsigned int     gpu_sc2_drf_bist_mode2:1;
}DRF_BIST_MODE3;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     gpu_pg_test_done21:1;
unsigned int     gpu_l2_bisr_done20:1;
unsigned int     gpu_l2_bist_done18:1;
unsigned int     gpu_l2_bist_done17:1;
unsigned int     gpu_cg_bist_done16:1;
unsigned int     gpu_cg_bist_done15:1;
unsigned int     gpu_jm_bist_done1:1;
}BIST_DONE0;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     gpu_sc0_bist_done14:1;
unsigned int     gpu_sc0_bist_done13:1;
unsigned int     gpu_sc0_bist_done12:1;
unsigned int     gpu_sc0_bist_done11:1;
unsigned int     gpu_sc0_bist_done10:1;
unsigned int     gpu_sc0_bist_done9:1;
unsigned int     gpu_sc0_bist_done8:1;
unsigned int     gpu_sc0_bist_done7:1;
unsigned int     gpu_sc0_bist_done6:1;
unsigned int     gpu_sc0_bist_done5:1;
unsigned int     gpu_sc0_bist_done3:1;
unsigned int     gpu_sc0_bist_done2:1;
}BIST_DONE1;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     gpu_sc1_bist_done14:1;
unsigned int     gpu_sc1_bist_done13:1;
unsigned int     gpu_sc1_bist_done12:1;
unsigned int     gpu_sc1_bist_done11:1;
unsigned int     gpu_sc1_bist_done10:1;
unsigned int     gpu_sc1_bist_done9:1;
unsigned int     gpu_sc1_bist_done8:1;
unsigned int     gpu_sc1_bist_done7:1;
unsigned int     gpu_sc1_bist_done6:1;
unsigned int     gpu_sc1_bist_done5:1;
unsigned int     gpu_sc1_bist_done3:1;
unsigned int     gpu_sc1_bist_done2:1;
}BIST_DONE2;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     gpu_sc2_bist_done14:1;
unsigned int     gpu_sc2_bist_done13:1;
unsigned int     gpu_sc2_bist_done12:1;
unsigned int     gpu_sc2_bist_done11:1;
unsigned int     gpu_sc2_bist_done10:1;
unsigned int     gpu_sc2_bist_done9:1;
unsigned int     gpu_sc2_bist_done8:1;
unsigned int     gpu_sc2_bist_done7:1;
unsigned int     gpu_sc2_bist_done6:1;
unsigned int     gpu_sc2_bist_done5:1;
unsigned int     gpu_sc2_bist_done3:1;
unsigned int     gpu_sc2_bist_done2:1;
}BIST_DONE3;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     gpu_l2_drf_stpu20:1;
unsigned int     gpu_l2_drf_stpu18:1;
unsigned int     gpu_l2_drf_stpu17:1;
unsigned int     gpu_cg_drf_stpu16:1;
unsigned int     gpu_cg_drf_stpu15:1;
unsigned int     gpu_jm_drf_stpu1:1;
unsigned int     gpu_l2_drf_bisr_done20:1;
unsigned int     gpu_l2_drf_bist_done18:1;
unsigned int     gpu_l2_drf_bist_done17:1;
unsigned int     gpu_cg_drf_bist_done16:1;
unsigned int     gpu_cg_drf_bist_done15:1;
unsigned int     gpu_jm_drf_bist_done1:1;
}DRF_BIST_DONE0;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     gpu_sc0_drf_stpu14:1;
unsigned int     gpu_sc0_drf_stpu13:1;
unsigned int     gpu_sc0_drf_stpu12:1;
unsigned int     gpu_sc0_drf_stpu11:1;
unsigned int     gpu_sc0_drf_stpu10:1;
unsigned int     gpu_sc0_drf_stpu9:1;
unsigned int     gpu_sc0_drf_stpu8:1;
unsigned int     gpu_sc0_drf_stpu7:1;
unsigned int     gpu_sc0_drf_stpu6:1;
unsigned int     gpu_sc0_drf_stpu5:1;
unsigned int     gpu_sc0_drf_stpu3:1;
unsigned int     gpu_sc0_drf_stpu2:1;
unsigned int     gpu_sc0_drf_bist_done14:1;
unsigned int     gpu_sc0_drf_bist_done13:1;
unsigned int     gpu_sc0_drf_bist_done12:1;
unsigned int     gpu_sc0_drf_bist_done11:1;
unsigned int     gpu_sc0_drf_bist_done10:1;
unsigned int     gpu_sc0_drf_bist_done9:1;
unsigned int     gpu_sc0_drf_bist_done8:1;
unsigned int     gpu_sc0_drf_bist_done7:1;
unsigned int     gpu_sc0_drf_bist_done6:1;
unsigned int     gpu_sc0_drf_bist_done5:1;
unsigned int     gpu_sc0_drf_bist_done3:1;
unsigned int     gpu_sc0_drf_bist_done2:1;
}DRF_BIST_DONE1;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     gpu_sc1_drf_stpu14:1;
unsigned int     gpu_sc1_drf_stpu13:1;
unsigned int     gpu_sc1_drf_stpu12:1;
unsigned int     gpu_sc1_drf_stpu11:1;
unsigned int     gpu_sc1_drf_stpu10:1;
unsigned int     gpu_sc1_drf_stpu9:1;
unsigned int     gpu_sc1_drf_stpu8:1;
unsigned int     gpu_sc1_drf_stpu7:1;
unsigned int     gpu_sc1_drf_stpu6:1;
unsigned int     gpu_sc1_drf_stpu5:1;
unsigned int     gpu_sc1_drf_stpu3:1;
unsigned int     gpu_sc1_drf_stpu2:1;
unsigned int     gpu_sc1_drf_bist_done14:1;
unsigned int     gpu_sc1_drf_bist_done13:1;
unsigned int     gpu_sc1_drf_bist_done12:1;
unsigned int     gpu_sc1_drf_bist_done11:1;
unsigned int     gpu_sc1_drf_bist_done10:1;
unsigned int     gpu_sc1_drf_bist_done9:1;
unsigned int     gpu_sc1_drf_bist_done8:1;
unsigned int     gpu_sc1_drf_bist_done7:1;
unsigned int     gpu_sc1_drf_bist_done6:1;
unsigned int     gpu_sc1_drf_bist_done5:1;
unsigned int     gpu_sc1_drf_bist_done3:1;
unsigned int     gpu_sc1_drf_bist_done2:1;
}DRF_BIST_DONE2;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     gpu_sc2_drf_stpu14:1;
unsigned int     gpu_sc2_drf_stpu13:1;
unsigned int     gpu_sc2_drf_stpu12:1;
unsigned int     gpu_sc2_drf_stpu11:1;
unsigned int     gpu_sc2_drf_stpu10:1;
unsigned int     gpu_sc2_drf_stpu9:1;
unsigned int     gpu_sc2_drf_stpu8:1;
unsigned int     gpu_sc2_drf_stpu7:1;
unsigned int     gpu_sc2_drf_stpu6:1;
unsigned int     gpu_sc2_drf_stpu5:1;
unsigned int     gpu_sc2_drf_stpu3:1;
unsigned int     gpu_sc2_drf_stpu2:1;
unsigned int     gpu_sc2_drf_bist_done14:1;
unsigned int     gpu_sc2_drf_bist_done13:1;
unsigned int     gpu_sc2_drf_bist_done12:1;
unsigned int     gpu_sc2_drf_bist_done11:1;
unsigned int     gpu_sc2_drf_bist_done10:1;
unsigned int     gpu_sc2_drf_bist_done9:1;
unsigned int     gpu_sc2_drf_bist_done8:1;
unsigned int     gpu_sc2_drf_bist_done7:1;
unsigned int     gpu_sc2_drf_bist_done6:1;
unsigned int     gpu_sc2_drf_bist_done5:1;
unsigned int     gpu_sc2_drf_bist_done3:1;
unsigned int     gpu_sc2_drf_bist_done2:1;
}DRF_BIST_DONE3;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     gpu_l2_bist_fail17:10;
unsigned int     gpu_cg_bist_fail16:7;
unsigned int     gpu_cg_bist_fail15:7;
unsigned int     gpu_jm_bist_fail1:2;
}BIST_RESULT0;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     gpu_l2_bist_fail18:9;
unsigned int     gpu_l2_bisr_fail20:4;
}BIST_RESULT1;

typedef struct 
{
unsigned int     gpu_sc0_bist_fail6:4;
unsigned int     gpu_sc0_bist_fail5:10;
unsigned int     gpu_sc0_bist_fail3:8;
unsigned int     gpu_sc0_bist_fail2:10;
}BIST_RESULT2;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     gpu_sc0_bist_fail10:4;
unsigned int     gpu_sc0_bist_fail9:10;
unsigned int     gpu_sc0_bist_fail8:4;
unsigned int     gpu_sc0_bist_fail7:10;
}BIST_RESULT3;

typedef struct 
{
unsigned int     reserved_0:12;
unsigned int     gpu_sc0_bist_fail11:10;
unsigned int     gpu_sc0_bist_fail12:4;
unsigned int     gpu_sc0_bist_fail13:4;
unsigned int     gpu_sc0_bist_fail14:2;
}BIST_RESULT4;

typedef struct 
{
unsigned int     gpu_sc1_bist_fail6:4;
unsigned int     gpu_sc1_bist_fail5:10;
unsigned int     gpu_sc1_bist_fail3:8;
unsigned int     gpu_sc1_bist_fail2:10;
}BIST_RESULT5;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     gpu_sc1_bist_fail10:4;
unsigned int     gpu_sc1_bist_fail9:10;
unsigned int     gpu_sc1_bist_fail8:4;
unsigned int     gpu_sc1_bist_fail7:10;
}BIST_RESULT6;

typedef struct 
{
unsigned int     reserved_0:12;
unsigned int     gpu_sc1_bist_fail11:10;
unsigned int     gpu_sc1_bist_fail12:4;
unsigned int     gpu_sc1_bist_fail13:4;
unsigned int     gpu_sc1_bist_fail14:2;
}BIST_RESULT7;

typedef struct 
{
unsigned int     gpu_sc2_bist_fail6:4;
unsigned int     gpu_sc2_bist_fail5:10;
unsigned int     gpu_sc2_bist_fail3:8;
unsigned int     gpu_sc2_bist_fail2:10;
}BIST_RESULT8;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     gpu_sc2_bist_fail10:4;
unsigned int     gpu_sc2_bist_fail9:10;
unsigned int     gpu_sc2_bist_fail8:4;
unsigned int     gpu_sc2_bist_fail7:10;
}BIST_RESULT9;

typedef struct 
{
unsigned int     reserved_0:12;
unsigned int     gpu_sc2_bist_fail11:10;
unsigned int     gpu_sc2_bist_fail12:4;
unsigned int     gpu_sc2_bist_fail13:4;
unsigned int     gpu_sc2_bist_fail14:2;
}BIST_RESULT10;

typedef struct 
{
unsigned int     reserved_0:6;
unsigned int     gpu_l2_drf_bist_fail17:10;
unsigned int     gpu_cg_drf_bist_fail16:7;
unsigned int     gpu_cg_drf_bist_fail15:7;
unsigned int     gpu_jmdrf_bist_fail1:2;
}DRF_BIST_RESULT0;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     gpu_l2_drf_bist_fail18:9;
unsigned int     gpu_l2_drf_bist_fail20:4;
}DRF_BIST_RESULT1;

typedef struct 
{
unsigned int     gpu_sc0_drf_bist_fail6:4;
unsigned int     gpu_sc0_drf_bist_fail5:10;
unsigned int     gpu_sc0_drf_bist_fail3:8;
unsigned int     gpu_sc0_drf_bist_fail2:10;
}DRF_BIST_RESULT2;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     gpu_sc0_drf_bist_fail10:4;
unsigned int     gpu_sc0_drf_bist_fail9:10;
unsigned int     gpu_sc0_drf_bist_fail8:4;
unsigned int     gpu_sc0_drf_bist_fail7:10;
}DRF_BIST_RESULT3;

typedef struct 
{
unsigned int     reserved_0:12;
unsigned int     gpu_sc0_drf_bist_fail11:10;
unsigned int     gpu_sc0_drf_bist_fail12:4;
unsigned int     gpu_sc0_drf_bist_fail13:4;
unsigned int     gpu_sc0_drf_bist_fail14:2;
}DRF_BIST_RESULT4;

typedef struct 
{
unsigned int     gpu_sc1_drf_bist_fail6:4;
unsigned int     gpu_sc1_drf_bist_fail5:10;
unsigned int     gpu_sc1_drf_bist_fail3:8;
unsigned int     gpu_sc1_drf_bist_fail2:10;
}DRF_BIST_RESULT5;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     gpu_sc1_drf_bist_fail10:4;
unsigned int     gpu_sc1_drf_bist_fail9:10;
unsigned int     gpu_sc1_drf_bist_fail8:4;
unsigned int     gpu_sc1_drf_bist_fail7:10;
}DRF_BIST_RESULT6;

typedef struct 
{
unsigned int     reserved_0:12;
unsigned int     gpu_sc1_drf_bist_fail11:10;
unsigned int     gpu_sc1_drf_bist_fail12:4;
unsigned int     gpu_sc1_drf_bist_fail13:4;
unsigned int     gpu_sc1_drf_bist_fail14:2;
}DRF_BIST_RESULT7;

typedef struct 
{
unsigned int     gpu_sc2_drf_bist_fail6:4;
unsigned int     gpu_sc2_drf_bist_fail5:10;
unsigned int     gpu_sc2_drf_bist_fail3:8;
unsigned int     gpu_sc2_drf_bist_fail2:10;
}DRF_BIST_RESULT8;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     gpu_sc2_drf_bist_fail10:4;
unsigned int     gpu_sc2_drf_bist_fail9:10;
unsigned int     gpu_sc2_drf_bist_fail8:4;
unsigned int     gpu_sc2_drf_bist_fail7:10;
}DRF_BIST_RESULT9;

typedef struct 
{
unsigned int     reserved_0:12;
unsigned int     gpu_sc2_drf_bist_fail11:10;
unsigned int     gpu_sc2_drf_bist_fail12:4;
unsigned int     gpu_sc2_drf_bist_fail13:4;
unsigned int     gpu_sc2_drf_bist_fail14:2;
}DRF_BIST_RESULT10;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     sc2_pg_test_fail21:2;
unsigned int     sc1_pg_test_fail21:2;
unsigned int     sc0_pg_test_fail21:2;
unsigned int     gpu_pg_test_fail21:2;
}BIST_RESULT11;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     sc_bisr_repaired:1;
unsigned int     sc_bisr_second_run_en:1;
unsigned int     sc_bisr_hold_remap:1;
unsigned int     sc_bisr_pwr_rstn:1;
unsigned int     sc_bisr_rstn:1;
}BISR0;

typedef struct 
{
unsigned int     sc_bisr_out:32;
}BISR1;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     gpu_sc2_rm:4;
unsigned int     gpu_sc1_rm:4;
unsigned int     gpu_sc0_rm:4;
unsigned int     gpu_l2_rm:4;
unsigned int     gpu_cg_rm:4;
unsigned int     gpu_jm_rm:4;
unsigned int     gpu_sc2_rme:1;
unsigned int     gpu_sc1_rme:1;
unsigned int     gpu_sc0_rme:1;
unsigned int     gpu_l2_rme:1;
unsigned int     gpu_cg_rme:1;
unsigned int     gpu_jm_rme:1;
}SRAM_RM;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     dbg_sel:1;
unsigned int     dbg_sel1:4;
unsigned int     dbg_sel0:4;
}DEBUGPORTS;

typedef struct 
{
unsigned int     dummy_reg0:32;
}DUMMYREGISTERS0;

typedef struct 
{
unsigned int     dummy_reg1:32;
}DUMMYREGISTERS1;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     clk_gate_dbus_dis:1;
}CLK_GATING;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     c30_data_in:20;
unsigned int     reserved_1:2;
unsigned int     c30_speed_en:1;
unsigned int     c30_wire_sel:1;
unsigned int     c30_ro_sel:3;
unsigned int     c30_dss_rst_n:1;
}DSS_C30_7T_CTRL;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     c30_count_out:20;
unsigned int     reserved_1:2;
unsigned int     c30_wsort_go:1;
unsigned int     c30_ready:1;
}DSS_C30_7T_STATUS;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     c30_dbgo:16;
}DSS_C30_7T_DEBUG;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     c35_data_in:20;
unsigned int     reserved_1:2;
unsigned int     c35_speed_en:1;
unsigned int     c35_wire_sel:1;
unsigned int     c35_ro_sel:3;
unsigned int     c35_dss_rst_n:1;
}DSS_C35_7T_CTRL;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     c35_count_out:20;
unsigned int     reserved_1:2;
unsigned int     c35_wsort_go:1;
unsigned int     c35_ready:1;
}DSS_C35_7T_STATUS;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     c35_dbgo:16;
}DSS_C35_7T_DEBUG;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     c40_data_in:20;
unsigned int     reserved_1:2;
unsigned int     c40_speed_en:1;
unsigned int     c40_wire_sel:1;
unsigned int     c40_ro_sel:3;
unsigned int     c40_dss_rst_n:1;
}DSS_C40_7T_CTRL;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     c40_count_out:20;
unsigned int     reserved_1:2;
unsigned int     c40_wsort_go:1;
unsigned int     c40_ready:1;
}DSS_C40_7T_STATUS;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     c40_dbgo:16;
}DSS_C40_7T_DEBUG;

typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     gpu_sc2_ls:1;
unsigned int     gpu_sc1_ls:1;
unsigned int     gpu_sc0_ls:1;
unsigned int     gpu_l2_ls:1;
unsigned int     gpu_cg_ls:1;
unsigned int     gpu_jm_ls:1;
}SRAM_LS;

typedef struct 
{
unsigned int     core0_L2H_DELAY_CYCLE:32;
}CORE0_POWER_SWITCH1;

typedef struct 
{
unsigned int     core0_H2L_DELAY_CYCLE:32;
}CORE0_POWER_SWITCH2;

typedef struct 
{
unsigned int     core0_SD_REG:32;
}CORE0_POWER_SWITCH3;

typedef struct 
{
unsigned int     core0_MUX_REG:32;
}CORE0_POWER_SWITCH4;

typedef struct 
{
unsigned int     core0_CTRL:32;
}CORE0_POWER_SWITCH5;

typedef struct 
{
unsigned int     core0_last_delay_cycle:32;
}CORE0_POWER_SWITCH6;

typedef struct 
{
unsigned int     core0_pg_switch_info:32;
}CORE0_POWER_SWITCH7;

typedef struct 
{
unsigned int     core0_isolation_threshold:32;
}CORE0_POWER_SWITCH8;

typedef struct 
{
unsigned int     core0_reset_threshold:32;
}CORE0_POWER_SWITCH9;

typedef struct 
{
unsigned int     core1_L2H_DELAY_CYCLE:32;
}CORE1_POWER_SWITCH1;

typedef struct 
{
unsigned int     core1_H2L_DELAY_CYCLE:32;
}CORE1_POWER_SWITCH2;

typedef struct 
{
unsigned int     core1_SD_REG:32;
}CORE1_POWER_SWITCH3;

typedef struct 
{
unsigned int     core1_MUX_REG:32;
}CORE1_POWER_SWITCH4;

typedef struct 
{
unsigned int     core1_CTRL:32;
}CORE1_POWER_SWITCH5;

typedef struct 
{
unsigned int     core1_last_delay_cycle:32;
}CORE1_POWER_SWITCH6;

typedef struct 
{
unsigned int     core1_pg_switch_info:32;
}CORE1_POWER_SWITCH7;

typedef struct 
{
unsigned int     core1_isolation_threshold:32;
}CORE1_POWER_SWITCH8;

typedef struct 
{
unsigned int     core1_reset_threshold:32;
}CORE1_POWER_SWITCH9;

typedef struct 
{
unsigned int     core2_L2H_DELAY_CYCLE:32;
}CORE2_POWER_SWITCH1;

typedef struct 
{
unsigned int     core2_H2L_DELAY_CYCLE:32;
}CORE2_POWER_SWITCH2;

typedef struct 
{
unsigned int     core2_SD_REG:32;
}CORE2_POWER_SWITCH3;

typedef struct 
{
unsigned int     core2_MUX_REG:32;
}CORE2_POWER_SWITCH4;

typedef struct 
{
unsigned int     core2_CTRL:32;
}CORE2_POWER_SWITCH5;

typedef struct 
{
unsigned int     core2_last_delay_cycle:32;
}CORE2_POWER_SWITCH6;

typedef struct 
{
unsigned int     core2_pg_switch_info:32;
}CORE2_POWER_SWITCH7;

typedef struct 
{
unsigned int     core2_isolation_threshold:32;
}CORE2_POWER_SWITCH8;

typedef struct 
{
unsigned int     core2_reset_threshold:32;
}CORE2_POWER_SWITCH9;

#endif

#define BIST_MODE0                                                                   0x98054000
#define BIST_MODE0_reg_addr                                                          "0xD8054000"
#define BIST_MODE0_reg                                                               0xD8054000
#define set_BIST_MODE0_reg(data)   (*((volatile unsigned int*) BIST_MODE0_reg)=data)
#define get_BIST_MODE0_reg   (*((volatile unsigned int*) BIST_MODE0_reg))
#define BIST_MODE0_inst_adr                                                          "0x0000"
#define BIST_MODE0_inst                                                              0x0000
#define BIST_MODE0_gpu_l2_bisr_mode20_shift                                          (5)
#define BIST_MODE0_gpu_l2_bisr_mode20_mask                                           (0x00000020)
#define BIST_MODE0_gpu_l2_bisr_mode20(data)                                          (0x00000020&((data)<<5))
#define BIST_MODE0_gpu_l2_bisr_mode20_src(data)                                      ((0x00000020&(data))>>5)
#define BIST_MODE0_get_gpu_l2_bisr_mode20(data)                                      ((0x00000020&(data))>>5)
#define BIST_MODE0_gpu_l2_bist_mode18_shift                                          (4)
#define BIST_MODE0_gpu_l2_bist_mode18_mask                                           (0x00000010)
#define BIST_MODE0_gpu_l2_bist_mode18(data)                                          (0x00000010&((data)<<4))
#define BIST_MODE0_gpu_l2_bist_mode18_src(data)                                      ((0x00000010&(data))>>4)
#define BIST_MODE0_get_gpu_l2_bist_mode18(data)                                      ((0x00000010&(data))>>4)
#define BIST_MODE0_gpu_l2_bist_mode17_shift                                          (3)
#define BIST_MODE0_gpu_l2_bist_mode17_mask                                           (0x00000008)
#define BIST_MODE0_gpu_l2_bist_mode17(data)                                          (0x00000008&((data)<<3))
#define BIST_MODE0_gpu_l2_bist_mode17_src(data)                                      ((0x00000008&(data))>>3)
#define BIST_MODE0_get_gpu_l2_bist_mode17(data)                                      ((0x00000008&(data))>>3)
#define BIST_MODE0_gpu_cg_bist_mode16_shift                                          (2)
#define BIST_MODE0_gpu_cg_bist_mode16_mask                                           (0x00000004)
#define BIST_MODE0_gpu_cg_bist_mode16(data)                                          (0x00000004&((data)<<2))
#define BIST_MODE0_gpu_cg_bist_mode16_src(data)                                      ((0x00000004&(data))>>2)
#define BIST_MODE0_get_gpu_cg_bist_mode16(data)                                      ((0x00000004&(data))>>2)
#define BIST_MODE0_gpu_cg_bist_mode15_shift                                          (1)
#define BIST_MODE0_gpu_cg_bist_mode15_mask                                           (0x00000002)
#define BIST_MODE0_gpu_cg_bist_mode15(data)                                          (0x00000002&((data)<<1))
#define BIST_MODE0_gpu_cg_bist_mode15_src(data)                                      ((0x00000002&(data))>>1)
#define BIST_MODE0_get_gpu_cg_bist_mode15(data)                                      ((0x00000002&(data))>>1)
#define BIST_MODE0_gpu_jm_bist_mode1_shift                                           (0)
#define BIST_MODE0_gpu_jm_bist_mode1_mask                                            (0x00000001)
#define BIST_MODE0_gpu_jm_bist_mode1(data)                                           (0x00000001&((data)<<0))
#define BIST_MODE0_gpu_jm_bist_mode1_src(data)                                       ((0x00000001&(data))>>0)
#define BIST_MODE0_get_gpu_jm_bist_mode1(data)                                       ((0x00000001&(data))>>0)


#define BIST_MODE1                                                                   0x98054004
#define BIST_MODE1_reg_addr                                                          "0xD8054004"
#define BIST_MODE1_reg                                                               0xD8054004
#define set_BIST_MODE1_reg(data)   (*((volatile unsigned int*) BIST_MODE1_reg)=data)
#define get_BIST_MODE1_reg   (*((volatile unsigned int*) BIST_MODE1_reg))
#define BIST_MODE1_inst_adr                                                          "0x0001"
#define BIST_MODE1_inst                                                              0x0001
#define BIST_MODE1_gpu_sc0_bist_mode14_shift                                         (11)
#define BIST_MODE1_gpu_sc0_bist_mode14_mask                                          (0x00000800)
#define BIST_MODE1_gpu_sc0_bist_mode14(data)                                         (0x00000800&((data)<<11))
#define BIST_MODE1_gpu_sc0_bist_mode14_src(data)                                     ((0x00000800&(data))>>11)
#define BIST_MODE1_get_gpu_sc0_bist_mode14(data)                                     ((0x00000800&(data))>>11)
#define BIST_MODE1_gpu_sc0_bist_mode13_shift                                         (10)
#define BIST_MODE1_gpu_sc0_bist_mode13_mask                                          (0x00000400)
#define BIST_MODE1_gpu_sc0_bist_mode13(data)                                         (0x00000400&((data)<<10))
#define BIST_MODE1_gpu_sc0_bist_mode13_src(data)                                     ((0x00000400&(data))>>10)
#define BIST_MODE1_get_gpu_sc0_bist_mode13(data)                                     ((0x00000400&(data))>>10)
#define BIST_MODE1_gpu_sc0_bist_mode12_shift                                         (9)
#define BIST_MODE1_gpu_sc0_bist_mode12_mask                                          (0x00000200)
#define BIST_MODE1_gpu_sc0_bist_mode12(data)                                         (0x00000200&((data)<<9))
#define BIST_MODE1_gpu_sc0_bist_mode12_src(data)                                     ((0x00000200&(data))>>9)
#define BIST_MODE1_get_gpu_sc0_bist_mode12(data)                                     ((0x00000200&(data))>>9)
#define BIST_MODE1_gpu_sc0_bist_mode11_shift                                         (8)
#define BIST_MODE1_gpu_sc0_bist_mode11_mask                                          (0x00000100)
#define BIST_MODE1_gpu_sc0_bist_mode11(data)                                         (0x00000100&((data)<<8))
#define BIST_MODE1_gpu_sc0_bist_mode11_src(data)                                     ((0x00000100&(data))>>8)
#define BIST_MODE1_get_gpu_sc0_bist_mode11(data)                                     ((0x00000100&(data))>>8)
#define BIST_MODE1_gpu_sc0_bist_mode10_shift                                         (7)
#define BIST_MODE1_gpu_sc0_bist_mode10_mask                                          (0x00000080)
#define BIST_MODE1_gpu_sc0_bist_mode10(data)                                         (0x00000080&((data)<<7))
#define BIST_MODE1_gpu_sc0_bist_mode10_src(data)                                     ((0x00000080&(data))>>7)
#define BIST_MODE1_get_gpu_sc0_bist_mode10(data)                                     ((0x00000080&(data))>>7)
#define BIST_MODE1_gpu_sc0_bist_mode9_shift                                          (6)
#define BIST_MODE1_gpu_sc0_bist_mode9_mask                                           (0x00000040)
#define BIST_MODE1_gpu_sc0_bist_mode9(data)                                          (0x00000040&((data)<<6))
#define BIST_MODE1_gpu_sc0_bist_mode9_src(data)                                      ((0x00000040&(data))>>6)
#define BIST_MODE1_get_gpu_sc0_bist_mode9(data)                                      ((0x00000040&(data))>>6)
#define BIST_MODE1_gpu_sc0_bist_mode8_shift                                          (5)
#define BIST_MODE1_gpu_sc0_bist_mode8_mask                                           (0x00000020)
#define BIST_MODE1_gpu_sc0_bist_mode8(data)                                          (0x00000020&((data)<<5))
#define BIST_MODE1_gpu_sc0_bist_mode8_src(data)                                      ((0x00000020&(data))>>5)
#define BIST_MODE1_get_gpu_sc0_bist_mode8(data)                                      ((0x00000020&(data))>>5)
#define BIST_MODE1_gpu_sc0_bist_mode7_shift                                          (4)
#define BIST_MODE1_gpu_sc0_bist_mode7_mask                                           (0x00000010)
#define BIST_MODE1_gpu_sc0_bist_mode7(data)                                          (0x00000010&((data)<<4))
#define BIST_MODE1_gpu_sc0_bist_mode7_src(data)                                      ((0x00000010&(data))>>4)
#define BIST_MODE1_get_gpu_sc0_bist_mode7(data)                                      ((0x00000010&(data))>>4)
#define BIST_MODE1_gpu_sc0_bist_mode6_shift                                          (3)
#define BIST_MODE1_gpu_sc0_bist_mode6_mask                                           (0x00000008)
#define BIST_MODE1_gpu_sc0_bist_mode6(data)                                          (0x00000008&((data)<<3))
#define BIST_MODE1_gpu_sc0_bist_mode6_src(data)                                      ((0x00000008&(data))>>3)
#define BIST_MODE1_get_gpu_sc0_bist_mode6(data)                                      ((0x00000008&(data))>>3)
#define BIST_MODE1_gpu_sc0_bist_mode5_shift                                          (2)
#define BIST_MODE1_gpu_sc0_bist_mode5_mask                                           (0x00000004)
#define BIST_MODE1_gpu_sc0_bist_mode5(data)                                          (0x00000004&((data)<<2))
#define BIST_MODE1_gpu_sc0_bist_mode5_src(data)                                      ((0x00000004&(data))>>2)
#define BIST_MODE1_get_gpu_sc0_bist_mode5(data)                                      ((0x00000004&(data))>>2)
#define BIST_MODE1_gpu_sc0_bist_mode3_shift                                          (1)
#define BIST_MODE1_gpu_sc0_bist_mode3_mask                                           (0x00000002)
#define BIST_MODE1_gpu_sc0_bist_mode3(data)                                          (0x00000002&((data)<<1))
#define BIST_MODE1_gpu_sc0_bist_mode3_src(data)                                      ((0x00000002&(data))>>1)
#define BIST_MODE1_get_gpu_sc0_bist_mode3(data)                                      ((0x00000002&(data))>>1)
#define BIST_MODE1_gpu_sc0_bist_mode2_shift                                          (0)
#define BIST_MODE1_gpu_sc0_bist_mode2_mask                                           (0x00000001)
#define BIST_MODE1_gpu_sc0_bist_mode2(data)                                          (0x00000001&((data)<<0))
#define BIST_MODE1_gpu_sc0_bist_mode2_src(data)                                      ((0x00000001&(data))>>0)
#define BIST_MODE1_get_gpu_sc0_bist_mode2(data)                                      ((0x00000001&(data))>>0)


#define BIST_MODE2                                                                   0x98054008
#define BIST_MODE2_reg_addr                                                          "0xD8054008"
#define BIST_MODE2_reg                                                               0xD8054008
#define set_BIST_MODE2_reg(data)   (*((volatile unsigned int*) BIST_MODE2_reg)=data)
#define get_BIST_MODE2_reg   (*((volatile unsigned int*) BIST_MODE2_reg))
#define BIST_MODE2_inst_adr                                                          "0x0002"
#define BIST_MODE2_inst                                                              0x0002
#define BIST_MODE2_gpu_sc1_bist_mode14_shift                                         (11)
#define BIST_MODE2_gpu_sc1_bist_mode14_mask                                          (0x00000800)
#define BIST_MODE2_gpu_sc1_bist_mode14(data)                                         (0x00000800&((data)<<11))
#define BIST_MODE2_gpu_sc1_bist_mode14_src(data)                                     ((0x00000800&(data))>>11)
#define BIST_MODE2_get_gpu_sc1_bist_mode14(data)                                     ((0x00000800&(data))>>11)
#define BIST_MODE2_gpu_sc1_bist_mode13_shift                                         (10)
#define BIST_MODE2_gpu_sc1_bist_mode13_mask                                          (0x00000400)
#define BIST_MODE2_gpu_sc1_bist_mode13(data)                                         (0x00000400&((data)<<10))
#define BIST_MODE2_gpu_sc1_bist_mode13_src(data)                                     ((0x00000400&(data))>>10)
#define BIST_MODE2_get_gpu_sc1_bist_mode13(data)                                     ((0x00000400&(data))>>10)
#define BIST_MODE2_gpu_sc1_bist_mode12_shift                                         (9)
#define BIST_MODE2_gpu_sc1_bist_mode12_mask                                          (0x00000200)
#define BIST_MODE2_gpu_sc1_bist_mode12(data)                                         (0x00000200&((data)<<9))
#define BIST_MODE2_gpu_sc1_bist_mode12_src(data)                                     ((0x00000200&(data))>>9)
#define BIST_MODE2_get_gpu_sc1_bist_mode12(data)                                     ((0x00000200&(data))>>9)
#define BIST_MODE2_gpu_sc1_bist_mode11_shift                                         (8)
#define BIST_MODE2_gpu_sc1_bist_mode11_mask                                          (0x00000100)
#define BIST_MODE2_gpu_sc1_bist_mode11(data)                                         (0x00000100&((data)<<8))
#define BIST_MODE2_gpu_sc1_bist_mode11_src(data)                                     ((0x00000100&(data))>>8)
#define BIST_MODE2_get_gpu_sc1_bist_mode11(data)                                     ((0x00000100&(data))>>8)
#define BIST_MODE2_gpu_sc1_bist_mode10_shift                                         (7)
#define BIST_MODE2_gpu_sc1_bist_mode10_mask                                          (0x00000080)
#define BIST_MODE2_gpu_sc1_bist_mode10(data)                                         (0x00000080&((data)<<7))
#define BIST_MODE2_gpu_sc1_bist_mode10_src(data)                                     ((0x00000080&(data))>>7)
#define BIST_MODE2_get_gpu_sc1_bist_mode10(data)                                     ((0x00000080&(data))>>7)
#define BIST_MODE2_gpu_sc1_bist_mode9_shift                                          (6)
#define BIST_MODE2_gpu_sc1_bist_mode9_mask                                           (0x00000040)
#define BIST_MODE2_gpu_sc1_bist_mode9(data)                                          (0x00000040&((data)<<6))
#define BIST_MODE2_gpu_sc1_bist_mode9_src(data)                                      ((0x00000040&(data))>>6)
#define BIST_MODE2_get_gpu_sc1_bist_mode9(data)                                      ((0x00000040&(data))>>6)
#define BIST_MODE2_gpu_sc1_bist_mode8_shift                                          (5)
#define BIST_MODE2_gpu_sc1_bist_mode8_mask                                           (0x00000020)
#define BIST_MODE2_gpu_sc1_bist_mode8(data)                                          (0x00000020&((data)<<5))
#define BIST_MODE2_gpu_sc1_bist_mode8_src(data)                                      ((0x00000020&(data))>>5)
#define BIST_MODE2_get_gpu_sc1_bist_mode8(data)                                      ((0x00000020&(data))>>5)
#define BIST_MODE2_gpu_sc1_bist_mode7_shift                                          (4)
#define BIST_MODE2_gpu_sc1_bist_mode7_mask                                           (0x00000010)
#define BIST_MODE2_gpu_sc1_bist_mode7(data)                                          (0x00000010&((data)<<4))
#define BIST_MODE2_gpu_sc1_bist_mode7_src(data)                                      ((0x00000010&(data))>>4)
#define BIST_MODE2_get_gpu_sc1_bist_mode7(data)                                      ((0x00000010&(data))>>4)
#define BIST_MODE2_gpu_sc1_bist_mode6_shift                                          (3)
#define BIST_MODE2_gpu_sc1_bist_mode6_mask                                           (0x00000008)
#define BIST_MODE2_gpu_sc1_bist_mode6(data)                                          (0x00000008&((data)<<3))
#define BIST_MODE2_gpu_sc1_bist_mode6_src(data)                                      ((0x00000008&(data))>>3)
#define BIST_MODE2_get_gpu_sc1_bist_mode6(data)                                      ((0x00000008&(data))>>3)
#define BIST_MODE2_gpu_sc1_bist_mode5_shift                                          (2)
#define BIST_MODE2_gpu_sc1_bist_mode5_mask                                           (0x00000004)
#define BIST_MODE2_gpu_sc1_bist_mode5(data)                                          (0x00000004&((data)<<2))
#define BIST_MODE2_gpu_sc1_bist_mode5_src(data)                                      ((0x00000004&(data))>>2)
#define BIST_MODE2_get_gpu_sc1_bist_mode5(data)                                      ((0x00000004&(data))>>2)
#define BIST_MODE2_gpu_sc1_bist_mode3_shift                                          (1)
#define BIST_MODE2_gpu_sc1_bist_mode3_mask                                           (0x00000002)
#define BIST_MODE2_gpu_sc1_bist_mode3(data)                                          (0x00000002&((data)<<1))
#define BIST_MODE2_gpu_sc1_bist_mode3_src(data)                                      ((0x00000002&(data))>>1)
#define BIST_MODE2_get_gpu_sc1_bist_mode3(data)                                      ((0x00000002&(data))>>1)
#define BIST_MODE2_gpu_sc1_bist_mode2_shift                                          (0)
#define BIST_MODE2_gpu_sc1_bist_mode2_mask                                           (0x00000001)
#define BIST_MODE2_gpu_sc1_bist_mode2(data)                                          (0x00000001&((data)<<0))
#define BIST_MODE2_gpu_sc1_bist_mode2_src(data)                                      ((0x00000001&(data))>>0)
#define BIST_MODE2_get_gpu_sc1_bist_mode2(data)                                      ((0x00000001&(data))>>0)


#define BIST_MODE3                                                                   0x9805400C
#define BIST_MODE3_reg_addr                                                          "0xD805400C"
#define BIST_MODE3_reg                                                               0xD805400C
#define set_BIST_MODE3_reg(data)   (*((volatile unsigned int*) BIST_MODE3_reg)=data)
#define get_BIST_MODE3_reg   (*((volatile unsigned int*) BIST_MODE3_reg))
#define BIST_MODE3_inst_adr                                                          "0x0003"
#define BIST_MODE3_inst                                                              0x0003
#define BIST_MODE3_gpu_sc2_bist_mode14_shift                                         (11)
#define BIST_MODE3_gpu_sc2_bist_mode14_mask                                          (0x00000800)
#define BIST_MODE3_gpu_sc2_bist_mode14(data)                                         (0x00000800&((data)<<11))
#define BIST_MODE3_gpu_sc2_bist_mode14_src(data)                                     ((0x00000800&(data))>>11)
#define BIST_MODE3_get_gpu_sc2_bist_mode14(data)                                     ((0x00000800&(data))>>11)
#define BIST_MODE3_gpu_sc2_bist_mode13_shift                                         (10)
#define BIST_MODE3_gpu_sc2_bist_mode13_mask                                          (0x00000400)
#define BIST_MODE3_gpu_sc2_bist_mode13(data)                                         (0x00000400&((data)<<10))
#define BIST_MODE3_gpu_sc2_bist_mode13_src(data)                                     ((0x00000400&(data))>>10)
#define BIST_MODE3_get_gpu_sc2_bist_mode13(data)                                     ((0x00000400&(data))>>10)
#define BIST_MODE3_gpu_sc2_bist_mode12_shift                                         (9)
#define BIST_MODE3_gpu_sc2_bist_mode12_mask                                          (0x00000200)
#define BIST_MODE3_gpu_sc2_bist_mode12(data)                                         (0x00000200&((data)<<9))
#define BIST_MODE3_gpu_sc2_bist_mode12_src(data)                                     ((0x00000200&(data))>>9)
#define BIST_MODE3_get_gpu_sc2_bist_mode12(data)                                     ((0x00000200&(data))>>9)
#define BIST_MODE3_gpu_sc2_bist_mode11_shift                                         (8)
#define BIST_MODE3_gpu_sc2_bist_mode11_mask                                          (0x00000100)
#define BIST_MODE3_gpu_sc2_bist_mode11(data)                                         (0x00000100&((data)<<8))
#define BIST_MODE3_gpu_sc2_bist_mode11_src(data)                                     ((0x00000100&(data))>>8)
#define BIST_MODE3_get_gpu_sc2_bist_mode11(data)                                     ((0x00000100&(data))>>8)
#define BIST_MODE3_gpu_sc2_bist_mode10_shift                                         (7)
#define BIST_MODE3_gpu_sc2_bist_mode10_mask                                          (0x00000080)
#define BIST_MODE3_gpu_sc2_bist_mode10(data)                                         (0x00000080&((data)<<7))
#define BIST_MODE3_gpu_sc2_bist_mode10_src(data)                                     ((0x00000080&(data))>>7)
#define BIST_MODE3_get_gpu_sc2_bist_mode10(data)                                     ((0x00000080&(data))>>7)
#define BIST_MODE3_gpu_sc2_bist_mode9_shift                                          (6)
#define BIST_MODE3_gpu_sc2_bist_mode9_mask                                           (0x00000040)
#define BIST_MODE3_gpu_sc2_bist_mode9(data)                                          (0x00000040&((data)<<6))
#define BIST_MODE3_gpu_sc2_bist_mode9_src(data)                                      ((0x00000040&(data))>>6)
#define BIST_MODE3_get_gpu_sc2_bist_mode9(data)                                      ((0x00000040&(data))>>6)
#define BIST_MODE3_gpu_sc2_bist_mode8_shift                                          (5)
#define BIST_MODE3_gpu_sc2_bist_mode8_mask                                           (0x00000020)
#define BIST_MODE3_gpu_sc2_bist_mode8(data)                                          (0x00000020&((data)<<5))
#define BIST_MODE3_gpu_sc2_bist_mode8_src(data)                                      ((0x00000020&(data))>>5)
#define BIST_MODE3_get_gpu_sc2_bist_mode8(data)                                      ((0x00000020&(data))>>5)
#define BIST_MODE3_gpu_sc2_bist_mode7_shift                                          (4)
#define BIST_MODE3_gpu_sc2_bist_mode7_mask                                           (0x00000010)
#define BIST_MODE3_gpu_sc2_bist_mode7(data)                                          (0x00000010&((data)<<4))
#define BIST_MODE3_gpu_sc2_bist_mode7_src(data)                                      ((0x00000010&(data))>>4)
#define BIST_MODE3_get_gpu_sc2_bist_mode7(data)                                      ((0x00000010&(data))>>4)
#define BIST_MODE3_gpu_sc2_bist_mode6_shift                                          (3)
#define BIST_MODE3_gpu_sc2_bist_mode6_mask                                           (0x00000008)
#define BIST_MODE3_gpu_sc2_bist_mode6(data)                                          (0x00000008&((data)<<3))
#define BIST_MODE3_gpu_sc2_bist_mode6_src(data)                                      ((0x00000008&(data))>>3)
#define BIST_MODE3_get_gpu_sc2_bist_mode6(data)                                      ((0x00000008&(data))>>3)
#define BIST_MODE3_gpu_sc2_bist_mode5_shift                                          (2)
#define BIST_MODE3_gpu_sc2_bist_mode5_mask                                           (0x00000004)
#define BIST_MODE3_gpu_sc2_bist_mode5(data)                                          (0x00000004&((data)<<2))
#define BIST_MODE3_gpu_sc2_bist_mode5_src(data)                                      ((0x00000004&(data))>>2)
#define BIST_MODE3_get_gpu_sc2_bist_mode5(data)                                      ((0x00000004&(data))>>2)
#define BIST_MODE3_gpu_sc2_bist_mode3_shift                                          (1)
#define BIST_MODE3_gpu_sc2_bist_mode3_mask                                           (0x00000002)
#define BIST_MODE3_gpu_sc2_bist_mode3(data)                                          (0x00000002&((data)<<1))
#define BIST_MODE3_gpu_sc2_bist_mode3_src(data)                                      ((0x00000002&(data))>>1)
#define BIST_MODE3_get_gpu_sc2_bist_mode3(data)                                      ((0x00000002&(data))>>1)
#define BIST_MODE3_gpu_sc2_bist_mode2_shift                                          (0)
#define BIST_MODE3_gpu_sc2_bist_mode2_mask                                           (0x00000001)
#define BIST_MODE3_gpu_sc2_bist_mode2(data)                                          (0x00000001&((data)<<0))
#define BIST_MODE3_gpu_sc2_bist_mode2_src(data)                                      ((0x00000001&(data))>>0)
#define BIST_MODE3_get_gpu_sc2_bist_mode2(data)                                      ((0x00000001&(data))>>0)


#define DRF_BIST_MODE0                                                               0x98054010
#define DRF_BIST_MODE0_reg_addr                                                      "0xD8054010"
#define DRF_BIST_MODE0_reg                                                           0xD8054010
#define set_DRF_BIST_MODE0_reg(data)   (*((volatile unsigned int*) DRF_BIST_MODE0_reg)=data)
#define get_DRF_BIST_MODE0_reg   (*((volatile unsigned int*) DRF_BIST_MODE0_reg))
#define DRF_BIST_MODE0_inst_adr                                                      "0x0004"
#define DRF_BIST_MODE0_inst                                                          0x0004
#define DRF_BIST_MODE0_gpu_pg_test_mode21_shift                                      (12)
#define DRF_BIST_MODE0_gpu_pg_test_mode21_mask                                       (0x00001000)
#define DRF_BIST_MODE0_gpu_pg_test_mode21(data)                                      (0x00001000&((data)<<12))
#define DRF_BIST_MODE0_gpu_pg_test_mode21_src(data)                                  ((0x00001000&(data))>>12)
#define DRF_BIST_MODE0_get_gpu_pg_test_mode21(data)                                  ((0x00001000&(data))>>12)
#define DRF_BIST_MODE0_gpu_l2_drf_resume20_shift                                     (11)
#define DRF_BIST_MODE0_gpu_l2_drf_resume20_mask                                      (0x00000800)
#define DRF_BIST_MODE0_gpu_l2_drf_resume20(data)                                     (0x00000800&((data)<<11))
#define DRF_BIST_MODE0_gpu_l2_drf_resume20_src(data)                                 ((0x00000800&(data))>>11)
#define DRF_BIST_MODE0_get_gpu_l2_drf_resume20(data)                                 ((0x00000800&(data))>>11)
#define DRF_BIST_MODE0_gpu_l2_drf_resume18_shift                                     (10)
#define DRF_BIST_MODE0_gpu_l2_drf_resume18_mask                                      (0x00000400)
#define DRF_BIST_MODE0_gpu_l2_drf_resume18(data)                                     (0x00000400&((data)<<10))
#define DRF_BIST_MODE0_gpu_l2_drf_resume18_src(data)                                 ((0x00000400&(data))>>10)
#define DRF_BIST_MODE0_get_gpu_l2_drf_resume18(data)                                 ((0x00000400&(data))>>10)
#define DRF_BIST_MODE0_gpu_l2_drf_resume17_shift                                     (9)
#define DRF_BIST_MODE0_gpu_l2_drf_resume17_mask                                      (0x00000200)
#define DRF_BIST_MODE0_gpu_l2_drf_resume17(data)                                     (0x00000200&((data)<<9))
#define DRF_BIST_MODE0_gpu_l2_drf_resume17_src(data)                                 ((0x00000200&(data))>>9)
#define DRF_BIST_MODE0_get_gpu_l2_drf_resume17(data)                                 ((0x00000200&(data))>>9)
#define DRF_BIST_MODE0_gpu_cg_drf_resume16_shift                                     (8)
#define DRF_BIST_MODE0_gpu_cg_drf_resume16_mask                                      (0x00000100)
#define DRF_BIST_MODE0_gpu_cg_drf_resume16(data)                                     (0x00000100&((data)<<8))
#define DRF_BIST_MODE0_gpu_cg_drf_resume16_src(data)                                 ((0x00000100&(data))>>8)
#define DRF_BIST_MODE0_get_gpu_cg_drf_resume16(data)                                 ((0x00000100&(data))>>8)
#define DRF_BIST_MODE0_gpu_cg_drf_resume15_shift                                     (7)
#define DRF_BIST_MODE0_gpu_cg_drf_resume15_mask                                      (0x00000080)
#define DRF_BIST_MODE0_gpu_cg_drf_resume15(data)                                     (0x00000080&((data)<<7))
#define DRF_BIST_MODE0_gpu_cg_drf_resume15_src(data)                                 ((0x00000080&(data))>>7)
#define DRF_BIST_MODE0_get_gpu_cg_drf_resume15(data)                                 ((0x00000080&(data))>>7)
#define DRF_BIST_MODE0_gpu_jm_drf_resume1_shift                                      (6)
#define DRF_BIST_MODE0_gpu_jm_drf_resume1_mask                                       (0x00000040)
#define DRF_BIST_MODE0_gpu_jm_drf_resume1(data)                                      (0x00000040&((data)<<6))
#define DRF_BIST_MODE0_gpu_jm_drf_resume1_src(data)                                  ((0x00000040&(data))>>6)
#define DRF_BIST_MODE0_get_gpu_jm_drf_resume1(data)                                  ((0x00000040&(data))>>6)
#define DRF_BIST_MODE0_gpu_l2_drf_bisr_mode20_shift                                  (5)
#define DRF_BIST_MODE0_gpu_l2_drf_bisr_mode20_mask                                   (0x00000020)
#define DRF_BIST_MODE0_gpu_l2_drf_bisr_mode20(data)                                  (0x00000020&((data)<<5))
#define DRF_BIST_MODE0_gpu_l2_drf_bisr_mode20_src(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_MODE0_get_gpu_l2_drf_bisr_mode20(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_MODE0_gpu_l2_drf_bist_mode18_shift                                  (4)
#define DRF_BIST_MODE0_gpu_l2_drf_bist_mode18_mask                                   (0x00000010)
#define DRF_BIST_MODE0_gpu_l2_drf_bist_mode18(data)                                  (0x00000010&((data)<<4))
#define DRF_BIST_MODE0_gpu_l2_drf_bist_mode18_src(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_MODE0_get_gpu_l2_drf_bist_mode18(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_MODE0_gpu_l2_drf_bist_mode17_shift                                  (3)
#define DRF_BIST_MODE0_gpu_l2_drf_bist_mode17_mask                                   (0x00000008)
#define DRF_BIST_MODE0_gpu_l2_drf_bist_mode17(data)                                  (0x00000008&((data)<<3))
#define DRF_BIST_MODE0_gpu_l2_drf_bist_mode17_src(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_MODE0_get_gpu_l2_drf_bist_mode17(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_MODE0_gpu_cg_drf_bist_mode16_shift                                  (2)
#define DRF_BIST_MODE0_gpu_cg_drf_bist_mode16_mask                                   (0x00000004)
#define DRF_BIST_MODE0_gpu_cg_drf_bist_mode16(data)                                  (0x00000004&((data)<<2))
#define DRF_BIST_MODE0_gpu_cg_drf_bist_mode16_src(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_MODE0_get_gpu_cg_drf_bist_mode16(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_MODE0_gpu_cg_drf_bist_mode15_shift                                  (1)
#define DRF_BIST_MODE0_gpu_cg_drf_bist_mode15_mask                                   (0x00000002)
#define DRF_BIST_MODE0_gpu_cg_drf_bist_mode15(data)                                  (0x00000002&((data)<<1))
#define DRF_BIST_MODE0_gpu_cg_drf_bist_mode15_src(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_MODE0_get_gpu_cg_drf_bist_mode15(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_MODE0_gpu_jm_drf_bist_mode1_shift                                   (0)
#define DRF_BIST_MODE0_gpu_jm_drf_bist_mode1_mask                                    (0x00000001)
#define DRF_BIST_MODE0_gpu_jm_drf_bist_mode1(data)                                   (0x00000001&((data)<<0))
#define DRF_BIST_MODE0_gpu_jm_drf_bist_mode1_src(data)                               ((0x00000001&(data))>>0)
#define DRF_BIST_MODE0_get_gpu_jm_drf_bist_mode1(data)                               ((0x00000001&(data))>>0)


#define DRF_BIST_MODE1                                                               0x98054014
#define DRF_BIST_MODE1_reg_addr                                                      "0xD8054014"
#define DRF_BIST_MODE1_reg                                                           0xD8054014
#define set_DRF_BIST_MODE1_reg(data)   (*((volatile unsigned int*) DRF_BIST_MODE1_reg)=data)
#define get_DRF_BIST_MODE1_reg   (*((volatile unsigned int*) DRF_BIST_MODE1_reg))
#define DRF_BIST_MODE1_inst_adr                                                      "0x0005"
#define DRF_BIST_MODE1_inst                                                          0x0005
#define DRF_BIST_MODE1_gpu_sc0_drf_resume14_shift                                    (23)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume14_mask                                     (0x00800000)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume14(data)                                    (0x00800000&((data)<<23))
#define DRF_BIST_MODE1_gpu_sc0_drf_resume14_src(data)                                ((0x00800000&(data))>>23)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_resume14(data)                                ((0x00800000&(data))>>23)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume13_shift                                    (22)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume13_mask                                     (0x00400000)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume13(data)                                    (0x00400000&((data)<<22))
#define DRF_BIST_MODE1_gpu_sc0_drf_resume13_src(data)                                ((0x00400000&(data))>>22)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_resume13(data)                                ((0x00400000&(data))>>22)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume12_shift                                    (21)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume12_mask                                     (0x00200000)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume12(data)                                    (0x00200000&((data)<<21))
#define DRF_BIST_MODE1_gpu_sc0_drf_resume12_src(data)                                ((0x00200000&(data))>>21)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_resume12(data)                                ((0x00200000&(data))>>21)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume11_shift                                    (20)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume11_mask                                     (0x00100000)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume11(data)                                    (0x00100000&((data)<<20))
#define DRF_BIST_MODE1_gpu_sc0_drf_resume11_src(data)                                ((0x00100000&(data))>>20)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_resume11(data)                                ((0x00100000&(data))>>20)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume10_shift                                    (19)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume10_mask                                     (0x00080000)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume10(data)                                    (0x00080000&((data)<<19))
#define DRF_BIST_MODE1_gpu_sc0_drf_resume10_src(data)                                ((0x00080000&(data))>>19)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_resume10(data)                                ((0x00080000&(data))>>19)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume9_shift                                     (18)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume9_mask                                      (0x00040000)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume9(data)                                     (0x00040000&((data)<<18))
#define DRF_BIST_MODE1_gpu_sc0_drf_resume9_src(data)                                 ((0x00040000&(data))>>18)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_resume9(data)                                 ((0x00040000&(data))>>18)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume8_shift                                     (17)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume8_mask                                      (0x00020000)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume8(data)                                     (0x00020000&((data)<<17))
#define DRF_BIST_MODE1_gpu_sc0_drf_resume8_src(data)                                 ((0x00020000&(data))>>17)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_resume8(data)                                 ((0x00020000&(data))>>17)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume7_shift                                     (16)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume7_mask                                      (0x00010000)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume7(data)                                     (0x00010000&((data)<<16))
#define DRF_BIST_MODE1_gpu_sc0_drf_resume7_src(data)                                 ((0x00010000&(data))>>16)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_resume7(data)                                 ((0x00010000&(data))>>16)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume6_shift                                     (15)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume6_mask                                      (0x00008000)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume6(data)                                     (0x00008000&((data)<<15))
#define DRF_BIST_MODE1_gpu_sc0_drf_resume6_src(data)                                 ((0x00008000&(data))>>15)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_resume6(data)                                 ((0x00008000&(data))>>15)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume5_shift                                     (14)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume5_mask                                      (0x00004000)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume5(data)                                     (0x00004000&((data)<<14))
#define DRF_BIST_MODE1_gpu_sc0_drf_resume5_src(data)                                 ((0x00004000&(data))>>14)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_resume5(data)                                 ((0x00004000&(data))>>14)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume3_shift                                     (13)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume3_mask                                      (0x00002000)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume3(data)                                     (0x00002000&((data)<<13))
#define DRF_BIST_MODE1_gpu_sc0_drf_resume3_src(data)                                 ((0x00002000&(data))>>13)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_resume3(data)                                 ((0x00002000&(data))>>13)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume2_shift                                     (12)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume2_mask                                      (0x00001000)
#define DRF_BIST_MODE1_gpu_sc0_drf_resume2(data)                                     (0x00001000&((data)<<12))
#define DRF_BIST_MODE1_gpu_sc0_drf_resume2_src(data)                                 ((0x00001000&(data))>>12)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_resume2(data)                                 ((0x00001000&(data))>>12)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode14_shift                                 (11)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode14_mask                                  (0x00000800)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode14(data)                                 (0x00000800&((data)<<11))
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode14_src(data)                             ((0x00000800&(data))>>11)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_bist_mode14(data)                             ((0x00000800&(data))>>11)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode13_shift                                 (10)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode13_mask                                  (0x00000400)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode13(data)                                 (0x00000400&((data)<<10))
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode13_src(data)                             ((0x00000400&(data))>>10)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_bist_mode13(data)                             ((0x00000400&(data))>>10)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode12_shift                                 (9)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode12_mask                                  (0x00000200)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode12(data)                                 (0x00000200&((data)<<9))
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode12_src(data)                             ((0x00000200&(data))>>9)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_bist_mode12(data)                             ((0x00000200&(data))>>9)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode11_shift                                 (8)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode11_mask                                  (0x00000100)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode11(data)                                 (0x00000100&((data)<<8))
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode11_src(data)                             ((0x00000100&(data))>>8)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_bist_mode11(data)                             ((0x00000100&(data))>>8)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode10_shift                                 (7)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode10_mask                                  (0x00000080)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode10(data)                                 (0x00000080&((data)<<7))
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode10_src(data)                             ((0x00000080&(data))>>7)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_bist_mode10(data)                             ((0x00000080&(data))>>7)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode9_shift                                  (6)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode9_mask                                   (0x00000040)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode9(data)                                  (0x00000040&((data)<<6))
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode9_src(data)                              ((0x00000040&(data))>>6)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_bist_mode9(data)                              ((0x00000040&(data))>>6)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode8_shift                                  (5)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode8_mask                                   (0x00000020)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode8(data)                                  (0x00000020&((data)<<5))
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode8_src(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_bist_mode8(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode7_shift                                  (4)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode7_mask                                   (0x00000010)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode7(data)                                  (0x00000010&((data)<<4))
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode7_src(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_bist_mode7(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode6_shift                                  (3)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode6_mask                                   (0x00000008)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode6(data)                                  (0x00000008&((data)<<3))
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode6_src(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_bist_mode6(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode5_shift                                  (2)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode5_mask                                   (0x00000004)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode5(data)                                  (0x00000004&((data)<<2))
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode5_src(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_bist_mode5(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode3_shift                                  (1)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode3_mask                                   (0x00000002)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode3(data)                                  (0x00000002&((data)<<1))
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode3_src(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_bist_mode3(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode2_shift                                  (0)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode2_mask                                   (0x00000001)
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode2(data)                                  (0x00000001&((data)<<0))
#define DRF_BIST_MODE1_gpu_sc0_drf_bist_mode2_src(data)                              ((0x00000001&(data))>>0)
#define DRF_BIST_MODE1_get_gpu_sc0_drf_bist_mode2(data)                              ((0x00000001&(data))>>0)


#define DRF_BIST_MODE2                                                               0x98054018
#define DRF_BIST_MODE2_reg_addr                                                      "0xD8054018"
#define DRF_BIST_MODE2_reg                                                           0xD8054018
#define set_DRF_BIST_MODE2_reg(data)   (*((volatile unsigned int*) DRF_BIST_MODE2_reg)=data)
#define get_DRF_BIST_MODE2_reg   (*((volatile unsigned int*) DRF_BIST_MODE2_reg))
#define DRF_BIST_MODE2_inst_adr                                                      "0x0006"
#define DRF_BIST_MODE2_inst                                                          0x0006
#define DRF_BIST_MODE2_gpu_sc1_drf_resume14_shift                                    (23)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume14_mask                                     (0x00800000)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume14(data)                                    (0x00800000&((data)<<23))
#define DRF_BIST_MODE2_gpu_sc1_drf_resume14_src(data)                                ((0x00800000&(data))>>23)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_resume14(data)                                ((0x00800000&(data))>>23)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume13_shift                                    (22)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume13_mask                                     (0x00400000)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume13(data)                                    (0x00400000&((data)<<22))
#define DRF_BIST_MODE2_gpu_sc1_drf_resume13_src(data)                                ((0x00400000&(data))>>22)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_resume13(data)                                ((0x00400000&(data))>>22)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume12_shift                                    (21)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume12_mask                                     (0x00200000)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume12(data)                                    (0x00200000&((data)<<21))
#define DRF_BIST_MODE2_gpu_sc1_drf_resume12_src(data)                                ((0x00200000&(data))>>21)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_resume12(data)                                ((0x00200000&(data))>>21)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume11_shift                                    (20)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume11_mask                                     (0x00100000)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume11(data)                                    (0x00100000&((data)<<20))
#define DRF_BIST_MODE2_gpu_sc1_drf_resume11_src(data)                                ((0x00100000&(data))>>20)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_resume11(data)                                ((0x00100000&(data))>>20)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume10_shift                                    (19)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume10_mask                                     (0x00080000)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume10(data)                                    (0x00080000&((data)<<19))
#define DRF_BIST_MODE2_gpu_sc1_drf_resume10_src(data)                                ((0x00080000&(data))>>19)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_resume10(data)                                ((0x00080000&(data))>>19)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume9_shift                                     (18)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume9_mask                                      (0x00040000)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume9(data)                                     (0x00040000&((data)<<18))
#define DRF_BIST_MODE2_gpu_sc1_drf_resume9_src(data)                                 ((0x00040000&(data))>>18)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_resume9(data)                                 ((0x00040000&(data))>>18)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume8_shift                                     (17)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume8_mask                                      (0x00020000)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume8(data)                                     (0x00020000&((data)<<17))
#define DRF_BIST_MODE2_gpu_sc1_drf_resume8_src(data)                                 ((0x00020000&(data))>>17)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_resume8(data)                                 ((0x00020000&(data))>>17)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume7_shift                                     (16)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume7_mask                                      (0x00010000)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume7(data)                                     (0x00010000&((data)<<16))
#define DRF_BIST_MODE2_gpu_sc1_drf_resume7_src(data)                                 ((0x00010000&(data))>>16)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_resume7(data)                                 ((0x00010000&(data))>>16)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume6_shift                                     (15)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume6_mask                                      (0x00008000)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume6(data)                                     (0x00008000&((data)<<15))
#define DRF_BIST_MODE2_gpu_sc1_drf_resume6_src(data)                                 ((0x00008000&(data))>>15)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_resume6(data)                                 ((0x00008000&(data))>>15)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume5_shift                                     (14)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume5_mask                                      (0x00004000)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume5(data)                                     (0x00004000&((data)<<14))
#define DRF_BIST_MODE2_gpu_sc1_drf_resume5_src(data)                                 ((0x00004000&(data))>>14)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_resume5(data)                                 ((0x00004000&(data))>>14)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume3_shift                                     (13)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume3_mask                                      (0x00002000)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume3(data)                                     (0x00002000&((data)<<13))
#define DRF_BIST_MODE2_gpu_sc1_drf_resume3_src(data)                                 ((0x00002000&(data))>>13)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_resume3(data)                                 ((0x00002000&(data))>>13)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume2_shift                                     (12)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume2_mask                                      (0x00001000)
#define DRF_BIST_MODE2_gpu_sc1_drf_resume2(data)                                     (0x00001000&((data)<<12))
#define DRF_BIST_MODE2_gpu_sc1_drf_resume2_src(data)                                 ((0x00001000&(data))>>12)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_resume2(data)                                 ((0x00001000&(data))>>12)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode14_shift                                 (11)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode14_mask                                  (0x00000800)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode14(data)                                 (0x00000800&((data)<<11))
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode14_src(data)                             ((0x00000800&(data))>>11)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_bist_mode14(data)                             ((0x00000800&(data))>>11)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode13_shift                                 (10)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode13_mask                                  (0x00000400)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode13(data)                                 (0x00000400&((data)<<10))
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode13_src(data)                             ((0x00000400&(data))>>10)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_bist_mode13(data)                             ((0x00000400&(data))>>10)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode12_shift                                 (9)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode12_mask                                  (0x00000200)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode12(data)                                 (0x00000200&((data)<<9))
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode12_src(data)                             ((0x00000200&(data))>>9)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_bist_mode12(data)                             ((0x00000200&(data))>>9)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode11_shift                                 (8)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode11_mask                                  (0x00000100)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode11(data)                                 (0x00000100&((data)<<8))
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode11_src(data)                             ((0x00000100&(data))>>8)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_bist_mode11(data)                             ((0x00000100&(data))>>8)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode10_shift                                 (7)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode10_mask                                  (0x00000080)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode10(data)                                 (0x00000080&((data)<<7))
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode10_src(data)                             ((0x00000080&(data))>>7)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_bist_mode10(data)                             ((0x00000080&(data))>>7)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode9_shift                                  (6)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode9_mask                                   (0x00000040)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode9(data)                                  (0x00000040&((data)<<6))
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode9_src(data)                              ((0x00000040&(data))>>6)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_bist_mode9(data)                              ((0x00000040&(data))>>6)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode8_shift                                  (5)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode8_mask                                   (0x00000020)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode8(data)                                  (0x00000020&((data)<<5))
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode8_src(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_bist_mode8(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode7_shift                                  (4)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode7_mask                                   (0x00000010)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode7(data)                                  (0x00000010&((data)<<4))
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode7_src(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_bist_mode7(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode6_shift                                  (3)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode6_mask                                   (0x00000008)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode6(data)                                  (0x00000008&((data)<<3))
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode6_src(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_bist_mode6(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode5_shift                                  (2)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode5_mask                                   (0x00000004)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode5(data)                                  (0x00000004&((data)<<2))
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode5_src(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_bist_mode5(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode3_shift                                  (1)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode3_mask                                   (0x00000002)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode3(data)                                  (0x00000002&((data)<<1))
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode3_src(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_bist_mode3(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode2_shift                                  (0)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode2_mask                                   (0x00000001)
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode2(data)                                  (0x00000001&((data)<<0))
#define DRF_BIST_MODE2_gpu_sc1_drf_bist_mode2_src(data)                              ((0x00000001&(data))>>0)
#define DRF_BIST_MODE2_get_gpu_sc1_drf_bist_mode2(data)                              ((0x00000001&(data))>>0)


#define DRF_BIST_MODE3                                                               0x9805401C
#define DRF_BIST_MODE3_reg_addr                                                      "0xD805401C"
#define DRF_BIST_MODE3_reg                                                           0xD805401C
#define set_DRF_BIST_MODE3_reg(data)   (*((volatile unsigned int*) DRF_BIST_MODE3_reg)=data)
#define get_DRF_BIST_MODE3_reg   (*((volatile unsigned int*) DRF_BIST_MODE3_reg))
#define DRF_BIST_MODE3_inst_adr                                                      "0x0007"
#define DRF_BIST_MODE3_inst                                                          0x0007
#define DRF_BIST_MODE3_gpu_sc2_drf_resume14_shift                                    (23)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume14_mask                                     (0x00800000)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume14(data)                                    (0x00800000&((data)<<23))
#define DRF_BIST_MODE3_gpu_sc2_drf_resume14_src(data)                                ((0x00800000&(data))>>23)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_resume14(data)                                ((0x00800000&(data))>>23)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume13_shift                                    (22)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume13_mask                                     (0x00400000)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume13(data)                                    (0x00400000&((data)<<22))
#define DRF_BIST_MODE3_gpu_sc2_drf_resume13_src(data)                                ((0x00400000&(data))>>22)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_resume13(data)                                ((0x00400000&(data))>>22)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume12_shift                                    (21)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume12_mask                                     (0x00200000)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume12(data)                                    (0x00200000&((data)<<21))
#define DRF_BIST_MODE3_gpu_sc2_drf_resume12_src(data)                                ((0x00200000&(data))>>21)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_resume12(data)                                ((0x00200000&(data))>>21)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume11_shift                                    (20)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume11_mask                                     (0x00100000)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume11(data)                                    (0x00100000&((data)<<20))
#define DRF_BIST_MODE3_gpu_sc2_drf_resume11_src(data)                                ((0x00100000&(data))>>20)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_resume11(data)                                ((0x00100000&(data))>>20)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume10_shift                                    (19)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume10_mask                                     (0x00080000)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume10(data)                                    (0x00080000&((data)<<19))
#define DRF_BIST_MODE3_gpu_sc2_drf_resume10_src(data)                                ((0x00080000&(data))>>19)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_resume10(data)                                ((0x00080000&(data))>>19)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume9_shift                                     (18)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume9_mask                                      (0x00040000)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume9(data)                                     (0x00040000&((data)<<18))
#define DRF_BIST_MODE3_gpu_sc2_drf_resume9_src(data)                                 ((0x00040000&(data))>>18)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_resume9(data)                                 ((0x00040000&(data))>>18)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume8_shift                                     (17)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume8_mask                                      (0x00020000)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume8(data)                                     (0x00020000&((data)<<17))
#define DRF_BIST_MODE3_gpu_sc2_drf_resume8_src(data)                                 ((0x00020000&(data))>>17)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_resume8(data)                                 ((0x00020000&(data))>>17)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume7_shift                                     (16)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume7_mask                                      (0x00010000)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume7(data)                                     (0x00010000&((data)<<16))
#define DRF_BIST_MODE3_gpu_sc2_drf_resume7_src(data)                                 ((0x00010000&(data))>>16)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_resume7(data)                                 ((0x00010000&(data))>>16)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume6_shift                                     (15)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume6_mask                                      (0x00008000)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume6(data)                                     (0x00008000&((data)<<15))
#define DRF_BIST_MODE3_gpu_sc2_drf_resume6_src(data)                                 ((0x00008000&(data))>>15)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_resume6(data)                                 ((0x00008000&(data))>>15)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume5_shift                                     (14)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume5_mask                                      (0x00004000)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume5(data)                                     (0x00004000&((data)<<14))
#define DRF_BIST_MODE3_gpu_sc2_drf_resume5_src(data)                                 ((0x00004000&(data))>>14)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_resume5(data)                                 ((0x00004000&(data))>>14)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume3_shift                                     (13)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume3_mask                                      (0x00002000)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume3(data)                                     (0x00002000&((data)<<13))
#define DRF_BIST_MODE3_gpu_sc2_drf_resume3_src(data)                                 ((0x00002000&(data))>>13)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_resume3(data)                                 ((0x00002000&(data))>>13)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume2_shift                                     (12)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume2_mask                                      (0x00001000)
#define DRF_BIST_MODE3_gpu_sc2_drf_resume2(data)                                     (0x00001000&((data)<<12))
#define DRF_BIST_MODE3_gpu_sc2_drf_resume2_src(data)                                 ((0x00001000&(data))>>12)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_resume2(data)                                 ((0x00001000&(data))>>12)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode14_shift                                 (11)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode14_mask                                  (0x00000800)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode14(data)                                 (0x00000800&((data)<<11))
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode14_src(data)                             ((0x00000800&(data))>>11)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_bist_mode14(data)                             ((0x00000800&(data))>>11)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode13_shift                                 (10)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode13_mask                                  (0x00000400)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode13(data)                                 (0x00000400&((data)<<10))
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode13_src(data)                             ((0x00000400&(data))>>10)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_bist_mode13(data)                             ((0x00000400&(data))>>10)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode12_shift                                 (9)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode12_mask                                  (0x00000200)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode12(data)                                 (0x00000200&((data)<<9))
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode12_src(data)                             ((0x00000200&(data))>>9)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_bist_mode12(data)                             ((0x00000200&(data))>>9)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode11_shift                                 (8)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode11_mask                                  (0x00000100)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode11(data)                                 (0x00000100&((data)<<8))
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode11_src(data)                             ((0x00000100&(data))>>8)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_bist_mode11(data)                             ((0x00000100&(data))>>8)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode10_shift                                 (7)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode10_mask                                  (0x00000080)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode10(data)                                 (0x00000080&((data)<<7))
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode10_src(data)                             ((0x00000080&(data))>>7)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_bist_mode10(data)                             ((0x00000080&(data))>>7)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode9_shift                                  (6)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode9_mask                                   (0x00000040)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode9(data)                                  (0x00000040&((data)<<6))
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode9_src(data)                              ((0x00000040&(data))>>6)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_bist_mode9(data)                              ((0x00000040&(data))>>6)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode8_shift                                  (5)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode8_mask                                   (0x00000020)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode8(data)                                  (0x00000020&((data)<<5))
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode8_src(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_bist_mode8(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode7_shift                                  (4)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode7_mask                                   (0x00000010)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode7(data)                                  (0x00000010&((data)<<4))
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode7_src(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_bist_mode7(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode6_shift                                  (3)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode6_mask                                   (0x00000008)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode6(data)                                  (0x00000008&((data)<<3))
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode6_src(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_bist_mode6(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode5_shift                                  (2)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode5_mask                                   (0x00000004)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode5(data)                                  (0x00000004&((data)<<2))
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode5_src(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_bist_mode5(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode3_shift                                  (1)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode3_mask                                   (0x00000002)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode3(data)                                  (0x00000002&((data)<<1))
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode3_src(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_bist_mode3(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode2_shift                                  (0)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode2_mask                                   (0x00000001)
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode2(data)                                  (0x00000001&((data)<<0))
#define DRF_BIST_MODE3_gpu_sc2_drf_bist_mode2_src(data)                              ((0x00000001&(data))>>0)
#define DRF_BIST_MODE3_get_gpu_sc2_drf_bist_mode2(data)                              ((0x00000001&(data))>>0)


#define BIST_DONE0                                                                   0x98054020
#define BIST_DONE0_reg_addr                                                          "0xD8054020"
#define BIST_DONE0_reg                                                               0xD8054020
#define set_BIST_DONE0_reg(data)   (*((volatile unsigned int*) BIST_DONE0_reg)=data)
#define get_BIST_DONE0_reg   (*((volatile unsigned int*) BIST_DONE0_reg))
#define BIST_DONE0_inst_adr                                                          "0x0008"
#define BIST_DONE0_inst                                                              0x0008
#define BIST_DONE0_gpu_pg_test_done21_shift                                          (6)
#define BIST_DONE0_gpu_pg_test_done21_mask                                           (0x00000040)
#define BIST_DONE0_gpu_pg_test_done21(data)                                          (0x00000040&((data)<<6))
#define BIST_DONE0_gpu_pg_test_done21_src(data)                                      ((0x00000040&(data))>>6)
#define BIST_DONE0_get_gpu_pg_test_done21(data)                                      ((0x00000040&(data))>>6)
#define BIST_DONE0_gpu_l2_bisr_done20_shift                                          (5)
#define BIST_DONE0_gpu_l2_bisr_done20_mask                                           (0x00000020)
#define BIST_DONE0_gpu_l2_bisr_done20(data)                                          (0x00000020&((data)<<5))
#define BIST_DONE0_gpu_l2_bisr_done20_src(data)                                      ((0x00000020&(data))>>5)
#define BIST_DONE0_get_gpu_l2_bisr_done20(data)                                      ((0x00000020&(data))>>5)
#define BIST_DONE0_gpu_l2_bist_done18_shift                                          (4)
#define BIST_DONE0_gpu_l2_bist_done18_mask                                           (0x00000010)
#define BIST_DONE0_gpu_l2_bist_done18(data)                                          (0x00000010&((data)<<4))
#define BIST_DONE0_gpu_l2_bist_done18_src(data)                                      ((0x00000010&(data))>>4)
#define BIST_DONE0_get_gpu_l2_bist_done18(data)                                      ((0x00000010&(data))>>4)
#define BIST_DONE0_gpu_l2_bist_done17_shift                                          (3)
#define BIST_DONE0_gpu_l2_bist_done17_mask                                           (0x00000008)
#define BIST_DONE0_gpu_l2_bist_done17(data)                                          (0x00000008&((data)<<3))
#define BIST_DONE0_gpu_l2_bist_done17_src(data)                                      ((0x00000008&(data))>>3)
#define BIST_DONE0_get_gpu_l2_bist_done17(data)                                      ((0x00000008&(data))>>3)
#define BIST_DONE0_gpu_cg_bist_done16_shift                                          (2)
#define BIST_DONE0_gpu_cg_bist_done16_mask                                           (0x00000004)
#define BIST_DONE0_gpu_cg_bist_done16(data)                                          (0x00000004&((data)<<2))
#define BIST_DONE0_gpu_cg_bist_done16_src(data)                                      ((0x00000004&(data))>>2)
#define BIST_DONE0_get_gpu_cg_bist_done16(data)                                      ((0x00000004&(data))>>2)
#define BIST_DONE0_gpu_cg_bist_done15_shift                                          (1)
#define BIST_DONE0_gpu_cg_bist_done15_mask                                           (0x00000002)
#define BIST_DONE0_gpu_cg_bist_done15(data)                                          (0x00000002&((data)<<1))
#define BIST_DONE0_gpu_cg_bist_done15_src(data)                                      ((0x00000002&(data))>>1)
#define BIST_DONE0_get_gpu_cg_bist_done15(data)                                      ((0x00000002&(data))>>1)
#define BIST_DONE0_gpu_jm_bist_done1_shift                                           (0)
#define BIST_DONE0_gpu_jm_bist_done1_mask                                            (0x00000001)
#define BIST_DONE0_gpu_jm_bist_done1(data)                                           (0x00000001&((data)<<0))
#define BIST_DONE0_gpu_jm_bist_done1_src(data)                                       ((0x00000001&(data))>>0)
#define BIST_DONE0_get_gpu_jm_bist_done1(data)                                       ((0x00000001&(data))>>0)


#define BIST_DONE1                                                                   0x98054024
#define BIST_DONE1_reg_addr                                                          "0xD8054024"
#define BIST_DONE1_reg                                                               0xD8054024
#define set_BIST_DONE1_reg(data)   (*((volatile unsigned int*) BIST_DONE1_reg)=data)
#define get_BIST_DONE1_reg   (*((volatile unsigned int*) BIST_DONE1_reg))
#define BIST_DONE1_inst_adr                                                          "0x0009"
#define BIST_DONE1_inst                                                              0x0009
#define BIST_DONE1_gpu_sc0_bist_done14_shift                                         (11)
#define BIST_DONE1_gpu_sc0_bist_done14_mask                                          (0x00000800)
#define BIST_DONE1_gpu_sc0_bist_done14(data)                                         (0x00000800&((data)<<11))
#define BIST_DONE1_gpu_sc0_bist_done14_src(data)                                     ((0x00000800&(data))>>11)
#define BIST_DONE1_get_gpu_sc0_bist_done14(data)                                     ((0x00000800&(data))>>11)
#define BIST_DONE1_gpu_sc0_bist_done13_shift                                         (10)
#define BIST_DONE1_gpu_sc0_bist_done13_mask                                          (0x00000400)
#define BIST_DONE1_gpu_sc0_bist_done13(data)                                         (0x00000400&((data)<<10))
#define BIST_DONE1_gpu_sc0_bist_done13_src(data)                                     ((0x00000400&(data))>>10)
#define BIST_DONE1_get_gpu_sc0_bist_done13(data)                                     ((0x00000400&(data))>>10)
#define BIST_DONE1_gpu_sc0_bist_done12_shift                                         (9)
#define BIST_DONE1_gpu_sc0_bist_done12_mask                                          (0x00000200)
#define BIST_DONE1_gpu_sc0_bist_done12(data)                                         (0x00000200&((data)<<9))
#define BIST_DONE1_gpu_sc0_bist_done12_src(data)                                     ((0x00000200&(data))>>9)
#define BIST_DONE1_get_gpu_sc0_bist_done12(data)                                     ((0x00000200&(data))>>9)
#define BIST_DONE1_gpu_sc0_bist_done11_shift                                         (8)
#define BIST_DONE1_gpu_sc0_bist_done11_mask                                          (0x00000100)
#define BIST_DONE1_gpu_sc0_bist_done11(data)                                         (0x00000100&((data)<<8))
#define BIST_DONE1_gpu_sc0_bist_done11_src(data)                                     ((0x00000100&(data))>>8)
#define BIST_DONE1_get_gpu_sc0_bist_done11(data)                                     ((0x00000100&(data))>>8)
#define BIST_DONE1_gpu_sc0_bist_done10_shift                                         (7)
#define BIST_DONE1_gpu_sc0_bist_done10_mask                                          (0x00000080)
#define BIST_DONE1_gpu_sc0_bist_done10(data)                                         (0x00000080&((data)<<7))
#define BIST_DONE1_gpu_sc0_bist_done10_src(data)                                     ((0x00000080&(data))>>7)
#define BIST_DONE1_get_gpu_sc0_bist_done10(data)                                     ((0x00000080&(data))>>7)
#define BIST_DONE1_gpu_sc0_bist_done9_shift                                          (6)
#define BIST_DONE1_gpu_sc0_bist_done9_mask                                           (0x00000040)
#define BIST_DONE1_gpu_sc0_bist_done9(data)                                          (0x00000040&((data)<<6))
#define BIST_DONE1_gpu_sc0_bist_done9_src(data)                                      ((0x00000040&(data))>>6)
#define BIST_DONE1_get_gpu_sc0_bist_done9(data)                                      ((0x00000040&(data))>>6)
#define BIST_DONE1_gpu_sc0_bist_done8_shift                                          (5)
#define BIST_DONE1_gpu_sc0_bist_done8_mask                                           (0x00000020)
#define BIST_DONE1_gpu_sc0_bist_done8(data)                                          (0x00000020&((data)<<5))
#define BIST_DONE1_gpu_sc0_bist_done8_src(data)                                      ((0x00000020&(data))>>5)
#define BIST_DONE1_get_gpu_sc0_bist_done8(data)                                      ((0x00000020&(data))>>5)
#define BIST_DONE1_gpu_sc0_bist_done7_shift                                          (4)
#define BIST_DONE1_gpu_sc0_bist_done7_mask                                           (0x00000010)
#define BIST_DONE1_gpu_sc0_bist_done7(data)                                          (0x00000010&((data)<<4))
#define BIST_DONE1_gpu_sc0_bist_done7_src(data)                                      ((0x00000010&(data))>>4)
#define BIST_DONE1_get_gpu_sc0_bist_done7(data)                                      ((0x00000010&(data))>>4)
#define BIST_DONE1_gpu_sc0_bist_done6_shift                                          (3)
#define BIST_DONE1_gpu_sc0_bist_done6_mask                                           (0x00000008)
#define BIST_DONE1_gpu_sc0_bist_done6(data)                                          (0x00000008&((data)<<3))
#define BIST_DONE1_gpu_sc0_bist_done6_src(data)                                      ((0x00000008&(data))>>3)
#define BIST_DONE1_get_gpu_sc0_bist_done6(data)                                      ((0x00000008&(data))>>3)
#define BIST_DONE1_gpu_sc0_bist_done5_shift                                          (2)
#define BIST_DONE1_gpu_sc0_bist_done5_mask                                           (0x00000004)
#define BIST_DONE1_gpu_sc0_bist_done5(data)                                          (0x00000004&((data)<<2))
#define BIST_DONE1_gpu_sc0_bist_done5_src(data)                                      ((0x00000004&(data))>>2)
#define BIST_DONE1_get_gpu_sc0_bist_done5(data)                                      ((0x00000004&(data))>>2)
#define BIST_DONE1_gpu_sc0_bist_done3_shift                                          (1)
#define BIST_DONE1_gpu_sc0_bist_done3_mask                                           (0x00000002)
#define BIST_DONE1_gpu_sc0_bist_done3(data)                                          (0x00000002&((data)<<1))
#define BIST_DONE1_gpu_sc0_bist_done3_src(data)                                      ((0x00000002&(data))>>1)
#define BIST_DONE1_get_gpu_sc0_bist_done3(data)                                      ((0x00000002&(data))>>1)
#define BIST_DONE1_gpu_sc0_bist_done2_shift                                          (0)
#define BIST_DONE1_gpu_sc0_bist_done2_mask                                           (0x00000001)
#define BIST_DONE1_gpu_sc0_bist_done2(data)                                          (0x00000001&((data)<<0))
#define BIST_DONE1_gpu_sc0_bist_done2_src(data)                                      ((0x00000001&(data))>>0)
#define BIST_DONE1_get_gpu_sc0_bist_done2(data)                                      ((0x00000001&(data))>>0)


#define BIST_DONE2                                                                   0x98054028
#define BIST_DONE2_reg_addr                                                          "0xD8054028"
#define BIST_DONE2_reg                                                               0xD8054028
#define set_BIST_DONE2_reg(data)   (*((volatile unsigned int*) BIST_DONE2_reg)=data)
#define get_BIST_DONE2_reg   (*((volatile unsigned int*) BIST_DONE2_reg))
#define BIST_DONE2_inst_adr                                                          "0x000A"
#define BIST_DONE2_inst                                                              0x000A
#define BIST_DONE2_gpu_sc1_bist_done14_shift                                         (11)
#define BIST_DONE2_gpu_sc1_bist_done14_mask                                          (0x00000800)
#define BIST_DONE2_gpu_sc1_bist_done14(data)                                         (0x00000800&((data)<<11))
#define BIST_DONE2_gpu_sc1_bist_done14_src(data)                                     ((0x00000800&(data))>>11)
#define BIST_DONE2_get_gpu_sc1_bist_done14(data)                                     ((0x00000800&(data))>>11)
#define BIST_DONE2_gpu_sc1_bist_done13_shift                                         (10)
#define BIST_DONE2_gpu_sc1_bist_done13_mask                                          (0x00000400)
#define BIST_DONE2_gpu_sc1_bist_done13(data)                                         (0x00000400&((data)<<10))
#define BIST_DONE2_gpu_sc1_bist_done13_src(data)                                     ((0x00000400&(data))>>10)
#define BIST_DONE2_get_gpu_sc1_bist_done13(data)                                     ((0x00000400&(data))>>10)
#define BIST_DONE2_gpu_sc1_bist_done12_shift                                         (9)
#define BIST_DONE2_gpu_sc1_bist_done12_mask                                          (0x00000200)
#define BIST_DONE2_gpu_sc1_bist_done12(data)                                         (0x00000200&((data)<<9))
#define BIST_DONE2_gpu_sc1_bist_done12_src(data)                                     ((0x00000200&(data))>>9)
#define BIST_DONE2_get_gpu_sc1_bist_done12(data)                                     ((0x00000200&(data))>>9)
#define BIST_DONE2_gpu_sc1_bist_done11_shift                                         (8)
#define BIST_DONE2_gpu_sc1_bist_done11_mask                                          (0x00000100)
#define BIST_DONE2_gpu_sc1_bist_done11(data)                                         (0x00000100&((data)<<8))
#define BIST_DONE2_gpu_sc1_bist_done11_src(data)                                     ((0x00000100&(data))>>8)
#define BIST_DONE2_get_gpu_sc1_bist_done11(data)                                     ((0x00000100&(data))>>8)
#define BIST_DONE2_gpu_sc1_bist_done10_shift                                         (7)
#define BIST_DONE2_gpu_sc1_bist_done10_mask                                          (0x00000080)
#define BIST_DONE2_gpu_sc1_bist_done10(data)                                         (0x00000080&((data)<<7))
#define BIST_DONE2_gpu_sc1_bist_done10_src(data)                                     ((0x00000080&(data))>>7)
#define BIST_DONE2_get_gpu_sc1_bist_done10(data)                                     ((0x00000080&(data))>>7)
#define BIST_DONE2_gpu_sc1_bist_done9_shift                                          (6)
#define BIST_DONE2_gpu_sc1_bist_done9_mask                                           (0x00000040)
#define BIST_DONE2_gpu_sc1_bist_done9(data)                                          (0x00000040&((data)<<6))
#define BIST_DONE2_gpu_sc1_bist_done9_src(data)                                      ((0x00000040&(data))>>6)
#define BIST_DONE2_get_gpu_sc1_bist_done9(data)                                      ((0x00000040&(data))>>6)
#define BIST_DONE2_gpu_sc1_bist_done8_shift                                          (5)
#define BIST_DONE2_gpu_sc1_bist_done8_mask                                           (0x00000020)
#define BIST_DONE2_gpu_sc1_bist_done8(data)                                          (0x00000020&((data)<<5))
#define BIST_DONE2_gpu_sc1_bist_done8_src(data)                                      ((0x00000020&(data))>>5)
#define BIST_DONE2_get_gpu_sc1_bist_done8(data)                                      ((0x00000020&(data))>>5)
#define BIST_DONE2_gpu_sc1_bist_done7_shift                                          (4)
#define BIST_DONE2_gpu_sc1_bist_done7_mask                                           (0x00000010)
#define BIST_DONE2_gpu_sc1_bist_done7(data)                                          (0x00000010&((data)<<4))
#define BIST_DONE2_gpu_sc1_bist_done7_src(data)                                      ((0x00000010&(data))>>4)
#define BIST_DONE2_get_gpu_sc1_bist_done7(data)                                      ((0x00000010&(data))>>4)
#define BIST_DONE2_gpu_sc1_bist_done6_shift                                          (3)
#define BIST_DONE2_gpu_sc1_bist_done6_mask                                           (0x00000008)
#define BIST_DONE2_gpu_sc1_bist_done6(data)                                          (0x00000008&((data)<<3))
#define BIST_DONE2_gpu_sc1_bist_done6_src(data)                                      ((0x00000008&(data))>>3)
#define BIST_DONE2_get_gpu_sc1_bist_done6(data)                                      ((0x00000008&(data))>>3)
#define BIST_DONE2_gpu_sc1_bist_done5_shift                                          (2)
#define BIST_DONE2_gpu_sc1_bist_done5_mask                                           (0x00000004)
#define BIST_DONE2_gpu_sc1_bist_done5(data)                                          (0x00000004&((data)<<2))
#define BIST_DONE2_gpu_sc1_bist_done5_src(data)                                      ((0x00000004&(data))>>2)
#define BIST_DONE2_get_gpu_sc1_bist_done5(data)                                      ((0x00000004&(data))>>2)
#define BIST_DONE2_gpu_sc1_bist_done3_shift                                          (1)
#define BIST_DONE2_gpu_sc1_bist_done3_mask                                           (0x00000002)
#define BIST_DONE2_gpu_sc1_bist_done3(data)                                          (0x00000002&((data)<<1))
#define BIST_DONE2_gpu_sc1_bist_done3_src(data)                                      ((0x00000002&(data))>>1)
#define BIST_DONE2_get_gpu_sc1_bist_done3(data)                                      ((0x00000002&(data))>>1)
#define BIST_DONE2_gpu_sc1_bist_done2_shift                                          (0)
#define BIST_DONE2_gpu_sc1_bist_done2_mask                                           (0x00000001)
#define BIST_DONE2_gpu_sc1_bist_done2(data)                                          (0x00000001&((data)<<0))
#define BIST_DONE2_gpu_sc1_bist_done2_src(data)                                      ((0x00000001&(data))>>0)
#define BIST_DONE2_get_gpu_sc1_bist_done2(data)                                      ((0x00000001&(data))>>0)


#define BIST_DONE3                                                                   0x9805402C
#define BIST_DONE3_reg_addr                                                          "0xD805402C"
#define BIST_DONE3_reg                                                               0xD805402C
#define set_BIST_DONE3_reg(data)   (*((volatile unsigned int*) BIST_DONE3_reg)=data)
#define get_BIST_DONE3_reg   (*((volatile unsigned int*) BIST_DONE3_reg))
#define BIST_DONE3_inst_adr                                                          "0x000B"
#define BIST_DONE3_inst                                                              0x000B
#define BIST_DONE3_gpu_sc2_bist_done14_shift                                         (11)
#define BIST_DONE3_gpu_sc2_bist_done14_mask                                          (0x00000800)
#define BIST_DONE3_gpu_sc2_bist_done14(data)                                         (0x00000800&((data)<<11))
#define BIST_DONE3_gpu_sc2_bist_done14_src(data)                                     ((0x00000800&(data))>>11)
#define BIST_DONE3_get_gpu_sc2_bist_done14(data)                                     ((0x00000800&(data))>>11)
#define BIST_DONE3_gpu_sc2_bist_done13_shift                                         (10)
#define BIST_DONE3_gpu_sc2_bist_done13_mask                                          (0x00000400)
#define BIST_DONE3_gpu_sc2_bist_done13(data)                                         (0x00000400&((data)<<10))
#define BIST_DONE3_gpu_sc2_bist_done13_src(data)                                     ((0x00000400&(data))>>10)
#define BIST_DONE3_get_gpu_sc2_bist_done13(data)                                     ((0x00000400&(data))>>10)
#define BIST_DONE3_gpu_sc2_bist_done12_shift                                         (9)
#define BIST_DONE3_gpu_sc2_bist_done12_mask                                          (0x00000200)
#define BIST_DONE3_gpu_sc2_bist_done12(data)                                         (0x00000200&((data)<<9))
#define BIST_DONE3_gpu_sc2_bist_done12_src(data)                                     ((0x00000200&(data))>>9)
#define BIST_DONE3_get_gpu_sc2_bist_done12(data)                                     ((0x00000200&(data))>>9)
#define BIST_DONE3_gpu_sc2_bist_done11_shift                                         (8)
#define BIST_DONE3_gpu_sc2_bist_done11_mask                                          (0x00000100)
#define BIST_DONE3_gpu_sc2_bist_done11(data)                                         (0x00000100&((data)<<8))
#define BIST_DONE3_gpu_sc2_bist_done11_src(data)                                     ((0x00000100&(data))>>8)
#define BIST_DONE3_get_gpu_sc2_bist_done11(data)                                     ((0x00000100&(data))>>8)
#define BIST_DONE3_gpu_sc2_bist_done10_shift                                         (7)
#define BIST_DONE3_gpu_sc2_bist_done10_mask                                          (0x00000080)
#define BIST_DONE3_gpu_sc2_bist_done10(data)                                         (0x00000080&((data)<<7))
#define BIST_DONE3_gpu_sc2_bist_done10_src(data)                                     ((0x00000080&(data))>>7)
#define BIST_DONE3_get_gpu_sc2_bist_done10(data)                                     ((0x00000080&(data))>>7)
#define BIST_DONE3_gpu_sc2_bist_done9_shift                                          (6)
#define BIST_DONE3_gpu_sc2_bist_done9_mask                                           (0x00000040)
#define BIST_DONE3_gpu_sc2_bist_done9(data)                                          (0x00000040&((data)<<6))
#define BIST_DONE3_gpu_sc2_bist_done9_src(data)                                      ((0x00000040&(data))>>6)
#define BIST_DONE3_get_gpu_sc2_bist_done9(data)                                      ((0x00000040&(data))>>6)
#define BIST_DONE3_gpu_sc2_bist_done8_shift                                          (5)
#define BIST_DONE3_gpu_sc2_bist_done8_mask                                           (0x00000020)
#define BIST_DONE3_gpu_sc2_bist_done8(data)                                          (0x00000020&((data)<<5))
#define BIST_DONE3_gpu_sc2_bist_done8_src(data)                                      ((0x00000020&(data))>>5)
#define BIST_DONE3_get_gpu_sc2_bist_done8(data)                                      ((0x00000020&(data))>>5)
#define BIST_DONE3_gpu_sc2_bist_done7_shift                                          (4)
#define BIST_DONE3_gpu_sc2_bist_done7_mask                                           (0x00000010)
#define BIST_DONE3_gpu_sc2_bist_done7(data)                                          (0x00000010&((data)<<4))
#define BIST_DONE3_gpu_sc2_bist_done7_src(data)                                      ((0x00000010&(data))>>4)
#define BIST_DONE3_get_gpu_sc2_bist_done7(data)                                      ((0x00000010&(data))>>4)
#define BIST_DONE3_gpu_sc2_bist_done6_shift                                          (3)
#define BIST_DONE3_gpu_sc2_bist_done6_mask                                           (0x00000008)
#define BIST_DONE3_gpu_sc2_bist_done6(data)                                          (0x00000008&((data)<<3))
#define BIST_DONE3_gpu_sc2_bist_done6_src(data)                                      ((0x00000008&(data))>>3)
#define BIST_DONE3_get_gpu_sc2_bist_done6(data)                                      ((0x00000008&(data))>>3)
#define BIST_DONE3_gpu_sc2_bist_done5_shift                                          (2)
#define BIST_DONE3_gpu_sc2_bist_done5_mask                                           (0x00000004)
#define BIST_DONE3_gpu_sc2_bist_done5(data)                                          (0x00000004&((data)<<2))
#define BIST_DONE3_gpu_sc2_bist_done5_src(data)                                      ((0x00000004&(data))>>2)
#define BIST_DONE3_get_gpu_sc2_bist_done5(data)                                      ((0x00000004&(data))>>2)
#define BIST_DONE3_gpu_sc2_bist_done3_shift                                          (1)
#define BIST_DONE3_gpu_sc2_bist_done3_mask                                           (0x00000002)
#define BIST_DONE3_gpu_sc2_bist_done3(data)                                          (0x00000002&((data)<<1))
#define BIST_DONE3_gpu_sc2_bist_done3_src(data)                                      ((0x00000002&(data))>>1)
#define BIST_DONE3_get_gpu_sc2_bist_done3(data)                                      ((0x00000002&(data))>>1)
#define BIST_DONE3_gpu_sc2_bist_done2_shift                                          (0)
#define BIST_DONE3_gpu_sc2_bist_done2_mask                                           (0x00000001)
#define BIST_DONE3_gpu_sc2_bist_done2(data)                                          (0x00000001&((data)<<0))
#define BIST_DONE3_gpu_sc2_bist_done2_src(data)                                      ((0x00000001&(data))>>0)
#define BIST_DONE3_get_gpu_sc2_bist_done2(data)                                      ((0x00000001&(data))>>0)


#define DRF_BIST_DONE0                                                               0x98054030
#define DRF_BIST_DONE0_reg_addr                                                      "0xD8054030"
#define DRF_BIST_DONE0_reg                                                           0xD8054030
#define set_DRF_BIST_DONE0_reg(data)   (*((volatile unsigned int*) DRF_BIST_DONE0_reg)=data)
#define get_DRF_BIST_DONE0_reg   (*((volatile unsigned int*) DRF_BIST_DONE0_reg))
#define DRF_BIST_DONE0_inst_adr                                                      "0x000C"
#define DRF_BIST_DONE0_inst                                                          0x000C
#define DRF_BIST_DONE0_gpu_l2_drf_stpu20_shift                                       (11)
#define DRF_BIST_DONE0_gpu_l2_drf_stpu20_mask                                        (0x00000800)
#define DRF_BIST_DONE0_gpu_l2_drf_stpu20(data)                                       (0x00000800&((data)<<11))
#define DRF_BIST_DONE0_gpu_l2_drf_stpu20_src(data)                                   ((0x00000800&(data))>>11)
#define DRF_BIST_DONE0_get_gpu_l2_drf_stpu20(data)                                   ((0x00000800&(data))>>11)
#define DRF_BIST_DONE0_gpu_l2_drf_stpu18_shift                                       (10)
#define DRF_BIST_DONE0_gpu_l2_drf_stpu18_mask                                        (0x00000400)
#define DRF_BIST_DONE0_gpu_l2_drf_stpu18(data)                                       (0x00000400&((data)<<10))
#define DRF_BIST_DONE0_gpu_l2_drf_stpu18_src(data)                                   ((0x00000400&(data))>>10)
#define DRF_BIST_DONE0_get_gpu_l2_drf_stpu18(data)                                   ((0x00000400&(data))>>10)
#define DRF_BIST_DONE0_gpu_l2_drf_stpu17_shift                                       (9)
#define DRF_BIST_DONE0_gpu_l2_drf_stpu17_mask                                        (0x00000200)
#define DRF_BIST_DONE0_gpu_l2_drf_stpu17(data)                                       (0x00000200&((data)<<9))
#define DRF_BIST_DONE0_gpu_l2_drf_stpu17_src(data)                                   ((0x00000200&(data))>>9)
#define DRF_BIST_DONE0_get_gpu_l2_drf_stpu17(data)                                   ((0x00000200&(data))>>9)
#define DRF_BIST_DONE0_gpu_cg_drf_stpu16_shift                                       (8)
#define DRF_BIST_DONE0_gpu_cg_drf_stpu16_mask                                        (0x00000100)
#define DRF_BIST_DONE0_gpu_cg_drf_stpu16(data)                                       (0x00000100&((data)<<8))
#define DRF_BIST_DONE0_gpu_cg_drf_stpu16_src(data)                                   ((0x00000100&(data))>>8)
#define DRF_BIST_DONE0_get_gpu_cg_drf_stpu16(data)                                   ((0x00000100&(data))>>8)
#define DRF_BIST_DONE0_gpu_cg_drf_stpu15_shift                                       (7)
#define DRF_BIST_DONE0_gpu_cg_drf_stpu15_mask                                        (0x00000080)
#define DRF_BIST_DONE0_gpu_cg_drf_stpu15(data)                                       (0x00000080&((data)<<7))
#define DRF_BIST_DONE0_gpu_cg_drf_stpu15_src(data)                                   ((0x00000080&(data))>>7)
#define DRF_BIST_DONE0_get_gpu_cg_drf_stpu15(data)                                   ((0x00000080&(data))>>7)
#define DRF_BIST_DONE0_gpu_jm_drf_stpu1_shift                                        (6)
#define DRF_BIST_DONE0_gpu_jm_drf_stpu1_mask                                         (0x00000040)
#define DRF_BIST_DONE0_gpu_jm_drf_stpu1(data)                                        (0x00000040&((data)<<6))
#define DRF_BIST_DONE0_gpu_jm_drf_stpu1_src(data)                                    ((0x00000040&(data))>>6)
#define DRF_BIST_DONE0_get_gpu_jm_drf_stpu1(data)                                    ((0x00000040&(data))>>6)
#define DRF_BIST_DONE0_gpu_l2_drf_bisr_done20_shift                                  (5)
#define DRF_BIST_DONE0_gpu_l2_drf_bisr_done20_mask                                   (0x00000020)
#define DRF_BIST_DONE0_gpu_l2_drf_bisr_done20(data)                                  (0x00000020&((data)<<5))
#define DRF_BIST_DONE0_gpu_l2_drf_bisr_done20_src(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_DONE0_get_gpu_l2_drf_bisr_done20(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_DONE0_gpu_l2_drf_bist_done18_shift                                  (4)
#define DRF_BIST_DONE0_gpu_l2_drf_bist_done18_mask                                   (0x00000010)
#define DRF_BIST_DONE0_gpu_l2_drf_bist_done18(data)                                  (0x00000010&((data)<<4))
#define DRF_BIST_DONE0_gpu_l2_drf_bist_done18_src(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_DONE0_get_gpu_l2_drf_bist_done18(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_DONE0_gpu_l2_drf_bist_done17_shift                                  (3)
#define DRF_BIST_DONE0_gpu_l2_drf_bist_done17_mask                                   (0x00000008)
#define DRF_BIST_DONE0_gpu_l2_drf_bist_done17(data)                                  (0x00000008&((data)<<3))
#define DRF_BIST_DONE0_gpu_l2_drf_bist_done17_src(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_DONE0_get_gpu_l2_drf_bist_done17(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_DONE0_gpu_cg_drf_bist_done16_shift                                  (2)
#define DRF_BIST_DONE0_gpu_cg_drf_bist_done16_mask                                   (0x00000004)
#define DRF_BIST_DONE0_gpu_cg_drf_bist_done16(data)                                  (0x00000004&((data)<<2))
#define DRF_BIST_DONE0_gpu_cg_drf_bist_done16_src(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_DONE0_get_gpu_cg_drf_bist_done16(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_DONE0_gpu_cg_drf_bist_done15_shift                                  (1)
#define DRF_BIST_DONE0_gpu_cg_drf_bist_done15_mask                                   (0x00000002)
#define DRF_BIST_DONE0_gpu_cg_drf_bist_done15(data)                                  (0x00000002&((data)<<1))
#define DRF_BIST_DONE0_gpu_cg_drf_bist_done15_src(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_DONE0_get_gpu_cg_drf_bist_done15(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_DONE0_gpu_jm_drf_bist_done1_shift                                   (0)
#define DRF_BIST_DONE0_gpu_jm_drf_bist_done1_mask                                    (0x00000001)
#define DRF_BIST_DONE0_gpu_jm_drf_bist_done1(data)                                   (0x00000001&((data)<<0))
#define DRF_BIST_DONE0_gpu_jm_drf_bist_done1_src(data)                               ((0x00000001&(data))>>0)
#define DRF_BIST_DONE0_get_gpu_jm_drf_bist_done1(data)                               ((0x00000001&(data))>>0)


#define DRF_BIST_DONE1                                                               0x98054034
#define DRF_BIST_DONE1_reg_addr                                                      "0xD8054034"
#define DRF_BIST_DONE1_reg                                                           0xD8054034
#define set_DRF_BIST_DONE1_reg(data)   (*((volatile unsigned int*) DRF_BIST_DONE1_reg)=data)
#define get_DRF_BIST_DONE1_reg   (*((volatile unsigned int*) DRF_BIST_DONE1_reg))
#define DRF_BIST_DONE1_inst_adr                                                      "0x000D"
#define DRF_BIST_DONE1_inst                                                          0x000D
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu14_shift                                      (23)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu14_mask                                       (0x00800000)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu14(data)                                      (0x00800000&((data)<<23))
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu14_src(data)                                  ((0x00800000&(data))>>23)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_stpu14(data)                                  ((0x00800000&(data))>>23)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu13_shift                                      (22)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu13_mask                                       (0x00400000)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu13(data)                                      (0x00400000&((data)<<22))
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu13_src(data)                                  ((0x00400000&(data))>>22)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_stpu13(data)                                  ((0x00400000&(data))>>22)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu12_shift                                      (21)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu12_mask                                       (0x00200000)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu12(data)                                      (0x00200000&((data)<<21))
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu12_src(data)                                  ((0x00200000&(data))>>21)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_stpu12(data)                                  ((0x00200000&(data))>>21)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu11_shift                                      (20)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu11_mask                                       (0x00100000)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu11(data)                                      (0x00100000&((data)<<20))
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu11_src(data)                                  ((0x00100000&(data))>>20)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_stpu11(data)                                  ((0x00100000&(data))>>20)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu10_shift                                      (19)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu10_mask                                       (0x00080000)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu10(data)                                      (0x00080000&((data)<<19))
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu10_src(data)                                  ((0x00080000&(data))>>19)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_stpu10(data)                                  ((0x00080000&(data))>>19)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu9_shift                                       (18)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu9_mask                                        (0x00040000)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu9(data)                                       (0x00040000&((data)<<18))
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu9_src(data)                                   ((0x00040000&(data))>>18)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_stpu9(data)                                   ((0x00040000&(data))>>18)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu8_shift                                       (17)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu8_mask                                        (0x00020000)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu8(data)                                       (0x00020000&((data)<<17))
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu8_src(data)                                   ((0x00020000&(data))>>17)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_stpu8(data)                                   ((0x00020000&(data))>>17)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu7_shift                                       (16)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu7_mask                                        (0x00010000)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu7(data)                                       (0x00010000&((data)<<16))
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu7_src(data)                                   ((0x00010000&(data))>>16)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_stpu7(data)                                   ((0x00010000&(data))>>16)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu6_shift                                       (15)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu6_mask                                        (0x00008000)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu6(data)                                       (0x00008000&((data)<<15))
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu6_src(data)                                   ((0x00008000&(data))>>15)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_stpu6(data)                                   ((0x00008000&(data))>>15)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu5_shift                                       (14)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu5_mask                                        (0x00004000)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu5(data)                                       (0x00004000&((data)<<14))
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu5_src(data)                                   ((0x00004000&(data))>>14)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_stpu5(data)                                   ((0x00004000&(data))>>14)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu3_shift                                       (13)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu3_mask                                        (0x00002000)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu3(data)                                       (0x00002000&((data)<<13))
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu3_src(data)                                   ((0x00002000&(data))>>13)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_stpu3(data)                                   ((0x00002000&(data))>>13)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu2_shift                                       (12)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu2_mask                                        (0x00001000)
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu2(data)                                       (0x00001000&((data)<<12))
#define DRF_BIST_DONE1_gpu_sc0_drf_stpu2_src(data)                                   ((0x00001000&(data))>>12)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_stpu2(data)                                   ((0x00001000&(data))>>12)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done14_shift                                 (11)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done14_mask                                  (0x00000800)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done14(data)                                 (0x00000800&((data)<<11))
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done14_src(data)                             ((0x00000800&(data))>>11)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_bist_done14(data)                             ((0x00000800&(data))>>11)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done13_shift                                 (10)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done13_mask                                  (0x00000400)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done13(data)                                 (0x00000400&((data)<<10))
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done13_src(data)                             ((0x00000400&(data))>>10)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_bist_done13(data)                             ((0x00000400&(data))>>10)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done12_shift                                 (9)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done12_mask                                  (0x00000200)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done12(data)                                 (0x00000200&((data)<<9))
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done12_src(data)                             ((0x00000200&(data))>>9)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_bist_done12(data)                             ((0x00000200&(data))>>9)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done11_shift                                 (8)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done11_mask                                  (0x00000100)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done11(data)                                 (0x00000100&((data)<<8))
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done11_src(data)                             ((0x00000100&(data))>>8)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_bist_done11(data)                             ((0x00000100&(data))>>8)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done10_shift                                 (7)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done10_mask                                  (0x00000080)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done10(data)                                 (0x00000080&((data)<<7))
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done10_src(data)                             ((0x00000080&(data))>>7)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_bist_done10(data)                             ((0x00000080&(data))>>7)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done9_shift                                  (6)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done9_mask                                   (0x00000040)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done9(data)                                  (0x00000040&((data)<<6))
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done9_src(data)                              ((0x00000040&(data))>>6)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_bist_done9(data)                              ((0x00000040&(data))>>6)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done8_shift                                  (5)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done8_mask                                   (0x00000020)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done8(data)                                  (0x00000020&((data)<<5))
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done8_src(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_bist_done8(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done7_shift                                  (4)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done7_mask                                   (0x00000010)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done7(data)                                  (0x00000010&((data)<<4))
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done7_src(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_bist_done7(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done6_shift                                  (3)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done6_mask                                   (0x00000008)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done6(data)                                  (0x00000008&((data)<<3))
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done6_src(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_bist_done6(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done5_shift                                  (2)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done5_mask                                   (0x00000004)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done5(data)                                  (0x00000004&((data)<<2))
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done5_src(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_bist_done5(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done3_shift                                  (1)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done3_mask                                   (0x00000002)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done3(data)                                  (0x00000002&((data)<<1))
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done3_src(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_bist_done3(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done2_shift                                  (0)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done2_mask                                   (0x00000001)
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done2(data)                                  (0x00000001&((data)<<0))
#define DRF_BIST_DONE1_gpu_sc0_drf_bist_done2_src(data)                              ((0x00000001&(data))>>0)
#define DRF_BIST_DONE1_get_gpu_sc0_drf_bist_done2(data)                              ((0x00000001&(data))>>0)


#define DRF_BIST_DONE2                                                               0x98054038
#define DRF_BIST_DONE2_reg_addr                                                      "0xD8054038"
#define DRF_BIST_DONE2_reg                                                           0xD8054038
#define set_DRF_BIST_DONE2_reg(data)   (*((volatile unsigned int*) DRF_BIST_DONE2_reg)=data)
#define get_DRF_BIST_DONE2_reg   (*((volatile unsigned int*) DRF_BIST_DONE2_reg))
#define DRF_BIST_DONE2_inst_adr                                                      "0x000E"
#define DRF_BIST_DONE2_inst                                                          0x000E
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu14_shift                                      (23)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu14_mask                                       (0x00800000)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu14(data)                                      (0x00800000&((data)<<23))
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu14_src(data)                                  ((0x00800000&(data))>>23)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_stpu14(data)                                  ((0x00800000&(data))>>23)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu13_shift                                      (22)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu13_mask                                       (0x00400000)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu13(data)                                      (0x00400000&((data)<<22))
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu13_src(data)                                  ((0x00400000&(data))>>22)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_stpu13(data)                                  ((0x00400000&(data))>>22)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu12_shift                                      (21)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu12_mask                                       (0x00200000)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu12(data)                                      (0x00200000&((data)<<21))
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu12_src(data)                                  ((0x00200000&(data))>>21)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_stpu12(data)                                  ((0x00200000&(data))>>21)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu11_shift                                      (20)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu11_mask                                       (0x00100000)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu11(data)                                      (0x00100000&((data)<<20))
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu11_src(data)                                  ((0x00100000&(data))>>20)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_stpu11(data)                                  ((0x00100000&(data))>>20)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu10_shift                                      (19)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu10_mask                                       (0x00080000)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu10(data)                                      (0x00080000&((data)<<19))
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu10_src(data)                                  ((0x00080000&(data))>>19)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_stpu10(data)                                  ((0x00080000&(data))>>19)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu9_shift                                       (18)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu9_mask                                        (0x00040000)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu9(data)                                       (0x00040000&((data)<<18))
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu9_src(data)                                   ((0x00040000&(data))>>18)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_stpu9(data)                                   ((0x00040000&(data))>>18)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu8_shift                                       (17)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu8_mask                                        (0x00020000)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu8(data)                                       (0x00020000&((data)<<17))
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu8_src(data)                                   ((0x00020000&(data))>>17)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_stpu8(data)                                   ((0x00020000&(data))>>17)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu7_shift                                       (16)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu7_mask                                        (0x00010000)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu7(data)                                       (0x00010000&((data)<<16))
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu7_src(data)                                   ((0x00010000&(data))>>16)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_stpu7(data)                                   ((0x00010000&(data))>>16)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu6_shift                                       (15)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu6_mask                                        (0x00008000)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu6(data)                                       (0x00008000&((data)<<15))
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu6_src(data)                                   ((0x00008000&(data))>>15)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_stpu6(data)                                   ((0x00008000&(data))>>15)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu5_shift                                       (14)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu5_mask                                        (0x00004000)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu5(data)                                       (0x00004000&((data)<<14))
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu5_src(data)                                   ((0x00004000&(data))>>14)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_stpu5(data)                                   ((0x00004000&(data))>>14)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu3_shift                                       (13)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu3_mask                                        (0x00002000)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu3(data)                                       (0x00002000&((data)<<13))
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu3_src(data)                                   ((0x00002000&(data))>>13)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_stpu3(data)                                   ((0x00002000&(data))>>13)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu2_shift                                       (12)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu2_mask                                        (0x00001000)
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu2(data)                                       (0x00001000&((data)<<12))
#define DRF_BIST_DONE2_gpu_sc1_drf_stpu2_src(data)                                   ((0x00001000&(data))>>12)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_stpu2(data)                                   ((0x00001000&(data))>>12)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done14_shift                                 (11)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done14_mask                                  (0x00000800)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done14(data)                                 (0x00000800&((data)<<11))
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done14_src(data)                             ((0x00000800&(data))>>11)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_bist_done14(data)                             ((0x00000800&(data))>>11)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done13_shift                                 (10)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done13_mask                                  (0x00000400)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done13(data)                                 (0x00000400&((data)<<10))
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done13_src(data)                             ((0x00000400&(data))>>10)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_bist_done13(data)                             ((0x00000400&(data))>>10)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done12_shift                                 (9)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done12_mask                                  (0x00000200)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done12(data)                                 (0x00000200&((data)<<9))
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done12_src(data)                             ((0x00000200&(data))>>9)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_bist_done12(data)                             ((0x00000200&(data))>>9)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done11_shift                                 (8)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done11_mask                                  (0x00000100)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done11(data)                                 (0x00000100&((data)<<8))
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done11_src(data)                             ((0x00000100&(data))>>8)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_bist_done11(data)                             ((0x00000100&(data))>>8)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done10_shift                                 (7)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done10_mask                                  (0x00000080)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done10(data)                                 (0x00000080&((data)<<7))
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done10_src(data)                             ((0x00000080&(data))>>7)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_bist_done10(data)                             ((0x00000080&(data))>>7)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done9_shift                                  (6)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done9_mask                                   (0x00000040)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done9(data)                                  (0x00000040&((data)<<6))
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done9_src(data)                              ((0x00000040&(data))>>6)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_bist_done9(data)                              ((0x00000040&(data))>>6)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done8_shift                                  (5)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done8_mask                                   (0x00000020)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done8(data)                                  (0x00000020&((data)<<5))
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done8_src(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_bist_done8(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done7_shift                                  (4)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done7_mask                                   (0x00000010)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done7(data)                                  (0x00000010&((data)<<4))
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done7_src(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_bist_done7(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done6_shift                                  (3)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done6_mask                                   (0x00000008)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done6(data)                                  (0x00000008&((data)<<3))
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done6_src(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_bist_done6(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done5_shift                                  (2)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done5_mask                                   (0x00000004)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done5(data)                                  (0x00000004&((data)<<2))
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done5_src(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_bist_done5(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done3_shift                                  (1)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done3_mask                                   (0x00000002)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done3(data)                                  (0x00000002&((data)<<1))
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done3_src(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_bist_done3(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done2_shift                                  (0)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done2_mask                                   (0x00000001)
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done2(data)                                  (0x00000001&((data)<<0))
#define DRF_BIST_DONE2_gpu_sc1_drf_bist_done2_src(data)                              ((0x00000001&(data))>>0)
#define DRF_BIST_DONE2_get_gpu_sc1_drf_bist_done2(data)                              ((0x00000001&(data))>>0)


#define DRF_BIST_DONE3                                                               0x9805403C
#define DRF_BIST_DONE3_reg_addr                                                      "0xD805403C"
#define DRF_BIST_DONE3_reg                                                           0xD805403C
#define set_DRF_BIST_DONE3_reg(data)   (*((volatile unsigned int*) DRF_BIST_DONE3_reg)=data)
#define get_DRF_BIST_DONE3_reg   (*((volatile unsigned int*) DRF_BIST_DONE3_reg))
#define DRF_BIST_DONE3_inst_adr                                                      "0x000F"
#define DRF_BIST_DONE3_inst                                                          0x000F
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu14_shift                                      (23)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu14_mask                                       (0x00800000)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu14(data)                                      (0x00800000&((data)<<23))
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu14_src(data)                                  ((0x00800000&(data))>>23)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_stpu14(data)                                  ((0x00800000&(data))>>23)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu13_shift                                      (22)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu13_mask                                       (0x00400000)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu13(data)                                      (0x00400000&((data)<<22))
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu13_src(data)                                  ((0x00400000&(data))>>22)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_stpu13(data)                                  ((0x00400000&(data))>>22)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu12_shift                                      (21)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu12_mask                                       (0x00200000)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu12(data)                                      (0x00200000&((data)<<21))
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu12_src(data)                                  ((0x00200000&(data))>>21)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_stpu12(data)                                  ((0x00200000&(data))>>21)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu11_shift                                      (20)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu11_mask                                       (0x00100000)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu11(data)                                      (0x00100000&((data)<<20))
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu11_src(data)                                  ((0x00100000&(data))>>20)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_stpu11(data)                                  ((0x00100000&(data))>>20)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu10_shift                                      (19)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu10_mask                                       (0x00080000)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu10(data)                                      (0x00080000&((data)<<19))
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu10_src(data)                                  ((0x00080000&(data))>>19)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_stpu10(data)                                  ((0x00080000&(data))>>19)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu9_shift                                       (18)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu9_mask                                        (0x00040000)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu9(data)                                       (0x00040000&((data)<<18))
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu9_src(data)                                   ((0x00040000&(data))>>18)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_stpu9(data)                                   ((0x00040000&(data))>>18)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu8_shift                                       (17)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu8_mask                                        (0x00020000)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu8(data)                                       (0x00020000&((data)<<17))
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu8_src(data)                                   ((0x00020000&(data))>>17)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_stpu8(data)                                   ((0x00020000&(data))>>17)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu7_shift                                       (16)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu7_mask                                        (0x00010000)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu7(data)                                       (0x00010000&((data)<<16))
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu7_src(data)                                   ((0x00010000&(data))>>16)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_stpu7(data)                                   ((0x00010000&(data))>>16)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu6_shift                                       (15)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu6_mask                                        (0x00008000)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu6(data)                                       (0x00008000&((data)<<15))
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu6_src(data)                                   ((0x00008000&(data))>>15)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_stpu6(data)                                   ((0x00008000&(data))>>15)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu5_shift                                       (14)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu5_mask                                        (0x00004000)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu5(data)                                       (0x00004000&((data)<<14))
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu5_src(data)                                   ((0x00004000&(data))>>14)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_stpu5(data)                                   ((0x00004000&(data))>>14)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu3_shift                                       (13)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu3_mask                                        (0x00002000)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu3(data)                                       (0x00002000&((data)<<13))
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu3_src(data)                                   ((0x00002000&(data))>>13)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_stpu3(data)                                   ((0x00002000&(data))>>13)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu2_shift                                       (12)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu2_mask                                        (0x00001000)
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu2(data)                                       (0x00001000&((data)<<12))
#define DRF_BIST_DONE3_gpu_sc2_drf_stpu2_src(data)                                   ((0x00001000&(data))>>12)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_stpu2(data)                                   ((0x00001000&(data))>>12)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done14_shift                                 (11)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done14_mask                                  (0x00000800)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done14(data)                                 (0x00000800&((data)<<11))
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done14_src(data)                             ((0x00000800&(data))>>11)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_bist_done14(data)                             ((0x00000800&(data))>>11)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done13_shift                                 (10)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done13_mask                                  (0x00000400)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done13(data)                                 (0x00000400&((data)<<10))
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done13_src(data)                             ((0x00000400&(data))>>10)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_bist_done13(data)                             ((0x00000400&(data))>>10)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done12_shift                                 (9)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done12_mask                                  (0x00000200)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done12(data)                                 (0x00000200&((data)<<9))
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done12_src(data)                             ((0x00000200&(data))>>9)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_bist_done12(data)                             ((0x00000200&(data))>>9)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done11_shift                                 (8)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done11_mask                                  (0x00000100)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done11(data)                                 (0x00000100&((data)<<8))
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done11_src(data)                             ((0x00000100&(data))>>8)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_bist_done11(data)                             ((0x00000100&(data))>>8)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done10_shift                                 (7)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done10_mask                                  (0x00000080)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done10(data)                                 (0x00000080&((data)<<7))
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done10_src(data)                             ((0x00000080&(data))>>7)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_bist_done10(data)                             ((0x00000080&(data))>>7)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done9_shift                                  (6)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done9_mask                                   (0x00000040)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done9(data)                                  (0x00000040&((data)<<6))
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done9_src(data)                              ((0x00000040&(data))>>6)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_bist_done9(data)                              ((0x00000040&(data))>>6)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done8_shift                                  (5)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done8_mask                                   (0x00000020)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done8(data)                                  (0x00000020&((data)<<5))
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done8_src(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_bist_done8(data)                              ((0x00000020&(data))>>5)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done7_shift                                  (4)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done7_mask                                   (0x00000010)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done7(data)                                  (0x00000010&((data)<<4))
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done7_src(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_bist_done7(data)                              ((0x00000010&(data))>>4)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done6_shift                                  (3)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done6_mask                                   (0x00000008)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done6(data)                                  (0x00000008&((data)<<3))
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done6_src(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_bist_done6(data)                              ((0x00000008&(data))>>3)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done5_shift                                  (2)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done5_mask                                   (0x00000004)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done5(data)                                  (0x00000004&((data)<<2))
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done5_src(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_bist_done5(data)                              ((0x00000004&(data))>>2)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done3_shift                                  (1)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done3_mask                                   (0x00000002)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done3(data)                                  (0x00000002&((data)<<1))
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done3_src(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_bist_done3(data)                              ((0x00000002&(data))>>1)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done2_shift                                  (0)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done2_mask                                   (0x00000001)
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done2(data)                                  (0x00000001&((data)<<0))
#define DRF_BIST_DONE3_gpu_sc2_drf_bist_done2_src(data)                              ((0x00000001&(data))>>0)
#define DRF_BIST_DONE3_get_gpu_sc2_drf_bist_done2(data)                              ((0x00000001&(data))>>0)


#define BIST_RESULT0                                                                 0x98054040
#define BIST_RESULT0_reg_addr                                                        "0xD8054040"
#define BIST_RESULT0_reg                                                             0xD8054040
#define set_BIST_RESULT0_reg(data)   (*((volatile unsigned int*) BIST_RESULT0_reg)=data)
#define get_BIST_RESULT0_reg   (*((volatile unsigned int*) BIST_RESULT0_reg))
#define BIST_RESULT0_inst_adr                                                        "0x0010"
#define BIST_RESULT0_inst                                                            0x0010
#define BIST_RESULT0_gpu_l2_bist_fail17_shift                                        (16)
#define BIST_RESULT0_gpu_l2_bist_fail17_mask                                         (0x03FF0000)
#define BIST_RESULT0_gpu_l2_bist_fail17(data)                                        (0x03FF0000&((data)<<16))
#define BIST_RESULT0_gpu_l2_bist_fail17_src(data)                                    ((0x03FF0000&(data))>>16)
#define BIST_RESULT0_get_gpu_l2_bist_fail17(data)                                    ((0x03FF0000&(data))>>16)
#define BIST_RESULT0_gpu_cg_bist_fail16_shift                                        (9)
#define BIST_RESULT0_gpu_cg_bist_fail16_mask                                         (0x0000FE00)
#define BIST_RESULT0_gpu_cg_bist_fail16(data)                                        (0x0000FE00&((data)<<9))
#define BIST_RESULT0_gpu_cg_bist_fail16_src(data)                                    ((0x0000FE00&(data))>>9)
#define BIST_RESULT0_get_gpu_cg_bist_fail16(data)                                    ((0x0000FE00&(data))>>9)
#define BIST_RESULT0_gpu_cg_bist_fail15_shift                                        (2)
#define BIST_RESULT0_gpu_cg_bist_fail15_mask                                         (0x000001FC)
#define BIST_RESULT0_gpu_cg_bist_fail15(data)                                        (0x000001FC&((data)<<2))
#define BIST_RESULT0_gpu_cg_bist_fail15_src(data)                                    ((0x000001FC&(data))>>2)
#define BIST_RESULT0_get_gpu_cg_bist_fail15(data)                                    ((0x000001FC&(data))>>2)
#define BIST_RESULT0_gpu_jm_bist_fail1_shift                                         (0)
#define BIST_RESULT0_gpu_jm_bist_fail1_mask                                          (0x00000003)
#define BIST_RESULT0_gpu_jm_bist_fail1(data)                                         (0x00000003&((data)<<0))
#define BIST_RESULT0_gpu_jm_bist_fail1_src(data)                                     ((0x00000003&(data))>>0)
#define BIST_RESULT0_get_gpu_jm_bist_fail1(data)                                     ((0x00000003&(data))>>0)


#define BIST_RESULT1                                                                 0x98054044
#define BIST_RESULT1_reg_addr                                                        "0xD8054044"
#define BIST_RESULT1_reg                                                             0xD8054044
#define set_BIST_RESULT1_reg(data)   (*((volatile unsigned int*) BIST_RESULT1_reg)=data)
#define get_BIST_RESULT1_reg   (*((volatile unsigned int*) BIST_RESULT1_reg))
#define BIST_RESULT1_inst_adr                                                        "0x0011"
#define BIST_RESULT1_inst                                                            0x0011
#define BIST_RESULT1_gpu_l2_bist_fail18_shift                                        (4)
#define BIST_RESULT1_gpu_l2_bist_fail18_mask                                         (0x00001FF0)
#define BIST_RESULT1_gpu_l2_bist_fail18(data)                                        (0x00001FF0&((data)<<4))
#define BIST_RESULT1_gpu_l2_bist_fail18_src(data)                                    ((0x00001FF0&(data))>>4)
#define BIST_RESULT1_get_gpu_l2_bist_fail18(data)                                    ((0x00001FF0&(data))>>4)
#define BIST_RESULT1_gpu_l2_bisr_fail20_shift                                        (0)
#define BIST_RESULT1_gpu_l2_bisr_fail20_mask                                         (0x0000000F)
#define BIST_RESULT1_gpu_l2_bisr_fail20(data)                                        (0x0000000F&((data)<<0))
#define BIST_RESULT1_gpu_l2_bisr_fail20_src(data)                                    ((0x0000000F&(data))>>0)
#define BIST_RESULT1_get_gpu_l2_bisr_fail20(data)                                    ((0x0000000F&(data))>>0)


#define BIST_RESULT2                                                                 0x98054048
#define BIST_RESULT2_reg_addr                                                        "0xD8054048"
#define BIST_RESULT2_reg                                                             0xD8054048
#define set_BIST_RESULT2_reg(data)   (*((volatile unsigned int*) BIST_RESULT2_reg)=data)
#define get_BIST_RESULT2_reg   (*((volatile unsigned int*) BIST_RESULT2_reg))
#define BIST_RESULT2_inst_adr                                                        "0x0012"
#define BIST_RESULT2_inst                                                            0x0012
#define BIST_RESULT2_gpu_sc0_bist_fail6_shift                                        (28)
#define BIST_RESULT2_gpu_sc0_bist_fail6_mask                                         (0xF0000000)
#define BIST_RESULT2_gpu_sc0_bist_fail6(data)                                        (0xF0000000&((data)<<28))
#define BIST_RESULT2_gpu_sc0_bist_fail6_src(data)                                    ((0xF0000000&(data))>>28)
#define BIST_RESULT2_get_gpu_sc0_bist_fail6(data)                                    ((0xF0000000&(data))>>28)
#define BIST_RESULT2_gpu_sc0_bist_fail5_shift                                        (18)
#define BIST_RESULT2_gpu_sc0_bist_fail5_mask                                         (0x0FFC0000)
#define BIST_RESULT2_gpu_sc0_bist_fail5(data)                                        (0x0FFC0000&((data)<<18))
#define BIST_RESULT2_gpu_sc0_bist_fail5_src(data)                                    ((0x0FFC0000&(data))>>18)
#define BIST_RESULT2_get_gpu_sc0_bist_fail5(data)                                    ((0x0FFC0000&(data))>>18)
#define BIST_RESULT2_gpu_sc0_bist_fail3_shift                                        (10)
#define BIST_RESULT2_gpu_sc0_bist_fail3_mask                                         (0x0003FC00)
#define BIST_RESULT2_gpu_sc0_bist_fail3(data)                                        (0x0003FC00&((data)<<10))
#define BIST_RESULT2_gpu_sc0_bist_fail3_src(data)                                    ((0x0003FC00&(data))>>10)
#define BIST_RESULT2_get_gpu_sc0_bist_fail3(data)                                    ((0x0003FC00&(data))>>10)
#define BIST_RESULT2_gpu_sc0_bist_fail2_shift                                        (0)
#define BIST_RESULT2_gpu_sc0_bist_fail2_mask                                         (0x000003FF)
#define BIST_RESULT2_gpu_sc0_bist_fail2(data)                                        (0x000003FF&((data)<<0))
#define BIST_RESULT2_gpu_sc0_bist_fail2_src(data)                                    ((0x000003FF&(data))>>0)
#define BIST_RESULT2_get_gpu_sc0_bist_fail2(data)                                    ((0x000003FF&(data))>>0)


#define BIST_RESULT3                                                                 0x9805404C
#define BIST_RESULT3_reg_addr                                                        "0xD805404C"
#define BIST_RESULT3_reg                                                             0xD805404C
#define set_BIST_RESULT3_reg(data)   (*((volatile unsigned int*) BIST_RESULT3_reg)=data)
#define get_BIST_RESULT3_reg   (*((volatile unsigned int*) BIST_RESULT3_reg))
#define BIST_RESULT3_inst_adr                                                        "0x0013"
#define BIST_RESULT3_inst                                                            0x0013
#define BIST_RESULT3_gpu_sc0_bist_fail10_shift                                       (24)
#define BIST_RESULT3_gpu_sc0_bist_fail10_mask                                        (0x0F000000)
#define BIST_RESULT3_gpu_sc0_bist_fail10(data)                                       (0x0F000000&((data)<<24))
#define BIST_RESULT3_gpu_sc0_bist_fail10_src(data)                                   ((0x0F000000&(data))>>24)
#define BIST_RESULT3_get_gpu_sc0_bist_fail10(data)                                   ((0x0F000000&(data))>>24)
#define BIST_RESULT3_gpu_sc0_bist_fail9_shift                                        (14)
#define BIST_RESULT3_gpu_sc0_bist_fail9_mask                                         (0x00FFC000)
#define BIST_RESULT3_gpu_sc0_bist_fail9(data)                                        (0x00FFC000&((data)<<14))
#define BIST_RESULT3_gpu_sc0_bist_fail9_src(data)                                    ((0x00FFC000&(data))>>14)
#define BIST_RESULT3_get_gpu_sc0_bist_fail9(data)                                    ((0x00FFC000&(data))>>14)
#define BIST_RESULT3_gpu_sc0_bist_fail8_shift                                        (10)
#define BIST_RESULT3_gpu_sc0_bist_fail8_mask                                         (0x00003C00)
#define BIST_RESULT3_gpu_sc0_bist_fail8(data)                                        (0x00003C00&((data)<<10))
#define BIST_RESULT3_gpu_sc0_bist_fail8_src(data)                                    ((0x00003C00&(data))>>10)
#define BIST_RESULT3_get_gpu_sc0_bist_fail8(data)                                    ((0x00003C00&(data))>>10)
#define BIST_RESULT3_gpu_sc0_bist_fail7_shift                                        (0)
#define BIST_RESULT3_gpu_sc0_bist_fail7_mask                                         (0x000003FF)
#define BIST_RESULT3_gpu_sc0_bist_fail7(data)                                        (0x000003FF&((data)<<0))
#define BIST_RESULT3_gpu_sc0_bist_fail7_src(data)                                    ((0x000003FF&(data))>>0)
#define BIST_RESULT3_get_gpu_sc0_bist_fail7(data)                                    ((0x000003FF&(data))>>0)


#define BIST_RESULT4                                                                 0x98054050
#define BIST_RESULT4_reg_addr                                                        "0xD8054050"
#define BIST_RESULT4_reg                                                             0xD8054050
#define set_BIST_RESULT4_reg(data)   (*((volatile unsigned int*) BIST_RESULT4_reg)=data)
#define get_BIST_RESULT4_reg   (*((volatile unsigned int*) BIST_RESULT4_reg))
#define BIST_RESULT4_inst_adr                                                        "0x0014"
#define BIST_RESULT4_inst                                                            0x0014
#define BIST_RESULT4_gpu_sc0_bist_fail11_shift                                       (10)
#define BIST_RESULT4_gpu_sc0_bist_fail11_mask                                        (0x000FFC00)
#define BIST_RESULT4_gpu_sc0_bist_fail11(data)                                       (0x000FFC00&((data)<<10))
#define BIST_RESULT4_gpu_sc0_bist_fail11_src(data)                                   ((0x000FFC00&(data))>>10)
#define BIST_RESULT4_get_gpu_sc0_bist_fail11(data)                                   ((0x000FFC00&(data))>>10)
#define BIST_RESULT4_gpu_sc0_bist_fail12_shift                                       (6)
#define BIST_RESULT4_gpu_sc0_bist_fail12_mask                                        (0x000003C0)
#define BIST_RESULT4_gpu_sc0_bist_fail12(data)                                       (0x000003C0&((data)<<6))
#define BIST_RESULT4_gpu_sc0_bist_fail12_src(data)                                   ((0x000003C0&(data))>>6)
#define BIST_RESULT4_get_gpu_sc0_bist_fail12(data)                                   ((0x000003C0&(data))>>6)
#define BIST_RESULT4_gpu_sc0_bist_fail13_shift                                       (2)
#define BIST_RESULT4_gpu_sc0_bist_fail13_mask                                        (0x0000003C)
#define BIST_RESULT4_gpu_sc0_bist_fail13(data)                                       (0x0000003C&((data)<<2))
#define BIST_RESULT4_gpu_sc0_bist_fail13_src(data)                                   ((0x0000003C&(data))>>2)
#define BIST_RESULT4_get_gpu_sc0_bist_fail13(data)                                   ((0x0000003C&(data))>>2)
#define BIST_RESULT4_gpu_sc0_bist_fail14_shift                                       (0)
#define BIST_RESULT4_gpu_sc0_bist_fail14_mask                                        (0x00000003)
#define BIST_RESULT4_gpu_sc0_bist_fail14(data)                                       (0x00000003&((data)<<0))
#define BIST_RESULT4_gpu_sc0_bist_fail14_src(data)                                   ((0x00000003&(data))>>0)
#define BIST_RESULT4_get_gpu_sc0_bist_fail14(data)                                   ((0x00000003&(data))>>0)


#define BIST_RESULT5                                                                 0x98054054
#define BIST_RESULT5_reg_addr                                                        "0xD8054054"
#define BIST_RESULT5_reg                                                             0xD8054054
#define set_BIST_RESULT5_reg(data)   (*((volatile unsigned int*) BIST_RESULT5_reg)=data)
#define get_BIST_RESULT5_reg   (*((volatile unsigned int*) BIST_RESULT5_reg))
#define BIST_RESULT5_inst_adr                                                        "0x0015"
#define BIST_RESULT5_inst                                                            0x0015
#define BIST_RESULT5_gpu_sc1_bist_fail6_shift                                        (28)
#define BIST_RESULT5_gpu_sc1_bist_fail6_mask                                         (0xF0000000)
#define BIST_RESULT5_gpu_sc1_bist_fail6(data)                                        (0xF0000000&((data)<<28))
#define BIST_RESULT5_gpu_sc1_bist_fail6_src(data)                                    ((0xF0000000&(data))>>28)
#define BIST_RESULT5_get_gpu_sc1_bist_fail6(data)                                    ((0xF0000000&(data))>>28)
#define BIST_RESULT5_gpu_sc1_bist_fail5_shift                                        (18)
#define BIST_RESULT5_gpu_sc1_bist_fail5_mask                                         (0x0FFC0000)
#define BIST_RESULT5_gpu_sc1_bist_fail5(data)                                        (0x0FFC0000&((data)<<18))
#define BIST_RESULT5_gpu_sc1_bist_fail5_src(data)                                    ((0x0FFC0000&(data))>>18)
#define BIST_RESULT5_get_gpu_sc1_bist_fail5(data)                                    ((0x0FFC0000&(data))>>18)
#define BIST_RESULT5_gpu_sc1_bist_fail3_shift                                        (10)
#define BIST_RESULT5_gpu_sc1_bist_fail3_mask                                         (0x0003FC00)
#define BIST_RESULT5_gpu_sc1_bist_fail3(data)                                        (0x0003FC00&((data)<<10))
#define BIST_RESULT5_gpu_sc1_bist_fail3_src(data)                                    ((0x0003FC00&(data))>>10)
#define BIST_RESULT5_get_gpu_sc1_bist_fail3(data)                                    ((0x0003FC00&(data))>>10)
#define BIST_RESULT5_gpu_sc1_bist_fail2_shift                                        (0)
#define BIST_RESULT5_gpu_sc1_bist_fail2_mask                                         (0x000003FF)
#define BIST_RESULT5_gpu_sc1_bist_fail2(data)                                        (0x000003FF&((data)<<0))
#define BIST_RESULT5_gpu_sc1_bist_fail2_src(data)                                    ((0x000003FF&(data))>>0)
#define BIST_RESULT5_get_gpu_sc1_bist_fail2(data)                                    ((0x000003FF&(data))>>0)


#define BIST_RESULT6                                                                 0x98054058
#define BIST_RESULT6_reg_addr                                                        "0xD8054058"
#define BIST_RESULT6_reg                                                             0xD8054058
#define set_BIST_RESULT6_reg(data)   (*((volatile unsigned int*) BIST_RESULT6_reg)=data)
#define get_BIST_RESULT6_reg   (*((volatile unsigned int*) BIST_RESULT6_reg))
#define BIST_RESULT6_inst_adr                                                        "0x0016"
#define BIST_RESULT6_inst                                                            0x0016
#define BIST_RESULT6_gpu_sc1_bist_fail10_shift                                       (24)
#define BIST_RESULT6_gpu_sc1_bist_fail10_mask                                        (0x0F000000)
#define BIST_RESULT6_gpu_sc1_bist_fail10(data)                                       (0x0F000000&((data)<<24))
#define BIST_RESULT6_gpu_sc1_bist_fail10_src(data)                                   ((0x0F000000&(data))>>24)
#define BIST_RESULT6_get_gpu_sc1_bist_fail10(data)                                   ((0x0F000000&(data))>>24)
#define BIST_RESULT6_gpu_sc1_bist_fail9_shift                                        (14)
#define BIST_RESULT6_gpu_sc1_bist_fail9_mask                                         (0x00FFC000)
#define BIST_RESULT6_gpu_sc1_bist_fail9(data)                                        (0x00FFC000&((data)<<14))
#define BIST_RESULT6_gpu_sc1_bist_fail9_src(data)                                    ((0x00FFC000&(data))>>14)
#define BIST_RESULT6_get_gpu_sc1_bist_fail9(data)                                    ((0x00FFC000&(data))>>14)
#define BIST_RESULT6_gpu_sc1_bist_fail8_shift                                        (10)
#define BIST_RESULT6_gpu_sc1_bist_fail8_mask                                         (0x00003C00)
#define BIST_RESULT6_gpu_sc1_bist_fail8(data)                                        (0x00003C00&((data)<<10))
#define BIST_RESULT6_gpu_sc1_bist_fail8_src(data)                                    ((0x00003C00&(data))>>10)
#define BIST_RESULT6_get_gpu_sc1_bist_fail8(data)                                    ((0x00003C00&(data))>>10)
#define BIST_RESULT6_gpu_sc1_bist_fail7_shift                                        (0)
#define BIST_RESULT6_gpu_sc1_bist_fail7_mask                                         (0x000003FF)
#define BIST_RESULT6_gpu_sc1_bist_fail7(data)                                        (0x000003FF&((data)<<0))
#define BIST_RESULT6_gpu_sc1_bist_fail7_src(data)                                    ((0x000003FF&(data))>>0)
#define BIST_RESULT6_get_gpu_sc1_bist_fail7(data)                                    ((0x000003FF&(data))>>0)


#define BIST_RESULT7                                                                 0x9805405C
#define BIST_RESULT7_reg_addr                                                        "0xD805405C"
#define BIST_RESULT7_reg                                                             0xD805405C
#define set_BIST_RESULT7_reg(data)   (*((volatile unsigned int*) BIST_RESULT7_reg)=data)
#define get_BIST_RESULT7_reg   (*((volatile unsigned int*) BIST_RESULT7_reg))
#define BIST_RESULT7_inst_adr                                                        "0x0017"
#define BIST_RESULT7_inst                                                            0x0017
#define BIST_RESULT7_gpu_sc1_bist_fail11_shift                                       (10)
#define BIST_RESULT7_gpu_sc1_bist_fail11_mask                                        (0x000FFC00)
#define BIST_RESULT7_gpu_sc1_bist_fail11(data)                                       (0x000FFC00&((data)<<10))
#define BIST_RESULT7_gpu_sc1_bist_fail11_src(data)                                   ((0x000FFC00&(data))>>10)
#define BIST_RESULT7_get_gpu_sc1_bist_fail11(data)                                   ((0x000FFC00&(data))>>10)
#define BIST_RESULT7_gpu_sc1_bist_fail12_shift                                       (6)
#define BIST_RESULT7_gpu_sc1_bist_fail12_mask                                        (0x000003C0)
#define BIST_RESULT7_gpu_sc1_bist_fail12(data)                                       (0x000003C0&((data)<<6))
#define BIST_RESULT7_gpu_sc1_bist_fail12_src(data)                                   ((0x000003C0&(data))>>6)
#define BIST_RESULT7_get_gpu_sc1_bist_fail12(data)                                   ((0x000003C0&(data))>>6)
#define BIST_RESULT7_gpu_sc1_bist_fail13_shift                                       (2)
#define BIST_RESULT7_gpu_sc1_bist_fail13_mask                                        (0x0000003C)
#define BIST_RESULT7_gpu_sc1_bist_fail13(data)                                       (0x0000003C&((data)<<2))
#define BIST_RESULT7_gpu_sc1_bist_fail13_src(data)                                   ((0x0000003C&(data))>>2)
#define BIST_RESULT7_get_gpu_sc1_bist_fail13(data)                                   ((0x0000003C&(data))>>2)
#define BIST_RESULT7_gpu_sc1_bist_fail14_shift                                       (0)
#define BIST_RESULT7_gpu_sc1_bist_fail14_mask                                        (0x00000003)
#define BIST_RESULT7_gpu_sc1_bist_fail14(data)                                       (0x00000003&((data)<<0))
#define BIST_RESULT7_gpu_sc1_bist_fail14_src(data)                                   ((0x00000003&(data))>>0)
#define BIST_RESULT7_get_gpu_sc1_bist_fail14(data)                                   ((0x00000003&(data))>>0)


#define BIST_RESULT8                                                                 0x98054060
#define BIST_RESULT8_reg_addr                                                        "0xD8054060"
#define BIST_RESULT8_reg                                                             0xD8054060
#define set_BIST_RESULT8_reg(data)   (*((volatile unsigned int*) BIST_RESULT8_reg)=data)
#define get_BIST_RESULT8_reg   (*((volatile unsigned int*) BIST_RESULT8_reg))
#define BIST_RESULT8_inst_adr                                                        "0x0018"
#define BIST_RESULT8_inst                                                            0x0018
#define BIST_RESULT8_gpu_sc2_bist_fail6_shift                                        (28)
#define BIST_RESULT8_gpu_sc2_bist_fail6_mask                                         (0xF0000000)
#define BIST_RESULT8_gpu_sc2_bist_fail6(data)                                        (0xF0000000&((data)<<28))
#define BIST_RESULT8_gpu_sc2_bist_fail6_src(data)                                    ((0xF0000000&(data))>>28)
#define BIST_RESULT8_get_gpu_sc2_bist_fail6(data)                                    ((0xF0000000&(data))>>28)
#define BIST_RESULT8_gpu_sc2_bist_fail5_shift                                        (18)
#define BIST_RESULT8_gpu_sc2_bist_fail5_mask                                         (0x0FFC0000)
#define BIST_RESULT8_gpu_sc2_bist_fail5(data)                                        (0x0FFC0000&((data)<<18))
#define BIST_RESULT8_gpu_sc2_bist_fail5_src(data)                                    ((0x0FFC0000&(data))>>18)
#define BIST_RESULT8_get_gpu_sc2_bist_fail5(data)                                    ((0x0FFC0000&(data))>>18)
#define BIST_RESULT8_gpu_sc2_bist_fail3_shift                                        (10)
#define BIST_RESULT8_gpu_sc2_bist_fail3_mask                                         (0x0003FC00)
#define BIST_RESULT8_gpu_sc2_bist_fail3(data)                                        (0x0003FC00&((data)<<10))
#define BIST_RESULT8_gpu_sc2_bist_fail3_src(data)                                    ((0x0003FC00&(data))>>10)
#define BIST_RESULT8_get_gpu_sc2_bist_fail3(data)                                    ((0x0003FC00&(data))>>10)
#define BIST_RESULT8_gpu_sc2_bist_fail2_shift                                        (0)
#define BIST_RESULT8_gpu_sc2_bist_fail2_mask                                         (0x000003FF)
#define BIST_RESULT8_gpu_sc2_bist_fail2(data)                                        (0x000003FF&((data)<<0))
#define BIST_RESULT8_gpu_sc2_bist_fail2_src(data)                                    ((0x000003FF&(data))>>0)
#define BIST_RESULT8_get_gpu_sc2_bist_fail2(data)                                    ((0x000003FF&(data))>>0)


#define BIST_RESULT9                                                                 0x98054064
#define BIST_RESULT9_reg_addr                                                        "0xD8054064"
#define BIST_RESULT9_reg                                                             0xD8054064
#define set_BIST_RESULT9_reg(data)   (*((volatile unsigned int*) BIST_RESULT9_reg)=data)
#define get_BIST_RESULT9_reg   (*((volatile unsigned int*) BIST_RESULT9_reg))
#define BIST_RESULT9_inst_adr                                                        "0x0019"
#define BIST_RESULT9_inst                                                            0x0019
#define BIST_RESULT9_gpu_sc2_bist_fail10_shift                                       (24)
#define BIST_RESULT9_gpu_sc2_bist_fail10_mask                                        (0x0F000000)
#define BIST_RESULT9_gpu_sc2_bist_fail10(data)                                       (0x0F000000&((data)<<24))
#define BIST_RESULT9_gpu_sc2_bist_fail10_src(data)                                   ((0x0F000000&(data))>>24)
#define BIST_RESULT9_get_gpu_sc2_bist_fail10(data)                                   ((0x0F000000&(data))>>24)
#define BIST_RESULT9_gpu_sc2_bist_fail9_shift                                        (14)
#define BIST_RESULT9_gpu_sc2_bist_fail9_mask                                         (0x00FFC000)
#define BIST_RESULT9_gpu_sc2_bist_fail9(data)                                        (0x00FFC000&((data)<<14))
#define BIST_RESULT9_gpu_sc2_bist_fail9_src(data)                                    ((0x00FFC000&(data))>>14)
#define BIST_RESULT9_get_gpu_sc2_bist_fail9(data)                                    ((0x00FFC000&(data))>>14)
#define BIST_RESULT9_gpu_sc2_bist_fail8_shift                                        (10)
#define BIST_RESULT9_gpu_sc2_bist_fail8_mask                                         (0x00003C00)
#define BIST_RESULT9_gpu_sc2_bist_fail8(data)                                        (0x00003C00&((data)<<10))
#define BIST_RESULT9_gpu_sc2_bist_fail8_src(data)                                    ((0x00003C00&(data))>>10)
#define BIST_RESULT9_get_gpu_sc2_bist_fail8(data)                                    ((0x00003C00&(data))>>10)
#define BIST_RESULT9_gpu_sc2_bist_fail7_shift                                        (0)
#define BIST_RESULT9_gpu_sc2_bist_fail7_mask                                         (0x000003FF)
#define BIST_RESULT9_gpu_sc2_bist_fail7(data)                                        (0x000003FF&((data)<<0))
#define BIST_RESULT9_gpu_sc2_bist_fail7_src(data)                                    ((0x000003FF&(data))>>0)
#define BIST_RESULT9_get_gpu_sc2_bist_fail7(data)                                    ((0x000003FF&(data))>>0)


#define BIST_RESULT10                                                                0x98054068
#define BIST_RESULT10_reg_addr                                                       "0xD8054068"
#define BIST_RESULT10_reg                                                            0xD8054068
#define set_BIST_RESULT10_reg(data)   (*((volatile unsigned int*) BIST_RESULT10_reg)=data)
#define get_BIST_RESULT10_reg   (*((volatile unsigned int*) BIST_RESULT10_reg))
#define BIST_RESULT10_inst_adr                                                       "0x001A"
#define BIST_RESULT10_inst                                                           0x001A
#define BIST_RESULT10_gpu_sc2_bist_fail11_shift                                      (10)
#define BIST_RESULT10_gpu_sc2_bist_fail11_mask                                       (0x000FFC00)
#define BIST_RESULT10_gpu_sc2_bist_fail11(data)                                      (0x000FFC00&((data)<<10))
#define BIST_RESULT10_gpu_sc2_bist_fail11_src(data)                                  ((0x000FFC00&(data))>>10)
#define BIST_RESULT10_get_gpu_sc2_bist_fail11(data)                                  ((0x000FFC00&(data))>>10)
#define BIST_RESULT10_gpu_sc2_bist_fail12_shift                                      (6)
#define BIST_RESULT10_gpu_sc2_bist_fail12_mask                                       (0x000003C0)
#define BIST_RESULT10_gpu_sc2_bist_fail12(data)                                      (0x000003C0&((data)<<6))
#define BIST_RESULT10_gpu_sc2_bist_fail12_src(data)                                  ((0x000003C0&(data))>>6)
#define BIST_RESULT10_get_gpu_sc2_bist_fail12(data)                                  ((0x000003C0&(data))>>6)
#define BIST_RESULT10_gpu_sc2_bist_fail13_shift                                      (2)
#define BIST_RESULT10_gpu_sc2_bist_fail13_mask                                       (0x0000003C)
#define BIST_RESULT10_gpu_sc2_bist_fail13(data)                                      (0x0000003C&((data)<<2))
#define BIST_RESULT10_gpu_sc2_bist_fail13_src(data)                                  ((0x0000003C&(data))>>2)
#define BIST_RESULT10_get_gpu_sc2_bist_fail13(data)                                  ((0x0000003C&(data))>>2)
#define BIST_RESULT10_gpu_sc2_bist_fail14_shift                                      (0)
#define BIST_RESULT10_gpu_sc2_bist_fail14_mask                                       (0x00000003)
#define BIST_RESULT10_gpu_sc2_bist_fail14(data)                                      (0x00000003&((data)<<0))
#define BIST_RESULT10_gpu_sc2_bist_fail14_src(data)                                  ((0x00000003&(data))>>0)
#define BIST_RESULT10_get_gpu_sc2_bist_fail14(data)                                  ((0x00000003&(data))>>0)


#define DRF_BIST_RESULT0                                                             0x9805406C
#define DRF_BIST_RESULT0_reg_addr                                                    "0xD805406C"
#define DRF_BIST_RESULT0_reg                                                         0xD805406C
#define set_DRF_BIST_RESULT0_reg(data)   (*((volatile unsigned int*) DRF_BIST_RESULT0_reg)=data)
#define get_DRF_BIST_RESULT0_reg   (*((volatile unsigned int*) DRF_BIST_RESULT0_reg))
#define DRF_BIST_RESULT0_inst_adr                                                    "0x001B"
#define DRF_BIST_RESULT0_inst                                                        0x001B
#define DRF_BIST_RESULT0_gpu_l2_drf_bist_fail17_shift                                (16)
#define DRF_BIST_RESULT0_gpu_l2_drf_bist_fail17_mask                                 (0x03FF0000)
#define DRF_BIST_RESULT0_gpu_l2_drf_bist_fail17(data)                                (0x03FF0000&((data)<<16))
#define DRF_BIST_RESULT0_gpu_l2_drf_bist_fail17_src(data)                            ((0x03FF0000&(data))>>16)
#define DRF_BIST_RESULT0_get_gpu_l2_drf_bist_fail17(data)                            ((0x03FF0000&(data))>>16)
#define DRF_BIST_RESULT0_gpu_cg_drf_bist_fail16_shift                                (9)
#define DRF_BIST_RESULT0_gpu_cg_drf_bist_fail16_mask                                 (0x0000FE00)
#define DRF_BIST_RESULT0_gpu_cg_drf_bist_fail16(data)                                (0x0000FE00&((data)<<9))
#define DRF_BIST_RESULT0_gpu_cg_drf_bist_fail16_src(data)                            ((0x0000FE00&(data))>>9)
#define DRF_BIST_RESULT0_get_gpu_cg_drf_bist_fail16(data)                            ((0x0000FE00&(data))>>9)
#define DRF_BIST_RESULT0_gpu_cg_drf_bist_fail15_shift                                (2)
#define DRF_BIST_RESULT0_gpu_cg_drf_bist_fail15_mask                                 (0x000001FC)
#define DRF_BIST_RESULT0_gpu_cg_drf_bist_fail15(data)                                (0x000001FC&((data)<<2))
#define DRF_BIST_RESULT0_gpu_cg_drf_bist_fail15_src(data)                            ((0x000001FC&(data))>>2)
#define DRF_BIST_RESULT0_get_gpu_cg_drf_bist_fail15(data)                            ((0x000001FC&(data))>>2)
#define DRF_BIST_RESULT0_gpu_jmdrf_bist_fail1_shift                                  (0)
#define DRF_BIST_RESULT0_gpu_jmdrf_bist_fail1_mask                                   (0x00000003)
#define DRF_BIST_RESULT0_gpu_jmdrf_bist_fail1(data)                                  (0x00000003&((data)<<0))
#define DRF_BIST_RESULT0_gpu_jmdrf_bist_fail1_src(data)                              ((0x00000003&(data))>>0)
#define DRF_BIST_RESULT0_get_gpu_jmdrf_bist_fail1(data)                              ((0x00000003&(data))>>0)


#define DRF_BIST_RESULT1                                                             0x98054070
#define DRF_BIST_RESULT1_reg_addr                                                    "0xD8054070"
#define DRF_BIST_RESULT1_reg                                                         0xD8054070
#define set_DRF_BIST_RESULT1_reg(data)   (*((volatile unsigned int*) DRF_BIST_RESULT1_reg)=data)
#define get_DRF_BIST_RESULT1_reg   (*((volatile unsigned int*) DRF_BIST_RESULT1_reg))
#define DRF_BIST_RESULT1_inst_adr                                                    "0x001C"
#define DRF_BIST_RESULT1_inst                                                        0x001C
#define DRF_BIST_RESULT1_gpu_l2_drf_bist_fail18_shift                                (4)
#define DRF_BIST_RESULT1_gpu_l2_drf_bist_fail18_mask                                 (0x00001FF0)
#define DRF_BIST_RESULT1_gpu_l2_drf_bist_fail18(data)                                (0x00001FF0&((data)<<4))
#define DRF_BIST_RESULT1_gpu_l2_drf_bist_fail18_src(data)                            ((0x00001FF0&(data))>>4)
#define DRF_BIST_RESULT1_get_gpu_l2_drf_bist_fail18(data)                            ((0x00001FF0&(data))>>4)
#define DRF_BIST_RESULT1_gpu_l2_drf_bist_fail20_shift                                (0)
#define DRF_BIST_RESULT1_gpu_l2_drf_bist_fail20_mask                                 (0x0000000F)
#define DRF_BIST_RESULT1_gpu_l2_drf_bist_fail20(data)                                (0x0000000F&((data)<<0))
#define DRF_BIST_RESULT1_gpu_l2_drf_bist_fail20_src(data)                            ((0x0000000F&(data))>>0)
#define DRF_BIST_RESULT1_get_gpu_l2_drf_bist_fail20(data)                            ((0x0000000F&(data))>>0)


#define DRF_BIST_RESULT2                                                             0x98054074
#define DRF_BIST_RESULT2_reg_addr                                                    "0xD8054074"
#define DRF_BIST_RESULT2_reg                                                         0xD8054074
#define set_DRF_BIST_RESULT2_reg(data)   (*((volatile unsigned int*) DRF_BIST_RESULT2_reg)=data)
#define get_DRF_BIST_RESULT2_reg   (*((volatile unsigned int*) DRF_BIST_RESULT2_reg))
#define DRF_BIST_RESULT2_inst_adr                                                    "0x001D"
#define DRF_BIST_RESULT2_inst                                                        0x001D
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail6_shift                                (28)
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail6_mask                                 (0xF0000000)
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail6(data)                                (0xF0000000&((data)<<28))
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail6_src(data)                            ((0xF0000000&(data))>>28)
#define DRF_BIST_RESULT2_get_gpu_sc0_drf_bist_fail6(data)                            ((0xF0000000&(data))>>28)
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail5_shift                                (18)
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail5_mask                                 (0x0FFC0000)
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail5(data)                                (0x0FFC0000&((data)<<18))
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail5_src(data)                            ((0x0FFC0000&(data))>>18)
#define DRF_BIST_RESULT2_get_gpu_sc0_drf_bist_fail5(data)                            ((0x0FFC0000&(data))>>18)
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail3_shift                                (10)
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail3_mask                                 (0x0003FC00)
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail3(data)                                (0x0003FC00&((data)<<10))
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail3_src(data)                            ((0x0003FC00&(data))>>10)
#define DRF_BIST_RESULT2_get_gpu_sc0_drf_bist_fail3(data)                            ((0x0003FC00&(data))>>10)
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail2_shift                                (0)
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail2_mask                                 (0x000003FF)
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail2(data)                                (0x000003FF&((data)<<0))
#define DRF_BIST_RESULT2_gpu_sc0_drf_bist_fail2_src(data)                            ((0x000003FF&(data))>>0)
#define DRF_BIST_RESULT2_get_gpu_sc0_drf_bist_fail2(data)                            ((0x000003FF&(data))>>0)


#define DRF_BIST_RESULT3                                                             0x98054078
#define DRF_BIST_RESULT3_reg_addr                                                    "0xD8054078"
#define DRF_BIST_RESULT3_reg                                                         0xD8054078
#define set_DRF_BIST_RESULT3_reg(data)   (*((volatile unsigned int*) DRF_BIST_RESULT3_reg)=data)
#define get_DRF_BIST_RESULT3_reg   (*((volatile unsigned int*) DRF_BIST_RESULT3_reg))
#define DRF_BIST_RESULT3_inst_adr                                                    "0x001E"
#define DRF_BIST_RESULT3_inst                                                        0x001E
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail10_shift                               (24)
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail10_mask                                (0x0F000000)
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail10(data)                               (0x0F000000&((data)<<24))
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail10_src(data)                           ((0x0F000000&(data))>>24)
#define DRF_BIST_RESULT3_get_gpu_sc0_drf_bist_fail10(data)                           ((0x0F000000&(data))>>24)
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail9_shift                                (14)
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail9_mask                                 (0x00FFC000)
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail9(data)                                (0x00FFC000&((data)<<14))
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail9_src(data)                            ((0x00FFC000&(data))>>14)
#define DRF_BIST_RESULT3_get_gpu_sc0_drf_bist_fail9(data)                            ((0x00FFC000&(data))>>14)
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail8_shift                                (10)
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail8_mask                                 (0x00003C00)
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail8(data)                                (0x00003C00&((data)<<10))
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail8_src(data)                            ((0x00003C00&(data))>>10)
#define DRF_BIST_RESULT3_get_gpu_sc0_drf_bist_fail8(data)                            ((0x00003C00&(data))>>10)
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail7_shift                                (0)
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail7_mask                                 (0x000003FF)
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail7(data)                                (0x000003FF&((data)<<0))
#define DRF_BIST_RESULT3_gpu_sc0_drf_bist_fail7_src(data)                            ((0x000003FF&(data))>>0)
#define DRF_BIST_RESULT3_get_gpu_sc0_drf_bist_fail7(data)                            ((0x000003FF&(data))>>0)


#define DRF_BIST_RESULT4                                                             0x9805407C
#define DRF_BIST_RESULT4_reg_addr                                                    "0xD805407C"
#define DRF_BIST_RESULT4_reg                                                         0xD805407C
#define set_DRF_BIST_RESULT4_reg(data)   (*((volatile unsigned int*) DRF_BIST_RESULT4_reg)=data)
#define get_DRF_BIST_RESULT4_reg   (*((volatile unsigned int*) DRF_BIST_RESULT4_reg))
#define DRF_BIST_RESULT4_inst_adr                                                    "0x001F"
#define DRF_BIST_RESULT4_inst                                                        0x001F
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail11_shift                               (10)
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail11_mask                                (0x000FFC00)
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail11(data)                               (0x000FFC00&((data)<<10))
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail11_src(data)                           ((0x000FFC00&(data))>>10)
#define DRF_BIST_RESULT4_get_gpu_sc0_drf_bist_fail11(data)                           ((0x000FFC00&(data))>>10)
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail12_shift                               (6)
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail12_mask                                (0x000003C0)
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail12(data)                               (0x000003C0&((data)<<6))
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail12_src(data)                           ((0x000003C0&(data))>>6)
#define DRF_BIST_RESULT4_get_gpu_sc0_drf_bist_fail12(data)                           ((0x000003C0&(data))>>6)
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail13_shift                               (2)
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail13_mask                                (0x0000003C)
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail13(data)                               (0x0000003C&((data)<<2))
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail13_src(data)                           ((0x0000003C&(data))>>2)
#define DRF_BIST_RESULT4_get_gpu_sc0_drf_bist_fail13(data)                           ((0x0000003C&(data))>>2)
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail14_shift                               (0)
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail14_mask                                (0x00000003)
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail14(data)                               (0x00000003&((data)<<0))
#define DRF_BIST_RESULT4_gpu_sc0_drf_bist_fail14_src(data)                           ((0x00000003&(data))>>0)
#define DRF_BIST_RESULT4_get_gpu_sc0_drf_bist_fail14(data)                           ((0x00000003&(data))>>0)


#define DRF_BIST_RESULT5                                                             0x98054080
#define DRF_BIST_RESULT5_reg_addr                                                    "0xD8054080"
#define DRF_BIST_RESULT5_reg                                                         0xD8054080
#define set_DRF_BIST_RESULT5_reg(data)   (*((volatile unsigned int*) DRF_BIST_RESULT5_reg)=data)
#define get_DRF_BIST_RESULT5_reg   (*((volatile unsigned int*) DRF_BIST_RESULT5_reg))
#define DRF_BIST_RESULT5_inst_adr                                                    "0x0020"
#define DRF_BIST_RESULT5_inst                                                        0x0020
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail6_shift                                (28)
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail6_mask                                 (0xF0000000)
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail6(data)                                (0xF0000000&((data)<<28))
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail6_src(data)                            ((0xF0000000&(data))>>28)
#define DRF_BIST_RESULT5_get_gpu_sc1_drf_bist_fail6(data)                            ((0xF0000000&(data))>>28)
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail5_shift                                (18)
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail5_mask                                 (0x0FFC0000)
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail5(data)                                (0x0FFC0000&((data)<<18))
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail5_src(data)                            ((0x0FFC0000&(data))>>18)
#define DRF_BIST_RESULT5_get_gpu_sc1_drf_bist_fail5(data)                            ((0x0FFC0000&(data))>>18)
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail3_shift                                (10)
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail3_mask                                 (0x0003FC00)
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail3(data)                                (0x0003FC00&((data)<<10))
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail3_src(data)                            ((0x0003FC00&(data))>>10)
#define DRF_BIST_RESULT5_get_gpu_sc1_drf_bist_fail3(data)                            ((0x0003FC00&(data))>>10)
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail2_shift                                (0)
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail2_mask                                 (0x000003FF)
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail2(data)                                (0x000003FF&((data)<<0))
#define DRF_BIST_RESULT5_gpu_sc1_drf_bist_fail2_src(data)                            ((0x000003FF&(data))>>0)
#define DRF_BIST_RESULT5_get_gpu_sc1_drf_bist_fail2(data)                            ((0x000003FF&(data))>>0)


#define DRF_BIST_RESULT6                                                             0x98054084
#define DRF_BIST_RESULT6_reg_addr                                                    "0xD8054084"
#define DRF_BIST_RESULT6_reg                                                         0xD8054084
#define set_DRF_BIST_RESULT6_reg(data)   (*((volatile unsigned int*) DRF_BIST_RESULT6_reg)=data)
#define get_DRF_BIST_RESULT6_reg   (*((volatile unsigned int*) DRF_BIST_RESULT6_reg))
#define DRF_BIST_RESULT6_inst_adr                                                    "0x0021"
#define DRF_BIST_RESULT6_inst                                                        0x0021
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail10_shift                               (24)
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail10_mask                                (0x0F000000)
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail10(data)                               (0x0F000000&((data)<<24))
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail10_src(data)                           ((0x0F000000&(data))>>24)
#define DRF_BIST_RESULT6_get_gpu_sc1_drf_bist_fail10(data)                           ((0x0F000000&(data))>>24)
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail9_shift                                (14)
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail9_mask                                 (0x00FFC000)
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail9(data)                                (0x00FFC000&((data)<<14))
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail9_src(data)                            ((0x00FFC000&(data))>>14)
#define DRF_BIST_RESULT6_get_gpu_sc1_drf_bist_fail9(data)                            ((0x00FFC000&(data))>>14)
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail8_shift                                (10)
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail8_mask                                 (0x00003C00)
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail8(data)                                (0x00003C00&((data)<<10))
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail8_src(data)                            ((0x00003C00&(data))>>10)
#define DRF_BIST_RESULT6_get_gpu_sc1_drf_bist_fail8(data)                            ((0x00003C00&(data))>>10)
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail7_shift                                (0)
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail7_mask                                 (0x000003FF)
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail7(data)                                (0x000003FF&((data)<<0))
#define DRF_BIST_RESULT6_gpu_sc1_drf_bist_fail7_src(data)                            ((0x000003FF&(data))>>0)
#define DRF_BIST_RESULT6_get_gpu_sc1_drf_bist_fail7(data)                            ((0x000003FF&(data))>>0)


#define DRF_BIST_RESULT7                                                             0x98054088
#define DRF_BIST_RESULT7_reg_addr                                                    "0xD8054088"
#define DRF_BIST_RESULT7_reg                                                         0xD8054088
#define set_DRF_BIST_RESULT7_reg(data)   (*((volatile unsigned int*) DRF_BIST_RESULT7_reg)=data)
#define get_DRF_BIST_RESULT7_reg   (*((volatile unsigned int*) DRF_BIST_RESULT7_reg))
#define DRF_BIST_RESULT7_inst_adr                                                    "0x0022"
#define DRF_BIST_RESULT7_inst                                                        0x0022
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail11_shift                               (10)
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail11_mask                                (0x000FFC00)
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail11(data)                               (0x000FFC00&((data)<<10))
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail11_src(data)                           ((0x000FFC00&(data))>>10)
#define DRF_BIST_RESULT7_get_gpu_sc1_drf_bist_fail11(data)                           ((0x000FFC00&(data))>>10)
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail12_shift                               (6)
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail12_mask                                (0x000003C0)
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail12(data)                               (0x000003C0&((data)<<6))
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail12_src(data)                           ((0x000003C0&(data))>>6)
#define DRF_BIST_RESULT7_get_gpu_sc1_drf_bist_fail12(data)                           ((0x000003C0&(data))>>6)
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail13_shift                               (2)
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail13_mask                                (0x0000003C)
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail13(data)                               (0x0000003C&((data)<<2))
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail13_src(data)                           ((0x0000003C&(data))>>2)
#define DRF_BIST_RESULT7_get_gpu_sc1_drf_bist_fail13(data)                           ((0x0000003C&(data))>>2)
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail14_shift                               (0)
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail14_mask                                (0x00000003)
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail14(data)                               (0x00000003&((data)<<0))
#define DRF_BIST_RESULT7_gpu_sc1_drf_bist_fail14_src(data)                           ((0x00000003&(data))>>0)
#define DRF_BIST_RESULT7_get_gpu_sc1_drf_bist_fail14(data)                           ((0x00000003&(data))>>0)


#define DRF_BIST_RESULT8                                                             0x9805408C
#define DRF_BIST_RESULT8_reg_addr                                                    "0xD805408C"
#define DRF_BIST_RESULT8_reg                                                         0xD805408C
#define set_DRF_BIST_RESULT8_reg(data)   (*((volatile unsigned int*) DRF_BIST_RESULT8_reg)=data)
#define get_DRF_BIST_RESULT8_reg   (*((volatile unsigned int*) DRF_BIST_RESULT8_reg))
#define DRF_BIST_RESULT8_inst_adr                                                    "0x0023"
#define DRF_BIST_RESULT8_inst                                                        0x0023
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail6_shift                                (28)
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail6_mask                                 (0xF0000000)
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail6(data)                                (0xF0000000&((data)<<28))
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail6_src(data)                            ((0xF0000000&(data))>>28)
#define DRF_BIST_RESULT8_get_gpu_sc2_drf_bist_fail6(data)                            ((0xF0000000&(data))>>28)
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail5_shift                                (18)
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail5_mask                                 (0x0FFC0000)
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail5(data)                                (0x0FFC0000&((data)<<18))
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail5_src(data)                            ((0x0FFC0000&(data))>>18)
#define DRF_BIST_RESULT8_get_gpu_sc2_drf_bist_fail5(data)                            ((0x0FFC0000&(data))>>18)
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail3_shift                                (10)
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail3_mask                                 (0x0003FC00)
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail3(data)                                (0x0003FC00&((data)<<10))
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail3_src(data)                            ((0x0003FC00&(data))>>10)
#define DRF_BIST_RESULT8_get_gpu_sc2_drf_bist_fail3(data)                            ((0x0003FC00&(data))>>10)
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail2_shift                                (0)
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail2_mask                                 (0x000003FF)
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail2(data)                                (0x000003FF&((data)<<0))
#define DRF_BIST_RESULT8_gpu_sc2_drf_bist_fail2_src(data)                            ((0x000003FF&(data))>>0)
#define DRF_BIST_RESULT8_get_gpu_sc2_drf_bist_fail2(data)                            ((0x000003FF&(data))>>0)


#define DRF_BIST_RESULT9                                                             0x98054090
#define DRF_BIST_RESULT9_reg_addr                                                    "0xD8054090"
#define DRF_BIST_RESULT9_reg                                                         0xD8054090
#define set_DRF_BIST_RESULT9_reg(data)   (*((volatile unsigned int*) DRF_BIST_RESULT9_reg)=data)
#define get_DRF_BIST_RESULT9_reg   (*((volatile unsigned int*) DRF_BIST_RESULT9_reg))
#define DRF_BIST_RESULT9_inst_adr                                                    "0x0024"
#define DRF_BIST_RESULT9_inst                                                        0x0024
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail10_shift                               (24)
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail10_mask                                (0x0F000000)
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail10(data)                               (0x0F000000&((data)<<24))
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail10_src(data)                           ((0x0F000000&(data))>>24)
#define DRF_BIST_RESULT9_get_gpu_sc2_drf_bist_fail10(data)                           ((0x0F000000&(data))>>24)
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail9_shift                                (14)
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail9_mask                                 (0x00FFC000)
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail9(data)                                (0x00FFC000&((data)<<14))
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail9_src(data)                            ((0x00FFC000&(data))>>14)
#define DRF_BIST_RESULT9_get_gpu_sc2_drf_bist_fail9(data)                            ((0x00FFC000&(data))>>14)
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail8_shift                                (10)
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail8_mask                                 (0x00003C00)
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail8(data)                                (0x00003C00&((data)<<10))
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail8_src(data)                            ((0x00003C00&(data))>>10)
#define DRF_BIST_RESULT9_get_gpu_sc2_drf_bist_fail8(data)                            ((0x00003C00&(data))>>10)
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail7_shift                                (0)
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail7_mask                                 (0x000003FF)
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail7(data)                                (0x000003FF&((data)<<0))
#define DRF_BIST_RESULT9_gpu_sc2_drf_bist_fail7_src(data)                            ((0x000003FF&(data))>>0)
#define DRF_BIST_RESULT9_get_gpu_sc2_drf_bist_fail7(data)                            ((0x000003FF&(data))>>0)


#define DRF_BIST_RESULT10                                                            0x98054094
#define DRF_BIST_RESULT10_reg_addr                                                   "0xD8054094"
#define DRF_BIST_RESULT10_reg                                                        0xD8054094
#define set_DRF_BIST_RESULT10_reg(data)   (*((volatile unsigned int*) DRF_BIST_RESULT10_reg)=data)
#define get_DRF_BIST_RESULT10_reg   (*((volatile unsigned int*) DRF_BIST_RESULT10_reg))
#define DRF_BIST_RESULT10_inst_adr                                                   "0x0025"
#define DRF_BIST_RESULT10_inst                                                       0x0025
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail11_shift                              (10)
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail11_mask                               (0x000FFC00)
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail11(data)                              (0x000FFC00&((data)<<10))
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail11_src(data)                          ((0x000FFC00&(data))>>10)
#define DRF_BIST_RESULT10_get_gpu_sc2_drf_bist_fail11(data)                          ((0x000FFC00&(data))>>10)
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail12_shift                              (6)
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail12_mask                               (0x000003C0)
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail12(data)                              (0x000003C0&((data)<<6))
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail12_src(data)                          ((0x000003C0&(data))>>6)
#define DRF_BIST_RESULT10_get_gpu_sc2_drf_bist_fail12(data)                          ((0x000003C0&(data))>>6)
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail13_shift                              (2)
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail13_mask                               (0x0000003C)
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail13(data)                              (0x0000003C&((data)<<2))
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail13_src(data)                          ((0x0000003C&(data))>>2)
#define DRF_BIST_RESULT10_get_gpu_sc2_drf_bist_fail13(data)                          ((0x0000003C&(data))>>2)
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail14_shift                              (0)
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail14_mask                               (0x00000003)
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail14(data)                              (0x00000003&((data)<<0))
#define DRF_BIST_RESULT10_gpu_sc2_drf_bist_fail14_src(data)                          ((0x00000003&(data))>>0)
#define DRF_BIST_RESULT10_get_gpu_sc2_drf_bist_fail14(data)                          ((0x00000003&(data))>>0)


#define BIST_RESULT11                                                                0x98054098
#define BIST_RESULT11_reg_addr                                                       "0xD8054098"
#define BIST_RESULT11_reg                                                            0xD8054098
#define set_BIST_RESULT11_reg(data)   (*((volatile unsigned int*) BIST_RESULT11_reg)=data)
#define get_BIST_RESULT11_reg   (*((volatile unsigned int*) BIST_RESULT11_reg))
#define BIST_RESULT11_inst_adr                                                       "0x0026"
#define BIST_RESULT11_inst                                                           0x0026
#define BIST_RESULT11_sc2_pg_test_fail21_shift                                       (6)
#define BIST_RESULT11_sc2_pg_test_fail21_mask                                        (0x000000C0)
#define BIST_RESULT11_sc2_pg_test_fail21(data)                                       (0x000000C0&((data)<<6))
#define BIST_RESULT11_sc2_pg_test_fail21_src(data)                                   ((0x000000C0&(data))>>6)
#define BIST_RESULT11_get_sc2_pg_test_fail21(data)                                   ((0x000000C0&(data))>>6)
#define BIST_RESULT11_sc1_pg_test_fail21_shift                                       (4)
#define BIST_RESULT11_sc1_pg_test_fail21_mask                                        (0x00000030)
#define BIST_RESULT11_sc1_pg_test_fail21(data)                                       (0x00000030&((data)<<4))
#define BIST_RESULT11_sc1_pg_test_fail21_src(data)                                   ((0x00000030&(data))>>4)
#define BIST_RESULT11_get_sc1_pg_test_fail21(data)                                   ((0x00000030&(data))>>4)
#define BIST_RESULT11_sc0_pg_test_fail21_shift                                       (2)
#define BIST_RESULT11_sc0_pg_test_fail21_mask                                        (0x0000000C)
#define BIST_RESULT11_sc0_pg_test_fail21(data)                                       (0x0000000C&((data)<<2))
#define BIST_RESULT11_sc0_pg_test_fail21_src(data)                                   ((0x0000000C&(data))>>2)
#define BIST_RESULT11_get_sc0_pg_test_fail21(data)                                   ((0x0000000C&(data))>>2)
#define BIST_RESULT11_gpu_pg_test_fail21_shift                                       (0)
#define BIST_RESULT11_gpu_pg_test_fail21_mask                                        (0x00000003)
#define BIST_RESULT11_gpu_pg_test_fail21(data)                                       (0x00000003&((data)<<0))
#define BIST_RESULT11_gpu_pg_test_fail21_src(data)                                   ((0x00000003&(data))>>0)
#define BIST_RESULT11_get_gpu_pg_test_fail21(data)                                   ((0x00000003&(data))>>0)


#define BISR0                                                                        0x9805409C
#define BISR0_reg_addr                                                               "0xD805409C"
#define BISR0_reg                                                                    0xD805409C
#define set_BISR0_reg(data)   (*((volatile unsigned int*) BISR0_reg)=data)
#define get_BISR0_reg   (*((volatile unsigned int*) BISR0_reg))
#define BISR0_inst_adr                                                               "0x0027"
#define BISR0_inst                                                                   0x0027
#define BISR0_sc_bisr_repaired_shift                                                 (4)
#define BISR0_sc_bisr_repaired_mask                                                  (0x00000010)
#define BISR0_sc_bisr_repaired(data)                                                 (0x00000010&((data)<<4))
#define BISR0_sc_bisr_repaired_src(data)                                             ((0x00000010&(data))>>4)
#define BISR0_get_sc_bisr_repaired(data)                                             ((0x00000010&(data))>>4)
#define BISR0_sc_bisr_second_run_en_shift                                            (3)
#define BISR0_sc_bisr_second_run_en_mask                                             (0x00000008)
#define BISR0_sc_bisr_second_run_en(data)                                            (0x00000008&((data)<<3))
#define BISR0_sc_bisr_second_run_en_src(data)                                        ((0x00000008&(data))>>3)
#define BISR0_get_sc_bisr_second_run_en(data)                                        ((0x00000008&(data))>>3)
#define BISR0_sc_bisr_hold_remap_shift                                               (2)
#define BISR0_sc_bisr_hold_remap_mask                                                (0x00000004)
#define BISR0_sc_bisr_hold_remap(data)                                               (0x00000004&((data)<<2))
#define BISR0_sc_bisr_hold_remap_src(data)                                           ((0x00000004&(data))>>2)
#define BISR0_get_sc_bisr_hold_remap(data)                                           ((0x00000004&(data))>>2)
#define BISR0_sc_bisr_pwr_rstn_shift                                                 (1)
#define BISR0_sc_bisr_pwr_rstn_mask                                                  (0x00000002)
#define BISR0_sc_bisr_pwr_rstn(data)                                                 (0x00000002&((data)<<1))
#define BISR0_sc_bisr_pwr_rstn_src(data)                                             ((0x00000002&(data))>>1)
#define BISR0_get_sc_bisr_pwr_rstn(data)                                             ((0x00000002&(data))>>1)
#define BISR0_sc_bisr_rstn_shift                                                     (0)
#define BISR0_sc_bisr_rstn_mask                                                      (0x00000001)
#define BISR0_sc_bisr_rstn(data)                                                     (0x00000001&((data)<<0))
#define BISR0_sc_bisr_rstn_src(data)                                                 ((0x00000001&(data))>>0)
#define BISR0_get_sc_bisr_rstn(data)                                                 ((0x00000001&(data))>>0)


#define BISR1                                                                        0x980540A0
#define BISR1_reg_addr                                                               "0xD80540A0"
#define BISR1_reg                                                                    0xD80540A0
#define set_BISR1_reg(data)   (*((volatile unsigned int*) BISR1_reg)=data)
#define get_BISR1_reg   (*((volatile unsigned int*) BISR1_reg))
#define BISR1_inst_adr                                                               "0x0028"
#define BISR1_inst                                                                   0x0028
#define BISR1_sc_bisr_out_shift                                                      (0)
#define BISR1_sc_bisr_out_mask                                                       (0xFFFFFFFF)
#define BISR1_sc_bisr_out(data)                                                      (0xFFFFFFFF&((data)<<0))
#define BISR1_sc_bisr_out_src(data)                                                  ((0xFFFFFFFF&(data))>>0)
#define BISR1_get_sc_bisr_out(data)                                                  ((0xFFFFFFFF&(data))>>0)


#define SRAM_RM                                                                      0x980540A4
#define SRAM_RM_reg_addr                                                             "0xD80540A4"
#define SRAM_RM_reg                                                                  0xD80540A4
#define set_SRAM_RM_reg(data)   (*((volatile unsigned int*) SRAM_RM_reg)=data)
#define get_SRAM_RM_reg   (*((volatile unsigned int*) SRAM_RM_reg))
#define SRAM_RM_inst_adr                                                             "0x0029"
#define SRAM_RM_inst                                                                 0x0029
#define SRAM_RM_gpu_sc2_rm_shift                                                     (26)
#define SRAM_RM_gpu_sc2_rm_mask                                                      (0x3C000000)
#define SRAM_RM_gpu_sc2_rm(data)                                                     (0x3C000000&((data)<<26))
#define SRAM_RM_gpu_sc2_rm_src(data)                                                 ((0x3C000000&(data))>>26)
#define SRAM_RM_get_gpu_sc2_rm(data)                                                 ((0x3C000000&(data))>>26)
#define SRAM_RM_gpu_sc1_rm_shift                                                     (22)
#define SRAM_RM_gpu_sc1_rm_mask                                                      (0x03C00000)
#define SRAM_RM_gpu_sc1_rm(data)                                                     (0x03C00000&((data)<<22))
#define SRAM_RM_gpu_sc1_rm_src(data)                                                 ((0x03C00000&(data))>>22)
#define SRAM_RM_get_gpu_sc1_rm(data)                                                 ((0x03C00000&(data))>>22)
#define SRAM_RM_gpu_sc0_rm_shift                                                     (18)
#define SRAM_RM_gpu_sc0_rm_mask                                                      (0x003C0000)
#define SRAM_RM_gpu_sc0_rm(data)                                                     (0x003C0000&((data)<<18))
#define SRAM_RM_gpu_sc0_rm_src(data)                                                 ((0x003C0000&(data))>>18)
#define SRAM_RM_get_gpu_sc0_rm(data)                                                 ((0x003C0000&(data))>>18)
#define SRAM_RM_gpu_l2_rm_shift                                                      (14)
#define SRAM_RM_gpu_l2_rm_mask                                                       (0x0003C000)
#define SRAM_RM_gpu_l2_rm(data)                                                      (0x0003C000&((data)<<14))
#define SRAM_RM_gpu_l2_rm_src(data)                                                  ((0x0003C000&(data))>>14)
#define SRAM_RM_get_gpu_l2_rm(data)                                                  ((0x0003C000&(data))>>14)
#define SRAM_RM_gpu_cg_rm_shift                                                      (10)
#define SRAM_RM_gpu_cg_rm_mask                                                       (0x00003C00)
#define SRAM_RM_gpu_cg_rm(data)                                                      (0x00003C00&((data)<<10))
#define SRAM_RM_gpu_cg_rm_src(data)                                                  ((0x00003C00&(data))>>10)
#define SRAM_RM_get_gpu_cg_rm(data)                                                  ((0x00003C00&(data))>>10)
#define SRAM_RM_gpu_jm_rm_shift                                                      (6)
#define SRAM_RM_gpu_jm_rm_mask                                                       (0x000003C0)
#define SRAM_RM_gpu_jm_rm(data)                                                      (0x000003C0&((data)<<6))
#define SRAM_RM_gpu_jm_rm_src(data)                                                  ((0x000003C0&(data))>>6)
#define SRAM_RM_get_gpu_jm_rm(data)                                                  ((0x000003C0&(data))>>6)
#define SRAM_RM_gpu_sc2_rme_shift                                                    (5)
#define SRAM_RM_gpu_sc2_rme_mask                                                     (0x00000020)
#define SRAM_RM_gpu_sc2_rme(data)                                                    (0x00000020&((data)<<5))
#define SRAM_RM_gpu_sc2_rme_src(data)                                                ((0x00000020&(data))>>5)
#define SRAM_RM_get_gpu_sc2_rme(data)                                                ((0x00000020&(data))>>5)
#define SRAM_RM_gpu_sc1_rme_shift                                                    (4)
#define SRAM_RM_gpu_sc1_rme_mask                                                     (0x00000010)
#define SRAM_RM_gpu_sc1_rme(data)                                                    (0x00000010&((data)<<4))
#define SRAM_RM_gpu_sc1_rme_src(data)                                                ((0x00000010&(data))>>4)
#define SRAM_RM_get_gpu_sc1_rme(data)                                                ((0x00000010&(data))>>4)
#define SRAM_RM_gpu_sc0_rme_shift                                                    (3)
#define SRAM_RM_gpu_sc0_rme_mask                                                     (0x00000008)
#define SRAM_RM_gpu_sc0_rme(data)                                                    (0x00000008&((data)<<3))
#define SRAM_RM_gpu_sc0_rme_src(data)                                                ((0x00000008&(data))>>3)
#define SRAM_RM_get_gpu_sc0_rme(data)                                                ((0x00000008&(data))>>3)
#define SRAM_RM_gpu_l2_rme_shift                                                     (2)
#define SRAM_RM_gpu_l2_rme_mask                                                      (0x00000004)
#define SRAM_RM_gpu_l2_rme(data)                                                     (0x00000004&((data)<<2))
#define SRAM_RM_gpu_l2_rme_src(data)                                                 ((0x00000004&(data))>>2)
#define SRAM_RM_get_gpu_l2_rme(data)                                                 ((0x00000004&(data))>>2)
#define SRAM_RM_gpu_cg_rme_shift                                                     (1)
#define SRAM_RM_gpu_cg_rme_mask                                                      (0x00000002)
#define SRAM_RM_gpu_cg_rme(data)                                                     (0x00000002&((data)<<1))
#define SRAM_RM_gpu_cg_rme_src(data)                                                 ((0x00000002&(data))>>1)
#define SRAM_RM_get_gpu_cg_rme(data)                                                 ((0x00000002&(data))>>1)
#define SRAM_RM_gpu_jm_rme_shift                                                     (0)
#define SRAM_RM_gpu_jm_rme_mask                                                      (0x00000001)
#define SRAM_RM_gpu_jm_rme(data)                                                     (0x00000001&((data)<<0))
#define SRAM_RM_gpu_jm_rme_src(data)                                                 ((0x00000001&(data))>>0)
#define SRAM_RM_get_gpu_jm_rme(data)                                                 ((0x00000001&(data))>>0)


#define DEBUGPORTS                                                                   0x980540A8
#define DEBUGPORTS_reg_addr                                                          "0xD80540A8"
#define DEBUGPORTS_reg                                                               0xD80540A8
#define set_DEBUGPORTS_reg(data)   (*((volatile unsigned int*) DEBUGPORTS_reg)=data)
#define get_DEBUGPORTS_reg   (*((volatile unsigned int*) DEBUGPORTS_reg))
#define DEBUGPORTS_inst_adr                                                          "0x002A"
#define DEBUGPORTS_inst                                                              0x002A
#define DEBUGPORTS_dbg_sel_shift                                                     (8)
#define DEBUGPORTS_dbg_sel_mask                                                      (0x00000100)
#define DEBUGPORTS_dbg_sel(data)                                                     (0x00000100&((data)<<8))
#define DEBUGPORTS_dbg_sel_src(data)                                                 ((0x00000100&(data))>>8)
#define DEBUGPORTS_get_dbg_sel(data)                                                 ((0x00000100&(data))>>8)
#define DEBUGPORTS_dbg_sel1_shift                                                    (4)
#define DEBUGPORTS_dbg_sel1_mask                                                     (0x000000F0)
#define DEBUGPORTS_dbg_sel1(data)                                                    (0x000000F0&((data)<<4))
#define DEBUGPORTS_dbg_sel1_src(data)                                                ((0x000000F0&(data))>>4)
#define DEBUGPORTS_get_dbg_sel1(data)                                                ((0x000000F0&(data))>>4)
#define DEBUGPORTS_dbg_sel0_shift                                                    (0)
#define DEBUGPORTS_dbg_sel0_mask                                                     (0x0000000F)
#define DEBUGPORTS_dbg_sel0(data)                                                    (0x0000000F&((data)<<0))
#define DEBUGPORTS_dbg_sel0_src(data)                                                ((0x0000000F&(data))>>0)
#define DEBUGPORTS_get_dbg_sel0(data)                                                ((0x0000000F&(data))>>0)


#define DUMMYREGISTERS0                                                              0x980540AC
#define DUMMYREGISTERS0_reg_addr                                                     "0xD80540AC"
#define DUMMYREGISTERS0_reg                                                          0xD80540AC
#define set_DUMMYREGISTERS0_reg(data)   (*((volatile unsigned int*) DUMMYREGISTERS0_reg)=data)
#define get_DUMMYREGISTERS0_reg   (*((volatile unsigned int*) DUMMYREGISTERS0_reg))
#define DUMMYREGISTERS0_inst_adr                                                     "0x002B"
#define DUMMYREGISTERS0_inst                                                         0x002B
#define DUMMYREGISTERS0_dummy_reg0_shift                                             (0)
#define DUMMYREGISTERS0_dummy_reg0_mask                                              (0xFFFFFFFF)
#define DUMMYREGISTERS0_dummy_reg0(data)                                             (0xFFFFFFFF&((data)<<0))
#define DUMMYREGISTERS0_dummy_reg0_src(data)                                         ((0xFFFFFFFF&(data))>>0)
#define DUMMYREGISTERS0_get_dummy_reg0(data)                                         ((0xFFFFFFFF&(data))>>0)


#define DUMMYREGISTERS1                                                              0x980540B0
#define DUMMYREGISTERS1_reg_addr                                                     "0xD80540B0"
#define DUMMYREGISTERS1_reg                                                          0xD80540B0
#define set_DUMMYREGISTERS1_reg(data)   (*((volatile unsigned int*) DUMMYREGISTERS1_reg)=data)
#define get_DUMMYREGISTERS1_reg   (*((volatile unsigned int*) DUMMYREGISTERS1_reg))
#define DUMMYREGISTERS1_inst_adr                                                     "0x002C"
#define DUMMYREGISTERS1_inst                                                         0x002C
#define DUMMYREGISTERS1_dummy_reg1_shift                                             (0)
#define DUMMYREGISTERS1_dummy_reg1_mask                                              (0xFFFFFFFF)
#define DUMMYREGISTERS1_dummy_reg1(data)                                             (0xFFFFFFFF&((data)<<0))
#define DUMMYREGISTERS1_dummy_reg1_src(data)                                         ((0xFFFFFFFF&(data))>>0)
#define DUMMYREGISTERS1_get_dummy_reg1(data)                                         ((0xFFFFFFFF&(data))>>0)


#define CLK_GATING                                                                   0x980540B4
#define CLK_GATING_reg_addr                                                          "0xD80540B4"
#define CLK_GATING_reg                                                               0xD80540B4
#define set_CLK_GATING_reg(data)   (*((volatile unsigned int*) CLK_GATING_reg)=data)
#define get_CLK_GATING_reg   (*((volatile unsigned int*) CLK_GATING_reg))
#define CLK_GATING_inst_adr                                                          "0x002D"
#define CLK_GATING_inst                                                              0x002D
#define CLK_GATING_clk_gate_dbus_dis_shift                                           (0)
#define CLK_GATING_clk_gate_dbus_dis_mask                                            (0x00000001)
#define CLK_GATING_clk_gate_dbus_dis(data)                                           (0x00000001&((data)<<0))
#define CLK_GATING_clk_gate_dbus_dis_src(data)                                       ((0x00000001&(data))>>0)
#define CLK_GATING_get_clk_gate_dbus_dis(data)                                       ((0x00000001&(data))>>0)


#define DSS_C30_7T_CTRL                                                              0x980540B8
#define DSS_C30_7T_CTRL_reg_addr                                                     "0xD80540B8"
#define DSS_C30_7T_CTRL_reg                                                          0xD80540B8
#define set_DSS_C30_7T_CTRL_reg(data)   (*((volatile unsigned int*) DSS_C30_7T_CTRL_reg)=data)
#define get_DSS_C30_7T_CTRL_reg   (*((volatile unsigned int*) DSS_C30_7T_CTRL_reg))
#define DSS_C30_7T_CTRL_inst_adr                                                     "0x002E"
#define DSS_C30_7T_CTRL_inst                                                         0x002E
#define DSS_C30_7T_CTRL_c30_data_in_shift                                            (8)
#define DSS_C30_7T_CTRL_c30_data_in_mask                                             (0x0FFFFF00)
#define DSS_C30_7T_CTRL_c30_data_in(data)                                            (0x0FFFFF00&((data)<<8))
#define DSS_C30_7T_CTRL_c30_data_in_src(data)                                        ((0x0FFFFF00&(data))>>8)
#define DSS_C30_7T_CTRL_get_c30_data_in(data)                                        ((0x0FFFFF00&(data))>>8)
#define DSS_C30_7T_CTRL_c30_speed_en_shift                                           (5)
#define DSS_C30_7T_CTRL_c30_speed_en_mask                                            (0x00000020)
#define DSS_C30_7T_CTRL_c30_speed_en(data)                                           (0x00000020&((data)<<5))
#define DSS_C30_7T_CTRL_c30_speed_en_src(data)                                       ((0x00000020&(data))>>5)
#define DSS_C30_7T_CTRL_get_c30_speed_en(data)                                       ((0x00000020&(data))>>5)
#define DSS_C30_7T_CTRL_c30_wire_sel_shift                                           (4)
#define DSS_C30_7T_CTRL_c30_wire_sel_mask                                            (0x00000010)
#define DSS_C30_7T_CTRL_c30_wire_sel(data)                                           (0x00000010&((data)<<4))
#define DSS_C30_7T_CTRL_c30_wire_sel_src(data)                                       ((0x00000010&(data))>>4)
#define DSS_C30_7T_CTRL_get_c30_wire_sel(data)                                       ((0x00000010&(data))>>4)
#define DSS_C30_7T_CTRL_c30_ro_sel_shift                                             (1)
#define DSS_C30_7T_CTRL_c30_ro_sel_mask                                              (0x0000000E)
#define DSS_C30_7T_CTRL_c30_ro_sel(data)                                             (0x0000000E&((data)<<1))
#define DSS_C30_7T_CTRL_c30_ro_sel_src(data)                                         ((0x0000000E&(data))>>1)
#define DSS_C30_7T_CTRL_get_c30_ro_sel(data)                                         ((0x0000000E&(data))>>1)
#define DSS_C30_7T_CTRL_c30_dss_rst_n_shift                                          (0)
#define DSS_C30_7T_CTRL_c30_dss_rst_n_mask                                           (0x00000001)
#define DSS_C30_7T_CTRL_c30_dss_rst_n(data)                                          (0x00000001&((data)<<0))
#define DSS_C30_7T_CTRL_c30_dss_rst_n_src(data)                                      ((0x00000001&(data))>>0)
#define DSS_C30_7T_CTRL_get_c30_dss_rst_n(data)                                      ((0x00000001&(data))>>0)


#define DSS_C30_7T_STATUS                                                            0x980540BC
#define DSS_C30_7T_STATUS_reg_addr                                                   "0xD80540BC"
#define DSS_C30_7T_STATUS_reg                                                        0xD80540BC
#define set_DSS_C30_7T_STATUS_reg(data)   (*((volatile unsigned int*) DSS_C30_7T_STATUS_reg)=data)
#define get_DSS_C30_7T_STATUS_reg   (*((volatile unsigned int*) DSS_C30_7T_STATUS_reg))
#define DSS_C30_7T_STATUS_inst_adr                                                   "0x002F"
#define DSS_C30_7T_STATUS_inst                                                       0x002F
#define DSS_C30_7T_STATUS_c30_count_out_shift                                        (4)
#define DSS_C30_7T_STATUS_c30_count_out_mask                                         (0x00FFFFF0)
#define DSS_C30_7T_STATUS_c30_count_out(data)                                        (0x00FFFFF0&((data)<<4))
#define DSS_C30_7T_STATUS_c30_count_out_src(data)                                    ((0x00FFFFF0&(data))>>4)
#define DSS_C30_7T_STATUS_get_c30_count_out(data)                                    ((0x00FFFFF0&(data))>>4)
#define DSS_C30_7T_STATUS_c30_wsort_go_shift                                         (1)
#define DSS_C30_7T_STATUS_c30_wsort_go_mask                                          (0x00000002)
#define DSS_C30_7T_STATUS_c30_wsort_go(data)                                         (0x00000002&((data)<<1))
#define DSS_C30_7T_STATUS_c30_wsort_go_src(data)                                     ((0x00000002&(data))>>1)
#define DSS_C30_7T_STATUS_get_c30_wsort_go(data)                                     ((0x00000002&(data))>>1)
#define DSS_C30_7T_STATUS_c30_ready_shift                                            (0)
#define DSS_C30_7T_STATUS_c30_ready_mask                                             (0x00000001)
#define DSS_C30_7T_STATUS_c30_ready(data)                                            (0x00000001&((data)<<0))
#define DSS_C30_7T_STATUS_c30_ready_src(data)                                        ((0x00000001&(data))>>0)
#define DSS_C30_7T_STATUS_get_c30_ready(data)                                        ((0x00000001&(data))>>0)


#define DSS_C30_7T_DEBUG                                                             0x980540C0
#define DSS_C30_7T_DEBUG_reg_addr                                                    "0xD80540C0"
#define DSS_C30_7T_DEBUG_reg                                                         0xD80540C0
#define set_DSS_C30_7T_DEBUG_reg(data)   (*((volatile unsigned int*) DSS_C30_7T_DEBUG_reg)=data)
#define get_DSS_C30_7T_DEBUG_reg   (*((volatile unsigned int*) DSS_C30_7T_DEBUG_reg))
#define DSS_C30_7T_DEBUG_inst_adr                                                    "0x0030"
#define DSS_C30_7T_DEBUG_inst                                                        0x0030
#define DSS_C30_7T_DEBUG_c30_dbgo_shift                                              (0)
#define DSS_C30_7T_DEBUG_c30_dbgo_mask                                               (0x0000FFFF)
#define DSS_C30_7T_DEBUG_c30_dbgo(data)                                              (0x0000FFFF&((data)<<0))
#define DSS_C30_7T_DEBUG_c30_dbgo_src(data)                                          ((0x0000FFFF&(data))>>0)
#define DSS_C30_7T_DEBUG_get_c30_dbgo(data)                                          ((0x0000FFFF&(data))>>0)


#define DSS_C35_7T_CTRL                                                              0x980540C4
#define DSS_C35_7T_CTRL_reg_addr                                                     "0xD80540C4"
#define DSS_C35_7T_CTRL_reg                                                          0xD80540C4
#define set_DSS_C35_7T_CTRL_reg(data)   (*((volatile unsigned int*) DSS_C35_7T_CTRL_reg)=data)
#define get_DSS_C35_7T_CTRL_reg   (*((volatile unsigned int*) DSS_C35_7T_CTRL_reg))
#define DSS_C35_7T_CTRL_inst_adr                                                     "0x0031"
#define DSS_C35_7T_CTRL_inst                                                         0x0031
#define DSS_C35_7T_CTRL_c35_data_in_shift                                            (8)
#define DSS_C35_7T_CTRL_c35_data_in_mask                                             (0x0FFFFF00)
#define DSS_C35_7T_CTRL_c35_data_in(data)                                            (0x0FFFFF00&((data)<<8))
#define DSS_C35_7T_CTRL_c35_data_in_src(data)                                        ((0x0FFFFF00&(data))>>8)
#define DSS_C35_7T_CTRL_get_c35_data_in(data)                                        ((0x0FFFFF00&(data))>>8)
#define DSS_C35_7T_CTRL_c35_speed_en_shift                                           (5)
#define DSS_C35_7T_CTRL_c35_speed_en_mask                                            (0x00000020)
#define DSS_C35_7T_CTRL_c35_speed_en(data)                                           (0x00000020&((data)<<5))
#define DSS_C35_7T_CTRL_c35_speed_en_src(data)                                       ((0x00000020&(data))>>5)
#define DSS_C35_7T_CTRL_get_c35_speed_en(data)                                       ((0x00000020&(data))>>5)
#define DSS_C35_7T_CTRL_c35_wire_sel_shift                                           (4)
#define DSS_C35_7T_CTRL_c35_wire_sel_mask                                            (0x00000010)
#define DSS_C35_7T_CTRL_c35_wire_sel(data)                                           (0x00000010&((data)<<4))
#define DSS_C35_7T_CTRL_c35_wire_sel_src(data)                                       ((0x00000010&(data))>>4)
#define DSS_C35_7T_CTRL_get_c35_wire_sel(data)                                       ((0x00000010&(data))>>4)
#define DSS_C35_7T_CTRL_c35_ro_sel_shift                                             (1)
#define DSS_C35_7T_CTRL_c35_ro_sel_mask                                              (0x0000000E)
#define DSS_C35_7T_CTRL_c35_ro_sel(data)                                             (0x0000000E&((data)<<1))
#define DSS_C35_7T_CTRL_c35_ro_sel_src(data)                                         ((0x0000000E&(data))>>1)
#define DSS_C35_7T_CTRL_get_c35_ro_sel(data)                                         ((0x0000000E&(data))>>1)
#define DSS_C35_7T_CTRL_c35_dss_rst_n_shift                                          (0)
#define DSS_C35_7T_CTRL_c35_dss_rst_n_mask                                           (0x00000001)
#define DSS_C35_7T_CTRL_c35_dss_rst_n(data)                                          (0x00000001&((data)<<0))
#define DSS_C35_7T_CTRL_c35_dss_rst_n_src(data)                                      ((0x00000001&(data))>>0)
#define DSS_C35_7T_CTRL_get_c35_dss_rst_n(data)                                      ((0x00000001&(data))>>0)


#define DSS_C35_7T_STATUS                                                            0x980540C8
#define DSS_C35_7T_STATUS_reg_addr                                                   "0xD80540C8"
#define DSS_C35_7T_STATUS_reg                                                        0xD80540C8
#define set_DSS_C35_7T_STATUS_reg(data)   (*((volatile unsigned int*) DSS_C35_7T_STATUS_reg)=data)
#define get_DSS_C35_7T_STATUS_reg   (*((volatile unsigned int*) DSS_C35_7T_STATUS_reg))
#define DSS_C35_7T_STATUS_inst_adr                                                   "0x0032"
#define DSS_C35_7T_STATUS_inst                                                       0x0032
#define DSS_C35_7T_STATUS_c35_count_out_shift                                        (4)
#define DSS_C35_7T_STATUS_c35_count_out_mask                                         (0x00FFFFF0)
#define DSS_C35_7T_STATUS_c35_count_out(data)                                        (0x00FFFFF0&((data)<<4))
#define DSS_C35_7T_STATUS_c35_count_out_src(data)                                    ((0x00FFFFF0&(data))>>4)
#define DSS_C35_7T_STATUS_get_c35_count_out(data)                                    ((0x00FFFFF0&(data))>>4)
#define DSS_C35_7T_STATUS_c35_wsort_go_shift                                         (1)
#define DSS_C35_7T_STATUS_c35_wsort_go_mask                                          (0x00000002)
#define DSS_C35_7T_STATUS_c35_wsort_go(data)                                         (0x00000002&((data)<<1))
#define DSS_C35_7T_STATUS_c35_wsort_go_src(data)                                     ((0x00000002&(data))>>1)
#define DSS_C35_7T_STATUS_get_c35_wsort_go(data)                                     ((0x00000002&(data))>>1)
#define DSS_C35_7T_STATUS_c35_ready_shift                                            (0)
#define DSS_C35_7T_STATUS_c35_ready_mask                                             (0x00000001)
#define DSS_C35_7T_STATUS_c35_ready(data)                                            (0x00000001&((data)<<0))
#define DSS_C35_7T_STATUS_c35_ready_src(data)                                        ((0x00000001&(data))>>0)
#define DSS_C35_7T_STATUS_get_c35_ready(data)                                        ((0x00000001&(data))>>0)


#define DSS_C35_7T_DEBUG                                                             0x980540CC
#define DSS_C35_7T_DEBUG_reg_addr                                                    "0xD80540CC"
#define DSS_C35_7T_DEBUG_reg                                                         0xD80540CC
#define set_DSS_C35_7T_DEBUG_reg(data)   (*((volatile unsigned int*) DSS_C35_7T_DEBUG_reg)=data)
#define get_DSS_C35_7T_DEBUG_reg   (*((volatile unsigned int*) DSS_C35_7T_DEBUG_reg))
#define DSS_C35_7T_DEBUG_inst_adr                                                    "0x0033"
#define DSS_C35_7T_DEBUG_inst                                                        0x0033
#define DSS_C35_7T_DEBUG_c35_dbgo_shift                                              (0)
#define DSS_C35_7T_DEBUG_c35_dbgo_mask                                               (0x0000FFFF)
#define DSS_C35_7T_DEBUG_c35_dbgo(data)                                              (0x0000FFFF&((data)<<0))
#define DSS_C35_7T_DEBUG_c35_dbgo_src(data)                                          ((0x0000FFFF&(data))>>0)
#define DSS_C35_7T_DEBUG_get_c35_dbgo(data)                                          ((0x0000FFFF&(data))>>0)


#define DSS_C40_7T_CTRL                                                              0x980540D0
#define DSS_C40_7T_CTRL_reg_addr                                                     "0xD80540D0"
#define DSS_C40_7T_CTRL_reg                                                          0xD80540D0
#define set_DSS_C40_7T_CTRL_reg(data)   (*((volatile unsigned int*) DSS_C40_7T_CTRL_reg)=data)
#define get_DSS_C40_7T_CTRL_reg   (*((volatile unsigned int*) DSS_C40_7T_CTRL_reg))
#define DSS_C40_7T_CTRL_inst_adr                                                     "0x0034"
#define DSS_C40_7T_CTRL_inst                                                         0x0034
#define DSS_C40_7T_CTRL_c40_data_in_shift                                            (8)
#define DSS_C40_7T_CTRL_c40_data_in_mask                                             (0x0FFFFF00)
#define DSS_C40_7T_CTRL_c40_data_in(data)                                            (0x0FFFFF00&((data)<<8))
#define DSS_C40_7T_CTRL_c40_data_in_src(data)                                        ((0x0FFFFF00&(data))>>8)
#define DSS_C40_7T_CTRL_get_c40_data_in(data)                                        ((0x0FFFFF00&(data))>>8)
#define DSS_C40_7T_CTRL_c40_speed_en_shift                                           (5)
#define DSS_C40_7T_CTRL_c40_speed_en_mask                                            (0x00000020)
#define DSS_C40_7T_CTRL_c40_speed_en(data)                                           (0x00000020&((data)<<5))
#define DSS_C40_7T_CTRL_c40_speed_en_src(data)                                       ((0x00000020&(data))>>5)
#define DSS_C40_7T_CTRL_get_c40_speed_en(data)                                       ((0x00000020&(data))>>5)
#define DSS_C40_7T_CTRL_c40_wire_sel_shift                                           (4)
#define DSS_C40_7T_CTRL_c40_wire_sel_mask                                            (0x00000010)
#define DSS_C40_7T_CTRL_c40_wire_sel(data)                                           (0x00000010&((data)<<4))
#define DSS_C40_7T_CTRL_c40_wire_sel_src(data)                                       ((0x00000010&(data))>>4)
#define DSS_C40_7T_CTRL_get_c40_wire_sel(data)                                       ((0x00000010&(data))>>4)
#define DSS_C40_7T_CTRL_c40_ro_sel_shift                                             (1)
#define DSS_C40_7T_CTRL_c40_ro_sel_mask                                              (0x0000000E)
#define DSS_C40_7T_CTRL_c40_ro_sel(data)                                             (0x0000000E&((data)<<1))
#define DSS_C40_7T_CTRL_c40_ro_sel_src(data)                                         ((0x0000000E&(data))>>1)
#define DSS_C40_7T_CTRL_get_c40_ro_sel(data)                                         ((0x0000000E&(data))>>1)
#define DSS_C40_7T_CTRL_c40_dss_rst_n_shift                                          (0)
#define DSS_C40_7T_CTRL_c40_dss_rst_n_mask                                           (0x00000001)
#define DSS_C40_7T_CTRL_c40_dss_rst_n(data)                                          (0x00000001&((data)<<0))
#define DSS_C40_7T_CTRL_c40_dss_rst_n_src(data)                                      ((0x00000001&(data))>>0)
#define DSS_C40_7T_CTRL_get_c40_dss_rst_n(data)                                      ((0x00000001&(data))>>0)


#define DSS_C40_7T_STATUS                                                            0x980540D4
#define DSS_C40_7T_STATUS_reg_addr                                                   "0xD80540D4"
#define DSS_C40_7T_STATUS_reg                                                        0xD80540D4
#define set_DSS_C40_7T_STATUS_reg(data)   (*((volatile unsigned int*) DSS_C40_7T_STATUS_reg)=data)
#define get_DSS_C40_7T_STATUS_reg   (*((volatile unsigned int*) DSS_C40_7T_STATUS_reg))
#define DSS_C40_7T_STATUS_inst_adr                                                   "0x0035"
#define DSS_C40_7T_STATUS_inst                                                       0x0035
#define DSS_C40_7T_STATUS_c40_count_out_shift                                        (4)
#define DSS_C40_7T_STATUS_c40_count_out_mask                                         (0x00FFFFF0)
#define DSS_C40_7T_STATUS_c40_count_out(data)                                        (0x00FFFFF0&((data)<<4))
#define DSS_C40_7T_STATUS_c40_count_out_src(data)                                    ((0x00FFFFF0&(data))>>4)
#define DSS_C40_7T_STATUS_get_c40_count_out(data)                                    ((0x00FFFFF0&(data))>>4)
#define DSS_C40_7T_STATUS_c40_wsort_go_shift                                         (1)
#define DSS_C40_7T_STATUS_c40_wsort_go_mask                                          (0x00000002)
#define DSS_C40_7T_STATUS_c40_wsort_go(data)                                         (0x00000002&((data)<<1))
#define DSS_C40_7T_STATUS_c40_wsort_go_src(data)                                     ((0x00000002&(data))>>1)
#define DSS_C40_7T_STATUS_get_c40_wsort_go(data)                                     ((0x00000002&(data))>>1)
#define DSS_C40_7T_STATUS_c40_ready_shift                                            (0)
#define DSS_C40_7T_STATUS_c40_ready_mask                                             (0x00000001)
#define DSS_C40_7T_STATUS_c40_ready(data)                                            (0x00000001&((data)<<0))
#define DSS_C40_7T_STATUS_c40_ready_src(data)                                        ((0x00000001&(data))>>0)
#define DSS_C40_7T_STATUS_get_c40_ready(data)                                        ((0x00000001&(data))>>0)


#define DSS_C40_7T_DEBUG                                                             0x980540D8
#define DSS_C40_7T_DEBUG_reg_addr                                                    "0xD80540D8"
#define DSS_C40_7T_DEBUG_reg                                                         0xD80540D8
#define set_DSS_C40_7T_DEBUG_reg(data)   (*((volatile unsigned int*) DSS_C40_7T_DEBUG_reg)=data)
#define get_DSS_C40_7T_DEBUG_reg   (*((volatile unsigned int*) DSS_C40_7T_DEBUG_reg))
#define DSS_C40_7T_DEBUG_inst_adr                                                    "0x0036"
#define DSS_C40_7T_DEBUG_inst                                                        0x0036
#define DSS_C40_7T_DEBUG_c40_dbgo_shift                                              (0)
#define DSS_C40_7T_DEBUG_c40_dbgo_mask                                               (0x0000FFFF)
#define DSS_C40_7T_DEBUG_c40_dbgo(data)                                              (0x0000FFFF&((data)<<0))
#define DSS_C40_7T_DEBUG_c40_dbgo_src(data)                                          ((0x0000FFFF&(data))>>0)
#define DSS_C40_7T_DEBUG_get_c40_dbgo(data)                                          ((0x0000FFFF&(data))>>0)


#define SRAM_LS                                                                      0x980540DC
#define SRAM_LS_reg_addr                                                             "0xD80540DC"
#define SRAM_LS_reg                                                                  0xD80540DC
#define set_SRAM_LS_reg(data)   (*((volatile unsigned int*) SRAM_LS_reg)=data)
#define get_SRAM_LS_reg   (*((volatile unsigned int*) SRAM_LS_reg))
#define SRAM_LS_inst_adr                                                             "0x0037"
#define SRAM_LS_inst                                                                 0x0037
#define SRAM_LS_gpu_sc2_ls_shift                                                     (5)
#define SRAM_LS_gpu_sc2_ls_mask                                                      (0x00000020)
#define SRAM_LS_gpu_sc2_ls(data)                                                     (0x00000020&((data)<<5))
#define SRAM_LS_gpu_sc2_ls_src(data)                                                 ((0x00000020&(data))>>5)
#define SRAM_LS_get_gpu_sc2_ls(data)                                                 ((0x00000020&(data))>>5)
#define SRAM_LS_gpu_sc1_ls_shift                                                     (4)
#define SRAM_LS_gpu_sc1_ls_mask                                                      (0x00000010)
#define SRAM_LS_gpu_sc1_ls(data)                                                     (0x00000010&((data)<<4))
#define SRAM_LS_gpu_sc1_ls_src(data)                                                 ((0x00000010&(data))>>4)
#define SRAM_LS_get_gpu_sc1_ls(data)                                                 ((0x00000010&(data))>>4)
#define SRAM_LS_gpu_sc0_ls_shift                                                     (3)
#define SRAM_LS_gpu_sc0_ls_mask                                                      (0x00000008)
#define SRAM_LS_gpu_sc0_ls(data)                                                     (0x00000008&((data)<<3))
#define SRAM_LS_gpu_sc0_ls_src(data)                                                 ((0x00000008&(data))>>3)
#define SRAM_LS_get_gpu_sc0_ls(data)                                                 ((0x00000008&(data))>>3)
#define SRAM_LS_gpu_l2_ls_shift                                                      (2)
#define SRAM_LS_gpu_l2_ls_mask                                                       (0x00000004)
#define SRAM_LS_gpu_l2_ls(data)                                                      (0x00000004&((data)<<2))
#define SRAM_LS_gpu_l2_ls_src(data)                                                  ((0x00000004&(data))>>2)
#define SRAM_LS_get_gpu_l2_ls(data)                                                  ((0x00000004&(data))>>2)
#define SRAM_LS_gpu_cg_ls_shift                                                      (1)
#define SRAM_LS_gpu_cg_ls_mask                                                       (0x00000002)
#define SRAM_LS_gpu_cg_ls(data)                                                      (0x00000002&((data)<<1))
#define SRAM_LS_gpu_cg_ls_src(data)                                                  ((0x00000002&(data))>>1)
#define SRAM_LS_get_gpu_cg_ls(data)                                                  ((0x00000002&(data))>>1)
#define SRAM_LS_gpu_jm_ls_shift                                                      (0)
#define SRAM_LS_gpu_jm_ls_mask                                                       (0x00000001)
#define SRAM_LS_gpu_jm_ls(data)                                                      (0x00000001&((data)<<0))
#define SRAM_LS_gpu_jm_ls_src(data)                                                  ((0x00000001&(data))>>0)
#define SRAM_LS_get_gpu_jm_ls(data)                                                  ((0x00000001&(data))>>0)


#define CORE0_POWER_SWITCH1                                                          0x98054100
#define CORE0_POWER_SWITCH1_reg_addr                                                 "0xD8054100"
#define CORE0_POWER_SWITCH1_reg                                                      0xD8054100
#define set_CORE0_POWER_SWITCH1_reg(data)   (*((volatile unsigned int*) CORE0_POWER_SWITCH1_reg)=data)
#define get_CORE0_POWER_SWITCH1_reg   (*((volatile unsigned int*) CORE0_POWER_SWITCH1_reg))
#define CORE0_POWER_SWITCH1_inst_adr                                                 "0x0040"
#define CORE0_POWER_SWITCH1_inst                                                     0x0040
#define CORE0_POWER_SWITCH1_core0_L2H_DELAY_CYCLE_shift                              (0)
#define CORE0_POWER_SWITCH1_core0_L2H_DELAY_CYCLE_mask                               (0xFFFFFFFF)
#define CORE0_POWER_SWITCH1_core0_L2H_DELAY_CYCLE(data)                              (0xFFFFFFFF&((data)<<0))
#define CORE0_POWER_SWITCH1_core0_L2H_DELAY_CYCLE_src(data)                          ((0xFFFFFFFF&(data))>>0)
#define CORE0_POWER_SWITCH1_get_core0_L2H_DELAY_CYCLE(data)                          ((0xFFFFFFFF&(data))>>0)


#define CORE0_POWER_SWITCH2                                                          0x98054104
#define CORE0_POWER_SWITCH2_reg_addr                                                 "0xD8054104"
#define CORE0_POWER_SWITCH2_reg                                                      0xD8054104
#define set_CORE0_POWER_SWITCH2_reg(data)   (*((volatile unsigned int*) CORE0_POWER_SWITCH2_reg)=data)
#define get_CORE0_POWER_SWITCH2_reg   (*((volatile unsigned int*) CORE0_POWER_SWITCH2_reg))
#define CORE0_POWER_SWITCH2_inst_adr                                                 "0x0041"
#define CORE0_POWER_SWITCH2_inst                                                     0x0041
#define CORE0_POWER_SWITCH2_core0_H2L_DELAY_CYCLE_shift                              (0)
#define CORE0_POWER_SWITCH2_core0_H2L_DELAY_CYCLE_mask                               (0xFFFFFFFF)
#define CORE0_POWER_SWITCH2_core0_H2L_DELAY_CYCLE(data)                              (0xFFFFFFFF&((data)<<0))
#define CORE0_POWER_SWITCH2_core0_H2L_DELAY_CYCLE_src(data)                          ((0xFFFFFFFF&(data))>>0)
#define CORE0_POWER_SWITCH2_get_core0_H2L_DELAY_CYCLE(data)                          ((0xFFFFFFFF&(data))>>0)


#define CORE0_POWER_SWITCH3                                                          0x98054108
#define CORE0_POWER_SWITCH3_reg_addr                                                 "0xD8054108"
#define CORE0_POWER_SWITCH3_reg                                                      0xD8054108
#define set_CORE0_POWER_SWITCH3_reg(data)   (*((volatile unsigned int*) CORE0_POWER_SWITCH3_reg)=data)
#define get_CORE0_POWER_SWITCH3_reg   (*((volatile unsigned int*) CORE0_POWER_SWITCH3_reg))
#define CORE0_POWER_SWITCH3_inst_adr                                                 "0x0042"
#define CORE0_POWER_SWITCH3_inst                                                     0x0042
#define CORE0_POWER_SWITCH3_core0_SD_REG_shift                                       (0)
#define CORE0_POWER_SWITCH3_core0_SD_REG_mask                                        (0xFFFFFFFF)
#define CORE0_POWER_SWITCH3_core0_SD_REG(data)                                       (0xFFFFFFFF&((data)<<0))
#define CORE0_POWER_SWITCH3_core0_SD_REG_src(data)                                   ((0xFFFFFFFF&(data))>>0)
#define CORE0_POWER_SWITCH3_get_core0_SD_REG(data)                                   ((0xFFFFFFFF&(data))>>0)


#define CORE0_POWER_SWITCH4                                                          0x9805410C
#define CORE0_POWER_SWITCH4_reg_addr                                                 "0xD805410C"
#define CORE0_POWER_SWITCH4_reg                                                      0xD805410C
#define set_CORE0_POWER_SWITCH4_reg(data)   (*((volatile unsigned int*) CORE0_POWER_SWITCH4_reg)=data)
#define get_CORE0_POWER_SWITCH4_reg   (*((volatile unsigned int*) CORE0_POWER_SWITCH4_reg))
#define CORE0_POWER_SWITCH4_inst_adr                                                 "0x0043"
#define CORE0_POWER_SWITCH4_inst                                                     0x0043
#define CORE0_POWER_SWITCH4_core0_MUX_REG_shift                                      (0)
#define CORE0_POWER_SWITCH4_core0_MUX_REG_mask                                       (0xFFFFFFFF)
#define CORE0_POWER_SWITCH4_core0_MUX_REG(data)                                      (0xFFFFFFFF&((data)<<0))
#define CORE0_POWER_SWITCH4_core0_MUX_REG_src(data)                                  ((0xFFFFFFFF&(data))>>0)
#define CORE0_POWER_SWITCH4_get_core0_MUX_REG(data)                                  ((0xFFFFFFFF&(data))>>0)


#define CORE0_POWER_SWITCH5                                                          0x98054110
#define CORE0_POWER_SWITCH5_reg_addr                                                 "0xD8054110"
#define CORE0_POWER_SWITCH5_reg                                                      0xD8054110
#define set_CORE0_POWER_SWITCH5_reg(data)   (*((volatile unsigned int*) CORE0_POWER_SWITCH5_reg)=data)
#define get_CORE0_POWER_SWITCH5_reg   (*((volatile unsigned int*) CORE0_POWER_SWITCH5_reg))
#define CORE0_POWER_SWITCH5_inst_adr                                                 "0x0044"
#define CORE0_POWER_SWITCH5_inst                                                     0x0044
#define CORE0_POWER_SWITCH5_core0_CTRL_shift                                         (0)
#define CORE0_POWER_SWITCH5_core0_CTRL_mask                                          (0xFFFFFFFF)
#define CORE0_POWER_SWITCH5_core0_CTRL(data)                                         (0xFFFFFFFF&((data)<<0))
#define CORE0_POWER_SWITCH5_core0_CTRL_src(data)                                     ((0xFFFFFFFF&(data))>>0)
#define CORE0_POWER_SWITCH5_get_core0_CTRL(data)                                     ((0xFFFFFFFF&(data))>>0)


#define CORE0_POWER_SWITCH6                                                          0x98054114
#define CORE0_POWER_SWITCH6_reg_addr                                                 "0xD8054114"
#define CORE0_POWER_SWITCH6_reg                                                      0xD8054114
#define set_CORE0_POWER_SWITCH6_reg(data)   (*((volatile unsigned int*) CORE0_POWER_SWITCH6_reg)=data)
#define get_CORE0_POWER_SWITCH6_reg   (*((volatile unsigned int*) CORE0_POWER_SWITCH6_reg))
#define CORE0_POWER_SWITCH6_inst_adr                                                 "0x0045"
#define CORE0_POWER_SWITCH6_inst                                                     0x0045
#define CORE0_POWER_SWITCH6_core0_last_delay_cycle_shift                             (0)
#define CORE0_POWER_SWITCH6_core0_last_delay_cycle_mask                              (0xFFFFFFFF)
#define CORE0_POWER_SWITCH6_core0_last_delay_cycle(data)                             (0xFFFFFFFF&((data)<<0))
#define CORE0_POWER_SWITCH6_core0_last_delay_cycle_src(data)                         ((0xFFFFFFFF&(data))>>0)
#define CORE0_POWER_SWITCH6_get_core0_last_delay_cycle(data)                         ((0xFFFFFFFF&(data))>>0)


#define CORE0_POWER_SWITCH7                                                          0x98054118
#define CORE0_POWER_SWITCH7_reg_addr                                                 "0xD8054118"
#define CORE0_POWER_SWITCH7_reg                                                      0xD8054118
#define set_CORE0_POWER_SWITCH7_reg(data)   (*((volatile unsigned int*) CORE0_POWER_SWITCH7_reg)=data)
#define get_CORE0_POWER_SWITCH7_reg   (*((volatile unsigned int*) CORE0_POWER_SWITCH7_reg))
#define CORE0_POWER_SWITCH7_inst_adr                                                 "0x0046"
#define CORE0_POWER_SWITCH7_inst                                                     0x0046
#define CORE0_POWER_SWITCH7_core0_pg_switch_info_shift                               (0)
#define CORE0_POWER_SWITCH7_core0_pg_switch_info_mask                                (0xFFFFFFFF)
#define CORE0_POWER_SWITCH7_core0_pg_switch_info(data)                               (0xFFFFFFFF&((data)<<0))
#define CORE0_POWER_SWITCH7_core0_pg_switch_info_src(data)                           ((0xFFFFFFFF&(data))>>0)
#define CORE0_POWER_SWITCH7_get_core0_pg_switch_info(data)                           ((0xFFFFFFFF&(data))>>0)


#define CORE0_POWER_SWITCH8                                                          0x9805411C
#define CORE0_POWER_SWITCH8_reg_addr                                                 "0xD805411C"
#define CORE0_POWER_SWITCH8_reg                                                      0xD805411C
#define set_CORE0_POWER_SWITCH8_reg(data)   (*((volatile unsigned int*) CORE0_POWER_SWITCH8_reg)=data)
#define get_CORE0_POWER_SWITCH8_reg   (*((volatile unsigned int*) CORE0_POWER_SWITCH8_reg))
#define CORE0_POWER_SWITCH8_inst_adr                                                 "0x0047"
#define CORE0_POWER_SWITCH8_inst                                                     0x0047
#define CORE0_POWER_SWITCH8_core0_isolation_threshold_shift                          (0)
#define CORE0_POWER_SWITCH8_core0_isolation_threshold_mask                           (0xFFFFFFFF)
#define CORE0_POWER_SWITCH8_core0_isolation_threshold(data)                          (0xFFFFFFFF&((data)<<0))
#define CORE0_POWER_SWITCH8_core0_isolation_threshold_src(data)                      ((0xFFFFFFFF&(data))>>0)
#define CORE0_POWER_SWITCH8_get_core0_isolation_threshold(data)                      ((0xFFFFFFFF&(data))>>0)


#define CORE0_POWER_SWITCH9                                                          0x98054120
#define CORE0_POWER_SWITCH9_reg_addr                                                 "0xD8054120"
#define CORE0_POWER_SWITCH9_reg                                                      0xD8054120
#define set_CORE0_POWER_SWITCH9_reg(data)   (*((volatile unsigned int*) CORE0_POWER_SWITCH9_reg)=data)
#define get_CORE0_POWER_SWITCH9_reg   (*((volatile unsigned int*) CORE0_POWER_SWITCH9_reg))
#define CORE0_POWER_SWITCH9_inst_adr                                                 "0x0048"
#define CORE0_POWER_SWITCH9_inst                                                     0x0048
#define CORE0_POWER_SWITCH9_core0_reset_threshold_shift                              (0)
#define CORE0_POWER_SWITCH9_core0_reset_threshold_mask                               (0xFFFFFFFF)
#define CORE0_POWER_SWITCH9_core0_reset_threshold(data)                              (0xFFFFFFFF&((data)<<0))
#define CORE0_POWER_SWITCH9_core0_reset_threshold_src(data)                          ((0xFFFFFFFF&(data))>>0)
#define CORE0_POWER_SWITCH9_get_core0_reset_threshold(data)                          ((0xFFFFFFFF&(data))>>0)


#define CORE1_POWER_SWITCH1                                                          0x98054124
#define CORE1_POWER_SWITCH1_reg_addr                                                 "0xD8054124"
#define CORE1_POWER_SWITCH1_reg                                                      0xD8054124
#define set_CORE1_POWER_SWITCH1_reg(data)   (*((volatile unsigned int*) CORE1_POWER_SWITCH1_reg)=data)
#define get_CORE1_POWER_SWITCH1_reg   (*((volatile unsigned int*) CORE1_POWER_SWITCH1_reg))
#define CORE1_POWER_SWITCH1_inst_adr                                                 "0x0049"
#define CORE1_POWER_SWITCH1_inst                                                     0x0049
#define CORE1_POWER_SWITCH1_core1_L2H_DELAY_CYCLE_shift                              (0)
#define CORE1_POWER_SWITCH1_core1_L2H_DELAY_CYCLE_mask                               (0xFFFFFFFF)
#define CORE1_POWER_SWITCH1_core1_L2H_DELAY_CYCLE(data)                              (0xFFFFFFFF&((data)<<0))
#define CORE1_POWER_SWITCH1_core1_L2H_DELAY_CYCLE_src(data)                          ((0xFFFFFFFF&(data))>>0)
#define CORE1_POWER_SWITCH1_get_core1_L2H_DELAY_CYCLE(data)                          ((0xFFFFFFFF&(data))>>0)


#define CORE1_POWER_SWITCH2                                                          0x98054128
#define CORE1_POWER_SWITCH2_reg_addr                                                 "0xD8054128"
#define CORE1_POWER_SWITCH2_reg                                                      0xD8054128
#define set_CORE1_POWER_SWITCH2_reg(data)   (*((volatile unsigned int*) CORE1_POWER_SWITCH2_reg)=data)
#define get_CORE1_POWER_SWITCH2_reg   (*((volatile unsigned int*) CORE1_POWER_SWITCH2_reg))
#define CORE1_POWER_SWITCH2_inst_adr                                                 "0x004A"
#define CORE1_POWER_SWITCH2_inst                                                     0x004A
#define CORE1_POWER_SWITCH2_core1_H2L_DELAY_CYCLE_shift                              (0)
#define CORE1_POWER_SWITCH2_core1_H2L_DELAY_CYCLE_mask                               (0xFFFFFFFF)
#define CORE1_POWER_SWITCH2_core1_H2L_DELAY_CYCLE(data)                              (0xFFFFFFFF&((data)<<0))
#define CORE1_POWER_SWITCH2_core1_H2L_DELAY_CYCLE_src(data)                          ((0xFFFFFFFF&(data))>>0)
#define CORE1_POWER_SWITCH2_get_core1_H2L_DELAY_CYCLE(data)                          ((0xFFFFFFFF&(data))>>0)


#define CORE1_POWER_SWITCH3                                                          0x9805412C
#define CORE1_POWER_SWITCH3_reg_addr                                                 "0xD805412C"
#define CORE1_POWER_SWITCH3_reg                                                      0xD805412C
#define set_CORE1_POWER_SWITCH3_reg(data)   (*((volatile unsigned int*) CORE1_POWER_SWITCH3_reg)=data)
#define get_CORE1_POWER_SWITCH3_reg   (*((volatile unsigned int*) CORE1_POWER_SWITCH3_reg))
#define CORE1_POWER_SWITCH3_inst_adr                                                 "0x004B"
#define CORE1_POWER_SWITCH3_inst                                                     0x004B
#define CORE1_POWER_SWITCH3_core1_SD_REG_shift                                       (0)
#define CORE1_POWER_SWITCH3_core1_SD_REG_mask                                        (0xFFFFFFFF)
#define CORE1_POWER_SWITCH3_core1_SD_REG(data)                                       (0xFFFFFFFF&((data)<<0))
#define CORE1_POWER_SWITCH3_core1_SD_REG_src(data)                                   ((0xFFFFFFFF&(data))>>0)
#define CORE1_POWER_SWITCH3_get_core1_SD_REG(data)                                   ((0xFFFFFFFF&(data))>>0)


#define CORE1_POWER_SWITCH4                                                          0x98054130
#define CORE1_POWER_SWITCH4_reg_addr                                                 "0xD8054130"
#define CORE1_POWER_SWITCH4_reg                                                      0xD8054130
#define set_CORE1_POWER_SWITCH4_reg(data)   (*((volatile unsigned int*) CORE1_POWER_SWITCH4_reg)=data)
#define get_CORE1_POWER_SWITCH4_reg   (*((volatile unsigned int*) CORE1_POWER_SWITCH4_reg))
#define CORE1_POWER_SWITCH4_inst_adr                                                 "0x004C"
#define CORE1_POWER_SWITCH4_inst                                                     0x004C
#define CORE1_POWER_SWITCH4_core1_MUX_REG_shift                                      (0)
#define CORE1_POWER_SWITCH4_core1_MUX_REG_mask                                       (0xFFFFFFFF)
#define CORE1_POWER_SWITCH4_core1_MUX_REG(data)                                      (0xFFFFFFFF&((data)<<0))
#define CORE1_POWER_SWITCH4_core1_MUX_REG_src(data)                                  ((0xFFFFFFFF&(data))>>0)
#define CORE1_POWER_SWITCH4_get_core1_MUX_REG(data)                                  ((0xFFFFFFFF&(data))>>0)


#define CORE1_POWER_SWITCH5                                                          0x98054134
#define CORE1_POWER_SWITCH5_reg_addr                                                 "0xD8054134"
#define CORE1_POWER_SWITCH5_reg                                                      0xD8054134
#define set_CORE1_POWER_SWITCH5_reg(data)   (*((volatile unsigned int*) CORE1_POWER_SWITCH5_reg)=data)
#define get_CORE1_POWER_SWITCH5_reg   (*((volatile unsigned int*) CORE1_POWER_SWITCH5_reg))
#define CORE1_POWER_SWITCH5_inst_adr                                                 "0x004D"
#define CORE1_POWER_SWITCH5_inst                                                     0x004D
#define CORE1_POWER_SWITCH5_core1_CTRL_shift                                         (0)
#define CORE1_POWER_SWITCH5_core1_CTRL_mask                                          (0xFFFFFFFF)
#define CORE1_POWER_SWITCH5_core1_CTRL(data)                                         (0xFFFFFFFF&((data)<<0))
#define CORE1_POWER_SWITCH5_core1_CTRL_src(data)                                     ((0xFFFFFFFF&(data))>>0)
#define CORE1_POWER_SWITCH5_get_core1_CTRL(data)                                     ((0xFFFFFFFF&(data))>>0)


#define CORE1_POWER_SWITCH6                                                          0x98054138
#define CORE1_POWER_SWITCH6_reg_addr                                                 "0xD8054138"
#define CORE1_POWER_SWITCH6_reg                                                      0xD8054138
#define set_CORE1_POWER_SWITCH6_reg(data)   (*((volatile unsigned int*) CORE1_POWER_SWITCH6_reg)=data)
#define get_CORE1_POWER_SWITCH6_reg   (*((volatile unsigned int*) CORE1_POWER_SWITCH6_reg))
#define CORE1_POWER_SWITCH6_inst_adr                                                 "0x004E"
#define CORE1_POWER_SWITCH6_inst                                                     0x004E
#define CORE1_POWER_SWITCH6_core1_last_delay_cycle_shift                             (0)
#define CORE1_POWER_SWITCH6_core1_last_delay_cycle_mask                              (0xFFFFFFFF)
#define CORE1_POWER_SWITCH6_core1_last_delay_cycle(data)                             (0xFFFFFFFF&((data)<<0))
#define CORE1_POWER_SWITCH6_core1_last_delay_cycle_src(data)                         ((0xFFFFFFFF&(data))>>0)
#define CORE1_POWER_SWITCH6_get_core1_last_delay_cycle(data)                         ((0xFFFFFFFF&(data))>>0)


#define CORE1_POWER_SWITCH7                                                          0x9805413C
#define CORE1_POWER_SWITCH7_reg_addr                                                 "0xD805413C"
#define CORE1_POWER_SWITCH7_reg                                                      0xD805413C
#define set_CORE1_POWER_SWITCH7_reg(data)   (*((volatile unsigned int*) CORE1_POWER_SWITCH7_reg)=data)
#define get_CORE1_POWER_SWITCH7_reg   (*((volatile unsigned int*) CORE1_POWER_SWITCH7_reg))
#define CORE1_POWER_SWITCH7_inst_adr                                                 "0x004F"
#define CORE1_POWER_SWITCH7_inst                                                     0x004F
#define CORE1_POWER_SWITCH7_core1_pg_switch_info_shift                               (0)
#define CORE1_POWER_SWITCH7_core1_pg_switch_info_mask                                (0xFFFFFFFF)
#define CORE1_POWER_SWITCH7_core1_pg_switch_info(data)                               (0xFFFFFFFF&((data)<<0))
#define CORE1_POWER_SWITCH7_core1_pg_switch_info_src(data)                           ((0xFFFFFFFF&(data))>>0)
#define CORE1_POWER_SWITCH7_get_core1_pg_switch_info(data)                           ((0xFFFFFFFF&(data))>>0)


#define CORE1_POWER_SWITCH8                                                          0x98054140
#define CORE1_POWER_SWITCH8_reg_addr                                                 "0xD8054140"
#define CORE1_POWER_SWITCH8_reg                                                      0xD8054140
#define set_CORE1_POWER_SWITCH8_reg(data)   (*((volatile unsigned int*) CORE1_POWER_SWITCH8_reg)=data)
#define get_CORE1_POWER_SWITCH8_reg   (*((volatile unsigned int*) CORE1_POWER_SWITCH8_reg))
#define CORE1_POWER_SWITCH8_inst_adr                                                 "0x0050"
#define CORE1_POWER_SWITCH8_inst                                                     0x0050
#define CORE1_POWER_SWITCH8_core1_isolation_threshold_shift                          (0)
#define CORE1_POWER_SWITCH8_core1_isolation_threshold_mask                           (0xFFFFFFFF)
#define CORE1_POWER_SWITCH8_core1_isolation_threshold(data)                          (0xFFFFFFFF&((data)<<0))
#define CORE1_POWER_SWITCH8_core1_isolation_threshold_src(data)                      ((0xFFFFFFFF&(data))>>0)
#define CORE1_POWER_SWITCH8_get_core1_isolation_threshold(data)                      ((0xFFFFFFFF&(data))>>0)


#define CORE1_POWER_SWITCH9                                                          0x98054144
#define CORE1_POWER_SWITCH9_reg_addr                                                 "0xD8054144"
#define CORE1_POWER_SWITCH9_reg                                                      0xD8054144
#define set_CORE1_POWER_SWITCH9_reg(data)   (*((volatile unsigned int*) CORE1_POWER_SWITCH9_reg)=data)
#define get_CORE1_POWER_SWITCH9_reg   (*((volatile unsigned int*) CORE1_POWER_SWITCH9_reg))
#define CORE1_POWER_SWITCH9_inst_adr                                                 "0x0051"
#define CORE1_POWER_SWITCH9_inst                                                     0x0051
#define CORE1_POWER_SWITCH9_core1_reset_threshold_shift                              (0)
#define CORE1_POWER_SWITCH9_core1_reset_threshold_mask                               (0xFFFFFFFF)
#define CORE1_POWER_SWITCH9_core1_reset_threshold(data)                              (0xFFFFFFFF&((data)<<0))
#define CORE1_POWER_SWITCH9_core1_reset_threshold_src(data)                          ((0xFFFFFFFF&(data))>>0)
#define CORE1_POWER_SWITCH9_get_core1_reset_threshold(data)                          ((0xFFFFFFFF&(data))>>0)


#define CORE2_POWER_SWITCH1                                                          0x98054148
#define CORE2_POWER_SWITCH1_reg_addr                                                 "0xD8054148"
#define CORE2_POWER_SWITCH1_reg                                                      0xD8054148
#define set_CORE2_POWER_SWITCH1_reg(data)   (*((volatile unsigned int*) CORE2_POWER_SWITCH1_reg)=data)
#define get_CORE2_POWER_SWITCH1_reg   (*((volatile unsigned int*) CORE2_POWER_SWITCH1_reg))
#define CORE2_POWER_SWITCH1_inst_adr                                                 "0x0052"
#define CORE2_POWER_SWITCH1_inst                                                     0x0052
#define CORE2_POWER_SWITCH1_core2_L2H_DELAY_CYCLE_shift                              (0)
#define CORE2_POWER_SWITCH1_core2_L2H_DELAY_CYCLE_mask                               (0xFFFFFFFF)
#define CORE2_POWER_SWITCH1_core2_L2H_DELAY_CYCLE(data)                              (0xFFFFFFFF&((data)<<0))
#define CORE2_POWER_SWITCH1_core2_L2H_DELAY_CYCLE_src(data)                          ((0xFFFFFFFF&(data))>>0)
#define CORE2_POWER_SWITCH1_get_core2_L2H_DELAY_CYCLE(data)                          ((0xFFFFFFFF&(data))>>0)


#define CORE2_POWER_SWITCH2                                                          0x9805414C
#define CORE2_POWER_SWITCH2_reg_addr                                                 "0xD805414C"
#define CORE2_POWER_SWITCH2_reg                                                      0xD805414C
#define set_CORE2_POWER_SWITCH2_reg(data)   (*((volatile unsigned int*) CORE2_POWER_SWITCH2_reg)=data)
#define get_CORE2_POWER_SWITCH2_reg   (*((volatile unsigned int*) CORE2_POWER_SWITCH2_reg))
#define CORE2_POWER_SWITCH2_inst_adr                                                 "0x0053"
#define CORE2_POWER_SWITCH2_inst                                                     0x0053
#define CORE2_POWER_SWITCH2_core2_H2L_DELAY_CYCLE_shift                              (0)
#define CORE2_POWER_SWITCH2_core2_H2L_DELAY_CYCLE_mask                               (0xFFFFFFFF)
#define CORE2_POWER_SWITCH2_core2_H2L_DELAY_CYCLE(data)                              (0xFFFFFFFF&((data)<<0))
#define CORE2_POWER_SWITCH2_core2_H2L_DELAY_CYCLE_src(data)                          ((0xFFFFFFFF&(data))>>0)
#define CORE2_POWER_SWITCH2_get_core2_H2L_DELAY_CYCLE(data)                          ((0xFFFFFFFF&(data))>>0)


#define CORE2_POWER_SWITCH3                                                          0x98054150
#define CORE2_POWER_SWITCH3_reg_addr                                                 "0xD8054150"
#define CORE2_POWER_SWITCH3_reg                                                      0xD8054150
#define set_CORE2_POWER_SWITCH3_reg(data)   (*((volatile unsigned int*) CORE2_POWER_SWITCH3_reg)=data)
#define get_CORE2_POWER_SWITCH3_reg   (*((volatile unsigned int*) CORE2_POWER_SWITCH3_reg))
#define CORE2_POWER_SWITCH3_inst_adr                                                 "0x0054"
#define CORE2_POWER_SWITCH3_inst                                                     0x0054
#define CORE2_POWER_SWITCH3_core2_SD_REG_shift                                       (0)
#define CORE2_POWER_SWITCH3_core2_SD_REG_mask                                        (0xFFFFFFFF)
#define CORE2_POWER_SWITCH3_core2_SD_REG(data)                                       (0xFFFFFFFF&((data)<<0))
#define CORE2_POWER_SWITCH3_core2_SD_REG_src(data)                                   ((0xFFFFFFFF&(data))>>0)
#define CORE2_POWER_SWITCH3_get_core2_SD_REG(data)                                   ((0xFFFFFFFF&(data))>>0)


#define CORE2_POWER_SWITCH4                                                          0x98054154
#define CORE2_POWER_SWITCH4_reg_addr                                                 "0xD8054154"
#define CORE2_POWER_SWITCH4_reg                                                      0xD8054154
#define set_CORE2_POWER_SWITCH4_reg(data)   (*((volatile unsigned int*) CORE2_POWER_SWITCH4_reg)=data)
#define get_CORE2_POWER_SWITCH4_reg   (*((volatile unsigned int*) CORE2_POWER_SWITCH4_reg))
#define CORE2_POWER_SWITCH4_inst_adr                                                 "0x0055"
#define CORE2_POWER_SWITCH4_inst                                                     0x0055
#define CORE2_POWER_SWITCH4_core2_MUX_REG_shift                                      (0)
#define CORE2_POWER_SWITCH4_core2_MUX_REG_mask                                       (0xFFFFFFFF)
#define CORE2_POWER_SWITCH4_core2_MUX_REG(data)                                      (0xFFFFFFFF&((data)<<0))
#define CORE2_POWER_SWITCH4_core2_MUX_REG_src(data)                                  ((0xFFFFFFFF&(data))>>0)
#define CORE2_POWER_SWITCH4_get_core2_MUX_REG(data)                                  ((0xFFFFFFFF&(data))>>0)


#define CORE2_POWER_SWITCH5                                                          0x98054158
#define CORE2_POWER_SWITCH5_reg_addr                                                 "0xD8054158"
#define CORE2_POWER_SWITCH5_reg                                                      0xD8054158
#define set_CORE2_POWER_SWITCH5_reg(data)   (*((volatile unsigned int*) CORE2_POWER_SWITCH5_reg)=data)
#define get_CORE2_POWER_SWITCH5_reg   (*((volatile unsigned int*) CORE2_POWER_SWITCH5_reg))
#define CORE2_POWER_SWITCH5_inst_adr                                                 "0x0056"
#define CORE2_POWER_SWITCH5_inst                                                     0x0056
#define CORE2_POWER_SWITCH5_core2_CTRL_shift                                         (0)
#define CORE2_POWER_SWITCH5_core2_CTRL_mask                                          (0xFFFFFFFF)
#define CORE2_POWER_SWITCH5_core2_CTRL(data)                                         (0xFFFFFFFF&((data)<<0))
#define CORE2_POWER_SWITCH5_core2_CTRL_src(data)                                     ((0xFFFFFFFF&(data))>>0)
#define CORE2_POWER_SWITCH5_get_core2_CTRL(data)                                     ((0xFFFFFFFF&(data))>>0)


#define CORE2_POWER_SWITCH6                                                          0x9805415C
#define CORE2_POWER_SWITCH6_reg_addr                                                 "0xD805415C"
#define CORE2_POWER_SWITCH6_reg                                                      0xD805415C
#define set_CORE2_POWER_SWITCH6_reg(data)   (*((volatile unsigned int*) CORE2_POWER_SWITCH6_reg)=data)
#define get_CORE2_POWER_SWITCH6_reg   (*((volatile unsigned int*) CORE2_POWER_SWITCH6_reg))
#define CORE2_POWER_SWITCH6_inst_adr                                                 "0x0057"
#define CORE2_POWER_SWITCH6_inst                                                     0x0057
#define CORE2_POWER_SWITCH6_core2_last_delay_cycle_shift                             (0)
#define CORE2_POWER_SWITCH6_core2_last_delay_cycle_mask                              (0xFFFFFFFF)
#define CORE2_POWER_SWITCH6_core2_last_delay_cycle(data)                             (0xFFFFFFFF&((data)<<0))
#define CORE2_POWER_SWITCH6_core2_last_delay_cycle_src(data)                         ((0xFFFFFFFF&(data))>>0)
#define CORE2_POWER_SWITCH6_get_core2_last_delay_cycle(data)                         ((0xFFFFFFFF&(data))>>0)


#define CORE2_POWER_SWITCH7                                                          0x98054160
#define CORE2_POWER_SWITCH7_reg_addr                                                 "0xD8054160"
#define CORE2_POWER_SWITCH7_reg                                                      0xD8054160
#define set_CORE2_POWER_SWITCH7_reg(data)   (*((volatile unsigned int*) CORE2_POWER_SWITCH7_reg)=data)
#define get_CORE2_POWER_SWITCH7_reg   (*((volatile unsigned int*) CORE2_POWER_SWITCH7_reg))
#define CORE2_POWER_SWITCH7_inst_adr                                                 "0x0058"
#define CORE2_POWER_SWITCH7_inst                                                     0x0058
#define CORE2_POWER_SWITCH7_core2_pg_switch_info_shift                               (0)
#define CORE2_POWER_SWITCH7_core2_pg_switch_info_mask                                (0xFFFFFFFF)
#define CORE2_POWER_SWITCH7_core2_pg_switch_info(data)                               (0xFFFFFFFF&((data)<<0))
#define CORE2_POWER_SWITCH7_core2_pg_switch_info_src(data)                           ((0xFFFFFFFF&(data))>>0)
#define CORE2_POWER_SWITCH7_get_core2_pg_switch_info(data)                           ((0xFFFFFFFF&(data))>>0)


#define CORE2_POWER_SWITCH8                                                          0x98054164
#define CORE2_POWER_SWITCH8_reg_addr                                                 "0xD8054164"
#define CORE2_POWER_SWITCH8_reg                                                      0xD8054164
#define set_CORE2_POWER_SWITCH8_reg(data)   (*((volatile unsigned int*) CORE2_POWER_SWITCH8_reg)=data)
#define get_CORE2_POWER_SWITCH8_reg   (*((volatile unsigned int*) CORE2_POWER_SWITCH8_reg))
#define CORE2_POWER_SWITCH8_inst_adr                                                 "0x0059"
#define CORE2_POWER_SWITCH8_inst                                                     0x0059
#define CORE2_POWER_SWITCH8_core2_isolation_threshold_shift                          (0)
#define CORE2_POWER_SWITCH8_core2_isolation_threshold_mask                           (0xFFFFFFFF)
#define CORE2_POWER_SWITCH8_core2_isolation_threshold(data)                          (0xFFFFFFFF&((data)<<0))
#define CORE2_POWER_SWITCH8_core2_isolation_threshold_src(data)                      ((0xFFFFFFFF&(data))>>0)
#define CORE2_POWER_SWITCH8_get_core2_isolation_threshold(data)                      ((0xFFFFFFFF&(data))>>0)


#define CORE2_POWER_SWITCH9                                                          0x98054168
#define CORE2_POWER_SWITCH9_reg_addr                                                 "0xD8054168"
#define CORE2_POWER_SWITCH9_reg                                                      0xD8054168
#define set_CORE2_POWER_SWITCH9_reg(data)   (*((volatile unsigned int*) CORE2_POWER_SWITCH9_reg)=data)
#define get_CORE2_POWER_SWITCH9_reg   (*((volatile unsigned int*) CORE2_POWER_SWITCH9_reg))
#define CORE2_POWER_SWITCH9_inst_adr                                                 "0x005A"
#define CORE2_POWER_SWITCH9_inst                                                     0x005A
#define CORE2_POWER_SWITCH9_core2_reset_threshold_shift                              (0)
#define CORE2_POWER_SWITCH9_core2_reset_threshold_mask                               (0xFFFFFFFF)
#define CORE2_POWER_SWITCH9_core2_reset_threshold(data)                              (0xFFFFFFFF&((data)<<0))
#define CORE2_POWER_SWITCH9_core2_reset_threshold_src(data)                          ((0xFFFFFFFF&(data))>>0)
#define CORE2_POWER_SWITCH9_get_core2_reset_threshold(data)                          ((0xFFFFFFFF&(data))>>0)


#endif
