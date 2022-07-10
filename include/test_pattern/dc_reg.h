/**************************************************************
// Spec Version                  : 0.0.6
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/6/28 12:53:48
***************************************************************/


#ifndef _DC_SYS_REG_H_INCLUDED_
#define _DC_SYS_REG_H_INCLUDED_
#ifdef  _DC_SYS_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     vo2_adj_pri_1:5;
unsigned int     vo2_adj_pri_0:5;
unsigned int     vo1_adj_pri_1:5;
unsigned int     vo1_adj_pri_0:5;
unsigned int     scpu_adj_pri_1:5;
unsigned int     scpu_adj_pri_0:5;
}PRIORITY_ADJ_0;

typedef struct 
{
unsigned int     dy_icg_en:1;
unsigned int     reserved_0:2;
unsigned int     dram_8g_used:1;
unsigned int     dram_4g_used:1;
unsigned int     ddr3_512_used:1;
unsigned int     dram_2g_used:1;
unsigned int     pre_arb_scheme_sel:1;
unsigned int     bank_remap_enable:1;
unsigned int     ddr3_mapping_en:1;
unsigned int     out_to_phy_sel:1;
unsigned int     self_loopback_mode:1;
unsigned int     mem_num:1;
unsigned int     reserved_1:1;
unsigned int     page_size:2;
unsigned int     reserved_2:2;
unsigned int     two_big_two_small_en:2;
unsigned int     zone4_granule_sel:1;
unsigned int     zone3_granule_sel:1;
unsigned int     zone2_granule_sel:1;
unsigned int     zone1_granule_sel:1;
unsigned int     sec_granule_size:3;
unsigned int     ocp_speedup_sim:1;
unsigned int     pri_granule_size:3;
unsigned int     two_dcsys_en:1;
}DC_SYS_MISC;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     mipi_pri:5;
unsigned int     vo2_pri:5;
unsigned int     vo1_pri:5;
unsigned int     sb4_high_pri:5;
unsigned int     sb1_high_pri:5;
unsigned int     sb0_pri:5;
}PRIORITY_CTRL_0;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     sb4_low_pri:5;
unsigned int     sb1_low_pri:5;
unsigned int     sb3_high_pri:5;
unsigned int     sata_pri:5;
unsigned int     avk_cpu_pri:5;
unsigned int     scpu_pri:5;
}PRIORITY_CTRL_1;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     se_pri:5;
unsigned int     gpu_pri:5;
unsigned int     sb3_low_pri:5;
unsigned int     ve3_pri:5;
unsigned int     ve2_pri:5;
unsigned int     ve1_pri:5;
}PRIORITY_CTRL_2;

typedef struct 
{
unsigned int     sb4_high_tag:2;
unsigned int     sb4_low_tag:2;
unsigned int     scpu_tag:2;
unsigned int     se_tag:2;
unsigned int     gpu_tag:2;
unsigned int     sb3_low_tag:2;
unsigned int     ve_tag:2;
unsigned int     sb3_high_tag:2;
unsigned int     sb1_low_tag:2;
unsigned int     sata_tag:2;
unsigned int     avk_cpu_tag:2;
unsigned int     mipi_tag:2;
unsigned int     vo2_tag:2;
unsigned int     vo1_tag:2;
unsigned int     sb1_high_tag:2;
unsigned int     sb0_tag:2;
}REORDER_CTRL_0;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     ve2_adj_pri_1:5;
unsigned int     ve2_adj_pri_0:5;
unsigned int     ve1_adj_pri_1:5;
unsigned int     ve1_adj_pri_0:5;
unsigned int     gpu_adj_pri_1:5;
unsigned int     gpu_adj_pri_0:5;
}PRIORITY_ADJ_1;

typedef struct 
{
unsigned int     reserved_0:12;
unsigned int     se_adj_pri_1:5;
unsigned int     se_adj_pri_0:5;
unsigned int     ve3_adj_pri_1:5;
unsigned int     ve3_adj_pri_0:5;
}PRIORITY_ADJ_2;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     sb4_queue_set:2;
unsigned int     ve3_queue_set:2;
unsigned int     ve2_queue_set:2;
unsigned int     vo2_queue_set:2;
unsigned int     scpu_queue_set:2;
unsigned int     sata_queue_set:2;
unsigned int     mipi_queue_set:2;
unsigned int     gpu_queue_set:2;
unsigned int     se_queue_set:2;
unsigned int     ve1_queue_set:2;
unsigned int     sb3_queue_set:2;
unsigned int     avk_cpu_queue_set:2;
unsigned int     sb1_queue_set:2;
unsigned int     sb0_queue_set:2;
unsigned int     vo1_queue_set:2;
}DC_QUEUE_SET;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     req_pending_1:1;
unsigned int     req_pending_0:1;
unsigned int     req_id:15;
}DC_REQ_STATUS;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     cti_st_sel:1;
unsigned int     qfifo_cnt_full_threshold:5;
unsigned int     full_cmd_count:9;
unsigned int     cti_mask_sel:1;
unsigned int     sb4_req_mask:1;
unsigned int     ve3_req_mask:1;
unsigned int     ve2_req_mask:1;
unsigned int     vo2_req_mask:1;
unsigned int     scpu_req_mask:1;
unsigned int     sata_req_mask:1;
unsigned int     mipi_req_mask:1;
unsigned int     gpu_req_mask:1;
unsigned int     se_req_mask:1;
unsigned int     ve1_req_mask:1;
unsigned int     sb3_req_mask:1;
unsigned int     sb2_req_mask:1;
unsigned int     sb1_req_mask:1;
unsigned int     sb0_req_mask:1;
unsigned int     vo1_req_mask:1;
}DC_SYS_MISC2;

typedef struct 
{
unsigned int     reserved_0:7;
unsigned int     enable_arb_delay_by_tv_sb1_grant:1;
unsigned int     ocp_rdata_queue_flush:1;
unsigned int     sb2_wdata_queue_flush:1;
unsigned int     sb2_cmd_queue_flush:1;
unsigned int     reserved_1:2;
unsigned int     sata_wdata_queue_flush:1;
unsigned int     sata_cmd_queue_flush:1;
unsigned int     reserved_2:2;
unsigned int     se_wdata_queue_flush:1;
unsigned int     se_cmd_queue_flush:1;
unsigned int     reserved_3:2;
unsigned int     scpu_wdata_queue_flush:1;
unsigned int     scpu_cmd_queue_flush:1;
unsigned int     reserved_4:2;
unsigned int     ve_wdata_queue_flush:1;
unsigned int     ve_cmd_queue_flush:1;
unsigned int     ve_cmd_grp_disable:1;
unsigned int     reserved_5:1;
unsigned int     gpu_wdata_queue_flush:1;
unsigned int     gpu_cmd_queue_flush:1;
unsigned int     gpu_cmd_grp_disable:1;
}DC_SYS_MISC3;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     pc_go:1;
}DC_PC_CTRL;

typedef struct 
{
unsigned int     pc_tota_mon_num:32;
}DC_PC_TOTA_MON_NUM_0;

typedef struct 
{
unsigned int     pc_tota_ack_num:32;
}DC_PC_TOTA_ACK_NUM_0;

typedef struct 
{
unsigned int     pc_tota_idl_num:32;
}DC_PC_TOTA_IDL_NUM_0;

typedef struct 
{
unsigned int     pc_tota_mon_num:32;
}DC_PC_TOTA_MON_NUM_1;

typedef struct 
{
unsigned int     pc_tota_ack_num:32;
}DC_PC_TOTA_ACK_NUM_1;

typedef struct 
{
unsigned int     pc_tota_idl_num:32;
}DC_PC_TOTA_IDL_NUM_1;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     pc_sysh_prog2_dc_sel:1;
unsigned int     pc_sysh_prog2_sel:7;
unsigned int     pc_sysh_prog1_dc_sel:1;
unsigned int     pc_sysh_prog1_sel:7;
unsigned int     pc_sysh_prog0_dc_sel:1;
unsigned int     pc_sysh_prog0_sel:7;
}DC_PC_SYSH_PROG_CTRL;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     pc_sysh_prog5_dc_sel:1;
unsigned int     pc_sysh_prog5_sel:7;
unsigned int     pc_sysh_prog4_dc_sel:1;
unsigned int     pc_sysh_prog4_sel:7;
unsigned int     pc_sysh_prog3_dc_sel:1;
unsigned int     pc_sysh_prog3_sel:7;
}DC_PC_SYSH_PROG_CTRL_2;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     pc_sysh_prog7_dc_sel:1;
unsigned int     pc_sysh_prog7_sel:7;
unsigned int     pc_sysh_prog6_dc_sel:1;
unsigned int     pc_sysh_prog6_sel:7;
}DC_PC_SYSH_PROG_CTRL_3;

typedef struct 
{
unsigned int     reserved_0:9;
unsigned int     pc_sys_prog2_sel:7;
unsigned int     reserved_1:1;
unsigned int     pc_sys_prog1_sel:7;
unsigned int     reserved_2:1;
unsigned int     pc_sys_prog0_sel:7;
}DC_PC_SYS_PROG_CTRL;

typedef struct 
{
unsigned int     sysh_prog0_acc_lat:32;
}DC_PC_SYSH_PROG_0_ACC_LAT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     sysh_prog0_max_lat:16;
}DC_PC_SYSH_PROG_0_MAX_LAT;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sysh_prog0_req_num:24;
}DC_PC_SYSH_PROG_0_REQ_NUM;

typedef struct 
{
unsigned int     sysh_prog0_ack_num:32;
}DC_PC_SYSH_PROG_0_ACK_NUM;

typedef struct 
{
unsigned int     sysh_prog1_acc_lat:32;
}DC_PC_SYSH_PROG_1_ACC_LAT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     sysh_prog1_max_lat:16;
}DC_PC_SYSH_PROG_1_MAX_LAT;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sysh_prog1_req_num:24;
}DC_PC_SYSH_PROG_1_REQ_NUM;

typedef struct 
{
unsigned int     sysh_prog1_ack_num:32;
}DC_PC_SYSH_PROG_1_ACK_NUM;

typedef struct 
{
unsigned int     sysh_prog2_acc_lat:32;
}DC_PC_SYSH_PROG_2_ACC_LAT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     sysh_prog2_max_lat:16;
}DC_PC_SYSH_PROG_2_MAX_LAT;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sysh_prog2_req_num:24;
}DC_PC_SYSH_PROG_2_REQ_NUM;

typedef struct 
{
unsigned int     sysh_prog2_ack_num:32;
}DC_PC_SYSH_PROG_2_ACK_NUM;

typedef struct 
{
unsigned int     sysh_prog3_acc_lat:32;
}DC_PC_SYSH_PROG_3_ACC_LAT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     sysh_prog3_max_lat:16;
}DC_PC_SYSH_PROG_3_MAX_LAT;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sysh_prog3_req_num:24;
}DC_PC_SYSH_PROG_3_REQ_NUM;

typedef struct 
{
unsigned int     sysh_prog3_ack_num:32;
}DC_PC_SYSH_PROG_3_ACK_NUM;

typedef struct 
{
unsigned int     sysh_prog4_acc_lat:32;
}DC_PC_SYSH_PROG_4_ACC_LAT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     sysh_prog4_max_lat:16;
}DC_PC_SYSH_PROG_4_MAX_LAT;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sysh_prog4_req_num:24;
}DC_PC_SYSH_PROG_4_REQ_NUM;

typedef struct 
{
unsigned int     sysh_prog4_ack_num:32;
}DC_PC_SYSH_PROG_4_ACK_NUM;

typedef struct 
{
unsigned int     sysh_prog5_acc_lat:32;
}DC_PC_SYSH_PROG_5_ACC_LAT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     sysh_prog5_max_lat:16;
}DC_PC_SYSH_PROG_5_MAX_LAT;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sysh_prog5_req_num:24;
}DC_PC_SYSH_PROG_5_REQ_NUM;

typedef struct 
{
unsigned int     sysh_prog5_ack_num:32;
}DC_PC_SYSH_PROG_5_ACK_NUM;

typedef struct 
{
unsigned int     sysh_prog6_acc_lat:32;
}DC_PC_SYSH_PROG_6_ACC_LAT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     sysh_prog6_max_lat:16;
}DC_PC_SYSH_PROG_6_MAX_LAT;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sysh_prog6_req_num:24;
}DC_PC_SYSH_PROG_6_REQ_NUM;

typedef struct 
{
unsigned int     sysh_prog6_ack_num:32;
}DC_PC_SYSH_PROG_6_ACK_NUM;

typedef struct 
{
unsigned int     sysh_prog7_acc_lat:32;
}DC_PC_SYSH_PROG_7_ACC_LAT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     sysh_prog7_max_lat:16;
}DC_PC_SYSH_PROG_7_MAX_LAT;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sysh_prog7_req_num:24;
}DC_PC_SYSH_PROG_7_REQ_NUM;

typedef struct 
{
unsigned int     sysh_prog7_ack_num:32;
}DC_PC_SYSH_PROG_7_ACK_NUM;

typedef struct 
{
unsigned int     sys_prog0_acc_lat:32;
}DC_PC_SYS_PROG_0_ACC_LAT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     sys_prog0_max_lat:16;
}DC_PC_SYS_PROG_0_MAX_LAT;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sys_prog0_req_num:24;
}DC_PC_SYS_PROG_0_REQ_NUM;

typedef struct 
{
unsigned int     sys_prog0_ack_num:32;
}DC_PC_SYS_PROG_0_ACK_NUM;

typedef struct 
{
unsigned int     sys_prog1_acc_lat:32;
}DC_PC_SYS_PROG_1_ACC_LAT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     sys_prog1_max_lat:16;
}DC_PC_SYS_PROG_1_MAX_LAT;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sys_prog1_req_num:24;
}DC_PC_SYS_PROG_1_REQ_NUM;

typedef struct 
{
unsigned int     sys_prog1_ack_num:32;
}DC_PC_SYS_PROG_1_ACK_NUM;

typedef struct 
{
unsigned int     sys_prog2_acc_lat:32;
}DC_PC_SYS_PROG_2_ACC_LAT;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     sys_prog2_max_lat:16;
}DC_PC_SYS_PROG_2_MAX_LAT;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     sys_prog2_req_num:24;
}DC_PC_SYS_PROG_2_REQ_NUM;

typedef struct 
{
unsigned int     sys_prog2_ack_num:32;
}DC_PC_SYS_PROG_2_ACK_NUM;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     sfmode_addr:28;
}SFMODE_CMD0;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     sfmode_addr_add:4;
unsigned int     sfmode_bl:4;
}SFMODE_CMD1;

typedef struct 
{
unsigned int     reserved_0:11;
unsigned int     sfmode_cmp_last:1;
unsigned int     reserved_1:1;
unsigned int     sfmode_cmp_tag:19;
}SFMODE_CMP0_TAG;

typedef struct 
{
unsigned int     reserved_0:11;
unsigned int     sfmode_cmp_last:1;
unsigned int     reserved_1:1;
unsigned int     sfmode_cmp_tag:19;
}SFMODE_CMP1_TAG;

typedef struct 
{
unsigned int     sfmode_pattern0:32;
}SFMODE_PATTERN0;

typedef struct 
{
unsigned int     sfmode_pattern1:32;
}SFMODE_PATTERN1;

typedef struct 
{
unsigned int     sfmode_pattern2:32;
}SFMODE_PATTERN2;

typedef struct 
{
unsigned int     sfmode_pattern3:32;
}SFMODE_PATTERN3;

typedef struct 
{
unsigned int     sfmode_cmp_rlt0:32;
}SFMODE_CMP0_RLT0;

typedef struct 
{
unsigned int     sfmode_cmp_rlt1:32;
}SFMODE_CMP0_RLT1;

typedef struct 
{
unsigned int     sfmode_cmp_rlt2:32;
}SFMODE_CMP0_RLT2;

typedef struct 
{
unsigned int     sfmode_cmp_rlt3:32;
}SFMODE_CMP0_RLT3;

typedef struct 
{
unsigned int     sfmode_cmp_rlt0:32;
}SFMODE_CMP1_RLT0;

typedef struct 
{
unsigned int     sfmode_cmp_rlt1:32;
}SFMODE_CMP1_RLT1;

typedef struct 
{
unsigned int     sfmode_cmp_rlt2:32;
}SFMODE_CMP1_RLT2;

typedef struct 
{
unsigned int     sfmode_cmp_rlt3:32;
}SFMODE_CMP1_RLT3;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     disable_2nd_channel:1;
unsigned int     full_transfer:1;
}DC_64_WRITE_BUF_CTRL;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     sync_cmd_cnt_threshold:3;
unsigned int     cmd_buf_threshold_sb0:2;
unsigned int     cmd_buf_threshold_sb1:2;
unsigned int     cmd_buf_threshold_sb3:2;
unsigned int     cmd_buf_threshold_sb4:2;
unsigned int     disable_2nd_channel:1;
unsigned int     ever_full:1;
unsigned int     ever_reach_threshold:1;
unsigned int     max_buf_level:7;
unsigned int     buf_allow_mask_cnt:7;
}DC_64_READ_BUF_CTRL;

typedef struct 
{
unsigned int     reserved_0:10;
unsigned int     pri_up_period_cnt:14;
unsigned int     se_pri_up_en:1;
unsigned int     ve3_pri_up_en:1;
unsigned int     ve2_pri_up_en:1;
unsigned int     ve1_pri_up_en:1;
unsigned int     gpu_pri_up_en:1;
unsigned int     scpu_pri_up_en:1;
unsigned int     vo2_pri_up_en:1;
unsigned int     vo1_pri_up_en:1;
}DC_PRI_ADJ_CTRL;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     vo2_up_data_cnt:12;
unsigned int     reserved_1:4;
unsigned int     vo1_up_data_cnt:12;
}DC_PRI_ADJ_CNT1;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     gpu_up_data_cnt:12;
unsigned int     reserved_1:4;
unsigned int     scpu_up_data_cnt:12;
}DC_PRI_ADJ_CNT2;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     ve2_up_data_cnt:12;
unsigned int     reserved_1:4;
unsigned int     ve1_up_data_cnt:12;
}DC_PRI_ADJ_CNT3;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     se_up_data_cnt:12;
unsigned int     reserved_1:4;
unsigned int     ve3_up_data_cnt:12;
}DC_PRI_ADJ_CNT4;

typedef struct 
{
unsigned int     cmd_par_err_en_1:1;
unsigned int     cmd_par_err_id_1:15;
unsigned int     cmd_par_err_en_0:1;
unsigned int     cmd_par_err_id_0:15;
}DC_CMD_PAR_ST;

typedef struct 
{
unsigned int     bw_up_period_cnt_en:1;
unsigned int     reserved_0:9;
unsigned int     bw_up_period_cnt:14;
unsigned int     reserved_1:1;
unsigned int     ve3_bw_up_en:1;
unsigned int     ve2_bw_up_en:1;
unsigned int     ve1_bw_up_en:1;
unsigned int     gpu_bw_up_en:1;
unsigned int     scpu_bw_up_en:1;
unsigned int     reserved_2:1;
unsigned int     vo1_bw_up_en:1;
}DC_BW_ADJ_CTRL;

typedef struct 
{
unsigned int     vo1_bw_que_threshold2_dc0:8;
unsigned int     vo1_bw_que_threshold1_dc0:8;
unsigned int     reserved_0:1;
unsigned int     vo1_bw_data_threshold_dc0:15;
}DC_BW_ADJ_CNT1_DC0;

typedef struct 
{
unsigned int     scpu_bw_que_threshold2_dc0:8;
unsigned int     scpu_bw_que_threshold1_dc0:8;
unsigned int     reserved_0:1;
unsigned int     scpu_bw_data_threshold_dc0:15;
}DC_BW_ADJ_CNT2_DC0;

typedef struct 
{
unsigned int     gpu_bw_que_threshold2_dc0:8;
unsigned int     gpu_bw_que_threshold1_dc0:8;
unsigned int     reserved_0:1;
unsigned int     gpu_bw_data_threshold_dc0:15;
}DC_BW_ADJ_CNT3_DC0;

typedef struct 
{
unsigned int     ve1_bw_que_threshold2_dc0:8;
unsigned int     ve1_bw_que_threshold1_dc0:8;
unsigned int     reserved_0:1;
unsigned int     ve1_bw_data_threshold_dc0:15;
}DC_BW_ADJ_CNT4_DC0;

typedef struct 
{
unsigned int     ve2_bw_que_threshold2_dc0:8;
unsigned int     ve2_bw_que_threshold1_dc0:8;
unsigned int     reserved_0:1;
unsigned int     ve2_bw_data_threshold_dc0:15;
}DC_BW_ADJ_CNT5_DC0;

typedef struct 
{
unsigned int     ve3_bw_que_threshold2_dc0:8;
unsigned int     ve3_bw_que_threshold1_dc0:8;
unsigned int     reserved_0:1;
unsigned int     ve3_bw_data_threshold_dc0:15;
}DC_BW_ADJ_CNT6_DC0;

typedef struct 
{
unsigned int     vo1_bw_que_threshold2_dc1:8;
unsigned int     vo1_bw_que_threshold1_dc1:8;
unsigned int     reserved_0:1;
unsigned int     vo1_bw_data_threshold_dc1:15;
}DC_BW_ADJ_CNT1_DC1;

typedef struct 
{
unsigned int     scpu_bw_que_threshold2_dc1:8;
unsigned int     scpu_bw_que_threshold1_dc1:8;
unsigned int     reserved_0:1;
unsigned int     scpu_bw_data_threshold_dc1:15;
}DC_BW_ADJ_CNT2_DC1;

typedef struct 
{
unsigned int     gpu_bw_que_threshold2_dc1:8;
unsigned int     gpu_bw_que_threshold1_dc1:8;
unsigned int     reserved_0:1;
unsigned int     gpu_bw_data_threshold_dc1:15;
}DC_BW_ADJ_CNT3_DC1;

typedef struct 
{
unsigned int     ve1_bw_que_threshold2_dc1:8;
unsigned int     ve1_bw_que_threshold1_dc1:8;
unsigned int     reserved_0:1;
unsigned int     ve1_bw_data_threshold_dc1:15;
}DC_BW_ADJ_CNT4_DC1;

typedef struct 
{
unsigned int     ve2_bw_que_threshold2_dc1:8;
unsigned int     ve2_bw_que_threshold1_dc1:8;
unsigned int     reserved_0:1;
unsigned int     ve2_bw_data_threshold_dc1:15;
}DC_BW_ADJ_CNT5_DC1;

typedef struct 
{
unsigned int     ve3_bw_que_threshold2_dc1:8;
unsigned int     ve3_bw_que_threshold1_dc1:8;
unsigned int     reserved_0:1;
unsigned int     ve3_bw_data_threshold_dc1:15;
}DC_BW_ADJ_CNT6_DC1;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     rd4_level_dc0:4;
unsigned int     rd3_level_dc0:4;
unsigned int     rd2_level_dc0:4;
unsigned int     rd1_level_dc0:4;
}DC_BW_RQ_DC0;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     rd4_level_dc1:4;
unsigned int     rd3_level_dc1:4;
unsigned int     rd2_level_dc1:4;
unsigned int     rd1_level_dc1:4;
}DC_BW_RQ_DC1;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     vo1_bw_data_cnt_dc1:15;
unsigned int     reserved_1:1;
unsigned int     vo1_bw_data_cnt_dc0:15;
}DC_BW_DATA_CNT1;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     scpu_bw_data_cnt_dc1:15;
unsigned int     reserved_1:1;
unsigned int     scpu_bw_data_cnt_dc0:15;
}DC_BW_DATA_CNT2;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     gpu_bw_data_cnt_dc1:15;
unsigned int     reserved_1:1;
unsigned int     gpu_bw_data_cnt_dc0:15;
}DC_BW_DATA_CNT3;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     ve1_bw_data_cnt_dc1:15;
unsigned int     reserved_1:1;
unsigned int     ve1_bw_data_cnt_dc0:15;
}DC_BW_DATA_CNT4;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     ve2_bw_data_cnt_dc1:15;
unsigned int     reserved_1:1;
unsigned int     ve2_bw_data_cnt_dc0:15;
}DC_BW_DATA_CNT5;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     ve3_bw_data_cnt_dc1:15;
unsigned int     reserved_1:1;
unsigned int     ve3_bw_data_cnt_dc0:15;
}DC_BW_DATA_CNT6;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     bist_en_0:1;
unsigned int     drf_bist_en_0:1;
unsigned int     drf_test_resume_0:1;
unsigned int     reserved_1:1;
unsigned int     RMEA:1;
unsigned int     RMA_3:1;
unsigned int     RMA_2:1;
unsigned int     RMA_1:1;
unsigned int     RMA_0:1;
unsigned int     reserved_2:3;
unsigned int     RMEB:1;
unsigned int     RMB_3:1;
unsigned int     RMB_2:1;
unsigned int     RMB_1:1;
unsigned int     RMB_0:1;
}DC_PHY_BIST_RM;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     mbist_st:1;
unsigned int     bist_fail:1;
unsigned int     bist_done:1;
}DC_PHY_BIST0_ST;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     drf_start_pause:1;
unsigned int     reserved_1:14;
unsigned int     drf_fail:1;
unsigned int     drf_done:1;
}DC_PHY_DRF0_ST;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     mbist_st:1;
unsigned int     bist_fail:1;
unsigned int     bist_done:1;
}DC_PHY_BIST1_ST;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     drf_start_pause:1;
unsigned int     reserved_1:14;
unsigned int     drf_fail:1;
unsigned int     drf_done:1;
}DC_PHY_DRF1_ST;

typedef struct 
{
unsigned int     bist_en_0:1;
unsigned int     drf_bist_en_0:1;
unsigned int     drf_test_resume_0:1;
unsigned int     bist_en_1:1;
unsigned int     drf_bist_en_1:1;
unsigned int     drf_test_resume_1:1;
unsigned int     reserved_0:3;
unsigned int     DVSLS_A_1:1;
unsigned int     DVSLS_A_0:1;
unsigned int     DVSE_A:1;
unsigned int     DVS_A_3:1;
unsigned int     DVS_A_2:1;
unsigned int     DVS_A_1:1;
unsigned int     DVS_A_0:1;
unsigned int     reserved_1:9;
unsigned int     DVSLS_B_1:1;
unsigned int     DVSLS_B_0:1;
unsigned int     DVSE_B:1;
unsigned int     DVS_B_3:1;
unsigned int     DVS_B_2:1;
unsigned int     DVS_B_1:1;
unsigned int     DVS_B_0:1;
}DC_BIST_RM;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     mbist_st:1;
unsigned int     bist_fail10:1;
unsigned int     bist_fail9:1;
unsigned int     bist_fail8:1;
unsigned int     bist_fail7:1;
unsigned int     bist_fail6:1;
unsigned int     bist_fail5:1;
unsigned int     bist_fail4:1;
unsigned int     bist_fail3:1;
unsigned int     bist_fail2:1;
unsigned int     bist_fail1:1;
unsigned int     bist_fail0:1;
unsigned int     bist_done:1;
}DC_BIST0_ST;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     drf_start_pause:1;
unsigned int     drf_fail10:1;
unsigned int     drf_fail9:1;
unsigned int     drf_fail8:1;
unsigned int     drf_fail7:1;
unsigned int     drf_fail6:1;
unsigned int     drf_fail5:1;
unsigned int     drf_fail4:1;
unsigned int     drf_fail3:1;
unsigned int     drf_fail2:1;
unsigned int     drf_fail1:1;
unsigned int     drf_fail0:1;
unsigned int     drf_done:1;
}DC_DRF0_ST;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     mbist_st:1;
unsigned int     reserved_1:1;
unsigned int     bist_fail9:1;
unsigned int     bist_fail8:1;
unsigned int     bist_fail7:1;
unsigned int     bist_fail6:1;
unsigned int     bist_fail5:1;
unsigned int     bist_fail4:1;
unsigned int     bist_fail3:1;
unsigned int     bist_fail2:1;
unsigned int     bist_fail1:1;
unsigned int     bist_fail0:1;
unsigned int     bist_done:1;
}DC_BIST1_ST;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     drf_start_pause:1;
unsigned int     reserved_1:1;
unsigned int     drf_fail9:1;
unsigned int     drf_fail8:1;
unsigned int     drf_fail7:1;
unsigned int     drf_fail6:1;
unsigned int     drf_fail5:1;
unsigned int     drf_fail4:1;
unsigned int     drf_fail3:1;
unsigned int     drf_fail2:1;
unsigned int     drf_fail1:1;
unsigned int     drf_fail0:1;
unsigned int     drf_done:1;
}DC_DRF1_ST;

typedef struct 
{
unsigned int     dummy_reg0:32;
}DC_DUMMY_REG0;

typedef struct 
{
unsigned int     dummy_reg1:32;
}DC_DUMMY_REG1;

typedef struct 
{
unsigned int     dummy_reg2:32;
}DC_DUMMY_REG2;

typedef struct 
{
unsigned int     dummy_reg3:32;
}DC_DUMMY_REG3;

typedef struct 
{
unsigned int     mem_type:2;
unsigned int     saddr:28;
unsigned int     reserved_0:2;
}DC_MT_SADDR;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     eaddr:28;
unsigned int     reserved_1:2;
}DC_MT_EADDR;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     write_enable0:1;
unsigned int     access_type_0:2;
unsigned int     access_type_1:2;
unsigned int     access_type_2:2;
unsigned int     access_type_3:2;
unsigned int     write_enable1:1;
unsigned int     int1:1;
unsigned int     write_enable2:1;
unsigned int     int2:1;
unsigned int     write_enable3:1;
unsigned int     int3:1;
unsigned int     write_enable4:1;
unsigned int     cpu:2;
unsigned int     int1_en:1;
unsigned int     int2_en:1;
unsigned int     int3_en:1;
unsigned int     write_enable5:1;
unsigned int     mode:2;
}DC_MT_MODE;

typedef struct 
{
unsigned int     ever_trap_1:1;
unsigned int     ever_trap_0:1;
unsigned int     reserved_0:2;
unsigned int     module_ID_0:7;
unsigned int     module_ID_1:7;
unsigned int     module_ID_2:7;
unsigned int     module_ID_3:7;
}DC_MT_TABLE;

typedef struct 
{
unsigned int     module_ID_1:7;
unsigned int     module_ID_0:7;
unsigned int     addcmd_1:9;
unsigned int     addcmd_0:9;
}DC_MT_ADDCMD_HI;

typedef struct 
{
unsigned int     addcmd_0:32;
}DC_MT_ADDCMD_LO_0;

typedef struct 
{
unsigned int     addcmd_1:32;
}DC_MT_ADDCMD_LO_1;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     enable_block_info:1;
unsigned int     disable_cross_range_check:1;
}DC_MT_MISC;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     large_acc_in_dcsys1:1;
unsigned int     large_acc_in_dcsys0:1;
unsigned int     error_cmd_int_cpu:2;
unsigned int     error_cmd_int_en:1;
unsigned int     error_cmd_swap_en:1;
unsigned int     error_cmd_detection_en:1;
unsigned int     error_cmd_ever_trap_1:1;
unsigned int     error_cmd_ever_trap_0:1;
unsigned int     error_cmd_int_1:1;
unsigned int     error_cmd_int_0:1;
unsigned int     over_dram_acc_in_dcsys1:1;
unsigned int     over_dram_acc_in_dcsys0:1;
unsigned int     addcmd_hi_1:18;
}DC_EC_CTRL;

typedef struct 
{
unsigned int     wrap_type_check_err_1:1;
unsigned int     wrap_type_check_err_0:1;
unsigned int     read_last_err_1:1;
unsigned int     read_last_err_0:1;
unsigned int     trap_case_1:4;
unsigned int     trap_case_0:4;
unsigned int     reserved_0:2;
unsigned int     addcmd_hi_0:18;
}DC_EC_ADDCMD_HI;

typedef struct 
{
unsigned int     addcmd_lo_0:32;
}DC_EC_ADDCMD_LO_0;

typedef struct 
{
unsigned int     addcmd_lo_1:32;
}DC_EC_ADDCMD_LO_1;

typedef struct 
{
unsigned int     write_enable0:1;
unsigned int     rd_only_0_sel:1;
unsigned int     blk_protect_0_sel:1;
unsigned int     protect_0_sel:1;
unsigned int     write_enable1:1;
unsigned int     rd_only_3_en:1;
unsigned int     rd_only_2_en:1;
unsigned int     rd_only_1_en:1;
unsigned int     rd_only_0_en:1;
unsigned int     write_enable2:1;
unsigned int     blk_protect_1_wpro_en:1;
unsigned int     blk_protect_0_wpro_en:1;
unsigned int     blk_protect_1_en:1;
unsigned int     blk_protect_0_en:1;
unsigned int     write_enable3:1;
unsigned int     protect_7_wpro_en:1;
unsigned int     protect_6_wpro_en:1;
unsigned int     protect_5_wpro_en:1;
unsigned int     protect_4_wpro_en:1;
unsigned int     protect_3_wpro_en:1;
unsigned int     protect_2_wpro_en:1;
unsigned int     protect_1_wpro_en:1;
unsigned int     protect_0_wpro_en:1;
unsigned int     write_enable4:1;
unsigned int     protect_7_en:1;
unsigned int     protect_6_en:1;
unsigned int     protect_5_en:1;
unsigned int     protect_4_en:1;
unsigned int     protect_3_en:1;
unsigned int     protect_2_en:1;
unsigned int     protect_1_en:1;
unsigned int     protect_0_en:1;
}DC_MEM_PROTECT_CTRL;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     tp_scramble_en:1;
unsigned int     video_dec_scramble_en:1;
unsigned int     audio_scramble_en:1;
unsigned int     scpu_scramble_en:1;
unsigned int     scramble_all_en:1;
unsigned int     scramble_7_en:1;
unsigned int     scramble_6_en:1;
unsigned int     scramble_5_en:1;
unsigned int     scramble_4_en:1;
unsigned int     scramble_3_en:1;
unsigned int     scramble_2_en:1;
unsigned int     scramble_1_en:1;
unsigned int     scramble_0_en:1;
}DC_MEM_SCRAMBLE_CTRL;

typedef struct 
{
unsigned int     saddr0:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_SADDR0;

typedef struct 
{
unsigned int     eaddr0:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_EADDR0;

typedef struct 
{
unsigned int     saddr1:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_SADDR1;

typedef struct 
{
unsigned int     eaddr1:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_EADDR1;

typedef struct 
{
unsigned int     saddr2:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_SADDR2;

typedef struct 
{
unsigned int     eaddr2:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_EADDR2;

typedef struct 
{
unsigned int     saddr3:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_SADDR3;

typedef struct 
{
unsigned int     eaddr3:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_EADDR3;

typedef struct 
{
unsigned int     saddr4:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_SADDR4;

typedef struct 
{
unsigned int     eaddr4:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_EADDR4;

typedef struct 
{
unsigned int     saddr5:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_SADDR5;

typedef struct 
{
unsigned int     eaddr5:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_EADDR5;

typedef struct 
{
unsigned int     saddr6:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_SADDR6;

typedef struct 
{
unsigned int     eaddr6:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_EADDR6;

typedef struct 
{
unsigned int     saddr7:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_SADDR7;

typedef struct 
{
unsigned int     eaddr7:22;
unsigned int     reserved_0:10;
}DC_MEM_PROTECT_EADDR7;

typedef struct 
{
unsigned int     saddr0:22;
unsigned int     reserved_0:10;
}DC_BLK_PROTECT_SADDR0;

typedef struct 
{
unsigned int     eaddr0:22;
unsigned int     reserved_0:10;
}DC_BLK_PROTECT_EADDR0;

typedef struct 
{
unsigned int     saddr1:22;
unsigned int     reserved_0:10;
}DC_BLK_PROTECT_SADDR1;

typedef struct 
{
unsigned int     eaddr1:22;
unsigned int     reserved_0:10;
}DC_BLK_PROTECT_EADDR1;

typedef struct 
{
unsigned int     saddr0:22;
unsigned int     reserved_0:10;
}DC_RO_PROTECT_SADDR0;

typedef struct 
{
unsigned int     eaddr0:22;
unsigned int     reserved_0:10;
}DC_RO_PROTECT_EADDR0;

typedef struct 
{
unsigned int     saddr1:22;
unsigned int     reserved_0:10;
}DC_RO_PROTECT_SADDR1;

typedef struct 
{
unsigned int     eaddr1:22;
unsigned int     reserved_0:10;
}DC_RO_PROTECT_EADDR1;

typedef struct 
{
unsigned int     saddr2:22;
unsigned int     reserved_0:10;
}DC_RO_PROTECT_SADDR2;

typedef struct 
{
unsigned int     eaddr2:22;
unsigned int     reserved_0:10;
}DC_RO_PROTECT_EADDR2;

typedef struct 
{
unsigned int     saddr3:22;
unsigned int     reserved_0:10;
}DC_RO_PROTECT_SADDR3;

typedef struct 
{
unsigned int     eaddr3:22;
unsigned int     reserved_0:10;
}DC_RO_PROTECT_EADDR3;

typedef struct 
{
unsigned int     saddr0:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_SADDR0;

typedef struct 
{
unsigned int     eaddr0:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_EADDR0;

typedef struct 
{
unsigned int     saddr1:20;
unsigned int     reserved_0:12;
}DC_MEM_SCRAMBLE_SADDR1;

typedef struct 
{
unsigned int     eaddr1:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_EADDR1;

typedef struct 
{
unsigned int     saddr2:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_SADDR2;

typedef struct 
{
unsigned int     eaddr2:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_EADDR2;

typedef struct 
{
unsigned int     saddr3:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_SADDR3;

typedef struct 
{
unsigned int     eaddr3:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_EADDR3;

typedef struct 
{
unsigned int     saddr4:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_SADDR4;

typedef struct 
{
unsigned int     eaddr4:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_EADDR4;

typedef struct 
{
unsigned int     saddr5:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_SADDR5;

typedef struct 
{
unsigned int     eaddr5:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_EADDR5;

typedef struct 
{
unsigned int     saddr6:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_SADDR6;

typedef struct 
{
unsigned int     eaddr6:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_EADDR6;

typedef struct 
{
unsigned int     saddr7:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_SADDR7;

typedef struct 
{
unsigned int     eaddr7:22;
unsigned int     reserved_0:10;
}DC_MEM_SCRAMBLE_EADDR7;

typedef struct 
{
unsigned int     md_tee_protect_en:8;
unsigned int     cp_tee_protect_en:8;
unsigned int     vo_protect_en:8;
unsigned int     nf_tee_protect_en:8;
}DC_MEM_PROTECT_ID_CTRL_0;

typedef struct 
{
unsigned int     scpu_tee_protect_en:8;
unsigned int     acpu_protect_en:8;
unsigned int     video_protect_en:8;
unsigned int     audio_protect_en:8;
}DC_MEM_PROTECT_ID_CTRL_1;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     scpu_tee_blk_protect_en:2;
unsigned int     acpu_blk_protect_en:2;
unsigned int     video_blk_protect_en:2;
unsigned int     audio_blk_protect_en:2;
unsigned int     md_tee_blk_protect_en:2;
unsigned int     cp_tee_blk_protect_en:2;
unsigned int     vo_blk_protect_en:2;
unsigned int     nf_tee_blk_protect_en:2;
}DC_MEM_PROTECT_ID_CTRL_2;

typedef struct 
{
unsigned int     scpu_tee_ro_protect_en:4;
unsigned int     acpu_ro_protect_en:4;
unsigned int     video_ro_protect_en:4;
unsigned int     audio_ro_protect_en:4;
unsigned int     md_tee_ro_protect_en:4;
unsigned int     cp_tee_ro_protect_en:4;
unsigned int     vo_ro_protect_en:4;
unsigned int     nf_tee_ro_protect_en:4;
}DC_MEM_PROTECT_ID_CTRL_3;

typedef struct 
{
unsigned int     blk_pict_set_chk_en_0:32;
}DC_MEM_PROTECT_PICT_CTRL_0;

typedef struct 
{
unsigned int     blk_pict_set_chk_en_1:32;
}DC_MEM_PROTECT_PICT_CTRL_1;

typedef struct 
{
unsigned int     reserved_0:4;
unsigned int     tp_tee_ro_protect_en:4;
unsigned int     tp_tee_blk_protect_en:2;
unsigned int     tp_tee_protect_en:8;
unsigned int     cr_tee_ro_protect_en:4;
unsigned int     cr_tee_blk_protect_en:2;
unsigned int     cr_tee_protect_en:8;
}DC_MEM_PROTECT_ID_CTRL_4;

typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     dram_256MB_used_num:6;
}DC_SECURE_MISC;

typedef struct 
{
unsigned int     reserved_0:1;
unsigned int     int_kcpu_key_up_en:1;
unsigned int     int_kcpu_key_up:1;
unsigned int     key_up_status:3;
unsigned int     scramble_int_en:1;
unsigned int     scramble_int:1;
unsigned int     scramble_id:7;
unsigned int     protect_int_en:1;
unsigned int     protect_int_1:1;
unsigned int     protect_int_0:1;
unsigned int     protect_id_1:7;
unsigned int     protect_id_0:7;
}DC_MEM_INT;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     scramble_align_int_en:1;
unsigned int     scramble_align_int:1;
}DC_MEM_OTHER_INT;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     cq_overflow_k_en:1;
unsigned int     cq_overflow_s_en:1;
unsigned int     wq_overflow_k_en:1;
unsigned int     wq_overflow_s_en:1;
unsigned int     blk_overflow_k_en:1;
unsigned int     blk_overflow_s_en:1;
unsigned int     blk_protect_k_en:1;
unsigned int     blk_protect_s_en:1;
unsigned int     error_k_en:1;
unsigned int     error_s_en:1;
unsigned int     mem_trash_k_en:1;
unsigned int     mem_trash_s_en:1;
}DC_INT_SEL;

typedef struct 
{
unsigned int     sb2_cmd_overflow_1:1;
unsigned int     sb2_cmd_overflow_0:1;
unsigned int     scpu_cmd_overflow_1:1;
unsigned int     scpu_cmd_overflow_0:1;
unsigned int     sata_cmd_overflow_1:1;
unsigned int     sata_cmd_overflow_0:1;
unsigned int     se_cmd_overflow_1:1;
unsigned int     se_cmd_overflow_0:1;
unsigned int     ve3_cmd_overflow_1:1;
unsigned int     ve3_cmd_overflow_0:1;
unsigned int     ve2_cmd_overflow_1:1;
unsigned int     ve2_cmd_overflow_0:1;
unsigned int     ve1_cmd_overflow_1:1;
unsigned int     ve1_cmd_overflow_0:1;
unsigned int     gpu_cmd_overflow_1:1;
unsigned int     gpu_cmd_overflow_0:1;
unsigned int     sb2_data_overflow_1:1;
unsigned int     sb2_data_overflow_0:1;
unsigned int     scpu_data_overflow_1:1;
unsigned int     scpu_data_overflow_0:1;
unsigned int     sata_data_overflow_1:1;
unsigned int     sata_data_overflow_0:1;
unsigned int     se_data_overflow_1:1;
unsigned int     se_data_overflow_0:1;
unsigned int     ve3_data_overflow_1:1;
unsigned int     ve3_data_overflow_0:1;
unsigned int     ve2_data_overflow_1:1;
unsigned int     ve2_data_overflow_0:1;
unsigned int     ve1_data_overflow_1:1;
unsigned int     ve1_data_overflow_0:1;
unsigned int     gpu_data_overflow_1:1;
unsigned int     gpu_data_overflow_0:1;
}DC_CTI_QUEUE_INFO;

#endif

#define PRIORITY_ADJ_0                                                               0x98008000
#define PRIORITY_ADJ_0_reg_addr                                                      "0xD8008000"
#define PRIORITY_ADJ_0_reg                                                           0xD8008000
#define set_PRIORITY_ADJ_0_reg(data)   (*((volatile unsigned int*) PRIORITY_ADJ_0_reg)=data)
#define get_PRIORITY_ADJ_0_reg   (*((volatile unsigned int*) PRIORITY_ADJ_0_reg))
#define PRIORITY_ADJ_0_inst_adr                                                      "0x0000"
#define PRIORITY_ADJ_0_inst                                                          0x0000
#define PRIORITY_ADJ_0_vo2_adj_pri_1_shift                                           (25)
#define PRIORITY_ADJ_0_vo2_adj_pri_1_mask                                            (0x3E000000)
#define PRIORITY_ADJ_0_vo2_adj_pri_1(data)                                           (0x3E000000&((data)<<25))
#define PRIORITY_ADJ_0_vo2_adj_pri_1_src(data)                                       ((0x3E000000&(data))>>25)
#define PRIORITY_ADJ_0_get_vo2_adj_pri_1(data)                                       ((0x3E000000&(data))>>25)
#define PRIORITY_ADJ_0_vo2_adj_pri_0_shift                                           (20)
#define PRIORITY_ADJ_0_vo2_adj_pri_0_mask                                            (0x01F00000)
#define PRIORITY_ADJ_0_vo2_adj_pri_0(data)                                           (0x01F00000&((data)<<20))
#define PRIORITY_ADJ_0_vo2_adj_pri_0_src(data)                                       ((0x01F00000&(data))>>20)
#define PRIORITY_ADJ_0_get_vo2_adj_pri_0(data)                                       ((0x01F00000&(data))>>20)
#define PRIORITY_ADJ_0_vo1_adj_pri_1_shift                                           (15)
#define PRIORITY_ADJ_0_vo1_adj_pri_1_mask                                            (0x000F8000)
#define PRIORITY_ADJ_0_vo1_adj_pri_1(data)                                           (0x000F8000&((data)<<15))
#define PRIORITY_ADJ_0_vo1_adj_pri_1_src(data)                                       ((0x000F8000&(data))>>15)
#define PRIORITY_ADJ_0_get_vo1_adj_pri_1(data)                                       ((0x000F8000&(data))>>15)
#define PRIORITY_ADJ_0_vo1_adj_pri_0_shift                                           (10)
#define PRIORITY_ADJ_0_vo1_adj_pri_0_mask                                            (0x00007C00)
#define PRIORITY_ADJ_0_vo1_adj_pri_0(data)                                           (0x00007C00&((data)<<10))
#define PRIORITY_ADJ_0_vo1_adj_pri_0_src(data)                                       ((0x00007C00&(data))>>10)
#define PRIORITY_ADJ_0_get_vo1_adj_pri_0(data)                                       ((0x00007C00&(data))>>10)
#define PRIORITY_ADJ_0_scpu_adj_pri_1_shift                                          (5)
#define PRIORITY_ADJ_0_scpu_adj_pri_1_mask                                           (0x000003E0)
#define PRIORITY_ADJ_0_scpu_adj_pri_1(data)                                          (0x000003E0&((data)<<5))
#define PRIORITY_ADJ_0_scpu_adj_pri_1_src(data)                                      ((0x000003E0&(data))>>5)
#define PRIORITY_ADJ_0_get_scpu_adj_pri_1(data)                                      ((0x000003E0&(data))>>5)
#define PRIORITY_ADJ_0_scpu_adj_pri_0_shift                                          (0)
#define PRIORITY_ADJ_0_scpu_adj_pri_0_mask                                           (0x0000001F)
#define PRIORITY_ADJ_0_scpu_adj_pri_0(data)                                          (0x0000001F&((data)<<0))
#define PRIORITY_ADJ_0_scpu_adj_pri_0_src(data)                                      ((0x0000001F&(data))>>0)
#define PRIORITY_ADJ_0_get_scpu_adj_pri_0(data)                                      ((0x0000001F&(data))>>0)


#define DC_SYS_MISC                                                                  0x98008004
#define DC_SYS_MISC_reg_addr                                                         "0xD8008004"
#define DC_SYS_MISC_reg                                                              0xD8008004
#define set_DC_SYS_MISC_reg(data)   (*((volatile unsigned int*) DC_SYS_MISC_reg)=data)
#define get_DC_SYS_MISC_reg   (*((volatile unsigned int*) DC_SYS_MISC_reg))
#define DC_SYS_MISC_inst_adr                                                         "0x0001"
#define DC_SYS_MISC_inst                                                             0x0001
#define DC_SYS_MISC_dy_icg_en_shift                                                  (31)
#define DC_SYS_MISC_dy_icg_en_mask                                                   (0x80000000)
#define DC_SYS_MISC_dy_icg_en(data)                                                  (0x80000000&((data)<<31))
#define DC_SYS_MISC_dy_icg_en_src(data)                                              ((0x80000000&(data))>>31)
#define DC_SYS_MISC_get_dy_icg_en(data)                                              ((0x80000000&(data))>>31)
#define DC_SYS_MISC_dram_8g_used_shift                                               (28)
#define DC_SYS_MISC_dram_8g_used_mask                                                (0x10000000)
#define DC_SYS_MISC_dram_8g_used(data)                                               (0x10000000&((data)<<28))
#define DC_SYS_MISC_dram_8g_used_src(data)                                           ((0x10000000&(data))>>28)
#define DC_SYS_MISC_get_dram_8g_used(data)                                           ((0x10000000&(data))>>28)
#define DC_SYS_MISC_dram_4g_used_shift                                               (27)
#define DC_SYS_MISC_dram_4g_used_mask                                                (0x08000000)
#define DC_SYS_MISC_dram_4g_used(data)                                               (0x08000000&((data)<<27))
#define DC_SYS_MISC_dram_4g_used_src(data)                                           ((0x08000000&(data))>>27)
#define DC_SYS_MISC_get_dram_4g_used(data)                                           ((0x08000000&(data))>>27)
#define DC_SYS_MISC_ddr3_512_used_shift                                              (26)
#define DC_SYS_MISC_ddr3_512_used_mask                                               (0x04000000)
#define DC_SYS_MISC_ddr3_512_used(data)                                              (0x04000000&((data)<<26))
#define DC_SYS_MISC_ddr3_512_used_src(data)                                          ((0x04000000&(data))>>26)
#define DC_SYS_MISC_get_ddr3_512_used(data)                                          ((0x04000000&(data))>>26)
#define DC_SYS_MISC_dram_2g_used_shift                                               (25)
#define DC_SYS_MISC_dram_2g_used_mask                                                (0x02000000)
#define DC_SYS_MISC_dram_2g_used(data)                                               (0x02000000&((data)<<25))
#define DC_SYS_MISC_dram_2g_used_src(data)                                           ((0x02000000&(data))>>25)
#define DC_SYS_MISC_get_dram_2g_used(data)                                           ((0x02000000&(data))>>25)
#define DC_SYS_MISC_pre_arb_scheme_sel_shift                                         (24)
#define DC_SYS_MISC_pre_arb_scheme_sel_mask                                          (0x01000000)
#define DC_SYS_MISC_pre_arb_scheme_sel(data)                                         (0x01000000&((data)<<24))
#define DC_SYS_MISC_pre_arb_scheme_sel_src(data)                                     ((0x01000000&(data))>>24)
#define DC_SYS_MISC_get_pre_arb_scheme_sel(data)                                     ((0x01000000&(data))>>24)
#define DC_SYS_MISC_bank_remap_enable_shift                                          (23)
#define DC_SYS_MISC_bank_remap_enable_mask                                           (0x00800000)
#define DC_SYS_MISC_bank_remap_enable(data)                                          (0x00800000&((data)<<23))
#define DC_SYS_MISC_bank_remap_enable_src(data)                                      ((0x00800000&(data))>>23)
#define DC_SYS_MISC_get_bank_remap_enable(data)                                      ((0x00800000&(data))>>23)
#define DC_SYS_MISC_ddr3_mapping_en_shift                                            (22)
#define DC_SYS_MISC_ddr3_mapping_en_mask                                             (0x00400000)
#define DC_SYS_MISC_ddr3_mapping_en(data)                                            (0x00400000&((data)<<22))
#define DC_SYS_MISC_ddr3_mapping_en_src(data)                                        ((0x00400000&(data))>>22)
#define DC_SYS_MISC_get_ddr3_mapping_en(data)                                        ((0x00400000&(data))>>22)
#define DC_SYS_MISC_out_to_phy_sel_shift                                             (21)
#define DC_SYS_MISC_out_to_phy_sel_mask                                              (0x00200000)
#define DC_SYS_MISC_out_to_phy_sel(data)                                             (0x00200000&((data)<<21))
#define DC_SYS_MISC_out_to_phy_sel_src(data)                                         ((0x00200000&(data))>>21)
#define DC_SYS_MISC_get_out_to_phy_sel(data)                                         ((0x00200000&(data))>>21)
#define DC_SYS_MISC_self_loopback_mode_shift                                         (20)
#define DC_SYS_MISC_self_loopback_mode_mask                                          (0x00100000)
#define DC_SYS_MISC_self_loopback_mode(data)                                         (0x00100000&((data)<<20))
#define DC_SYS_MISC_self_loopback_mode_src(data)                                     ((0x00100000&(data))>>20)
#define DC_SYS_MISC_get_self_loopback_mode(data)                                     ((0x00100000&(data))>>20)
#define DC_SYS_MISC_mem_num_shift                                                    (19)
#define DC_SYS_MISC_mem_num_mask                                                     (0x00080000)
#define DC_SYS_MISC_mem_num(data)                                                    (0x00080000&((data)<<19))
#define DC_SYS_MISC_mem_num_src(data)                                                ((0x00080000&(data))>>19)
#define DC_SYS_MISC_get_mem_num(data)                                                ((0x00080000&(data))>>19)
#define DC_SYS_MISC_page_size_shift                                                  (16)
#define DC_SYS_MISC_page_size_mask                                                   (0x00030000)
#define DC_SYS_MISC_page_size(data)                                                  (0x00030000&((data)<<16))
#define DC_SYS_MISC_page_size_src(data)                                              ((0x00030000&(data))>>16)
#define DC_SYS_MISC_get_page_size(data)                                              ((0x00030000&(data))>>16)
#define DC_SYS_MISC_two_big_two_small_en_shift                                       (12)
#define DC_SYS_MISC_two_big_two_small_en_mask                                        (0x00003000)
#define DC_SYS_MISC_two_big_two_small_en(data)                                       (0x00003000&((data)<<12))
#define DC_SYS_MISC_two_big_two_small_en_src(data)                                   ((0x00003000&(data))>>12)
#define DC_SYS_MISC_get_two_big_two_small_en(data)                                   ((0x00003000&(data))>>12)
#define DC_SYS_MISC_zone4_granule_sel_shift                                          (11)
#define DC_SYS_MISC_zone4_granule_sel_mask                                           (0x00000800)
#define DC_SYS_MISC_zone4_granule_sel(data)                                          (0x00000800&((data)<<11))
#define DC_SYS_MISC_zone4_granule_sel_src(data)                                      ((0x00000800&(data))>>11)
#define DC_SYS_MISC_get_zone4_granule_sel(data)                                      ((0x00000800&(data))>>11)
#define DC_SYS_MISC_zone3_granule_sel_shift                                          (10)
#define DC_SYS_MISC_zone3_granule_sel_mask                                           (0x00000400)
#define DC_SYS_MISC_zone3_granule_sel(data)                                          (0x00000400&((data)<<10))
#define DC_SYS_MISC_zone3_granule_sel_src(data)                                      ((0x00000400&(data))>>10)
#define DC_SYS_MISC_get_zone3_granule_sel(data)                                      ((0x00000400&(data))>>10)
#define DC_SYS_MISC_zone2_granule_sel_shift                                          (9)
#define DC_SYS_MISC_zone2_granule_sel_mask                                           (0x00000200)
#define DC_SYS_MISC_zone2_granule_sel(data)                                          (0x00000200&((data)<<9))
#define DC_SYS_MISC_zone2_granule_sel_src(data)                                      ((0x00000200&(data))>>9)
#define DC_SYS_MISC_get_zone2_granule_sel(data)                                      ((0x00000200&(data))>>9)
#define DC_SYS_MISC_zone1_granule_sel_shift                                          (8)
#define DC_SYS_MISC_zone1_granule_sel_mask                                           (0x00000100)
#define DC_SYS_MISC_zone1_granule_sel(data)                                          (0x00000100&((data)<<8))
#define DC_SYS_MISC_zone1_granule_sel_src(data)                                      ((0x00000100&(data))>>8)
#define DC_SYS_MISC_get_zone1_granule_sel(data)                                      ((0x00000100&(data))>>8)
#define DC_SYS_MISC_sec_granule_size_shift                                           (5)
#define DC_SYS_MISC_sec_granule_size_mask                                            (0x000000E0)
#define DC_SYS_MISC_sec_granule_size(data)                                           (0x000000E0&((data)<<5))
#define DC_SYS_MISC_sec_granule_size_src(data)                                       ((0x000000E0&(data))>>5)
#define DC_SYS_MISC_get_sec_granule_size(data)                                       ((0x000000E0&(data))>>5)
#define DC_SYS_MISC_ocp_speedup_sim_shift                                            (4)
#define DC_SYS_MISC_ocp_speedup_sim_mask                                             (0x00000010)
#define DC_SYS_MISC_ocp_speedup_sim(data)                                            (0x00000010&((data)<<4))
#define DC_SYS_MISC_ocp_speedup_sim_src(data)                                        ((0x00000010&(data))>>4)
#define DC_SYS_MISC_get_ocp_speedup_sim(data)                                        ((0x00000010&(data))>>4)
#define DC_SYS_MISC_pri_granule_size_shift                                           (1)
#define DC_SYS_MISC_pri_granule_size_mask                                            (0x0000000E)
#define DC_SYS_MISC_pri_granule_size(data)                                           (0x0000000E&((data)<<1))
#define DC_SYS_MISC_pri_granule_size_src(data)                                       ((0x0000000E&(data))>>1)
#define DC_SYS_MISC_get_pri_granule_size(data)                                       ((0x0000000E&(data))>>1)
#define DC_SYS_MISC_two_dcsys_en_shift                                               (0)
#define DC_SYS_MISC_two_dcsys_en_mask                                                (0x00000001)
#define DC_SYS_MISC_two_dcsys_en(data)                                               (0x00000001&((data)<<0))
#define DC_SYS_MISC_two_dcsys_en_src(data)                                           ((0x00000001&(data))>>0)
#define DC_SYS_MISC_get_two_dcsys_en(data)                                           ((0x00000001&(data))>>0)


#define PRIORITY_CTRL_0                                                              0x98008008
#define PRIORITY_CTRL_0_reg_addr                                                     "0xD8008008"
#define PRIORITY_CTRL_0_reg                                                          0xD8008008
#define set_PRIORITY_CTRL_0_reg(data)   (*((volatile unsigned int*) PRIORITY_CTRL_0_reg)=data)
#define get_PRIORITY_CTRL_0_reg   (*((volatile unsigned int*) PRIORITY_CTRL_0_reg))
#define PRIORITY_CTRL_0_inst_adr                                                     "0x0002"
#define PRIORITY_CTRL_0_inst                                                         0x0002
#define PRIORITY_CTRL_0_mipi_pri_shift                                               (25)
#define PRIORITY_CTRL_0_mipi_pri_mask                                                (0x3E000000)
#define PRIORITY_CTRL_0_mipi_pri(data)                                               (0x3E000000&((data)<<25))
#define PRIORITY_CTRL_0_mipi_pri_src(data)                                           ((0x3E000000&(data))>>25)
#define PRIORITY_CTRL_0_get_mipi_pri(data)                                           ((0x3E000000&(data))>>25)
#define PRIORITY_CTRL_0_vo2_pri_shift                                                (20)
#define PRIORITY_CTRL_0_vo2_pri_mask                                                 (0x01F00000)
#define PRIORITY_CTRL_0_vo2_pri(data)                                                (0x01F00000&((data)<<20))
#define PRIORITY_CTRL_0_vo2_pri_src(data)                                            ((0x01F00000&(data))>>20)
#define PRIORITY_CTRL_0_get_vo2_pri(data)                                            ((0x01F00000&(data))>>20)
#define PRIORITY_CTRL_0_vo1_pri_shift                                                (15)
#define PRIORITY_CTRL_0_vo1_pri_mask                                                 (0x000F8000)
#define PRIORITY_CTRL_0_vo1_pri(data)                                                (0x000F8000&((data)<<15))
#define PRIORITY_CTRL_0_vo1_pri_src(data)                                            ((0x000F8000&(data))>>15)
#define PRIORITY_CTRL_0_get_vo1_pri(data)                                            ((0x000F8000&(data))>>15)
#define PRIORITY_CTRL_0_sb4_high_pri_shift                                           (10)
#define PRIORITY_CTRL_0_sb4_high_pri_mask                                            (0x00007C00)
#define PRIORITY_CTRL_0_sb4_high_pri(data)                                           (0x00007C00&((data)<<10))
#define PRIORITY_CTRL_0_sb4_high_pri_src(data)                                       ((0x00007C00&(data))>>10)
#define PRIORITY_CTRL_0_get_sb4_high_pri(data)                                       ((0x00007C00&(data))>>10)
#define PRIORITY_CTRL_0_sb1_high_pri_shift                                           (5)
#define PRIORITY_CTRL_0_sb1_high_pri_mask                                            (0x000003E0)
#define PRIORITY_CTRL_0_sb1_high_pri(data)                                           (0x000003E0&((data)<<5))
#define PRIORITY_CTRL_0_sb1_high_pri_src(data)                                       ((0x000003E0&(data))>>5)
#define PRIORITY_CTRL_0_get_sb1_high_pri(data)                                       ((0x000003E0&(data))>>5)
#define PRIORITY_CTRL_0_sb0_pri_shift                                                (0)
#define PRIORITY_CTRL_0_sb0_pri_mask                                                 (0x0000001F)
#define PRIORITY_CTRL_0_sb0_pri(data)                                                (0x0000001F&((data)<<0))
#define PRIORITY_CTRL_0_sb0_pri_src(data)                                            ((0x0000001F&(data))>>0)
#define PRIORITY_CTRL_0_get_sb0_pri(data)                                            ((0x0000001F&(data))>>0)


#define PRIORITY_CTRL_1                                                              0x9800800C
#define PRIORITY_CTRL_1_reg_addr                                                     "0xD800800C"
#define PRIORITY_CTRL_1_reg                                                          0xD800800C
#define set_PRIORITY_CTRL_1_reg(data)   (*((volatile unsigned int*) PRIORITY_CTRL_1_reg)=data)
#define get_PRIORITY_CTRL_1_reg   (*((volatile unsigned int*) PRIORITY_CTRL_1_reg))
#define PRIORITY_CTRL_1_inst_adr                                                     "0x0003"
#define PRIORITY_CTRL_1_inst                                                         0x0003
#define PRIORITY_CTRL_1_sb4_low_pri_shift                                            (25)
#define PRIORITY_CTRL_1_sb4_low_pri_mask                                             (0x3E000000)
#define PRIORITY_CTRL_1_sb4_low_pri(data)                                            (0x3E000000&((data)<<25))
#define PRIORITY_CTRL_1_sb4_low_pri_src(data)                                        ((0x3E000000&(data))>>25)
#define PRIORITY_CTRL_1_get_sb4_low_pri(data)                                        ((0x3E000000&(data))>>25)
#define PRIORITY_CTRL_1_sb1_low_pri_shift                                            (20)
#define PRIORITY_CTRL_1_sb1_low_pri_mask                                             (0x01F00000)
#define PRIORITY_CTRL_1_sb1_low_pri(data)                                            (0x01F00000&((data)<<20))
#define PRIORITY_CTRL_1_sb1_low_pri_src(data)                                        ((0x01F00000&(data))>>20)
#define PRIORITY_CTRL_1_get_sb1_low_pri(data)                                        ((0x01F00000&(data))>>20)
#define PRIORITY_CTRL_1_sb3_high_pri_shift                                           (15)
#define PRIORITY_CTRL_1_sb3_high_pri_mask                                            (0x000F8000)
#define PRIORITY_CTRL_1_sb3_high_pri(data)                                           (0x000F8000&((data)<<15))
#define PRIORITY_CTRL_1_sb3_high_pri_src(data)                                       ((0x000F8000&(data))>>15)
#define PRIORITY_CTRL_1_get_sb3_high_pri(data)                                       ((0x000F8000&(data))>>15)
#define PRIORITY_CTRL_1_sata_pri_shift                                               (10)
#define PRIORITY_CTRL_1_sata_pri_mask                                                (0x00007C00)
#define PRIORITY_CTRL_1_sata_pri(data)                                               (0x00007C00&((data)<<10))
#define PRIORITY_CTRL_1_sata_pri_src(data)                                           ((0x00007C00&(data))>>10)
#define PRIORITY_CTRL_1_get_sata_pri(data)                                           ((0x00007C00&(data))>>10)
#define PRIORITY_CTRL_1_avk_cpu_pri_shift                                            (5)
#define PRIORITY_CTRL_1_avk_cpu_pri_mask                                             (0x000003E0)
#define PRIORITY_CTRL_1_avk_cpu_pri(data)                                            (0x000003E0&((data)<<5))
#define PRIORITY_CTRL_1_avk_cpu_pri_src(data)                                        ((0x000003E0&(data))>>5)
#define PRIORITY_CTRL_1_get_avk_cpu_pri(data)                                        ((0x000003E0&(data))>>5)
#define PRIORITY_CTRL_1_scpu_pri_shift                                               (0)
#define PRIORITY_CTRL_1_scpu_pri_mask                                                (0x0000001F)
#define PRIORITY_CTRL_1_scpu_pri(data)                                               (0x0000001F&((data)<<0))
#define PRIORITY_CTRL_1_scpu_pri_src(data)                                           ((0x0000001F&(data))>>0)
#define PRIORITY_CTRL_1_get_scpu_pri(data)                                           ((0x0000001F&(data))>>0)


#define PRIORITY_CTRL_2                                                              0x98008010
#define PRIORITY_CTRL_2_reg_addr                                                     "0xD8008010"
#define PRIORITY_CTRL_2_reg                                                          0xD8008010
#define set_PRIORITY_CTRL_2_reg(data)   (*((volatile unsigned int*) PRIORITY_CTRL_2_reg)=data)
#define get_PRIORITY_CTRL_2_reg   (*((volatile unsigned int*) PRIORITY_CTRL_2_reg))
#define PRIORITY_CTRL_2_inst_adr                                                     "0x0004"
#define PRIORITY_CTRL_2_inst                                                         0x0004
#define PRIORITY_CTRL_2_se_pri_shift                                                 (25)
#define PRIORITY_CTRL_2_se_pri_mask                                                  (0x3E000000)
#define PRIORITY_CTRL_2_se_pri(data)                                                 (0x3E000000&((data)<<25))
#define PRIORITY_CTRL_2_se_pri_src(data)                                             ((0x3E000000&(data))>>25)
#define PRIORITY_CTRL_2_get_se_pri(data)                                             ((0x3E000000&(data))>>25)
#define PRIORITY_CTRL_2_gpu_pri_shift                                                (20)
#define PRIORITY_CTRL_2_gpu_pri_mask                                                 (0x01F00000)
#define PRIORITY_CTRL_2_gpu_pri(data)                                                (0x01F00000&((data)<<20))
#define PRIORITY_CTRL_2_gpu_pri_src(data)                                            ((0x01F00000&(data))>>20)
#define PRIORITY_CTRL_2_get_gpu_pri(data)                                            ((0x01F00000&(data))>>20)
#define PRIORITY_CTRL_2_sb3_low_pri_shift                                            (15)
#define PRIORITY_CTRL_2_sb3_low_pri_mask                                             (0x000F8000)
#define PRIORITY_CTRL_2_sb3_low_pri(data)                                            (0x000F8000&((data)<<15))
#define PRIORITY_CTRL_2_sb3_low_pri_src(data)                                        ((0x000F8000&(data))>>15)
#define PRIORITY_CTRL_2_get_sb3_low_pri(data)                                        ((0x000F8000&(data))>>15)
#define PRIORITY_CTRL_2_ve3_pri_shift                                                (10)
#define PRIORITY_CTRL_2_ve3_pri_mask                                                 (0x00007C00)
#define PRIORITY_CTRL_2_ve3_pri(data)                                                (0x00007C00&((data)<<10))
#define PRIORITY_CTRL_2_ve3_pri_src(data)                                            ((0x00007C00&(data))>>10)
#define PRIORITY_CTRL_2_get_ve3_pri(data)                                            ((0x00007C00&(data))>>10)
#define PRIORITY_CTRL_2_ve2_pri_shift                                                (5)
#define PRIORITY_CTRL_2_ve2_pri_mask                                                 (0x000003E0)
#define PRIORITY_CTRL_2_ve2_pri(data)                                                (0x000003E0&((data)<<5))
#define PRIORITY_CTRL_2_ve2_pri_src(data)                                            ((0x000003E0&(data))>>5)
#define PRIORITY_CTRL_2_get_ve2_pri(data)                                            ((0x000003E0&(data))>>5)
#define PRIORITY_CTRL_2_ve1_pri_shift                                                (0)
#define PRIORITY_CTRL_2_ve1_pri_mask                                                 (0x0000001F)
#define PRIORITY_CTRL_2_ve1_pri(data)                                                (0x0000001F&((data)<<0))
#define PRIORITY_CTRL_2_ve1_pri_src(data)                                            ((0x0000001F&(data))>>0)
#define PRIORITY_CTRL_2_get_ve1_pri(data)                                            ((0x0000001F&(data))>>0)


#define REORDER_CTRL_0                                                               0x98008014
#define REORDER_CTRL_0_reg_addr                                                      "0xD8008014"
#define REORDER_CTRL_0_reg                                                           0xD8008014
#define set_REORDER_CTRL_0_reg(data)   (*((volatile unsigned int*) REORDER_CTRL_0_reg)=data)
#define get_REORDER_CTRL_0_reg   (*((volatile unsigned int*) REORDER_CTRL_0_reg))
#define REORDER_CTRL_0_inst_adr                                                      "0x0005"
#define REORDER_CTRL_0_inst                                                          0x0005
#define REORDER_CTRL_0_sb4_high_tag_shift                                            (30)
#define REORDER_CTRL_0_sb4_high_tag_mask                                             (0xC0000000)
#define REORDER_CTRL_0_sb4_high_tag(data)                                            (0xC0000000&((data)<<30))
#define REORDER_CTRL_0_sb4_high_tag_src(data)                                        ((0xC0000000&(data))>>30)
#define REORDER_CTRL_0_get_sb4_high_tag(data)                                        ((0xC0000000&(data))>>30)
#define REORDER_CTRL_0_sb4_low_tag_shift                                             (28)
#define REORDER_CTRL_0_sb4_low_tag_mask                                              (0x30000000)
#define REORDER_CTRL_0_sb4_low_tag(data)                                             (0x30000000&((data)<<28))
#define REORDER_CTRL_0_sb4_low_tag_src(data)                                         ((0x30000000&(data))>>28)
#define REORDER_CTRL_0_get_sb4_low_tag(data)                                         ((0x30000000&(data))>>28)
#define REORDER_CTRL_0_scpu_tag_shift                                                (26)
#define REORDER_CTRL_0_scpu_tag_mask                                                 (0x0C000000)
#define REORDER_CTRL_0_scpu_tag(data)                                                (0x0C000000&((data)<<26))
#define REORDER_CTRL_0_scpu_tag_src(data)                                            ((0x0C000000&(data))>>26)
#define REORDER_CTRL_0_get_scpu_tag(data)                                            ((0x0C000000&(data))>>26)
#define REORDER_CTRL_0_se_tag_shift                                                  (24)
#define REORDER_CTRL_0_se_tag_mask                                                   (0x03000000)
#define REORDER_CTRL_0_se_tag(data)                                                  (0x03000000&((data)<<24))
#define REORDER_CTRL_0_se_tag_src(data)                                              ((0x03000000&(data))>>24)
#define REORDER_CTRL_0_get_se_tag(data)                                              ((0x03000000&(data))>>24)
#define REORDER_CTRL_0_gpu_tag_shift                                                 (22)
#define REORDER_CTRL_0_gpu_tag_mask                                                  (0x00C00000)
#define REORDER_CTRL_0_gpu_tag(data)                                                 (0x00C00000&((data)<<22))
#define REORDER_CTRL_0_gpu_tag_src(data)                                             ((0x00C00000&(data))>>22)
#define REORDER_CTRL_0_get_gpu_tag(data)                                             ((0x00C00000&(data))>>22)
#define REORDER_CTRL_0_sb3_low_tag_shift                                             (20)
#define REORDER_CTRL_0_sb3_low_tag_mask                                              (0x00300000)
#define REORDER_CTRL_0_sb3_low_tag(data)                                             (0x00300000&((data)<<20))
#define REORDER_CTRL_0_sb3_low_tag_src(data)                                         ((0x00300000&(data))>>20)
#define REORDER_CTRL_0_get_sb3_low_tag(data)                                         ((0x00300000&(data))>>20)
#define REORDER_CTRL_0_ve_tag_shift                                                  (18)
#define REORDER_CTRL_0_ve_tag_mask                                                   (0x000C0000)
#define REORDER_CTRL_0_ve_tag(data)                                                  (0x000C0000&((data)<<18))
#define REORDER_CTRL_0_ve_tag_src(data)                                              ((0x000C0000&(data))>>18)
#define REORDER_CTRL_0_get_ve_tag(data)                                              ((0x000C0000&(data))>>18)
#define REORDER_CTRL_0_sb3_high_tag_shift                                            (16)
#define REORDER_CTRL_0_sb3_high_tag_mask                                             (0x00030000)
#define REORDER_CTRL_0_sb3_high_tag(data)                                            (0x00030000&((data)<<16))
#define REORDER_CTRL_0_sb3_high_tag_src(data)                                        ((0x00030000&(data))>>16)
#define REORDER_CTRL_0_get_sb3_high_tag(data)                                        ((0x00030000&(data))>>16)
#define REORDER_CTRL_0_sb1_low_tag_shift                                             (14)
#define REORDER_CTRL_0_sb1_low_tag_mask                                              (0x0000C000)
#define REORDER_CTRL_0_sb1_low_tag(data)                                             (0x0000C000&((data)<<14))
#define REORDER_CTRL_0_sb1_low_tag_src(data)                                         ((0x0000C000&(data))>>14)
#define REORDER_CTRL_0_get_sb1_low_tag(data)                                         ((0x0000C000&(data))>>14)
#define REORDER_CTRL_0_sata_tag_shift                                                (12)
#define REORDER_CTRL_0_sata_tag_mask                                                 (0x00003000)
#define REORDER_CTRL_0_sata_tag(data)                                                (0x00003000&((data)<<12))
#define REORDER_CTRL_0_sata_tag_src(data)                                            ((0x00003000&(data))>>12)
#define REORDER_CTRL_0_get_sata_tag(data)                                            ((0x00003000&(data))>>12)
#define REORDER_CTRL_0_avk_cpu_tag_shift                                             (10)
#define REORDER_CTRL_0_avk_cpu_tag_mask                                              (0x00000C00)
#define REORDER_CTRL_0_avk_cpu_tag(data)                                             (0x00000C00&((data)<<10))
#define REORDER_CTRL_0_avk_cpu_tag_src(data)                                         ((0x00000C00&(data))>>10)
#define REORDER_CTRL_0_get_avk_cpu_tag(data)                                         ((0x00000C00&(data))>>10)
#define REORDER_CTRL_0_mipi_tag_shift                                                (8)
#define REORDER_CTRL_0_mipi_tag_mask                                                 (0x00000300)
#define REORDER_CTRL_0_mipi_tag(data)                                                (0x00000300&((data)<<8))
#define REORDER_CTRL_0_mipi_tag_src(data)                                            ((0x00000300&(data))>>8)
#define REORDER_CTRL_0_get_mipi_tag(data)                                            ((0x00000300&(data))>>8)
#define REORDER_CTRL_0_vo2_tag_shift                                                 (6)
#define REORDER_CTRL_0_vo2_tag_mask                                                  (0x000000C0)
#define REORDER_CTRL_0_vo2_tag(data)                                                 (0x000000C0&((data)<<6))
#define REORDER_CTRL_0_vo2_tag_src(data)                                             ((0x000000C0&(data))>>6)
#define REORDER_CTRL_0_get_vo2_tag(data)                                             ((0x000000C0&(data))>>6)
#define REORDER_CTRL_0_vo1_tag_shift                                                 (4)
#define REORDER_CTRL_0_vo1_tag_mask                                                  (0x00000030)
#define REORDER_CTRL_0_vo1_tag(data)                                                 (0x00000030&((data)<<4))
#define REORDER_CTRL_0_vo1_tag_src(data)                                             ((0x00000030&(data))>>4)
#define REORDER_CTRL_0_get_vo1_tag(data)                                             ((0x00000030&(data))>>4)
#define REORDER_CTRL_0_sb1_high_tag_shift                                            (2)
#define REORDER_CTRL_0_sb1_high_tag_mask                                             (0x0000000C)
#define REORDER_CTRL_0_sb1_high_tag(data)                                            (0x0000000C&((data)<<2))
#define REORDER_CTRL_0_sb1_high_tag_src(data)                                        ((0x0000000C&(data))>>2)
#define REORDER_CTRL_0_get_sb1_high_tag(data)                                        ((0x0000000C&(data))>>2)
#define REORDER_CTRL_0_sb0_tag_shift                                                 (0)
#define REORDER_CTRL_0_sb0_tag_mask                                                  (0x00000003)
#define REORDER_CTRL_0_sb0_tag(data)                                                 (0x00000003&((data)<<0))
#define REORDER_CTRL_0_sb0_tag_src(data)                                             ((0x00000003&(data))>>0)
#define REORDER_CTRL_0_get_sb0_tag(data)                                             ((0x00000003&(data))>>0)


#define PRIORITY_ADJ_1                                                               0x98008018
#define PRIORITY_ADJ_1_reg_addr                                                      "0xD8008018"
#define PRIORITY_ADJ_1_reg                                                           0xD8008018
#define set_PRIORITY_ADJ_1_reg(data)   (*((volatile unsigned int*) PRIORITY_ADJ_1_reg)=data)
#define get_PRIORITY_ADJ_1_reg   (*((volatile unsigned int*) PRIORITY_ADJ_1_reg))
#define PRIORITY_ADJ_1_inst_adr                                                      "0x0006"
#define PRIORITY_ADJ_1_inst                                                          0x0006
#define PRIORITY_ADJ_1_ve2_adj_pri_1_shift                                           (25)
#define PRIORITY_ADJ_1_ve2_adj_pri_1_mask                                            (0x3E000000)
#define PRIORITY_ADJ_1_ve2_adj_pri_1(data)                                           (0x3E000000&((data)<<25))
#define PRIORITY_ADJ_1_ve2_adj_pri_1_src(data)                                       ((0x3E000000&(data))>>25)
#define PRIORITY_ADJ_1_get_ve2_adj_pri_1(data)                                       ((0x3E000000&(data))>>25)
#define PRIORITY_ADJ_1_ve2_adj_pri_0_shift                                           (20)
#define PRIORITY_ADJ_1_ve2_adj_pri_0_mask                                            (0x01F00000)
#define PRIORITY_ADJ_1_ve2_adj_pri_0(data)                                           (0x01F00000&((data)<<20))
#define PRIORITY_ADJ_1_ve2_adj_pri_0_src(data)                                       ((0x01F00000&(data))>>20)
#define PRIORITY_ADJ_1_get_ve2_adj_pri_0(data)                                       ((0x01F00000&(data))>>20)
#define PRIORITY_ADJ_1_ve1_adj_pri_1_shift                                           (15)
#define PRIORITY_ADJ_1_ve1_adj_pri_1_mask                                            (0x000F8000)
#define PRIORITY_ADJ_1_ve1_adj_pri_1(data)                                           (0x000F8000&((data)<<15))
#define PRIORITY_ADJ_1_ve1_adj_pri_1_src(data)                                       ((0x000F8000&(data))>>15)
#define PRIORITY_ADJ_1_get_ve1_adj_pri_1(data)                                       ((0x000F8000&(data))>>15)
#define PRIORITY_ADJ_1_ve1_adj_pri_0_shift                                           (10)
#define PRIORITY_ADJ_1_ve1_adj_pri_0_mask                                            (0x00007C00)
#define PRIORITY_ADJ_1_ve1_adj_pri_0(data)                                           (0x00007C00&((data)<<10))
#define PRIORITY_ADJ_1_ve1_adj_pri_0_src(data)                                       ((0x00007C00&(data))>>10)
#define PRIORITY_ADJ_1_get_ve1_adj_pri_0(data)                                       ((0x00007C00&(data))>>10)
#define PRIORITY_ADJ_1_gpu_adj_pri_1_shift                                           (5)
#define PRIORITY_ADJ_1_gpu_adj_pri_1_mask                                            (0x000003E0)
#define PRIORITY_ADJ_1_gpu_adj_pri_1(data)                                           (0x000003E0&((data)<<5))
#define PRIORITY_ADJ_1_gpu_adj_pri_1_src(data)                                       ((0x000003E0&(data))>>5)
#define PRIORITY_ADJ_1_get_gpu_adj_pri_1(data)                                       ((0x000003E0&(data))>>5)
#define PRIORITY_ADJ_1_gpu_adj_pri_0_shift                                           (0)
#define PRIORITY_ADJ_1_gpu_adj_pri_0_mask                                            (0x0000001F)
#define PRIORITY_ADJ_1_gpu_adj_pri_0(data)                                           (0x0000001F&((data)<<0))
#define PRIORITY_ADJ_1_gpu_adj_pri_0_src(data)                                       ((0x0000001F&(data))>>0)
#define PRIORITY_ADJ_1_get_gpu_adj_pri_0(data)                                       ((0x0000001F&(data))>>0)


#define PRIORITY_ADJ_2                                                               0x9800801C
#define PRIORITY_ADJ_2_reg_addr                                                      "0xD800801C"
#define PRIORITY_ADJ_2_reg                                                           0xD800801C
#define set_PRIORITY_ADJ_2_reg(data)   (*((volatile unsigned int*) PRIORITY_ADJ_2_reg)=data)
#define get_PRIORITY_ADJ_2_reg   (*((volatile unsigned int*) PRIORITY_ADJ_2_reg))
#define PRIORITY_ADJ_2_inst_adr                                                      "0x0007"
#define PRIORITY_ADJ_2_inst                                                          0x0007
#define PRIORITY_ADJ_2_se_adj_pri_1_shift                                            (15)
#define PRIORITY_ADJ_2_se_adj_pri_1_mask                                             (0x000F8000)
#define PRIORITY_ADJ_2_se_adj_pri_1(data)                                            (0x000F8000&((data)<<15))
#define PRIORITY_ADJ_2_se_adj_pri_1_src(data)                                        ((0x000F8000&(data))>>15)
#define PRIORITY_ADJ_2_get_se_adj_pri_1(data)                                        ((0x000F8000&(data))>>15)
#define PRIORITY_ADJ_2_se_adj_pri_0_shift                                            (10)
#define PRIORITY_ADJ_2_se_adj_pri_0_mask                                             (0x00007C00)
#define PRIORITY_ADJ_2_se_adj_pri_0(data)                                            (0x00007C00&((data)<<10))
#define PRIORITY_ADJ_2_se_adj_pri_0_src(data)                                        ((0x00007C00&(data))>>10)
#define PRIORITY_ADJ_2_get_se_adj_pri_0(data)                                        ((0x00007C00&(data))>>10)
#define PRIORITY_ADJ_2_ve3_adj_pri_1_shift                                           (5)
#define PRIORITY_ADJ_2_ve3_adj_pri_1_mask                                            (0x000003E0)
#define PRIORITY_ADJ_2_ve3_adj_pri_1(data)                                           (0x000003E0&((data)<<5))
#define PRIORITY_ADJ_2_ve3_adj_pri_1_src(data)                                       ((0x000003E0&(data))>>5)
#define PRIORITY_ADJ_2_get_ve3_adj_pri_1(data)                                       ((0x000003E0&(data))>>5)
#define PRIORITY_ADJ_2_ve3_adj_pri_0_shift                                           (0)
#define PRIORITY_ADJ_2_ve3_adj_pri_0_mask                                            (0x0000001F)
#define PRIORITY_ADJ_2_ve3_adj_pri_0(data)                                           (0x0000001F&((data)<<0))
#define PRIORITY_ADJ_2_ve3_adj_pri_0_src(data)                                       ((0x0000001F&(data))>>0)
#define PRIORITY_ADJ_2_get_ve3_adj_pri_0(data)                                       ((0x0000001F&(data))>>0)


#define DC_QUEUE_SET                                                                 0x98008020
#define DC_QUEUE_SET_reg_addr                                                        "0xD8008020"
#define DC_QUEUE_SET_reg                                                             0xD8008020
#define set_DC_QUEUE_SET_reg(data)   (*((volatile unsigned int*) DC_QUEUE_SET_reg)=data)
#define get_DC_QUEUE_SET_reg   (*((volatile unsigned int*) DC_QUEUE_SET_reg))
#define DC_QUEUE_SET_inst_adr                                                        "0x0008"
#define DC_QUEUE_SET_inst                                                            0x0008
#define DC_QUEUE_SET_sb4_queue_set_shift                                             (28)
#define DC_QUEUE_SET_sb4_queue_set_mask                                              (0x30000000)
#define DC_QUEUE_SET_sb4_queue_set(data)                                             (0x30000000&((data)<<28))
#define DC_QUEUE_SET_sb4_queue_set_src(data)                                         ((0x30000000&(data))>>28)
#define DC_QUEUE_SET_get_sb4_queue_set(data)                                         ((0x30000000&(data))>>28)
#define DC_QUEUE_SET_ve3_queue_set_shift                                             (26)
#define DC_QUEUE_SET_ve3_queue_set_mask                                              (0x0C000000)
#define DC_QUEUE_SET_ve3_queue_set(data)                                             (0x0C000000&((data)<<26))
#define DC_QUEUE_SET_ve3_queue_set_src(data)                                         ((0x0C000000&(data))>>26)
#define DC_QUEUE_SET_get_ve3_queue_set(data)                                         ((0x0C000000&(data))>>26)
#define DC_QUEUE_SET_ve2_queue_set_shift                                             (24)
#define DC_QUEUE_SET_ve2_queue_set_mask                                              (0x03000000)
#define DC_QUEUE_SET_ve2_queue_set(data)                                             (0x03000000&((data)<<24))
#define DC_QUEUE_SET_ve2_queue_set_src(data)                                         ((0x03000000&(data))>>24)
#define DC_QUEUE_SET_get_ve2_queue_set(data)                                         ((0x03000000&(data))>>24)
#define DC_QUEUE_SET_vo2_queue_set_shift                                             (22)
#define DC_QUEUE_SET_vo2_queue_set_mask                                              (0x00C00000)
#define DC_QUEUE_SET_vo2_queue_set(data)                                             (0x00C00000&((data)<<22))
#define DC_QUEUE_SET_vo2_queue_set_src(data)                                         ((0x00C00000&(data))>>22)
#define DC_QUEUE_SET_get_vo2_queue_set(data)                                         ((0x00C00000&(data))>>22)
#define DC_QUEUE_SET_scpu_queue_set_shift                                            (20)
#define DC_QUEUE_SET_scpu_queue_set_mask                                             (0x00300000)
#define DC_QUEUE_SET_scpu_queue_set(data)                                            (0x00300000&((data)<<20))
#define DC_QUEUE_SET_scpu_queue_set_src(data)                                        ((0x00300000&(data))>>20)
#define DC_QUEUE_SET_get_scpu_queue_set(data)                                        ((0x00300000&(data))>>20)
#define DC_QUEUE_SET_sata_queue_set_shift                                            (18)
#define DC_QUEUE_SET_sata_queue_set_mask                                             (0x000C0000)
#define DC_QUEUE_SET_sata_queue_set(data)                                            (0x000C0000&((data)<<18))
#define DC_QUEUE_SET_sata_queue_set_src(data)                                        ((0x000C0000&(data))>>18)
#define DC_QUEUE_SET_get_sata_queue_set(data)                                        ((0x000C0000&(data))>>18)
#define DC_QUEUE_SET_mipi_queue_set_shift                                            (16)
#define DC_QUEUE_SET_mipi_queue_set_mask                                             (0x00030000)
#define DC_QUEUE_SET_mipi_queue_set(data)                                            (0x00030000&((data)<<16))
#define DC_QUEUE_SET_mipi_queue_set_src(data)                                        ((0x00030000&(data))>>16)
#define DC_QUEUE_SET_get_mipi_queue_set(data)                                        ((0x00030000&(data))>>16)
#define DC_QUEUE_SET_gpu_queue_set_shift                                             (14)
#define DC_QUEUE_SET_gpu_queue_set_mask                                              (0x0000C000)
#define DC_QUEUE_SET_gpu_queue_set(data)                                             (0x0000C000&((data)<<14))
#define DC_QUEUE_SET_gpu_queue_set_src(data)                                         ((0x0000C000&(data))>>14)
#define DC_QUEUE_SET_get_gpu_queue_set(data)                                         ((0x0000C000&(data))>>14)
#define DC_QUEUE_SET_se_queue_set_shift                                              (12)
#define DC_QUEUE_SET_se_queue_set_mask                                               (0x00003000)
#define DC_QUEUE_SET_se_queue_set(data)                                              (0x00003000&((data)<<12))
#define DC_QUEUE_SET_se_queue_set_src(data)                                          ((0x00003000&(data))>>12)
#define DC_QUEUE_SET_get_se_queue_set(data)                                          ((0x00003000&(data))>>12)
#define DC_QUEUE_SET_ve1_queue_set_shift                                             (10)
#define DC_QUEUE_SET_ve1_queue_set_mask                                              (0x00000C00)
#define DC_QUEUE_SET_ve1_queue_set(data)                                             (0x00000C00&((data)<<10))
#define DC_QUEUE_SET_ve1_queue_set_src(data)                                         ((0x00000C00&(data))>>10)
#define DC_QUEUE_SET_get_ve1_queue_set(data)                                         ((0x00000C00&(data))>>10)
#define DC_QUEUE_SET_sb3_queue_set_shift                                             (8)
#define DC_QUEUE_SET_sb3_queue_set_mask                                              (0x00000300)
#define DC_QUEUE_SET_sb3_queue_set(data)                                             (0x00000300&((data)<<8))
#define DC_QUEUE_SET_sb3_queue_set_src(data)                                         ((0x00000300&(data))>>8)
#define DC_QUEUE_SET_get_sb3_queue_set(data)                                         ((0x00000300&(data))>>8)
#define DC_QUEUE_SET_avk_cpu_queue_set_shift                                         (6)
#define DC_QUEUE_SET_avk_cpu_queue_set_mask                                          (0x000000C0)
#define DC_QUEUE_SET_avk_cpu_queue_set(data)                                         (0x000000C0&((data)<<6))
#define DC_QUEUE_SET_avk_cpu_queue_set_src(data)                                     ((0x000000C0&(data))>>6)
#define DC_QUEUE_SET_get_avk_cpu_queue_set(data)                                     ((0x000000C0&(data))>>6)
#define DC_QUEUE_SET_sb1_queue_set_shift                                             (4)
#define DC_QUEUE_SET_sb1_queue_set_mask                                              (0x00000030)
#define DC_QUEUE_SET_sb1_queue_set(data)                                             (0x00000030&((data)<<4))
#define DC_QUEUE_SET_sb1_queue_set_src(data)                                         ((0x00000030&(data))>>4)
#define DC_QUEUE_SET_get_sb1_queue_set(data)                                         ((0x00000030&(data))>>4)
#define DC_QUEUE_SET_sb0_queue_set_shift                                             (2)
#define DC_QUEUE_SET_sb0_queue_set_mask                                              (0x0000000C)
#define DC_QUEUE_SET_sb0_queue_set(data)                                             (0x0000000C&((data)<<2))
#define DC_QUEUE_SET_sb0_queue_set_src(data)                                         ((0x0000000C&(data))>>2)
#define DC_QUEUE_SET_get_sb0_queue_set(data)                                         ((0x0000000C&(data))>>2)
#define DC_QUEUE_SET_vo1_queue_set_shift                                             (0)
#define DC_QUEUE_SET_vo1_queue_set_mask                                              (0x00000003)
#define DC_QUEUE_SET_vo1_queue_set(data)                                             (0x00000003&((data)<<0))
#define DC_QUEUE_SET_vo1_queue_set_src(data)                                         ((0x00000003&(data))>>0)
#define DC_QUEUE_SET_get_vo1_queue_set(data)                                         ((0x00000003&(data))>>0)


#define DC_REQ_STATUS                                                                0x98008024
#define DC_REQ_STATUS_reg_addr                                                       "0xD8008024"
#define DC_REQ_STATUS_reg                                                            0xD8008024
#define set_DC_REQ_STATUS_reg(data)   (*((volatile unsigned int*) DC_REQ_STATUS_reg)=data)
#define get_DC_REQ_STATUS_reg   (*((volatile unsigned int*) DC_REQ_STATUS_reg))
#define DC_REQ_STATUS_inst_adr                                                       "0x0009"
#define DC_REQ_STATUS_inst                                                           0x0009
#define DC_REQ_STATUS_req_pending_1_shift                                            (16)
#define DC_REQ_STATUS_req_pending_1_mask                                             (0x00010000)
#define DC_REQ_STATUS_req_pending_1(data)                                            (0x00010000&((data)<<16))
#define DC_REQ_STATUS_req_pending_1_src(data)                                        ((0x00010000&(data))>>16)
#define DC_REQ_STATUS_get_req_pending_1(data)                                        ((0x00010000&(data))>>16)
#define DC_REQ_STATUS_req_pending_0_shift                                            (15)
#define DC_REQ_STATUS_req_pending_0_mask                                             (0x00008000)
#define DC_REQ_STATUS_req_pending_0(data)                                            (0x00008000&((data)<<15))
#define DC_REQ_STATUS_req_pending_0_src(data)                                        ((0x00008000&(data))>>15)
#define DC_REQ_STATUS_get_req_pending_0(data)                                        ((0x00008000&(data))>>15)
#define DC_REQ_STATUS_req_id_shift                                                   (0)
#define DC_REQ_STATUS_req_id_mask                                                    (0x00007FFF)
#define DC_REQ_STATUS_req_id(data)                                                   (0x00007FFF&((data)<<0))
#define DC_REQ_STATUS_req_id_src(data)                                               ((0x00007FFF&(data))>>0)
#define DC_REQ_STATUS_get_req_id(data)                                               ((0x00007FFF&(data))>>0)


#define DC_SYS_MISC2                                                                 0x98008028
#define DC_SYS_MISC2_reg_addr                                                        "0xD8008028"
#define DC_SYS_MISC2_reg                                                             0xD8008028
#define set_DC_SYS_MISC2_reg(data)   (*((volatile unsigned int*) DC_SYS_MISC2_reg)=data)
#define get_DC_SYS_MISC2_reg   (*((volatile unsigned int*) DC_SYS_MISC2_reg))
#define DC_SYS_MISC2_inst_adr                                                        "0x000A"
#define DC_SYS_MISC2_inst                                                            0x000A
#define DC_SYS_MISC2_cti_st_sel_shift                                                (30)
#define DC_SYS_MISC2_cti_st_sel_mask                                                 (0x40000000)
#define DC_SYS_MISC2_cti_st_sel(data)                                                (0x40000000&((data)<<30))
#define DC_SYS_MISC2_cti_st_sel_src(data)                                            ((0x40000000&(data))>>30)
#define DC_SYS_MISC2_get_cti_st_sel(data)                                            ((0x40000000&(data))>>30)
#define DC_SYS_MISC2_qfifo_cnt_full_threshold_shift                                  (25)
#define DC_SYS_MISC2_qfifo_cnt_full_threshold_mask                                   (0x3E000000)
#define DC_SYS_MISC2_qfifo_cnt_full_threshold(data)                                  (0x3E000000&((data)<<25))
#define DC_SYS_MISC2_qfifo_cnt_full_threshold_src(data)                              ((0x3E000000&(data))>>25)
#define DC_SYS_MISC2_get_qfifo_cnt_full_threshold(data)                              ((0x3E000000&(data))>>25)
#define DC_SYS_MISC2_full_cmd_count_shift                                            (16)
#define DC_SYS_MISC2_full_cmd_count_mask                                             (0x01FF0000)
#define DC_SYS_MISC2_full_cmd_count(data)                                            (0x01FF0000&((data)<<16))
#define DC_SYS_MISC2_full_cmd_count_src(data)                                        ((0x01FF0000&(data))>>16)
#define DC_SYS_MISC2_get_full_cmd_count(data)                                        ((0x01FF0000&(data))>>16)
#define DC_SYS_MISC2_cti_mask_sel_shift                                              (15)
#define DC_SYS_MISC2_cti_mask_sel_mask                                               (0x00008000)
#define DC_SYS_MISC2_cti_mask_sel(data)                                              (0x00008000&((data)<<15))
#define DC_SYS_MISC2_cti_mask_sel_src(data)                                          ((0x00008000&(data))>>15)
#define DC_SYS_MISC2_get_cti_mask_sel(data)                                          ((0x00008000&(data))>>15)
#define DC_SYS_MISC2_sb4_req_mask_shift                                              (14)
#define DC_SYS_MISC2_sb4_req_mask_mask                                               (0x00004000)
#define DC_SYS_MISC2_sb4_req_mask(data)                                              (0x00004000&((data)<<14))
#define DC_SYS_MISC2_sb4_req_mask_src(data)                                          ((0x00004000&(data))>>14)
#define DC_SYS_MISC2_get_sb4_req_mask(data)                                          ((0x00004000&(data))>>14)
#define DC_SYS_MISC2_ve3_req_mask_shift                                              (13)
#define DC_SYS_MISC2_ve3_req_mask_mask                                               (0x00002000)
#define DC_SYS_MISC2_ve3_req_mask(data)                                              (0x00002000&((data)<<13))
#define DC_SYS_MISC2_ve3_req_mask_src(data)                                          ((0x00002000&(data))>>13)
#define DC_SYS_MISC2_get_ve3_req_mask(data)                                          ((0x00002000&(data))>>13)
#define DC_SYS_MISC2_ve2_req_mask_shift                                              (12)
#define DC_SYS_MISC2_ve2_req_mask_mask                                               (0x00001000)
#define DC_SYS_MISC2_ve2_req_mask(data)                                              (0x00001000&((data)<<12))
#define DC_SYS_MISC2_ve2_req_mask_src(data)                                          ((0x00001000&(data))>>12)
#define DC_SYS_MISC2_get_ve2_req_mask(data)                                          ((0x00001000&(data))>>12)
#define DC_SYS_MISC2_vo2_req_mask_shift                                              (11)
#define DC_SYS_MISC2_vo2_req_mask_mask                                               (0x00000800)
#define DC_SYS_MISC2_vo2_req_mask(data)                                              (0x00000800&((data)<<11))
#define DC_SYS_MISC2_vo2_req_mask_src(data)                                          ((0x00000800&(data))>>11)
#define DC_SYS_MISC2_get_vo2_req_mask(data)                                          ((0x00000800&(data))>>11)
#define DC_SYS_MISC2_scpu_req_mask_shift                                             (10)
#define DC_SYS_MISC2_scpu_req_mask_mask                                              (0x00000400)
#define DC_SYS_MISC2_scpu_req_mask(data)                                             (0x00000400&((data)<<10))
#define DC_SYS_MISC2_scpu_req_mask_src(data)                                         ((0x00000400&(data))>>10)
#define DC_SYS_MISC2_get_scpu_req_mask(data)                                         ((0x00000400&(data))>>10)
#define DC_SYS_MISC2_sata_req_mask_shift                                             (9)
#define DC_SYS_MISC2_sata_req_mask_mask                                              (0x00000200)
#define DC_SYS_MISC2_sata_req_mask(data)                                             (0x00000200&((data)<<9))
#define DC_SYS_MISC2_sata_req_mask_src(data)                                         ((0x00000200&(data))>>9)
#define DC_SYS_MISC2_get_sata_req_mask(data)                                         ((0x00000200&(data))>>9)
#define DC_SYS_MISC2_mipi_req_mask_shift                                             (8)
#define DC_SYS_MISC2_mipi_req_mask_mask                                              (0x00000100)
#define DC_SYS_MISC2_mipi_req_mask(data)                                             (0x00000100&((data)<<8))
#define DC_SYS_MISC2_mipi_req_mask_src(data)                                         ((0x00000100&(data))>>8)
#define DC_SYS_MISC2_get_mipi_req_mask(data)                                         ((0x00000100&(data))>>8)
#define DC_SYS_MISC2_gpu_req_mask_shift                                              (7)
#define DC_SYS_MISC2_gpu_req_mask_mask                                               (0x00000080)
#define DC_SYS_MISC2_gpu_req_mask(data)                                              (0x00000080&((data)<<7))
#define DC_SYS_MISC2_gpu_req_mask_src(data)                                          ((0x00000080&(data))>>7)
#define DC_SYS_MISC2_get_gpu_req_mask(data)                                          ((0x00000080&(data))>>7)
#define DC_SYS_MISC2_se_req_mask_shift                                               (6)
#define DC_SYS_MISC2_se_req_mask_mask                                                (0x00000040)
#define DC_SYS_MISC2_se_req_mask(data)                                               (0x00000040&((data)<<6))
#define DC_SYS_MISC2_se_req_mask_src(data)                                           ((0x00000040&(data))>>6)
#define DC_SYS_MISC2_get_se_req_mask(data)                                           ((0x00000040&(data))>>6)
#define DC_SYS_MISC2_ve1_req_mask_shift                                              (5)
#define DC_SYS_MISC2_ve1_req_mask_mask                                               (0x00000020)
#define DC_SYS_MISC2_ve1_req_mask(data)                                              (0x00000020&((data)<<5))
#define DC_SYS_MISC2_ve1_req_mask_src(data)                                          ((0x00000020&(data))>>5)
#define DC_SYS_MISC2_get_ve1_req_mask(data)                                          ((0x00000020&(data))>>5)
#define DC_SYS_MISC2_sb3_req_mask_shift                                              (4)
#define DC_SYS_MISC2_sb3_req_mask_mask                                               (0x00000010)
#define DC_SYS_MISC2_sb3_req_mask(data)                                              (0x00000010&((data)<<4))
#define DC_SYS_MISC2_sb3_req_mask_src(data)                                          ((0x00000010&(data))>>4)
#define DC_SYS_MISC2_get_sb3_req_mask(data)                                          ((0x00000010&(data))>>4)
#define DC_SYS_MISC2_sb2_req_mask_shift                                              (3)
#define DC_SYS_MISC2_sb2_req_mask_mask                                               (0x00000008)
#define DC_SYS_MISC2_sb2_req_mask(data)                                              (0x00000008&((data)<<3))
#define DC_SYS_MISC2_sb2_req_mask_src(data)                                          ((0x00000008&(data))>>3)
#define DC_SYS_MISC2_get_sb2_req_mask(data)                                          ((0x00000008&(data))>>3)
#define DC_SYS_MISC2_sb1_req_mask_shift                                              (2)
#define DC_SYS_MISC2_sb1_req_mask_mask                                               (0x00000004)
#define DC_SYS_MISC2_sb1_req_mask(data)                                              (0x00000004&((data)<<2))
#define DC_SYS_MISC2_sb1_req_mask_src(data)                                          ((0x00000004&(data))>>2)
#define DC_SYS_MISC2_get_sb1_req_mask(data)                                          ((0x00000004&(data))>>2)
#define DC_SYS_MISC2_sb0_req_mask_shift                                              (1)
#define DC_SYS_MISC2_sb0_req_mask_mask                                               (0x00000002)
#define DC_SYS_MISC2_sb0_req_mask(data)                                              (0x00000002&((data)<<1))
#define DC_SYS_MISC2_sb0_req_mask_src(data)                                          ((0x00000002&(data))>>1)
#define DC_SYS_MISC2_get_sb0_req_mask(data)                                          ((0x00000002&(data))>>1)
#define DC_SYS_MISC2_vo1_req_mask_shift                                              (0)
#define DC_SYS_MISC2_vo1_req_mask_mask                                               (0x00000001)
#define DC_SYS_MISC2_vo1_req_mask(data)                                              (0x00000001&((data)<<0))
#define DC_SYS_MISC2_vo1_req_mask_src(data)                                          ((0x00000001&(data))>>0)
#define DC_SYS_MISC2_get_vo1_req_mask(data)                                          ((0x00000001&(data))>>0)


#define DC_SYS_MISC3                                                                 0x9800802C
#define DC_SYS_MISC3_reg_addr                                                        "0xD800802C"
#define DC_SYS_MISC3_reg                                                             0xD800802C
#define set_DC_SYS_MISC3_reg(data)   (*((volatile unsigned int*) DC_SYS_MISC3_reg)=data)
#define get_DC_SYS_MISC3_reg   (*((volatile unsigned int*) DC_SYS_MISC3_reg))
#define DC_SYS_MISC3_inst_adr                                                        "0x000B"
#define DC_SYS_MISC3_inst                                                            0x000B
#define DC_SYS_MISC3_enable_arb_delay_by_tv_sb1_grant_shift                          (24)
#define DC_SYS_MISC3_enable_arb_delay_by_tv_sb1_grant_mask                           (0x01000000)
#define DC_SYS_MISC3_enable_arb_delay_by_tv_sb1_grant(data)                          (0x01000000&((data)<<24))
#define DC_SYS_MISC3_enable_arb_delay_by_tv_sb1_grant_src(data)                      ((0x01000000&(data))>>24)
#define DC_SYS_MISC3_get_enable_arb_delay_by_tv_sb1_grant(data)                      ((0x01000000&(data))>>24)
#define DC_SYS_MISC3_ocp_rdata_queue_flush_shift                                     (23)
#define DC_SYS_MISC3_ocp_rdata_queue_flush_mask                                      (0x00800000)
#define DC_SYS_MISC3_ocp_rdata_queue_flush(data)                                     (0x00800000&((data)<<23))
#define DC_SYS_MISC3_ocp_rdata_queue_flush_src(data)                                 ((0x00800000&(data))>>23)
#define DC_SYS_MISC3_get_ocp_rdata_queue_flush(data)                                 ((0x00800000&(data))>>23)
#define DC_SYS_MISC3_sb2_wdata_queue_flush_shift                                     (22)
#define DC_SYS_MISC3_sb2_wdata_queue_flush_mask                                      (0x00400000)
#define DC_SYS_MISC3_sb2_wdata_queue_flush(data)                                     (0x00400000&((data)<<22))
#define DC_SYS_MISC3_sb2_wdata_queue_flush_src(data)                                 ((0x00400000&(data))>>22)
#define DC_SYS_MISC3_get_sb2_wdata_queue_flush(data)                                 ((0x00400000&(data))>>22)
#define DC_SYS_MISC3_sb2_cmd_queue_flush_shift                                       (21)
#define DC_SYS_MISC3_sb2_cmd_queue_flush_mask                                        (0x00200000)
#define DC_SYS_MISC3_sb2_cmd_queue_flush(data)                                       (0x00200000&((data)<<21))
#define DC_SYS_MISC3_sb2_cmd_queue_flush_src(data)                                   ((0x00200000&(data))>>21)
#define DC_SYS_MISC3_get_sb2_cmd_queue_flush(data)                                   ((0x00200000&(data))>>21)
#define DC_SYS_MISC3_sata_wdata_queue_flush_shift                                    (18)
#define DC_SYS_MISC3_sata_wdata_queue_flush_mask                                     (0x00040000)
#define DC_SYS_MISC3_sata_wdata_queue_flush(data)                                    (0x00040000&((data)<<18))
#define DC_SYS_MISC3_sata_wdata_queue_flush_src(data)                                ((0x00040000&(data))>>18)
#define DC_SYS_MISC3_get_sata_wdata_queue_flush(data)                                ((0x00040000&(data))>>18)
#define DC_SYS_MISC3_sata_cmd_queue_flush_shift                                      (17)
#define DC_SYS_MISC3_sata_cmd_queue_flush_mask                                       (0x00020000)
#define DC_SYS_MISC3_sata_cmd_queue_flush(data)                                      (0x00020000&((data)<<17))
#define DC_SYS_MISC3_sata_cmd_queue_flush_src(data)                                  ((0x00020000&(data))>>17)
#define DC_SYS_MISC3_get_sata_cmd_queue_flush(data)                                  ((0x00020000&(data))>>17)
#define DC_SYS_MISC3_se_wdata_queue_flush_shift                                      (14)
#define DC_SYS_MISC3_se_wdata_queue_flush_mask                                       (0x00004000)
#define DC_SYS_MISC3_se_wdata_queue_flush(data)                                      (0x00004000&((data)<<14))
#define DC_SYS_MISC3_se_wdata_queue_flush_src(data)                                  ((0x00004000&(data))>>14)
#define DC_SYS_MISC3_get_se_wdata_queue_flush(data)                                  ((0x00004000&(data))>>14)
#define DC_SYS_MISC3_se_cmd_queue_flush_shift                                        (13)
#define DC_SYS_MISC3_se_cmd_queue_flush_mask                                         (0x00002000)
#define DC_SYS_MISC3_se_cmd_queue_flush(data)                                        (0x00002000&((data)<<13))
#define DC_SYS_MISC3_se_cmd_queue_flush_src(data)                                    ((0x00002000&(data))>>13)
#define DC_SYS_MISC3_get_se_cmd_queue_flush(data)                                    ((0x00002000&(data))>>13)
#define DC_SYS_MISC3_scpu_wdata_queue_flush_shift                                    (10)
#define DC_SYS_MISC3_scpu_wdata_queue_flush_mask                                     (0x00000400)
#define DC_SYS_MISC3_scpu_wdata_queue_flush(data)                                    (0x00000400&((data)<<10))
#define DC_SYS_MISC3_scpu_wdata_queue_flush_src(data)                                ((0x00000400&(data))>>10)
#define DC_SYS_MISC3_get_scpu_wdata_queue_flush(data)                                ((0x00000400&(data))>>10)
#define DC_SYS_MISC3_scpu_cmd_queue_flush_shift                                      (9)
#define DC_SYS_MISC3_scpu_cmd_queue_flush_mask                                       (0x00000200)
#define DC_SYS_MISC3_scpu_cmd_queue_flush(data)                                      (0x00000200&((data)<<9))
#define DC_SYS_MISC3_scpu_cmd_queue_flush_src(data)                                  ((0x00000200&(data))>>9)
#define DC_SYS_MISC3_get_scpu_cmd_queue_flush(data)                                  ((0x00000200&(data))>>9)
#define DC_SYS_MISC3_ve_wdata_queue_flush_shift                                      (6)
#define DC_SYS_MISC3_ve_wdata_queue_flush_mask                                       (0x00000040)
#define DC_SYS_MISC3_ve_wdata_queue_flush(data)                                      (0x00000040&((data)<<6))
#define DC_SYS_MISC3_ve_wdata_queue_flush_src(data)                                  ((0x00000040&(data))>>6)
#define DC_SYS_MISC3_get_ve_wdata_queue_flush(data)                                  ((0x00000040&(data))>>6)
#define DC_SYS_MISC3_ve_cmd_queue_flush_shift                                        (5)
#define DC_SYS_MISC3_ve_cmd_queue_flush_mask                                         (0x00000020)
#define DC_SYS_MISC3_ve_cmd_queue_flush(data)                                        (0x00000020&((data)<<5))
#define DC_SYS_MISC3_ve_cmd_queue_flush_src(data)                                    ((0x00000020&(data))>>5)
#define DC_SYS_MISC3_get_ve_cmd_queue_flush(data)                                    ((0x00000020&(data))>>5)
#define DC_SYS_MISC3_ve_cmd_grp_disable_shift                                        (4)
#define DC_SYS_MISC3_ve_cmd_grp_disable_mask                                         (0x00000010)
#define DC_SYS_MISC3_ve_cmd_grp_disable(data)                                        (0x00000010&((data)<<4))
#define DC_SYS_MISC3_ve_cmd_grp_disable_src(data)                                    ((0x00000010&(data))>>4)
#define DC_SYS_MISC3_get_ve_cmd_grp_disable(data)                                    ((0x00000010&(data))>>4)
#define DC_SYS_MISC3_gpu_wdata_queue_flush_shift                                     (2)
#define DC_SYS_MISC3_gpu_wdata_queue_flush_mask                                      (0x00000004)
#define DC_SYS_MISC3_gpu_wdata_queue_flush(data)                                     (0x00000004&((data)<<2))
#define DC_SYS_MISC3_gpu_wdata_queue_flush_src(data)                                 ((0x00000004&(data))>>2)
#define DC_SYS_MISC3_get_gpu_wdata_queue_flush(data)                                 ((0x00000004&(data))>>2)
#define DC_SYS_MISC3_gpu_cmd_queue_flush_shift                                       (1)
#define DC_SYS_MISC3_gpu_cmd_queue_flush_mask                                        (0x00000002)
#define DC_SYS_MISC3_gpu_cmd_queue_flush(data)                                       (0x00000002&((data)<<1))
#define DC_SYS_MISC3_gpu_cmd_queue_flush_src(data)                                   ((0x00000002&(data))>>1)
#define DC_SYS_MISC3_get_gpu_cmd_queue_flush(data)                                   ((0x00000002&(data))>>1)
#define DC_SYS_MISC3_gpu_cmd_grp_disable_shift                                       (0)
#define DC_SYS_MISC3_gpu_cmd_grp_disable_mask                                        (0x00000001)
#define DC_SYS_MISC3_gpu_cmd_grp_disable(data)                                       (0x00000001&((data)<<0))
#define DC_SYS_MISC3_gpu_cmd_grp_disable_src(data)                                   ((0x00000001&(data))>>0)
#define DC_SYS_MISC3_get_gpu_cmd_grp_disable(data)                                   ((0x00000001&(data))>>0)


#define DC_PC_CTRL                                                                   0x98008030
#define DC_PC_CTRL_reg_addr                                                          "0xD8008030"
#define DC_PC_CTRL_reg                                                               0xD8008030
#define set_DC_PC_CTRL_reg(data)   (*((volatile unsigned int*) DC_PC_CTRL_reg)=data)
#define get_DC_PC_CTRL_reg   (*((volatile unsigned int*) DC_PC_CTRL_reg))
#define DC_PC_CTRL_inst_adr                                                          "0x000C"
#define DC_PC_CTRL_inst                                                              0x000C
#define DC_PC_CTRL_pc_go_shift                                                       (0)
#define DC_PC_CTRL_pc_go_mask                                                        (0x00000001)
#define DC_PC_CTRL_pc_go(data)                                                       (0x00000001&((data)<<0))
#define DC_PC_CTRL_pc_go_src(data)                                                   ((0x00000001&(data))>>0)
#define DC_PC_CTRL_get_pc_go(data)                                                   ((0x00000001&(data))>>0)


#define DC_PC_TOTA_MON_NUM_0                                                         0x98008034
#define DC_PC_TOTA_MON_NUM_0_reg_addr                                                "0xD8008034"
#define DC_PC_TOTA_MON_NUM_0_reg                                                     0xD8008034
#define set_DC_PC_TOTA_MON_NUM_0_reg(data)   (*((volatile unsigned int*) DC_PC_TOTA_MON_NUM_0_reg)=data)
#define get_DC_PC_TOTA_MON_NUM_0_reg   (*((volatile unsigned int*) DC_PC_TOTA_MON_NUM_0_reg))
#define DC_PC_TOTA_MON_NUM_0_inst_adr                                                "0x000D"
#define DC_PC_TOTA_MON_NUM_0_inst                                                    0x000D
#define DC_PC_TOTA_MON_NUM_0_pc_tota_mon_num_shift                                   (0)
#define DC_PC_TOTA_MON_NUM_0_pc_tota_mon_num_mask                                    (0xFFFFFFFF)
#define DC_PC_TOTA_MON_NUM_0_pc_tota_mon_num(data)                                   (0xFFFFFFFF&((data)<<0))
#define DC_PC_TOTA_MON_NUM_0_pc_tota_mon_num_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define DC_PC_TOTA_MON_NUM_0_get_pc_tota_mon_num(data)                               ((0xFFFFFFFF&(data))>>0)


#define DC_PC_TOTA_ACK_NUM_0                                                         0x98008038
#define DC_PC_TOTA_ACK_NUM_0_reg_addr                                                "0xD8008038"
#define DC_PC_TOTA_ACK_NUM_0_reg                                                     0xD8008038
#define set_DC_PC_TOTA_ACK_NUM_0_reg(data)   (*((volatile unsigned int*) DC_PC_TOTA_ACK_NUM_0_reg)=data)
#define get_DC_PC_TOTA_ACK_NUM_0_reg   (*((volatile unsigned int*) DC_PC_TOTA_ACK_NUM_0_reg))
#define DC_PC_TOTA_ACK_NUM_0_inst_adr                                                "0x000E"
#define DC_PC_TOTA_ACK_NUM_0_inst                                                    0x000E
#define DC_PC_TOTA_ACK_NUM_0_pc_tota_ack_num_shift                                   (0)
#define DC_PC_TOTA_ACK_NUM_0_pc_tota_ack_num_mask                                    (0xFFFFFFFF)
#define DC_PC_TOTA_ACK_NUM_0_pc_tota_ack_num(data)                                   (0xFFFFFFFF&((data)<<0))
#define DC_PC_TOTA_ACK_NUM_0_pc_tota_ack_num_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define DC_PC_TOTA_ACK_NUM_0_get_pc_tota_ack_num(data)                               ((0xFFFFFFFF&(data))>>0)


#define DC_PC_TOTA_IDL_NUM_0                                                         0x9800803C
#define DC_PC_TOTA_IDL_NUM_0_reg_addr                                                "0xD800803C"
#define DC_PC_TOTA_IDL_NUM_0_reg                                                     0xD800803C
#define set_DC_PC_TOTA_IDL_NUM_0_reg(data)   (*((volatile unsigned int*) DC_PC_TOTA_IDL_NUM_0_reg)=data)
#define get_DC_PC_TOTA_IDL_NUM_0_reg   (*((volatile unsigned int*) DC_PC_TOTA_IDL_NUM_0_reg))
#define DC_PC_TOTA_IDL_NUM_0_inst_adr                                                "0x000F"
#define DC_PC_TOTA_IDL_NUM_0_inst                                                    0x000F
#define DC_PC_TOTA_IDL_NUM_0_pc_tota_idl_num_shift                                   (0)
#define DC_PC_TOTA_IDL_NUM_0_pc_tota_idl_num_mask                                    (0xFFFFFFFF)
#define DC_PC_TOTA_IDL_NUM_0_pc_tota_idl_num(data)                                   (0xFFFFFFFF&((data)<<0))
#define DC_PC_TOTA_IDL_NUM_0_pc_tota_idl_num_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define DC_PC_TOTA_IDL_NUM_0_get_pc_tota_idl_num(data)                               ((0xFFFFFFFF&(data))>>0)


#define DC_PC_TOTA_MON_NUM_1                                                         0x98008040
#define DC_PC_TOTA_MON_NUM_1_reg_addr                                                "0xD8008040"
#define DC_PC_TOTA_MON_NUM_1_reg                                                     0xD8008040
#define set_DC_PC_TOTA_MON_NUM_1_reg(data)   (*((volatile unsigned int*) DC_PC_TOTA_MON_NUM_1_reg)=data)
#define get_DC_PC_TOTA_MON_NUM_1_reg   (*((volatile unsigned int*) DC_PC_TOTA_MON_NUM_1_reg))
#define DC_PC_TOTA_MON_NUM_1_inst_adr                                                "0x0010"
#define DC_PC_TOTA_MON_NUM_1_inst                                                    0x0010
#define DC_PC_TOTA_MON_NUM_1_pc_tota_mon_num_shift                                   (0)
#define DC_PC_TOTA_MON_NUM_1_pc_tota_mon_num_mask                                    (0xFFFFFFFF)
#define DC_PC_TOTA_MON_NUM_1_pc_tota_mon_num(data)                                   (0xFFFFFFFF&((data)<<0))
#define DC_PC_TOTA_MON_NUM_1_pc_tota_mon_num_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define DC_PC_TOTA_MON_NUM_1_get_pc_tota_mon_num(data)                               ((0xFFFFFFFF&(data))>>0)


#define DC_PC_TOTA_ACK_NUM_1                                                         0x98008044
#define DC_PC_TOTA_ACK_NUM_1_reg_addr                                                "0xD8008044"
#define DC_PC_TOTA_ACK_NUM_1_reg                                                     0xD8008044
#define set_DC_PC_TOTA_ACK_NUM_1_reg(data)   (*((volatile unsigned int*) DC_PC_TOTA_ACK_NUM_1_reg)=data)
#define get_DC_PC_TOTA_ACK_NUM_1_reg   (*((volatile unsigned int*) DC_PC_TOTA_ACK_NUM_1_reg))
#define DC_PC_TOTA_ACK_NUM_1_inst_adr                                                "0x0011"
#define DC_PC_TOTA_ACK_NUM_1_inst                                                    0x0011
#define DC_PC_TOTA_ACK_NUM_1_pc_tota_ack_num_shift                                   (0)
#define DC_PC_TOTA_ACK_NUM_1_pc_tota_ack_num_mask                                    (0xFFFFFFFF)
#define DC_PC_TOTA_ACK_NUM_1_pc_tota_ack_num(data)                                   (0xFFFFFFFF&((data)<<0))
#define DC_PC_TOTA_ACK_NUM_1_pc_tota_ack_num_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define DC_PC_TOTA_ACK_NUM_1_get_pc_tota_ack_num(data)                               ((0xFFFFFFFF&(data))>>0)


#define DC_PC_TOTA_IDL_NUM_1                                                         0x98008048
#define DC_PC_TOTA_IDL_NUM_1_reg_addr                                                "0xD8008048"
#define DC_PC_TOTA_IDL_NUM_1_reg                                                     0xD8008048
#define set_DC_PC_TOTA_IDL_NUM_1_reg(data)   (*((volatile unsigned int*) DC_PC_TOTA_IDL_NUM_1_reg)=data)
#define get_DC_PC_TOTA_IDL_NUM_1_reg   (*((volatile unsigned int*) DC_PC_TOTA_IDL_NUM_1_reg))
#define DC_PC_TOTA_IDL_NUM_1_inst_adr                                                "0x0012"
#define DC_PC_TOTA_IDL_NUM_1_inst                                                    0x0012
#define DC_PC_TOTA_IDL_NUM_1_pc_tota_idl_num_shift                                   (0)
#define DC_PC_TOTA_IDL_NUM_1_pc_tota_idl_num_mask                                    (0xFFFFFFFF)
#define DC_PC_TOTA_IDL_NUM_1_pc_tota_idl_num(data)                                   (0xFFFFFFFF&((data)<<0))
#define DC_PC_TOTA_IDL_NUM_1_pc_tota_idl_num_src(data)                               ((0xFFFFFFFF&(data))>>0)
#define DC_PC_TOTA_IDL_NUM_1_get_pc_tota_idl_num(data)                               ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_CTRL                                                         0x98008050
#define DC_PC_SYSH_PROG_CTRL_reg_addr                                                "0xD8008050"
#define DC_PC_SYSH_PROG_CTRL_reg                                                     0xD8008050
#define set_DC_PC_SYSH_PROG_CTRL_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_CTRL_reg)=data)
#define get_DC_PC_SYSH_PROG_CTRL_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_CTRL_reg))
#define DC_PC_SYSH_PROG_CTRL_inst_adr                                                "0x0014"
#define DC_PC_SYSH_PROG_CTRL_inst                                                    0x0014
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog2_dc_sel_shift                              (23)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog2_dc_sel_mask                               (0x00800000)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog2_dc_sel(data)                              (0x00800000&((data)<<23))
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog2_dc_sel_src(data)                          ((0x00800000&(data))>>23)
#define DC_PC_SYSH_PROG_CTRL_get_pc_sysh_prog2_dc_sel(data)                          ((0x00800000&(data))>>23)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog2_sel_shift                                 (16)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog2_sel_mask                                  (0x007F0000)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog2_sel(data)                                 (0x007F0000&((data)<<16))
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog2_sel_src(data)                             ((0x007F0000&(data))>>16)
#define DC_PC_SYSH_PROG_CTRL_get_pc_sysh_prog2_sel(data)                             ((0x007F0000&(data))>>16)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog1_dc_sel_shift                              (15)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog1_dc_sel_mask                               (0x00008000)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog1_dc_sel(data)                              (0x00008000&((data)<<15))
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog1_dc_sel_src(data)                          ((0x00008000&(data))>>15)
#define DC_PC_SYSH_PROG_CTRL_get_pc_sysh_prog1_dc_sel(data)                          ((0x00008000&(data))>>15)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog1_sel_shift                                 (8)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog1_sel_mask                                  (0x00007F00)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog1_sel(data)                                 (0x00007F00&((data)<<8))
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog1_sel_src(data)                             ((0x00007F00&(data))>>8)
#define DC_PC_SYSH_PROG_CTRL_get_pc_sysh_prog1_sel(data)                             ((0x00007F00&(data))>>8)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog0_dc_sel_shift                              (7)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog0_dc_sel_mask                               (0x00000080)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog0_dc_sel(data)                              (0x00000080&((data)<<7))
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog0_dc_sel_src(data)                          ((0x00000080&(data))>>7)
#define DC_PC_SYSH_PROG_CTRL_get_pc_sysh_prog0_dc_sel(data)                          ((0x00000080&(data))>>7)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog0_sel_shift                                 (0)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog0_sel_mask                                  (0x0000007F)
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog0_sel(data)                                 (0x0000007F&((data)<<0))
#define DC_PC_SYSH_PROG_CTRL_pc_sysh_prog0_sel_src(data)                             ((0x0000007F&(data))>>0)
#define DC_PC_SYSH_PROG_CTRL_get_pc_sysh_prog0_sel(data)                             ((0x0000007F&(data))>>0)


#define DC_PC_SYSH_PROG_CTRL_2                                                       0x98008500
#define DC_PC_SYSH_PROG_CTRL_2_reg_addr                                              "0xD8008500"
#define DC_PC_SYSH_PROG_CTRL_2_reg                                                   0xD8008500
#define set_DC_PC_SYSH_PROG_CTRL_2_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_CTRL_2_reg)=data)
#define get_DC_PC_SYSH_PROG_CTRL_2_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_CTRL_2_reg))
#define DC_PC_SYSH_PROG_CTRL_2_inst_adr                                              "0x0040"
#define DC_PC_SYSH_PROG_CTRL_2_inst                                                  0x0040
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog5_dc_sel_shift                            (23)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog5_dc_sel_mask                             (0x00800000)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog5_dc_sel(data)                            (0x00800000&((data)<<23))
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog5_dc_sel_src(data)                        ((0x00800000&(data))>>23)
#define DC_PC_SYSH_PROG_CTRL_2_get_pc_sysh_prog5_dc_sel(data)                        ((0x00800000&(data))>>23)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog5_sel_shift                               (16)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog5_sel_mask                                (0x007F0000)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog5_sel(data)                               (0x007F0000&((data)<<16))
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog5_sel_src(data)                           ((0x007F0000&(data))>>16)
#define DC_PC_SYSH_PROG_CTRL_2_get_pc_sysh_prog5_sel(data)                           ((0x007F0000&(data))>>16)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog4_dc_sel_shift                            (15)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog4_dc_sel_mask                             (0x00008000)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog4_dc_sel(data)                            (0x00008000&((data)<<15))
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog4_dc_sel_src(data)                        ((0x00008000&(data))>>15)
#define DC_PC_SYSH_PROG_CTRL_2_get_pc_sysh_prog4_dc_sel(data)                        ((0x00008000&(data))>>15)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog4_sel_shift                               (8)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog4_sel_mask                                (0x00007F00)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog4_sel(data)                               (0x00007F00&((data)<<8))
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog4_sel_src(data)                           ((0x00007F00&(data))>>8)
#define DC_PC_SYSH_PROG_CTRL_2_get_pc_sysh_prog4_sel(data)                           ((0x00007F00&(data))>>8)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog3_dc_sel_shift                            (7)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog3_dc_sel_mask                             (0x00000080)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog3_dc_sel(data)                            (0x00000080&((data)<<7))
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog3_dc_sel_src(data)                        ((0x00000080&(data))>>7)
#define DC_PC_SYSH_PROG_CTRL_2_get_pc_sysh_prog3_dc_sel(data)                        ((0x00000080&(data))>>7)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog3_sel_shift                               (0)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog3_sel_mask                                (0x0000007F)
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog3_sel(data)                               (0x0000007F&((data)<<0))
#define DC_PC_SYSH_PROG_CTRL_2_pc_sysh_prog3_sel_src(data)                           ((0x0000007F&(data))>>0)
#define DC_PC_SYSH_PROG_CTRL_2_get_pc_sysh_prog3_sel(data)                           ((0x0000007F&(data))>>0)


#define DC_PC_SYSH_PROG_CTRL_3                                                       0x98008504
#define DC_PC_SYSH_PROG_CTRL_3_reg_addr                                              "0xD8008504"
#define DC_PC_SYSH_PROG_CTRL_3_reg                                                   0xD8008504
#define set_DC_PC_SYSH_PROG_CTRL_3_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_CTRL_3_reg)=data)
#define get_DC_PC_SYSH_PROG_CTRL_3_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_CTRL_3_reg))
#define DC_PC_SYSH_PROG_CTRL_3_inst_adr                                              "0x0041"
#define DC_PC_SYSH_PROG_CTRL_3_inst                                                  0x0041
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog7_dc_sel_shift                            (15)
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog7_dc_sel_mask                             (0x00008000)
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog7_dc_sel(data)                            (0x00008000&((data)<<15))
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog7_dc_sel_src(data)                        ((0x00008000&(data))>>15)
#define DC_PC_SYSH_PROG_CTRL_3_get_pc_sysh_prog7_dc_sel(data)                        ((0x00008000&(data))>>15)
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog7_sel_shift                               (8)
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog7_sel_mask                                (0x00007F00)
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog7_sel(data)                               (0x00007F00&((data)<<8))
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog7_sel_src(data)                           ((0x00007F00&(data))>>8)
#define DC_PC_SYSH_PROG_CTRL_3_get_pc_sysh_prog7_sel(data)                           ((0x00007F00&(data))>>8)
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog6_dc_sel_shift                            (7)
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog6_dc_sel_mask                             (0x00000080)
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog6_dc_sel(data)                            (0x00000080&((data)<<7))
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog6_dc_sel_src(data)                        ((0x00000080&(data))>>7)
#define DC_PC_SYSH_PROG_CTRL_3_get_pc_sysh_prog6_dc_sel(data)                        ((0x00000080&(data))>>7)
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog6_sel_shift                               (0)
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog6_sel_mask                                (0x0000007F)
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog6_sel(data)                               (0x0000007F&((data)<<0))
#define DC_PC_SYSH_PROG_CTRL_3_pc_sysh_prog6_sel_src(data)                           ((0x0000007F&(data))>>0)
#define DC_PC_SYSH_PROG_CTRL_3_get_pc_sysh_prog6_sel(data)                           ((0x0000007F&(data))>>0)


#define DC_PC_SYS_PROG_CTRL                                                          0x98008054
#define DC_PC_SYS_PROG_CTRL_reg_addr                                                 "0xD8008054"
#define DC_PC_SYS_PROG_CTRL_reg                                                      0xD8008054
#define set_DC_PC_SYS_PROG_CTRL_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_CTRL_reg)=data)
#define get_DC_PC_SYS_PROG_CTRL_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_CTRL_reg))
#define DC_PC_SYS_PROG_CTRL_inst_adr                                                 "0x0015"
#define DC_PC_SYS_PROG_CTRL_inst                                                     0x0015
#define DC_PC_SYS_PROG_CTRL_pc_sys_prog2_sel_shift                                   (16)
#define DC_PC_SYS_PROG_CTRL_pc_sys_prog2_sel_mask                                    (0x007F0000)
#define DC_PC_SYS_PROG_CTRL_pc_sys_prog2_sel(data)                                   (0x007F0000&((data)<<16))
#define DC_PC_SYS_PROG_CTRL_pc_sys_prog2_sel_src(data)                               ((0x007F0000&(data))>>16)
#define DC_PC_SYS_PROG_CTRL_get_pc_sys_prog2_sel(data)                               ((0x007F0000&(data))>>16)
#define DC_PC_SYS_PROG_CTRL_pc_sys_prog1_sel_shift                                   (8)
#define DC_PC_SYS_PROG_CTRL_pc_sys_prog1_sel_mask                                    (0x00007F00)
#define DC_PC_SYS_PROG_CTRL_pc_sys_prog1_sel(data)                                   (0x00007F00&((data)<<8))
#define DC_PC_SYS_PROG_CTRL_pc_sys_prog1_sel_src(data)                               ((0x00007F00&(data))>>8)
#define DC_PC_SYS_PROG_CTRL_get_pc_sys_prog1_sel(data)                               ((0x00007F00&(data))>>8)
#define DC_PC_SYS_PROG_CTRL_pc_sys_prog0_sel_shift                                   (0)
#define DC_PC_SYS_PROG_CTRL_pc_sys_prog0_sel_mask                                    (0x0000007F)
#define DC_PC_SYS_PROG_CTRL_pc_sys_prog0_sel(data)                                   (0x0000007F&((data)<<0))
#define DC_PC_SYS_PROG_CTRL_pc_sys_prog0_sel_src(data)                               ((0x0000007F&(data))>>0)
#define DC_PC_SYS_PROG_CTRL_get_pc_sys_prog0_sel(data)                               ((0x0000007F&(data))>>0)


#define DC_PC_SYSH_PROG_0_ACC_LAT                                                    0x98008060
#define DC_PC_SYSH_PROG_0_ACC_LAT_reg_addr                                           "0xD8008060"
#define DC_PC_SYSH_PROG_0_ACC_LAT_reg                                                0xD8008060
#define set_DC_PC_SYSH_PROG_0_ACC_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_0_ACC_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_0_ACC_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_0_ACC_LAT_reg))
#define DC_PC_SYSH_PROG_0_ACC_LAT_inst_adr                                           "0x0018"
#define DC_PC_SYSH_PROG_0_ACC_LAT_inst                                               0x0018
#define DC_PC_SYSH_PROG_0_ACC_LAT_sysh_prog0_acc_lat_shift                           (0)
#define DC_PC_SYSH_PROG_0_ACC_LAT_sysh_prog0_acc_lat_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_0_ACC_LAT_sysh_prog0_acc_lat(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_0_ACC_LAT_sysh_prog0_acc_lat_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_0_ACC_LAT_get_sysh_prog0_acc_lat(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_0_MAX_LAT                                                    0x98008064
#define DC_PC_SYSH_PROG_0_MAX_LAT_reg_addr                                           "0xD8008064"
#define DC_PC_SYSH_PROG_0_MAX_LAT_reg                                                0xD8008064
#define set_DC_PC_SYSH_PROG_0_MAX_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_0_MAX_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_0_MAX_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_0_MAX_LAT_reg))
#define DC_PC_SYSH_PROG_0_MAX_LAT_inst_adr                                           "0x0019"
#define DC_PC_SYSH_PROG_0_MAX_LAT_inst                                               0x0019
#define DC_PC_SYSH_PROG_0_MAX_LAT_sysh_prog0_max_lat_shift                           (0)
#define DC_PC_SYSH_PROG_0_MAX_LAT_sysh_prog0_max_lat_mask                            (0x0000FFFF)
#define DC_PC_SYSH_PROG_0_MAX_LAT_sysh_prog0_max_lat(data)                           (0x0000FFFF&((data)<<0))
#define DC_PC_SYSH_PROG_0_MAX_LAT_sysh_prog0_max_lat_src(data)                       ((0x0000FFFF&(data))>>0)
#define DC_PC_SYSH_PROG_0_MAX_LAT_get_sysh_prog0_max_lat(data)                       ((0x0000FFFF&(data))>>0)


#define DC_PC_SYSH_PROG_0_REQ_NUM                                                    0x98008068
#define DC_PC_SYSH_PROG_0_REQ_NUM_reg_addr                                           "0xD8008068"
#define DC_PC_SYSH_PROG_0_REQ_NUM_reg                                                0xD8008068
#define set_DC_PC_SYSH_PROG_0_REQ_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_0_REQ_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_0_REQ_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_0_REQ_NUM_reg))
#define DC_PC_SYSH_PROG_0_REQ_NUM_inst_adr                                           "0x001A"
#define DC_PC_SYSH_PROG_0_REQ_NUM_inst                                               0x001A
#define DC_PC_SYSH_PROG_0_REQ_NUM_sysh_prog0_req_num_shift                           (0)
#define DC_PC_SYSH_PROG_0_REQ_NUM_sysh_prog0_req_num_mask                            (0x00FFFFFF)
#define DC_PC_SYSH_PROG_0_REQ_NUM_sysh_prog0_req_num(data)                           (0x00FFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_0_REQ_NUM_sysh_prog0_req_num_src(data)                       ((0x00FFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_0_REQ_NUM_get_sysh_prog0_req_num(data)                       ((0x00FFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_0_ACK_NUM                                                    0x9800806C
#define DC_PC_SYSH_PROG_0_ACK_NUM_reg_addr                                           "0xD800806C"
#define DC_PC_SYSH_PROG_0_ACK_NUM_reg                                                0xD800806C
#define set_DC_PC_SYSH_PROG_0_ACK_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_0_ACK_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_0_ACK_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_0_ACK_NUM_reg))
#define DC_PC_SYSH_PROG_0_ACK_NUM_inst_adr                                           "0x001B"
#define DC_PC_SYSH_PROG_0_ACK_NUM_inst                                               0x001B
#define DC_PC_SYSH_PROG_0_ACK_NUM_sysh_prog0_ack_num_shift                           (0)
#define DC_PC_SYSH_PROG_0_ACK_NUM_sysh_prog0_ack_num_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_0_ACK_NUM_sysh_prog0_ack_num(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_0_ACK_NUM_sysh_prog0_ack_num_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_0_ACK_NUM_get_sysh_prog0_ack_num(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_1_ACC_LAT                                                    0x98008070
#define DC_PC_SYSH_PROG_1_ACC_LAT_reg_addr                                           "0xD8008070"
#define DC_PC_SYSH_PROG_1_ACC_LAT_reg                                                0xD8008070
#define set_DC_PC_SYSH_PROG_1_ACC_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_1_ACC_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_1_ACC_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_1_ACC_LAT_reg))
#define DC_PC_SYSH_PROG_1_ACC_LAT_inst_adr                                           "0x001C"
#define DC_PC_SYSH_PROG_1_ACC_LAT_inst                                               0x001C
#define DC_PC_SYSH_PROG_1_ACC_LAT_sysh_prog1_acc_lat_shift                           (0)
#define DC_PC_SYSH_PROG_1_ACC_LAT_sysh_prog1_acc_lat_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_1_ACC_LAT_sysh_prog1_acc_lat(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_1_ACC_LAT_sysh_prog1_acc_lat_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_1_ACC_LAT_get_sysh_prog1_acc_lat(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_1_MAX_LAT                                                    0x98008074
#define DC_PC_SYSH_PROG_1_MAX_LAT_reg_addr                                           "0xD8008074"
#define DC_PC_SYSH_PROG_1_MAX_LAT_reg                                                0xD8008074
#define set_DC_PC_SYSH_PROG_1_MAX_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_1_MAX_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_1_MAX_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_1_MAX_LAT_reg))
#define DC_PC_SYSH_PROG_1_MAX_LAT_inst_adr                                           "0x001D"
#define DC_PC_SYSH_PROG_1_MAX_LAT_inst                                               0x001D
#define DC_PC_SYSH_PROG_1_MAX_LAT_sysh_prog1_max_lat_shift                           (0)
#define DC_PC_SYSH_PROG_1_MAX_LAT_sysh_prog1_max_lat_mask                            (0x0000FFFF)
#define DC_PC_SYSH_PROG_1_MAX_LAT_sysh_prog1_max_lat(data)                           (0x0000FFFF&((data)<<0))
#define DC_PC_SYSH_PROG_1_MAX_LAT_sysh_prog1_max_lat_src(data)                       ((0x0000FFFF&(data))>>0)
#define DC_PC_SYSH_PROG_1_MAX_LAT_get_sysh_prog1_max_lat(data)                       ((0x0000FFFF&(data))>>0)


#define DC_PC_SYSH_PROG_1_REQ_NUM                                                    0x98008078
#define DC_PC_SYSH_PROG_1_REQ_NUM_reg_addr                                           "0xD8008078"
#define DC_PC_SYSH_PROG_1_REQ_NUM_reg                                                0xD8008078
#define set_DC_PC_SYSH_PROG_1_REQ_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_1_REQ_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_1_REQ_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_1_REQ_NUM_reg))
#define DC_PC_SYSH_PROG_1_REQ_NUM_inst_adr                                           "0x001E"
#define DC_PC_SYSH_PROG_1_REQ_NUM_inst                                               0x001E
#define DC_PC_SYSH_PROG_1_REQ_NUM_sysh_prog1_req_num_shift                           (0)
#define DC_PC_SYSH_PROG_1_REQ_NUM_sysh_prog1_req_num_mask                            (0x00FFFFFF)
#define DC_PC_SYSH_PROG_1_REQ_NUM_sysh_prog1_req_num(data)                           (0x00FFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_1_REQ_NUM_sysh_prog1_req_num_src(data)                       ((0x00FFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_1_REQ_NUM_get_sysh_prog1_req_num(data)                       ((0x00FFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_1_ACK_NUM                                                    0x9800807C
#define DC_PC_SYSH_PROG_1_ACK_NUM_reg_addr                                           "0xD800807C"
#define DC_PC_SYSH_PROG_1_ACK_NUM_reg                                                0xD800807C
#define set_DC_PC_SYSH_PROG_1_ACK_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_1_ACK_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_1_ACK_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_1_ACK_NUM_reg))
#define DC_PC_SYSH_PROG_1_ACK_NUM_inst_adr                                           "0x001F"
#define DC_PC_SYSH_PROG_1_ACK_NUM_inst                                               0x001F
#define DC_PC_SYSH_PROG_1_ACK_NUM_sysh_prog1_ack_num_shift                           (0)
#define DC_PC_SYSH_PROG_1_ACK_NUM_sysh_prog1_ack_num_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_1_ACK_NUM_sysh_prog1_ack_num(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_1_ACK_NUM_sysh_prog1_ack_num_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_1_ACK_NUM_get_sysh_prog1_ack_num(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_2_ACC_LAT                                                    0x98008080
#define DC_PC_SYSH_PROG_2_ACC_LAT_reg_addr                                           "0xD8008080"
#define DC_PC_SYSH_PROG_2_ACC_LAT_reg                                                0xD8008080
#define set_DC_PC_SYSH_PROG_2_ACC_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_2_ACC_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_2_ACC_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_2_ACC_LAT_reg))
#define DC_PC_SYSH_PROG_2_ACC_LAT_inst_adr                                           "0x0020"
#define DC_PC_SYSH_PROG_2_ACC_LAT_inst                                               0x0020
#define DC_PC_SYSH_PROG_2_ACC_LAT_sysh_prog2_acc_lat_shift                           (0)
#define DC_PC_SYSH_PROG_2_ACC_LAT_sysh_prog2_acc_lat_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_2_ACC_LAT_sysh_prog2_acc_lat(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_2_ACC_LAT_sysh_prog2_acc_lat_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_2_ACC_LAT_get_sysh_prog2_acc_lat(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_2_MAX_LAT                                                    0x98008084
#define DC_PC_SYSH_PROG_2_MAX_LAT_reg_addr                                           "0xD8008084"
#define DC_PC_SYSH_PROG_2_MAX_LAT_reg                                                0xD8008084
#define set_DC_PC_SYSH_PROG_2_MAX_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_2_MAX_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_2_MAX_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_2_MAX_LAT_reg))
#define DC_PC_SYSH_PROG_2_MAX_LAT_inst_adr                                           "0x0021"
#define DC_PC_SYSH_PROG_2_MAX_LAT_inst                                               0x0021
#define DC_PC_SYSH_PROG_2_MAX_LAT_sysh_prog2_max_lat_shift                           (0)
#define DC_PC_SYSH_PROG_2_MAX_LAT_sysh_prog2_max_lat_mask                            (0x0000FFFF)
#define DC_PC_SYSH_PROG_2_MAX_LAT_sysh_prog2_max_lat(data)                           (0x0000FFFF&((data)<<0))
#define DC_PC_SYSH_PROG_2_MAX_LAT_sysh_prog2_max_lat_src(data)                       ((0x0000FFFF&(data))>>0)
#define DC_PC_SYSH_PROG_2_MAX_LAT_get_sysh_prog2_max_lat(data)                       ((0x0000FFFF&(data))>>0)


#define DC_PC_SYSH_PROG_2_REQ_NUM                                                    0x98008088
#define DC_PC_SYSH_PROG_2_REQ_NUM_reg_addr                                           "0xD8008088"
#define DC_PC_SYSH_PROG_2_REQ_NUM_reg                                                0xD8008088
#define set_DC_PC_SYSH_PROG_2_REQ_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_2_REQ_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_2_REQ_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_2_REQ_NUM_reg))
#define DC_PC_SYSH_PROG_2_REQ_NUM_inst_adr                                           "0x0022"
#define DC_PC_SYSH_PROG_2_REQ_NUM_inst                                               0x0022
#define DC_PC_SYSH_PROG_2_REQ_NUM_sysh_prog2_req_num_shift                           (0)
#define DC_PC_SYSH_PROG_2_REQ_NUM_sysh_prog2_req_num_mask                            (0x00FFFFFF)
#define DC_PC_SYSH_PROG_2_REQ_NUM_sysh_prog2_req_num(data)                           (0x00FFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_2_REQ_NUM_sysh_prog2_req_num_src(data)                       ((0x00FFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_2_REQ_NUM_get_sysh_prog2_req_num(data)                       ((0x00FFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_2_ACK_NUM                                                    0x9800808C
#define DC_PC_SYSH_PROG_2_ACK_NUM_reg_addr                                           "0xD800808C"
#define DC_PC_SYSH_PROG_2_ACK_NUM_reg                                                0xD800808C
#define set_DC_PC_SYSH_PROG_2_ACK_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_2_ACK_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_2_ACK_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_2_ACK_NUM_reg))
#define DC_PC_SYSH_PROG_2_ACK_NUM_inst_adr                                           "0x0023"
#define DC_PC_SYSH_PROG_2_ACK_NUM_inst                                               0x0023
#define DC_PC_SYSH_PROG_2_ACK_NUM_sysh_prog2_ack_num_shift                           (0)
#define DC_PC_SYSH_PROG_2_ACK_NUM_sysh_prog2_ack_num_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_2_ACK_NUM_sysh_prog2_ack_num(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_2_ACK_NUM_sysh_prog2_ack_num_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_2_ACK_NUM_get_sysh_prog2_ack_num(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_3_ACC_LAT                                                    0x18008510
#define DC_PC_SYSH_PROG_3_ACC_LAT_reg_addr                                           "0xD8008510"
#define DC_PC_SYSH_PROG_3_ACC_LAT_reg                                                0xD8008510
#define set_DC_PC_SYSH_PROG_3_ACC_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_3_ACC_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_3_ACC_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_3_ACC_LAT_reg))
#define DC_PC_SYSH_PROG_3_ACC_LAT_inst_adr                                           "0x0044"
#define DC_PC_SYSH_PROG_3_ACC_LAT_inst                                               0x0044
#define DC_PC_SYSH_PROG_3_ACC_LAT_sysh_prog3_acc_lat_shift                           (0)
#define DC_PC_SYSH_PROG_3_ACC_LAT_sysh_prog3_acc_lat_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_3_ACC_LAT_sysh_prog3_acc_lat(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_3_ACC_LAT_sysh_prog3_acc_lat_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_3_ACC_LAT_get_sysh_prog3_acc_lat(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_3_MAX_LAT                                                    0x18008514
#define DC_PC_SYSH_PROG_3_MAX_LAT_reg_addr                                           "0xD8008514"
#define DC_PC_SYSH_PROG_3_MAX_LAT_reg                                                0xD8008514
#define set_DC_PC_SYSH_PROG_3_MAX_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_3_MAX_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_3_MAX_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_3_MAX_LAT_reg))
#define DC_PC_SYSH_PROG_3_MAX_LAT_inst_adr                                           "0x0045"
#define DC_PC_SYSH_PROG_3_MAX_LAT_inst                                               0x0045
#define DC_PC_SYSH_PROG_3_MAX_LAT_sysh_prog3_max_lat_shift                           (0)
#define DC_PC_SYSH_PROG_3_MAX_LAT_sysh_prog3_max_lat_mask                            (0x0000FFFF)
#define DC_PC_SYSH_PROG_3_MAX_LAT_sysh_prog3_max_lat(data)                           (0x0000FFFF&((data)<<0))
#define DC_PC_SYSH_PROG_3_MAX_LAT_sysh_prog3_max_lat_src(data)                       ((0x0000FFFF&(data))>>0)
#define DC_PC_SYSH_PROG_3_MAX_LAT_get_sysh_prog3_max_lat(data)                       ((0x0000FFFF&(data))>>0)


#define DC_PC_SYSH_PROG_3_REQ_NUM                                                    0x18008518
#define DC_PC_SYSH_PROG_3_REQ_NUM_reg_addr                                           "0xD8008518"
#define DC_PC_SYSH_PROG_3_REQ_NUM_reg                                                0xD8008518
#define set_DC_PC_SYSH_PROG_3_REQ_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_3_REQ_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_3_REQ_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_3_REQ_NUM_reg))
#define DC_PC_SYSH_PROG_3_REQ_NUM_inst_adr                                           "0x0046"
#define DC_PC_SYSH_PROG_3_REQ_NUM_inst                                               0x0046
#define DC_PC_SYSH_PROG_3_REQ_NUM_sysh_prog3_req_num_shift                           (0)
#define DC_PC_SYSH_PROG_3_REQ_NUM_sysh_prog3_req_num_mask                            (0x00FFFFFF)
#define DC_PC_SYSH_PROG_3_REQ_NUM_sysh_prog3_req_num(data)                           (0x00FFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_3_REQ_NUM_sysh_prog3_req_num_src(data)                       ((0x00FFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_3_REQ_NUM_get_sysh_prog3_req_num(data)                       ((0x00FFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_3_ACK_NUM                                                    0x1800851C
#define DC_PC_SYSH_PROG_3_ACK_NUM_reg_addr                                           "0xD800851C"
#define DC_PC_SYSH_PROG_3_ACK_NUM_reg                                                0xD800851C
#define set_DC_PC_SYSH_PROG_3_ACK_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_3_ACK_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_3_ACK_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_3_ACK_NUM_reg))
#define DC_PC_SYSH_PROG_3_ACK_NUM_inst_adr                                           "0x0047"
#define DC_PC_SYSH_PROG_3_ACK_NUM_inst                                               0x0047
#define DC_PC_SYSH_PROG_3_ACK_NUM_sysh_prog3_ack_num_shift                           (0)
#define DC_PC_SYSH_PROG_3_ACK_NUM_sysh_prog3_ack_num_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_3_ACK_NUM_sysh_prog3_ack_num(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_3_ACK_NUM_sysh_prog3_ack_num_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_3_ACK_NUM_get_sysh_prog3_ack_num(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_4_ACC_LAT                                                    0x18008520
#define DC_PC_SYSH_PROG_4_ACC_LAT_reg_addr                                           "0xD8008520"
#define DC_PC_SYSH_PROG_4_ACC_LAT_reg                                                0xD8008520
#define set_DC_PC_SYSH_PROG_4_ACC_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_4_ACC_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_4_ACC_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_4_ACC_LAT_reg))
#define DC_PC_SYSH_PROG_4_ACC_LAT_inst_adr                                           "0x0048"
#define DC_PC_SYSH_PROG_4_ACC_LAT_inst                                               0x0048
#define DC_PC_SYSH_PROG_4_ACC_LAT_sysh_prog4_acc_lat_shift                           (0)
#define DC_PC_SYSH_PROG_4_ACC_LAT_sysh_prog4_acc_lat_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_4_ACC_LAT_sysh_prog4_acc_lat(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_4_ACC_LAT_sysh_prog4_acc_lat_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_4_ACC_LAT_get_sysh_prog4_acc_lat(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_4_MAX_LAT                                                    0x18008524
#define DC_PC_SYSH_PROG_4_MAX_LAT_reg_addr                                           "0xD8008524"
#define DC_PC_SYSH_PROG_4_MAX_LAT_reg                                                0xD8008524
#define set_DC_PC_SYSH_PROG_4_MAX_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_4_MAX_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_4_MAX_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_4_MAX_LAT_reg))
#define DC_PC_SYSH_PROG_4_MAX_LAT_inst_adr                                           "0x0049"
#define DC_PC_SYSH_PROG_4_MAX_LAT_inst                                               0x0049
#define DC_PC_SYSH_PROG_4_MAX_LAT_sysh_prog4_max_lat_shift                           (0)
#define DC_PC_SYSH_PROG_4_MAX_LAT_sysh_prog4_max_lat_mask                            (0x0000FFFF)
#define DC_PC_SYSH_PROG_4_MAX_LAT_sysh_prog4_max_lat(data)                           (0x0000FFFF&((data)<<0))
#define DC_PC_SYSH_PROG_4_MAX_LAT_sysh_prog4_max_lat_src(data)                       ((0x0000FFFF&(data))>>0)
#define DC_PC_SYSH_PROG_4_MAX_LAT_get_sysh_prog4_max_lat(data)                       ((0x0000FFFF&(data))>>0)


#define DC_PC_SYSH_PROG_4_REQ_NUM                                                    0x18008528
#define DC_PC_SYSH_PROG_4_REQ_NUM_reg_addr                                           "0xD8008528"
#define DC_PC_SYSH_PROG_4_REQ_NUM_reg                                                0xD8008528
#define set_DC_PC_SYSH_PROG_4_REQ_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_4_REQ_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_4_REQ_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_4_REQ_NUM_reg))
#define DC_PC_SYSH_PROG_4_REQ_NUM_inst_adr                                           "0x004A"
#define DC_PC_SYSH_PROG_4_REQ_NUM_inst                                               0x004A
#define DC_PC_SYSH_PROG_4_REQ_NUM_sysh_prog4_req_num_shift                           (0)
#define DC_PC_SYSH_PROG_4_REQ_NUM_sysh_prog4_req_num_mask                            (0x00FFFFFF)
#define DC_PC_SYSH_PROG_4_REQ_NUM_sysh_prog4_req_num(data)                           (0x00FFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_4_REQ_NUM_sysh_prog4_req_num_src(data)                       ((0x00FFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_4_REQ_NUM_get_sysh_prog4_req_num(data)                       ((0x00FFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_4_ACK_NUM                                                    0x1800852C
#define DC_PC_SYSH_PROG_4_ACK_NUM_reg_addr                                           "0xD800852C"
#define DC_PC_SYSH_PROG_4_ACK_NUM_reg                                                0xD800852C
#define set_DC_PC_SYSH_PROG_4_ACK_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_4_ACK_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_4_ACK_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_4_ACK_NUM_reg))
#define DC_PC_SYSH_PROG_4_ACK_NUM_inst_adr                                           "0x004B"
#define DC_PC_SYSH_PROG_4_ACK_NUM_inst                                               0x004B
#define DC_PC_SYSH_PROG_4_ACK_NUM_sysh_prog4_ack_num_shift                           (0)
#define DC_PC_SYSH_PROG_4_ACK_NUM_sysh_prog4_ack_num_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_4_ACK_NUM_sysh_prog4_ack_num(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_4_ACK_NUM_sysh_prog4_ack_num_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_4_ACK_NUM_get_sysh_prog4_ack_num(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_5_ACC_LAT                                                    0x18008530
#define DC_PC_SYSH_PROG_5_ACC_LAT_reg_addr                                           "0xD8008530"
#define DC_PC_SYSH_PROG_5_ACC_LAT_reg                                                0xD8008530
#define set_DC_PC_SYSH_PROG_5_ACC_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_5_ACC_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_5_ACC_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_5_ACC_LAT_reg))
#define DC_PC_SYSH_PROG_5_ACC_LAT_inst_adr                                           "0x004C"
#define DC_PC_SYSH_PROG_5_ACC_LAT_inst                                               0x004C
#define DC_PC_SYSH_PROG_5_ACC_LAT_sysh_prog5_acc_lat_shift                           (0)
#define DC_PC_SYSH_PROG_5_ACC_LAT_sysh_prog5_acc_lat_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_5_ACC_LAT_sysh_prog5_acc_lat(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_5_ACC_LAT_sysh_prog5_acc_lat_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_5_ACC_LAT_get_sysh_prog5_acc_lat(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_5_MAX_LAT                                                    0x18008534
#define DC_PC_SYSH_PROG_5_MAX_LAT_reg_addr                                           "0xD8008534"
#define DC_PC_SYSH_PROG_5_MAX_LAT_reg                                                0xD8008534
#define set_DC_PC_SYSH_PROG_5_MAX_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_5_MAX_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_5_MAX_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_5_MAX_LAT_reg))
#define DC_PC_SYSH_PROG_5_MAX_LAT_inst_adr                                           "0x004D"
#define DC_PC_SYSH_PROG_5_MAX_LAT_inst                                               0x004D
#define DC_PC_SYSH_PROG_5_MAX_LAT_sysh_prog5_max_lat_shift                           (0)
#define DC_PC_SYSH_PROG_5_MAX_LAT_sysh_prog5_max_lat_mask                            (0x0000FFFF)
#define DC_PC_SYSH_PROG_5_MAX_LAT_sysh_prog5_max_lat(data)                           (0x0000FFFF&((data)<<0))
#define DC_PC_SYSH_PROG_5_MAX_LAT_sysh_prog5_max_lat_src(data)                       ((0x0000FFFF&(data))>>0)
#define DC_PC_SYSH_PROG_5_MAX_LAT_get_sysh_prog5_max_lat(data)                       ((0x0000FFFF&(data))>>0)


#define DC_PC_SYSH_PROG_5_REQ_NUM                                                    0x18008538
#define DC_PC_SYSH_PROG_5_REQ_NUM_reg_addr                                           "0xD8008538"
#define DC_PC_SYSH_PROG_5_REQ_NUM_reg                                                0xD8008538
#define set_DC_PC_SYSH_PROG_5_REQ_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_5_REQ_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_5_REQ_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_5_REQ_NUM_reg))
#define DC_PC_SYSH_PROG_5_REQ_NUM_inst_adr                                           "0x004E"
#define DC_PC_SYSH_PROG_5_REQ_NUM_inst                                               0x004E
#define DC_PC_SYSH_PROG_5_REQ_NUM_sysh_prog5_req_num_shift                           (0)
#define DC_PC_SYSH_PROG_5_REQ_NUM_sysh_prog5_req_num_mask                            (0x00FFFFFF)
#define DC_PC_SYSH_PROG_5_REQ_NUM_sysh_prog5_req_num(data)                           (0x00FFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_5_REQ_NUM_sysh_prog5_req_num_src(data)                       ((0x00FFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_5_REQ_NUM_get_sysh_prog5_req_num(data)                       ((0x00FFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_5_ACK_NUM                                                    0x1800853C
#define DC_PC_SYSH_PROG_5_ACK_NUM_reg_addr                                           "0xD800853C"
#define DC_PC_SYSH_PROG_5_ACK_NUM_reg                                                0xD800853C
#define set_DC_PC_SYSH_PROG_5_ACK_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_5_ACK_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_5_ACK_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_5_ACK_NUM_reg))
#define DC_PC_SYSH_PROG_5_ACK_NUM_inst_adr                                           "0x004F"
#define DC_PC_SYSH_PROG_5_ACK_NUM_inst                                               0x004F
#define DC_PC_SYSH_PROG_5_ACK_NUM_sysh_prog5_ack_num_shift                           (0)
#define DC_PC_SYSH_PROG_5_ACK_NUM_sysh_prog5_ack_num_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_5_ACK_NUM_sysh_prog5_ack_num(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_5_ACK_NUM_sysh_prog5_ack_num_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_5_ACK_NUM_get_sysh_prog5_ack_num(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_6_ACC_LAT                                                    0x18008540
#define DC_PC_SYSH_PROG_6_ACC_LAT_reg_addr                                           "0xD8008540"
#define DC_PC_SYSH_PROG_6_ACC_LAT_reg                                                0xD8008540
#define set_DC_PC_SYSH_PROG_6_ACC_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_6_ACC_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_6_ACC_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_6_ACC_LAT_reg))
#define DC_PC_SYSH_PROG_6_ACC_LAT_inst_adr                                           "0x0050"
#define DC_PC_SYSH_PROG_6_ACC_LAT_inst                                               0x0050
#define DC_PC_SYSH_PROG_6_ACC_LAT_sysh_prog6_acc_lat_shift                           (0)
#define DC_PC_SYSH_PROG_6_ACC_LAT_sysh_prog6_acc_lat_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_6_ACC_LAT_sysh_prog6_acc_lat(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_6_ACC_LAT_sysh_prog6_acc_lat_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_6_ACC_LAT_get_sysh_prog6_acc_lat(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_6_MAX_LAT                                                    0x18008544
#define DC_PC_SYSH_PROG_6_MAX_LAT_reg_addr                                           "0xD8008544"
#define DC_PC_SYSH_PROG_6_MAX_LAT_reg                                                0xD8008544
#define set_DC_PC_SYSH_PROG_6_MAX_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_6_MAX_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_6_MAX_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_6_MAX_LAT_reg))
#define DC_PC_SYSH_PROG_6_MAX_LAT_inst_adr                                           "0x0051"
#define DC_PC_SYSH_PROG_6_MAX_LAT_inst                                               0x0051
#define DC_PC_SYSH_PROG_6_MAX_LAT_sysh_prog6_max_lat_shift                           (0)
#define DC_PC_SYSH_PROG_6_MAX_LAT_sysh_prog6_max_lat_mask                            (0x0000FFFF)
#define DC_PC_SYSH_PROG_6_MAX_LAT_sysh_prog6_max_lat(data)                           (0x0000FFFF&((data)<<0))
#define DC_PC_SYSH_PROG_6_MAX_LAT_sysh_prog6_max_lat_src(data)                       ((0x0000FFFF&(data))>>0)
#define DC_PC_SYSH_PROG_6_MAX_LAT_get_sysh_prog6_max_lat(data)                       ((0x0000FFFF&(data))>>0)


#define DC_PC_SYSH_PROG_6_REQ_NUM                                                    0x18008548
#define DC_PC_SYSH_PROG_6_REQ_NUM_reg_addr                                           "0xD8008548"
#define DC_PC_SYSH_PROG_6_REQ_NUM_reg                                                0xD8008548
#define set_DC_PC_SYSH_PROG_6_REQ_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_6_REQ_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_6_REQ_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_6_REQ_NUM_reg))
#define DC_PC_SYSH_PROG_6_REQ_NUM_inst_adr                                           "0x0052"
#define DC_PC_SYSH_PROG_6_REQ_NUM_inst                                               0x0052
#define DC_PC_SYSH_PROG_6_REQ_NUM_sysh_prog6_req_num_shift                           (0)
#define DC_PC_SYSH_PROG_6_REQ_NUM_sysh_prog6_req_num_mask                            (0x00FFFFFF)
#define DC_PC_SYSH_PROG_6_REQ_NUM_sysh_prog6_req_num(data)                           (0x00FFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_6_REQ_NUM_sysh_prog6_req_num_src(data)                       ((0x00FFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_6_REQ_NUM_get_sysh_prog6_req_num(data)                       ((0x00FFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_6_ACK_NUM                                                    0x1800854C
#define DC_PC_SYSH_PROG_6_ACK_NUM_reg_addr                                           "0xD800854C"
#define DC_PC_SYSH_PROG_6_ACK_NUM_reg                                                0xD800854C
#define set_DC_PC_SYSH_PROG_6_ACK_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_6_ACK_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_6_ACK_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_6_ACK_NUM_reg))
#define DC_PC_SYSH_PROG_6_ACK_NUM_inst_adr                                           "0x0053"
#define DC_PC_SYSH_PROG_6_ACK_NUM_inst                                               0x0053
#define DC_PC_SYSH_PROG_6_ACK_NUM_sysh_prog6_ack_num_shift                           (0)
#define DC_PC_SYSH_PROG_6_ACK_NUM_sysh_prog6_ack_num_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_6_ACK_NUM_sysh_prog6_ack_num(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_6_ACK_NUM_sysh_prog6_ack_num_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_6_ACK_NUM_get_sysh_prog6_ack_num(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_7_ACC_LAT                                                    0x18008550
#define DC_PC_SYSH_PROG_7_ACC_LAT_reg_addr                                           "0xD8008550"
#define DC_PC_SYSH_PROG_7_ACC_LAT_reg                                                0xD8008550
#define set_DC_PC_SYSH_PROG_7_ACC_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_7_ACC_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_7_ACC_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_7_ACC_LAT_reg))
#define DC_PC_SYSH_PROG_7_ACC_LAT_inst_adr                                           "0x0054"
#define DC_PC_SYSH_PROG_7_ACC_LAT_inst                                               0x0054
#define DC_PC_SYSH_PROG_7_ACC_LAT_sysh_prog7_acc_lat_shift                           (0)
#define DC_PC_SYSH_PROG_7_ACC_LAT_sysh_prog7_acc_lat_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_7_ACC_LAT_sysh_prog7_acc_lat(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_7_ACC_LAT_sysh_prog7_acc_lat_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_7_ACC_LAT_get_sysh_prog7_acc_lat(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_7_MAX_LAT                                                    0x18008554
#define DC_PC_SYSH_PROG_7_MAX_LAT_reg_addr                                           "0xD8008554"
#define DC_PC_SYSH_PROG_7_MAX_LAT_reg                                                0xD8008554
#define set_DC_PC_SYSH_PROG_7_MAX_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_7_MAX_LAT_reg)=data)
#define get_DC_PC_SYSH_PROG_7_MAX_LAT_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_7_MAX_LAT_reg))
#define DC_PC_SYSH_PROG_7_MAX_LAT_inst_adr                                           "0x0055"
#define DC_PC_SYSH_PROG_7_MAX_LAT_inst                                               0x0055
#define DC_PC_SYSH_PROG_7_MAX_LAT_sysh_prog7_max_lat_shift                           (0)
#define DC_PC_SYSH_PROG_7_MAX_LAT_sysh_prog7_max_lat_mask                            (0x0000FFFF)
#define DC_PC_SYSH_PROG_7_MAX_LAT_sysh_prog7_max_lat(data)                           (0x0000FFFF&((data)<<0))
#define DC_PC_SYSH_PROG_7_MAX_LAT_sysh_prog7_max_lat_src(data)                       ((0x0000FFFF&(data))>>0)
#define DC_PC_SYSH_PROG_7_MAX_LAT_get_sysh_prog7_max_lat(data)                       ((0x0000FFFF&(data))>>0)


#define DC_PC_SYSH_PROG_7_REQ_NUM                                                    0x18008558
#define DC_PC_SYSH_PROG_7_REQ_NUM_reg_addr                                           "0xD8008558"
#define DC_PC_SYSH_PROG_7_REQ_NUM_reg                                                0xD8008558
#define set_DC_PC_SYSH_PROG_7_REQ_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_7_REQ_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_7_REQ_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_7_REQ_NUM_reg))
#define DC_PC_SYSH_PROG_7_REQ_NUM_inst_adr                                           "0x0056"
#define DC_PC_SYSH_PROG_7_REQ_NUM_inst                                               0x0056
#define DC_PC_SYSH_PROG_7_REQ_NUM_sysh_prog7_req_num_shift                           (0)
#define DC_PC_SYSH_PROG_7_REQ_NUM_sysh_prog7_req_num_mask                            (0x00FFFFFF)
#define DC_PC_SYSH_PROG_7_REQ_NUM_sysh_prog7_req_num(data)                           (0x00FFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_7_REQ_NUM_sysh_prog7_req_num_src(data)                       ((0x00FFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_7_REQ_NUM_get_sysh_prog7_req_num(data)                       ((0x00FFFFFF&(data))>>0)


#define DC_PC_SYSH_PROG_7_ACK_NUM                                                    0x1800855C
#define DC_PC_SYSH_PROG_7_ACK_NUM_reg_addr                                           "0xD800855C"
#define DC_PC_SYSH_PROG_7_ACK_NUM_reg                                                0xD800855C
#define set_DC_PC_SYSH_PROG_7_ACK_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYSH_PROG_7_ACK_NUM_reg)=data)
#define get_DC_PC_SYSH_PROG_7_ACK_NUM_reg   (*((volatile unsigned int*) DC_PC_SYSH_PROG_7_ACK_NUM_reg))
#define DC_PC_SYSH_PROG_7_ACK_NUM_inst_adr                                           "0x0057"
#define DC_PC_SYSH_PROG_7_ACK_NUM_inst                                               0x0057
#define DC_PC_SYSH_PROG_7_ACK_NUM_sysh_prog7_ack_num_shift                           (0)
#define DC_PC_SYSH_PROG_7_ACK_NUM_sysh_prog7_ack_num_mask                            (0xFFFFFFFF)
#define DC_PC_SYSH_PROG_7_ACK_NUM_sysh_prog7_ack_num(data)                           (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYSH_PROG_7_ACK_NUM_sysh_prog7_ack_num_src(data)                       ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYSH_PROG_7_ACK_NUM_get_sysh_prog7_ack_num(data)                       ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYS_PROG_0_ACC_LAT                                                     0x98008090
#define DC_PC_SYS_PROG_0_ACC_LAT_reg_addr                                            "0xD8008090"
#define DC_PC_SYS_PROG_0_ACC_LAT_reg                                                 0xD8008090
#define set_DC_PC_SYS_PROG_0_ACC_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_0_ACC_LAT_reg)=data)
#define get_DC_PC_SYS_PROG_0_ACC_LAT_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_0_ACC_LAT_reg))
#define DC_PC_SYS_PROG_0_ACC_LAT_inst_adr                                            "0x0024"
#define DC_PC_SYS_PROG_0_ACC_LAT_inst                                                0x0024
#define DC_PC_SYS_PROG_0_ACC_LAT_sys_prog0_acc_lat_shift                             (0)
#define DC_PC_SYS_PROG_0_ACC_LAT_sys_prog0_acc_lat_mask                              (0xFFFFFFFF)
#define DC_PC_SYS_PROG_0_ACC_LAT_sys_prog0_acc_lat(data)                             (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYS_PROG_0_ACC_LAT_sys_prog0_acc_lat_src(data)                         ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYS_PROG_0_ACC_LAT_get_sys_prog0_acc_lat(data)                         ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYS_PROG_0_MAX_LAT                                                     0x98008094
#define DC_PC_SYS_PROG_0_MAX_LAT_reg_addr                                            "0xD8008094"
#define DC_PC_SYS_PROG_0_MAX_LAT_reg                                                 0xD8008094
#define set_DC_PC_SYS_PROG_0_MAX_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_0_MAX_LAT_reg)=data)
#define get_DC_PC_SYS_PROG_0_MAX_LAT_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_0_MAX_LAT_reg))
#define DC_PC_SYS_PROG_0_MAX_LAT_inst_adr                                            "0x0025"
#define DC_PC_SYS_PROG_0_MAX_LAT_inst                                                0x0025
#define DC_PC_SYS_PROG_0_MAX_LAT_sys_prog0_max_lat_shift                             (0)
#define DC_PC_SYS_PROG_0_MAX_LAT_sys_prog0_max_lat_mask                              (0x0000FFFF)
#define DC_PC_SYS_PROG_0_MAX_LAT_sys_prog0_max_lat(data)                             (0x0000FFFF&((data)<<0))
#define DC_PC_SYS_PROG_0_MAX_LAT_sys_prog0_max_lat_src(data)                         ((0x0000FFFF&(data))>>0)
#define DC_PC_SYS_PROG_0_MAX_LAT_get_sys_prog0_max_lat(data)                         ((0x0000FFFF&(data))>>0)


#define DC_PC_SYS_PROG_0_REQ_NUM                                                     0x98008098
#define DC_PC_SYS_PROG_0_REQ_NUM_reg_addr                                            "0xD8008098"
#define DC_PC_SYS_PROG_0_REQ_NUM_reg                                                 0xD8008098
#define set_DC_PC_SYS_PROG_0_REQ_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_0_REQ_NUM_reg)=data)
#define get_DC_PC_SYS_PROG_0_REQ_NUM_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_0_REQ_NUM_reg))
#define DC_PC_SYS_PROG_0_REQ_NUM_inst_adr                                            "0x0026"
#define DC_PC_SYS_PROG_0_REQ_NUM_inst                                                0x0026
#define DC_PC_SYS_PROG_0_REQ_NUM_sys_prog0_req_num_shift                             (0)
#define DC_PC_SYS_PROG_0_REQ_NUM_sys_prog0_req_num_mask                              (0x00FFFFFF)
#define DC_PC_SYS_PROG_0_REQ_NUM_sys_prog0_req_num(data)                             (0x00FFFFFF&((data)<<0))
#define DC_PC_SYS_PROG_0_REQ_NUM_sys_prog0_req_num_src(data)                         ((0x00FFFFFF&(data))>>0)
#define DC_PC_SYS_PROG_0_REQ_NUM_get_sys_prog0_req_num(data)                         ((0x00FFFFFF&(data))>>0)


#define DC_PC_SYS_PROG_0_ACK_NUM                                                     0x9800809C
#define DC_PC_SYS_PROG_0_ACK_NUM_reg_addr                                            "0xD800809C"
#define DC_PC_SYS_PROG_0_ACK_NUM_reg                                                 0xD800809C
#define set_DC_PC_SYS_PROG_0_ACK_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_0_ACK_NUM_reg)=data)
#define get_DC_PC_SYS_PROG_0_ACK_NUM_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_0_ACK_NUM_reg))
#define DC_PC_SYS_PROG_0_ACK_NUM_inst_adr                                            "0x0027"
#define DC_PC_SYS_PROG_0_ACK_NUM_inst                                                0x0027
#define DC_PC_SYS_PROG_0_ACK_NUM_sys_prog0_ack_num_shift                             (0)
#define DC_PC_SYS_PROG_0_ACK_NUM_sys_prog0_ack_num_mask                              (0xFFFFFFFF)
#define DC_PC_SYS_PROG_0_ACK_NUM_sys_prog0_ack_num(data)                             (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYS_PROG_0_ACK_NUM_sys_prog0_ack_num_src(data)                         ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYS_PROG_0_ACK_NUM_get_sys_prog0_ack_num(data)                         ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYS_PROG_1_ACC_LAT                                                     0x980080A0
#define DC_PC_SYS_PROG_1_ACC_LAT_reg_addr                                            "0xD80080A0"
#define DC_PC_SYS_PROG_1_ACC_LAT_reg                                                 0xD80080A0
#define set_DC_PC_SYS_PROG_1_ACC_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_1_ACC_LAT_reg)=data)
#define get_DC_PC_SYS_PROG_1_ACC_LAT_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_1_ACC_LAT_reg))
#define DC_PC_SYS_PROG_1_ACC_LAT_inst_adr                                            "0x0028"
#define DC_PC_SYS_PROG_1_ACC_LAT_inst                                                0x0028
#define DC_PC_SYS_PROG_1_ACC_LAT_sys_prog1_acc_lat_shift                             (0)
#define DC_PC_SYS_PROG_1_ACC_LAT_sys_prog1_acc_lat_mask                              (0xFFFFFFFF)
#define DC_PC_SYS_PROG_1_ACC_LAT_sys_prog1_acc_lat(data)                             (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYS_PROG_1_ACC_LAT_sys_prog1_acc_lat_src(data)                         ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYS_PROG_1_ACC_LAT_get_sys_prog1_acc_lat(data)                         ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYS_PROG_1_MAX_LAT                                                     0x980080A4
#define DC_PC_SYS_PROG_1_MAX_LAT_reg_addr                                            "0xD80080A4"
#define DC_PC_SYS_PROG_1_MAX_LAT_reg                                                 0xD80080A4
#define set_DC_PC_SYS_PROG_1_MAX_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_1_MAX_LAT_reg)=data)
#define get_DC_PC_SYS_PROG_1_MAX_LAT_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_1_MAX_LAT_reg))
#define DC_PC_SYS_PROG_1_MAX_LAT_inst_adr                                            "0x0029"
#define DC_PC_SYS_PROG_1_MAX_LAT_inst                                                0x0029
#define DC_PC_SYS_PROG_1_MAX_LAT_sys_prog1_max_lat_shift                             (0)
#define DC_PC_SYS_PROG_1_MAX_LAT_sys_prog1_max_lat_mask                              (0x0000FFFF)
#define DC_PC_SYS_PROG_1_MAX_LAT_sys_prog1_max_lat(data)                             (0x0000FFFF&((data)<<0))
#define DC_PC_SYS_PROG_1_MAX_LAT_sys_prog1_max_lat_src(data)                         ((0x0000FFFF&(data))>>0)
#define DC_PC_SYS_PROG_1_MAX_LAT_get_sys_prog1_max_lat(data)                         ((0x0000FFFF&(data))>>0)


#define DC_PC_SYS_PROG_1_REQ_NUM                                                     0x980080A8
#define DC_PC_SYS_PROG_1_REQ_NUM_reg_addr                                            "0xD80080A8"
#define DC_PC_SYS_PROG_1_REQ_NUM_reg                                                 0xD80080A8
#define set_DC_PC_SYS_PROG_1_REQ_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_1_REQ_NUM_reg)=data)
#define get_DC_PC_SYS_PROG_1_REQ_NUM_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_1_REQ_NUM_reg))
#define DC_PC_SYS_PROG_1_REQ_NUM_inst_adr                                            "0x002A"
#define DC_PC_SYS_PROG_1_REQ_NUM_inst                                                0x002A
#define DC_PC_SYS_PROG_1_REQ_NUM_sys_prog1_req_num_shift                             (0)
#define DC_PC_SYS_PROG_1_REQ_NUM_sys_prog1_req_num_mask                              (0x00FFFFFF)
#define DC_PC_SYS_PROG_1_REQ_NUM_sys_prog1_req_num(data)                             (0x00FFFFFF&((data)<<0))
#define DC_PC_SYS_PROG_1_REQ_NUM_sys_prog1_req_num_src(data)                         ((0x00FFFFFF&(data))>>0)
#define DC_PC_SYS_PROG_1_REQ_NUM_get_sys_prog1_req_num(data)                         ((0x00FFFFFF&(data))>>0)


#define DC_PC_SYS_PROG_1_ACK_NUM                                                     0x980080AC
#define DC_PC_SYS_PROG_1_ACK_NUM_reg_addr                                            "0xD80080AC"
#define DC_PC_SYS_PROG_1_ACK_NUM_reg                                                 0xD80080AC
#define set_DC_PC_SYS_PROG_1_ACK_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_1_ACK_NUM_reg)=data)
#define get_DC_PC_SYS_PROG_1_ACK_NUM_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_1_ACK_NUM_reg))
#define DC_PC_SYS_PROG_1_ACK_NUM_inst_adr                                            "0x002B"
#define DC_PC_SYS_PROG_1_ACK_NUM_inst                                                0x002B
#define DC_PC_SYS_PROG_1_ACK_NUM_sys_prog1_ack_num_shift                             (0)
#define DC_PC_SYS_PROG_1_ACK_NUM_sys_prog1_ack_num_mask                              (0xFFFFFFFF)
#define DC_PC_SYS_PROG_1_ACK_NUM_sys_prog1_ack_num(data)                             (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYS_PROG_1_ACK_NUM_sys_prog1_ack_num_src(data)                         ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYS_PROG_1_ACK_NUM_get_sys_prog1_ack_num(data)                         ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYS_PROG_2_ACC_LAT                                                     0x980080B0
#define DC_PC_SYS_PROG_2_ACC_LAT_reg_addr                                            "0xD80080B0"
#define DC_PC_SYS_PROG_2_ACC_LAT_reg                                                 0xD80080B0
#define set_DC_PC_SYS_PROG_2_ACC_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_2_ACC_LAT_reg)=data)
#define get_DC_PC_SYS_PROG_2_ACC_LAT_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_2_ACC_LAT_reg))
#define DC_PC_SYS_PROG_2_ACC_LAT_inst_adr                                            "0x002C"
#define DC_PC_SYS_PROG_2_ACC_LAT_inst                                                0x002C
#define DC_PC_SYS_PROG_2_ACC_LAT_sys_prog2_acc_lat_shift                             (0)
#define DC_PC_SYS_PROG_2_ACC_LAT_sys_prog2_acc_lat_mask                              (0xFFFFFFFF)
#define DC_PC_SYS_PROG_2_ACC_LAT_sys_prog2_acc_lat(data)                             (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYS_PROG_2_ACC_LAT_sys_prog2_acc_lat_src(data)                         ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYS_PROG_2_ACC_LAT_get_sys_prog2_acc_lat(data)                         ((0xFFFFFFFF&(data))>>0)


#define DC_PC_SYS_PROG_2_MAX_LAT                                                     0x980080B4
#define DC_PC_SYS_PROG_2_MAX_LAT_reg_addr                                            "0xD80080B4"
#define DC_PC_SYS_PROG_2_MAX_LAT_reg                                                 0xD80080B4
#define set_DC_PC_SYS_PROG_2_MAX_LAT_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_2_MAX_LAT_reg)=data)
#define get_DC_PC_SYS_PROG_2_MAX_LAT_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_2_MAX_LAT_reg))
#define DC_PC_SYS_PROG_2_MAX_LAT_inst_adr                                            "0x002D"
#define DC_PC_SYS_PROG_2_MAX_LAT_inst                                                0x002D
#define DC_PC_SYS_PROG_2_MAX_LAT_sys_prog2_max_lat_shift                             (0)
#define DC_PC_SYS_PROG_2_MAX_LAT_sys_prog2_max_lat_mask                              (0x0000FFFF)
#define DC_PC_SYS_PROG_2_MAX_LAT_sys_prog2_max_lat(data)                             (0x0000FFFF&((data)<<0))
#define DC_PC_SYS_PROG_2_MAX_LAT_sys_prog2_max_lat_src(data)                         ((0x0000FFFF&(data))>>0)
#define DC_PC_SYS_PROG_2_MAX_LAT_get_sys_prog2_max_lat(data)                         ((0x0000FFFF&(data))>>0)


#define DC_PC_SYS_PROG_2_REQ_NUM                                                     0x980080B8
#define DC_PC_SYS_PROG_2_REQ_NUM_reg_addr                                            "0xD80080B8"
#define DC_PC_SYS_PROG_2_REQ_NUM_reg                                                 0xD80080B8
#define set_DC_PC_SYS_PROG_2_REQ_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_2_REQ_NUM_reg)=data)
#define get_DC_PC_SYS_PROG_2_REQ_NUM_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_2_REQ_NUM_reg))
#define DC_PC_SYS_PROG_2_REQ_NUM_inst_adr                                            "0x002E"
#define DC_PC_SYS_PROG_2_REQ_NUM_inst                                                0x002E
#define DC_PC_SYS_PROG_2_REQ_NUM_sys_prog2_req_num_shift                             (0)
#define DC_PC_SYS_PROG_2_REQ_NUM_sys_prog2_req_num_mask                              (0x00FFFFFF)
#define DC_PC_SYS_PROG_2_REQ_NUM_sys_prog2_req_num(data)                             (0x00FFFFFF&((data)<<0))
#define DC_PC_SYS_PROG_2_REQ_NUM_sys_prog2_req_num_src(data)                         ((0x00FFFFFF&(data))>>0)
#define DC_PC_SYS_PROG_2_REQ_NUM_get_sys_prog2_req_num(data)                         ((0x00FFFFFF&(data))>>0)


#define DC_PC_SYS_PROG_2_ACK_NUM                                                     0x980080BC
#define DC_PC_SYS_PROG_2_ACK_NUM_reg_addr                                            "0xD80080BC"
#define DC_PC_SYS_PROG_2_ACK_NUM_reg                                                 0xD80080BC
#define set_DC_PC_SYS_PROG_2_ACK_NUM_reg(data)   (*((volatile unsigned int*) DC_PC_SYS_PROG_2_ACK_NUM_reg)=data)
#define get_DC_PC_SYS_PROG_2_ACK_NUM_reg   (*((volatile unsigned int*) DC_PC_SYS_PROG_2_ACK_NUM_reg))
#define DC_PC_SYS_PROG_2_ACK_NUM_inst_adr                                            "0x002F"
#define DC_PC_SYS_PROG_2_ACK_NUM_inst                                                0x002F
#define DC_PC_SYS_PROG_2_ACK_NUM_sys_prog2_ack_num_shift                             (0)
#define DC_PC_SYS_PROG_2_ACK_NUM_sys_prog2_ack_num_mask                              (0xFFFFFFFF)
#define DC_PC_SYS_PROG_2_ACK_NUM_sys_prog2_ack_num(data)                             (0xFFFFFFFF&((data)<<0))
#define DC_PC_SYS_PROG_2_ACK_NUM_sys_prog2_ack_num_src(data)                         ((0xFFFFFFFF&(data))>>0)
#define DC_PC_SYS_PROG_2_ACK_NUM_get_sys_prog2_ack_num(data)                         ((0xFFFFFFFF&(data))>>0)


#define SFMODE_CMD0                                                                  0x980080C0
#define SFMODE_CMD0_reg_addr                                                         "0xD80080C0"
#define SFMODE_CMD0_reg                                                              0xD80080C0
#define set_SFMODE_CMD0_reg(data)   (*((volatile unsigned int*) SFMODE_CMD0_reg)=data)
#define get_SFMODE_CMD0_reg   (*((volatile unsigned int*) SFMODE_CMD0_reg))
#define SFMODE_CMD0_inst_adr                                                         "0x0030"
#define SFMODE_CMD0_inst                                                             0x0030
#define SFMODE_CMD0_sfmode_addr_shift                                                (0)
#define SFMODE_CMD0_sfmode_addr_mask                                                 (0x0FFFFFFF)
#define SFMODE_CMD0_sfmode_addr(data)                                                (0x0FFFFFFF&((data)<<0))
#define SFMODE_CMD0_sfmode_addr_src(data)                                            ((0x0FFFFFFF&(data))>>0)
#define SFMODE_CMD0_get_sfmode_addr(data)                                            ((0x0FFFFFFF&(data))>>0)


#define SFMODE_CMD1                                                                  0x980080C4
#define SFMODE_CMD1_reg_addr                                                         "0xD80080C4"
#define SFMODE_CMD1_reg                                                              0xD80080C4
#define set_SFMODE_CMD1_reg(data)   (*((volatile unsigned int*) SFMODE_CMD1_reg)=data)
#define get_SFMODE_CMD1_reg   (*((volatile unsigned int*) SFMODE_CMD1_reg))
#define SFMODE_CMD1_inst_adr                                                         "0x0031"
#define SFMODE_CMD1_inst                                                             0x0031
#define SFMODE_CMD1_sfmode_addr_add_shift                                            (4)
#define SFMODE_CMD1_sfmode_addr_add_mask                                             (0x000000F0)
#define SFMODE_CMD1_sfmode_addr_add(data)                                            (0x000000F0&((data)<<4))
#define SFMODE_CMD1_sfmode_addr_add_src(data)                                        ((0x000000F0&(data))>>4)
#define SFMODE_CMD1_get_sfmode_addr_add(data)                                        ((0x000000F0&(data))>>4)
#define SFMODE_CMD1_sfmode_bl_shift                                                  (0)
#define SFMODE_CMD1_sfmode_bl_mask                                                   (0x0000000F)
#define SFMODE_CMD1_sfmode_bl(data)                                                  (0x0000000F&((data)<<0))
#define SFMODE_CMD1_sfmode_bl_src(data)                                              ((0x0000000F&(data))>>0)
#define SFMODE_CMD1_get_sfmode_bl(data)                                              ((0x0000000F&(data))>>0)


#define SFMODE_CMP0_TAG                                                              0x980080C8
#define SFMODE_CMP0_TAG_reg_addr                                                     "0xD80080C8"
#define SFMODE_CMP0_TAG_reg                                                          0xD80080C8
#define set_SFMODE_CMP0_TAG_reg(data)   (*((volatile unsigned int*) SFMODE_CMP0_TAG_reg)=data)
#define get_SFMODE_CMP0_TAG_reg   (*((volatile unsigned int*) SFMODE_CMP0_TAG_reg))
#define SFMODE_CMP0_TAG_inst_adr                                                     "0x0032"
#define SFMODE_CMP0_TAG_inst                                                         0x0032
#define SFMODE_CMP0_TAG_sfmode_cmp_last_shift                                        (20)
#define SFMODE_CMP0_TAG_sfmode_cmp_last_mask                                         (0x00100000)
#define SFMODE_CMP0_TAG_sfmode_cmp_last(data)                                        (0x00100000&((data)<<20))
#define SFMODE_CMP0_TAG_sfmode_cmp_last_src(data)                                    ((0x00100000&(data))>>20)
#define SFMODE_CMP0_TAG_get_sfmode_cmp_last(data)                                    ((0x00100000&(data))>>20)
#define SFMODE_CMP0_TAG_sfmode_cmp_tag_shift                                         (0)
#define SFMODE_CMP0_TAG_sfmode_cmp_tag_mask                                          (0x0007FFFF)
#define SFMODE_CMP0_TAG_sfmode_cmp_tag(data)                                         (0x0007FFFF&((data)<<0))
#define SFMODE_CMP0_TAG_sfmode_cmp_tag_src(data)                                     ((0x0007FFFF&(data))>>0)
#define SFMODE_CMP0_TAG_get_sfmode_cmp_tag(data)                                     ((0x0007FFFF&(data))>>0)


#define SFMODE_CMP1_TAG                                                              0x980080CC
#define SFMODE_CMP1_TAG_reg_addr                                                     "0xD80080CC"
#define SFMODE_CMP1_TAG_reg                                                          0xD80080CC
#define set_SFMODE_CMP1_TAG_reg(data)   (*((volatile unsigned int*) SFMODE_CMP1_TAG_reg)=data)
#define get_SFMODE_CMP1_TAG_reg   (*((volatile unsigned int*) SFMODE_CMP1_TAG_reg))
#define SFMODE_CMP1_TAG_inst_adr                                                     "0x0033"
#define SFMODE_CMP1_TAG_inst                                                         0x0033
#define SFMODE_CMP1_TAG_sfmode_cmp_last_shift                                        (20)
#define SFMODE_CMP1_TAG_sfmode_cmp_last_mask                                         (0x00100000)
#define SFMODE_CMP1_TAG_sfmode_cmp_last(data)                                        (0x00100000&((data)<<20))
#define SFMODE_CMP1_TAG_sfmode_cmp_last_src(data)                                    ((0x00100000&(data))>>20)
#define SFMODE_CMP1_TAG_get_sfmode_cmp_last(data)                                    ((0x00100000&(data))>>20)
#define SFMODE_CMP1_TAG_sfmode_cmp_tag_shift                                         (0)
#define SFMODE_CMP1_TAG_sfmode_cmp_tag_mask                                          (0x0007FFFF)
#define SFMODE_CMP1_TAG_sfmode_cmp_tag(data)                                         (0x0007FFFF&((data)<<0))
#define SFMODE_CMP1_TAG_sfmode_cmp_tag_src(data)                                     ((0x0007FFFF&(data))>>0)
#define SFMODE_CMP1_TAG_get_sfmode_cmp_tag(data)                                     ((0x0007FFFF&(data))>>0)


#define SFMODE_PATTERN0                                                              0x980080D0
#define SFMODE_PATTERN0_reg_addr                                                     "0xD80080D0"
#define SFMODE_PATTERN0_reg                                                          0xD80080D0
#define set_SFMODE_PATTERN0_reg(data)   (*((volatile unsigned int*) SFMODE_PATTERN0_reg)=data)
#define get_SFMODE_PATTERN0_reg   (*((volatile unsigned int*) SFMODE_PATTERN0_reg))
#define SFMODE_PATTERN0_inst_adr                                                     "0x0034"
#define SFMODE_PATTERN0_inst                                                         0x0034
#define SFMODE_PATTERN0_sfmode_pattern0_shift                                        (0)
#define SFMODE_PATTERN0_sfmode_pattern0_mask                                         (0xFFFFFFFF)
#define SFMODE_PATTERN0_sfmode_pattern0(data)                                        (0xFFFFFFFF&((data)<<0))
#define SFMODE_PATTERN0_sfmode_pattern0_src(data)                                    ((0xFFFFFFFF&(data))>>0)
#define SFMODE_PATTERN0_get_sfmode_pattern0(data)                                    ((0xFFFFFFFF&(data))>>0)


#define SFMODE_PATTERN1                                                              0x980080D4
#define SFMODE_PATTERN1_reg_addr                                                     "0xD80080D4"
#define SFMODE_PATTERN1_reg                                                          0xD80080D4
#define set_SFMODE_PATTERN1_reg(data)   (*((volatile unsigned int*) SFMODE_PATTERN1_reg)=data)
#define get_SFMODE_PATTERN1_reg   (*((volatile unsigned int*) SFMODE_PATTERN1_reg))
#define SFMODE_PATTERN1_inst_adr                                                     "0x0035"
#define SFMODE_PATTERN1_inst                                                         0x0035
#define SFMODE_PATTERN1_sfmode_pattern1_shift                                        (0)
#define SFMODE_PATTERN1_sfmode_pattern1_mask                                         (0xFFFFFFFF)
#define SFMODE_PATTERN1_sfmode_pattern1(data)                                        (0xFFFFFFFF&((data)<<0))
#define SFMODE_PATTERN1_sfmode_pattern1_src(data)                                    ((0xFFFFFFFF&(data))>>0)
#define SFMODE_PATTERN1_get_sfmode_pattern1(data)                                    ((0xFFFFFFFF&(data))>>0)


#define SFMODE_PATTERN2                                                              0x980080D8
#define SFMODE_PATTERN2_reg_addr                                                     "0xD80080D8"
#define SFMODE_PATTERN2_reg                                                          0xD80080D8
#define set_SFMODE_PATTERN2_reg(data)   (*((volatile unsigned int*) SFMODE_PATTERN2_reg)=data)
#define get_SFMODE_PATTERN2_reg   (*((volatile unsigned int*) SFMODE_PATTERN2_reg))
#define SFMODE_PATTERN2_inst_adr                                                     "0x0036"
#define SFMODE_PATTERN2_inst                                                         0x0036
#define SFMODE_PATTERN2_sfmode_pattern2_shift                                        (0)
#define SFMODE_PATTERN2_sfmode_pattern2_mask                                         (0xFFFFFFFF)
#define SFMODE_PATTERN2_sfmode_pattern2(data)                                        (0xFFFFFFFF&((data)<<0))
#define SFMODE_PATTERN2_sfmode_pattern2_src(data)                                    ((0xFFFFFFFF&(data))>>0)
#define SFMODE_PATTERN2_get_sfmode_pattern2(data)                                    ((0xFFFFFFFF&(data))>>0)


#define SFMODE_PATTERN3                                                              0x980080DC
#define SFMODE_PATTERN3_reg_addr                                                     "0xD80080DC"
#define SFMODE_PATTERN3_reg                                                          0xD80080DC
#define set_SFMODE_PATTERN3_reg(data)   (*((volatile unsigned int*) SFMODE_PATTERN3_reg)=data)
#define get_SFMODE_PATTERN3_reg   (*((volatile unsigned int*) SFMODE_PATTERN3_reg))
#define SFMODE_PATTERN3_inst_adr                                                     "0x0037"
#define SFMODE_PATTERN3_inst                                                         0x0037
#define SFMODE_PATTERN3_sfmode_pattern3_shift                                        (0)
#define SFMODE_PATTERN3_sfmode_pattern3_mask                                         (0xFFFFFFFF)
#define SFMODE_PATTERN3_sfmode_pattern3(data)                                        (0xFFFFFFFF&((data)<<0))
#define SFMODE_PATTERN3_sfmode_pattern3_src(data)                                    ((0xFFFFFFFF&(data))>>0)
#define SFMODE_PATTERN3_get_sfmode_pattern3(data)                                    ((0xFFFFFFFF&(data))>>0)


#define SFMODE_CMP0_RLT0                                                             0x980080E0
#define SFMODE_CMP0_RLT0_reg_addr                                                    "0xD80080E0"
#define SFMODE_CMP0_RLT0_reg                                                         0xD80080E0
#define set_SFMODE_CMP0_RLT0_reg(data)   (*((volatile unsigned int*) SFMODE_CMP0_RLT0_reg)=data)
#define get_SFMODE_CMP0_RLT0_reg   (*((volatile unsigned int*) SFMODE_CMP0_RLT0_reg))
#define SFMODE_CMP0_RLT0_inst_adr                                                    "0x0038"
#define SFMODE_CMP0_RLT0_inst                                                        0x0038
#define SFMODE_CMP0_RLT0_sfmode_cmp_rlt0_shift                                       (0)
#define SFMODE_CMP0_RLT0_sfmode_cmp_rlt0_mask                                        (0xFFFFFFFF)
#define SFMODE_CMP0_RLT0_sfmode_cmp_rlt0(data)                                       (0xFFFFFFFF&((data)<<0))
#define SFMODE_CMP0_RLT0_sfmode_cmp_rlt0_src(data)                                   ((0xFFFFFFFF&(data))>>0)
#define SFMODE_CMP0_RLT0_get_sfmode_cmp_rlt0(data)                                   ((0xFFFFFFFF&(data))>>0)


#define SFMODE_CMP0_RLT1                                                             0x980080E4
#define SFMODE_CMP0_RLT1_reg_addr                                                    "0xD80080E4"
#define SFMODE_CMP0_RLT1_reg                                                         0xD80080E4
#define set_SFMODE_CMP0_RLT1_reg(data)   (*((volatile unsigned int*) SFMODE_CMP0_RLT1_reg)=data)
#define get_SFMODE_CMP0_RLT1_reg   (*((volatile unsigned int*) SFMODE_CMP0_RLT1_reg))
#define SFMODE_CMP0_RLT1_inst_adr                                                    "0x0039"
#define SFMODE_CMP0_RLT1_inst                                                        0x0039
#define SFMODE_CMP0_RLT1_sfmode_cmp_rlt1_shift                                       (0)
#define SFMODE_CMP0_RLT1_sfmode_cmp_rlt1_mask                                        (0xFFFFFFFF)
#define SFMODE_CMP0_RLT1_sfmode_cmp_rlt1(data)                                       (0xFFFFFFFF&((data)<<0))
#define SFMODE_CMP0_RLT1_sfmode_cmp_rlt1_src(data)                                   ((0xFFFFFFFF&(data))>>0)
#define SFMODE_CMP0_RLT1_get_sfmode_cmp_rlt1(data)                                   ((0xFFFFFFFF&(data))>>0)


#define SFMODE_CMP0_RLT2                                                             0x980080E8
#define SFMODE_CMP0_RLT2_reg_addr                                                    "0xD80080E8"
#define SFMODE_CMP0_RLT2_reg                                                         0xD80080E8
#define set_SFMODE_CMP0_RLT2_reg(data)   (*((volatile unsigned int*) SFMODE_CMP0_RLT2_reg)=data)
#define get_SFMODE_CMP0_RLT2_reg   (*((volatile unsigned int*) SFMODE_CMP0_RLT2_reg))
#define SFMODE_CMP0_RLT2_inst_adr                                                    "0x003A"
#define SFMODE_CMP0_RLT2_inst                                                        0x003A
#define SFMODE_CMP0_RLT2_sfmode_cmp_rlt2_shift                                       (0)
#define SFMODE_CMP0_RLT2_sfmode_cmp_rlt2_mask                                        (0xFFFFFFFF)
#define SFMODE_CMP0_RLT2_sfmode_cmp_rlt2(data)                                       (0xFFFFFFFF&((data)<<0))
#define SFMODE_CMP0_RLT2_sfmode_cmp_rlt2_src(data)                                   ((0xFFFFFFFF&(data))>>0)
#define SFMODE_CMP0_RLT2_get_sfmode_cmp_rlt2(data)                                   ((0xFFFFFFFF&(data))>>0)


#define SFMODE_CMP0_RLT3                                                             0x980080EC
#define SFMODE_CMP0_RLT3_reg_addr                                                    "0xD80080EC"
#define SFMODE_CMP0_RLT3_reg                                                         0xD80080EC
#define set_SFMODE_CMP0_RLT3_reg(data)   (*((volatile unsigned int*) SFMODE_CMP0_RLT3_reg)=data)
#define get_SFMODE_CMP0_RLT3_reg   (*((volatile unsigned int*) SFMODE_CMP0_RLT3_reg))
#define SFMODE_CMP0_RLT3_inst_adr                                                    "0x003B"
#define SFMODE_CMP0_RLT3_inst                                                        0x003B
#define SFMODE_CMP0_RLT3_sfmode_cmp_rlt3_shift                                       (0)
#define SFMODE_CMP0_RLT3_sfmode_cmp_rlt3_mask                                        (0xFFFFFFFF)
#define SFMODE_CMP0_RLT3_sfmode_cmp_rlt3(data)                                       (0xFFFFFFFF&((data)<<0))
#define SFMODE_CMP0_RLT3_sfmode_cmp_rlt3_src(data)                                   ((0xFFFFFFFF&(data))>>0)
#define SFMODE_CMP0_RLT3_get_sfmode_cmp_rlt3(data)                                   ((0xFFFFFFFF&(data))>>0)


#define SFMODE_CMP1_RLT0                                                             0x980080F0
#define SFMODE_CMP1_RLT0_reg_addr                                                    "0xD80080F0"
#define SFMODE_CMP1_RLT0_reg                                                         0xD80080F0
#define set_SFMODE_CMP1_RLT0_reg(data)   (*((volatile unsigned int*) SFMODE_CMP1_RLT0_reg)=data)
#define get_SFMODE_CMP1_RLT0_reg   (*((volatile unsigned int*) SFMODE_CMP1_RLT0_reg))
#define SFMODE_CMP1_RLT0_inst_adr                                                    "0x003C"
#define SFMODE_CMP1_RLT0_inst                                                        0x003C
#define SFMODE_CMP1_RLT0_sfmode_cmp_rlt0_shift                                       (0)
#define SFMODE_CMP1_RLT0_sfmode_cmp_rlt0_mask                                        (0xFFFFFFFF)
#define SFMODE_CMP1_RLT0_sfmode_cmp_rlt0(data)                                       (0xFFFFFFFF&((data)<<0))
#define SFMODE_CMP1_RLT0_sfmode_cmp_rlt0_src(data)                                   ((0xFFFFFFFF&(data))>>0)
#define SFMODE_CMP1_RLT0_get_sfmode_cmp_rlt0(data)                                   ((0xFFFFFFFF&(data))>>0)


#define SFMODE_CMP1_RLT1                                                             0x980080F4
#define SFMODE_CMP1_RLT1_reg_addr                                                    "0xD80080F4"
#define SFMODE_CMP1_RLT1_reg                                                         0xD80080F4
#define set_SFMODE_CMP1_RLT1_reg(data)   (*((volatile unsigned int*) SFMODE_CMP1_RLT1_reg)=data)
#define get_SFMODE_CMP1_RLT1_reg   (*((volatile unsigned int*) SFMODE_CMP1_RLT1_reg))
#define SFMODE_CMP1_RLT1_inst_adr                                                    "0x003D"
#define SFMODE_CMP1_RLT1_inst                                                        0x003D
#define SFMODE_CMP1_RLT1_sfmode_cmp_rlt1_shift                                       (0)
#define SFMODE_CMP1_RLT1_sfmode_cmp_rlt1_mask                                        (0xFFFFFFFF)
#define SFMODE_CMP1_RLT1_sfmode_cmp_rlt1(data)                                       (0xFFFFFFFF&((data)<<0))
#define SFMODE_CMP1_RLT1_sfmode_cmp_rlt1_src(data)                                   ((0xFFFFFFFF&(data))>>0)
#define SFMODE_CMP1_RLT1_get_sfmode_cmp_rlt1(data)                                   ((0xFFFFFFFF&(data))>>0)


#define SFMODE_CMP1_RLT2                                                             0x980080F8
#define SFMODE_CMP1_RLT2_reg_addr                                                    "0xD80080F8"
#define SFMODE_CMP1_RLT2_reg                                                         0xD80080F8
#define set_SFMODE_CMP1_RLT2_reg(data)   (*((volatile unsigned int*) SFMODE_CMP1_RLT2_reg)=data)
#define get_SFMODE_CMP1_RLT2_reg   (*((volatile unsigned int*) SFMODE_CMP1_RLT2_reg))
#define SFMODE_CMP1_RLT2_inst_adr                                                    "0x003E"
#define SFMODE_CMP1_RLT2_inst                                                        0x003E
#define SFMODE_CMP1_RLT2_sfmode_cmp_rlt2_shift                                       (0)
#define SFMODE_CMP1_RLT2_sfmode_cmp_rlt2_mask                                        (0xFFFFFFFF)
#define SFMODE_CMP1_RLT2_sfmode_cmp_rlt2(data)                                       (0xFFFFFFFF&((data)<<0))
#define SFMODE_CMP1_RLT2_sfmode_cmp_rlt2_src(data)                                   ((0xFFFFFFFF&(data))>>0)
#define SFMODE_CMP1_RLT2_get_sfmode_cmp_rlt2(data)                                   ((0xFFFFFFFF&(data))>>0)


#define SFMODE_CMP1_RLT3                                                             0x980080FC
#define SFMODE_CMP1_RLT3_reg_addr                                                    "0xD80080FC"
#define SFMODE_CMP1_RLT3_reg                                                         0xD80080FC
#define set_SFMODE_CMP1_RLT3_reg(data)   (*((volatile unsigned int*) SFMODE_CMP1_RLT3_reg)=data)
#define get_SFMODE_CMP1_RLT3_reg   (*((volatile unsigned int*) SFMODE_CMP1_RLT3_reg))
#define SFMODE_CMP1_RLT3_inst_adr                                                    "0x003F"
#define SFMODE_CMP1_RLT3_inst                                                        0x003F
#define SFMODE_CMP1_RLT3_sfmode_cmp_rlt3_shift                                       (0)
#define SFMODE_CMP1_RLT3_sfmode_cmp_rlt3_mask                                        (0xFFFFFFFF)
#define SFMODE_CMP1_RLT3_sfmode_cmp_rlt3(data)                                       (0xFFFFFFFF&((data)<<0))
#define SFMODE_CMP1_RLT3_sfmode_cmp_rlt3_src(data)                                   ((0xFFFFFFFF&(data))>>0)
#define SFMODE_CMP1_RLT3_get_sfmode_cmp_rlt3(data)                                   ((0xFFFFFFFF&(data))>>0)


#define DC_64_WRITE_BUF_CTRL                                                         0x98008100
#define DC_64_WRITE_BUF_CTRL_reg_addr                                                "0xD8008100"
#define DC_64_WRITE_BUF_CTRL_reg                                                     0xD8008100
#define set_DC_64_WRITE_BUF_CTRL_reg(data)   (*((volatile unsigned int*) DC_64_WRITE_BUF_CTRL_reg)=data)
#define get_DC_64_WRITE_BUF_CTRL_reg   (*((volatile unsigned int*) DC_64_WRITE_BUF_CTRL_reg))
#define DC_64_WRITE_BUF_CTRL_inst_adr                                                "0x0040"
#define DC_64_WRITE_BUF_CTRL_inst                                                    0x0040
#define DC_64_WRITE_BUF_CTRL_disable_2nd_channel_shift                               (1)
#define DC_64_WRITE_BUF_CTRL_disable_2nd_channel_mask                                (0x00000002)
#define DC_64_WRITE_BUF_CTRL_disable_2nd_channel(data)                               (0x00000002&((data)<<1))
#define DC_64_WRITE_BUF_CTRL_disable_2nd_channel_src(data)                           ((0x00000002&(data))>>1)
#define DC_64_WRITE_BUF_CTRL_get_disable_2nd_channel(data)                           ((0x00000002&(data))>>1)
#define DC_64_WRITE_BUF_CTRL_full_transfer_shift                                     (0)
#define DC_64_WRITE_BUF_CTRL_full_transfer_mask                                      (0x00000001)
#define DC_64_WRITE_BUF_CTRL_full_transfer(data)                                     (0x00000001&((data)<<0))
#define DC_64_WRITE_BUF_CTRL_full_transfer_src(data)                                 ((0x00000001&(data))>>0)
#define DC_64_WRITE_BUF_CTRL_get_full_transfer(data)                                 ((0x00000001&(data))>>0)


#define DC_64_READ_BUF_CTRL                                                          0x98008104
#define DC_64_READ_BUF_CTRL_reg_addr                                                 "0xD8008104"
#define DC_64_READ_BUF_CTRL_reg                                                      0xD8008104
#define set_DC_64_READ_BUF_CTRL_reg(data)   (*((volatile unsigned int*) DC_64_READ_BUF_CTRL_reg)=data)
#define get_DC_64_READ_BUF_CTRL_reg   (*((volatile unsigned int*) DC_64_READ_BUF_CTRL_reg))
#define DC_64_READ_BUF_CTRL_inst_adr                                                 "0x0041"
#define DC_64_READ_BUF_CTRL_inst                                                     0x0041
#define DC_64_READ_BUF_CTRL_sync_cmd_cnt_threshold_shift                             (25)
#define DC_64_READ_BUF_CTRL_sync_cmd_cnt_threshold_mask                              (0x0E000000)
#define DC_64_READ_BUF_CTRL_sync_cmd_cnt_threshold(data)                             (0x0E000000&((data)<<25))
#define DC_64_READ_BUF_CTRL_sync_cmd_cnt_threshold_src(data)                         ((0x0E000000&(data))>>25)
#define DC_64_READ_BUF_CTRL_get_sync_cmd_cnt_threshold(data)                         ((0x0E000000&(data))>>25)
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb0_shift                              (23)
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb0_mask                               (0x01800000)
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb0(data)                              (0x01800000&((data)<<23))
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb0_src(data)                          ((0x01800000&(data))>>23)
#define DC_64_READ_BUF_CTRL_get_cmd_buf_threshold_sb0(data)                          ((0x01800000&(data))>>23)
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb1_shift                              (21)
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb1_mask                               (0x00600000)
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb1(data)                              (0x00600000&((data)<<21))
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb1_src(data)                          ((0x00600000&(data))>>21)
#define DC_64_READ_BUF_CTRL_get_cmd_buf_threshold_sb1(data)                          ((0x00600000&(data))>>21)
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb3_shift                              (19)
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb3_mask                               (0x00180000)
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb3(data)                              (0x00180000&((data)<<19))
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb3_src(data)                          ((0x00180000&(data))>>19)
#define DC_64_READ_BUF_CTRL_get_cmd_buf_threshold_sb3(data)                          ((0x00180000&(data))>>19)
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb4_shift                              (17)
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb4_mask                               (0x00060000)
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb4(data)                              (0x00060000&((data)<<17))
#define DC_64_READ_BUF_CTRL_cmd_buf_threshold_sb4_src(data)                          ((0x00060000&(data))>>17)
#define DC_64_READ_BUF_CTRL_get_cmd_buf_threshold_sb4(data)                          ((0x00060000&(data))>>17)
#define DC_64_READ_BUF_CTRL_disable_2nd_channel_shift                                (16)
#define DC_64_READ_BUF_CTRL_disable_2nd_channel_mask                                 (0x00010000)
#define DC_64_READ_BUF_CTRL_disable_2nd_channel(data)                                (0x00010000&((data)<<16))
#define DC_64_READ_BUF_CTRL_disable_2nd_channel_src(data)                            ((0x00010000&(data))>>16)
#define DC_64_READ_BUF_CTRL_get_disable_2nd_channel(data)                            ((0x00010000&(data))>>16)
#define DC_64_READ_BUF_CTRL_ever_full_shift                                          (15)
#define DC_64_READ_BUF_CTRL_ever_full_mask                                           (0x00008000)
#define DC_64_READ_BUF_CTRL_ever_full(data)                                          (0x00008000&((data)<<15))
#define DC_64_READ_BUF_CTRL_ever_full_src(data)                                      ((0x00008000&(data))>>15)
#define DC_64_READ_BUF_CTRL_get_ever_full(data)                                      ((0x00008000&(data))>>15)
#define DC_64_READ_BUF_CTRL_ever_reach_threshold_shift                               (14)
#define DC_64_READ_BUF_CTRL_ever_reach_threshold_mask                                (0x00004000)
#define DC_64_READ_BUF_CTRL_ever_reach_threshold(data)                               (0x00004000&((data)<<14))
#define DC_64_READ_BUF_CTRL_ever_reach_threshold_src(data)                           ((0x00004000&(data))>>14)
#define DC_64_READ_BUF_CTRL_get_ever_reach_threshold(data)                           ((0x00004000&(data))>>14)
#define DC_64_READ_BUF_CTRL_max_buf_level_shift                                      (7)
#define DC_64_READ_BUF_CTRL_max_buf_level_mask                                       (0x00003F80)
#define DC_64_READ_BUF_CTRL_max_buf_level(data)                                      (0x00003F80&((data)<<7))
#define DC_64_READ_BUF_CTRL_max_buf_level_src(data)                                  ((0x00003F80&(data))>>7)
#define DC_64_READ_BUF_CTRL_get_max_buf_level(data)                                  ((0x00003F80&(data))>>7)
#define DC_64_READ_BUF_CTRL_buf_allow_mask_cnt_shift                                 (0)
#define DC_64_READ_BUF_CTRL_buf_allow_mask_cnt_mask                                  (0x0000007F)
#define DC_64_READ_BUF_CTRL_buf_allow_mask_cnt(data)                                 (0x0000007F&((data)<<0))
#define DC_64_READ_BUF_CTRL_buf_allow_mask_cnt_src(data)                             ((0x0000007F&(data))>>0)
#define DC_64_READ_BUF_CTRL_get_buf_allow_mask_cnt(data)                             ((0x0000007F&(data))>>0)


#define DC_PRI_ADJ_CTRL                                                              0x98008110
#define DC_PRI_ADJ_CTRL_reg_addr                                                     "0xD8008110"
#define DC_PRI_ADJ_CTRL_reg                                                          0xD8008110
#define set_DC_PRI_ADJ_CTRL_reg(data)   (*((volatile unsigned int*) DC_PRI_ADJ_CTRL_reg)=data)
#define get_DC_PRI_ADJ_CTRL_reg   (*((volatile unsigned int*) DC_PRI_ADJ_CTRL_reg))
#define DC_PRI_ADJ_CTRL_inst_adr                                                     "0x0044"
#define DC_PRI_ADJ_CTRL_inst                                                         0x0044
#define DC_PRI_ADJ_CTRL_pri_up_period_cnt_shift                                      (8)
#define DC_PRI_ADJ_CTRL_pri_up_period_cnt_mask                                       (0x003FFF00)
#define DC_PRI_ADJ_CTRL_pri_up_period_cnt(data)                                      (0x003FFF00&((data)<<8))
#define DC_PRI_ADJ_CTRL_pri_up_period_cnt_src(data)                                  ((0x003FFF00&(data))>>8)
#define DC_PRI_ADJ_CTRL_get_pri_up_period_cnt(data)                                  ((0x003FFF00&(data))>>8)
#define DC_PRI_ADJ_CTRL_se_pri_up_en_shift                                           (7)
#define DC_PRI_ADJ_CTRL_se_pri_up_en_mask                                            (0x00000080)
#define DC_PRI_ADJ_CTRL_se_pri_up_en(data)                                           (0x00000080&((data)<<7))
#define DC_PRI_ADJ_CTRL_se_pri_up_en_src(data)                                       ((0x00000080&(data))>>7)
#define DC_PRI_ADJ_CTRL_get_se_pri_up_en(data)                                       ((0x00000080&(data))>>7)
#define DC_PRI_ADJ_CTRL_ve3_pri_up_en_shift                                          (6)
#define DC_PRI_ADJ_CTRL_ve3_pri_up_en_mask                                           (0x00000040)
#define DC_PRI_ADJ_CTRL_ve3_pri_up_en(data)                                          (0x00000040&((data)<<6))
#define DC_PRI_ADJ_CTRL_ve3_pri_up_en_src(data)                                      ((0x00000040&(data))>>6)
#define DC_PRI_ADJ_CTRL_get_ve3_pri_up_en(data)                                      ((0x00000040&(data))>>6)
#define DC_PRI_ADJ_CTRL_ve2_pri_up_en_shift                                          (5)
#define DC_PRI_ADJ_CTRL_ve2_pri_up_en_mask                                           (0x00000020)
#define DC_PRI_ADJ_CTRL_ve2_pri_up_en(data)                                          (0x00000020&((data)<<5))
#define DC_PRI_ADJ_CTRL_ve2_pri_up_en_src(data)                                      ((0x00000020&(data))>>5)
#define DC_PRI_ADJ_CTRL_get_ve2_pri_up_en(data)                                      ((0x00000020&(data))>>5)
#define DC_PRI_ADJ_CTRL_ve1_pri_up_en_shift                                          (4)
#define DC_PRI_ADJ_CTRL_ve1_pri_up_en_mask                                           (0x00000010)
#define DC_PRI_ADJ_CTRL_ve1_pri_up_en(data)                                          (0x00000010&((data)<<4))
#define DC_PRI_ADJ_CTRL_ve1_pri_up_en_src(data)                                      ((0x00000010&(data))>>4)
#define DC_PRI_ADJ_CTRL_get_ve1_pri_up_en(data)                                      ((0x00000010&(data))>>4)
#define DC_PRI_ADJ_CTRL_gpu_pri_up_en_shift                                          (3)
#define DC_PRI_ADJ_CTRL_gpu_pri_up_en_mask                                           (0x00000008)
#define DC_PRI_ADJ_CTRL_gpu_pri_up_en(data)                                          (0x00000008&((data)<<3))
#define DC_PRI_ADJ_CTRL_gpu_pri_up_en_src(data)                                      ((0x00000008&(data))>>3)
#define DC_PRI_ADJ_CTRL_get_gpu_pri_up_en(data)                                      ((0x00000008&(data))>>3)
#define DC_PRI_ADJ_CTRL_scpu_pri_up_en_shift                                         (2)
#define DC_PRI_ADJ_CTRL_scpu_pri_up_en_mask                                          (0x00000004)
#define DC_PRI_ADJ_CTRL_scpu_pri_up_en(data)                                         (0x00000004&((data)<<2))
#define DC_PRI_ADJ_CTRL_scpu_pri_up_en_src(data)                                     ((0x00000004&(data))>>2)
#define DC_PRI_ADJ_CTRL_get_scpu_pri_up_en(data)                                     ((0x00000004&(data))>>2)
#define DC_PRI_ADJ_CTRL_vo2_pri_up_en_shift                                          (1)
#define DC_PRI_ADJ_CTRL_vo2_pri_up_en_mask                                           (0x00000002)
#define DC_PRI_ADJ_CTRL_vo2_pri_up_en(data)                                          (0x00000002&((data)<<1))
#define DC_PRI_ADJ_CTRL_vo2_pri_up_en_src(data)                                      ((0x00000002&(data))>>1)
#define DC_PRI_ADJ_CTRL_get_vo2_pri_up_en(data)                                      ((0x00000002&(data))>>1)
#define DC_PRI_ADJ_CTRL_vo1_pri_up_en_shift                                          (0)
#define DC_PRI_ADJ_CTRL_vo1_pri_up_en_mask                                           (0x00000001)
#define DC_PRI_ADJ_CTRL_vo1_pri_up_en(data)                                          (0x00000001&((data)<<0))
#define DC_PRI_ADJ_CTRL_vo1_pri_up_en_src(data)                                      ((0x00000001&(data))>>0)
#define DC_PRI_ADJ_CTRL_get_vo1_pri_up_en(data)                                      ((0x00000001&(data))>>0)


#define DC_PRI_ADJ_CNT1                                                              0x98008114
#define DC_PRI_ADJ_CNT1_reg_addr                                                     "0xD8008114"
#define DC_PRI_ADJ_CNT1_reg                                                          0xD8008114
#define set_DC_PRI_ADJ_CNT1_reg(data)   (*((volatile unsigned int*) DC_PRI_ADJ_CNT1_reg)=data)
#define get_DC_PRI_ADJ_CNT1_reg   (*((volatile unsigned int*) DC_PRI_ADJ_CNT1_reg))
#define DC_PRI_ADJ_CNT1_inst_adr                                                     "0x0045"
#define DC_PRI_ADJ_CNT1_inst                                                         0x0045
#define DC_PRI_ADJ_CNT1_vo2_up_data_cnt_shift                                        (16)
#define DC_PRI_ADJ_CNT1_vo2_up_data_cnt_mask                                         (0x0FFF0000)
#define DC_PRI_ADJ_CNT1_vo2_up_data_cnt(data)                                        (0x0FFF0000&((data)<<16))
#define DC_PRI_ADJ_CNT1_vo2_up_data_cnt_src(data)                                    ((0x0FFF0000&(data))>>16)
#define DC_PRI_ADJ_CNT1_get_vo2_up_data_cnt(data)                                    ((0x0FFF0000&(data))>>16)
#define DC_PRI_ADJ_CNT1_vo1_up_data_cnt_shift                                        (0)
#define DC_PRI_ADJ_CNT1_vo1_up_data_cnt_mask                                         (0x00000FFF)
#define DC_PRI_ADJ_CNT1_vo1_up_data_cnt(data)                                        (0x00000FFF&((data)<<0))
#define DC_PRI_ADJ_CNT1_vo1_up_data_cnt_src(data)                                    ((0x00000FFF&(data))>>0)
#define DC_PRI_ADJ_CNT1_get_vo1_up_data_cnt(data)                                    ((0x00000FFF&(data))>>0)


#define DC_PRI_ADJ_CNT2                                                              0x98008118
#define DC_PRI_ADJ_CNT2_reg_addr                                                     "0xD8008118"
#define DC_PRI_ADJ_CNT2_reg                                                          0xD8008118
#define set_DC_PRI_ADJ_CNT2_reg(data)   (*((volatile unsigned int*) DC_PRI_ADJ_CNT2_reg)=data)
#define get_DC_PRI_ADJ_CNT2_reg   (*((volatile unsigned int*) DC_PRI_ADJ_CNT2_reg))
#define DC_PRI_ADJ_CNT2_inst_adr                                                     "0x0046"
#define DC_PRI_ADJ_CNT2_inst                                                         0x0046
#define DC_PRI_ADJ_CNT2_gpu_up_data_cnt_shift                                        (16)
#define DC_PRI_ADJ_CNT2_gpu_up_data_cnt_mask                                         (0x0FFF0000)
#define DC_PRI_ADJ_CNT2_gpu_up_data_cnt(data)                                        (0x0FFF0000&((data)<<16))
#define DC_PRI_ADJ_CNT2_gpu_up_data_cnt_src(data)                                    ((0x0FFF0000&(data))>>16)
#define DC_PRI_ADJ_CNT2_get_gpu_up_data_cnt(data)                                    ((0x0FFF0000&(data))>>16)
#define DC_PRI_ADJ_CNT2_scpu_up_data_cnt_shift                                       (0)
#define DC_PRI_ADJ_CNT2_scpu_up_data_cnt_mask                                        (0x00000FFF)
#define DC_PRI_ADJ_CNT2_scpu_up_data_cnt(data)                                       (0x00000FFF&((data)<<0))
#define DC_PRI_ADJ_CNT2_scpu_up_data_cnt_src(data)                                   ((0x00000FFF&(data))>>0)
#define DC_PRI_ADJ_CNT2_get_scpu_up_data_cnt(data)                                   ((0x00000FFF&(data))>>0)


#define DC_PRI_ADJ_CNT3                                                              0x9800811C
#define DC_PRI_ADJ_CNT3_reg_addr                                                     "0xD800811C"
#define DC_PRI_ADJ_CNT3_reg                                                          0xD800811C
#define set_DC_PRI_ADJ_CNT3_reg(data)   (*((volatile unsigned int*) DC_PRI_ADJ_CNT3_reg)=data)
#define get_DC_PRI_ADJ_CNT3_reg   (*((volatile unsigned int*) DC_PRI_ADJ_CNT3_reg))
#define DC_PRI_ADJ_CNT3_inst_adr                                                     "0x0047"
#define DC_PRI_ADJ_CNT3_inst                                                         0x0047
#define DC_PRI_ADJ_CNT3_ve2_up_data_cnt_shift                                        (16)
#define DC_PRI_ADJ_CNT3_ve2_up_data_cnt_mask                                         (0x0FFF0000)
#define DC_PRI_ADJ_CNT3_ve2_up_data_cnt(data)                                        (0x0FFF0000&((data)<<16))
#define DC_PRI_ADJ_CNT3_ve2_up_data_cnt_src(data)                                    ((0x0FFF0000&(data))>>16)
#define DC_PRI_ADJ_CNT3_get_ve2_up_data_cnt(data)                                    ((0x0FFF0000&(data))>>16)
#define DC_PRI_ADJ_CNT3_ve1_up_data_cnt_shift                                        (0)
#define DC_PRI_ADJ_CNT3_ve1_up_data_cnt_mask                                         (0x00000FFF)
#define DC_PRI_ADJ_CNT3_ve1_up_data_cnt(data)                                        (0x00000FFF&((data)<<0))
#define DC_PRI_ADJ_CNT3_ve1_up_data_cnt_src(data)                                    ((0x00000FFF&(data))>>0)
#define DC_PRI_ADJ_CNT3_get_ve1_up_data_cnt(data)                                    ((0x00000FFF&(data))>>0)


#define DC_PRI_ADJ_CNT4                                                              0x98008120
#define DC_PRI_ADJ_CNT4_reg_addr                                                     "0xD8008120"
#define DC_PRI_ADJ_CNT4_reg                                                          0xD8008120
#define set_DC_PRI_ADJ_CNT4_reg(data)   (*((volatile unsigned int*) DC_PRI_ADJ_CNT4_reg)=data)
#define get_DC_PRI_ADJ_CNT4_reg   (*((volatile unsigned int*) DC_PRI_ADJ_CNT4_reg))
#define DC_PRI_ADJ_CNT4_inst_adr                                                     "0x0048"
#define DC_PRI_ADJ_CNT4_inst                                                         0x0048
#define DC_PRI_ADJ_CNT4_se_up_data_cnt_shift                                         (16)
#define DC_PRI_ADJ_CNT4_se_up_data_cnt_mask                                          (0x0FFF0000)
#define DC_PRI_ADJ_CNT4_se_up_data_cnt(data)                                         (0x0FFF0000&((data)<<16))
#define DC_PRI_ADJ_CNT4_se_up_data_cnt_src(data)                                     ((0x0FFF0000&(data))>>16)
#define DC_PRI_ADJ_CNT4_get_se_up_data_cnt(data)                                     ((0x0FFF0000&(data))>>16)
#define DC_PRI_ADJ_CNT4_ve3_up_data_cnt_shift                                        (0)
#define DC_PRI_ADJ_CNT4_ve3_up_data_cnt_mask                                         (0x00000FFF)
#define DC_PRI_ADJ_CNT4_ve3_up_data_cnt(data)                                        (0x00000FFF&((data)<<0))
#define DC_PRI_ADJ_CNT4_ve3_up_data_cnt_src(data)                                    ((0x00000FFF&(data))>>0)
#define DC_PRI_ADJ_CNT4_get_ve3_up_data_cnt(data)                                    ((0x00000FFF&(data))>>0)


#define DC_CMD_PAR_ST                                                                0x98008124
#define DC_CMD_PAR_ST_reg_addr                                                       "0xD8008124"
#define DC_CMD_PAR_ST_reg                                                            0xD8008124
#define set_DC_CMD_PAR_ST_reg(data)   (*((volatile unsigned int*) DC_CMD_PAR_ST_reg)=data)
#define get_DC_CMD_PAR_ST_reg   (*((volatile unsigned int*) DC_CMD_PAR_ST_reg))
#define DC_CMD_PAR_ST_inst_adr                                                       "0x0049"
#define DC_CMD_PAR_ST_inst                                                           0x0049
#define DC_CMD_PAR_ST_cmd_par_err_en_1_shift                                         (31)
#define DC_CMD_PAR_ST_cmd_par_err_en_1_mask                                          (0x80000000)
#define DC_CMD_PAR_ST_cmd_par_err_en_1(data)                                         (0x80000000&((data)<<31))
#define DC_CMD_PAR_ST_cmd_par_err_en_1_src(data)                                     ((0x80000000&(data))>>31)
#define DC_CMD_PAR_ST_get_cmd_par_err_en_1(data)                                     ((0x80000000&(data))>>31)
#define DC_CMD_PAR_ST_cmd_par_err_id_1_shift                                         (16)
#define DC_CMD_PAR_ST_cmd_par_err_id_1_mask                                          (0x7FFF0000)
#define DC_CMD_PAR_ST_cmd_par_err_id_1(data)                                         (0x7FFF0000&((data)<<16))
#define DC_CMD_PAR_ST_cmd_par_err_id_1_src(data)                                     ((0x7FFF0000&(data))>>16)
#define DC_CMD_PAR_ST_get_cmd_par_err_id_1(data)                                     ((0x7FFF0000&(data))>>16)
#define DC_CMD_PAR_ST_cmd_par_err_en_0_shift                                         (15)
#define DC_CMD_PAR_ST_cmd_par_err_en_0_mask                                          (0x00008000)
#define DC_CMD_PAR_ST_cmd_par_err_en_0(data)                                         (0x00008000&((data)<<15))
#define DC_CMD_PAR_ST_cmd_par_err_en_0_src(data)                                     ((0x00008000&(data))>>15)
#define DC_CMD_PAR_ST_get_cmd_par_err_en_0(data)                                     ((0x00008000&(data))>>15)
#define DC_CMD_PAR_ST_cmd_par_err_id_0_shift                                         (0)
#define DC_CMD_PAR_ST_cmd_par_err_id_0_mask                                          (0x00007FFF)
#define DC_CMD_PAR_ST_cmd_par_err_id_0(data)                                         (0x00007FFF&((data)<<0))
#define DC_CMD_PAR_ST_cmd_par_err_id_0_src(data)                                     ((0x00007FFF&(data))>>0)
#define DC_CMD_PAR_ST_get_cmd_par_err_id_0(data)                                     ((0x00007FFF&(data))>>0)


#define DC_BW_ADJ_CTRL                                                               0x98008130
#define DC_BW_ADJ_CTRL_reg_addr                                                      "0xD8008130"
#define DC_BW_ADJ_CTRL_reg                                                           0xD8008130
#define set_DC_BW_ADJ_CTRL_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CTRL_reg)=data)
#define get_DC_BW_ADJ_CTRL_reg   (*((volatile unsigned int*) DC_BW_ADJ_CTRL_reg))
#define DC_BW_ADJ_CTRL_inst_adr                                                      "0x004C"
#define DC_BW_ADJ_CTRL_inst                                                          0x004C
#define DC_BW_ADJ_CTRL_bw_up_period_cnt_en_shift                                     (31)
#define DC_BW_ADJ_CTRL_bw_up_period_cnt_en_mask                                      (0x80000000)
#define DC_BW_ADJ_CTRL_bw_up_period_cnt_en(data)                                     (0x80000000&((data)<<31))
#define DC_BW_ADJ_CTRL_bw_up_period_cnt_en_src(data)                                 ((0x80000000&(data))>>31)
#define DC_BW_ADJ_CTRL_get_bw_up_period_cnt_en(data)                                 ((0x80000000&(data))>>31)
#define DC_BW_ADJ_CTRL_bw_up_period_cnt_shift                                        (8)
#define DC_BW_ADJ_CTRL_bw_up_period_cnt_mask                                         (0x003FFF00)
#define DC_BW_ADJ_CTRL_bw_up_period_cnt(data)                                        (0x003FFF00&((data)<<8))
#define DC_BW_ADJ_CTRL_bw_up_period_cnt_src(data)                                    ((0x003FFF00&(data))>>8)
#define DC_BW_ADJ_CTRL_get_bw_up_period_cnt(data)                                    ((0x003FFF00&(data))>>8)
#define DC_BW_ADJ_CTRL_ve3_bw_up_en_shift                                            (6)
#define DC_BW_ADJ_CTRL_ve3_bw_up_en_mask                                             (0x00000040)
#define DC_BW_ADJ_CTRL_ve3_bw_up_en(data)                                            (0x00000040&((data)<<6))
#define DC_BW_ADJ_CTRL_ve3_bw_up_en_src(data)                                        ((0x00000040&(data))>>6)
#define DC_BW_ADJ_CTRL_get_ve3_bw_up_en(data)                                        ((0x00000040&(data))>>6)
#define DC_BW_ADJ_CTRL_ve2_bw_up_en_shift                                            (5)
#define DC_BW_ADJ_CTRL_ve2_bw_up_en_mask                                             (0x00000020)
#define DC_BW_ADJ_CTRL_ve2_bw_up_en(data)                                            (0x00000020&((data)<<5))
#define DC_BW_ADJ_CTRL_ve2_bw_up_en_src(data)                                        ((0x00000020&(data))>>5)
#define DC_BW_ADJ_CTRL_get_ve2_bw_up_en(data)                                        ((0x00000020&(data))>>5)
#define DC_BW_ADJ_CTRL_ve1_bw_up_en_shift                                            (4)
#define DC_BW_ADJ_CTRL_ve1_bw_up_en_mask                                             (0x00000010)
#define DC_BW_ADJ_CTRL_ve1_bw_up_en(data)                                            (0x00000010&((data)<<4))
#define DC_BW_ADJ_CTRL_ve1_bw_up_en_src(data)                                        ((0x00000010&(data))>>4)
#define DC_BW_ADJ_CTRL_get_ve1_bw_up_en(data)                                        ((0x00000010&(data))>>4)
#define DC_BW_ADJ_CTRL_gpu_bw_up_en_shift                                            (3)
#define DC_BW_ADJ_CTRL_gpu_bw_up_en_mask                                             (0x00000008)
#define DC_BW_ADJ_CTRL_gpu_bw_up_en(data)                                            (0x00000008&((data)<<3))
#define DC_BW_ADJ_CTRL_gpu_bw_up_en_src(data)                                        ((0x00000008&(data))>>3)
#define DC_BW_ADJ_CTRL_get_gpu_bw_up_en(data)                                        ((0x00000008&(data))>>3)
#define DC_BW_ADJ_CTRL_scpu_bw_up_en_shift                                           (2)
#define DC_BW_ADJ_CTRL_scpu_bw_up_en_mask                                            (0x00000004)
#define DC_BW_ADJ_CTRL_scpu_bw_up_en(data)                                           (0x00000004&((data)<<2))
#define DC_BW_ADJ_CTRL_scpu_bw_up_en_src(data)                                       ((0x00000004&(data))>>2)
#define DC_BW_ADJ_CTRL_get_scpu_bw_up_en(data)                                       ((0x00000004&(data))>>2)
#define DC_BW_ADJ_CTRL_vo1_bw_up_en_shift                                            (0)
#define DC_BW_ADJ_CTRL_vo1_bw_up_en_mask                                             (0x00000001)
#define DC_BW_ADJ_CTRL_vo1_bw_up_en(data)                                            (0x00000001&((data)<<0))
#define DC_BW_ADJ_CTRL_vo1_bw_up_en_src(data)                                        ((0x00000001&(data))>>0)
#define DC_BW_ADJ_CTRL_get_vo1_bw_up_en(data)                                        ((0x00000001&(data))>>0)


#define DC_BW_ADJ_CNT1_DC0                                                           0x98008134
#define DC_BW_ADJ_CNT1_DC0_reg_addr                                                  "0xD8008134"
#define DC_BW_ADJ_CNT1_DC0_reg                                                       0xD8008134
#define set_DC_BW_ADJ_CNT1_DC0_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CNT1_DC0_reg)=data)
#define get_DC_BW_ADJ_CNT1_DC0_reg   (*((volatile unsigned int*) DC_BW_ADJ_CNT1_DC0_reg))
#define DC_BW_ADJ_CNT1_DC0_inst_adr                                                  "0x004D"
#define DC_BW_ADJ_CNT1_DC0_inst                                                      0x004D
#define DC_BW_ADJ_CNT1_DC0_vo1_bw_que_threshold2_dc0_shift                           (24)
#define DC_BW_ADJ_CNT1_DC0_vo1_bw_que_threshold2_dc0_mask                            (0xFF000000)
#define DC_BW_ADJ_CNT1_DC0_vo1_bw_que_threshold2_dc0(data)                           (0xFF000000&((data)<<24))
#define DC_BW_ADJ_CNT1_DC0_vo1_bw_que_threshold2_dc0_src(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT1_DC0_get_vo1_bw_que_threshold2_dc0(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT1_DC0_vo1_bw_que_threshold1_dc0_shift                           (16)
#define DC_BW_ADJ_CNT1_DC0_vo1_bw_que_threshold1_dc0_mask                            (0x00FF0000)
#define DC_BW_ADJ_CNT1_DC0_vo1_bw_que_threshold1_dc0(data)                           (0x00FF0000&((data)<<16))
#define DC_BW_ADJ_CNT1_DC0_vo1_bw_que_threshold1_dc0_src(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT1_DC0_get_vo1_bw_que_threshold1_dc0(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT1_DC0_vo1_bw_data_threshold_dc0_shift                           (0)
#define DC_BW_ADJ_CNT1_DC0_vo1_bw_data_threshold_dc0_mask                            (0x00007FFF)
#define DC_BW_ADJ_CNT1_DC0_vo1_bw_data_threshold_dc0(data)                           (0x00007FFF&((data)<<0))
#define DC_BW_ADJ_CNT1_DC0_vo1_bw_data_threshold_dc0_src(data)                       ((0x00007FFF&(data))>>0)
#define DC_BW_ADJ_CNT1_DC0_get_vo1_bw_data_threshold_dc0(data)                       ((0x00007FFF&(data))>>0)


#define DC_BW_ADJ_CNT2_DC0                                                           0x98008138
#define DC_BW_ADJ_CNT2_DC0_reg_addr                                                  "0xD8008138"
#define DC_BW_ADJ_CNT2_DC0_reg                                                       0xD8008138
#define set_DC_BW_ADJ_CNT2_DC0_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CNT2_DC0_reg)=data)
#define get_DC_BW_ADJ_CNT2_DC0_reg   (*((volatile unsigned int*) DC_BW_ADJ_CNT2_DC0_reg))
#define DC_BW_ADJ_CNT2_DC0_inst_adr                                                  "0x004E"
#define DC_BW_ADJ_CNT2_DC0_inst                                                      0x004E
#define DC_BW_ADJ_CNT2_DC0_scpu_bw_que_threshold2_dc0_shift                          (24)
#define DC_BW_ADJ_CNT2_DC0_scpu_bw_que_threshold2_dc0_mask                           (0xFF000000)
#define DC_BW_ADJ_CNT2_DC0_scpu_bw_que_threshold2_dc0(data)                          (0xFF000000&((data)<<24))
#define DC_BW_ADJ_CNT2_DC0_scpu_bw_que_threshold2_dc0_src(data)                      ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT2_DC0_get_scpu_bw_que_threshold2_dc0(data)                      ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT2_DC0_scpu_bw_que_threshold1_dc0_shift                          (16)
#define DC_BW_ADJ_CNT2_DC0_scpu_bw_que_threshold1_dc0_mask                           (0x00FF0000)
#define DC_BW_ADJ_CNT2_DC0_scpu_bw_que_threshold1_dc0(data)                          (0x00FF0000&((data)<<16))
#define DC_BW_ADJ_CNT2_DC0_scpu_bw_que_threshold1_dc0_src(data)                      ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT2_DC0_get_scpu_bw_que_threshold1_dc0(data)                      ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT2_DC0_scpu_bw_data_threshold_dc0_shift                          (0)
#define DC_BW_ADJ_CNT2_DC0_scpu_bw_data_threshold_dc0_mask                           (0x00007FFF)
#define DC_BW_ADJ_CNT2_DC0_scpu_bw_data_threshold_dc0(data)                          (0x00007FFF&((data)<<0))
#define DC_BW_ADJ_CNT2_DC0_scpu_bw_data_threshold_dc0_src(data)                      ((0x00007FFF&(data))>>0)
#define DC_BW_ADJ_CNT2_DC0_get_scpu_bw_data_threshold_dc0(data)                      ((0x00007FFF&(data))>>0)


#define DC_BW_ADJ_CNT3_DC0                                                           0x9800813C
#define DC_BW_ADJ_CNT3_DC0_reg_addr                                                  "0xD800813C"
#define DC_BW_ADJ_CNT3_DC0_reg                                                       0xD800813C
#define set_DC_BW_ADJ_CNT3_DC0_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CNT3_DC0_reg)=data)
#define get_DC_BW_ADJ_CNT3_DC0_reg   (*((volatile unsigned int*) DC_BW_ADJ_CNT3_DC0_reg))
#define DC_BW_ADJ_CNT3_DC0_inst_adr                                                  "0x004F"
#define DC_BW_ADJ_CNT3_DC0_inst                                                      0x004F
#define DC_BW_ADJ_CNT3_DC0_gpu_bw_que_threshold2_dc0_shift                           (24)
#define DC_BW_ADJ_CNT3_DC0_gpu_bw_que_threshold2_dc0_mask                            (0xFF000000)
#define DC_BW_ADJ_CNT3_DC0_gpu_bw_que_threshold2_dc0(data)                           (0xFF000000&((data)<<24))
#define DC_BW_ADJ_CNT3_DC0_gpu_bw_que_threshold2_dc0_src(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT3_DC0_get_gpu_bw_que_threshold2_dc0(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT3_DC0_gpu_bw_que_threshold1_dc0_shift                           (16)
#define DC_BW_ADJ_CNT3_DC0_gpu_bw_que_threshold1_dc0_mask                            (0x00FF0000)
#define DC_BW_ADJ_CNT3_DC0_gpu_bw_que_threshold1_dc0(data)                           (0x00FF0000&((data)<<16))
#define DC_BW_ADJ_CNT3_DC0_gpu_bw_que_threshold1_dc0_src(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT3_DC0_get_gpu_bw_que_threshold1_dc0(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT3_DC0_gpu_bw_data_threshold_dc0_shift                           (0)
#define DC_BW_ADJ_CNT3_DC0_gpu_bw_data_threshold_dc0_mask                            (0x00007FFF)
#define DC_BW_ADJ_CNT3_DC0_gpu_bw_data_threshold_dc0(data)                           (0x00007FFF&((data)<<0))
#define DC_BW_ADJ_CNT3_DC0_gpu_bw_data_threshold_dc0_src(data)                       ((0x00007FFF&(data))>>0)
#define DC_BW_ADJ_CNT3_DC0_get_gpu_bw_data_threshold_dc0(data)                       ((0x00007FFF&(data))>>0)


#define DC_BW_ADJ_CNT4_DC0                                                           0x98008140
#define DC_BW_ADJ_CNT4_DC0_reg_addr                                                  "0xD8008140"
#define DC_BW_ADJ_CNT4_DC0_reg                                                       0xD8008140
#define set_DC_BW_ADJ_CNT4_DC0_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CNT4_DC0_reg)=data)
#define get_DC_BW_ADJ_CNT4_DC0_reg   (*((volatile unsigned int*) DC_BW_ADJ_CNT4_DC0_reg))
#define DC_BW_ADJ_CNT4_DC0_inst_adr                                                  "0x0050"
#define DC_BW_ADJ_CNT4_DC0_inst                                                      0x0050
#define DC_BW_ADJ_CNT4_DC0_ve1_bw_que_threshold2_dc0_shift                           (24)
#define DC_BW_ADJ_CNT4_DC0_ve1_bw_que_threshold2_dc0_mask                            (0xFF000000)
#define DC_BW_ADJ_CNT4_DC0_ve1_bw_que_threshold2_dc0(data)                           (0xFF000000&((data)<<24))
#define DC_BW_ADJ_CNT4_DC0_ve1_bw_que_threshold2_dc0_src(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT4_DC0_get_ve1_bw_que_threshold2_dc0(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT4_DC0_ve1_bw_que_threshold1_dc0_shift                           (16)
#define DC_BW_ADJ_CNT4_DC0_ve1_bw_que_threshold1_dc0_mask                            (0x00FF0000)
#define DC_BW_ADJ_CNT4_DC0_ve1_bw_que_threshold1_dc0(data)                           (0x00FF0000&((data)<<16))
#define DC_BW_ADJ_CNT4_DC0_ve1_bw_que_threshold1_dc0_src(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT4_DC0_get_ve1_bw_que_threshold1_dc0(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT4_DC0_ve1_bw_data_threshold_dc0_shift                           (0)
#define DC_BW_ADJ_CNT4_DC0_ve1_bw_data_threshold_dc0_mask                            (0x00007FFF)
#define DC_BW_ADJ_CNT4_DC0_ve1_bw_data_threshold_dc0(data)                           (0x00007FFF&((data)<<0))
#define DC_BW_ADJ_CNT4_DC0_ve1_bw_data_threshold_dc0_src(data)                       ((0x00007FFF&(data))>>0)
#define DC_BW_ADJ_CNT4_DC0_get_ve1_bw_data_threshold_dc0(data)                       ((0x00007FFF&(data))>>0)


#define DC_BW_ADJ_CNT5_DC0                                                           0x98008144
#define DC_BW_ADJ_CNT5_DC0_reg_addr                                                  "0xD8008144"
#define DC_BW_ADJ_CNT5_DC0_reg                                                       0xD8008144
#define set_DC_BW_ADJ_CNT5_DC0_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CNT5_DC0_reg)=data)
#define get_DC_BW_ADJ_CNT5_DC0_reg   (*((volatile unsigned int*) DC_BW_ADJ_CNT5_DC0_reg))
#define DC_BW_ADJ_CNT5_DC0_inst_adr                                                  "0x0051"
#define DC_BW_ADJ_CNT5_DC0_inst                                                      0x0051
#define DC_BW_ADJ_CNT5_DC0_ve2_bw_que_threshold2_dc0_shift                           (24)
#define DC_BW_ADJ_CNT5_DC0_ve2_bw_que_threshold2_dc0_mask                            (0xFF000000)
#define DC_BW_ADJ_CNT5_DC0_ve2_bw_que_threshold2_dc0(data)                           (0xFF000000&((data)<<24))
#define DC_BW_ADJ_CNT5_DC0_ve2_bw_que_threshold2_dc0_src(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT5_DC0_get_ve2_bw_que_threshold2_dc0(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT5_DC0_ve2_bw_que_threshold1_dc0_shift                           (16)
#define DC_BW_ADJ_CNT5_DC0_ve2_bw_que_threshold1_dc0_mask                            (0x00FF0000)
#define DC_BW_ADJ_CNT5_DC0_ve2_bw_que_threshold1_dc0(data)                           (0x00FF0000&((data)<<16))
#define DC_BW_ADJ_CNT5_DC0_ve2_bw_que_threshold1_dc0_src(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT5_DC0_get_ve2_bw_que_threshold1_dc0(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT5_DC0_ve2_bw_data_threshold_dc0_shift                           (0)
#define DC_BW_ADJ_CNT5_DC0_ve2_bw_data_threshold_dc0_mask                            (0x00007FFF)
#define DC_BW_ADJ_CNT5_DC0_ve2_bw_data_threshold_dc0(data)                           (0x00007FFF&((data)<<0))
#define DC_BW_ADJ_CNT5_DC0_ve2_bw_data_threshold_dc0_src(data)                       ((0x00007FFF&(data))>>0)
#define DC_BW_ADJ_CNT5_DC0_get_ve2_bw_data_threshold_dc0(data)                       ((0x00007FFF&(data))>>0)


#define DC_BW_ADJ_CNT6_DC0                                                           0x98008148
#define DC_BW_ADJ_CNT6_DC0_reg_addr                                                  "0xD8008148"
#define DC_BW_ADJ_CNT6_DC0_reg                                                       0xD8008148
#define set_DC_BW_ADJ_CNT6_DC0_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CNT6_DC0_reg)=data)
#define get_DC_BW_ADJ_CNT6_DC0_reg   (*((volatile unsigned int*) DC_BW_ADJ_CNT6_DC0_reg))
#define DC_BW_ADJ_CNT6_DC0_inst_adr                                                  "0x0052"
#define DC_BW_ADJ_CNT6_DC0_inst                                                      0x0052
#define DC_BW_ADJ_CNT6_DC0_ve3_bw_que_threshold2_dc0_shift                           (24)
#define DC_BW_ADJ_CNT6_DC0_ve3_bw_que_threshold2_dc0_mask                            (0xFF000000)
#define DC_BW_ADJ_CNT6_DC0_ve3_bw_que_threshold2_dc0(data)                           (0xFF000000&((data)<<24))
#define DC_BW_ADJ_CNT6_DC0_ve3_bw_que_threshold2_dc0_src(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT6_DC0_get_ve3_bw_que_threshold2_dc0(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT6_DC0_ve3_bw_que_threshold1_dc0_shift                           (16)
#define DC_BW_ADJ_CNT6_DC0_ve3_bw_que_threshold1_dc0_mask                            (0x00FF0000)
#define DC_BW_ADJ_CNT6_DC0_ve3_bw_que_threshold1_dc0(data)                           (0x00FF0000&((data)<<16))
#define DC_BW_ADJ_CNT6_DC0_ve3_bw_que_threshold1_dc0_src(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT6_DC0_get_ve3_bw_que_threshold1_dc0(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT6_DC0_ve3_bw_data_threshold_dc0_shift                           (0)
#define DC_BW_ADJ_CNT6_DC0_ve3_bw_data_threshold_dc0_mask                            (0x00007FFF)
#define DC_BW_ADJ_CNT6_DC0_ve3_bw_data_threshold_dc0(data)                           (0x00007FFF&((data)<<0))
#define DC_BW_ADJ_CNT6_DC0_ve3_bw_data_threshold_dc0_src(data)                       ((0x00007FFF&(data))>>0)
#define DC_BW_ADJ_CNT6_DC0_get_ve3_bw_data_threshold_dc0(data)                       ((0x00007FFF&(data))>>0)


#define DC_BW_ADJ_CNT1_DC1                                                           0x9800814C
#define DC_BW_ADJ_CNT1_DC1_reg_addr                                                  "0xD800814C"
#define DC_BW_ADJ_CNT1_DC1_reg                                                       0xD800814C
#define set_DC_BW_ADJ_CNT1_DC1_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CNT1_DC1_reg)=data)
#define get_DC_BW_ADJ_CNT1_DC1_reg   (*((volatile unsigned int*) DC_BW_ADJ_CNT1_DC1_reg))
#define DC_BW_ADJ_CNT1_DC1_inst_adr                                                  "0x0053"
#define DC_BW_ADJ_CNT1_DC1_inst                                                      0x0053
#define DC_BW_ADJ_CNT1_DC1_vo1_bw_que_threshold2_dc1_shift                           (24)
#define DC_BW_ADJ_CNT1_DC1_vo1_bw_que_threshold2_dc1_mask                            (0xFF000000)
#define DC_BW_ADJ_CNT1_DC1_vo1_bw_que_threshold2_dc1(data)                           (0xFF000000&((data)<<24))
#define DC_BW_ADJ_CNT1_DC1_vo1_bw_que_threshold2_dc1_src(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT1_DC1_get_vo1_bw_que_threshold2_dc1(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT1_DC1_vo1_bw_que_threshold1_dc1_shift                           (16)
#define DC_BW_ADJ_CNT1_DC1_vo1_bw_que_threshold1_dc1_mask                            (0x00FF0000)
#define DC_BW_ADJ_CNT1_DC1_vo1_bw_que_threshold1_dc1(data)                           (0x00FF0000&((data)<<16))
#define DC_BW_ADJ_CNT1_DC1_vo1_bw_que_threshold1_dc1_src(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT1_DC1_get_vo1_bw_que_threshold1_dc1(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT1_DC1_vo1_bw_data_threshold_dc1_shift                           (0)
#define DC_BW_ADJ_CNT1_DC1_vo1_bw_data_threshold_dc1_mask                            (0x00007FFF)
#define DC_BW_ADJ_CNT1_DC1_vo1_bw_data_threshold_dc1(data)                           (0x00007FFF&((data)<<0))
#define DC_BW_ADJ_CNT1_DC1_vo1_bw_data_threshold_dc1_src(data)                       ((0x00007FFF&(data))>>0)
#define DC_BW_ADJ_CNT1_DC1_get_vo1_bw_data_threshold_dc1(data)                       ((0x00007FFF&(data))>>0)


#define DC_BW_ADJ_CNT2_DC1                                                           0x98008150
#define DC_BW_ADJ_CNT2_DC1_reg_addr                                                  "0xD8008150"
#define DC_BW_ADJ_CNT2_DC1_reg                                                       0xD8008150
#define set_DC_BW_ADJ_CNT2_DC1_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CNT2_DC1_reg)=data)
#define get_DC_BW_ADJ_CNT2_DC1_reg   (*((volatile unsigned int*) DC_BW_ADJ_CNT2_DC1_reg))
#define DC_BW_ADJ_CNT2_DC1_inst_adr                                                  "0x0054"
#define DC_BW_ADJ_CNT2_DC1_inst                                                      0x0054
#define DC_BW_ADJ_CNT2_DC1_scpu_bw_que_threshold2_dc1_shift                          (24)
#define DC_BW_ADJ_CNT2_DC1_scpu_bw_que_threshold2_dc1_mask                           (0xFF000000)
#define DC_BW_ADJ_CNT2_DC1_scpu_bw_que_threshold2_dc1(data)                          (0xFF000000&((data)<<24))
#define DC_BW_ADJ_CNT2_DC1_scpu_bw_que_threshold2_dc1_src(data)                      ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT2_DC1_get_scpu_bw_que_threshold2_dc1(data)                      ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT2_DC1_scpu_bw_que_threshold1_dc1_shift                          (16)
#define DC_BW_ADJ_CNT2_DC1_scpu_bw_que_threshold1_dc1_mask                           (0x00FF0000)
#define DC_BW_ADJ_CNT2_DC1_scpu_bw_que_threshold1_dc1(data)                          (0x00FF0000&((data)<<16))
#define DC_BW_ADJ_CNT2_DC1_scpu_bw_que_threshold1_dc1_src(data)                      ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT2_DC1_get_scpu_bw_que_threshold1_dc1(data)                      ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT2_DC1_scpu_bw_data_threshold_dc1_shift                          (0)
#define DC_BW_ADJ_CNT2_DC1_scpu_bw_data_threshold_dc1_mask                           (0x00007FFF)
#define DC_BW_ADJ_CNT2_DC1_scpu_bw_data_threshold_dc1(data)                          (0x00007FFF&((data)<<0))
#define DC_BW_ADJ_CNT2_DC1_scpu_bw_data_threshold_dc1_src(data)                      ((0x00007FFF&(data))>>0)
#define DC_BW_ADJ_CNT2_DC1_get_scpu_bw_data_threshold_dc1(data)                      ((0x00007FFF&(data))>>0)


#define DC_BW_ADJ_CNT3_DC1                                                           0x98008154
#define DC_BW_ADJ_CNT3_DC1_reg_addr                                                  "0xD8008154"
#define DC_BW_ADJ_CNT3_DC1_reg                                                       0xD8008154
#define set_DC_BW_ADJ_CNT3_DC1_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CNT3_DC1_reg)=data)
#define get_DC_BW_ADJ_CNT3_DC1_reg   (*((volatile unsigned int*) DC_BW_ADJ_CNT3_DC1_reg))
#define DC_BW_ADJ_CNT3_DC1_inst_adr                                                  "0x0055"
#define DC_BW_ADJ_CNT3_DC1_inst                                                      0x0055
#define DC_BW_ADJ_CNT3_DC1_gpu_bw_que_threshold2_dc1_shift                           (24)
#define DC_BW_ADJ_CNT3_DC1_gpu_bw_que_threshold2_dc1_mask                            (0xFF000000)
#define DC_BW_ADJ_CNT3_DC1_gpu_bw_que_threshold2_dc1(data)                           (0xFF000000&((data)<<24))
#define DC_BW_ADJ_CNT3_DC1_gpu_bw_que_threshold2_dc1_src(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT3_DC1_get_gpu_bw_que_threshold2_dc1(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT3_DC1_gpu_bw_que_threshold1_dc1_shift                           (16)
#define DC_BW_ADJ_CNT3_DC1_gpu_bw_que_threshold1_dc1_mask                            (0x00FF0000)
#define DC_BW_ADJ_CNT3_DC1_gpu_bw_que_threshold1_dc1(data)                           (0x00FF0000&((data)<<16))
#define DC_BW_ADJ_CNT3_DC1_gpu_bw_que_threshold1_dc1_src(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT3_DC1_get_gpu_bw_que_threshold1_dc1(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT3_DC1_gpu_bw_data_threshold_dc1_shift                           (0)
#define DC_BW_ADJ_CNT3_DC1_gpu_bw_data_threshold_dc1_mask                            (0x00007FFF)
#define DC_BW_ADJ_CNT3_DC1_gpu_bw_data_threshold_dc1(data)                           (0x00007FFF&((data)<<0))
#define DC_BW_ADJ_CNT3_DC1_gpu_bw_data_threshold_dc1_src(data)                       ((0x00007FFF&(data))>>0)
#define DC_BW_ADJ_CNT3_DC1_get_gpu_bw_data_threshold_dc1(data)                       ((0x00007FFF&(data))>>0)


#define DC_BW_ADJ_CNT4_DC1                                                           0x98008158
#define DC_BW_ADJ_CNT4_DC1_reg_addr                                                  "0xD8008158"
#define DC_BW_ADJ_CNT4_DC1_reg                                                       0xD8008158
#define set_DC_BW_ADJ_CNT4_DC1_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CNT4_DC1_reg)=data)
#define get_DC_BW_ADJ_CNT4_DC1_reg   (*((volatile unsigned int*) DC_BW_ADJ_CNT4_DC1_reg))
#define DC_BW_ADJ_CNT4_DC1_inst_adr                                                  "0x0056"
#define DC_BW_ADJ_CNT4_DC1_inst                                                      0x0056
#define DC_BW_ADJ_CNT4_DC1_ve1_bw_que_threshold2_dc1_shift                           (24)
#define DC_BW_ADJ_CNT4_DC1_ve1_bw_que_threshold2_dc1_mask                            (0xFF000000)
#define DC_BW_ADJ_CNT4_DC1_ve1_bw_que_threshold2_dc1(data)                           (0xFF000000&((data)<<24))
#define DC_BW_ADJ_CNT4_DC1_ve1_bw_que_threshold2_dc1_src(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT4_DC1_get_ve1_bw_que_threshold2_dc1(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT4_DC1_ve1_bw_que_threshold1_dc1_shift                           (16)
#define DC_BW_ADJ_CNT4_DC1_ve1_bw_que_threshold1_dc1_mask                            (0x00FF0000)
#define DC_BW_ADJ_CNT4_DC1_ve1_bw_que_threshold1_dc1(data)                           (0x00FF0000&((data)<<16))
#define DC_BW_ADJ_CNT4_DC1_ve1_bw_que_threshold1_dc1_src(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT4_DC1_get_ve1_bw_que_threshold1_dc1(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT4_DC1_ve1_bw_data_threshold_dc1_shift                           (0)
#define DC_BW_ADJ_CNT4_DC1_ve1_bw_data_threshold_dc1_mask                            (0x00007FFF)
#define DC_BW_ADJ_CNT4_DC1_ve1_bw_data_threshold_dc1(data)                           (0x00007FFF&((data)<<0))
#define DC_BW_ADJ_CNT4_DC1_ve1_bw_data_threshold_dc1_src(data)                       ((0x00007FFF&(data))>>0)
#define DC_BW_ADJ_CNT4_DC1_get_ve1_bw_data_threshold_dc1(data)                       ((0x00007FFF&(data))>>0)


#define DC_BW_ADJ_CNT5_DC1                                                           0x98008160
#define DC_BW_ADJ_CNT5_DC1_reg_addr                                                  "0xD8008160"
#define DC_BW_ADJ_CNT5_DC1_reg                                                       0xD8008160
#define set_DC_BW_ADJ_CNT5_DC1_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CNT5_DC1_reg)=data)
#define get_DC_BW_ADJ_CNT5_DC1_reg   (*((volatile unsigned int*) DC_BW_ADJ_CNT5_DC1_reg))
#define DC_BW_ADJ_CNT5_DC1_inst_adr                                                  "0x0058"
#define DC_BW_ADJ_CNT5_DC1_inst                                                      0x0058
#define DC_BW_ADJ_CNT5_DC1_ve2_bw_que_threshold2_dc1_shift                           (24)
#define DC_BW_ADJ_CNT5_DC1_ve2_bw_que_threshold2_dc1_mask                            (0xFF000000)
#define DC_BW_ADJ_CNT5_DC1_ve2_bw_que_threshold2_dc1(data)                           (0xFF000000&((data)<<24))
#define DC_BW_ADJ_CNT5_DC1_ve2_bw_que_threshold2_dc1_src(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT5_DC1_get_ve2_bw_que_threshold2_dc1(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT5_DC1_ve2_bw_que_threshold1_dc1_shift                           (16)
#define DC_BW_ADJ_CNT5_DC1_ve2_bw_que_threshold1_dc1_mask                            (0x00FF0000)
#define DC_BW_ADJ_CNT5_DC1_ve2_bw_que_threshold1_dc1(data)                           (0x00FF0000&((data)<<16))
#define DC_BW_ADJ_CNT5_DC1_ve2_bw_que_threshold1_dc1_src(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT5_DC1_get_ve2_bw_que_threshold1_dc1(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT5_DC1_ve2_bw_data_threshold_dc1_shift                           (0)
#define DC_BW_ADJ_CNT5_DC1_ve2_bw_data_threshold_dc1_mask                            (0x00007FFF)
#define DC_BW_ADJ_CNT5_DC1_ve2_bw_data_threshold_dc1(data)                           (0x00007FFF&((data)<<0))
#define DC_BW_ADJ_CNT5_DC1_ve2_bw_data_threshold_dc1_src(data)                       ((0x00007FFF&(data))>>0)
#define DC_BW_ADJ_CNT5_DC1_get_ve2_bw_data_threshold_dc1(data)                       ((0x00007FFF&(data))>>0)


#define DC_BW_ADJ_CNT6_DC1                                                           0x98008164
#define DC_BW_ADJ_CNT6_DC1_reg_addr                                                  "0xD8008164"
#define DC_BW_ADJ_CNT6_DC1_reg                                                       0xD8008164
#define set_DC_BW_ADJ_CNT6_DC1_reg(data)   (*((volatile unsigned int*) DC_BW_ADJ_CNT6_DC1_reg)=data)
#define get_DC_BW_ADJ_CNT6_DC1_reg   (*((volatile unsigned int*) DC_BW_ADJ_CNT6_DC1_reg))
#define DC_BW_ADJ_CNT6_DC1_inst_adr                                                  "0x0059"
#define DC_BW_ADJ_CNT6_DC1_inst                                                      0x0059
#define DC_BW_ADJ_CNT6_DC1_ve3_bw_que_threshold2_dc1_shift                           (24)
#define DC_BW_ADJ_CNT6_DC1_ve3_bw_que_threshold2_dc1_mask                            (0xFF000000)
#define DC_BW_ADJ_CNT6_DC1_ve3_bw_que_threshold2_dc1(data)                           (0xFF000000&((data)<<24))
#define DC_BW_ADJ_CNT6_DC1_ve3_bw_que_threshold2_dc1_src(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT6_DC1_get_ve3_bw_que_threshold2_dc1(data)                       ((0xFF000000&(data))>>24)
#define DC_BW_ADJ_CNT6_DC1_ve3_bw_que_threshold1_dc1_shift                           (16)
#define DC_BW_ADJ_CNT6_DC1_ve3_bw_que_threshold1_dc1_mask                            (0x00FF0000)
#define DC_BW_ADJ_CNT6_DC1_ve3_bw_que_threshold1_dc1(data)                           (0x00FF0000&((data)<<16))
#define DC_BW_ADJ_CNT6_DC1_ve3_bw_que_threshold1_dc1_src(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT6_DC1_get_ve3_bw_que_threshold1_dc1(data)                       ((0x00FF0000&(data))>>16)
#define DC_BW_ADJ_CNT6_DC1_ve3_bw_data_threshold_dc1_shift                           (0)
#define DC_BW_ADJ_CNT6_DC1_ve3_bw_data_threshold_dc1_mask                            (0x00007FFF)
#define DC_BW_ADJ_CNT6_DC1_ve3_bw_data_threshold_dc1(data)                           (0x00007FFF&((data)<<0))
#define DC_BW_ADJ_CNT6_DC1_ve3_bw_data_threshold_dc1_src(data)                       ((0x00007FFF&(data))>>0)
#define DC_BW_ADJ_CNT6_DC1_get_ve3_bw_data_threshold_dc1(data)                       ((0x00007FFF&(data))>>0)


#define DC_BW_RQ_DC0                                                                 0x98008168
#define DC_BW_RQ_DC0_reg_addr                                                        "0xD8008168"
#define DC_BW_RQ_DC0_reg                                                             0xD8008168
#define set_DC_BW_RQ_DC0_reg(data)   (*((volatile unsigned int*) DC_BW_RQ_DC0_reg)=data)
#define get_DC_BW_RQ_DC0_reg   (*((volatile unsigned int*) DC_BW_RQ_DC0_reg))
#define DC_BW_RQ_DC0_inst_adr                                                        "0x005A"
#define DC_BW_RQ_DC0_inst                                                            0x005A
#define DC_BW_RQ_DC0_rd4_level_dc0_shift                                             (12)
#define DC_BW_RQ_DC0_rd4_level_dc0_mask                                              (0x0000F000)
#define DC_BW_RQ_DC0_rd4_level_dc0(data)                                             (0x0000F000&((data)<<12))
#define DC_BW_RQ_DC0_rd4_level_dc0_src(data)                                         ((0x0000F000&(data))>>12)
#define DC_BW_RQ_DC0_get_rd4_level_dc0(data)                                         ((0x0000F000&(data))>>12)
#define DC_BW_RQ_DC0_rd3_level_dc0_shift                                             (8)
#define DC_BW_RQ_DC0_rd3_level_dc0_mask                                              (0x00000F00)
#define DC_BW_RQ_DC0_rd3_level_dc0(data)                                             (0x00000F00&((data)<<8))
#define DC_BW_RQ_DC0_rd3_level_dc0_src(data)                                         ((0x00000F00&(data))>>8)
#define DC_BW_RQ_DC0_get_rd3_level_dc0(data)                                         ((0x00000F00&(data))>>8)
#define DC_BW_RQ_DC0_rd2_level_dc0_shift                                             (4)
#define DC_BW_RQ_DC0_rd2_level_dc0_mask                                              (0x000000F0)
#define DC_BW_RQ_DC0_rd2_level_dc0(data)                                             (0x000000F0&((data)<<4))
#define DC_BW_RQ_DC0_rd2_level_dc0_src(data)                                         ((0x000000F0&(data))>>4)
#define DC_BW_RQ_DC0_get_rd2_level_dc0(data)                                         ((0x000000F0&(data))>>4)
#define DC_BW_RQ_DC0_rd1_level_dc0_shift                                             (0)
#define DC_BW_RQ_DC0_rd1_level_dc0_mask                                              (0x0000000F)
#define DC_BW_RQ_DC0_rd1_level_dc0(data)                                             (0x0000000F&((data)<<0))
#define DC_BW_RQ_DC0_rd1_level_dc0_src(data)                                         ((0x0000000F&(data))>>0)
#define DC_BW_RQ_DC0_get_rd1_level_dc0(data)                                         ((0x0000000F&(data))>>0)


#define DC_BW_RQ_DC1                                                                 0x9800816C
#define DC_BW_RQ_DC1_reg_addr                                                        "0xD800816C"
#define DC_BW_RQ_DC1_reg                                                             0xD800816C
#define set_DC_BW_RQ_DC1_reg(data)   (*((volatile unsigned int*) DC_BW_RQ_DC1_reg)=data)
#define get_DC_BW_RQ_DC1_reg   (*((volatile unsigned int*) DC_BW_RQ_DC1_reg))
#define DC_BW_RQ_DC1_inst_adr                                                        "0x005B"
#define DC_BW_RQ_DC1_inst                                                            0x005B
#define DC_BW_RQ_DC1_rd4_level_dc1_shift                                             (12)
#define DC_BW_RQ_DC1_rd4_level_dc1_mask                                              (0x0000F000)
#define DC_BW_RQ_DC1_rd4_level_dc1(data)                                             (0x0000F000&((data)<<12))
#define DC_BW_RQ_DC1_rd4_level_dc1_src(data)                                         ((0x0000F000&(data))>>12)
#define DC_BW_RQ_DC1_get_rd4_level_dc1(data)                                         ((0x0000F000&(data))>>12)
#define DC_BW_RQ_DC1_rd3_level_dc1_shift                                             (8)
#define DC_BW_RQ_DC1_rd3_level_dc1_mask                                              (0x00000F00)
#define DC_BW_RQ_DC1_rd3_level_dc1(data)                                             (0x00000F00&((data)<<8))
#define DC_BW_RQ_DC1_rd3_level_dc1_src(data)                                         ((0x00000F00&(data))>>8)
#define DC_BW_RQ_DC1_get_rd3_level_dc1(data)                                         ((0x00000F00&(data))>>8)
#define DC_BW_RQ_DC1_rd2_level_dc1_shift                                             (4)
#define DC_BW_RQ_DC1_rd2_level_dc1_mask                                              (0x000000F0)
#define DC_BW_RQ_DC1_rd2_level_dc1(data)                                             (0x000000F0&((data)<<4))
#define DC_BW_RQ_DC1_rd2_level_dc1_src(data)                                         ((0x000000F0&(data))>>4)
#define DC_BW_RQ_DC1_get_rd2_level_dc1(data)                                         ((0x000000F0&(data))>>4)
#define DC_BW_RQ_DC1_rd1_level_dc1_shift                                             (0)
#define DC_BW_RQ_DC1_rd1_level_dc1_mask                                              (0x0000000F)
#define DC_BW_RQ_DC1_rd1_level_dc1(data)                                             (0x0000000F&((data)<<0))
#define DC_BW_RQ_DC1_rd1_level_dc1_src(data)                                         ((0x0000000F&(data))>>0)
#define DC_BW_RQ_DC1_get_rd1_level_dc1(data)                                         ((0x0000000F&(data))>>0)


#define DC_BW_DATA_CNT1                                                              0x98008174
#define DC_BW_DATA_CNT1_reg_addr                                                     "0xD8008174"
#define DC_BW_DATA_CNT1_reg                                                          0xD8008174
#define set_DC_BW_DATA_CNT1_reg(data)   (*((volatile unsigned int*) DC_BW_DATA_CNT1_reg)=data)
#define get_DC_BW_DATA_CNT1_reg   (*((volatile unsigned int*) DC_BW_DATA_CNT1_reg))
#define DC_BW_DATA_CNT1_inst_adr                                                     "0x005D"
#define DC_BW_DATA_CNT1_inst                                                         0x005D
#define DC_BW_DATA_CNT1_vo1_bw_data_cnt_dc1_shift                                    (16)
#define DC_BW_DATA_CNT1_vo1_bw_data_cnt_dc1_mask                                     (0x7FFF0000)
#define DC_BW_DATA_CNT1_vo1_bw_data_cnt_dc1(data)                                    (0x7FFF0000&((data)<<16))
#define DC_BW_DATA_CNT1_vo1_bw_data_cnt_dc1_src(data)                                ((0x7FFF0000&(data))>>16)
#define DC_BW_DATA_CNT1_get_vo1_bw_data_cnt_dc1(data)                                ((0x7FFF0000&(data))>>16)
#define DC_BW_DATA_CNT1_vo1_bw_data_cnt_dc0_shift                                    (0)
#define DC_BW_DATA_CNT1_vo1_bw_data_cnt_dc0_mask                                     (0x00007FFF)
#define DC_BW_DATA_CNT1_vo1_bw_data_cnt_dc0(data)                                    (0x00007FFF&((data)<<0))
#define DC_BW_DATA_CNT1_vo1_bw_data_cnt_dc0_src(data)                                ((0x00007FFF&(data))>>0)
#define DC_BW_DATA_CNT1_get_vo1_bw_data_cnt_dc0(data)                                ((0x00007FFF&(data))>>0)


#define DC_BW_DATA_CNT2                                                              0x98008178
#define DC_BW_DATA_CNT2_reg_addr                                                     "0xD8008178"
#define DC_BW_DATA_CNT2_reg                                                          0xD8008178
#define set_DC_BW_DATA_CNT2_reg(data)   (*((volatile unsigned int*) DC_BW_DATA_CNT2_reg)=data)
#define get_DC_BW_DATA_CNT2_reg   (*((volatile unsigned int*) DC_BW_DATA_CNT2_reg))
#define DC_BW_DATA_CNT2_inst_adr                                                     "0x005E"
#define DC_BW_DATA_CNT2_inst                                                         0x005E
#define DC_BW_DATA_CNT2_scpu_bw_data_cnt_dc1_shift                                   (16)
#define DC_BW_DATA_CNT2_scpu_bw_data_cnt_dc1_mask                                    (0x7FFF0000)
#define DC_BW_DATA_CNT2_scpu_bw_data_cnt_dc1(data)                                   (0x7FFF0000&((data)<<16))
#define DC_BW_DATA_CNT2_scpu_bw_data_cnt_dc1_src(data)                               ((0x7FFF0000&(data))>>16)
#define DC_BW_DATA_CNT2_get_scpu_bw_data_cnt_dc1(data)                               ((0x7FFF0000&(data))>>16)
#define DC_BW_DATA_CNT2_scpu_bw_data_cnt_dc0_shift                                   (0)
#define DC_BW_DATA_CNT2_scpu_bw_data_cnt_dc0_mask                                    (0x00007FFF)
#define DC_BW_DATA_CNT2_scpu_bw_data_cnt_dc0(data)                                   (0x00007FFF&((data)<<0))
#define DC_BW_DATA_CNT2_scpu_bw_data_cnt_dc0_src(data)                               ((0x00007FFF&(data))>>0)
#define DC_BW_DATA_CNT2_get_scpu_bw_data_cnt_dc0(data)                               ((0x00007FFF&(data))>>0)


#define DC_BW_DATA_CNT3                                                              0x9800817C
#define DC_BW_DATA_CNT3_reg_addr                                                     "0xD800817C"
#define DC_BW_DATA_CNT3_reg                                                          0xD800817C
#define set_DC_BW_DATA_CNT3_reg(data)   (*((volatile unsigned int*) DC_BW_DATA_CNT3_reg)=data)
#define get_DC_BW_DATA_CNT3_reg   (*((volatile unsigned int*) DC_BW_DATA_CNT3_reg))
#define DC_BW_DATA_CNT3_inst_adr                                                     "0x005F"
#define DC_BW_DATA_CNT3_inst                                                         0x005F
#define DC_BW_DATA_CNT3_gpu_bw_data_cnt_dc1_shift                                    (16)
#define DC_BW_DATA_CNT3_gpu_bw_data_cnt_dc1_mask                                     (0x7FFF0000)
#define DC_BW_DATA_CNT3_gpu_bw_data_cnt_dc1(data)                                    (0x7FFF0000&((data)<<16))
#define DC_BW_DATA_CNT3_gpu_bw_data_cnt_dc1_src(data)                                ((0x7FFF0000&(data))>>16)
#define DC_BW_DATA_CNT3_get_gpu_bw_data_cnt_dc1(data)                                ((0x7FFF0000&(data))>>16)
#define DC_BW_DATA_CNT3_gpu_bw_data_cnt_dc0_shift                                    (0)
#define DC_BW_DATA_CNT3_gpu_bw_data_cnt_dc0_mask                                     (0x00007FFF)
#define DC_BW_DATA_CNT3_gpu_bw_data_cnt_dc0(data)                                    (0x00007FFF&((data)<<0))
#define DC_BW_DATA_CNT3_gpu_bw_data_cnt_dc0_src(data)                                ((0x00007FFF&(data))>>0)
#define DC_BW_DATA_CNT3_get_gpu_bw_data_cnt_dc0(data)                                ((0x00007FFF&(data))>>0)


#define DC_BW_DATA_CNT4                                                              0x98008180
#define DC_BW_DATA_CNT4_reg_addr                                                     "0xD8008180"
#define DC_BW_DATA_CNT4_reg                                                          0xD8008180
#define set_DC_BW_DATA_CNT4_reg(data)   (*((volatile unsigned int*) DC_BW_DATA_CNT4_reg)=data)
#define get_DC_BW_DATA_CNT4_reg   (*((volatile unsigned int*) DC_BW_DATA_CNT4_reg))
#define DC_BW_DATA_CNT4_inst_adr                                                     "0x0060"
#define DC_BW_DATA_CNT4_inst                                                         0x0060
#define DC_BW_DATA_CNT4_ve1_bw_data_cnt_dc1_shift                                    (16)
#define DC_BW_DATA_CNT4_ve1_bw_data_cnt_dc1_mask                                     (0x7FFF0000)
#define DC_BW_DATA_CNT4_ve1_bw_data_cnt_dc1(data)                                    (0x7FFF0000&((data)<<16))
#define DC_BW_DATA_CNT4_ve1_bw_data_cnt_dc1_src(data)                                ((0x7FFF0000&(data))>>16)
#define DC_BW_DATA_CNT4_get_ve1_bw_data_cnt_dc1(data)                                ((0x7FFF0000&(data))>>16)
#define DC_BW_DATA_CNT4_ve1_bw_data_cnt_dc0_shift                                    (0)
#define DC_BW_DATA_CNT4_ve1_bw_data_cnt_dc0_mask                                     (0x00007FFF)
#define DC_BW_DATA_CNT4_ve1_bw_data_cnt_dc0(data)                                    (0x00007FFF&((data)<<0))
#define DC_BW_DATA_CNT4_ve1_bw_data_cnt_dc0_src(data)                                ((0x00007FFF&(data))>>0)
#define DC_BW_DATA_CNT4_get_ve1_bw_data_cnt_dc0(data)                                ((0x00007FFF&(data))>>0)


#define DC_BW_DATA_CNT5                                                              0x98008184
#define DC_BW_DATA_CNT5_reg_addr                                                     "0xD8008184"
#define DC_BW_DATA_CNT5_reg                                                          0xD8008184
#define set_DC_BW_DATA_CNT5_reg(data)   (*((volatile unsigned int*) DC_BW_DATA_CNT5_reg)=data)
#define get_DC_BW_DATA_CNT5_reg   (*((volatile unsigned int*) DC_BW_DATA_CNT5_reg))
#define DC_BW_DATA_CNT5_inst_adr                                                     "0x0061"
#define DC_BW_DATA_CNT5_inst                                                         0x0061
#define DC_BW_DATA_CNT5_ve2_bw_data_cnt_dc1_shift                                    (16)
#define DC_BW_DATA_CNT5_ve2_bw_data_cnt_dc1_mask                                     (0x7FFF0000)
#define DC_BW_DATA_CNT5_ve2_bw_data_cnt_dc1(data)                                    (0x7FFF0000&((data)<<16))
#define DC_BW_DATA_CNT5_ve2_bw_data_cnt_dc1_src(data)                                ((0x7FFF0000&(data))>>16)
#define DC_BW_DATA_CNT5_get_ve2_bw_data_cnt_dc1(data)                                ((0x7FFF0000&(data))>>16)
#define DC_BW_DATA_CNT5_ve2_bw_data_cnt_dc0_shift                                    (0)
#define DC_BW_DATA_CNT5_ve2_bw_data_cnt_dc0_mask                                     (0x00007FFF)
#define DC_BW_DATA_CNT5_ve2_bw_data_cnt_dc0(data)                                    (0x00007FFF&((data)<<0))
#define DC_BW_DATA_CNT5_ve2_bw_data_cnt_dc0_src(data)                                ((0x00007FFF&(data))>>0)
#define DC_BW_DATA_CNT5_get_ve2_bw_data_cnt_dc0(data)                                ((0x00007FFF&(data))>>0)


#define DC_BW_DATA_CNT6                                                              0x98008188
#define DC_BW_DATA_CNT6_reg_addr                                                     "0xD8008188"
#define DC_BW_DATA_CNT6_reg                                                          0xD8008188
#define set_DC_BW_DATA_CNT6_reg(data)   (*((volatile unsigned int*) DC_BW_DATA_CNT6_reg)=data)
#define get_DC_BW_DATA_CNT6_reg   (*((volatile unsigned int*) DC_BW_DATA_CNT6_reg))
#define DC_BW_DATA_CNT6_inst_adr                                                     "0x0062"
#define DC_BW_DATA_CNT6_inst                                                         0x0062
#define DC_BW_DATA_CNT6_ve3_bw_data_cnt_dc1_shift                                    (16)
#define DC_BW_DATA_CNT6_ve3_bw_data_cnt_dc1_mask                                     (0x7FFF0000)
#define DC_BW_DATA_CNT6_ve3_bw_data_cnt_dc1(data)                                    (0x7FFF0000&((data)<<16))
#define DC_BW_DATA_CNT6_ve3_bw_data_cnt_dc1_src(data)                                ((0x7FFF0000&(data))>>16)
#define DC_BW_DATA_CNT6_get_ve3_bw_data_cnt_dc1(data)                                ((0x7FFF0000&(data))>>16)
#define DC_BW_DATA_CNT6_ve3_bw_data_cnt_dc0_shift                                    (0)
#define DC_BW_DATA_CNT6_ve3_bw_data_cnt_dc0_mask                                     (0x00007FFF)
#define DC_BW_DATA_CNT6_ve3_bw_data_cnt_dc0(data)                                    (0x00007FFF&((data)<<0))
#define DC_BW_DATA_CNT6_ve3_bw_data_cnt_dc0_src(data)                                ((0x00007FFF&(data))>>0)
#define DC_BW_DATA_CNT6_get_ve3_bw_data_cnt_dc0(data)                                ((0x00007FFF&(data))>>0)


#define DC_PHY_BIST_RM                                                               0x980081B0
#define DC_PHY_BIST_RM_reg_addr                                                      "0xD80081B0"
#define DC_PHY_BIST_RM_reg                                                           0xD80081B0
#define set_DC_PHY_BIST_RM_reg(data)   (*((volatile unsigned int*) DC_PHY_BIST_RM_reg)=data)
#define get_DC_PHY_BIST_RM_reg   (*((volatile unsigned int*) DC_PHY_BIST_RM_reg))
#define DC_PHY_BIST_RM_inst_adr                                                      "0x006C"
#define DC_PHY_BIST_RM_inst                                                          0x006C
#define DC_PHY_BIST_RM_bist_en_0_shift                                               (16)
#define DC_PHY_BIST_RM_bist_en_0_mask                                                (0x00010000)
#define DC_PHY_BIST_RM_bist_en_0(data)                                               (0x00010000&((data)<<16))
#define DC_PHY_BIST_RM_bist_en_0_src(data)                                           ((0x00010000&(data))>>16)
#define DC_PHY_BIST_RM_get_bist_en_0(data)                                           ((0x00010000&(data))>>16)
#define DC_PHY_BIST_RM_drf_bist_en_0_shift                                           (15)
#define DC_PHY_BIST_RM_drf_bist_en_0_mask                                            (0x00008000)
#define DC_PHY_BIST_RM_drf_bist_en_0(data)                                           (0x00008000&((data)<<15))
#define DC_PHY_BIST_RM_drf_bist_en_0_src(data)                                       ((0x00008000&(data))>>15)
#define DC_PHY_BIST_RM_get_drf_bist_en_0(data)                                       ((0x00008000&(data))>>15)
#define DC_PHY_BIST_RM_drf_test_resume_0_shift                                       (14)
#define DC_PHY_BIST_RM_drf_test_resume_0_mask                                        (0x00004000)
#define DC_PHY_BIST_RM_drf_test_resume_0(data)                                       (0x00004000&((data)<<14))
#define DC_PHY_BIST_RM_drf_test_resume_0_src(data)                                   ((0x00004000&(data))>>14)
#define DC_PHY_BIST_RM_get_drf_test_resume_0(data)                                   ((0x00004000&(data))>>14)
#define DC_PHY_BIST_RM_RMEA_shift                                                    (12)
#define DC_PHY_BIST_RM_RMEA_mask                                                     (0x00001000)
#define DC_PHY_BIST_RM_RMEA(data)                                                    (0x00001000&((data)<<12))
#define DC_PHY_BIST_RM_RMEA_src(data)                                                ((0x00001000&(data))>>12)
#define DC_PHY_BIST_RM_get_RMEA(data)                                                ((0x00001000&(data))>>12)
#define DC_PHY_BIST_RM_RMA_3_shift                                                   (11)
#define DC_PHY_BIST_RM_RMA_3_mask                                                    (0x00000800)
#define DC_PHY_BIST_RM_RMA_3(data)                                                   (0x00000800&((data)<<11))
#define DC_PHY_BIST_RM_RMA_3_src(data)                                               ((0x00000800&(data))>>11)
#define DC_PHY_BIST_RM_get_RMA_3(data)                                               ((0x00000800&(data))>>11)
#define DC_PHY_BIST_RM_RMA_2_shift                                                   (10)
#define DC_PHY_BIST_RM_RMA_2_mask                                                    (0x00000400)
#define DC_PHY_BIST_RM_RMA_2(data)                                                   (0x00000400&((data)<<10))
#define DC_PHY_BIST_RM_RMA_2_src(data)                                               ((0x00000400&(data))>>10)
#define DC_PHY_BIST_RM_get_RMA_2(data)                                               ((0x00000400&(data))>>10)
#define DC_PHY_BIST_RM_RMA_1_shift                                                   (9)
#define DC_PHY_BIST_RM_RMA_1_mask                                                    (0x00000200)
#define DC_PHY_BIST_RM_RMA_1(data)                                                   (0x00000200&((data)<<9))
#define DC_PHY_BIST_RM_RMA_1_src(data)                                               ((0x00000200&(data))>>9)
#define DC_PHY_BIST_RM_get_RMA_1(data)                                               ((0x00000200&(data))>>9)
#define DC_PHY_BIST_RM_RMA_0_shift                                                   (8)
#define DC_PHY_BIST_RM_RMA_0_mask                                                    (0x00000100)
#define DC_PHY_BIST_RM_RMA_0(data)                                                   (0x00000100&((data)<<8))
#define DC_PHY_BIST_RM_RMA_0_src(data)                                               ((0x00000100&(data))>>8)
#define DC_PHY_BIST_RM_get_RMA_0(data)                                               ((0x00000100&(data))>>8)
#define DC_PHY_BIST_RM_RMEB_shift                                                    (4)
#define DC_PHY_BIST_RM_RMEB_mask                                                     (0x00000010)
#define DC_PHY_BIST_RM_RMEB(data)                                                    (0x00000010&((data)<<4))
#define DC_PHY_BIST_RM_RMEB_src(data)                                                ((0x00000010&(data))>>4)
#define DC_PHY_BIST_RM_get_RMEB(data)                                                ((0x00000010&(data))>>4)
#define DC_PHY_BIST_RM_RMB_3_shift                                                   (3)
#define DC_PHY_BIST_RM_RMB_3_mask                                                    (0x00000008)
#define DC_PHY_BIST_RM_RMB_3(data)                                                   (0x00000008&((data)<<3))
#define DC_PHY_BIST_RM_RMB_3_src(data)                                               ((0x00000008&(data))>>3)
#define DC_PHY_BIST_RM_get_RMB_3(data)                                               ((0x00000008&(data))>>3)
#define DC_PHY_BIST_RM_RMB_2_shift                                                   (2)
#define DC_PHY_BIST_RM_RMB_2_mask                                                    (0x00000004)
#define DC_PHY_BIST_RM_RMB_2(data)                                                   (0x00000004&((data)<<2))
#define DC_PHY_BIST_RM_RMB_2_src(data)                                               ((0x00000004&(data))>>2)
#define DC_PHY_BIST_RM_get_RMB_2(data)                                               ((0x00000004&(data))>>2)
#define DC_PHY_BIST_RM_RMB_1_shift                                                   (1)
#define DC_PHY_BIST_RM_RMB_1_mask                                                    (0x00000002)
#define DC_PHY_BIST_RM_RMB_1(data)                                                   (0x00000002&((data)<<1))
#define DC_PHY_BIST_RM_RMB_1_src(data)                                               ((0x00000002&(data))>>1)
#define DC_PHY_BIST_RM_get_RMB_1(data)                                               ((0x00000002&(data))>>1)
#define DC_PHY_BIST_RM_RMB_0_shift                                                   (0)
#define DC_PHY_BIST_RM_RMB_0_mask                                                    (0x00000001)
#define DC_PHY_BIST_RM_RMB_0(data)                                                   (0x00000001&((data)<<0))
#define DC_PHY_BIST_RM_RMB_0_src(data)                                               ((0x00000001&(data))>>0)
#define DC_PHY_BIST_RM_get_RMB_0(data)                                               ((0x00000001&(data))>>0)


#define DC_PHY_BIST0_ST                                                              0x980081B4
#define DC_PHY_BIST0_ST_reg_addr                                                     "0xD80081B4"
#define DC_PHY_BIST0_ST_reg                                                          0xD80081B4
#define set_DC_PHY_BIST0_ST_reg(data)   (*((volatile unsigned int*) DC_PHY_BIST0_ST_reg)=data)
#define get_DC_PHY_BIST0_ST_reg   (*((volatile unsigned int*) DC_PHY_BIST0_ST_reg))
#define DC_PHY_BIST0_ST_inst_adr                                                     "0x006D"
#define DC_PHY_BIST0_ST_inst                                                         0x006D
#define DC_PHY_BIST0_ST_mbist_st_shift                                               (2)
#define DC_PHY_BIST0_ST_mbist_st_mask                                                (0x00000004)
#define DC_PHY_BIST0_ST_mbist_st(data)                                               (0x00000004&((data)<<2))
#define DC_PHY_BIST0_ST_mbist_st_src(data)                                           ((0x00000004&(data))>>2)
#define DC_PHY_BIST0_ST_get_mbist_st(data)                                           ((0x00000004&(data))>>2)
#define DC_PHY_BIST0_ST_bist_fail_shift                                              (1)
#define DC_PHY_BIST0_ST_bist_fail_mask                                               (0x00000002)
#define DC_PHY_BIST0_ST_bist_fail(data)                                              (0x00000002&((data)<<1))
#define DC_PHY_BIST0_ST_bist_fail_src(data)                                          ((0x00000002&(data))>>1)
#define DC_PHY_BIST0_ST_get_bist_fail(data)                                          ((0x00000002&(data))>>1)
#define DC_PHY_BIST0_ST_bist_done_shift                                              (0)
#define DC_PHY_BIST0_ST_bist_done_mask                                               (0x00000001)
#define DC_PHY_BIST0_ST_bist_done(data)                                              (0x00000001&((data)<<0))
#define DC_PHY_BIST0_ST_bist_done_src(data)                                          ((0x00000001&(data))>>0)
#define DC_PHY_BIST0_ST_get_bist_done(data)                                          ((0x00000001&(data))>>0)


#define DC_PHY_DRF0_ST                                                               0x980081B8
#define DC_PHY_DRF0_ST_reg_addr                                                      "0xD80081B8"
#define DC_PHY_DRF0_ST_reg                                                           0xD80081B8
#define set_DC_PHY_DRF0_ST_reg(data)   (*((volatile unsigned int*) DC_PHY_DRF0_ST_reg)=data)
#define get_DC_PHY_DRF0_ST_reg   (*((volatile unsigned int*) DC_PHY_DRF0_ST_reg))
#define DC_PHY_DRF0_ST_inst_adr                                                      "0x006E"
#define DC_PHY_DRF0_ST_inst                                                          0x006E
#define DC_PHY_DRF0_ST_drf_start_pause_shift                                         (16)
#define DC_PHY_DRF0_ST_drf_start_pause_mask                                          (0x00010000)
#define DC_PHY_DRF0_ST_drf_start_pause(data)                                         (0x00010000&((data)<<16))
#define DC_PHY_DRF0_ST_drf_start_pause_src(data)                                     ((0x00010000&(data))>>16)
#define DC_PHY_DRF0_ST_get_drf_start_pause(data)                                     ((0x00010000&(data))>>16)
#define DC_PHY_DRF0_ST_drf_fail_shift                                                (1)
#define DC_PHY_DRF0_ST_drf_fail_mask                                                 (0x00000002)
#define DC_PHY_DRF0_ST_drf_fail(data)                                                (0x00000002&((data)<<1))
#define DC_PHY_DRF0_ST_drf_fail_src(data)                                            ((0x00000002&(data))>>1)
#define DC_PHY_DRF0_ST_get_drf_fail(data)                                            ((0x00000002&(data))>>1)
#define DC_PHY_DRF0_ST_drf_done_shift                                                (0)
#define DC_PHY_DRF0_ST_drf_done_mask                                                 (0x00000001)
#define DC_PHY_DRF0_ST_drf_done(data)                                                (0x00000001&((data)<<0))
#define DC_PHY_DRF0_ST_drf_done_src(data)                                            ((0x00000001&(data))>>0)
#define DC_PHY_DRF0_ST_get_drf_done(data)                                            ((0x00000001&(data))>>0)


#define DC_PHY_BIST1_ST                                                              0x980081BC
#define DC_PHY_BIST1_ST_reg_addr                                                     "0xD80081BC"
#define DC_PHY_BIST1_ST_reg                                                          0xD80081BC
#define set_DC_PHY_BIST1_ST_reg(data)   (*((volatile unsigned int*) DC_PHY_BIST1_ST_reg)=data)
#define get_DC_PHY_BIST1_ST_reg   (*((volatile unsigned int*) DC_PHY_BIST1_ST_reg))
#define DC_PHY_BIST1_ST_inst_adr                                                     "0x006F"
#define DC_PHY_BIST1_ST_inst                                                         0x006F
#define DC_PHY_BIST1_ST_mbist_st_shift                                               (2)
#define DC_PHY_BIST1_ST_mbist_st_mask                                                (0x00000004)
#define DC_PHY_BIST1_ST_mbist_st(data)                                               (0x00000004&((data)<<2))
#define DC_PHY_BIST1_ST_mbist_st_src(data)                                           ((0x00000004&(data))>>2)
#define DC_PHY_BIST1_ST_get_mbist_st(data)                                           ((0x00000004&(data))>>2)
#define DC_PHY_BIST1_ST_bist_fail_shift                                              (1)
#define DC_PHY_BIST1_ST_bist_fail_mask                                               (0x00000002)
#define DC_PHY_BIST1_ST_bist_fail(data)                                              (0x00000002&((data)<<1))
#define DC_PHY_BIST1_ST_bist_fail_src(data)                                          ((0x00000002&(data))>>1)
#define DC_PHY_BIST1_ST_get_bist_fail(data)                                          ((0x00000002&(data))>>1)
#define DC_PHY_BIST1_ST_bist_done_shift                                              (0)
#define DC_PHY_BIST1_ST_bist_done_mask                                               (0x00000001)
#define DC_PHY_BIST1_ST_bist_done(data)                                              (0x00000001&((data)<<0))
#define DC_PHY_BIST1_ST_bist_done_src(data)                                          ((0x00000001&(data))>>0)
#define DC_PHY_BIST1_ST_get_bist_done(data)                                          ((0x00000001&(data))>>0)


#define DC_PHY_DRF1_ST                                                               0x980081C0
#define DC_PHY_DRF1_ST_reg_addr                                                      "0xD80081C0"
#define DC_PHY_DRF1_ST_reg                                                           0xD80081C0
#define set_DC_PHY_DRF1_ST_reg(data)   (*((volatile unsigned int*) DC_PHY_DRF1_ST_reg)=data)
#define get_DC_PHY_DRF1_ST_reg   (*((volatile unsigned int*) DC_PHY_DRF1_ST_reg))
#define DC_PHY_DRF1_ST_inst_adr                                                      "0x0070"
#define DC_PHY_DRF1_ST_inst                                                          0x0070
#define DC_PHY_DRF1_ST_drf_start_pause_shift                                         (16)
#define DC_PHY_DRF1_ST_drf_start_pause_mask                                          (0x00010000)
#define DC_PHY_DRF1_ST_drf_start_pause(data)                                         (0x00010000&((data)<<16))
#define DC_PHY_DRF1_ST_drf_start_pause_src(data)                                     ((0x00010000&(data))>>16)
#define DC_PHY_DRF1_ST_get_drf_start_pause(data)                                     ((0x00010000&(data))>>16)
#define DC_PHY_DRF1_ST_drf_fail_shift                                                (1)
#define DC_PHY_DRF1_ST_drf_fail_mask                                                 (0x00000002)
#define DC_PHY_DRF1_ST_drf_fail(data)                                                (0x00000002&((data)<<1))
#define DC_PHY_DRF1_ST_drf_fail_src(data)                                            ((0x00000002&(data))>>1)
#define DC_PHY_DRF1_ST_get_drf_fail(data)                                            ((0x00000002&(data))>>1)
#define DC_PHY_DRF1_ST_drf_done_shift                                                (0)
#define DC_PHY_DRF1_ST_drf_done_mask                                                 (0x00000001)
#define DC_PHY_DRF1_ST_drf_done(data)                                                (0x00000001&((data)<<0))
#define DC_PHY_DRF1_ST_drf_done_src(data)                                            ((0x00000001&(data))>>0)
#define DC_PHY_DRF1_ST_get_drf_done(data)                                            ((0x00000001&(data))>>0)


#define DC_BIST_RM                                                                   0x980081D0
#define DC_BIST_RM_reg_addr                                                          "0xD80081D0"
#define DC_BIST_RM_reg                                                               0xD80081D0
#define set_DC_BIST_RM_reg(data)   (*((volatile unsigned int*) DC_BIST_RM_reg)=data)
#define get_DC_BIST_RM_reg   (*((volatile unsigned int*) DC_BIST_RM_reg))
#define DC_BIST_RM_inst_adr                                                          "0x0074"
#define DC_BIST_RM_inst                                                              0x0074
#define DC_BIST_RM_bist_en_0_shift                                                   (31)
#define DC_BIST_RM_bist_en_0_mask                                                    (0x80000000)
#define DC_BIST_RM_bist_en_0(data)                                                   (0x80000000&((data)<<31))
#define DC_BIST_RM_bist_en_0_src(data)                                               ((0x80000000&(data))>>31)
#define DC_BIST_RM_get_bist_en_0(data)                                               ((0x80000000&(data))>>31)
#define DC_BIST_RM_drf_bist_en_0_shift                                               (30)
#define DC_BIST_RM_drf_bist_en_0_mask                                                (0x40000000)
#define DC_BIST_RM_drf_bist_en_0(data)                                               (0x40000000&((data)<<30))
#define DC_BIST_RM_drf_bist_en_0_src(data)                                           ((0x40000000&(data))>>30)
#define DC_BIST_RM_get_drf_bist_en_0(data)                                           ((0x40000000&(data))>>30)
#define DC_BIST_RM_drf_test_resume_0_shift                                           (29)
#define DC_BIST_RM_drf_test_resume_0_mask                                            (0x20000000)
#define DC_BIST_RM_drf_test_resume_0(data)                                           (0x20000000&((data)<<29))
#define DC_BIST_RM_drf_test_resume_0_src(data)                                       ((0x20000000&(data))>>29)
#define DC_BIST_RM_get_drf_test_resume_0(data)                                       ((0x20000000&(data))>>29)
#define DC_BIST_RM_bist_en_1_shift                                                   (28)
#define DC_BIST_RM_bist_en_1_mask                                                    (0x10000000)
#define DC_BIST_RM_bist_en_1(data)                                                   (0x10000000&((data)<<28))
#define DC_BIST_RM_bist_en_1_src(data)                                               ((0x10000000&(data))>>28)
#define DC_BIST_RM_get_bist_en_1(data)                                               ((0x10000000&(data))>>28)
#define DC_BIST_RM_drf_bist_en_1_shift                                               (27)
#define DC_BIST_RM_drf_bist_en_1_mask                                                (0x08000000)
#define DC_BIST_RM_drf_bist_en_1(data)                                               (0x08000000&((data)<<27))
#define DC_BIST_RM_drf_bist_en_1_src(data)                                           ((0x08000000&(data))>>27)
#define DC_BIST_RM_get_drf_bist_en_1(data)                                           ((0x08000000&(data))>>27)
#define DC_BIST_RM_drf_test_resume_1_shift                                           (26)
#define DC_BIST_RM_drf_test_resume_1_mask                                            (0x04000000)
#define DC_BIST_RM_drf_test_resume_1(data)                                           (0x04000000&((data)<<26))
#define DC_BIST_RM_drf_test_resume_1_src(data)                                       ((0x04000000&(data))>>26)
#define DC_BIST_RM_get_drf_test_resume_1(data)                                       ((0x04000000&(data))>>26)
#define DC_BIST_RM_DVSLS_A_1_shift                                                   (22)
#define DC_BIST_RM_DVSLS_A_1_mask                                                    (0x00400000)
#define DC_BIST_RM_DVSLS_A_1(data)                                                   (0x00400000&((data)<<22))
#define DC_BIST_RM_DVSLS_A_1_src(data)                                               ((0x00400000&(data))>>22)
#define DC_BIST_RM_get_DVSLS_A_1(data)                                               ((0x00400000&(data))>>22)
#define DC_BIST_RM_DVSLS_A_0_shift                                                   (21)
#define DC_BIST_RM_DVSLS_A_0_mask                                                    (0x00200000)
#define DC_BIST_RM_DVSLS_A_0(data)                                                   (0x00200000&((data)<<21))
#define DC_BIST_RM_DVSLS_A_0_src(data)                                               ((0x00200000&(data))>>21)
#define DC_BIST_RM_get_DVSLS_A_0(data)                                               ((0x00200000&(data))>>21)
#define DC_BIST_RM_DVSE_A_shift                                                      (20)
#define DC_BIST_RM_DVSE_A_mask                                                       (0x00100000)
#define DC_BIST_RM_DVSE_A(data)                                                      (0x00100000&((data)<<20))
#define DC_BIST_RM_DVSE_A_src(data)                                                  ((0x00100000&(data))>>20)
#define DC_BIST_RM_get_DVSE_A(data)                                                  ((0x00100000&(data))>>20)
#define DC_BIST_RM_DVS_A_3_shift                                                     (19)
#define DC_BIST_RM_DVS_A_3_mask                                                      (0x00080000)
#define DC_BIST_RM_DVS_A_3(data)                                                     (0x00080000&((data)<<19))
#define DC_BIST_RM_DVS_A_3_src(data)                                                 ((0x00080000&(data))>>19)
#define DC_BIST_RM_get_DVS_A_3(data)                                                 ((0x00080000&(data))>>19)
#define DC_BIST_RM_DVS_A_2_shift                                                     (18)
#define DC_BIST_RM_DVS_A_2_mask                                                      (0x00040000)
#define DC_BIST_RM_DVS_A_2(data)                                                     (0x00040000&((data)<<18))
#define DC_BIST_RM_DVS_A_2_src(data)                                                 ((0x00040000&(data))>>18)
#define DC_BIST_RM_get_DVS_A_2(data)                                                 ((0x00040000&(data))>>18)
#define DC_BIST_RM_DVS_A_1_shift                                                     (17)
#define DC_BIST_RM_DVS_A_1_mask                                                      (0x00020000)
#define DC_BIST_RM_DVS_A_1(data)                                                     (0x00020000&((data)<<17))
#define DC_BIST_RM_DVS_A_1_src(data)                                                 ((0x00020000&(data))>>17)
#define DC_BIST_RM_get_DVS_A_1(data)                                                 ((0x00020000&(data))>>17)
#define DC_BIST_RM_DVS_A_0_shift                                                     (16)
#define DC_BIST_RM_DVS_A_0_mask                                                      (0x00010000)
#define DC_BIST_RM_DVS_A_0(data)                                                     (0x00010000&((data)<<16))
#define DC_BIST_RM_DVS_A_0_src(data)                                                 ((0x00010000&(data))>>16)
#define DC_BIST_RM_get_DVS_A_0(data)                                                 ((0x00010000&(data))>>16)
#define DC_BIST_RM_DVSLS_B_1_shift                                                   (6)
#define DC_BIST_RM_DVSLS_B_1_mask                                                    (0x00000040)
#define DC_BIST_RM_DVSLS_B_1(data)                                                   (0x00000040&((data)<<6))
#define DC_BIST_RM_DVSLS_B_1_src(data)                                               ((0x00000040&(data))>>6)
#define DC_BIST_RM_get_DVSLS_B_1(data)                                               ((0x00000040&(data))>>6)
#define DC_BIST_RM_DVSLS_B_0_shift                                                   (5)
#define DC_BIST_RM_DVSLS_B_0_mask                                                    (0x00000020)
#define DC_BIST_RM_DVSLS_B_0(data)                                                   (0x00000020&((data)<<5))
#define DC_BIST_RM_DVSLS_B_0_src(data)                                               ((0x00000020&(data))>>5)
#define DC_BIST_RM_get_DVSLS_B_0(data)                                               ((0x00000020&(data))>>5)
#define DC_BIST_RM_DVSE_B_shift                                                      (4)
#define DC_BIST_RM_DVSE_B_mask                                                       (0x00000010)
#define DC_BIST_RM_DVSE_B(data)                                                      (0x00000010&((data)<<4))
#define DC_BIST_RM_DVSE_B_src(data)                                                  ((0x00000010&(data))>>4)
#define DC_BIST_RM_get_DVSE_B(data)                                                  ((0x00000010&(data))>>4)
#define DC_BIST_RM_DVS_B_3_shift                                                     (3)
#define DC_BIST_RM_DVS_B_3_mask                                                      (0x00000008)
#define DC_BIST_RM_DVS_B_3(data)                                                     (0x00000008&((data)<<3))
#define DC_BIST_RM_DVS_B_3_src(data)                                                 ((0x00000008&(data))>>3)
#define DC_BIST_RM_get_DVS_B_3(data)                                                 ((0x00000008&(data))>>3)
#define DC_BIST_RM_DVS_B_2_shift                                                     (2)
#define DC_BIST_RM_DVS_B_2_mask                                                      (0x00000004)
#define DC_BIST_RM_DVS_B_2(data)                                                     (0x00000004&((data)<<2))
#define DC_BIST_RM_DVS_B_2_src(data)                                                 ((0x00000004&(data))>>2)
#define DC_BIST_RM_get_DVS_B_2(data)                                                 ((0x00000004&(data))>>2)
#define DC_BIST_RM_DVS_B_1_shift                                                     (1)
#define DC_BIST_RM_DVS_B_1_mask                                                      (0x00000002)
#define DC_BIST_RM_DVS_B_1(data)                                                     (0x00000002&((data)<<1))
#define DC_BIST_RM_DVS_B_1_src(data)                                                 ((0x00000002&(data))>>1)
#define DC_BIST_RM_get_DVS_B_1(data)                                                 ((0x00000002&(data))>>1)
#define DC_BIST_RM_DVS_B_0_shift                                                     (0)
#define DC_BIST_RM_DVS_B_0_mask                                                      (0x00000001)
#define DC_BIST_RM_DVS_B_0(data)                                                     (0x00000001&((data)<<0))
#define DC_BIST_RM_DVS_B_0_src(data)                                                 ((0x00000001&(data))>>0)
#define DC_BIST_RM_get_DVS_B_0(data)                                                 ((0x00000001&(data))>>0)


#define DC_BIST0_ST                                                                  0x980081D4
#define DC_BIST0_ST_reg_addr                                                         "0xD80081D4"
#define DC_BIST0_ST_reg                                                              0xD80081D4
#define set_DC_BIST0_ST_reg(data)   (*((volatile unsigned int*) DC_BIST0_ST_reg)=data)
#define get_DC_BIST0_ST_reg   (*((volatile unsigned int*) DC_BIST0_ST_reg))
#define DC_BIST0_ST_inst_adr                                                         "0x0075"
#define DC_BIST0_ST_inst                                                             0x0075
#define DC_BIST0_ST_mbist_st_shift                                                   (12)
#define DC_BIST0_ST_mbist_st_mask                                                    (0x00001000)
#define DC_BIST0_ST_mbist_st(data)                                                   (0x00001000&((data)<<12))
#define DC_BIST0_ST_mbist_st_src(data)                                               ((0x00001000&(data))>>12)
#define DC_BIST0_ST_get_mbist_st(data)                                               ((0x00001000&(data))>>12)
#define DC_BIST0_ST_bist_fail10_shift                                                (11)
#define DC_BIST0_ST_bist_fail10_mask                                                 (0x00000800)
#define DC_BIST0_ST_bist_fail10(data)                                                (0x00000800&((data)<<11))
#define DC_BIST0_ST_bist_fail10_src(data)                                            ((0x00000800&(data))>>11)
#define DC_BIST0_ST_get_bist_fail10(data)                                            ((0x00000800&(data))>>11)
#define DC_BIST0_ST_bist_fail9_shift                                                 (10)
#define DC_BIST0_ST_bist_fail9_mask                                                  (0x00000400)
#define DC_BIST0_ST_bist_fail9(data)                                                 (0x00000400&((data)<<10))
#define DC_BIST0_ST_bist_fail9_src(data)                                             ((0x00000400&(data))>>10)
#define DC_BIST0_ST_get_bist_fail9(data)                                             ((0x00000400&(data))>>10)
#define DC_BIST0_ST_bist_fail8_shift                                                 (9)
#define DC_BIST0_ST_bist_fail8_mask                                                  (0x00000200)
#define DC_BIST0_ST_bist_fail8(data)                                                 (0x00000200&((data)<<9))
#define DC_BIST0_ST_bist_fail8_src(data)                                             ((0x00000200&(data))>>9)
#define DC_BIST0_ST_get_bist_fail8(data)                                             ((0x00000200&(data))>>9)
#define DC_BIST0_ST_bist_fail7_shift                                                 (8)
#define DC_BIST0_ST_bist_fail7_mask                                                  (0x00000100)
#define DC_BIST0_ST_bist_fail7(data)                                                 (0x00000100&((data)<<8))
#define DC_BIST0_ST_bist_fail7_src(data)                                             ((0x00000100&(data))>>8)
#define DC_BIST0_ST_get_bist_fail7(data)                                             ((0x00000100&(data))>>8)
#define DC_BIST0_ST_bist_fail6_shift                                                 (7)
#define DC_BIST0_ST_bist_fail6_mask                                                  (0x00000080)
#define DC_BIST0_ST_bist_fail6(data)                                                 (0x00000080&((data)<<7))
#define DC_BIST0_ST_bist_fail6_src(data)                                             ((0x00000080&(data))>>7)
#define DC_BIST0_ST_get_bist_fail6(data)                                             ((0x00000080&(data))>>7)
#define DC_BIST0_ST_bist_fail5_shift                                                 (6)
#define DC_BIST0_ST_bist_fail5_mask                                                  (0x00000040)
#define DC_BIST0_ST_bist_fail5(data)                                                 (0x00000040&((data)<<6))
#define DC_BIST0_ST_bist_fail5_src(data)                                             ((0x00000040&(data))>>6)
#define DC_BIST0_ST_get_bist_fail5(data)                                             ((0x00000040&(data))>>6)
#define DC_BIST0_ST_bist_fail4_shift                                                 (5)
#define DC_BIST0_ST_bist_fail4_mask                                                  (0x00000020)
#define DC_BIST0_ST_bist_fail4(data)                                                 (0x00000020&((data)<<5))
#define DC_BIST0_ST_bist_fail4_src(data)                                             ((0x00000020&(data))>>5)
#define DC_BIST0_ST_get_bist_fail4(data)                                             ((0x00000020&(data))>>5)
#define DC_BIST0_ST_bist_fail3_shift                                                 (4)
#define DC_BIST0_ST_bist_fail3_mask                                                  (0x00000010)
#define DC_BIST0_ST_bist_fail3(data)                                                 (0x00000010&((data)<<4))
#define DC_BIST0_ST_bist_fail3_src(data)                                             ((0x00000010&(data))>>4)
#define DC_BIST0_ST_get_bist_fail3(data)                                             ((0x00000010&(data))>>4)
#define DC_BIST0_ST_bist_fail2_shift                                                 (3)
#define DC_BIST0_ST_bist_fail2_mask                                                  (0x00000008)
#define DC_BIST0_ST_bist_fail2(data)                                                 (0x00000008&((data)<<3))
#define DC_BIST0_ST_bist_fail2_src(data)                                             ((0x00000008&(data))>>3)
#define DC_BIST0_ST_get_bist_fail2(data)                                             ((0x00000008&(data))>>3)
#define DC_BIST0_ST_bist_fail1_shift                                                 (2)
#define DC_BIST0_ST_bist_fail1_mask                                                  (0x00000004)
#define DC_BIST0_ST_bist_fail1(data)                                                 (0x00000004&((data)<<2))
#define DC_BIST0_ST_bist_fail1_src(data)                                             ((0x00000004&(data))>>2)
#define DC_BIST0_ST_get_bist_fail1(data)                                             ((0x00000004&(data))>>2)
#define DC_BIST0_ST_bist_fail0_shift                                                 (1)
#define DC_BIST0_ST_bist_fail0_mask                                                  (0x00000002)
#define DC_BIST0_ST_bist_fail0(data)                                                 (0x00000002&((data)<<1))
#define DC_BIST0_ST_bist_fail0_src(data)                                             ((0x00000002&(data))>>1)
#define DC_BIST0_ST_get_bist_fail0(data)                                             ((0x00000002&(data))>>1)
#define DC_BIST0_ST_bist_done_shift                                                  (0)
#define DC_BIST0_ST_bist_done_mask                                                   (0x00000001)
#define DC_BIST0_ST_bist_done(data)                                                  (0x00000001&((data)<<0))
#define DC_BIST0_ST_bist_done_src(data)                                              ((0x00000001&(data))>>0)
#define DC_BIST0_ST_get_bist_done(data)                                              ((0x00000001&(data))>>0)


#define DC_DRF0_ST                                                                   0x980081D8
#define DC_DRF0_ST_reg_addr                                                          "0xD80081D8"
#define DC_DRF0_ST_reg                                                               0xD80081D8
#define set_DC_DRF0_ST_reg(data)   (*((volatile unsigned int*) DC_DRF0_ST_reg)=data)
#define get_DC_DRF0_ST_reg   (*((volatile unsigned int*) DC_DRF0_ST_reg))
#define DC_DRF0_ST_inst_adr                                                          "0x0076"
#define DC_DRF0_ST_inst                                                              0x0076
#define DC_DRF0_ST_drf_start_pause_shift                                             (12)
#define DC_DRF0_ST_drf_start_pause_mask                                              (0x00001000)
#define DC_DRF0_ST_drf_start_pause(data)                                             (0x00001000&((data)<<12))
#define DC_DRF0_ST_drf_start_pause_src(data)                                         ((0x00001000&(data))>>12)
#define DC_DRF0_ST_get_drf_start_pause(data)                                         ((0x00001000&(data))>>12)
#define DC_DRF0_ST_drf_fail10_shift                                                  (11)
#define DC_DRF0_ST_drf_fail10_mask                                                   (0x00000800)
#define DC_DRF0_ST_drf_fail10(data)                                                  (0x00000800&((data)<<11))
#define DC_DRF0_ST_drf_fail10_src(data)                                              ((0x00000800&(data))>>11)
#define DC_DRF0_ST_get_drf_fail10(data)                                              ((0x00000800&(data))>>11)
#define DC_DRF0_ST_drf_fail9_shift                                                   (10)
#define DC_DRF0_ST_drf_fail9_mask                                                    (0x00000400)
#define DC_DRF0_ST_drf_fail9(data)                                                   (0x00000400&((data)<<10))
#define DC_DRF0_ST_drf_fail9_src(data)                                               ((0x00000400&(data))>>10)
#define DC_DRF0_ST_get_drf_fail9(data)                                               ((0x00000400&(data))>>10)
#define DC_DRF0_ST_drf_fail8_shift                                                   (9)
#define DC_DRF0_ST_drf_fail8_mask                                                    (0x00000200)
#define DC_DRF0_ST_drf_fail8(data)                                                   (0x00000200&((data)<<9))
#define DC_DRF0_ST_drf_fail8_src(data)                                               ((0x00000200&(data))>>9)
#define DC_DRF0_ST_get_drf_fail8(data)                                               ((0x00000200&(data))>>9)
#define DC_DRF0_ST_drf_fail7_shift                                                   (8)
#define DC_DRF0_ST_drf_fail7_mask                                                    (0x00000100)
#define DC_DRF0_ST_drf_fail7(data)                                                   (0x00000100&((data)<<8))
#define DC_DRF0_ST_drf_fail7_src(data)                                               ((0x00000100&(data))>>8)
#define DC_DRF0_ST_get_drf_fail7(data)                                               ((0x00000100&(data))>>8)
#define DC_DRF0_ST_drf_fail6_shift                                                   (7)
#define DC_DRF0_ST_drf_fail6_mask                                                    (0x00000080)
#define DC_DRF0_ST_drf_fail6(data)                                                   (0x00000080&((data)<<7))
#define DC_DRF0_ST_drf_fail6_src(data)                                               ((0x00000080&(data))>>7)
#define DC_DRF0_ST_get_drf_fail6(data)                                               ((0x00000080&(data))>>7)
#define DC_DRF0_ST_drf_fail5_shift                                                   (6)
#define DC_DRF0_ST_drf_fail5_mask                                                    (0x00000040)
#define DC_DRF0_ST_drf_fail5(data)                                                   (0x00000040&((data)<<6))
#define DC_DRF0_ST_drf_fail5_src(data)                                               ((0x00000040&(data))>>6)
#define DC_DRF0_ST_get_drf_fail5(data)                                               ((0x00000040&(data))>>6)
#define DC_DRF0_ST_drf_fail4_shift                                                   (5)
#define DC_DRF0_ST_drf_fail4_mask                                                    (0x00000020)
#define DC_DRF0_ST_drf_fail4(data)                                                   (0x00000020&((data)<<5))
#define DC_DRF0_ST_drf_fail4_src(data)                                               ((0x00000020&(data))>>5)
#define DC_DRF0_ST_get_drf_fail4(data)                                               ((0x00000020&(data))>>5)
#define DC_DRF0_ST_drf_fail3_shift                                                   (4)
#define DC_DRF0_ST_drf_fail3_mask                                                    (0x00000010)
#define DC_DRF0_ST_drf_fail3(data)                                                   (0x00000010&((data)<<4))
#define DC_DRF0_ST_drf_fail3_src(data)                                               ((0x00000010&(data))>>4)
#define DC_DRF0_ST_get_drf_fail3(data)                                               ((0x00000010&(data))>>4)
#define DC_DRF0_ST_drf_fail2_shift                                                   (3)
#define DC_DRF0_ST_drf_fail2_mask                                                    (0x00000008)
#define DC_DRF0_ST_drf_fail2(data)                                                   (0x00000008&((data)<<3))
#define DC_DRF0_ST_drf_fail2_src(data)                                               ((0x00000008&(data))>>3)
#define DC_DRF0_ST_get_drf_fail2(data)                                               ((0x00000008&(data))>>3)
#define DC_DRF0_ST_drf_fail1_shift                                                   (2)
#define DC_DRF0_ST_drf_fail1_mask                                                    (0x00000004)
#define DC_DRF0_ST_drf_fail1(data)                                                   (0x00000004&((data)<<2))
#define DC_DRF0_ST_drf_fail1_src(data)                                               ((0x00000004&(data))>>2)
#define DC_DRF0_ST_get_drf_fail1(data)                                               ((0x00000004&(data))>>2)
#define DC_DRF0_ST_drf_fail0_shift                                                   (1)
#define DC_DRF0_ST_drf_fail0_mask                                                    (0x00000002)
#define DC_DRF0_ST_drf_fail0(data)                                                   (0x00000002&((data)<<1))
#define DC_DRF0_ST_drf_fail0_src(data)                                               ((0x00000002&(data))>>1)
#define DC_DRF0_ST_get_drf_fail0(data)                                               ((0x00000002&(data))>>1)
#define DC_DRF0_ST_drf_done_shift                                                    (0)
#define DC_DRF0_ST_drf_done_mask                                                     (0x00000001)
#define DC_DRF0_ST_drf_done(data)                                                    (0x00000001&((data)<<0))
#define DC_DRF0_ST_drf_done_src(data)                                                ((0x00000001&(data))>>0)
#define DC_DRF0_ST_get_drf_done(data)                                                ((0x00000001&(data))>>0)


#define DC_BIST1_ST                                                                  0x980081DC
#define DC_BIST1_ST_reg_addr                                                         "0xD80081DC"
#define DC_BIST1_ST_reg                                                              0xD80081DC
#define set_DC_BIST1_ST_reg(data)   (*((volatile unsigned int*) DC_BIST1_ST_reg)=data)
#define get_DC_BIST1_ST_reg   (*((volatile unsigned int*) DC_BIST1_ST_reg))
#define DC_BIST1_ST_inst_adr                                                         "0x0077"
#define DC_BIST1_ST_inst                                                             0x0077
#define DC_BIST1_ST_mbist_st_shift                                                   (12)
#define DC_BIST1_ST_mbist_st_mask                                                    (0x00001000)
#define DC_BIST1_ST_mbist_st(data)                                                   (0x00001000&((data)<<12))
#define DC_BIST1_ST_mbist_st_src(data)                                               ((0x00001000&(data))>>12)
#define DC_BIST1_ST_get_mbist_st(data)                                               ((0x00001000&(data))>>12)
#define DC_BIST1_ST_bist_fail9_shift                                                 (10)
#define DC_BIST1_ST_bist_fail9_mask                                                  (0x00000400)
#define DC_BIST1_ST_bist_fail9(data)                                                 (0x00000400&((data)<<10))
#define DC_BIST1_ST_bist_fail9_src(data)                                             ((0x00000400&(data))>>10)
#define DC_BIST1_ST_get_bist_fail9(data)                                             ((0x00000400&(data))>>10)
#define DC_BIST1_ST_bist_fail8_shift                                                 (9)
#define DC_BIST1_ST_bist_fail8_mask                                                  (0x00000200)
#define DC_BIST1_ST_bist_fail8(data)                                                 (0x00000200&((data)<<9))
#define DC_BIST1_ST_bist_fail8_src(data)                                             ((0x00000200&(data))>>9)
#define DC_BIST1_ST_get_bist_fail8(data)                                             ((0x00000200&(data))>>9)
#define DC_BIST1_ST_bist_fail7_shift                                                 (8)
#define DC_BIST1_ST_bist_fail7_mask                                                  (0x00000100)
#define DC_BIST1_ST_bist_fail7(data)                                                 (0x00000100&((data)<<8))
#define DC_BIST1_ST_bist_fail7_src(data)                                             ((0x00000100&(data))>>8)
#define DC_BIST1_ST_get_bist_fail7(data)                                             ((0x00000100&(data))>>8)
#define DC_BIST1_ST_bist_fail6_shift                                                 (7)
#define DC_BIST1_ST_bist_fail6_mask                                                  (0x00000080)
#define DC_BIST1_ST_bist_fail6(data)                                                 (0x00000080&((data)<<7))
#define DC_BIST1_ST_bist_fail6_src(data)                                             ((0x00000080&(data))>>7)
#define DC_BIST1_ST_get_bist_fail6(data)                                             ((0x00000080&(data))>>7)
#define DC_BIST1_ST_bist_fail5_shift                                                 (6)
#define DC_BIST1_ST_bist_fail5_mask                                                  (0x00000040)
#define DC_BIST1_ST_bist_fail5(data)                                                 (0x00000040&((data)<<6))
#define DC_BIST1_ST_bist_fail5_src(data)                                             ((0x00000040&(data))>>6)
#define DC_BIST1_ST_get_bist_fail5(data)                                             ((0x00000040&(data))>>6)
#define DC_BIST1_ST_bist_fail4_shift                                                 (5)
#define DC_BIST1_ST_bist_fail4_mask                                                  (0x00000020)
#define DC_BIST1_ST_bist_fail4(data)                                                 (0x00000020&((data)<<5))
#define DC_BIST1_ST_bist_fail4_src(data)                                             ((0x00000020&(data))>>5)
#define DC_BIST1_ST_get_bist_fail4(data)                                             ((0x00000020&(data))>>5)
#define DC_BIST1_ST_bist_fail3_shift                                                 (4)
#define DC_BIST1_ST_bist_fail3_mask                                                  (0x00000010)
#define DC_BIST1_ST_bist_fail3(data)                                                 (0x00000010&((data)<<4))
#define DC_BIST1_ST_bist_fail3_src(data)                                             ((0x00000010&(data))>>4)
#define DC_BIST1_ST_get_bist_fail3(data)                                             ((0x00000010&(data))>>4)
#define DC_BIST1_ST_bist_fail2_shift                                                 (3)
#define DC_BIST1_ST_bist_fail2_mask                                                  (0x00000008)
#define DC_BIST1_ST_bist_fail2(data)                                                 (0x00000008&((data)<<3))
#define DC_BIST1_ST_bist_fail2_src(data)                                             ((0x00000008&(data))>>3)
#define DC_BIST1_ST_get_bist_fail2(data)                                             ((0x00000008&(data))>>3)
#define DC_BIST1_ST_bist_fail1_shift                                                 (2)
#define DC_BIST1_ST_bist_fail1_mask                                                  (0x00000004)
#define DC_BIST1_ST_bist_fail1(data)                                                 (0x00000004&((data)<<2))
#define DC_BIST1_ST_bist_fail1_src(data)                                             ((0x00000004&(data))>>2)
#define DC_BIST1_ST_get_bist_fail1(data)                                             ((0x00000004&(data))>>2)
#define DC_BIST1_ST_bist_fail0_shift                                                 (1)
#define DC_BIST1_ST_bist_fail0_mask                                                  (0x00000002)
#define DC_BIST1_ST_bist_fail0(data)                                                 (0x00000002&((data)<<1))
#define DC_BIST1_ST_bist_fail0_src(data)                                             ((0x00000002&(data))>>1)
#define DC_BIST1_ST_get_bist_fail0(data)                                             ((0x00000002&(data))>>1)
#define DC_BIST1_ST_bist_done_shift                                                  (0)
#define DC_BIST1_ST_bist_done_mask                                                   (0x00000001)
#define DC_BIST1_ST_bist_done(data)                                                  (0x00000001&((data)<<0))
#define DC_BIST1_ST_bist_done_src(data)                                              ((0x00000001&(data))>>0)
#define DC_BIST1_ST_get_bist_done(data)                                              ((0x00000001&(data))>>0)


#define DC_DRF1_ST                                                                   0x980081E0
#define DC_DRF1_ST_reg_addr                                                          "0xD80081E0"
#define DC_DRF1_ST_reg                                                               0xD80081E0
#define set_DC_DRF1_ST_reg(data)   (*((volatile unsigned int*) DC_DRF1_ST_reg)=data)
#define get_DC_DRF1_ST_reg   (*((volatile unsigned int*) DC_DRF1_ST_reg))
#define DC_DRF1_ST_inst_adr                                                          "0x0078"
#define DC_DRF1_ST_inst                                                              0x0078
#define DC_DRF1_ST_drf_start_pause_shift                                             (12)
#define DC_DRF1_ST_drf_start_pause_mask                                              (0x00001000)
#define DC_DRF1_ST_drf_start_pause(data)                                             (0x00001000&((data)<<12))
#define DC_DRF1_ST_drf_start_pause_src(data)                                         ((0x00001000&(data))>>12)
#define DC_DRF1_ST_get_drf_start_pause(data)                                         ((0x00001000&(data))>>12)
#define DC_DRF1_ST_drf_fail9_shift                                                   (10)
#define DC_DRF1_ST_drf_fail9_mask                                                    (0x00000400)
#define DC_DRF1_ST_drf_fail9(data)                                                   (0x00000400&((data)<<10))
#define DC_DRF1_ST_drf_fail9_src(data)                                               ((0x00000400&(data))>>10)
#define DC_DRF1_ST_get_drf_fail9(data)                                               ((0x00000400&(data))>>10)
#define DC_DRF1_ST_drf_fail8_shift                                                   (9)
#define DC_DRF1_ST_drf_fail8_mask                                                    (0x00000200)
#define DC_DRF1_ST_drf_fail8(data)                                                   (0x00000200&((data)<<9))
#define DC_DRF1_ST_drf_fail8_src(data)                                               ((0x00000200&(data))>>9)
#define DC_DRF1_ST_get_drf_fail8(data)                                               ((0x00000200&(data))>>9)
#define DC_DRF1_ST_drf_fail7_shift                                                   (8)
#define DC_DRF1_ST_drf_fail7_mask                                                    (0x00000100)
#define DC_DRF1_ST_drf_fail7(data)                                                   (0x00000100&((data)<<8))
#define DC_DRF1_ST_drf_fail7_src(data)                                               ((0x00000100&(data))>>8)
#define DC_DRF1_ST_get_drf_fail7(data)                                               ((0x00000100&(data))>>8)
#define DC_DRF1_ST_drf_fail6_shift                                                   (7)
#define DC_DRF1_ST_drf_fail6_mask                                                    (0x00000080)
#define DC_DRF1_ST_drf_fail6(data)                                                   (0x00000080&((data)<<7))
#define DC_DRF1_ST_drf_fail6_src(data)                                               ((0x00000080&(data))>>7)
#define DC_DRF1_ST_get_drf_fail6(data)                                               ((0x00000080&(data))>>7)
#define DC_DRF1_ST_drf_fail5_shift                                                   (6)
#define DC_DRF1_ST_drf_fail5_mask                                                    (0x00000040)
#define DC_DRF1_ST_drf_fail5(data)                                                   (0x00000040&((data)<<6))
#define DC_DRF1_ST_drf_fail5_src(data)                                               ((0x00000040&(data))>>6)
#define DC_DRF1_ST_get_drf_fail5(data)                                               ((0x00000040&(data))>>6)
#define DC_DRF1_ST_drf_fail4_shift                                                   (5)
#define DC_DRF1_ST_drf_fail4_mask                                                    (0x00000020)
#define DC_DRF1_ST_drf_fail4(data)                                                   (0x00000020&((data)<<5))
#define DC_DRF1_ST_drf_fail4_src(data)                                               ((0x00000020&(data))>>5)
#define DC_DRF1_ST_get_drf_fail4(data)                                               ((0x00000020&(data))>>5)
#define DC_DRF1_ST_drf_fail3_shift                                                   (4)
#define DC_DRF1_ST_drf_fail3_mask                                                    (0x00000010)
#define DC_DRF1_ST_drf_fail3(data)                                                   (0x00000010&((data)<<4))
#define DC_DRF1_ST_drf_fail3_src(data)                                               ((0x00000010&(data))>>4)
#define DC_DRF1_ST_get_drf_fail3(data)                                               ((0x00000010&(data))>>4)
#define DC_DRF1_ST_drf_fail2_shift                                                   (3)
#define DC_DRF1_ST_drf_fail2_mask                                                    (0x00000008)
#define DC_DRF1_ST_drf_fail2(data)                                                   (0x00000008&((data)<<3))
#define DC_DRF1_ST_drf_fail2_src(data)                                               ((0x00000008&(data))>>3)
#define DC_DRF1_ST_get_drf_fail2(data)                                               ((0x00000008&(data))>>3)
#define DC_DRF1_ST_drf_fail1_shift                                                   (2)
#define DC_DRF1_ST_drf_fail1_mask                                                    (0x00000004)
#define DC_DRF1_ST_drf_fail1(data)                                                   (0x00000004&((data)<<2))
#define DC_DRF1_ST_drf_fail1_src(data)                                               ((0x00000004&(data))>>2)
#define DC_DRF1_ST_get_drf_fail1(data)                                               ((0x00000004&(data))>>2)
#define DC_DRF1_ST_drf_fail0_shift                                                   (1)
#define DC_DRF1_ST_drf_fail0_mask                                                    (0x00000002)
#define DC_DRF1_ST_drf_fail0(data)                                                   (0x00000002&((data)<<1))
#define DC_DRF1_ST_drf_fail0_src(data)                                               ((0x00000002&(data))>>1)
#define DC_DRF1_ST_get_drf_fail0(data)                                               ((0x00000002&(data))>>1)
#define DC_DRF1_ST_drf_done_shift                                                    (0)
#define DC_DRF1_ST_drf_done_mask                                                     (0x00000001)
#define DC_DRF1_ST_drf_done(data)                                                    (0x00000001&((data)<<0))
#define DC_DRF1_ST_drf_done_src(data)                                                ((0x00000001&(data))>>0)
#define DC_DRF1_ST_get_drf_done(data)                                                ((0x00000001&(data))>>0)


#define DC_DUMMY_REG0                                                                0x980081F0
#define DC_DUMMY_REG0_reg_addr                                                       "0xD80081F0"
#define DC_DUMMY_REG0_reg                                                            0xD80081F0
#define set_DC_DUMMY_REG0_reg(data)   (*((volatile unsigned int*) DC_DUMMY_REG0_reg)=data)
#define get_DC_DUMMY_REG0_reg   (*((volatile unsigned int*) DC_DUMMY_REG0_reg))
#define DC_DUMMY_REG0_inst_adr                                                       "0x007C"
#define DC_DUMMY_REG0_inst                                                           0x007C
#define DC_DUMMY_REG0_dummy_reg0_shift                                               (0)
#define DC_DUMMY_REG0_dummy_reg0_mask                                                (0xFFFFFFFF)
#define DC_DUMMY_REG0_dummy_reg0(data)                                               (0xFFFFFFFF&((data)<<0))
#define DC_DUMMY_REG0_dummy_reg0_src(data)                                           ((0xFFFFFFFF&(data))>>0)
#define DC_DUMMY_REG0_get_dummy_reg0(data)                                           ((0xFFFFFFFF&(data))>>0)


#define DC_DUMMY_REG1                                                                0x980081F4
#define DC_DUMMY_REG1_reg_addr                                                       "0xD80081F4"
#define DC_DUMMY_REG1_reg                                                            0xD80081F4
#define set_DC_DUMMY_REG1_reg(data)   (*((volatile unsigned int*) DC_DUMMY_REG1_reg)=data)
#define get_DC_DUMMY_REG1_reg   (*((volatile unsigned int*) DC_DUMMY_REG1_reg))
#define DC_DUMMY_REG1_inst_adr                                                       "0x007D"
#define DC_DUMMY_REG1_inst                                                           0x007D
#define DC_DUMMY_REG1_dummy_reg1_shift                                               (0)
#define DC_DUMMY_REG1_dummy_reg1_mask                                                (0xFFFFFFFF)
#define DC_DUMMY_REG1_dummy_reg1(data)                                               (0xFFFFFFFF&((data)<<0))
#define DC_DUMMY_REG1_dummy_reg1_src(data)                                           ((0xFFFFFFFF&(data))>>0)
#define DC_DUMMY_REG1_get_dummy_reg1(data)                                           ((0xFFFFFFFF&(data))>>0)


#define DC_DUMMY_REG2                                                                0x980081F8
#define DC_DUMMY_REG2_reg_addr                                                       "0xD80081F8"
#define DC_DUMMY_REG2_reg                                                            0xD80081F8
#define set_DC_DUMMY_REG2_reg(data)   (*((volatile unsigned int*) DC_DUMMY_REG2_reg)=data)
#define get_DC_DUMMY_REG2_reg   (*((volatile unsigned int*) DC_DUMMY_REG2_reg))
#define DC_DUMMY_REG2_inst_adr                                                       "0x007E"
#define DC_DUMMY_REG2_inst                                                           0x007E
#define DC_DUMMY_REG2_dummy_reg2_shift                                               (0)
#define DC_DUMMY_REG2_dummy_reg2_mask                                                (0xFFFFFFFF)
#define DC_DUMMY_REG2_dummy_reg2(data)                                               (0xFFFFFFFF&((data)<<0))
#define DC_DUMMY_REG2_dummy_reg2_src(data)                                           ((0xFFFFFFFF&(data))>>0)
#define DC_DUMMY_REG2_get_dummy_reg2(data)                                           ((0xFFFFFFFF&(data))>>0)


#define DC_DUMMY_REG3                                                                0x980081FC
#define DC_DUMMY_REG3_reg_addr                                                       "0xD80081FC"
#define DC_DUMMY_REG3_reg                                                            0xD80081FC
#define set_DC_DUMMY_REG3_reg(data)   (*((volatile unsigned int*) DC_DUMMY_REG3_reg)=data)
#define get_DC_DUMMY_REG3_reg   (*((volatile unsigned int*) DC_DUMMY_REG3_reg))
#define DC_DUMMY_REG3_inst_adr                                                       "0x007F"
#define DC_DUMMY_REG3_inst                                                           0x007F
#define DC_DUMMY_REG3_dummy_reg3_shift                                               (0)
#define DC_DUMMY_REG3_dummy_reg3_mask                                                (0xFFFFFFFF)
#define DC_DUMMY_REG3_dummy_reg3(data)                                               (0xFFFFFFFF&((data)<<0))
#define DC_DUMMY_REG3_dummy_reg3_src(data)                                           ((0xFFFFFFFF&(data))>>0)
#define DC_DUMMY_REG3_get_dummy_reg3(data)                                           ((0xFFFFFFFF&(data))>>0)


#define DC_MT_SADDR_0                                                                0x98008200
#define DC_MT_SADDR_1                                                                0x98008204
#define DC_MT_SADDR_2                                                                0x98008208
#define DC_MT_SADDR_3                                                                0x9800820C
#define DC_MT_SADDR_4                                                                0x98008210
#define DC_MT_SADDR_5                                                                0x98008214
#define DC_MT_SADDR_6                                                                0x98008218
#define DC_MT_SADDR_7                                                                0x9800821C
#define DC_MT_SADDR_0_reg_addr                                                       "0xD8008200"
#define DC_MT_SADDR_1_reg_addr                                                       "0xD8008204"
#define DC_MT_SADDR_2_reg_addr                                                       "0xD8008208"
#define DC_MT_SADDR_3_reg_addr                                                       "0xD800820C"
#define DC_MT_SADDR_4_reg_addr                                                       "0xD8008210"
#define DC_MT_SADDR_5_reg_addr                                                       "0xD8008214"
#define DC_MT_SADDR_6_reg_addr                                                       "0xD8008218"
#define DC_MT_SADDR_7_reg_addr                                                       "0xD800821C"
#define DC_MT_SADDR_0_reg                                                            0xD8008200
#define DC_MT_SADDR_1_reg                                                            0xD8008204
#define DC_MT_SADDR_2_reg                                                            0xD8008208
#define DC_MT_SADDR_3_reg                                                            0xD800820C
#define DC_MT_SADDR_4_reg                                                            0xD8008210
#define DC_MT_SADDR_5_reg                                                            0xD8008214
#define DC_MT_SADDR_6_reg                                                            0xD8008218
#define DC_MT_SADDR_7_reg                                                            0xD800821C
#define set_DC_MT_SADDR_0_reg(data)   (*((volatile unsigned int*) DC_MT_SADDR_0_reg)=data)
#define set_DC_MT_SADDR_1_reg(data)   (*((volatile unsigned int*) DC_MT_SADDR_1_reg)=data)
#define set_DC_MT_SADDR_2_reg(data)   (*((volatile unsigned int*) DC_MT_SADDR_2_reg)=data)
#define set_DC_MT_SADDR_3_reg(data)   (*((volatile unsigned int*) DC_MT_SADDR_3_reg)=data)
#define set_DC_MT_SADDR_4_reg(data)   (*((volatile unsigned int*) DC_MT_SADDR_4_reg)=data)
#define set_DC_MT_SADDR_5_reg(data)   (*((volatile unsigned int*) DC_MT_SADDR_5_reg)=data)
#define set_DC_MT_SADDR_6_reg(data)   (*((volatile unsigned int*) DC_MT_SADDR_6_reg)=data)
#define set_DC_MT_SADDR_7_reg(data)   (*((volatile unsigned int*) DC_MT_SADDR_7_reg)=data)
#define get_DC_MT_SADDR_0_reg   (*((volatile unsigned int*) DC_MT_SADDR_0_reg))
#define get_DC_MT_SADDR_1_reg   (*((volatile unsigned int*) DC_MT_SADDR_1_reg))
#define get_DC_MT_SADDR_2_reg   (*((volatile unsigned int*) DC_MT_SADDR_2_reg))
#define get_DC_MT_SADDR_3_reg   (*((volatile unsigned int*) DC_MT_SADDR_3_reg))
#define get_DC_MT_SADDR_4_reg   (*((volatile unsigned int*) DC_MT_SADDR_4_reg))
#define get_DC_MT_SADDR_5_reg   (*((volatile unsigned int*) DC_MT_SADDR_5_reg))
#define get_DC_MT_SADDR_6_reg   (*((volatile unsigned int*) DC_MT_SADDR_6_reg))
#define get_DC_MT_SADDR_7_reg   (*((volatile unsigned int*) DC_MT_SADDR_7_reg))
#define DC_MT_SADDR_0_inst_adr                                                       "0x0080"
#define DC_MT_SADDR_1_inst_adr                                                       "0x0081"
#define DC_MT_SADDR_2_inst_adr                                                       "0x0082"
#define DC_MT_SADDR_3_inst_adr                                                       "0x0083"
#define DC_MT_SADDR_4_inst_adr                                                       "0x0084"
#define DC_MT_SADDR_5_inst_adr                                                       "0x0085"
#define DC_MT_SADDR_6_inst_adr                                                       "0x0086"
#define DC_MT_SADDR_7_inst_adr                                                       "0x0087"
#define DC_MT_SADDR_0_inst                                                           0x0080
#define DC_MT_SADDR_1_inst                                                           0x0081
#define DC_MT_SADDR_2_inst                                                           0x0082
#define DC_MT_SADDR_3_inst                                                           0x0083
#define DC_MT_SADDR_4_inst                                                           0x0084
#define DC_MT_SADDR_5_inst                                                           0x0085
#define DC_MT_SADDR_6_inst                                                           0x0086
#define DC_MT_SADDR_7_inst                                                           0x0087
#define DC_MT_SADDR_mem_type_shift                                                   (30)
#define DC_MT_SADDR_mem_type_mask                                                    (0xC0000000)
#define DC_MT_SADDR_mem_type(data)                                                   (0xC0000000&((data)<<30))
#define DC_MT_SADDR_mem_type_src(data)                                               ((0xC0000000&(data))>>30)
#define DC_MT_SADDR_get_mem_type(data)                                               ((0xC0000000&(data))>>30)
#define DC_MT_SADDR_saddr_shift                                                      (2)
#define DC_MT_SADDR_saddr_mask                                                       (0x3FFFFFFC)
#define DC_MT_SADDR_saddr(data)                                                      (0x3FFFFFFC&((data)<<2))
#define DC_MT_SADDR_saddr_src(data)                                                  ((0x3FFFFFFC&(data))>>2)
#define DC_MT_SADDR_get_saddr(data)                                                  ((0x3FFFFFFC&(data))>>2)


#define DC_MT_EADDR_0                                                                0x98008220
#define DC_MT_EADDR_1                                                                0x98008224
#define DC_MT_EADDR_2                                                                0x98008228
#define DC_MT_EADDR_3                                                                0x9800822C
#define DC_MT_EADDR_4                                                                0x98008230
#define DC_MT_EADDR_5                                                                0x98008234
#define DC_MT_EADDR_6                                                                0x98008238
#define DC_MT_EADDR_7                                                                0x9800823C
#define DC_MT_EADDR_0_reg_addr                                                       "0xD8008220"
#define DC_MT_EADDR_1_reg_addr                                                       "0xD8008224"
#define DC_MT_EADDR_2_reg_addr                                                       "0xD8008228"
#define DC_MT_EADDR_3_reg_addr                                                       "0xD800822C"
#define DC_MT_EADDR_4_reg_addr                                                       "0xD8008230"
#define DC_MT_EADDR_5_reg_addr                                                       "0xD8008234"
#define DC_MT_EADDR_6_reg_addr                                                       "0xD8008238"
#define DC_MT_EADDR_7_reg_addr                                                       "0xD800823C"
#define DC_MT_EADDR_0_reg                                                            0xD8008220
#define DC_MT_EADDR_1_reg                                                            0xD8008224
#define DC_MT_EADDR_2_reg                                                            0xD8008228
#define DC_MT_EADDR_3_reg                                                            0xD800822C
#define DC_MT_EADDR_4_reg                                                            0xD8008230
#define DC_MT_EADDR_5_reg                                                            0xD8008234
#define DC_MT_EADDR_6_reg                                                            0xD8008238
#define DC_MT_EADDR_7_reg                                                            0xD800823C
#define set_DC_MT_EADDR_0_reg(data)   (*((volatile unsigned int*) DC_MT_EADDR_0_reg)=data)
#define set_DC_MT_EADDR_1_reg(data)   (*((volatile unsigned int*) DC_MT_EADDR_1_reg)=data)
#define set_DC_MT_EADDR_2_reg(data)   (*((volatile unsigned int*) DC_MT_EADDR_2_reg)=data)
#define set_DC_MT_EADDR_3_reg(data)   (*((volatile unsigned int*) DC_MT_EADDR_3_reg)=data)
#define set_DC_MT_EADDR_4_reg(data)   (*((volatile unsigned int*) DC_MT_EADDR_4_reg)=data)
#define set_DC_MT_EADDR_5_reg(data)   (*((volatile unsigned int*) DC_MT_EADDR_5_reg)=data)
#define set_DC_MT_EADDR_6_reg(data)   (*((volatile unsigned int*) DC_MT_EADDR_6_reg)=data)
#define set_DC_MT_EADDR_7_reg(data)   (*((volatile unsigned int*) DC_MT_EADDR_7_reg)=data)
#define get_DC_MT_EADDR_0_reg   (*((volatile unsigned int*) DC_MT_EADDR_0_reg))
#define get_DC_MT_EADDR_1_reg   (*((volatile unsigned int*) DC_MT_EADDR_1_reg))
#define get_DC_MT_EADDR_2_reg   (*((volatile unsigned int*) DC_MT_EADDR_2_reg))
#define get_DC_MT_EADDR_3_reg   (*((volatile unsigned int*) DC_MT_EADDR_3_reg))
#define get_DC_MT_EADDR_4_reg   (*((volatile unsigned int*) DC_MT_EADDR_4_reg))
#define get_DC_MT_EADDR_5_reg   (*((volatile unsigned int*) DC_MT_EADDR_5_reg))
#define get_DC_MT_EADDR_6_reg   (*((volatile unsigned int*) DC_MT_EADDR_6_reg))
#define get_DC_MT_EADDR_7_reg   (*((volatile unsigned int*) DC_MT_EADDR_7_reg))
#define DC_MT_EADDR_0_inst_adr                                                       "0x0088"
#define DC_MT_EADDR_1_inst_adr                                                       "0x0089"
#define DC_MT_EADDR_2_inst_adr                                                       "0x008A"
#define DC_MT_EADDR_3_inst_adr                                                       "0x008B"
#define DC_MT_EADDR_4_inst_adr                                                       "0x008C"
#define DC_MT_EADDR_5_inst_adr                                                       "0x008D"
#define DC_MT_EADDR_6_inst_adr                                                       "0x008E"
#define DC_MT_EADDR_7_inst_adr                                                       "0x008F"
#define DC_MT_EADDR_0_inst                                                           0x0088
#define DC_MT_EADDR_1_inst                                                           0x0089
#define DC_MT_EADDR_2_inst                                                           0x008A
#define DC_MT_EADDR_3_inst                                                           0x008B
#define DC_MT_EADDR_4_inst                                                           0x008C
#define DC_MT_EADDR_5_inst                                                           0x008D
#define DC_MT_EADDR_6_inst                                                           0x008E
#define DC_MT_EADDR_7_inst                                                           0x008F
#define DC_MT_EADDR_eaddr_shift                                                      (2)
#define DC_MT_EADDR_eaddr_mask                                                       (0x3FFFFFFC)
#define DC_MT_EADDR_eaddr(data)                                                      (0x3FFFFFFC&((data)<<2))
#define DC_MT_EADDR_eaddr_src(data)                                                  ((0x3FFFFFFC&(data))>>2)
#define DC_MT_EADDR_get_eaddr(data)                                                  ((0x3FFFFFFC&(data))>>2)


#define DC_MT_MODE_0                                                                 0x98008240
#define DC_MT_MODE_1                                                                 0x98008244
#define DC_MT_MODE_2                                                                 0x98008248
#define DC_MT_MODE_3                                                                 0x9800824C
#define DC_MT_MODE_4                                                                 0x98008250
#define DC_MT_MODE_5                                                                 0x98008254
#define DC_MT_MODE_6                                                                 0x98008258
#define DC_MT_MODE_7                                                                 0x9800825C
#define DC_MT_MODE_0_reg_addr                                                        "0xD8008240"
#define DC_MT_MODE_1_reg_addr                                                        "0xD8008244"
#define DC_MT_MODE_2_reg_addr                                                        "0xD8008248"
#define DC_MT_MODE_3_reg_addr                                                        "0xD800824C"
#define DC_MT_MODE_4_reg_addr                                                        "0xD8008250"
#define DC_MT_MODE_5_reg_addr                                                        "0xD8008254"
#define DC_MT_MODE_6_reg_addr                                                        "0xD8008258"
#define DC_MT_MODE_7_reg_addr                                                        "0xD800825C"
#define DC_MT_MODE_0_reg                                                             0xD8008240
#define DC_MT_MODE_1_reg                                                             0xD8008244
#define DC_MT_MODE_2_reg                                                             0xD8008248
#define DC_MT_MODE_3_reg                                                             0xD800824C
#define DC_MT_MODE_4_reg                                                             0xD8008250
#define DC_MT_MODE_5_reg                                                             0xD8008254
#define DC_MT_MODE_6_reg                                                             0xD8008258
#define DC_MT_MODE_7_reg                                                             0xD800825C
#define set_DC_MT_MODE_0_reg(data)   (*((volatile unsigned int*) DC_MT_MODE_0_reg)=data)
#define set_DC_MT_MODE_1_reg(data)   (*((volatile unsigned int*) DC_MT_MODE_1_reg)=data)
#define set_DC_MT_MODE_2_reg(data)   (*((volatile unsigned int*) DC_MT_MODE_2_reg)=data)
#define set_DC_MT_MODE_3_reg(data)   (*((volatile unsigned int*) DC_MT_MODE_3_reg)=data)
#define set_DC_MT_MODE_4_reg(data)   (*((volatile unsigned int*) DC_MT_MODE_4_reg)=data)
#define set_DC_MT_MODE_5_reg(data)   (*((volatile unsigned int*) DC_MT_MODE_5_reg)=data)
#define set_DC_MT_MODE_6_reg(data)   (*((volatile unsigned int*) DC_MT_MODE_6_reg)=data)
#define set_DC_MT_MODE_7_reg(data)   (*((volatile unsigned int*) DC_MT_MODE_7_reg)=data)
#define get_DC_MT_MODE_0_reg   (*((volatile unsigned int*) DC_MT_MODE_0_reg))
#define get_DC_MT_MODE_1_reg   (*((volatile unsigned int*) DC_MT_MODE_1_reg))
#define get_DC_MT_MODE_2_reg   (*((volatile unsigned int*) DC_MT_MODE_2_reg))
#define get_DC_MT_MODE_3_reg   (*((volatile unsigned int*) DC_MT_MODE_3_reg))
#define get_DC_MT_MODE_4_reg   (*((volatile unsigned int*) DC_MT_MODE_4_reg))
#define get_DC_MT_MODE_5_reg   (*((volatile unsigned int*) DC_MT_MODE_5_reg))
#define get_DC_MT_MODE_6_reg   (*((volatile unsigned int*) DC_MT_MODE_6_reg))
#define get_DC_MT_MODE_7_reg   (*((volatile unsigned int*) DC_MT_MODE_7_reg))
#define DC_MT_MODE_0_inst_adr                                                        "0x0090"
#define DC_MT_MODE_1_inst_adr                                                        "0x0091"
#define DC_MT_MODE_2_inst_adr                                                        "0x0092"
#define DC_MT_MODE_3_inst_adr                                                        "0x0093"
#define DC_MT_MODE_4_inst_adr                                                        "0x0094"
#define DC_MT_MODE_5_inst_adr                                                        "0x0095"
#define DC_MT_MODE_6_inst_adr                                                        "0x0096"
#define DC_MT_MODE_7_inst_adr                                                        "0x0097"
#define DC_MT_MODE_0_inst                                                            0x0090
#define DC_MT_MODE_1_inst                                                            0x0091
#define DC_MT_MODE_2_inst                                                            0x0092
#define DC_MT_MODE_3_inst                                                            0x0093
#define DC_MT_MODE_4_inst                                                            0x0094
#define DC_MT_MODE_5_inst                                                            0x0095
#define DC_MT_MODE_6_inst                                                            0x0096
#define DC_MT_MODE_7_inst                                                            0x0097
#define DC_MT_MODE_write_enable0_shift                                               (23)
#define DC_MT_MODE_write_enable0_mask                                                (0x00800000)
#define DC_MT_MODE_write_enable0(data)                                               (0x00800000&((data)<<23))
#define DC_MT_MODE_write_enable0_src(data)                                           ((0x00800000&(data))>>23)
#define DC_MT_MODE_get_write_enable0(data)                                           ((0x00800000&(data))>>23)
#define DC_MT_MODE_access_type_0_shift                                               (21)
#define DC_MT_MODE_access_type_0_mask                                                (0x00600000)
#define DC_MT_MODE_access_type_0(data)                                               (0x00600000&((data)<<21))
#define DC_MT_MODE_access_type_0_src(data)                                           ((0x00600000&(data))>>21)
#define DC_MT_MODE_get_access_type_0(data)                                           ((0x00600000&(data))>>21)
#define DC_MT_MODE_access_type_1_shift                                               (19)
#define DC_MT_MODE_access_type_1_mask                                                (0x00180000)
#define DC_MT_MODE_access_type_1(data)                                               (0x00180000&((data)<<19))
#define DC_MT_MODE_access_type_1_src(data)                                           ((0x00180000&(data))>>19)
#define DC_MT_MODE_get_access_type_1(data)                                           ((0x00180000&(data))>>19)
#define DC_MT_MODE_access_type_2_shift                                               (17)
#define DC_MT_MODE_access_type_2_mask                                                (0x00060000)
#define DC_MT_MODE_access_type_2(data)                                               (0x00060000&((data)<<17))
#define DC_MT_MODE_access_type_2_src(data)                                           ((0x00060000&(data))>>17)
#define DC_MT_MODE_get_access_type_2(data)                                           ((0x00060000&(data))>>17)
#define DC_MT_MODE_access_type_3_shift                                               (15)
#define DC_MT_MODE_access_type_3_mask                                                (0x00018000)
#define DC_MT_MODE_access_type_3(data)                                               (0x00018000&((data)<<15))
#define DC_MT_MODE_access_type_3_src(data)                                           ((0x00018000&(data))>>15)
#define DC_MT_MODE_get_access_type_3(data)                                           ((0x00018000&(data))>>15)
#define DC_MT_MODE_write_enable1_shift                                               (14)
#define DC_MT_MODE_write_enable1_mask                                                (0x00004000)
#define DC_MT_MODE_write_enable1(data)                                               (0x00004000&((data)<<14))
#define DC_MT_MODE_write_enable1_src(data)                                           ((0x00004000&(data))>>14)
#define DC_MT_MODE_get_write_enable1(data)                                           ((0x00004000&(data))>>14)
#define DC_MT_MODE_int1_shift                                                        (13)
#define DC_MT_MODE_int1_mask                                                         (0x00002000)
#define DC_MT_MODE_int1(data)                                                        (0x00002000&((data)<<13))
#define DC_MT_MODE_int1_src(data)                                                    ((0x00002000&(data))>>13)
#define DC_MT_MODE_get_int1(data)                                                    ((0x00002000&(data))>>13)
#define DC_MT_MODE_write_enable2_shift                                               (12)
#define DC_MT_MODE_write_enable2_mask                                                (0x00001000)
#define DC_MT_MODE_write_enable2(data)                                               (0x00001000&((data)<<12))
#define DC_MT_MODE_write_enable2_src(data)                                           ((0x00001000&(data))>>12)
#define DC_MT_MODE_get_write_enable2(data)                                           ((0x00001000&(data))>>12)
#define DC_MT_MODE_int2_shift                                                        (11)
#define DC_MT_MODE_int2_mask                                                         (0x00000800)
#define DC_MT_MODE_int2(data)                                                        (0x00000800&((data)<<11))
#define DC_MT_MODE_int2_src(data)                                                    ((0x00000800&(data))>>11)
#define DC_MT_MODE_get_int2(data)                                                    ((0x00000800&(data))>>11)
#define DC_MT_MODE_write_enable3_shift                                               (10)
#define DC_MT_MODE_write_enable3_mask                                                (0x00000400)
#define DC_MT_MODE_write_enable3(data)                                               (0x00000400&((data)<<10))
#define DC_MT_MODE_write_enable3_src(data)                                           ((0x00000400&(data))>>10)
#define DC_MT_MODE_get_write_enable3(data)                                           ((0x00000400&(data))>>10)
#define DC_MT_MODE_int3_shift                                                        (9)
#define DC_MT_MODE_int3_mask                                                         (0x00000200)
#define DC_MT_MODE_int3(data)                                                        (0x00000200&((data)<<9))
#define DC_MT_MODE_int3_src(data)                                                    ((0x00000200&(data))>>9)
#define DC_MT_MODE_get_int3(data)                                                    ((0x00000200&(data))>>9)
#define DC_MT_MODE_write_enable4_shift                                               (8)
#define DC_MT_MODE_write_enable4_mask                                                (0x00000100)
#define DC_MT_MODE_write_enable4(data)                                               (0x00000100&((data)<<8))
#define DC_MT_MODE_write_enable4_src(data)                                           ((0x00000100&(data))>>8)
#define DC_MT_MODE_get_write_enable4(data)                                           ((0x00000100&(data))>>8)
#define DC_MT_MODE_cpu_shift                                                         (6)
#define DC_MT_MODE_cpu_mask                                                          (0x000000C0)
#define DC_MT_MODE_cpu(data)                                                         (0x000000C0&((data)<<6))
#define DC_MT_MODE_cpu_src(data)                                                     ((0x000000C0&(data))>>6)
#define DC_MT_MODE_get_cpu(data)                                                     ((0x000000C0&(data))>>6)
#define DC_MT_MODE_int1_en_shift                                                     (5)
#define DC_MT_MODE_int1_en_mask                                                      (0x00000020)
#define DC_MT_MODE_int1_en(data)                                                     (0x00000020&((data)<<5))
#define DC_MT_MODE_int1_en_src(data)                                                 ((0x00000020&(data))>>5)
#define DC_MT_MODE_get_int1_en(data)                                                 ((0x00000020&(data))>>5)
#define DC_MT_MODE_int2_en_shift                                                     (4)
#define DC_MT_MODE_int2_en_mask                                                      (0x00000010)
#define DC_MT_MODE_int2_en(data)                                                     (0x00000010&((data)<<4))
#define DC_MT_MODE_int2_en_src(data)                                                 ((0x00000010&(data))>>4)
#define DC_MT_MODE_get_int2_en(data)                                                 ((0x00000010&(data))>>4)
#define DC_MT_MODE_int3_en_shift                                                     (3)
#define DC_MT_MODE_int3_en_mask                                                      (0x00000008)
#define DC_MT_MODE_int3_en(data)                                                     (0x00000008&((data)<<3))
#define DC_MT_MODE_int3_en_src(data)                                                 ((0x00000008&(data))>>3)
#define DC_MT_MODE_get_int3_en(data)                                                 ((0x00000008&(data))>>3)
#define DC_MT_MODE_write_enable5_shift                                               (2)
#define DC_MT_MODE_write_enable5_mask                                                (0x00000004)
#define DC_MT_MODE_write_enable5(data)                                               (0x00000004&((data)<<2))
#define DC_MT_MODE_write_enable5_src(data)                                           ((0x00000004&(data))>>2)
#define DC_MT_MODE_get_write_enable5(data)                                           ((0x00000004&(data))>>2)
#define DC_MT_MODE_mode_shift                                                        (0)
#define DC_MT_MODE_mode_mask                                                         (0x00000003)
#define DC_MT_MODE_mode(data)                                                        (0x00000003&((data)<<0))
#define DC_MT_MODE_mode_src(data)                                                    ((0x00000003&(data))>>0)
#define DC_MT_MODE_get_mode(data)                                                    ((0x00000003&(data))>>0)


#define DC_MT_TABLE_0                                                                0x98008260
#define DC_MT_TABLE_1                                                                0x98008264
#define DC_MT_TABLE_2                                                                0x98008268
#define DC_MT_TABLE_3                                                                0x9800826C
#define DC_MT_TABLE_4                                                                0x98008270
#define DC_MT_TABLE_5                                                                0x98008274
#define DC_MT_TABLE_6                                                                0x98008278
#define DC_MT_TABLE_7                                                                0x9800827C
#define DC_MT_TABLE_0_reg_addr                                                       "0xD8008260"
#define DC_MT_TABLE_1_reg_addr                                                       "0xD8008264"
#define DC_MT_TABLE_2_reg_addr                                                       "0xD8008268"
#define DC_MT_TABLE_3_reg_addr                                                       "0xD800826C"
#define DC_MT_TABLE_4_reg_addr                                                       "0xD8008270"
#define DC_MT_TABLE_5_reg_addr                                                       "0xD8008274"
#define DC_MT_TABLE_6_reg_addr                                                       "0xD8008278"
#define DC_MT_TABLE_7_reg_addr                                                       "0xD800827C"
#define DC_MT_TABLE_0_reg                                                            0xD8008260
#define DC_MT_TABLE_1_reg                                                            0xD8008264
#define DC_MT_TABLE_2_reg                                                            0xD8008268
#define DC_MT_TABLE_3_reg                                                            0xD800826C
#define DC_MT_TABLE_4_reg                                                            0xD8008270
#define DC_MT_TABLE_5_reg                                                            0xD8008274
#define DC_MT_TABLE_6_reg                                                            0xD8008278
#define DC_MT_TABLE_7_reg                                                            0xD800827C
#define set_DC_MT_TABLE_0_reg(data)   (*((volatile unsigned int*) DC_MT_TABLE_0_reg)=data)
#define set_DC_MT_TABLE_1_reg(data)   (*((volatile unsigned int*) DC_MT_TABLE_1_reg)=data)
#define set_DC_MT_TABLE_2_reg(data)   (*((volatile unsigned int*) DC_MT_TABLE_2_reg)=data)
#define set_DC_MT_TABLE_3_reg(data)   (*((volatile unsigned int*) DC_MT_TABLE_3_reg)=data)
#define set_DC_MT_TABLE_4_reg(data)   (*((volatile unsigned int*) DC_MT_TABLE_4_reg)=data)
#define set_DC_MT_TABLE_5_reg(data)   (*((volatile unsigned int*) DC_MT_TABLE_5_reg)=data)
#define set_DC_MT_TABLE_6_reg(data)   (*((volatile unsigned int*) DC_MT_TABLE_6_reg)=data)
#define set_DC_MT_TABLE_7_reg(data)   (*((volatile unsigned int*) DC_MT_TABLE_7_reg)=data)
#define get_DC_MT_TABLE_0_reg   (*((volatile unsigned int*) DC_MT_TABLE_0_reg))
#define get_DC_MT_TABLE_1_reg   (*((volatile unsigned int*) DC_MT_TABLE_1_reg))
#define get_DC_MT_TABLE_2_reg   (*((volatile unsigned int*) DC_MT_TABLE_2_reg))
#define get_DC_MT_TABLE_3_reg   (*((volatile unsigned int*) DC_MT_TABLE_3_reg))
#define get_DC_MT_TABLE_4_reg   (*((volatile unsigned int*) DC_MT_TABLE_4_reg))
#define get_DC_MT_TABLE_5_reg   (*((volatile unsigned int*) DC_MT_TABLE_5_reg))
#define get_DC_MT_TABLE_6_reg   (*((volatile unsigned int*) DC_MT_TABLE_6_reg))
#define get_DC_MT_TABLE_7_reg   (*((volatile unsigned int*) DC_MT_TABLE_7_reg))
#define DC_MT_TABLE_0_inst_adr                                                       "0x0098"
#define DC_MT_TABLE_1_inst_adr                                                       "0x0099"
#define DC_MT_TABLE_2_inst_adr                                                       "0x009A"
#define DC_MT_TABLE_3_inst_adr                                                       "0x009B"
#define DC_MT_TABLE_4_inst_adr                                                       "0x009C"
#define DC_MT_TABLE_5_inst_adr                                                       "0x009D"
#define DC_MT_TABLE_6_inst_adr                                                       "0x009E"
#define DC_MT_TABLE_7_inst_adr                                                       "0x009F"
#define DC_MT_TABLE_0_inst                                                           0x0098
#define DC_MT_TABLE_1_inst                                                           0x0099
#define DC_MT_TABLE_2_inst                                                           0x009A
#define DC_MT_TABLE_3_inst                                                           0x009B
#define DC_MT_TABLE_4_inst                                                           0x009C
#define DC_MT_TABLE_5_inst                                                           0x009D
#define DC_MT_TABLE_6_inst                                                           0x009E
#define DC_MT_TABLE_7_inst                                                           0x009F
#define DC_MT_TABLE_ever_trap_1_shift                                                (31)
#define DC_MT_TABLE_ever_trap_1_mask                                                 (0x80000000)
#define DC_MT_TABLE_ever_trap_1(data)                                                (0x80000000&((data)<<31))
#define DC_MT_TABLE_ever_trap_1_src(data)                                            ((0x80000000&(data))>>31)
#define DC_MT_TABLE_get_ever_trap_1(data)                                            ((0x80000000&(data))>>31)
#define DC_MT_TABLE_ever_trap_0_shift                                                (30)
#define DC_MT_TABLE_ever_trap_0_mask                                                 (0x40000000)
#define DC_MT_TABLE_ever_trap_0(data)                                                (0x40000000&((data)<<30))
#define DC_MT_TABLE_ever_trap_0_src(data)                                            ((0x40000000&(data))>>30)
#define DC_MT_TABLE_get_ever_trap_0(data)                                            ((0x40000000&(data))>>30)
#define DC_MT_TABLE_module_ID_0_shift                                                (21)
#define DC_MT_TABLE_module_ID_0_mask                                                 (0x0FE00000)
#define DC_MT_TABLE_module_ID_0(data)                                                (0x0FE00000&((data)<<21))
#define DC_MT_TABLE_module_ID_0_src(data)                                            ((0x0FE00000&(data))>>21)
#define DC_MT_TABLE_get_module_ID_0(data)                                            ((0x0FE00000&(data))>>21)
#define DC_MT_TABLE_module_ID_1_shift                                                (14)
#define DC_MT_TABLE_module_ID_1_mask                                                 (0x001FC000)
#define DC_MT_TABLE_module_ID_1(data)                                                (0x001FC000&((data)<<14))
#define DC_MT_TABLE_module_ID_1_src(data)                                            ((0x001FC000&(data))>>14)
#define DC_MT_TABLE_get_module_ID_1(data)                                            ((0x001FC000&(data))>>14)
#define DC_MT_TABLE_module_ID_2_shift                                                (7)
#define DC_MT_TABLE_module_ID_2_mask                                                 (0x00003F80)
#define DC_MT_TABLE_module_ID_2(data)                                                (0x00003F80&((data)<<7))
#define DC_MT_TABLE_module_ID_2_src(data)                                            ((0x00003F80&(data))>>7)
#define DC_MT_TABLE_get_module_ID_2(data)                                            ((0x00003F80&(data))>>7)
#define DC_MT_TABLE_module_ID_3_shift                                                (0)
#define DC_MT_TABLE_module_ID_3_mask                                                 (0x0000007F)
#define DC_MT_TABLE_module_ID_3(data)                                                (0x0000007F&((data)<<0))
#define DC_MT_TABLE_module_ID_3_src(data)                                            ((0x0000007F&(data))>>0)
#define DC_MT_TABLE_get_module_ID_3(data)                                            ((0x0000007F&(data))>>0)


#define DC_MT_ADDCMD_HI_0                                                            0x98008280
#define DC_MT_ADDCMD_HI_1                                                            0x98008284
#define DC_MT_ADDCMD_HI_2                                                            0x98008288
#define DC_MT_ADDCMD_HI_3                                                            0x9800828C
#define DC_MT_ADDCMD_HI_4                                                            0x98008290
#define DC_MT_ADDCMD_HI_5                                                            0x98008294
#define DC_MT_ADDCMD_HI_6                                                            0x98008298
#define DC_MT_ADDCMD_HI_7                                                            0x9800829C
#define DC_MT_ADDCMD_HI_0_reg_addr                                                   "0xD8008280"
#define DC_MT_ADDCMD_HI_1_reg_addr                                                   "0xD8008284"
#define DC_MT_ADDCMD_HI_2_reg_addr                                                   "0xD8008288"
#define DC_MT_ADDCMD_HI_3_reg_addr                                                   "0xD800828C"
#define DC_MT_ADDCMD_HI_4_reg_addr                                                   "0xD8008290"
#define DC_MT_ADDCMD_HI_5_reg_addr                                                   "0xD8008294"
#define DC_MT_ADDCMD_HI_6_reg_addr                                                   "0xD8008298"
#define DC_MT_ADDCMD_HI_7_reg_addr                                                   "0xD800829C"
#define DC_MT_ADDCMD_HI_0_reg                                                        0xD8008280
#define DC_MT_ADDCMD_HI_1_reg                                                        0xD8008284
#define DC_MT_ADDCMD_HI_2_reg                                                        0xD8008288
#define DC_MT_ADDCMD_HI_3_reg                                                        0xD800828C
#define DC_MT_ADDCMD_HI_4_reg                                                        0xD8008290
#define DC_MT_ADDCMD_HI_5_reg                                                        0xD8008294
#define DC_MT_ADDCMD_HI_6_reg                                                        0xD8008298
#define DC_MT_ADDCMD_HI_7_reg                                                        0xD800829C
#define set_DC_MT_ADDCMD_HI_0_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_0_reg)=data)
#define set_DC_MT_ADDCMD_HI_1_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_1_reg)=data)
#define set_DC_MT_ADDCMD_HI_2_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_2_reg)=data)
#define set_DC_MT_ADDCMD_HI_3_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_3_reg)=data)
#define set_DC_MT_ADDCMD_HI_4_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_4_reg)=data)
#define set_DC_MT_ADDCMD_HI_5_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_5_reg)=data)
#define set_DC_MT_ADDCMD_HI_6_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_6_reg)=data)
#define set_DC_MT_ADDCMD_HI_7_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_7_reg)=data)
#define get_DC_MT_ADDCMD_HI_0_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_0_reg))
#define get_DC_MT_ADDCMD_HI_1_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_1_reg))
#define get_DC_MT_ADDCMD_HI_2_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_2_reg))
#define get_DC_MT_ADDCMD_HI_3_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_3_reg))
#define get_DC_MT_ADDCMD_HI_4_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_4_reg))
#define get_DC_MT_ADDCMD_HI_5_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_5_reg))
#define get_DC_MT_ADDCMD_HI_6_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_6_reg))
#define get_DC_MT_ADDCMD_HI_7_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_HI_7_reg))
#define DC_MT_ADDCMD_HI_0_inst_adr                                                   "0x00A0"
#define DC_MT_ADDCMD_HI_1_inst_adr                                                   "0x00A1"
#define DC_MT_ADDCMD_HI_2_inst_adr                                                   "0x00A2"
#define DC_MT_ADDCMD_HI_3_inst_adr                                                   "0x00A3"
#define DC_MT_ADDCMD_HI_4_inst_adr                                                   "0x00A4"
#define DC_MT_ADDCMD_HI_5_inst_adr                                                   "0x00A5"
#define DC_MT_ADDCMD_HI_6_inst_adr                                                   "0x00A6"
#define DC_MT_ADDCMD_HI_7_inst_adr                                                   "0x00A7"
#define DC_MT_ADDCMD_HI_0_inst                                                       0x00A0
#define DC_MT_ADDCMD_HI_1_inst                                                       0x00A1
#define DC_MT_ADDCMD_HI_2_inst                                                       0x00A2
#define DC_MT_ADDCMD_HI_3_inst                                                       0x00A3
#define DC_MT_ADDCMD_HI_4_inst                                                       0x00A4
#define DC_MT_ADDCMD_HI_5_inst                                                       0x00A5
#define DC_MT_ADDCMD_HI_6_inst                                                       0x00A6
#define DC_MT_ADDCMD_HI_7_inst                                                       0x00A7
#define DC_MT_ADDCMD_HI_module_ID_1_shift                                            (25)
#define DC_MT_ADDCMD_HI_module_ID_1_mask                                             (0xFE000000)
#define DC_MT_ADDCMD_HI_module_ID_1(data)                                            (0xFE000000&((data)<<25))
#define DC_MT_ADDCMD_HI_module_ID_1_src(data)                                        ((0xFE000000&(data))>>25)
#define DC_MT_ADDCMD_HI_get_module_ID_1(data)                                        ((0xFE000000&(data))>>25)
#define DC_MT_ADDCMD_HI_module_ID_0_shift                                            (18)
#define DC_MT_ADDCMD_HI_module_ID_0_mask                                             (0x01FC0000)
#define DC_MT_ADDCMD_HI_module_ID_0(data)                                            (0x01FC0000&((data)<<18))
#define DC_MT_ADDCMD_HI_module_ID_0_src(data)                                        ((0x01FC0000&(data))>>18)
#define DC_MT_ADDCMD_HI_get_module_ID_0(data)                                        ((0x01FC0000&(data))>>18)
#define DC_MT_ADDCMD_HI_addcmd_1_shift                                               (9)
#define DC_MT_ADDCMD_HI_addcmd_1_mask                                                (0x0003FE00)
#define DC_MT_ADDCMD_HI_addcmd_1(data)                                               (0x0003FE00&((data)<<9))
#define DC_MT_ADDCMD_HI_addcmd_1_src(data)                                           ((0x0003FE00&(data))>>9)
#define DC_MT_ADDCMD_HI_get_addcmd_1(data)                                           ((0x0003FE00&(data))>>9)
#define DC_MT_ADDCMD_HI_addcmd_0_shift                                               (0)
#define DC_MT_ADDCMD_HI_addcmd_0_mask                                                (0x000001FF)
#define DC_MT_ADDCMD_HI_addcmd_0(data)                                               (0x000001FF&((data)<<0))
#define DC_MT_ADDCMD_HI_addcmd_0_src(data)                                           ((0x000001FF&(data))>>0)
#define DC_MT_ADDCMD_HI_get_addcmd_0(data)                                           ((0x000001FF&(data))>>0)


#define DC_MT_ADDCMD_LO_0_0                                                          0x980082A0
#define DC_MT_ADDCMD_LO_0_1                                                          0x980082A4
#define DC_MT_ADDCMD_LO_0_2                                                          0x980082A8
#define DC_MT_ADDCMD_LO_0_3                                                          0x980082AC
#define DC_MT_ADDCMD_LO_0_4                                                          0x980082B0
#define DC_MT_ADDCMD_LO_0_5                                                          0x980082B4
#define DC_MT_ADDCMD_LO_0_6                                                          0x980082B8
#define DC_MT_ADDCMD_LO_0_7                                                          0x980082BC
#define DC_MT_ADDCMD_LO_0_0_reg_addr                                                 "0xD80082A0"
#define DC_MT_ADDCMD_LO_0_1_reg_addr                                                 "0xD80082A4"
#define DC_MT_ADDCMD_LO_0_2_reg_addr                                                 "0xD80082A8"
#define DC_MT_ADDCMD_LO_0_3_reg_addr                                                 "0xD80082AC"
#define DC_MT_ADDCMD_LO_0_4_reg_addr                                                 "0xD80082B0"
#define DC_MT_ADDCMD_LO_0_5_reg_addr                                                 "0xD80082B4"
#define DC_MT_ADDCMD_LO_0_6_reg_addr                                                 "0xD80082B8"
#define DC_MT_ADDCMD_LO_0_7_reg_addr                                                 "0xD80082BC"
#define DC_MT_ADDCMD_LO_0_0_reg                                                      0xD80082A0
#define DC_MT_ADDCMD_LO_0_1_reg                                                      0xD80082A4
#define DC_MT_ADDCMD_LO_0_2_reg                                                      0xD80082A8
#define DC_MT_ADDCMD_LO_0_3_reg                                                      0xD80082AC
#define DC_MT_ADDCMD_LO_0_4_reg                                                      0xD80082B0
#define DC_MT_ADDCMD_LO_0_5_reg                                                      0xD80082B4
#define DC_MT_ADDCMD_LO_0_6_reg                                                      0xD80082B8
#define DC_MT_ADDCMD_LO_0_7_reg                                                      0xD80082BC
#define set_DC_MT_ADDCMD_LO_0_0_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_0_reg)=data)
#define set_DC_MT_ADDCMD_LO_0_1_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_1_reg)=data)
#define set_DC_MT_ADDCMD_LO_0_2_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_2_reg)=data)
#define set_DC_MT_ADDCMD_LO_0_3_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_3_reg)=data)
#define set_DC_MT_ADDCMD_LO_0_4_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_4_reg)=data)
#define set_DC_MT_ADDCMD_LO_0_5_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_5_reg)=data)
#define set_DC_MT_ADDCMD_LO_0_6_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_6_reg)=data)
#define set_DC_MT_ADDCMD_LO_0_7_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_7_reg)=data)
#define get_DC_MT_ADDCMD_LO_0_0_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_0_reg))
#define get_DC_MT_ADDCMD_LO_0_1_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_1_reg))
#define get_DC_MT_ADDCMD_LO_0_2_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_2_reg))
#define get_DC_MT_ADDCMD_LO_0_3_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_3_reg))
#define get_DC_MT_ADDCMD_LO_0_4_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_4_reg))
#define get_DC_MT_ADDCMD_LO_0_5_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_5_reg))
#define get_DC_MT_ADDCMD_LO_0_6_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_6_reg))
#define get_DC_MT_ADDCMD_LO_0_7_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_0_7_reg))
#define DC_MT_ADDCMD_LO_0_0_inst_adr                                                 "0x00A8"
#define DC_MT_ADDCMD_LO_0_1_inst_adr                                                 "0x00A9"
#define DC_MT_ADDCMD_LO_0_2_inst_adr                                                 "0x00AA"
#define DC_MT_ADDCMD_LO_0_3_inst_adr                                                 "0x00AB"
#define DC_MT_ADDCMD_LO_0_4_inst_adr                                                 "0x00AC"
#define DC_MT_ADDCMD_LO_0_5_inst_adr                                                 "0x00AD"
#define DC_MT_ADDCMD_LO_0_6_inst_adr                                                 "0x00AE"
#define DC_MT_ADDCMD_LO_0_7_inst_adr                                                 "0x00AF"
#define DC_MT_ADDCMD_LO_0_0_inst                                                     0x00A8
#define DC_MT_ADDCMD_LO_0_1_inst                                                     0x00A9
#define DC_MT_ADDCMD_LO_0_2_inst                                                     0x00AA
#define DC_MT_ADDCMD_LO_0_3_inst                                                     0x00AB
#define DC_MT_ADDCMD_LO_0_4_inst                                                     0x00AC
#define DC_MT_ADDCMD_LO_0_5_inst                                                     0x00AD
#define DC_MT_ADDCMD_LO_0_6_inst                                                     0x00AE
#define DC_MT_ADDCMD_LO_0_7_inst                                                     0x00AF
#define DC_MT_ADDCMD_LO_0_addcmd_0_shift                                             (0)
#define DC_MT_ADDCMD_LO_0_addcmd_0_mask                                              (0xFFFFFFFF)
#define DC_MT_ADDCMD_LO_0_addcmd_0(data)                                             (0xFFFFFFFF&((data)<<0))
#define DC_MT_ADDCMD_LO_0_addcmd_0_src(data)                                         ((0xFFFFFFFF&(data))>>0)
#define DC_MT_ADDCMD_LO_0_get_addcmd_0(data)                                         ((0xFFFFFFFF&(data))>>0)


#define DC_MT_ADDCMD_LO_1_0                                                          0x980082C0
#define DC_MT_ADDCMD_LO_1_1                                                          0x980082C4
#define DC_MT_ADDCMD_LO_1_2                                                          0x980082C8
#define DC_MT_ADDCMD_LO_1_3                                                          0x980082CC
#define DC_MT_ADDCMD_LO_1_4                                                          0x980082D0
#define DC_MT_ADDCMD_LO_1_5                                                          0x980082D4
#define DC_MT_ADDCMD_LO_1_6                                                          0x980082D8
#define DC_MT_ADDCMD_LO_1_7                                                          0x980082DC
#define DC_MT_ADDCMD_LO_1_0_reg_addr                                                 "0xD80082C0"
#define DC_MT_ADDCMD_LO_1_1_reg_addr                                                 "0xD80082C4"
#define DC_MT_ADDCMD_LO_1_2_reg_addr                                                 "0xD80082C8"
#define DC_MT_ADDCMD_LO_1_3_reg_addr                                                 "0xD80082CC"
#define DC_MT_ADDCMD_LO_1_4_reg_addr                                                 "0xD80082D0"
#define DC_MT_ADDCMD_LO_1_5_reg_addr                                                 "0xD80082D4"
#define DC_MT_ADDCMD_LO_1_6_reg_addr                                                 "0xD80082D8"
#define DC_MT_ADDCMD_LO_1_7_reg_addr                                                 "0xD80082DC"
#define DC_MT_ADDCMD_LO_1_0_reg                                                      0xD80082C0
#define DC_MT_ADDCMD_LO_1_1_reg                                                      0xD80082C4
#define DC_MT_ADDCMD_LO_1_2_reg                                                      0xD80082C8
#define DC_MT_ADDCMD_LO_1_3_reg                                                      0xD80082CC
#define DC_MT_ADDCMD_LO_1_4_reg                                                      0xD80082D0
#define DC_MT_ADDCMD_LO_1_5_reg                                                      0xD80082D4
#define DC_MT_ADDCMD_LO_1_6_reg                                                      0xD80082D8
#define DC_MT_ADDCMD_LO_1_7_reg                                                      0xD80082DC
#define set_DC_MT_ADDCMD_LO_1_0_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_0_reg)=data)
#define set_DC_MT_ADDCMD_LO_1_1_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_1_reg)=data)
#define set_DC_MT_ADDCMD_LO_1_2_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_2_reg)=data)
#define set_DC_MT_ADDCMD_LO_1_3_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_3_reg)=data)
#define set_DC_MT_ADDCMD_LO_1_4_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_4_reg)=data)
#define set_DC_MT_ADDCMD_LO_1_5_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_5_reg)=data)
#define set_DC_MT_ADDCMD_LO_1_6_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_6_reg)=data)
#define set_DC_MT_ADDCMD_LO_1_7_reg(data)   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_7_reg)=data)
#define get_DC_MT_ADDCMD_LO_1_0_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_0_reg))
#define get_DC_MT_ADDCMD_LO_1_1_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_1_reg))
#define get_DC_MT_ADDCMD_LO_1_2_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_2_reg))
#define get_DC_MT_ADDCMD_LO_1_3_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_3_reg))
#define get_DC_MT_ADDCMD_LO_1_4_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_4_reg))
#define get_DC_MT_ADDCMD_LO_1_5_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_5_reg))
#define get_DC_MT_ADDCMD_LO_1_6_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_6_reg))
#define get_DC_MT_ADDCMD_LO_1_7_reg   (*((volatile unsigned int*) DC_MT_ADDCMD_LO_1_7_reg))
#define DC_MT_ADDCMD_LO_1_0_inst_adr                                                 "0x00B0"
#define DC_MT_ADDCMD_LO_1_1_inst_adr                                                 "0x00B1"
#define DC_MT_ADDCMD_LO_1_2_inst_adr                                                 "0x00B2"
#define DC_MT_ADDCMD_LO_1_3_inst_adr                                                 "0x00B3"
#define DC_MT_ADDCMD_LO_1_4_inst_adr                                                 "0x00B4"
#define DC_MT_ADDCMD_LO_1_5_inst_adr                                                 "0x00B5"
#define DC_MT_ADDCMD_LO_1_6_inst_adr                                                 "0x00B6"
#define DC_MT_ADDCMD_LO_1_7_inst_adr                                                 "0x00B7"
#define DC_MT_ADDCMD_LO_1_0_inst                                                     0x00B0
#define DC_MT_ADDCMD_LO_1_1_inst                                                     0x00B1
#define DC_MT_ADDCMD_LO_1_2_inst                                                     0x00B2
#define DC_MT_ADDCMD_LO_1_3_inst                                                     0x00B3
#define DC_MT_ADDCMD_LO_1_4_inst                                                     0x00B4
#define DC_MT_ADDCMD_LO_1_5_inst                                                     0x00B5
#define DC_MT_ADDCMD_LO_1_6_inst                                                     0x00B6
#define DC_MT_ADDCMD_LO_1_7_inst                                                     0x00B7
#define DC_MT_ADDCMD_LO_1_addcmd_1_shift                                             (0)
#define DC_MT_ADDCMD_LO_1_addcmd_1_mask                                              (0xFFFFFFFF)
#define DC_MT_ADDCMD_LO_1_addcmd_1(data)                                             (0xFFFFFFFF&((data)<<0))
#define DC_MT_ADDCMD_LO_1_addcmd_1_src(data)                                         ((0xFFFFFFFF&(data))>>0)
#define DC_MT_ADDCMD_LO_1_get_addcmd_1(data)                                         ((0xFFFFFFFF&(data))>>0)


#define DC_MT_MISC                                                                   0x980082E0
#define DC_MT_MISC_reg_addr                                                          "0xD80082E0"
#define DC_MT_MISC_reg                                                               0xD80082E0
#define set_DC_MT_MISC_reg(data)   (*((volatile unsigned int*) DC_MT_MISC_reg)=data)
#define get_DC_MT_MISC_reg   (*((volatile unsigned int*) DC_MT_MISC_reg))
#define DC_MT_MISC_inst_adr                                                          "0x00B8"
#define DC_MT_MISC_inst                                                              0x00B8
#define DC_MT_MISC_enable_block_info_shift                                           (1)
#define DC_MT_MISC_enable_block_info_mask                                            (0x00000002)
#define DC_MT_MISC_enable_block_info(data)                                           (0x00000002&((data)<<1))
#define DC_MT_MISC_enable_block_info_src(data)                                       ((0x00000002&(data))>>1)
#define DC_MT_MISC_get_enable_block_info(data)                                       ((0x00000002&(data))>>1)
#define DC_MT_MISC_disable_cross_range_check_shift                                   (0)
#define DC_MT_MISC_disable_cross_range_check_mask                                    (0x00000001)
#define DC_MT_MISC_disable_cross_range_check(data)                                   (0x00000001&((data)<<0))
#define DC_MT_MISC_disable_cross_range_check_src(data)                               ((0x00000001&(data))>>0)
#define DC_MT_MISC_get_disable_cross_range_check(data)                               ((0x00000001&(data))>>0)


#define DC_EC_CTRL                                                                   0x98008300
#define DC_EC_CTRL_reg_addr                                                          "0xD8008300"
#define DC_EC_CTRL_reg                                                               0xD8008300
#define set_DC_EC_CTRL_reg(data)   (*((volatile unsigned int*) DC_EC_CTRL_reg)=data)
#define get_DC_EC_CTRL_reg   (*((volatile unsigned int*) DC_EC_CTRL_reg))
#define DC_EC_CTRL_inst_adr                                                          "0x00C0"
#define DC_EC_CTRL_inst                                                              0x00C0
#define DC_EC_CTRL_large_acc_in_dcsys1_shift                                         (30)
#define DC_EC_CTRL_large_acc_in_dcsys1_mask                                          (0x40000000)
#define DC_EC_CTRL_large_acc_in_dcsys1(data)                                         (0x40000000&((data)<<30))
#define DC_EC_CTRL_large_acc_in_dcsys1_src(data)                                     ((0x40000000&(data))>>30)
#define DC_EC_CTRL_get_large_acc_in_dcsys1(data)                                     ((0x40000000&(data))>>30)
#define DC_EC_CTRL_large_acc_in_dcsys0_shift                                         (29)
#define DC_EC_CTRL_large_acc_in_dcsys0_mask                                          (0x20000000)
#define DC_EC_CTRL_large_acc_in_dcsys0(data)                                         (0x20000000&((data)<<29))
#define DC_EC_CTRL_large_acc_in_dcsys0_src(data)                                     ((0x20000000&(data))>>29)
#define DC_EC_CTRL_get_large_acc_in_dcsys0(data)                                     ((0x20000000&(data))>>29)
#define DC_EC_CTRL_error_cmd_int_cpu_shift                                           (27)
#define DC_EC_CTRL_error_cmd_int_cpu_mask                                            (0x18000000)
#define DC_EC_CTRL_error_cmd_int_cpu(data)                                           (0x18000000&((data)<<27))
#define DC_EC_CTRL_error_cmd_int_cpu_src(data)                                       ((0x18000000&(data))>>27)
#define DC_EC_CTRL_get_error_cmd_int_cpu(data)                                       ((0x18000000&(data))>>27)
#define DC_EC_CTRL_error_cmd_int_en_shift                                            (26)
#define DC_EC_CTRL_error_cmd_int_en_mask                                             (0x04000000)
#define DC_EC_CTRL_error_cmd_int_en(data)                                            (0x04000000&((data)<<26))
#define DC_EC_CTRL_error_cmd_int_en_src(data)                                        ((0x04000000&(data))>>26)
#define DC_EC_CTRL_get_error_cmd_int_en(data)                                        ((0x04000000&(data))>>26)
#define DC_EC_CTRL_error_cmd_swap_en_shift                                           (25)
#define DC_EC_CTRL_error_cmd_swap_en_mask                                            (0x02000000)
#define DC_EC_CTRL_error_cmd_swap_en(data)                                           (0x02000000&((data)<<25))
#define DC_EC_CTRL_error_cmd_swap_en_src(data)                                       ((0x02000000&(data))>>25)
#define DC_EC_CTRL_get_error_cmd_swap_en(data)                                       ((0x02000000&(data))>>25)
#define DC_EC_CTRL_error_cmd_detection_en_shift                                      (24)
#define DC_EC_CTRL_error_cmd_detection_en_mask                                       (0x01000000)
#define DC_EC_CTRL_error_cmd_detection_en(data)                                      (0x01000000&((data)<<24))
#define DC_EC_CTRL_error_cmd_detection_en_src(data)                                  ((0x01000000&(data))>>24)
#define DC_EC_CTRL_get_error_cmd_detection_en(data)                                  ((0x01000000&(data))>>24)
#define DC_EC_CTRL_error_cmd_ever_trap_1_shift                                       (23)
#define DC_EC_CTRL_error_cmd_ever_trap_1_mask                                        (0x00800000)
#define DC_EC_CTRL_error_cmd_ever_trap_1(data)                                       (0x00800000&((data)<<23))
#define DC_EC_CTRL_error_cmd_ever_trap_1_src(data)                                   ((0x00800000&(data))>>23)
#define DC_EC_CTRL_get_error_cmd_ever_trap_1(data)                                   ((0x00800000&(data))>>23)
#define DC_EC_CTRL_error_cmd_ever_trap_0_shift                                       (22)
#define DC_EC_CTRL_error_cmd_ever_trap_0_mask                                        (0x00400000)
#define DC_EC_CTRL_error_cmd_ever_trap_0(data)                                       (0x00400000&((data)<<22))
#define DC_EC_CTRL_error_cmd_ever_trap_0_src(data)                                   ((0x00400000&(data))>>22)
#define DC_EC_CTRL_get_error_cmd_ever_trap_0(data)                                   ((0x00400000&(data))>>22)
#define DC_EC_CTRL_error_cmd_int_1_shift                                             (21)
#define DC_EC_CTRL_error_cmd_int_1_mask                                              (0x00200000)
#define DC_EC_CTRL_error_cmd_int_1(data)                                             (0x00200000&((data)<<21))
#define DC_EC_CTRL_error_cmd_int_1_src(data)                                         ((0x00200000&(data))>>21)
#define DC_EC_CTRL_get_error_cmd_int_1(data)                                         ((0x00200000&(data))>>21)
#define DC_EC_CTRL_error_cmd_int_0_shift                                             (20)
#define DC_EC_CTRL_error_cmd_int_0_mask                                              (0x00100000)
#define DC_EC_CTRL_error_cmd_int_0(data)                                             (0x00100000&((data)<<20))
#define DC_EC_CTRL_error_cmd_int_0_src(data)                                         ((0x00100000&(data))>>20)
#define DC_EC_CTRL_get_error_cmd_int_0(data)                                         ((0x00100000&(data))>>20)
#define DC_EC_CTRL_over_dram_acc_in_dcsys1_shift                                     (19)
#define DC_EC_CTRL_over_dram_acc_in_dcsys1_mask                                      (0x00080000)
#define DC_EC_CTRL_over_dram_acc_in_dcsys1(data)                                     (0x00080000&((data)<<19))
#define DC_EC_CTRL_over_dram_acc_in_dcsys1_src(data)                                 ((0x00080000&(data))>>19)
#define DC_EC_CTRL_get_over_dram_acc_in_dcsys1(data)                                 ((0x00080000&(data))>>19)
#define DC_EC_CTRL_over_dram_acc_in_dcsys0_shift                                     (18)
#define DC_EC_CTRL_over_dram_acc_in_dcsys0_mask                                      (0x00040000)
#define DC_EC_CTRL_over_dram_acc_in_dcsys0(data)                                     (0x00040000&((data)<<18))
#define DC_EC_CTRL_over_dram_acc_in_dcsys0_src(data)                                 ((0x00040000&(data))>>18)
#define DC_EC_CTRL_get_over_dram_acc_in_dcsys0(data)                                 ((0x00040000&(data))>>18)
#define DC_EC_CTRL_addcmd_hi_1_shift                                                 (0)
#define DC_EC_CTRL_addcmd_hi_1_mask                                                  (0x0003FFFF)
#define DC_EC_CTRL_addcmd_hi_1(data)                                                 (0x0003FFFF&((data)<<0))
#define DC_EC_CTRL_addcmd_hi_1_src(data)                                             ((0x0003FFFF&(data))>>0)
#define DC_EC_CTRL_get_addcmd_hi_1(data)                                             ((0x0003FFFF&(data))>>0)


#define DC_EC_ADDCMD_HI                                                              0x98008304
#define DC_EC_ADDCMD_HI_reg_addr                                                     "0xD8008304"
#define DC_EC_ADDCMD_HI_reg                                                          0xD8008304
#define set_DC_EC_ADDCMD_HI_reg(data)   (*((volatile unsigned int*) DC_EC_ADDCMD_HI_reg)=data)
#define get_DC_EC_ADDCMD_HI_reg   (*((volatile unsigned int*) DC_EC_ADDCMD_HI_reg))
#define DC_EC_ADDCMD_HI_inst_adr                                                     "0x00C1"
#define DC_EC_ADDCMD_HI_inst                                                         0x00C1
#define DC_EC_ADDCMD_HI_wrap_type_check_err_1_shift                                  (31)
#define DC_EC_ADDCMD_HI_wrap_type_check_err_1_mask                                   (0x80000000)
#define DC_EC_ADDCMD_HI_wrap_type_check_err_1(data)                                  (0x80000000&((data)<<31))
#define DC_EC_ADDCMD_HI_wrap_type_check_err_1_src(data)                              ((0x80000000&(data))>>31)
#define DC_EC_ADDCMD_HI_get_wrap_type_check_err_1(data)                              ((0x80000000&(data))>>31)
#define DC_EC_ADDCMD_HI_wrap_type_check_err_0_shift                                  (30)
#define DC_EC_ADDCMD_HI_wrap_type_check_err_0_mask                                   (0x40000000)
#define DC_EC_ADDCMD_HI_wrap_type_check_err_0(data)                                  (0x40000000&((data)<<30))
#define DC_EC_ADDCMD_HI_wrap_type_check_err_0_src(data)                              ((0x40000000&(data))>>30)
#define DC_EC_ADDCMD_HI_get_wrap_type_check_err_0(data)                              ((0x40000000&(data))>>30)
#define DC_EC_ADDCMD_HI_read_last_err_1_shift                                        (29)
#define DC_EC_ADDCMD_HI_read_last_err_1_mask                                         (0x20000000)
#define DC_EC_ADDCMD_HI_read_last_err_1(data)                                        (0x20000000&((data)<<29))
#define DC_EC_ADDCMD_HI_read_last_err_1_src(data)                                    ((0x20000000&(data))>>29)
#define DC_EC_ADDCMD_HI_get_read_last_err_1(data)                                    ((0x20000000&(data))>>29)
#define DC_EC_ADDCMD_HI_read_last_err_0_shift                                        (28)
#define DC_EC_ADDCMD_HI_read_last_err_0_mask                                         (0x10000000)
#define DC_EC_ADDCMD_HI_read_last_err_0(data)                                        (0x10000000&((data)<<28))
#define DC_EC_ADDCMD_HI_read_last_err_0_src(data)                                    ((0x10000000&(data))>>28)
#define DC_EC_ADDCMD_HI_get_read_last_err_0(data)                                    ((0x10000000&(data))>>28)
#define DC_EC_ADDCMD_HI_trap_case_1_shift                                            (24)
#define DC_EC_ADDCMD_HI_trap_case_1_mask                                             (0x0F000000)
#define DC_EC_ADDCMD_HI_trap_case_1(data)                                            (0x0F000000&((data)<<24))
#define DC_EC_ADDCMD_HI_trap_case_1_src(data)                                        ((0x0F000000&(data))>>24)
#define DC_EC_ADDCMD_HI_get_trap_case_1(data)                                        ((0x0F000000&(data))>>24)
#define DC_EC_ADDCMD_HI_trap_case_0_shift                                            (20)
#define DC_EC_ADDCMD_HI_trap_case_0_mask                                             (0x00F00000)
#define DC_EC_ADDCMD_HI_trap_case_0(data)                                            (0x00F00000&((data)<<20))
#define DC_EC_ADDCMD_HI_trap_case_0_src(data)                                        ((0x00F00000&(data))>>20)
#define DC_EC_ADDCMD_HI_get_trap_case_0(data)                                        ((0x00F00000&(data))>>20)
#define DC_EC_ADDCMD_HI_addcmd_hi_0_shift                                            (0)
#define DC_EC_ADDCMD_HI_addcmd_hi_0_mask                                             (0x0003FFFF)
#define DC_EC_ADDCMD_HI_addcmd_hi_0(data)                                            (0x0003FFFF&((data)<<0))
#define DC_EC_ADDCMD_HI_addcmd_hi_0_src(data)                                        ((0x0003FFFF&(data))>>0)
#define DC_EC_ADDCMD_HI_get_addcmd_hi_0(data)                                        ((0x0003FFFF&(data))>>0)


#define DC_EC_ADDCMD_LO_0                                                            0x98008308
#define DC_EC_ADDCMD_LO_0_reg_addr                                                   "0xD8008308"
#define DC_EC_ADDCMD_LO_0_reg                                                        0xD8008308
#define set_DC_EC_ADDCMD_LO_0_reg(data)   (*((volatile unsigned int*) DC_EC_ADDCMD_LO_0_reg)=data)
#define get_DC_EC_ADDCMD_LO_0_reg   (*((volatile unsigned int*) DC_EC_ADDCMD_LO_0_reg))
#define DC_EC_ADDCMD_LO_0_inst_adr                                                   "0x00C2"
#define DC_EC_ADDCMD_LO_0_inst                                                       0x00C2
#define DC_EC_ADDCMD_LO_0_addcmd_lo_0_shift                                          (0)
#define DC_EC_ADDCMD_LO_0_addcmd_lo_0_mask                                           (0xFFFFFFFF)
#define DC_EC_ADDCMD_LO_0_addcmd_lo_0(data)                                          (0xFFFFFFFF&((data)<<0))
#define DC_EC_ADDCMD_LO_0_addcmd_lo_0_src(data)                                      ((0xFFFFFFFF&(data))>>0)
#define DC_EC_ADDCMD_LO_0_get_addcmd_lo_0(data)                                      ((0xFFFFFFFF&(data))>>0)


#define DC_EC_ADDCMD_LO_1                                                            0x9800830C
#define DC_EC_ADDCMD_LO_1_reg_addr                                                   "0xD800830C"
#define DC_EC_ADDCMD_LO_1_reg                                                        0xD800830C
#define set_DC_EC_ADDCMD_LO_1_reg(data)   (*((volatile unsigned int*) DC_EC_ADDCMD_LO_1_reg)=data)
#define get_DC_EC_ADDCMD_LO_1_reg   (*((volatile unsigned int*) DC_EC_ADDCMD_LO_1_reg))
#define DC_EC_ADDCMD_LO_1_inst_adr                                                   "0x00C3"
#define DC_EC_ADDCMD_LO_1_inst                                                       0x00C3
#define DC_EC_ADDCMD_LO_1_addcmd_lo_1_shift                                          (0)
#define DC_EC_ADDCMD_LO_1_addcmd_lo_1_mask                                           (0xFFFFFFFF)
#define DC_EC_ADDCMD_LO_1_addcmd_lo_1(data)                                          (0xFFFFFFFF&((data)<<0))
#define DC_EC_ADDCMD_LO_1_addcmd_lo_1_src(data)                                      ((0xFFFFFFFF&(data))>>0)
#define DC_EC_ADDCMD_LO_1_get_addcmd_lo_1(data)                                      ((0xFFFFFFFF&(data))>>0)


#define DC_MEM_PROTECT_CTRL                                                          0x98008400
#define DC_MEM_PROTECT_CTRL_reg_addr                                                 "0xD8008400"
#define DC_MEM_PROTECT_CTRL_reg                                                      0xD8008400
#define set_DC_MEM_PROTECT_CTRL_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_CTRL_reg)=data)
#define get_DC_MEM_PROTECT_CTRL_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_CTRL_reg))
#define DC_MEM_PROTECT_CTRL_inst_adr                                                 "0x0000"
#define DC_MEM_PROTECT_CTRL_inst                                                     0x0000
#define DC_MEM_PROTECT_CTRL_write_enable0_shift                                      (31)
#define DC_MEM_PROTECT_CTRL_write_enable0_mask                                       (0x80000000)
#define DC_MEM_PROTECT_CTRL_write_enable0(data)                                      (0x80000000&((data)<<31))
#define DC_MEM_PROTECT_CTRL_write_enable0_src(data)                                  ((0x80000000&(data))>>31)
#define DC_MEM_PROTECT_CTRL_get_write_enable0(data)                                  ((0x80000000&(data))>>31)
#define DC_MEM_PROTECT_CTRL_rd_only_0_sel_shift                                      (30)
#define DC_MEM_PROTECT_CTRL_rd_only_0_sel_mask                                       (0x40000000)
#define DC_MEM_PROTECT_CTRL_rd_only_0_sel(data)                                      (0x40000000&((data)<<30))
#define DC_MEM_PROTECT_CTRL_rd_only_0_sel_src(data)                                  ((0x40000000&(data))>>30)
#define DC_MEM_PROTECT_CTRL_get_rd_only_0_sel(data)                                  ((0x40000000&(data))>>30)
#define DC_MEM_PROTECT_CTRL_blk_protect_0_sel_shift                                  (29)
#define DC_MEM_PROTECT_CTRL_blk_protect_0_sel_mask                                   (0x20000000)
#define DC_MEM_PROTECT_CTRL_blk_protect_0_sel(data)                                  (0x20000000&((data)<<29))
#define DC_MEM_PROTECT_CTRL_blk_protect_0_sel_src(data)                              ((0x20000000&(data))>>29)
#define DC_MEM_PROTECT_CTRL_get_blk_protect_0_sel(data)                              ((0x20000000&(data))>>29)
#define DC_MEM_PROTECT_CTRL_protect_0_sel_shift                                      (28)
#define DC_MEM_PROTECT_CTRL_protect_0_sel_mask                                       (0x10000000)
#define DC_MEM_PROTECT_CTRL_protect_0_sel(data)                                      (0x10000000&((data)<<28))
#define DC_MEM_PROTECT_CTRL_protect_0_sel_src(data)                                  ((0x10000000&(data))>>28)
#define DC_MEM_PROTECT_CTRL_get_protect_0_sel(data)                                  ((0x10000000&(data))>>28)
#define DC_MEM_PROTECT_CTRL_write_enable1_shift                                      (27)
#define DC_MEM_PROTECT_CTRL_write_enable1_mask                                       (0x08000000)
#define DC_MEM_PROTECT_CTRL_write_enable1(data)                                      (0x08000000&((data)<<27))
#define DC_MEM_PROTECT_CTRL_write_enable1_src(data)                                  ((0x08000000&(data))>>27)
#define DC_MEM_PROTECT_CTRL_get_write_enable1(data)                                  ((0x08000000&(data))>>27)
#define DC_MEM_PROTECT_CTRL_rd_only_3_en_shift                                       (26)
#define DC_MEM_PROTECT_CTRL_rd_only_3_en_mask                                        (0x04000000)
#define DC_MEM_PROTECT_CTRL_rd_only_3_en(data)                                       (0x04000000&((data)<<26))
#define DC_MEM_PROTECT_CTRL_rd_only_3_en_src(data)                                   ((0x04000000&(data))>>26)
#define DC_MEM_PROTECT_CTRL_get_rd_only_3_en(data)                                   ((0x04000000&(data))>>26)
#define DC_MEM_PROTECT_CTRL_rd_only_2_en_shift                                       (25)
#define DC_MEM_PROTECT_CTRL_rd_only_2_en_mask                                        (0x02000000)
#define DC_MEM_PROTECT_CTRL_rd_only_2_en(data)                                       (0x02000000&((data)<<25))
#define DC_MEM_PROTECT_CTRL_rd_only_2_en_src(data)                                   ((0x02000000&(data))>>25)
#define DC_MEM_PROTECT_CTRL_get_rd_only_2_en(data)                                   ((0x02000000&(data))>>25)
#define DC_MEM_PROTECT_CTRL_rd_only_1_en_shift                                       (24)
#define DC_MEM_PROTECT_CTRL_rd_only_1_en_mask                                        (0x01000000)
#define DC_MEM_PROTECT_CTRL_rd_only_1_en(data)                                       (0x01000000&((data)<<24))
#define DC_MEM_PROTECT_CTRL_rd_only_1_en_src(data)                                   ((0x01000000&(data))>>24)
#define DC_MEM_PROTECT_CTRL_get_rd_only_1_en(data)                                   ((0x01000000&(data))>>24)
#define DC_MEM_PROTECT_CTRL_rd_only_0_en_shift                                       (23)
#define DC_MEM_PROTECT_CTRL_rd_only_0_en_mask                                        (0x00800000)
#define DC_MEM_PROTECT_CTRL_rd_only_0_en(data)                                       (0x00800000&((data)<<23))
#define DC_MEM_PROTECT_CTRL_rd_only_0_en_src(data)                                   ((0x00800000&(data))>>23)
#define DC_MEM_PROTECT_CTRL_get_rd_only_0_en(data)                                   ((0x00800000&(data))>>23)
#define DC_MEM_PROTECT_CTRL_write_enable2_shift                                      (22)
#define DC_MEM_PROTECT_CTRL_write_enable2_mask                                       (0x00400000)
#define DC_MEM_PROTECT_CTRL_write_enable2(data)                                      (0x00400000&((data)<<22))
#define DC_MEM_PROTECT_CTRL_write_enable2_src(data)                                  ((0x00400000&(data))>>22)
#define DC_MEM_PROTECT_CTRL_get_write_enable2(data)                                  ((0x00400000&(data))>>22)
#define DC_MEM_PROTECT_CTRL_blk_protect_1_wpro_en_shift                              (21)
#define DC_MEM_PROTECT_CTRL_blk_protect_1_wpro_en_mask                               (0x00200000)
#define DC_MEM_PROTECT_CTRL_blk_protect_1_wpro_en(data)                              (0x00200000&((data)<<21))
#define DC_MEM_PROTECT_CTRL_blk_protect_1_wpro_en_src(data)                          ((0x00200000&(data))>>21)
#define DC_MEM_PROTECT_CTRL_get_blk_protect_1_wpro_en(data)                          ((0x00200000&(data))>>21)
#define DC_MEM_PROTECT_CTRL_blk_protect_0_wpro_en_shift                              (20)
#define DC_MEM_PROTECT_CTRL_blk_protect_0_wpro_en_mask                               (0x00100000)
#define DC_MEM_PROTECT_CTRL_blk_protect_0_wpro_en(data)                              (0x00100000&((data)<<20))
#define DC_MEM_PROTECT_CTRL_blk_protect_0_wpro_en_src(data)                          ((0x00100000&(data))>>20)
#define DC_MEM_PROTECT_CTRL_get_blk_protect_0_wpro_en(data)                          ((0x00100000&(data))>>20)
#define DC_MEM_PROTECT_CTRL_blk_protect_1_en_shift                                   (19)
#define DC_MEM_PROTECT_CTRL_blk_protect_1_en_mask                                    (0x00080000)
#define DC_MEM_PROTECT_CTRL_blk_protect_1_en(data)                                   (0x00080000&((data)<<19))
#define DC_MEM_PROTECT_CTRL_blk_protect_1_en_src(data)                               ((0x00080000&(data))>>19)
#define DC_MEM_PROTECT_CTRL_get_blk_protect_1_en(data)                               ((0x00080000&(data))>>19)
#define DC_MEM_PROTECT_CTRL_blk_protect_0_en_shift                                   (18)
#define DC_MEM_PROTECT_CTRL_blk_protect_0_en_mask                                    (0x00040000)
#define DC_MEM_PROTECT_CTRL_blk_protect_0_en(data)                                   (0x00040000&((data)<<18))
#define DC_MEM_PROTECT_CTRL_blk_protect_0_en_src(data)                               ((0x00040000&(data))>>18)
#define DC_MEM_PROTECT_CTRL_get_blk_protect_0_en(data)                               ((0x00040000&(data))>>18)
#define DC_MEM_PROTECT_CTRL_write_enable3_shift                                      (17)
#define DC_MEM_PROTECT_CTRL_write_enable3_mask                                       (0x00020000)
#define DC_MEM_PROTECT_CTRL_write_enable3(data)                                      (0x00020000&((data)<<17))
#define DC_MEM_PROTECT_CTRL_write_enable3_src(data)                                  ((0x00020000&(data))>>17)
#define DC_MEM_PROTECT_CTRL_get_write_enable3(data)                                  ((0x00020000&(data))>>17)
#define DC_MEM_PROTECT_CTRL_protect_7_wpro_en_shift                                  (16)
#define DC_MEM_PROTECT_CTRL_protect_7_wpro_en_mask                                   (0x00010000)
#define DC_MEM_PROTECT_CTRL_protect_7_wpro_en(data)                                  (0x00010000&((data)<<16))
#define DC_MEM_PROTECT_CTRL_protect_7_wpro_en_src(data)                              ((0x00010000&(data))>>16)
#define DC_MEM_PROTECT_CTRL_get_protect_7_wpro_en(data)                              ((0x00010000&(data))>>16)
#define DC_MEM_PROTECT_CTRL_protect_6_wpro_en_shift                                  (15)
#define DC_MEM_PROTECT_CTRL_protect_6_wpro_en_mask                                   (0x00008000)
#define DC_MEM_PROTECT_CTRL_protect_6_wpro_en(data)                                  (0x00008000&((data)<<15))
#define DC_MEM_PROTECT_CTRL_protect_6_wpro_en_src(data)                              ((0x00008000&(data))>>15)
#define DC_MEM_PROTECT_CTRL_get_protect_6_wpro_en(data)                              ((0x00008000&(data))>>15)
#define DC_MEM_PROTECT_CTRL_protect_5_wpro_en_shift                                  (14)
#define DC_MEM_PROTECT_CTRL_protect_5_wpro_en_mask                                   (0x00004000)
#define DC_MEM_PROTECT_CTRL_protect_5_wpro_en(data)                                  (0x00004000&((data)<<14))
#define DC_MEM_PROTECT_CTRL_protect_5_wpro_en_src(data)                              ((0x00004000&(data))>>14)
#define DC_MEM_PROTECT_CTRL_get_protect_5_wpro_en(data)                              ((0x00004000&(data))>>14)
#define DC_MEM_PROTECT_CTRL_protect_4_wpro_en_shift                                  (13)
#define DC_MEM_PROTECT_CTRL_protect_4_wpro_en_mask                                   (0x00002000)
#define DC_MEM_PROTECT_CTRL_protect_4_wpro_en(data)                                  (0x00002000&((data)<<13))
#define DC_MEM_PROTECT_CTRL_protect_4_wpro_en_src(data)                              ((0x00002000&(data))>>13)
#define DC_MEM_PROTECT_CTRL_get_protect_4_wpro_en(data)                              ((0x00002000&(data))>>13)
#define DC_MEM_PROTECT_CTRL_protect_3_wpro_en_shift                                  (12)
#define DC_MEM_PROTECT_CTRL_protect_3_wpro_en_mask                                   (0x00001000)
#define DC_MEM_PROTECT_CTRL_protect_3_wpro_en(data)                                  (0x00001000&((data)<<12))
#define DC_MEM_PROTECT_CTRL_protect_3_wpro_en_src(data)                              ((0x00001000&(data))>>12)
#define DC_MEM_PROTECT_CTRL_get_protect_3_wpro_en(data)                              ((0x00001000&(data))>>12)
#define DC_MEM_PROTECT_CTRL_protect_2_wpro_en_shift                                  (11)
#define DC_MEM_PROTECT_CTRL_protect_2_wpro_en_mask                                   (0x00000800)
#define DC_MEM_PROTECT_CTRL_protect_2_wpro_en(data)                                  (0x00000800&((data)<<11))
#define DC_MEM_PROTECT_CTRL_protect_2_wpro_en_src(data)                              ((0x00000800&(data))>>11)
#define DC_MEM_PROTECT_CTRL_get_protect_2_wpro_en(data)                              ((0x00000800&(data))>>11)
#define DC_MEM_PROTECT_CTRL_protect_1_wpro_en_shift                                  (10)
#define DC_MEM_PROTECT_CTRL_protect_1_wpro_en_mask                                   (0x00000400)
#define DC_MEM_PROTECT_CTRL_protect_1_wpro_en(data)                                  (0x00000400&((data)<<10))
#define DC_MEM_PROTECT_CTRL_protect_1_wpro_en_src(data)                              ((0x00000400&(data))>>10)
#define DC_MEM_PROTECT_CTRL_get_protect_1_wpro_en(data)                              ((0x00000400&(data))>>10)
#define DC_MEM_PROTECT_CTRL_protect_0_wpro_en_shift                                  (9)
#define DC_MEM_PROTECT_CTRL_protect_0_wpro_en_mask                                   (0x00000200)
#define DC_MEM_PROTECT_CTRL_protect_0_wpro_en(data)                                  (0x00000200&((data)<<9))
#define DC_MEM_PROTECT_CTRL_protect_0_wpro_en_src(data)                              ((0x00000200&(data))>>9)
#define DC_MEM_PROTECT_CTRL_get_protect_0_wpro_en(data)                              ((0x00000200&(data))>>9)
#define DC_MEM_PROTECT_CTRL_write_enable4_shift                                      (8)
#define DC_MEM_PROTECT_CTRL_write_enable4_mask                                       (0x00000100)
#define DC_MEM_PROTECT_CTRL_write_enable4(data)                                      (0x00000100&((data)<<8))
#define DC_MEM_PROTECT_CTRL_write_enable4_src(data)                                  ((0x00000100&(data))>>8)
#define DC_MEM_PROTECT_CTRL_get_write_enable4(data)                                  ((0x00000100&(data))>>8)
#define DC_MEM_PROTECT_CTRL_protect_7_en_shift                                       (7)
#define DC_MEM_PROTECT_CTRL_protect_7_en_mask                                        (0x00000080)
#define DC_MEM_PROTECT_CTRL_protect_7_en(data)                                       (0x00000080&((data)<<7))
#define DC_MEM_PROTECT_CTRL_protect_7_en_src(data)                                   ((0x00000080&(data))>>7)
#define DC_MEM_PROTECT_CTRL_get_protect_7_en(data)                                   ((0x00000080&(data))>>7)
#define DC_MEM_PROTECT_CTRL_protect_6_en_shift                                       (6)
#define DC_MEM_PROTECT_CTRL_protect_6_en_mask                                        (0x00000040)
#define DC_MEM_PROTECT_CTRL_protect_6_en(data)                                       (0x00000040&((data)<<6))
#define DC_MEM_PROTECT_CTRL_protect_6_en_src(data)                                   ((0x00000040&(data))>>6)
#define DC_MEM_PROTECT_CTRL_get_protect_6_en(data)                                   ((0x00000040&(data))>>6)
#define DC_MEM_PROTECT_CTRL_protect_5_en_shift                                       (5)
#define DC_MEM_PROTECT_CTRL_protect_5_en_mask                                        (0x00000020)
#define DC_MEM_PROTECT_CTRL_protect_5_en(data)                                       (0x00000020&((data)<<5))
#define DC_MEM_PROTECT_CTRL_protect_5_en_src(data)                                   ((0x00000020&(data))>>5)
#define DC_MEM_PROTECT_CTRL_get_protect_5_en(data)                                   ((0x00000020&(data))>>5)
#define DC_MEM_PROTECT_CTRL_protect_4_en_shift                                       (4)
#define DC_MEM_PROTECT_CTRL_protect_4_en_mask                                        (0x00000010)
#define DC_MEM_PROTECT_CTRL_protect_4_en(data)                                       (0x00000010&((data)<<4))
#define DC_MEM_PROTECT_CTRL_protect_4_en_src(data)                                   ((0x00000010&(data))>>4)
#define DC_MEM_PROTECT_CTRL_get_protect_4_en(data)                                   ((0x00000010&(data))>>4)
#define DC_MEM_PROTECT_CTRL_protect_3_en_shift                                       (3)
#define DC_MEM_PROTECT_CTRL_protect_3_en_mask                                        (0x00000008)
#define DC_MEM_PROTECT_CTRL_protect_3_en(data)                                       (0x00000008&((data)<<3))
#define DC_MEM_PROTECT_CTRL_protect_3_en_src(data)                                   ((0x00000008&(data))>>3)
#define DC_MEM_PROTECT_CTRL_get_protect_3_en(data)                                   ((0x00000008&(data))>>3)
#define DC_MEM_PROTECT_CTRL_protect_2_en_shift                                       (2)
#define DC_MEM_PROTECT_CTRL_protect_2_en_mask                                        (0x00000004)
#define DC_MEM_PROTECT_CTRL_protect_2_en(data)                                       (0x00000004&((data)<<2))
#define DC_MEM_PROTECT_CTRL_protect_2_en_src(data)                                   ((0x00000004&(data))>>2)
#define DC_MEM_PROTECT_CTRL_get_protect_2_en(data)                                   ((0x00000004&(data))>>2)
#define DC_MEM_PROTECT_CTRL_protect_1_en_shift                                       (1)
#define DC_MEM_PROTECT_CTRL_protect_1_en_mask                                        (0x00000002)
#define DC_MEM_PROTECT_CTRL_protect_1_en(data)                                       (0x00000002&((data)<<1))
#define DC_MEM_PROTECT_CTRL_protect_1_en_src(data)                                   ((0x00000002&(data))>>1)
#define DC_MEM_PROTECT_CTRL_get_protect_1_en(data)                                   ((0x00000002&(data))>>1)
#define DC_MEM_PROTECT_CTRL_protect_0_en_shift                                       (0)
#define DC_MEM_PROTECT_CTRL_protect_0_en_mask                                        (0x00000001)
#define DC_MEM_PROTECT_CTRL_protect_0_en(data)                                       (0x00000001&((data)<<0))
#define DC_MEM_PROTECT_CTRL_protect_0_en_src(data)                                   ((0x00000001&(data))>>0)
#define DC_MEM_PROTECT_CTRL_get_protect_0_en(data)                                   ((0x00000001&(data))>>0)


#define DC_MEM_SCRAMBLE_CTRL                                                         0x98008404
#define DC_MEM_SCRAMBLE_CTRL_reg_addr                                                "0xD8008404"
#define DC_MEM_SCRAMBLE_CTRL_reg                                                     0xD8008404
#define set_DC_MEM_SCRAMBLE_CTRL_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_CTRL_reg)=data)
#define get_DC_MEM_SCRAMBLE_CTRL_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_CTRL_reg))
#define DC_MEM_SCRAMBLE_CTRL_inst_adr                                                "0x0001"
#define DC_MEM_SCRAMBLE_CTRL_inst                                                    0x0001
#define DC_MEM_SCRAMBLE_CTRL_tp_scramble_en_shift                                    (12)
#define DC_MEM_SCRAMBLE_CTRL_tp_scramble_en_mask                                     (0x00001000)
#define DC_MEM_SCRAMBLE_CTRL_tp_scramble_en(data)                                    (0x00001000&((data)<<12))
#define DC_MEM_SCRAMBLE_CTRL_tp_scramble_en_src(data)                                ((0x00001000&(data))>>12)
#define DC_MEM_SCRAMBLE_CTRL_get_tp_scramble_en(data)                                ((0x00001000&(data))>>12)
#define DC_MEM_SCRAMBLE_CTRL_video_dec_scramble_en_shift                             (11)
#define DC_MEM_SCRAMBLE_CTRL_video_dec_scramble_en_mask                              (0x00000800)
#define DC_MEM_SCRAMBLE_CTRL_video_dec_scramble_en(data)                             (0x00000800&((data)<<11))
#define DC_MEM_SCRAMBLE_CTRL_video_dec_scramble_en_src(data)                         ((0x00000800&(data))>>11)
#define DC_MEM_SCRAMBLE_CTRL_get_video_dec_scramble_en(data)                         ((0x00000800&(data))>>11)
#define DC_MEM_SCRAMBLE_CTRL_audio_scramble_en_shift                                 (10)
#define DC_MEM_SCRAMBLE_CTRL_audio_scramble_en_mask                                  (0x00000400)
#define DC_MEM_SCRAMBLE_CTRL_audio_scramble_en(data)                                 (0x00000400&((data)<<10))
#define DC_MEM_SCRAMBLE_CTRL_audio_scramble_en_src(data)                             ((0x00000400&(data))>>10)
#define DC_MEM_SCRAMBLE_CTRL_get_audio_scramble_en(data)                             ((0x00000400&(data))>>10)
#define DC_MEM_SCRAMBLE_CTRL_scpu_scramble_en_shift                                  (9)
#define DC_MEM_SCRAMBLE_CTRL_scpu_scramble_en_mask                                   (0x00000200)
#define DC_MEM_SCRAMBLE_CTRL_scpu_scramble_en(data)                                  (0x00000200&((data)<<9))
#define DC_MEM_SCRAMBLE_CTRL_scpu_scramble_en_src(data)                              ((0x00000200&(data))>>9)
#define DC_MEM_SCRAMBLE_CTRL_get_scpu_scramble_en(data)                              ((0x00000200&(data))>>9)
#define DC_MEM_SCRAMBLE_CTRL_scramble_all_en_shift                                   (8)
#define DC_MEM_SCRAMBLE_CTRL_scramble_all_en_mask                                    (0x00000100)
#define DC_MEM_SCRAMBLE_CTRL_scramble_all_en(data)                                   (0x00000100&((data)<<8))
#define DC_MEM_SCRAMBLE_CTRL_scramble_all_en_src(data)                               ((0x00000100&(data))>>8)
#define DC_MEM_SCRAMBLE_CTRL_get_scramble_all_en(data)                               ((0x00000100&(data))>>8)
#define DC_MEM_SCRAMBLE_CTRL_scramble_7_en_shift                                     (7)
#define DC_MEM_SCRAMBLE_CTRL_scramble_7_en_mask                                      (0x00000080)
#define DC_MEM_SCRAMBLE_CTRL_scramble_7_en(data)                                     (0x00000080&((data)<<7))
#define DC_MEM_SCRAMBLE_CTRL_scramble_7_en_src(data)                                 ((0x00000080&(data))>>7)
#define DC_MEM_SCRAMBLE_CTRL_get_scramble_7_en(data)                                 ((0x00000080&(data))>>7)
#define DC_MEM_SCRAMBLE_CTRL_scramble_6_en_shift                                     (6)
#define DC_MEM_SCRAMBLE_CTRL_scramble_6_en_mask                                      (0x00000040)
#define DC_MEM_SCRAMBLE_CTRL_scramble_6_en(data)                                     (0x00000040&((data)<<6))
#define DC_MEM_SCRAMBLE_CTRL_scramble_6_en_src(data)                                 ((0x00000040&(data))>>6)
#define DC_MEM_SCRAMBLE_CTRL_get_scramble_6_en(data)                                 ((0x00000040&(data))>>6)
#define DC_MEM_SCRAMBLE_CTRL_scramble_5_en_shift                                     (5)
#define DC_MEM_SCRAMBLE_CTRL_scramble_5_en_mask                                      (0x00000020)
#define DC_MEM_SCRAMBLE_CTRL_scramble_5_en(data)                                     (0x00000020&((data)<<5))
#define DC_MEM_SCRAMBLE_CTRL_scramble_5_en_src(data)                                 ((0x00000020&(data))>>5)
#define DC_MEM_SCRAMBLE_CTRL_get_scramble_5_en(data)                                 ((0x00000020&(data))>>5)
#define DC_MEM_SCRAMBLE_CTRL_scramble_4_en_shift                                     (4)
#define DC_MEM_SCRAMBLE_CTRL_scramble_4_en_mask                                      (0x00000010)
#define DC_MEM_SCRAMBLE_CTRL_scramble_4_en(data)                                     (0x00000010&((data)<<4))
#define DC_MEM_SCRAMBLE_CTRL_scramble_4_en_src(data)                                 ((0x00000010&(data))>>4)
#define DC_MEM_SCRAMBLE_CTRL_get_scramble_4_en(data)                                 ((0x00000010&(data))>>4)
#define DC_MEM_SCRAMBLE_CTRL_scramble_3_en_shift                                     (3)
#define DC_MEM_SCRAMBLE_CTRL_scramble_3_en_mask                                      (0x00000008)
#define DC_MEM_SCRAMBLE_CTRL_scramble_3_en(data)                                     (0x00000008&((data)<<3))
#define DC_MEM_SCRAMBLE_CTRL_scramble_3_en_src(data)                                 ((0x00000008&(data))>>3)
#define DC_MEM_SCRAMBLE_CTRL_get_scramble_3_en(data)                                 ((0x00000008&(data))>>3)
#define DC_MEM_SCRAMBLE_CTRL_scramble_2_en_shift                                     (2)
#define DC_MEM_SCRAMBLE_CTRL_scramble_2_en_mask                                      (0x00000004)
#define DC_MEM_SCRAMBLE_CTRL_scramble_2_en(data)                                     (0x00000004&((data)<<2))
#define DC_MEM_SCRAMBLE_CTRL_scramble_2_en_src(data)                                 ((0x00000004&(data))>>2)
#define DC_MEM_SCRAMBLE_CTRL_get_scramble_2_en(data)                                 ((0x00000004&(data))>>2)
#define DC_MEM_SCRAMBLE_CTRL_scramble_1_en_shift                                     (1)
#define DC_MEM_SCRAMBLE_CTRL_scramble_1_en_mask                                      (0x00000002)
#define DC_MEM_SCRAMBLE_CTRL_scramble_1_en(data)                                     (0x00000002&((data)<<1))
#define DC_MEM_SCRAMBLE_CTRL_scramble_1_en_src(data)                                 ((0x00000002&(data))>>1)
#define DC_MEM_SCRAMBLE_CTRL_get_scramble_1_en(data)                                 ((0x00000002&(data))>>1)
#define DC_MEM_SCRAMBLE_CTRL_scramble_0_en_shift                                     (0)
#define DC_MEM_SCRAMBLE_CTRL_scramble_0_en_mask                                      (0x00000001)
#define DC_MEM_SCRAMBLE_CTRL_scramble_0_en(data)                                     (0x00000001&((data)<<0))
#define DC_MEM_SCRAMBLE_CTRL_scramble_0_en_src(data)                                 ((0x00000001&(data))>>0)
#define DC_MEM_SCRAMBLE_CTRL_get_scramble_0_en(data)                                 ((0x00000001&(data))>>0)


#define DC_MEM_PROTECT_SADDR0                                                        0x98008408
#define DC_MEM_PROTECT_SADDR0_reg_addr                                               "0xD8008408"
#define DC_MEM_PROTECT_SADDR0_reg                                                    0xD8008408
#define set_DC_MEM_PROTECT_SADDR0_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR0_reg)=data)
#define get_DC_MEM_PROTECT_SADDR0_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR0_reg))
#define DC_MEM_PROTECT_SADDR0_inst_adr                                               "0x0002"
#define DC_MEM_PROTECT_SADDR0_inst                                                   0x0002
#define DC_MEM_PROTECT_SADDR0_saddr0_shift                                           (10)
#define DC_MEM_PROTECT_SADDR0_saddr0_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_SADDR0_saddr0(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_SADDR0_saddr0_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_SADDR0_get_saddr0(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_EADDR0                                                        0x9800840C
#define DC_MEM_PROTECT_EADDR0_reg_addr                                               "0xD800840C"
#define DC_MEM_PROTECT_EADDR0_reg                                                    0xD800840C
#define set_DC_MEM_PROTECT_EADDR0_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR0_reg)=data)
#define get_DC_MEM_PROTECT_EADDR0_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR0_reg))
#define DC_MEM_PROTECT_EADDR0_inst_adr                                               "0x0003"
#define DC_MEM_PROTECT_EADDR0_inst                                                   0x0003
#define DC_MEM_PROTECT_EADDR0_eaddr0_shift                                           (10)
#define DC_MEM_PROTECT_EADDR0_eaddr0_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_EADDR0_eaddr0(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_EADDR0_eaddr0_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_EADDR0_get_eaddr0(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_SADDR1                                                        0x98008410
#define DC_MEM_PROTECT_SADDR1_reg_addr                                               "0xD8008410"
#define DC_MEM_PROTECT_SADDR1_reg                                                    0xD8008410
#define set_DC_MEM_PROTECT_SADDR1_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR1_reg)=data)
#define get_DC_MEM_PROTECT_SADDR1_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR1_reg))
#define DC_MEM_PROTECT_SADDR1_inst_adr                                               "0x0004"
#define DC_MEM_PROTECT_SADDR1_inst                                                   0x0004
#define DC_MEM_PROTECT_SADDR1_saddr1_shift                                           (10)
#define DC_MEM_PROTECT_SADDR1_saddr1_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_SADDR1_saddr1(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_SADDR1_saddr1_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_SADDR1_get_saddr1(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_EADDR1                                                        0x98008414
#define DC_MEM_PROTECT_EADDR1_reg_addr                                               "0xD8008414"
#define DC_MEM_PROTECT_EADDR1_reg                                                    0xD8008414
#define set_DC_MEM_PROTECT_EADDR1_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR1_reg)=data)
#define get_DC_MEM_PROTECT_EADDR1_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR1_reg))
#define DC_MEM_PROTECT_EADDR1_inst_adr                                               "0x0005"
#define DC_MEM_PROTECT_EADDR1_inst                                                   0x0005
#define DC_MEM_PROTECT_EADDR1_eaddr1_shift                                           (10)
#define DC_MEM_PROTECT_EADDR1_eaddr1_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_EADDR1_eaddr1(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_EADDR1_eaddr1_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_EADDR1_get_eaddr1(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_SADDR2                                                        0x98008418
#define DC_MEM_PROTECT_SADDR2_reg_addr                                               "0xD8008418"
#define DC_MEM_PROTECT_SADDR2_reg                                                    0xD8008418
#define set_DC_MEM_PROTECT_SADDR2_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR2_reg)=data)
#define get_DC_MEM_PROTECT_SADDR2_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR2_reg))
#define DC_MEM_PROTECT_SADDR2_inst_adr                                               "0x0006"
#define DC_MEM_PROTECT_SADDR2_inst                                                   0x0006
#define DC_MEM_PROTECT_SADDR2_saddr2_shift                                           (10)
#define DC_MEM_PROTECT_SADDR2_saddr2_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_SADDR2_saddr2(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_SADDR2_saddr2_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_SADDR2_get_saddr2(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_EADDR2                                                        0x9800841C
#define DC_MEM_PROTECT_EADDR2_reg_addr                                               "0xD800841C"
#define DC_MEM_PROTECT_EADDR2_reg                                                    0xD800841C
#define set_DC_MEM_PROTECT_EADDR2_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR2_reg)=data)
#define get_DC_MEM_PROTECT_EADDR2_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR2_reg))
#define DC_MEM_PROTECT_EADDR2_inst_adr                                               "0x0007"
#define DC_MEM_PROTECT_EADDR2_inst                                                   0x0007
#define DC_MEM_PROTECT_EADDR2_eaddr2_shift                                           (10)
#define DC_MEM_PROTECT_EADDR2_eaddr2_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_EADDR2_eaddr2(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_EADDR2_eaddr2_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_EADDR2_get_eaddr2(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_SADDR3                                                        0x98008420
#define DC_MEM_PROTECT_SADDR3_reg_addr                                               "0xD8008420"
#define DC_MEM_PROTECT_SADDR3_reg                                                    0xD8008420
#define set_DC_MEM_PROTECT_SADDR3_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR3_reg)=data)
#define get_DC_MEM_PROTECT_SADDR3_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR3_reg))
#define DC_MEM_PROTECT_SADDR3_inst_adr                                               "0x0008"
#define DC_MEM_PROTECT_SADDR3_inst                                                   0x0008
#define DC_MEM_PROTECT_SADDR3_saddr3_shift                                           (10)
#define DC_MEM_PROTECT_SADDR3_saddr3_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_SADDR3_saddr3(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_SADDR3_saddr3_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_SADDR3_get_saddr3(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_EADDR3                                                        0x98008424
#define DC_MEM_PROTECT_EADDR3_reg_addr                                               "0xD8008424"
#define DC_MEM_PROTECT_EADDR3_reg                                                    0xD8008424
#define set_DC_MEM_PROTECT_EADDR3_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR3_reg)=data)
#define get_DC_MEM_PROTECT_EADDR3_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR3_reg))
#define DC_MEM_PROTECT_EADDR3_inst_adr                                               "0x0009"
#define DC_MEM_PROTECT_EADDR3_inst                                                   0x0009
#define DC_MEM_PROTECT_EADDR3_eaddr3_shift                                           (10)
#define DC_MEM_PROTECT_EADDR3_eaddr3_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_EADDR3_eaddr3(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_EADDR3_eaddr3_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_EADDR3_get_eaddr3(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_SADDR4                                                        0x98008428
#define DC_MEM_PROTECT_SADDR4_reg_addr                                               "0xD8008428"
#define DC_MEM_PROTECT_SADDR4_reg                                                    0xD8008428
#define set_DC_MEM_PROTECT_SADDR4_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR4_reg)=data)
#define get_DC_MEM_PROTECT_SADDR4_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR4_reg))
#define DC_MEM_PROTECT_SADDR4_inst_adr                                               "0x000A"
#define DC_MEM_PROTECT_SADDR4_inst                                                   0x000A
#define DC_MEM_PROTECT_SADDR4_saddr4_shift                                           (10)
#define DC_MEM_PROTECT_SADDR4_saddr4_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_SADDR4_saddr4(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_SADDR4_saddr4_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_SADDR4_get_saddr4(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_EADDR4                                                        0x9800842C
#define DC_MEM_PROTECT_EADDR4_reg_addr                                               "0xD800842C"
#define DC_MEM_PROTECT_EADDR4_reg                                                    0xD800842C
#define set_DC_MEM_PROTECT_EADDR4_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR4_reg)=data)
#define get_DC_MEM_PROTECT_EADDR4_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR4_reg))
#define DC_MEM_PROTECT_EADDR4_inst_adr                                               "0x000B"
#define DC_MEM_PROTECT_EADDR4_inst                                                   0x000B
#define DC_MEM_PROTECT_EADDR4_eaddr4_shift                                           (10)
#define DC_MEM_PROTECT_EADDR4_eaddr4_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_EADDR4_eaddr4(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_EADDR4_eaddr4_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_EADDR4_get_eaddr4(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_SADDR5                                                        0x98008430
#define DC_MEM_PROTECT_SADDR5_reg_addr                                               "0xD8008430"
#define DC_MEM_PROTECT_SADDR5_reg                                                    0xD8008430
#define set_DC_MEM_PROTECT_SADDR5_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR5_reg)=data)
#define get_DC_MEM_PROTECT_SADDR5_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR5_reg))
#define DC_MEM_PROTECT_SADDR5_inst_adr                                               "0x000C"
#define DC_MEM_PROTECT_SADDR5_inst                                                   0x000C
#define DC_MEM_PROTECT_SADDR5_saddr5_shift                                           (10)
#define DC_MEM_PROTECT_SADDR5_saddr5_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_SADDR5_saddr5(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_SADDR5_saddr5_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_SADDR5_get_saddr5(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_EADDR5                                                        0x98008434
#define DC_MEM_PROTECT_EADDR5_reg_addr                                               "0xD8008434"
#define DC_MEM_PROTECT_EADDR5_reg                                                    0xD8008434
#define set_DC_MEM_PROTECT_EADDR5_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR5_reg)=data)
#define get_DC_MEM_PROTECT_EADDR5_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR5_reg))
#define DC_MEM_PROTECT_EADDR5_inst_adr                                               "0x000D"
#define DC_MEM_PROTECT_EADDR5_inst                                                   0x000D
#define DC_MEM_PROTECT_EADDR5_eaddr5_shift                                           (10)
#define DC_MEM_PROTECT_EADDR5_eaddr5_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_EADDR5_eaddr5(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_EADDR5_eaddr5_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_EADDR5_get_eaddr5(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_SADDR6                                                        0x98008438
#define DC_MEM_PROTECT_SADDR6_reg_addr                                               "0xD8008438"
#define DC_MEM_PROTECT_SADDR6_reg                                                    0xD8008438
#define set_DC_MEM_PROTECT_SADDR6_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR6_reg)=data)
#define get_DC_MEM_PROTECT_SADDR6_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR6_reg))
#define DC_MEM_PROTECT_SADDR6_inst_adr                                               "0x000E"
#define DC_MEM_PROTECT_SADDR6_inst                                                   0x000E
#define DC_MEM_PROTECT_SADDR6_saddr6_shift                                           (10)
#define DC_MEM_PROTECT_SADDR6_saddr6_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_SADDR6_saddr6(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_SADDR6_saddr6_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_SADDR6_get_saddr6(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_EADDR6                                                        0x9800843C
#define DC_MEM_PROTECT_EADDR6_reg_addr                                               "0xD800843C"
#define DC_MEM_PROTECT_EADDR6_reg                                                    0xD800843C
#define set_DC_MEM_PROTECT_EADDR6_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR6_reg)=data)
#define get_DC_MEM_PROTECT_EADDR6_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR6_reg))
#define DC_MEM_PROTECT_EADDR6_inst_adr                                               "0x000F"
#define DC_MEM_PROTECT_EADDR6_inst                                                   0x000F
#define DC_MEM_PROTECT_EADDR6_eaddr6_shift                                           (10)
#define DC_MEM_PROTECT_EADDR6_eaddr6_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_EADDR6_eaddr6(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_EADDR6_eaddr6_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_EADDR6_get_eaddr6(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_SADDR7                                                        0x98008440
#define DC_MEM_PROTECT_SADDR7_reg_addr                                               "0xD8008440"
#define DC_MEM_PROTECT_SADDR7_reg                                                    0xD8008440
#define set_DC_MEM_PROTECT_SADDR7_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR7_reg)=data)
#define get_DC_MEM_PROTECT_SADDR7_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_SADDR7_reg))
#define DC_MEM_PROTECT_SADDR7_inst_adr                                               "0x0010"
#define DC_MEM_PROTECT_SADDR7_inst                                                   0x0010
#define DC_MEM_PROTECT_SADDR7_saddr7_shift                                           (10)
#define DC_MEM_PROTECT_SADDR7_saddr7_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_SADDR7_saddr7(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_SADDR7_saddr7_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_SADDR7_get_saddr7(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_EADDR7                                                        0x98008444
#define DC_MEM_PROTECT_EADDR7_reg_addr                                               "0xD8008444"
#define DC_MEM_PROTECT_EADDR7_reg                                                    0xD8008444
#define set_DC_MEM_PROTECT_EADDR7_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR7_reg)=data)
#define get_DC_MEM_PROTECT_EADDR7_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_EADDR7_reg))
#define DC_MEM_PROTECT_EADDR7_inst_adr                                               "0x0011"
#define DC_MEM_PROTECT_EADDR7_inst                                                   0x0011
#define DC_MEM_PROTECT_EADDR7_eaddr7_shift                                           (10)
#define DC_MEM_PROTECT_EADDR7_eaddr7_mask                                            (0xFFFFFC00)
#define DC_MEM_PROTECT_EADDR7_eaddr7(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_MEM_PROTECT_EADDR7_eaddr7_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_MEM_PROTECT_EADDR7_get_eaddr7(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_BLK_PROTECT_SADDR0                                                        0x98008448
#define DC_BLK_PROTECT_SADDR0_reg_addr                                               "0xD8008448"
#define DC_BLK_PROTECT_SADDR0_reg                                                    0xD8008448
#define set_DC_BLK_PROTECT_SADDR0_reg(data)   (*((volatile unsigned int*) DC_BLK_PROTECT_SADDR0_reg)=data)
#define get_DC_BLK_PROTECT_SADDR0_reg   (*((volatile unsigned int*) DC_BLK_PROTECT_SADDR0_reg))
#define DC_BLK_PROTECT_SADDR0_inst_adr                                               "0x0012"
#define DC_BLK_PROTECT_SADDR0_inst                                                   0x0012
#define DC_BLK_PROTECT_SADDR0_saddr0_shift                                           (10)
#define DC_BLK_PROTECT_SADDR0_saddr0_mask                                            (0xFFFFFC00)
#define DC_BLK_PROTECT_SADDR0_saddr0(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_BLK_PROTECT_SADDR0_saddr0_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_BLK_PROTECT_SADDR0_get_saddr0(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_BLK_PROTECT_EADDR0                                                        0x9800844C
#define DC_BLK_PROTECT_EADDR0_reg_addr                                               "0xD800844C"
#define DC_BLK_PROTECT_EADDR0_reg                                                    0xD800844C
#define set_DC_BLK_PROTECT_EADDR0_reg(data)   (*((volatile unsigned int*) DC_BLK_PROTECT_EADDR0_reg)=data)
#define get_DC_BLK_PROTECT_EADDR0_reg   (*((volatile unsigned int*) DC_BLK_PROTECT_EADDR0_reg))
#define DC_BLK_PROTECT_EADDR0_inst_adr                                               "0x0013"
#define DC_BLK_PROTECT_EADDR0_inst                                                   0x0013
#define DC_BLK_PROTECT_EADDR0_eaddr0_shift                                           (10)
#define DC_BLK_PROTECT_EADDR0_eaddr0_mask                                            (0xFFFFFC00)
#define DC_BLK_PROTECT_EADDR0_eaddr0(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_BLK_PROTECT_EADDR0_eaddr0_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_BLK_PROTECT_EADDR0_get_eaddr0(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_BLK_PROTECT_SADDR1                                                        0x98008450
#define DC_BLK_PROTECT_SADDR1_reg_addr                                               "0xD8008450"
#define DC_BLK_PROTECT_SADDR1_reg                                                    0xD8008450
#define set_DC_BLK_PROTECT_SADDR1_reg(data)   (*((volatile unsigned int*) DC_BLK_PROTECT_SADDR1_reg)=data)
#define get_DC_BLK_PROTECT_SADDR1_reg   (*((volatile unsigned int*) DC_BLK_PROTECT_SADDR1_reg))
#define DC_BLK_PROTECT_SADDR1_inst_adr                                               "0x0014"
#define DC_BLK_PROTECT_SADDR1_inst                                                   0x0014
#define DC_BLK_PROTECT_SADDR1_saddr1_shift                                           (10)
#define DC_BLK_PROTECT_SADDR1_saddr1_mask                                            (0xFFFFFC00)
#define DC_BLK_PROTECT_SADDR1_saddr1(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_BLK_PROTECT_SADDR1_saddr1_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_BLK_PROTECT_SADDR1_get_saddr1(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_BLK_PROTECT_EADDR1                                                        0x98008454
#define DC_BLK_PROTECT_EADDR1_reg_addr                                               "0xD8008454"
#define DC_BLK_PROTECT_EADDR1_reg                                                    0xD8008454
#define set_DC_BLK_PROTECT_EADDR1_reg(data)   (*((volatile unsigned int*) DC_BLK_PROTECT_EADDR1_reg)=data)
#define get_DC_BLK_PROTECT_EADDR1_reg   (*((volatile unsigned int*) DC_BLK_PROTECT_EADDR1_reg))
#define DC_BLK_PROTECT_EADDR1_inst_adr                                               "0x0015"
#define DC_BLK_PROTECT_EADDR1_inst                                                   0x0015
#define DC_BLK_PROTECT_EADDR1_eaddr1_shift                                           (10)
#define DC_BLK_PROTECT_EADDR1_eaddr1_mask                                            (0xFFFFFC00)
#define DC_BLK_PROTECT_EADDR1_eaddr1(data)                                           (0xFFFFFC00&((data)<<10))
#define DC_BLK_PROTECT_EADDR1_eaddr1_src(data)                                       ((0xFFFFFC00&(data))>>10)
#define DC_BLK_PROTECT_EADDR1_get_eaddr1(data)                                       ((0xFFFFFC00&(data))>>10)


#define DC_RO_PROTECT_SADDR0                                                         0x98008458
#define DC_RO_PROTECT_SADDR0_reg_addr                                                "0xD8008458"
#define DC_RO_PROTECT_SADDR0_reg                                                     0xD8008458
#define set_DC_RO_PROTECT_SADDR0_reg(data)   (*((volatile unsigned int*) DC_RO_PROTECT_SADDR0_reg)=data)
#define get_DC_RO_PROTECT_SADDR0_reg   (*((volatile unsigned int*) DC_RO_PROTECT_SADDR0_reg))
#define DC_RO_PROTECT_SADDR0_inst_adr                                                "0x0016"
#define DC_RO_PROTECT_SADDR0_inst                                                    0x0016
#define DC_RO_PROTECT_SADDR0_saddr0_shift                                            (10)
#define DC_RO_PROTECT_SADDR0_saddr0_mask                                             (0xFFFFFC00)
#define DC_RO_PROTECT_SADDR0_saddr0(data)                                            (0xFFFFFC00&((data)<<10))
#define DC_RO_PROTECT_SADDR0_saddr0_src(data)                                        ((0xFFFFFC00&(data))>>10)
#define DC_RO_PROTECT_SADDR0_get_saddr0(data)                                        ((0xFFFFFC00&(data))>>10)


#define DC_RO_PROTECT_EADDR0                                                         0x9800845C
#define DC_RO_PROTECT_EADDR0_reg_addr                                                "0xD800845C"
#define DC_RO_PROTECT_EADDR0_reg                                                     0xD800845C
#define set_DC_RO_PROTECT_EADDR0_reg(data)   (*((volatile unsigned int*) DC_RO_PROTECT_EADDR0_reg)=data)
#define get_DC_RO_PROTECT_EADDR0_reg   (*((volatile unsigned int*) DC_RO_PROTECT_EADDR0_reg))
#define DC_RO_PROTECT_EADDR0_inst_adr                                                "0x0017"
#define DC_RO_PROTECT_EADDR0_inst                                                    0x0017
#define DC_RO_PROTECT_EADDR0_eaddr0_shift                                            (10)
#define DC_RO_PROTECT_EADDR0_eaddr0_mask                                             (0xFFFFFC00)
#define DC_RO_PROTECT_EADDR0_eaddr0(data)                                            (0xFFFFFC00&((data)<<10))
#define DC_RO_PROTECT_EADDR0_eaddr0_src(data)                                        ((0xFFFFFC00&(data))>>10)
#define DC_RO_PROTECT_EADDR0_get_eaddr0(data)                                        ((0xFFFFFC00&(data))>>10)


#define DC_RO_PROTECT_SADDR1                                                         0x98008460
#define DC_RO_PROTECT_SADDR1_reg_addr                                                "0xD8008460"
#define DC_RO_PROTECT_SADDR1_reg                                                     0xD8008460
#define set_DC_RO_PROTECT_SADDR1_reg(data)   (*((volatile unsigned int*) DC_RO_PROTECT_SADDR1_reg)=data)
#define get_DC_RO_PROTECT_SADDR1_reg   (*((volatile unsigned int*) DC_RO_PROTECT_SADDR1_reg))
#define DC_RO_PROTECT_SADDR1_inst_adr                                                "0x0018"
#define DC_RO_PROTECT_SADDR1_inst                                                    0x0018
#define DC_RO_PROTECT_SADDR1_saddr1_shift                                            (10)
#define DC_RO_PROTECT_SADDR1_saddr1_mask                                             (0xFFFFFC00)
#define DC_RO_PROTECT_SADDR1_saddr1(data)                                            (0xFFFFFC00&((data)<<10))
#define DC_RO_PROTECT_SADDR1_saddr1_src(data)                                        ((0xFFFFFC00&(data))>>10)
#define DC_RO_PROTECT_SADDR1_get_saddr1(data)                                        ((0xFFFFFC00&(data))>>10)


#define DC_RO_PROTECT_EADDR1                                                         0x98008464
#define DC_RO_PROTECT_EADDR1_reg_addr                                                "0xD8008464"
#define DC_RO_PROTECT_EADDR1_reg                                                     0xD8008464
#define set_DC_RO_PROTECT_EADDR1_reg(data)   (*((volatile unsigned int*) DC_RO_PROTECT_EADDR1_reg)=data)
#define get_DC_RO_PROTECT_EADDR1_reg   (*((volatile unsigned int*) DC_RO_PROTECT_EADDR1_reg))
#define DC_RO_PROTECT_EADDR1_inst_adr                                                "0x0019"
#define DC_RO_PROTECT_EADDR1_inst                                                    0x0019
#define DC_RO_PROTECT_EADDR1_eaddr1_shift                                            (10)
#define DC_RO_PROTECT_EADDR1_eaddr1_mask                                             (0xFFFFFC00)
#define DC_RO_PROTECT_EADDR1_eaddr1(data)                                            (0xFFFFFC00&((data)<<10))
#define DC_RO_PROTECT_EADDR1_eaddr1_src(data)                                        ((0xFFFFFC00&(data))>>10)
#define DC_RO_PROTECT_EADDR1_get_eaddr1(data)                                        ((0xFFFFFC00&(data))>>10)


#define DC_RO_PROTECT_SADDR2                                                         0x98008468
#define DC_RO_PROTECT_SADDR2_reg_addr                                                "0xD8008468"
#define DC_RO_PROTECT_SADDR2_reg                                                     0xD8008468
#define set_DC_RO_PROTECT_SADDR2_reg(data)   (*((volatile unsigned int*) DC_RO_PROTECT_SADDR2_reg)=data)
#define get_DC_RO_PROTECT_SADDR2_reg   (*((volatile unsigned int*) DC_RO_PROTECT_SADDR2_reg))
#define DC_RO_PROTECT_SADDR2_inst_adr                                                "0x001A"
#define DC_RO_PROTECT_SADDR2_inst                                                    0x001A
#define DC_RO_PROTECT_SADDR2_saddr2_shift                                            (10)
#define DC_RO_PROTECT_SADDR2_saddr2_mask                                             (0xFFFFFC00)
#define DC_RO_PROTECT_SADDR2_saddr2(data)                                            (0xFFFFFC00&((data)<<10))
#define DC_RO_PROTECT_SADDR2_saddr2_src(data)                                        ((0xFFFFFC00&(data))>>10)
#define DC_RO_PROTECT_SADDR2_get_saddr2(data)                                        ((0xFFFFFC00&(data))>>10)


#define DC_RO_PROTECT_EADDR2                                                         0x9800846C
#define DC_RO_PROTECT_EADDR2_reg_addr                                                "0xD800846C"
#define DC_RO_PROTECT_EADDR2_reg                                                     0xD800846C
#define set_DC_RO_PROTECT_EADDR2_reg(data)   (*((volatile unsigned int*) DC_RO_PROTECT_EADDR2_reg)=data)
#define get_DC_RO_PROTECT_EADDR2_reg   (*((volatile unsigned int*) DC_RO_PROTECT_EADDR2_reg))
#define DC_RO_PROTECT_EADDR2_inst_adr                                                "0x001B"
#define DC_RO_PROTECT_EADDR2_inst                                                    0x001B
#define DC_RO_PROTECT_EADDR2_eaddr2_shift                                            (10)
#define DC_RO_PROTECT_EADDR2_eaddr2_mask                                             (0xFFFFFC00)
#define DC_RO_PROTECT_EADDR2_eaddr2(data)                                            (0xFFFFFC00&((data)<<10))
#define DC_RO_PROTECT_EADDR2_eaddr2_src(data)                                        ((0xFFFFFC00&(data))>>10)
#define DC_RO_PROTECT_EADDR2_get_eaddr2(data)                                        ((0xFFFFFC00&(data))>>10)


#define DC_RO_PROTECT_SADDR3                                                         0x98008470
#define DC_RO_PROTECT_SADDR3_reg_addr                                                "0xD8008470"
#define DC_RO_PROTECT_SADDR3_reg                                                     0xD8008470
#define set_DC_RO_PROTECT_SADDR3_reg(data)   (*((volatile unsigned int*) DC_RO_PROTECT_SADDR3_reg)=data)
#define get_DC_RO_PROTECT_SADDR3_reg   (*((volatile unsigned int*) DC_RO_PROTECT_SADDR3_reg))
#define DC_RO_PROTECT_SADDR3_inst_adr                                                "0x001C"
#define DC_RO_PROTECT_SADDR3_inst                                                    0x001C
#define DC_RO_PROTECT_SADDR3_saddr3_shift                                            (10)
#define DC_RO_PROTECT_SADDR3_saddr3_mask                                             (0xFFFFFC00)
#define DC_RO_PROTECT_SADDR3_saddr3(data)                                            (0xFFFFFC00&((data)<<10))
#define DC_RO_PROTECT_SADDR3_saddr3_src(data)                                        ((0xFFFFFC00&(data))>>10)
#define DC_RO_PROTECT_SADDR3_get_saddr3(data)                                        ((0xFFFFFC00&(data))>>10)


#define DC_RO_PROTECT_EADDR3                                                         0x98008474
#define DC_RO_PROTECT_EADDR3_reg_addr                                                "0xD8008474"
#define DC_RO_PROTECT_EADDR3_reg                                                     0xD8008474
#define set_DC_RO_PROTECT_EADDR3_reg(data)   (*((volatile unsigned int*) DC_RO_PROTECT_EADDR3_reg)=data)
#define get_DC_RO_PROTECT_EADDR3_reg   (*((volatile unsigned int*) DC_RO_PROTECT_EADDR3_reg))
#define DC_RO_PROTECT_EADDR3_inst_adr                                                "0x001D"
#define DC_RO_PROTECT_EADDR3_inst                                                    0x001D
#define DC_RO_PROTECT_EADDR3_eaddr3_shift                                            (10)
#define DC_RO_PROTECT_EADDR3_eaddr3_mask                                             (0xFFFFFC00)
#define DC_RO_PROTECT_EADDR3_eaddr3(data)                                            (0xFFFFFC00&((data)<<10))
#define DC_RO_PROTECT_EADDR3_eaddr3_src(data)                                        ((0xFFFFFC00&(data))>>10)
#define DC_RO_PROTECT_EADDR3_get_eaddr3(data)                                        ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_SADDR0                                                       0x98008478
#define DC_MEM_SCRAMBLE_SADDR0_reg_addr                                              "0xD8008478"
#define DC_MEM_SCRAMBLE_SADDR0_reg                                                   0xD8008478
#define set_DC_MEM_SCRAMBLE_SADDR0_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR0_reg)=data)
#define get_DC_MEM_SCRAMBLE_SADDR0_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR0_reg))
#define DC_MEM_SCRAMBLE_SADDR0_inst_adr                                              "0x001E"
#define DC_MEM_SCRAMBLE_SADDR0_inst                                                  0x001E
#define DC_MEM_SCRAMBLE_SADDR0_saddr0_shift                                          (10)
#define DC_MEM_SCRAMBLE_SADDR0_saddr0_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_SADDR0_saddr0(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_SADDR0_saddr0_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_SADDR0_get_saddr0(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_EADDR0                                                       0x9800847C
#define DC_MEM_SCRAMBLE_EADDR0_reg_addr                                              "0xD800847C"
#define DC_MEM_SCRAMBLE_EADDR0_reg                                                   0xD800847C
#define set_DC_MEM_SCRAMBLE_EADDR0_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR0_reg)=data)
#define get_DC_MEM_SCRAMBLE_EADDR0_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR0_reg))
#define DC_MEM_SCRAMBLE_EADDR0_inst_adr                                              "0x001F"
#define DC_MEM_SCRAMBLE_EADDR0_inst                                                  0x001F
#define DC_MEM_SCRAMBLE_EADDR0_eaddr0_shift                                          (10)
#define DC_MEM_SCRAMBLE_EADDR0_eaddr0_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_EADDR0_eaddr0(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_EADDR0_eaddr0_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_EADDR0_get_eaddr0(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_SADDR1                                                       0x98008480
#define DC_MEM_SCRAMBLE_SADDR1_reg_addr                                              "0xD8008480"
#define DC_MEM_SCRAMBLE_SADDR1_reg                                                   0xD8008480
#define set_DC_MEM_SCRAMBLE_SADDR1_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR1_reg)=data)
#define get_DC_MEM_SCRAMBLE_SADDR1_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR1_reg))
#define DC_MEM_SCRAMBLE_SADDR1_inst_adr                                              "0x0020"
#define DC_MEM_SCRAMBLE_SADDR1_inst                                                  0x0020
#define DC_MEM_SCRAMBLE_SADDR1_saddr1_shift                                          (12)
#define DC_MEM_SCRAMBLE_SADDR1_saddr1_mask                                           (0xFFFFF000)
#define DC_MEM_SCRAMBLE_SADDR1_saddr1(data)                                          (0xFFFFF000&((data)<<12))
#define DC_MEM_SCRAMBLE_SADDR1_saddr1_src(data)                                      ((0xFFFFF000&(data))>>12)
#define DC_MEM_SCRAMBLE_SADDR1_get_saddr1(data)                                      ((0xFFFFF000&(data))>>12)


#define DC_MEM_SCRAMBLE_EADDR1                                                       0x98008484
#define DC_MEM_SCRAMBLE_EADDR1_reg_addr                                              "0xD8008484"
#define DC_MEM_SCRAMBLE_EADDR1_reg                                                   0xD8008484
#define set_DC_MEM_SCRAMBLE_EADDR1_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR1_reg)=data)
#define get_DC_MEM_SCRAMBLE_EADDR1_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR1_reg))
#define DC_MEM_SCRAMBLE_EADDR1_inst_adr                                              "0x0021"
#define DC_MEM_SCRAMBLE_EADDR1_inst                                                  0x0021
#define DC_MEM_SCRAMBLE_EADDR1_eaddr1_shift                                          (10)
#define DC_MEM_SCRAMBLE_EADDR1_eaddr1_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_EADDR1_eaddr1(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_EADDR1_eaddr1_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_EADDR1_get_eaddr1(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_SADDR2                                                       0x98008488
#define DC_MEM_SCRAMBLE_SADDR2_reg_addr                                              "0xD8008488"
#define DC_MEM_SCRAMBLE_SADDR2_reg                                                   0xD8008488
#define set_DC_MEM_SCRAMBLE_SADDR2_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR2_reg)=data)
#define get_DC_MEM_SCRAMBLE_SADDR2_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR2_reg))
#define DC_MEM_SCRAMBLE_SADDR2_inst_adr                                              "0x0022"
#define DC_MEM_SCRAMBLE_SADDR2_inst                                                  0x0022
#define DC_MEM_SCRAMBLE_SADDR2_saddr2_shift                                          (10)
#define DC_MEM_SCRAMBLE_SADDR2_saddr2_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_SADDR2_saddr2(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_SADDR2_saddr2_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_SADDR2_get_saddr2(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_EADDR2                                                       0x9800848C
#define DC_MEM_SCRAMBLE_EADDR2_reg_addr                                              "0xD800848C"
#define DC_MEM_SCRAMBLE_EADDR2_reg                                                   0xD800848C
#define set_DC_MEM_SCRAMBLE_EADDR2_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR2_reg)=data)
#define get_DC_MEM_SCRAMBLE_EADDR2_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR2_reg))
#define DC_MEM_SCRAMBLE_EADDR2_inst_adr                                              "0x0023"
#define DC_MEM_SCRAMBLE_EADDR2_inst                                                  0x0023
#define DC_MEM_SCRAMBLE_EADDR2_eaddr2_shift                                          (10)
#define DC_MEM_SCRAMBLE_EADDR2_eaddr2_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_EADDR2_eaddr2(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_EADDR2_eaddr2_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_EADDR2_get_eaddr2(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_SADDR3                                                       0x98008490
#define DC_MEM_SCRAMBLE_SADDR3_reg_addr                                              "0xD8008490"
#define DC_MEM_SCRAMBLE_SADDR3_reg                                                   0xD8008490
#define set_DC_MEM_SCRAMBLE_SADDR3_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR3_reg)=data)
#define get_DC_MEM_SCRAMBLE_SADDR3_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR3_reg))
#define DC_MEM_SCRAMBLE_SADDR3_inst_adr                                              "0x0024"
#define DC_MEM_SCRAMBLE_SADDR3_inst                                                  0x0024
#define DC_MEM_SCRAMBLE_SADDR3_saddr3_shift                                          (10)
#define DC_MEM_SCRAMBLE_SADDR3_saddr3_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_SADDR3_saddr3(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_SADDR3_saddr3_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_SADDR3_get_saddr3(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_EADDR3                                                       0x98008494
#define DC_MEM_SCRAMBLE_EADDR3_reg_addr                                              "0xD8008494"
#define DC_MEM_SCRAMBLE_EADDR3_reg                                                   0xD8008494
#define set_DC_MEM_SCRAMBLE_EADDR3_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR3_reg)=data)
#define get_DC_MEM_SCRAMBLE_EADDR3_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR3_reg))
#define DC_MEM_SCRAMBLE_EADDR3_inst_adr                                              "0x0025"
#define DC_MEM_SCRAMBLE_EADDR3_inst                                                  0x0025
#define DC_MEM_SCRAMBLE_EADDR3_eaddr3_shift                                          (10)
#define DC_MEM_SCRAMBLE_EADDR3_eaddr3_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_EADDR3_eaddr3(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_EADDR3_eaddr3_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_EADDR3_get_eaddr3(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_SADDR4                                                       0x98008498
#define DC_MEM_SCRAMBLE_SADDR4_reg_addr                                              "0xD8008498"
#define DC_MEM_SCRAMBLE_SADDR4_reg                                                   0xD8008498
#define set_DC_MEM_SCRAMBLE_SADDR4_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR4_reg)=data)
#define get_DC_MEM_SCRAMBLE_SADDR4_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR4_reg))
#define DC_MEM_SCRAMBLE_SADDR4_inst_adr                                              "0x0026"
#define DC_MEM_SCRAMBLE_SADDR4_inst                                                  0x0026
#define DC_MEM_SCRAMBLE_SADDR4_saddr4_shift                                          (10)
#define DC_MEM_SCRAMBLE_SADDR4_saddr4_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_SADDR4_saddr4(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_SADDR4_saddr4_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_SADDR4_get_saddr4(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_EADDR4                                                       0x9800849C
#define DC_MEM_SCRAMBLE_EADDR4_reg_addr                                              "0xD800849C"
#define DC_MEM_SCRAMBLE_EADDR4_reg                                                   0xD800849C
#define set_DC_MEM_SCRAMBLE_EADDR4_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR4_reg)=data)
#define get_DC_MEM_SCRAMBLE_EADDR4_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR4_reg))
#define DC_MEM_SCRAMBLE_EADDR4_inst_adr                                              "0x0027"
#define DC_MEM_SCRAMBLE_EADDR4_inst                                                  0x0027
#define DC_MEM_SCRAMBLE_EADDR4_eaddr4_shift                                          (10)
#define DC_MEM_SCRAMBLE_EADDR4_eaddr4_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_EADDR4_eaddr4(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_EADDR4_eaddr4_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_EADDR4_get_eaddr4(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_SADDR5                                                       0x980084A0
#define DC_MEM_SCRAMBLE_SADDR5_reg_addr                                              "0xD80084A0"
#define DC_MEM_SCRAMBLE_SADDR5_reg                                                   0xD80084A0
#define set_DC_MEM_SCRAMBLE_SADDR5_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR5_reg)=data)
#define get_DC_MEM_SCRAMBLE_SADDR5_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR5_reg))
#define DC_MEM_SCRAMBLE_SADDR5_inst_adr                                              "0x0028"
#define DC_MEM_SCRAMBLE_SADDR5_inst                                                  0x0028
#define DC_MEM_SCRAMBLE_SADDR5_saddr5_shift                                          (10)
#define DC_MEM_SCRAMBLE_SADDR5_saddr5_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_SADDR5_saddr5(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_SADDR5_saddr5_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_SADDR5_get_saddr5(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_EADDR5                                                       0x980084A4
#define DC_MEM_SCRAMBLE_EADDR5_reg_addr                                              "0xD80084A4"
#define DC_MEM_SCRAMBLE_EADDR5_reg                                                   0xD80084A4
#define set_DC_MEM_SCRAMBLE_EADDR5_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR5_reg)=data)
#define get_DC_MEM_SCRAMBLE_EADDR5_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR5_reg))
#define DC_MEM_SCRAMBLE_EADDR5_inst_adr                                              "0x0029"
#define DC_MEM_SCRAMBLE_EADDR5_inst                                                  0x0029
#define DC_MEM_SCRAMBLE_EADDR5_eaddr5_shift                                          (10)
#define DC_MEM_SCRAMBLE_EADDR5_eaddr5_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_EADDR5_eaddr5(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_EADDR5_eaddr5_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_EADDR5_get_eaddr5(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_SADDR6                                                       0x980084A8
#define DC_MEM_SCRAMBLE_SADDR6_reg_addr                                              "0xD80084A8"
#define DC_MEM_SCRAMBLE_SADDR6_reg                                                   0xD80084A8
#define set_DC_MEM_SCRAMBLE_SADDR6_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR6_reg)=data)
#define get_DC_MEM_SCRAMBLE_SADDR6_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR6_reg))
#define DC_MEM_SCRAMBLE_SADDR6_inst_adr                                              "0x002A"
#define DC_MEM_SCRAMBLE_SADDR6_inst                                                  0x002A
#define DC_MEM_SCRAMBLE_SADDR6_saddr6_shift                                          (10)
#define DC_MEM_SCRAMBLE_SADDR6_saddr6_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_SADDR6_saddr6(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_SADDR6_saddr6_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_SADDR6_get_saddr6(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_EADDR6                                                       0x980084AC
#define DC_MEM_SCRAMBLE_EADDR6_reg_addr                                              "0xD80084AC"
#define DC_MEM_SCRAMBLE_EADDR6_reg                                                   0xD80084AC
#define set_DC_MEM_SCRAMBLE_EADDR6_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR6_reg)=data)
#define get_DC_MEM_SCRAMBLE_EADDR6_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR6_reg))
#define DC_MEM_SCRAMBLE_EADDR6_inst_adr                                              "0x002B"
#define DC_MEM_SCRAMBLE_EADDR6_inst                                                  0x002B
#define DC_MEM_SCRAMBLE_EADDR6_eaddr6_shift                                          (10)
#define DC_MEM_SCRAMBLE_EADDR6_eaddr6_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_EADDR6_eaddr6(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_EADDR6_eaddr6_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_EADDR6_get_eaddr6(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_SADDR7                                                       0x980084B0
#define DC_MEM_SCRAMBLE_SADDR7_reg_addr                                              "0xD80084B0"
#define DC_MEM_SCRAMBLE_SADDR7_reg                                                   0xD80084B0
#define set_DC_MEM_SCRAMBLE_SADDR7_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR7_reg)=data)
#define get_DC_MEM_SCRAMBLE_SADDR7_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_SADDR7_reg))
#define DC_MEM_SCRAMBLE_SADDR7_inst_adr                                              "0x002C"
#define DC_MEM_SCRAMBLE_SADDR7_inst                                                  0x002C
#define DC_MEM_SCRAMBLE_SADDR7_saddr7_shift                                          (10)
#define DC_MEM_SCRAMBLE_SADDR7_saddr7_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_SADDR7_saddr7(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_SADDR7_saddr7_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_SADDR7_get_saddr7(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_SCRAMBLE_EADDR7                                                       0x980084B4
#define DC_MEM_SCRAMBLE_EADDR7_reg_addr                                              "0xD80084B4"
#define DC_MEM_SCRAMBLE_EADDR7_reg                                                   0xD80084B4
#define set_DC_MEM_SCRAMBLE_EADDR7_reg(data)   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR7_reg)=data)
#define get_DC_MEM_SCRAMBLE_EADDR7_reg   (*((volatile unsigned int*) DC_MEM_SCRAMBLE_EADDR7_reg))
#define DC_MEM_SCRAMBLE_EADDR7_inst_adr                                              "0x002D"
#define DC_MEM_SCRAMBLE_EADDR7_inst                                                  0x002D
#define DC_MEM_SCRAMBLE_EADDR7_eaddr7_shift                                          (10)
#define DC_MEM_SCRAMBLE_EADDR7_eaddr7_mask                                           (0xFFFFFC00)
#define DC_MEM_SCRAMBLE_EADDR7_eaddr7(data)                                          (0xFFFFFC00&((data)<<10))
#define DC_MEM_SCRAMBLE_EADDR7_eaddr7_src(data)                                      ((0xFFFFFC00&(data))>>10)
#define DC_MEM_SCRAMBLE_EADDR7_get_eaddr7(data)                                      ((0xFFFFFC00&(data))>>10)


#define DC_MEM_PROTECT_ID_CTRL_0                                                     0x980084B8
#define DC_MEM_PROTECT_ID_CTRL_0_reg_addr                                            "0xD80084B8"
#define DC_MEM_PROTECT_ID_CTRL_0_reg                                                 0xD80084B8
#define set_DC_MEM_PROTECT_ID_CTRL_0_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_ID_CTRL_0_reg)=data)
#define get_DC_MEM_PROTECT_ID_CTRL_0_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_ID_CTRL_0_reg))
#define DC_MEM_PROTECT_ID_CTRL_0_inst_adr                                            "0x002E"
#define DC_MEM_PROTECT_ID_CTRL_0_inst                                                0x002E
#define DC_MEM_PROTECT_ID_CTRL_0_md_tee_protect_en_shift                             (24)
#define DC_MEM_PROTECT_ID_CTRL_0_md_tee_protect_en_mask                              (0xFF000000)
#define DC_MEM_PROTECT_ID_CTRL_0_md_tee_protect_en(data)                             (0xFF000000&((data)<<24))
#define DC_MEM_PROTECT_ID_CTRL_0_md_tee_protect_en_src(data)                         ((0xFF000000&(data))>>24)
#define DC_MEM_PROTECT_ID_CTRL_0_get_md_tee_protect_en(data)                         ((0xFF000000&(data))>>24)
#define DC_MEM_PROTECT_ID_CTRL_0_cp_tee_protect_en_shift                             (16)
#define DC_MEM_PROTECT_ID_CTRL_0_cp_tee_protect_en_mask                              (0x00FF0000)
#define DC_MEM_PROTECT_ID_CTRL_0_cp_tee_protect_en(data)                             (0x00FF0000&((data)<<16))
#define DC_MEM_PROTECT_ID_CTRL_0_cp_tee_protect_en_src(data)                         ((0x00FF0000&(data))>>16)
#define DC_MEM_PROTECT_ID_CTRL_0_get_cp_tee_protect_en(data)                         ((0x00FF0000&(data))>>16)
#define DC_MEM_PROTECT_ID_CTRL_0_vo_protect_en_shift                                 (8)
#define DC_MEM_PROTECT_ID_CTRL_0_vo_protect_en_mask                                  (0x0000FF00)
#define DC_MEM_PROTECT_ID_CTRL_0_vo_protect_en(data)                                 (0x0000FF00&((data)<<8))
#define DC_MEM_PROTECT_ID_CTRL_0_vo_protect_en_src(data)                             ((0x0000FF00&(data))>>8)
#define DC_MEM_PROTECT_ID_CTRL_0_get_vo_protect_en(data)                             ((0x0000FF00&(data))>>8)
#define DC_MEM_PROTECT_ID_CTRL_0_nf_tee_protect_en_shift                             (0)
#define DC_MEM_PROTECT_ID_CTRL_0_nf_tee_protect_en_mask                              (0x000000FF)
#define DC_MEM_PROTECT_ID_CTRL_0_nf_tee_protect_en(data)                             (0x000000FF&((data)<<0))
#define DC_MEM_PROTECT_ID_CTRL_0_nf_tee_protect_en_src(data)                         ((0x000000FF&(data))>>0)
#define DC_MEM_PROTECT_ID_CTRL_0_get_nf_tee_protect_en(data)                         ((0x000000FF&(data))>>0)


#define DC_MEM_PROTECT_ID_CTRL_1                                                     0x980084BC
#define DC_MEM_PROTECT_ID_CTRL_1_reg_addr                                            "0xD80084BC"
#define DC_MEM_PROTECT_ID_CTRL_1_reg                                                 0xD80084BC
#define set_DC_MEM_PROTECT_ID_CTRL_1_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_ID_CTRL_1_reg)=data)
#define get_DC_MEM_PROTECT_ID_CTRL_1_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_ID_CTRL_1_reg))
#define DC_MEM_PROTECT_ID_CTRL_1_inst_adr                                            "0x002F"
#define DC_MEM_PROTECT_ID_CTRL_1_inst                                                0x002F
#define DC_MEM_PROTECT_ID_CTRL_1_scpu_tee_protect_en_shift                           (24)
#define DC_MEM_PROTECT_ID_CTRL_1_scpu_tee_protect_en_mask                            (0xFF000000)
#define DC_MEM_PROTECT_ID_CTRL_1_scpu_tee_protect_en(data)                           (0xFF000000&((data)<<24))
#define DC_MEM_PROTECT_ID_CTRL_1_scpu_tee_protect_en_src(data)                       ((0xFF000000&(data))>>24)
#define DC_MEM_PROTECT_ID_CTRL_1_get_scpu_tee_protect_en(data)                       ((0xFF000000&(data))>>24)
#define DC_MEM_PROTECT_ID_CTRL_1_acpu_protect_en_shift                               (16)
#define DC_MEM_PROTECT_ID_CTRL_1_acpu_protect_en_mask                                (0x00FF0000)
#define DC_MEM_PROTECT_ID_CTRL_1_acpu_protect_en(data)                               (0x00FF0000&((data)<<16))
#define DC_MEM_PROTECT_ID_CTRL_1_acpu_protect_en_src(data)                           ((0x00FF0000&(data))>>16)
#define DC_MEM_PROTECT_ID_CTRL_1_get_acpu_protect_en(data)                           ((0x00FF0000&(data))>>16)
#define DC_MEM_PROTECT_ID_CTRL_1_video_protect_en_shift                              (8)
#define DC_MEM_PROTECT_ID_CTRL_1_video_protect_en_mask                               (0x0000FF00)
#define DC_MEM_PROTECT_ID_CTRL_1_video_protect_en(data)                              (0x0000FF00&((data)<<8))
#define DC_MEM_PROTECT_ID_CTRL_1_video_protect_en_src(data)                          ((0x0000FF00&(data))>>8)
#define DC_MEM_PROTECT_ID_CTRL_1_get_video_protect_en(data)                          ((0x0000FF00&(data))>>8)
#define DC_MEM_PROTECT_ID_CTRL_1_audio_protect_en_shift                              (0)
#define DC_MEM_PROTECT_ID_CTRL_1_audio_protect_en_mask                               (0x000000FF)
#define DC_MEM_PROTECT_ID_CTRL_1_audio_protect_en(data)                              (0x000000FF&((data)<<0))
#define DC_MEM_PROTECT_ID_CTRL_1_audio_protect_en_src(data)                          ((0x000000FF&(data))>>0)
#define DC_MEM_PROTECT_ID_CTRL_1_get_audio_protect_en(data)                          ((0x000000FF&(data))>>0)


#define DC_MEM_PROTECT_ID_CTRL_2                                                     0x980084C0
#define DC_MEM_PROTECT_ID_CTRL_2_reg_addr                                            "0xD80084C0"
#define DC_MEM_PROTECT_ID_CTRL_2_reg                                                 0xD80084C0
#define set_DC_MEM_PROTECT_ID_CTRL_2_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_ID_CTRL_2_reg)=data)
#define get_DC_MEM_PROTECT_ID_CTRL_2_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_ID_CTRL_2_reg))
#define DC_MEM_PROTECT_ID_CTRL_2_inst_adr                                            "0x0030"
#define DC_MEM_PROTECT_ID_CTRL_2_inst                                                0x0030
#define DC_MEM_PROTECT_ID_CTRL_2_scpu_tee_blk_protect_en_shift                       (14)
#define DC_MEM_PROTECT_ID_CTRL_2_scpu_tee_blk_protect_en_mask                        (0x0000C000)
#define DC_MEM_PROTECT_ID_CTRL_2_scpu_tee_blk_protect_en(data)                       (0x0000C000&((data)<<14))
#define DC_MEM_PROTECT_ID_CTRL_2_scpu_tee_blk_protect_en_src(data)                   ((0x0000C000&(data))>>14)
#define DC_MEM_PROTECT_ID_CTRL_2_get_scpu_tee_blk_protect_en(data)                   ((0x0000C000&(data))>>14)
#define DC_MEM_PROTECT_ID_CTRL_2_acpu_blk_protect_en_shift                           (12)
#define DC_MEM_PROTECT_ID_CTRL_2_acpu_blk_protect_en_mask                            (0x00003000)
#define DC_MEM_PROTECT_ID_CTRL_2_acpu_blk_protect_en(data)                           (0x00003000&((data)<<12))
#define DC_MEM_PROTECT_ID_CTRL_2_acpu_blk_protect_en_src(data)                       ((0x00003000&(data))>>12)
#define DC_MEM_PROTECT_ID_CTRL_2_get_acpu_blk_protect_en(data)                       ((0x00003000&(data))>>12)
#define DC_MEM_PROTECT_ID_CTRL_2_video_blk_protect_en_shift                          (10)
#define DC_MEM_PROTECT_ID_CTRL_2_video_blk_protect_en_mask                           (0x00000C00)
#define DC_MEM_PROTECT_ID_CTRL_2_video_blk_protect_en(data)                          (0x00000C00&((data)<<10))
#define DC_MEM_PROTECT_ID_CTRL_2_video_blk_protect_en_src(data)                      ((0x00000C00&(data))>>10)
#define DC_MEM_PROTECT_ID_CTRL_2_get_video_blk_protect_en(data)                      ((0x00000C00&(data))>>10)
#define DC_MEM_PROTECT_ID_CTRL_2_audio_blk_protect_en_shift                          (8)
#define DC_MEM_PROTECT_ID_CTRL_2_audio_blk_protect_en_mask                           (0x00000300)
#define DC_MEM_PROTECT_ID_CTRL_2_audio_blk_protect_en(data)                          (0x00000300&((data)<<8))
#define DC_MEM_PROTECT_ID_CTRL_2_audio_blk_protect_en_src(data)                      ((0x00000300&(data))>>8)
#define DC_MEM_PROTECT_ID_CTRL_2_get_audio_blk_protect_en(data)                      ((0x00000300&(data))>>8)
#define DC_MEM_PROTECT_ID_CTRL_2_md_tee_blk_protect_en_shift                         (6)
#define DC_MEM_PROTECT_ID_CTRL_2_md_tee_blk_protect_en_mask                          (0x000000C0)
#define DC_MEM_PROTECT_ID_CTRL_2_md_tee_blk_protect_en(data)                         (0x000000C0&((data)<<6))
#define DC_MEM_PROTECT_ID_CTRL_2_md_tee_blk_protect_en_src(data)                     ((0x000000C0&(data))>>6)
#define DC_MEM_PROTECT_ID_CTRL_2_get_md_tee_blk_protect_en(data)                     ((0x000000C0&(data))>>6)
#define DC_MEM_PROTECT_ID_CTRL_2_cp_tee_blk_protect_en_shift                         (4)
#define DC_MEM_PROTECT_ID_CTRL_2_cp_tee_blk_protect_en_mask                          (0x00000030)
#define DC_MEM_PROTECT_ID_CTRL_2_cp_tee_blk_protect_en(data)                         (0x00000030&((data)<<4))
#define DC_MEM_PROTECT_ID_CTRL_2_cp_tee_blk_protect_en_src(data)                     ((0x00000030&(data))>>4)
#define DC_MEM_PROTECT_ID_CTRL_2_get_cp_tee_blk_protect_en(data)                     ((0x00000030&(data))>>4)
#define DC_MEM_PROTECT_ID_CTRL_2_vo_blk_protect_en_shift                             (2)
#define DC_MEM_PROTECT_ID_CTRL_2_vo_blk_protect_en_mask                              (0x0000000C)
#define DC_MEM_PROTECT_ID_CTRL_2_vo_blk_protect_en(data)                             (0x0000000C&((data)<<2))
#define DC_MEM_PROTECT_ID_CTRL_2_vo_blk_protect_en_src(data)                         ((0x0000000C&(data))>>2)
#define DC_MEM_PROTECT_ID_CTRL_2_get_vo_blk_protect_en(data)                         ((0x0000000C&(data))>>2)
#define DC_MEM_PROTECT_ID_CTRL_2_nf_tee_blk_protect_en_shift                         (0)
#define DC_MEM_PROTECT_ID_CTRL_2_nf_tee_blk_protect_en_mask                          (0x00000003)
#define DC_MEM_PROTECT_ID_CTRL_2_nf_tee_blk_protect_en(data)                         (0x00000003&((data)<<0))
#define DC_MEM_PROTECT_ID_CTRL_2_nf_tee_blk_protect_en_src(data)                     ((0x00000003&(data))>>0)
#define DC_MEM_PROTECT_ID_CTRL_2_get_nf_tee_blk_protect_en(data)                     ((0x00000003&(data))>>0)


#define DC_MEM_PROTECT_ID_CTRL_3                                                     0x980084C4
#define DC_MEM_PROTECT_ID_CTRL_3_reg_addr                                            "0xD80084C4"
#define DC_MEM_PROTECT_ID_CTRL_3_reg                                                 0xD80084C4
#define set_DC_MEM_PROTECT_ID_CTRL_3_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_ID_CTRL_3_reg)=data)
#define get_DC_MEM_PROTECT_ID_CTRL_3_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_ID_CTRL_3_reg))
#define DC_MEM_PROTECT_ID_CTRL_3_inst_adr                                            "0x0031"
#define DC_MEM_PROTECT_ID_CTRL_3_inst                                                0x0031
#define DC_MEM_PROTECT_ID_CTRL_3_scpu_tee_ro_protect_en_shift                        (28)
#define DC_MEM_PROTECT_ID_CTRL_3_scpu_tee_ro_protect_en_mask                         (0xF0000000)
#define DC_MEM_PROTECT_ID_CTRL_3_scpu_tee_ro_protect_en(data)                        (0xF0000000&((data)<<28))
#define DC_MEM_PROTECT_ID_CTRL_3_scpu_tee_ro_protect_en_src(data)                    ((0xF0000000&(data))>>28)
#define DC_MEM_PROTECT_ID_CTRL_3_get_scpu_tee_ro_protect_en(data)                    ((0xF0000000&(data))>>28)
#define DC_MEM_PROTECT_ID_CTRL_3_acpu_ro_protect_en_shift                            (24)
#define DC_MEM_PROTECT_ID_CTRL_3_acpu_ro_protect_en_mask                             (0x0F000000)
#define DC_MEM_PROTECT_ID_CTRL_3_acpu_ro_protect_en(data)                            (0x0F000000&((data)<<24))
#define DC_MEM_PROTECT_ID_CTRL_3_acpu_ro_protect_en_src(data)                        ((0x0F000000&(data))>>24)
#define DC_MEM_PROTECT_ID_CTRL_3_get_acpu_ro_protect_en(data)                        ((0x0F000000&(data))>>24)
#define DC_MEM_PROTECT_ID_CTRL_3_video_ro_protect_en_shift                           (20)
#define DC_MEM_PROTECT_ID_CTRL_3_video_ro_protect_en_mask                            (0x00F00000)
#define DC_MEM_PROTECT_ID_CTRL_3_video_ro_protect_en(data)                           (0x00F00000&((data)<<20))
#define DC_MEM_PROTECT_ID_CTRL_3_video_ro_protect_en_src(data)                       ((0x00F00000&(data))>>20)
#define DC_MEM_PROTECT_ID_CTRL_3_get_video_ro_protect_en(data)                       ((0x00F00000&(data))>>20)
#define DC_MEM_PROTECT_ID_CTRL_3_audio_ro_protect_en_shift                           (16)
#define DC_MEM_PROTECT_ID_CTRL_3_audio_ro_protect_en_mask                            (0x000F0000)
#define DC_MEM_PROTECT_ID_CTRL_3_audio_ro_protect_en(data)                           (0x000F0000&((data)<<16))
#define DC_MEM_PROTECT_ID_CTRL_3_audio_ro_protect_en_src(data)                       ((0x000F0000&(data))>>16)
#define DC_MEM_PROTECT_ID_CTRL_3_get_audio_ro_protect_en(data)                       ((0x000F0000&(data))>>16)
#define DC_MEM_PROTECT_ID_CTRL_3_md_tee_ro_protect_en_shift                          (12)
#define DC_MEM_PROTECT_ID_CTRL_3_md_tee_ro_protect_en_mask                           (0x0000F000)
#define DC_MEM_PROTECT_ID_CTRL_3_md_tee_ro_protect_en(data)                          (0x0000F000&((data)<<12))
#define DC_MEM_PROTECT_ID_CTRL_3_md_tee_ro_protect_en_src(data)                      ((0x0000F000&(data))>>12)
#define DC_MEM_PROTECT_ID_CTRL_3_get_md_tee_ro_protect_en(data)                      ((0x0000F000&(data))>>12)
#define DC_MEM_PROTECT_ID_CTRL_3_cp_tee_ro_protect_en_shift                          (8)
#define DC_MEM_PROTECT_ID_CTRL_3_cp_tee_ro_protect_en_mask                           (0x00000F00)
#define DC_MEM_PROTECT_ID_CTRL_3_cp_tee_ro_protect_en(data)                          (0x00000F00&((data)<<8))
#define DC_MEM_PROTECT_ID_CTRL_3_cp_tee_ro_protect_en_src(data)                      ((0x00000F00&(data))>>8)
#define DC_MEM_PROTECT_ID_CTRL_3_get_cp_tee_ro_protect_en(data)                      ((0x00000F00&(data))>>8)
#define DC_MEM_PROTECT_ID_CTRL_3_vo_ro_protect_en_shift                              (4)
#define DC_MEM_PROTECT_ID_CTRL_3_vo_ro_protect_en_mask                               (0x000000F0)
#define DC_MEM_PROTECT_ID_CTRL_3_vo_ro_protect_en(data)                              (0x000000F0&((data)<<4))
#define DC_MEM_PROTECT_ID_CTRL_3_vo_ro_protect_en_src(data)                          ((0x000000F0&(data))>>4)
#define DC_MEM_PROTECT_ID_CTRL_3_get_vo_ro_protect_en(data)                          ((0x000000F0&(data))>>4)
#define DC_MEM_PROTECT_ID_CTRL_3_nf_tee_ro_protect_en_shift                          (0)
#define DC_MEM_PROTECT_ID_CTRL_3_nf_tee_ro_protect_en_mask                           (0x0000000F)
#define DC_MEM_PROTECT_ID_CTRL_3_nf_tee_ro_protect_en(data)                          (0x0000000F&((data)<<0))
#define DC_MEM_PROTECT_ID_CTRL_3_nf_tee_ro_protect_en_src(data)                      ((0x0000000F&(data))>>0)
#define DC_MEM_PROTECT_ID_CTRL_3_get_nf_tee_ro_protect_en(data)                      ((0x0000000F&(data))>>0)


#define DC_MEM_PROTECT_PICT_CTRL_0                                                   0x980084C8
#define DC_MEM_PROTECT_PICT_CTRL_0_reg_addr                                          "0xD80084C8"
#define DC_MEM_PROTECT_PICT_CTRL_0_reg                                               0xD80084C8
#define set_DC_MEM_PROTECT_PICT_CTRL_0_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_PICT_CTRL_0_reg)=data)
#define get_DC_MEM_PROTECT_PICT_CTRL_0_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_PICT_CTRL_0_reg))
#define DC_MEM_PROTECT_PICT_CTRL_0_inst_adr                                          "0x0032"
#define DC_MEM_PROTECT_PICT_CTRL_0_inst                                              0x0032
#define DC_MEM_PROTECT_PICT_CTRL_0_blk_pict_set_chk_en_0_shift                       (0)
#define DC_MEM_PROTECT_PICT_CTRL_0_blk_pict_set_chk_en_0_mask                        (0xFFFFFFFF)
#define DC_MEM_PROTECT_PICT_CTRL_0_blk_pict_set_chk_en_0(data)                       (0xFFFFFFFF&((data)<<0))
#define DC_MEM_PROTECT_PICT_CTRL_0_blk_pict_set_chk_en_0_src(data)                   ((0xFFFFFFFF&(data))>>0)
#define DC_MEM_PROTECT_PICT_CTRL_0_get_blk_pict_set_chk_en_0(data)                   ((0xFFFFFFFF&(data))>>0)


#define DC_MEM_PROTECT_PICT_CTRL_1                                                   0x980084CC
#define DC_MEM_PROTECT_PICT_CTRL_1_reg_addr                                          "0xD80084CC"
#define DC_MEM_PROTECT_PICT_CTRL_1_reg                                               0xD80084CC
#define set_DC_MEM_PROTECT_PICT_CTRL_1_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_PICT_CTRL_1_reg)=data)
#define get_DC_MEM_PROTECT_PICT_CTRL_1_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_PICT_CTRL_1_reg))
#define DC_MEM_PROTECT_PICT_CTRL_1_inst_adr                                          "0x0033"
#define DC_MEM_PROTECT_PICT_CTRL_1_inst                                              0x0033
#define DC_MEM_PROTECT_PICT_CTRL_1_blk_pict_set_chk_en_1_shift                       (0)
#define DC_MEM_PROTECT_PICT_CTRL_1_blk_pict_set_chk_en_1_mask                        (0xFFFFFFFF)
#define DC_MEM_PROTECT_PICT_CTRL_1_blk_pict_set_chk_en_1(data)                       (0xFFFFFFFF&((data)<<0))
#define DC_MEM_PROTECT_PICT_CTRL_1_blk_pict_set_chk_en_1_src(data)                   ((0xFFFFFFFF&(data))>>0)
#define DC_MEM_PROTECT_PICT_CTRL_1_get_blk_pict_set_chk_en_1(data)                   ((0xFFFFFFFF&(data))>>0)


#define DC_MEM_PROTECT_ID_CTRL_4                                                     0x980084D0
#define DC_MEM_PROTECT_ID_CTRL_4_reg_addr                                            "0xD80084D0"
#define DC_MEM_PROTECT_ID_CTRL_4_reg                                                 0xD80084D0
#define set_DC_MEM_PROTECT_ID_CTRL_4_reg(data)   (*((volatile unsigned int*) DC_MEM_PROTECT_ID_CTRL_4_reg)=data)
#define get_DC_MEM_PROTECT_ID_CTRL_4_reg   (*((volatile unsigned int*) DC_MEM_PROTECT_ID_CTRL_4_reg))
#define DC_MEM_PROTECT_ID_CTRL_4_inst_adr                                            "0x0034"
#define DC_MEM_PROTECT_ID_CTRL_4_inst                                                0x0034
#define DC_MEM_PROTECT_ID_CTRL_4_tp_tee_ro_protect_en_shift                          (24)
#define DC_MEM_PROTECT_ID_CTRL_4_tp_tee_ro_protect_en_mask                           (0x0F000000)
#define DC_MEM_PROTECT_ID_CTRL_4_tp_tee_ro_protect_en(data)                          (0x0F000000&((data)<<24))
#define DC_MEM_PROTECT_ID_CTRL_4_tp_tee_ro_protect_en_src(data)                      ((0x0F000000&(data))>>24)
#define DC_MEM_PROTECT_ID_CTRL_4_get_tp_tee_ro_protect_en(data)                      ((0x0F000000&(data))>>24)
#define DC_MEM_PROTECT_ID_CTRL_4_tp_tee_blk_protect_en_shift                         (22)
#define DC_MEM_PROTECT_ID_CTRL_4_tp_tee_blk_protect_en_mask                          (0x00C00000)
#define DC_MEM_PROTECT_ID_CTRL_4_tp_tee_blk_protect_en(data)                         (0x00C00000&((data)<<22))
#define DC_MEM_PROTECT_ID_CTRL_4_tp_tee_blk_protect_en_src(data)                     ((0x00C00000&(data))>>22)
#define DC_MEM_PROTECT_ID_CTRL_4_get_tp_tee_blk_protect_en(data)                     ((0x00C00000&(data))>>22)
#define DC_MEM_PROTECT_ID_CTRL_4_tp_tee_protect_en_shift                             (14)
#define DC_MEM_PROTECT_ID_CTRL_4_tp_tee_protect_en_mask                              (0x003FC000)
#define DC_MEM_PROTECT_ID_CTRL_4_tp_tee_protect_en(data)                             (0x003FC000&((data)<<14))
#define DC_MEM_PROTECT_ID_CTRL_4_tp_tee_protect_en_src(data)                         ((0x003FC000&(data))>>14)
#define DC_MEM_PROTECT_ID_CTRL_4_get_tp_tee_protect_en(data)                         ((0x003FC000&(data))>>14)
#define DC_MEM_PROTECT_ID_CTRL_4_cr_tee_ro_protect_en_shift                          (10)
#define DC_MEM_PROTECT_ID_CTRL_4_cr_tee_ro_protect_en_mask                           (0x00003C00)
#define DC_MEM_PROTECT_ID_CTRL_4_cr_tee_ro_protect_en(data)                          (0x00003C00&((data)<<10))
#define DC_MEM_PROTECT_ID_CTRL_4_cr_tee_ro_protect_en_src(data)                      ((0x00003C00&(data))>>10)
#define DC_MEM_PROTECT_ID_CTRL_4_get_cr_tee_ro_protect_en(data)                      ((0x00003C00&(data))>>10)
#define DC_MEM_PROTECT_ID_CTRL_4_cr_tee_blk_protect_en_shift                         (8)
#define DC_MEM_PROTECT_ID_CTRL_4_cr_tee_blk_protect_en_mask                          (0x00000300)
#define DC_MEM_PROTECT_ID_CTRL_4_cr_tee_blk_protect_en(data)                         (0x00000300&((data)<<8))
#define DC_MEM_PROTECT_ID_CTRL_4_cr_tee_blk_protect_en_src(data)                     ((0x00000300&(data))>>8)
#define DC_MEM_PROTECT_ID_CTRL_4_get_cr_tee_blk_protect_en(data)                     ((0x00000300&(data))>>8)
#define DC_MEM_PROTECT_ID_CTRL_4_cr_tee_protect_en_shift                             (0)
#define DC_MEM_PROTECT_ID_CTRL_4_cr_tee_protect_en_mask                              (0x000000FF)
#define DC_MEM_PROTECT_ID_CTRL_4_cr_tee_protect_en(data)                             (0x000000FF&((data)<<0))
#define DC_MEM_PROTECT_ID_CTRL_4_cr_tee_protect_en_src(data)                         ((0x000000FF&(data))>>0)
#define DC_MEM_PROTECT_ID_CTRL_4_get_cr_tee_protect_en(data)                         ((0x000000FF&(data))>>0)


#define DC_SECURE_MISC                                                               0x98008740
#define DC_SECURE_MISC_reg_addr                                                      "0xD8008740"
#define DC_SECURE_MISC_reg                                                           0xD8008740
#define set_DC_SECURE_MISC_reg(data)   (*((volatile unsigned int*) DC_SECURE_MISC_reg)=data)
#define get_DC_SECURE_MISC_reg   (*((volatile unsigned int*) DC_SECURE_MISC_reg))
#define DC_SECURE_MISC_inst_adr                                                      "0x00D0"
#define DC_SECURE_MISC_inst                                                          0x00D0
#define DC_SECURE_MISC_dram_256MB_used_num_shift                                     (0)
#define DC_SECURE_MISC_dram_256MB_used_num_mask                                      (0x0000003F)
#define DC_SECURE_MISC_dram_256MB_used_num(data)                                     (0x0000003F&((data)<<0))
#define DC_SECURE_MISC_dram_256MB_used_num_src(data)                                 ((0x0000003F&(data))>>0)
#define DC_SECURE_MISC_get_dram_256MB_used_num(data)                                 ((0x0000003F&(data))>>0)


#define DC_MEM_INT                                                                   0x98008750
#define DC_MEM_INT_reg_addr                                                          "0xD8008750"
#define DC_MEM_INT_reg                                                               0xD8008750
#define set_DC_MEM_INT_reg(data)   (*((volatile unsigned int*) DC_MEM_INT_reg)=data)
#define get_DC_MEM_INT_reg   (*((volatile unsigned int*) DC_MEM_INT_reg))
#define DC_MEM_INT_inst_adr                                                          "0x00D4"
#define DC_MEM_INT_inst                                                              0x00D4
#define DC_MEM_INT_int_kcpu_key_up_en_shift                                          (30)
#define DC_MEM_INT_int_kcpu_key_up_en_mask                                           (0x40000000)
#define DC_MEM_INT_int_kcpu_key_up_en(data)                                          (0x40000000&((data)<<30))
#define DC_MEM_INT_int_kcpu_key_up_en_src(data)                                      ((0x40000000&(data))>>30)
#define DC_MEM_INT_get_int_kcpu_key_up_en(data)                                      ((0x40000000&(data))>>30)
#define DC_MEM_INT_int_kcpu_key_up_shift                                             (29)
#define DC_MEM_INT_int_kcpu_key_up_mask                                              (0x20000000)
#define DC_MEM_INT_int_kcpu_key_up(data)                                             (0x20000000&((data)<<29))
#define DC_MEM_INT_int_kcpu_key_up_src(data)                                         ((0x20000000&(data))>>29)
#define DC_MEM_INT_get_int_kcpu_key_up(data)                                         ((0x20000000&(data))>>29)
#define DC_MEM_INT_key_up_status_shift                                               (26)
#define DC_MEM_INT_key_up_status_mask                                                (0x1C000000)
#define DC_MEM_INT_key_up_status(data)                                               (0x1C000000&((data)<<26))
#define DC_MEM_INT_key_up_status_src(data)                                           ((0x1C000000&(data))>>26)
#define DC_MEM_INT_get_key_up_status(data)                                           ((0x1C000000&(data))>>26)
#define DC_MEM_INT_scramble_int_en_shift                                             (25)
#define DC_MEM_INT_scramble_int_en_mask                                              (0x02000000)
#define DC_MEM_INT_scramble_int_en(data)                                             (0x02000000&((data)<<25))
#define DC_MEM_INT_scramble_int_en_src(data)                                         ((0x02000000&(data))>>25)
#define DC_MEM_INT_get_scramble_int_en(data)                                         ((0x02000000&(data))>>25)
#define DC_MEM_INT_scramble_int_shift                                                (24)
#define DC_MEM_INT_scramble_int_mask                                                 (0x01000000)
#define DC_MEM_INT_scramble_int(data)                                                (0x01000000&((data)<<24))
#define DC_MEM_INT_scramble_int_src(data)                                            ((0x01000000&(data))>>24)
#define DC_MEM_INT_get_scramble_int(data)                                            ((0x01000000&(data))>>24)
#define DC_MEM_INT_scramble_id_shift                                                 (17)
#define DC_MEM_INT_scramble_id_mask                                                  (0x00FE0000)
#define DC_MEM_INT_scramble_id(data)                                                 (0x00FE0000&((data)<<17))
#define DC_MEM_INT_scramble_id_src(data)                                             ((0x00FE0000&(data))>>17)
#define DC_MEM_INT_get_scramble_id(data)                                             ((0x00FE0000&(data))>>17)
#define DC_MEM_INT_protect_int_en_shift                                              (16)
#define DC_MEM_INT_protect_int_en_mask                                               (0x00010000)
#define DC_MEM_INT_protect_int_en(data)                                              (0x00010000&((data)<<16))
#define DC_MEM_INT_protect_int_en_src(data)                                          ((0x00010000&(data))>>16)
#define DC_MEM_INT_get_protect_int_en(data)                                          ((0x00010000&(data))>>16)
#define DC_MEM_INT_protect_int_1_shift                                               (15)
#define DC_MEM_INT_protect_int_1_mask                                                (0x00008000)
#define DC_MEM_INT_protect_int_1(data)                                               (0x00008000&((data)<<15))
#define DC_MEM_INT_protect_int_1_src(data)                                           ((0x00008000&(data))>>15)
#define DC_MEM_INT_get_protect_int_1(data)                                           ((0x00008000&(data))>>15)
#define DC_MEM_INT_protect_int_0_shift                                               (14)
#define DC_MEM_INT_protect_int_0_mask                                                (0x00004000)
#define DC_MEM_INT_protect_int_0(data)                                               (0x00004000&((data)<<14))
#define DC_MEM_INT_protect_int_0_src(data)                                           ((0x00004000&(data))>>14)
#define DC_MEM_INT_get_protect_int_0(data)                                           ((0x00004000&(data))>>14)
#define DC_MEM_INT_protect_id_1_shift                                                (7)
#define DC_MEM_INT_protect_id_1_mask                                                 (0x00003F80)
#define DC_MEM_INT_protect_id_1(data)                                                (0x00003F80&((data)<<7))
#define DC_MEM_INT_protect_id_1_src(data)                                            ((0x00003F80&(data))>>7)
#define DC_MEM_INT_get_protect_id_1(data)                                            ((0x00003F80&(data))>>7)
#define DC_MEM_INT_protect_id_0_shift                                                (0)
#define DC_MEM_INT_protect_id_0_mask                                                 (0x0000007F)
#define DC_MEM_INT_protect_id_0(data)                                                (0x0000007F&((data)<<0))
#define DC_MEM_INT_protect_id_0_src(data)                                            ((0x0000007F&(data))>>0)
#define DC_MEM_INT_get_protect_id_0(data)                                            ((0x0000007F&(data))>>0)


#define DC_MEM_OTHER_INT                                                             0x98008754
#define DC_MEM_OTHER_INT_reg_addr                                                    "0xD8008754"
#define DC_MEM_OTHER_INT_reg                                                         0xD8008754
#define set_DC_MEM_OTHER_INT_reg(data)   (*((volatile unsigned int*) DC_MEM_OTHER_INT_reg)=data)
#define get_DC_MEM_OTHER_INT_reg   (*((volatile unsigned int*) DC_MEM_OTHER_INT_reg))
#define DC_MEM_OTHER_INT_inst_adr                                                    "0x00D5"
#define DC_MEM_OTHER_INT_inst                                                        0x00D5
#define DC_MEM_OTHER_INT_scramble_align_int_en_shift                                 (1)
#define DC_MEM_OTHER_INT_scramble_align_int_en_mask                                  (0x00000002)
#define DC_MEM_OTHER_INT_scramble_align_int_en(data)                                 (0x00000002&((data)<<1))
#define DC_MEM_OTHER_INT_scramble_align_int_en_src(data)                             ((0x00000002&(data))>>1)
#define DC_MEM_OTHER_INT_get_scramble_align_int_en(data)                             ((0x00000002&(data))>>1)
#define DC_MEM_OTHER_INT_scramble_align_int_shift                                    (0)
#define DC_MEM_OTHER_INT_scramble_align_int_mask                                     (0x00000001)
#define DC_MEM_OTHER_INT_scramble_align_int(data)                                    (0x00000001&((data)<<0))
#define DC_MEM_OTHER_INT_scramble_align_int_src(data)                                ((0x00000001&(data))>>0)
#define DC_MEM_OTHER_INT_get_scramble_align_int(data)                                ((0x00000001&(data))>>0)


#define DC_INT_SEL                                                                   0x98008758
#define DC_INT_SEL_reg_addr                                                          "0xD8008758"
#define DC_INT_SEL_reg                                                               0xD8008758
#define set_DC_INT_SEL_reg(data)   (*((volatile unsigned int*) DC_INT_SEL_reg)=data)
#define get_DC_INT_SEL_reg   (*((volatile unsigned int*) DC_INT_SEL_reg))
#define DC_INT_SEL_inst_adr                                                          "0x00D6"
#define DC_INT_SEL_inst                                                              0x00D6
#define DC_INT_SEL_cq_overflow_k_en_shift                                            (11)
#define DC_INT_SEL_cq_overflow_k_en_mask                                             (0x00000800)
#define DC_INT_SEL_cq_overflow_k_en(data)                                            (0x00000800&((data)<<11))
#define DC_INT_SEL_cq_overflow_k_en_src(data)                                        ((0x00000800&(data))>>11)
#define DC_INT_SEL_get_cq_overflow_k_en(data)                                        ((0x00000800&(data))>>11)
#define DC_INT_SEL_cq_overflow_s_en_shift                                            (10)
#define DC_INT_SEL_cq_overflow_s_en_mask                                             (0x00000400)
#define DC_INT_SEL_cq_overflow_s_en(data)                                            (0x00000400&((data)<<10))
#define DC_INT_SEL_cq_overflow_s_en_src(data)                                        ((0x00000400&(data))>>10)
#define DC_INT_SEL_get_cq_overflow_s_en(data)                                        ((0x00000400&(data))>>10)
#define DC_INT_SEL_wq_overflow_k_en_shift                                            (9)
#define DC_INT_SEL_wq_overflow_k_en_mask                                             (0x00000200)
#define DC_INT_SEL_wq_overflow_k_en(data)                                            (0x00000200&((data)<<9))
#define DC_INT_SEL_wq_overflow_k_en_src(data)                                        ((0x00000200&(data))>>9)
#define DC_INT_SEL_get_wq_overflow_k_en(data)                                        ((0x00000200&(data))>>9)
#define DC_INT_SEL_wq_overflow_s_en_shift                                            (8)
#define DC_INT_SEL_wq_overflow_s_en_mask                                             (0x00000100)
#define DC_INT_SEL_wq_overflow_s_en(data)                                            (0x00000100&((data)<<8))
#define DC_INT_SEL_wq_overflow_s_en_src(data)                                        ((0x00000100&(data))>>8)
#define DC_INT_SEL_get_wq_overflow_s_en(data)                                        ((0x00000100&(data))>>8)
#define DC_INT_SEL_blk_overflow_k_en_shift                                           (7)
#define DC_INT_SEL_blk_overflow_k_en_mask                                            (0x00000080)
#define DC_INT_SEL_blk_overflow_k_en(data)                                           (0x00000080&((data)<<7))
#define DC_INT_SEL_blk_overflow_k_en_src(data)                                       ((0x00000080&(data))>>7)
#define DC_INT_SEL_get_blk_overflow_k_en(data)                                       ((0x00000080&(data))>>7)
#define DC_INT_SEL_blk_overflow_s_en_shift                                           (6)
#define DC_INT_SEL_blk_overflow_s_en_mask                                            (0x00000040)
#define DC_INT_SEL_blk_overflow_s_en(data)                                           (0x00000040&((data)<<6))
#define DC_INT_SEL_blk_overflow_s_en_src(data)                                       ((0x00000040&(data))>>6)
#define DC_INT_SEL_get_blk_overflow_s_en(data)                                       ((0x00000040&(data))>>6)
#define DC_INT_SEL_blk_protect_k_en_shift                                            (5)
#define DC_INT_SEL_blk_protect_k_en_mask                                             (0x00000020)
#define DC_INT_SEL_blk_protect_k_en(data)                                            (0x00000020&((data)<<5))
#define DC_INT_SEL_blk_protect_k_en_src(data)                                        ((0x00000020&(data))>>5)
#define DC_INT_SEL_get_blk_protect_k_en(data)                                        ((0x00000020&(data))>>5)
#define DC_INT_SEL_blk_protect_s_en_shift                                            (4)
#define DC_INT_SEL_blk_protect_s_en_mask                                             (0x00000010)
#define DC_INT_SEL_blk_protect_s_en(data)                                            (0x00000010&((data)<<4))
#define DC_INT_SEL_blk_protect_s_en_src(data)                                        ((0x00000010&(data))>>4)
#define DC_INT_SEL_get_blk_protect_s_en(data)                                        ((0x00000010&(data))>>4)
#define DC_INT_SEL_error_k_en_shift                                                  (3)
#define DC_INT_SEL_error_k_en_mask                                                   (0x00000008)
#define DC_INT_SEL_error_k_en(data)                                                  (0x00000008&((data)<<3))
#define DC_INT_SEL_error_k_en_src(data)                                              ((0x00000008&(data))>>3)
#define DC_INT_SEL_get_error_k_en(data)                                              ((0x00000008&(data))>>3)
#define DC_INT_SEL_error_s_en_shift                                                  (2)
#define DC_INT_SEL_error_s_en_mask                                                   (0x00000004)
#define DC_INT_SEL_error_s_en(data)                                                  (0x00000004&((data)<<2))
#define DC_INT_SEL_error_s_en_src(data)                                              ((0x00000004&(data))>>2)
#define DC_INT_SEL_get_error_s_en(data)                                              ((0x00000004&(data))>>2)
#define DC_INT_SEL_mem_trash_k_en_shift                                              (1)
#define DC_INT_SEL_mem_trash_k_en_mask                                               (0x00000002)
#define DC_INT_SEL_mem_trash_k_en(data)                                              (0x00000002&((data)<<1))
#define DC_INT_SEL_mem_trash_k_en_src(data)                                          ((0x00000002&(data))>>1)
#define DC_INT_SEL_get_mem_trash_k_en(data)                                          ((0x00000002&(data))>>1)
#define DC_INT_SEL_mem_trash_s_en_shift                                              (0)
#define DC_INT_SEL_mem_trash_s_en_mask                                               (0x00000001)
#define DC_INT_SEL_mem_trash_s_en(data)                                              (0x00000001&((data)<<0))
#define DC_INT_SEL_mem_trash_s_en_src(data)                                          ((0x00000001&(data))>>0)
#define DC_INT_SEL_get_mem_trash_s_en(data)                                          ((0x00000001&(data))>>0)


#define DC_CTI_QUEUE_INFO                                                            0x9800875C
#define DC_CTI_QUEUE_INFO_reg_addr                                                   "0xD800875C"
#define DC_CTI_QUEUE_INFO_reg                                                        0xD800875C
#define set_DC_CTI_QUEUE_INFO_reg(data)   (*((volatile unsigned int*) DC_CTI_QUEUE_INFO_reg)=data)
#define get_DC_CTI_QUEUE_INFO_reg   (*((volatile unsigned int*) DC_CTI_QUEUE_INFO_reg))
#define DC_CTI_QUEUE_INFO_inst_adr                                                   "0x00D7"
#define DC_CTI_QUEUE_INFO_inst                                                       0x00D7
#define DC_CTI_QUEUE_INFO_sb2_cmd_overflow_1_shift                                   (31)
#define DC_CTI_QUEUE_INFO_sb2_cmd_overflow_1_mask                                    (0x80000000)
#define DC_CTI_QUEUE_INFO_sb2_cmd_overflow_1(data)                                   (0x80000000&((data)<<31))
#define DC_CTI_QUEUE_INFO_sb2_cmd_overflow_1_src(data)                               ((0x80000000&(data))>>31)
#define DC_CTI_QUEUE_INFO_get_sb2_cmd_overflow_1(data)                               ((0x80000000&(data))>>31)
#define DC_CTI_QUEUE_INFO_sb2_cmd_overflow_0_shift                                   (30)
#define DC_CTI_QUEUE_INFO_sb2_cmd_overflow_0_mask                                    (0x40000000)
#define DC_CTI_QUEUE_INFO_sb2_cmd_overflow_0(data)                                   (0x40000000&((data)<<30))
#define DC_CTI_QUEUE_INFO_sb2_cmd_overflow_0_src(data)                               ((0x40000000&(data))>>30)
#define DC_CTI_QUEUE_INFO_get_sb2_cmd_overflow_0(data)                               ((0x40000000&(data))>>30)
#define DC_CTI_QUEUE_INFO_scpu_cmd_overflow_1_shift                                  (29)
#define DC_CTI_QUEUE_INFO_scpu_cmd_overflow_1_mask                                   (0x20000000)
#define DC_CTI_QUEUE_INFO_scpu_cmd_overflow_1(data)                                  (0x20000000&((data)<<29))
#define DC_CTI_QUEUE_INFO_scpu_cmd_overflow_1_src(data)                              ((0x20000000&(data))>>29)
#define DC_CTI_QUEUE_INFO_get_scpu_cmd_overflow_1(data)                              ((0x20000000&(data))>>29)
#define DC_CTI_QUEUE_INFO_scpu_cmd_overflow_0_shift                                  (28)
#define DC_CTI_QUEUE_INFO_scpu_cmd_overflow_0_mask                                   (0x10000000)
#define DC_CTI_QUEUE_INFO_scpu_cmd_overflow_0(data)                                  (0x10000000&((data)<<28))
#define DC_CTI_QUEUE_INFO_scpu_cmd_overflow_0_src(data)                              ((0x10000000&(data))>>28)
#define DC_CTI_QUEUE_INFO_get_scpu_cmd_overflow_0(data)                              ((0x10000000&(data))>>28)
#define DC_CTI_QUEUE_INFO_sata_cmd_overflow_1_shift                                  (27)
#define DC_CTI_QUEUE_INFO_sata_cmd_overflow_1_mask                                   (0x08000000)
#define DC_CTI_QUEUE_INFO_sata_cmd_overflow_1(data)                                  (0x08000000&((data)<<27))
#define DC_CTI_QUEUE_INFO_sata_cmd_overflow_1_src(data)                              ((0x08000000&(data))>>27)
#define DC_CTI_QUEUE_INFO_get_sata_cmd_overflow_1(data)                              ((0x08000000&(data))>>27)
#define DC_CTI_QUEUE_INFO_sata_cmd_overflow_0_shift                                  (26)
#define DC_CTI_QUEUE_INFO_sata_cmd_overflow_0_mask                                   (0x04000000)
#define DC_CTI_QUEUE_INFO_sata_cmd_overflow_0(data)                                  (0x04000000&((data)<<26))
#define DC_CTI_QUEUE_INFO_sata_cmd_overflow_0_src(data)                              ((0x04000000&(data))>>26)
#define DC_CTI_QUEUE_INFO_get_sata_cmd_overflow_0(data)                              ((0x04000000&(data))>>26)
#define DC_CTI_QUEUE_INFO_se_cmd_overflow_1_shift                                    (25)
#define DC_CTI_QUEUE_INFO_se_cmd_overflow_1_mask                                     (0x02000000)
#define DC_CTI_QUEUE_INFO_se_cmd_overflow_1(data)                                    (0x02000000&((data)<<25))
#define DC_CTI_QUEUE_INFO_se_cmd_overflow_1_src(data)                                ((0x02000000&(data))>>25)
#define DC_CTI_QUEUE_INFO_get_se_cmd_overflow_1(data)                                ((0x02000000&(data))>>25)
#define DC_CTI_QUEUE_INFO_se_cmd_overflow_0_shift                                    (24)
#define DC_CTI_QUEUE_INFO_se_cmd_overflow_0_mask                                     (0x01000000)
#define DC_CTI_QUEUE_INFO_se_cmd_overflow_0(data)                                    (0x01000000&((data)<<24))
#define DC_CTI_QUEUE_INFO_se_cmd_overflow_0_src(data)                                ((0x01000000&(data))>>24)
#define DC_CTI_QUEUE_INFO_get_se_cmd_overflow_0(data)                                ((0x01000000&(data))>>24)
#define DC_CTI_QUEUE_INFO_ve3_cmd_overflow_1_shift                                   (23)
#define DC_CTI_QUEUE_INFO_ve3_cmd_overflow_1_mask                                    (0x00800000)
#define DC_CTI_QUEUE_INFO_ve3_cmd_overflow_1(data)                                   (0x00800000&((data)<<23))
#define DC_CTI_QUEUE_INFO_ve3_cmd_overflow_1_src(data)                               ((0x00800000&(data))>>23)
#define DC_CTI_QUEUE_INFO_get_ve3_cmd_overflow_1(data)                               ((0x00800000&(data))>>23)
#define DC_CTI_QUEUE_INFO_ve3_cmd_overflow_0_shift                                   (22)
#define DC_CTI_QUEUE_INFO_ve3_cmd_overflow_0_mask                                    (0x00400000)
#define DC_CTI_QUEUE_INFO_ve3_cmd_overflow_0(data)                                   (0x00400000&((data)<<22))
#define DC_CTI_QUEUE_INFO_ve3_cmd_overflow_0_src(data)                               ((0x00400000&(data))>>22)
#define DC_CTI_QUEUE_INFO_get_ve3_cmd_overflow_0(data)                               ((0x00400000&(data))>>22)
#define DC_CTI_QUEUE_INFO_ve2_cmd_overflow_1_shift                                   (21)
#define DC_CTI_QUEUE_INFO_ve2_cmd_overflow_1_mask                                    (0x00200000)
#define DC_CTI_QUEUE_INFO_ve2_cmd_overflow_1(data)                                   (0x00200000&((data)<<21))
#define DC_CTI_QUEUE_INFO_ve2_cmd_overflow_1_src(data)                               ((0x00200000&(data))>>21)
#define DC_CTI_QUEUE_INFO_get_ve2_cmd_overflow_1(data)                               ((0x00200000&(data))>>21)
#define DC_CTI_QUEUE_INFO_ve2_cmd_overflow_0_shift                                   (20)
#define DC_CTI_QUEUE_INFO_ve2_cmd_overflow_0_mask                                    (0x00100000)
#define DC_CTI_QUEUE_INFO_ve2_cmd_overflow_0(data)                                   (0x00100000&((data)<<20))
#define DC_CTI_QUEUE_INFO_ve2_cmd_overflow_0_src(data)                               ((0x00100000&(data))>>20)
#define DC_CTI_QUEUE_INFO_get_ve2_cmd_overflow_0(data)                               ((0x00100000&(data))>>20)
#define DC_CTI_QUEUE_INFO_ve1_cmd_overflow_1_shift                                   (19)
#define DC_CTI_QUEUE_INFO_ve1_cmd_overflow_1_mask                                    (0x00080000)
#define DC_CTI_QUEUE_INFO_ve1_cmd_overflow_1(data)                                   (0x00080000&((data)<<19))
#define DC_CTI_QUEUE_INFO_ve1_cmd_overflow_1_src(data)                               ((0x00080000&(data))>>19)
#define DC_CTI_QUEUE_INFO_get_ve1_cmd_overflow_1(data)                               ((0x00080000&(data))>>19)
#define DC_CTI_QUEUE_INFO_ve1_cmd_overflow_0_shift                                   (18)
#define DC_CTI_QUEUE_INFO_ve1_cmd_overflow_0_mask                                    (0x00040000)
#define DC_CTI_QUEUE_INFO_ve1_cmd_overflow_0(data)                                   (0x00040000&((data)<<18))
#define DC_CTI_QUEUE_INFO_ve1_cmd_overflow_0_src(data)                               ((0x00040000&(data))>>18)
#define DC_CTI_QUEUE_INFO_get_ve1_cmd_overflow_0(data)                               ((0x00040000&(data))>>18)
#define DC_CTI_QUEUE_INFO_gpu_cmd_overflow_1_shift                                   (17)
#define DC_CTI_QUEUE_INFO_gpu_cmd_overflow_1_mask                                    (0x00020000)
#define DC_CTI_QUEUE_INFO_gpu_cmd_overflow_1(data)                                   (0x00020000&((data)<<17))
#define DC_CTI_QUEUE_INFO_gpu_cmd_overflow_1_src(data)                               ((0x00020000&(data))>>17)
#define DC_CTI_QUEUE_INFO_get_gpu_cmd_overflow_1(data)                               ((0x00020000&(data))>>17)
#define DC_CTI_QUEUE_INFO_gpu_cmd_overflow_0_shift                                   (16)
#define DC_CTI_QUEUE_INFO_gpu_cmd_overflow_0_mask                                    (0x00010000)
#define DC_CTI_QUEUE_INFO_gpu_cmd_overflow_0(data)                                   (0x00010000&((data)<<16))
#define DC_CTI_QUEUE_INFO_gpu_cmd_overflow_0_src(data)                               ((0x00010000&(data))>>16)
#define DC_CTI_QUEUE_INFO_get_gpu_cmd_overflow_0(data)                               ((0x00010000&(data))>>16)
#define DC_CTI_QUEUE_INFO_sb2_data_overflow_1_shift                                  (15)
#define DC_CTI_QUEUE_INFO_sb2_data_overflow_1_mask                                   (0x00008000)
#define DC_CTI_QUEUE_INFO_sb2_data_overflow_1(data)                                  (0x00008000&((data)<<15))
#define DC_CTI_QUEUE_INFO_sb2_data_overflow_1_src(data)                              ((0x00008000&(data))>>15)
#define DC_CTI_QUEUE_INFO_get_sb2_data_overflow_1(data)                              ((0x00008000&(data))>>15)
#define DC_CTI_QUEUE_INFO_sb2_data_overflow_0_shift                                  (14)
#define DC_CTI_QUEUE_INFO_sb2_data_overflow_0_mask                                   (0x00004000)
#define DC_CTI_QUEUE_INFO_sb2_data_overflow_0(data)                                  (0x00004000&((data)<<14))
#define DC_CTI_QUEUE_INFO_sb2_data_overflow_0_src(data)                              ((0x00004000&(data))>>14)
#define DC_CTI_QUEUE_INFO_get_sb2_data_overflow_0(data)                              ((0x00004000&(data))>>14)
#define DC_CTI_QUEUE_INFO_scpu_data_overflow_1_shift                                 (13)
#define DC_CTI_QUEUE_INFO_scpu_data_overflow_1_mask                                  (0x00002000)
#define DC_CTI_QUEUE_INFO_scpu_data_overflow_1(data)                                 (0x00002000&((data)<<13))
#define DC_CTI_QUEUE_INFO_scpu_data_overflow_1_src(data)                             ((0x00002000&(data))>>13)
#define DC_CTI_QUEUE_INFO_get_scpu_data_overflow_1(data)                             ((0x00002000&(data))>>13)
#define DC_CTI_QUEUE_INFO_scpu_data_overflow_0_shift                                 (12)
#define DC_CTI_QUEUE_INFO_scpu_data_overflow_0_mask                                  (0x00001000)
#define DC_CTI_QUEUE_INFO_scpu_data_overflow_0(data)                                 (0x00001000&((data)<<12))
#define DC_CTI_QUEUE_INFO_scpu_data_overflow_0_src(data)                             ((0x00001000&(data))>>12)
#define DC_CTI_QUEUE_INFO_get_scpu_data_overflow_0(data)                             ((0x00001000&(data))>>12)
#define DC_CTI_QUEUE_INFO_sata_data_overflow_1_shift                                 (11)
#define DC_CTI_QUEUE_INFO_sata_data_overflow_1_mask                                  (0x00000800)
#define DC_CTI_QUEUE_INFO_sata_data_overflow_1(data)                                 (0x00000800&((data)<<11))
#define DC_CTI_QUEUE_INFO_sata_data_overflow_1_src(data)                             ((0x00000800&(data))>>11)
#define DC_CTI_QUEUE_INFO_get_sata_data_overflow_1(data)                             ((0x00000800&(data))>>11)
#define DC_CTI_QUEUE_INFO_sata_data_overflow_0_shift                                 (10)
#define DC_CTI_QUEUE_INFO_sata_data_overflow_0_mask                                  (0x00000400)
#define DC_CTI_QUEUE_INFO_sata_data_overflow_0(data)                                 (0x00000400&((data)<<10))
#define DC_CTI_QUEUE_INFO_sata_data_overflow_0_src(data)                             ((0x00000400&(data))>>10)
#define DC_CTI_QUEUE_INFO_get_sata_data_overflow_0(data)                             ((0x00000400&(data))>>10)
#define DC_CTI_QUEUE_INFO_se_data_overflow_1_shift                                   (9)
#define DC_CTI_QUEUE_INFO_se_data_overflow_1_mask                                    (0x00000200)
#define DC_CTI_QUEUE_INFO_se_data_overflow_1(data)                                   (0x00000200&((data)<<9))
#define DC_CTI_QUEUE_INFO_se_data_overflow_1_src(data)                               ((0x00000200&(data))>>9)
#define DC_CTI_QUEUE_INFO_get_se_data_overflow_1(data)                               ((0x00000200&(data))>>9)
#define DC_CTI_QUEUE_INFO_se_data_overflow_0_shift                                   (8)
#define DC_CTI_QUEUE_INFO_se_data_overflow_0_mask                                    (0x00000100)
#define DC_CTI_QUEUE_INFO_se_data_overflow_0(data)                                   (0x00000100&((data)<<8))
#define DC_CTI_QUEUE_INFO_se_data_overflow_0_src(data)                               ((0x00000100&(data))>>8)
#define DC_CTI_QUEUE_INFO_get_se_data_overflow_0(data)                               ((0x00000100&(data))>>8)
#define DC_CTI_QUEUE_INFO_ve3_data_overflow_1_shift                                  (7)
#define DC_CTI_QUEUE_INFO_ve3_data_overflow_1_mask                                   (0x00000080)
#define DC_CTI_QUEUE_INFO_ve3_data_overflow_1(data)                                  (0x00000080&((data)<<7))
#define DC_CTI_QUEUE_INFO_ve3_data_overflow_1_src(data)                              ((0x00000080&(data))>>7)
#define DC_CTI_QUEUE_INFO_get_ve3_data_overflow_1(data)                              ((0x00000080&(data))>>7)
#define DC_CTI_QUEUE_INFO_ve3_data_overflow_0_shift                                  (6)
#define DC_CTI_QUEUE_INFO_ve3_data_overflow_0_mask                                   (0x00000040)
#define DC_CTI_QUEUE_INFO_ve3_data_overflow_0(data)                                  (0x00000040&((data)<<6))
#define DC_CTI_QUEUE_INFO_ve3_data_overflow_0_src(data)                              ((0x00000040&(data))>>6)
#define DC_CTI_QUEUE_INFO_get_ve3_data_overflow_0(data)                              ((0x00000040&(data))>>6)
#define DC_CTI_QUEUE_INFO_ve2_data_overflow_1_shift                                  (5)
#define DC_CTI_QUEUE_INFO_ve2_data_overflow_1_mask                                   (0x00000020)
#define DC_CTI_QUEUE_INFO_ve2_data_overflow_1(data)                                  (0x00000020&((data)<<5))
#define DC_CTI_QUEUE_INFO_ve2_data_overflow_1_src(data)                              ((0x00000020&(data))>>5)
#define DC_CTI_QUEUE_INFO_get_ve2_data_overflow_1(data)                              ((0x00000020&(data))>>5)
#define DC_CTI_QUEUE_INFO_ve2_data_overflow_0_shift                                  (4)
#define DC_CTI_QUEUE_INFO_ve2_data_overflow_0_mask                                   (0x00000010)
#define DC_CTI_QUEUE_INFO_ve2_data_overflow_0(data)                                  (0x00000010&((data)<<4))
#define DC_CTI_QUEUE_INFO_ve2_data_overflow_0_src(data)                              ((0x00000010&(data))>>4)
#define DC_CTI_QUEUE_INFO_get_ve2_data_overflow_0(data)                              ((0x00000010&(data))>>4)
#define DC_CTI_QUEUE_INFO_ve1_data_overflow_1_shift                                  (3)
#define DC_CTI_QUEUE_INFO_ve1_data_overflow_1_mask                                   (0x00000008)
#define DC_CTI_QUEUE_INFO_ve1_data_overflow_1(data)                                  (0x00000008&((data)<<3))
#define DC_CTI_QUEUE_INFO_ve1_data_overflow_1_src(data)                              ((0x00000008&(data))>>3)
#define DC_CTI_QUEUE_INFO_get_ve1_data_overflow_1(data)                              ((0x00000008&(data))>>3)
#define DC_CTI_QUEUE_INFO_ve1_data_overflow_0_shift                                  (2)
#define DC_CTI_QUEUE_INFO_ve1_data_overflow_0_mask                                   (0x00000004)
#define DC_CTI_QUEUE_INFO_ve1_data_overflow_0(data)                                  (0x00000004&((data)<<2))
#define DC_CTI_QUEUE_INFO_ve1_data_overflow_0_src(data)                              ((0x00000004&(data))>>2)
#define DC_CTI_QUEUE_INFO_get_ve1_data_overflow_0(data)                              ((0x00000004&(data))>>2)
#define DC_CTI_QUEUE_INFO_gpu_data_overflow_1_shift                                  (1)
#define DC_CTI_QUEUE_INFO_gpu_data_overflow_1_mask                                   (0x00000002)
#define DC_CTI_QUEUE_INFO_gpu_data_overflow_1(data)                                  (0x00000002&((data)<<1))
#define DC_CTI_QUEUE_INFO_gpu_data_overflow_1_src(data)                              ((0x00000002&(data))>>1)
#define DC_CTI_QUEUE_INFO_get_gpu_data_overflow_1(data)                              ((0x00000002&(data))>>1)
#define DC_CTI_QUEUE_INFO_gpu_data_overflow_0_shift                                  (0)
#define DC_CTI_QUEUE_INFO_gpu_data_overflow_0_mask                                   (0x00000001)
#define DC_CTI_QUEUE_INFO_gpu_data_overflow_0(data)                                  (0x00000001&((data)<<0))
#define DC_CTI_QUEUE_INFO_gpu_data_overflow_0_src(data)                              ((0x00000001&(data))>>0)
#define DC_CTI_QUEUE_INFO_get_gpu_data_overflow_0(data)                              ((0x00000001&(data))>>0)


#endif
