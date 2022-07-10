/**************************************************************
// Spec Version                  : 0.6
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Module_Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/6/28 12:57:19
***************************************************************/


#ifndef _SC_WRAP_REG_H_INCLUDED_
#define _SC_WRAP_REG_H_INCLUDED_
#ifdef  _SC_WRAP_USE_STRUCT
typedef struct 
{
unsigned int     dy_icg_en_top:1;
unsigned int     reserved_0:13;
unsigned int     rbus_post_wr_en:1;
unsigned int     rbus1_sep:1;
unsigned int     reserved_1:4;
unsigned int     wr_outstand_num:4;
unsigned int     reserved_2:3;
unsigned int     rd_outstand_num:5;
}SC_WRAP_SCW_CTRL;

typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     dc_remote_wdata_num:6;
unsigned int     reserved_1:3;
unsigned int     dc_remote_cmd_num:5;
unsigned int     dbus_wr_conti_thresh:4;
unsigned int     dbus_rd_conti_thresh:4;
unsigned int     reserved_2:3;
unsigned int     dbus_rw_reorder_en:1;
unsigned int     reserved_3:2;
unsigned int     wcmd_bufable_sel:2;
}SC_WRAP_SCW_CTRL_DBUS;

typedef struct 
{
unsigned int     reserved_0:30;
unsigned int     loop_en_sw:1;
unsigned int     loop_en_src:1;
}SC_WRAP_SCW_TEST_LOOP_ENABLE;

typedef struct 
{
unsigned int     scpu_dbg_mode_en:1;
unsigned int     reserved_0:3;
unsigned int     scpu_dbg_mode_sel:4;
unsigned int     scpu_dbg_sel_peri:4;
unsigned int     scpu_dbg_sel_cp:4;
unsigned int     scpu_dbg_sel_dc:4;
unsigned int     scpu_dbg_sel_sb2:4;
unsigned int     scpu_dbg_sel_axi_slave:4;
unsigned int     scpu_dbg_sel_top:4;
}SC_WRAP_SCW_DEBUG_CTRL;

typedef struct 
{
unsigned int     data_0:32;
}SC_WRAP_SCW_DUMMY_0;

typedef struct 
{
unsigned int     data_1:32;
}SC_WRAP_SCW_DUMMY_1;

typedef struct 
{
unsigned int     TRACKCLK_SEL:16;
unsigned int     reserved_0:13;
unsigned int     TRACKCLK_DCLK_SEL:1;
unsigned int     reserved_1:2;
}SC_WRAP_SC_TRACKCLK_CTRL;

typedef struct 
{
unsigned int     dbg_start_addr_m1:26;
unsigned int     reserved_0:6;
}SC_WRAP_DBG_START;

typedef struct 
{
unsigned int     dbg_end_addr_m1:26;
unsigned int     reserved_0:6;
}SC_WRAP_DBG_END;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     write_en2:1;
unsigned int     dbg_wr_chk_m1:2;
unsigned int     write_en1:1;
unsigned int     dbg_en_m1:1;
}SC_WRAP_DBG_CTRL;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     scpu_errcmd_int_m1:1;
unsigned int     scpu_errcmd_int_en_m1:1;
unsigned int     scpu_int_m1:1;
unsigned int     scpu_int_en_m1:1;
unsigned int     scpu_neg_int_m1:1;
unsigned int     scpu_neg_int_en_m1:1;
unsigned int     write_data:1;
}SC_WRAP_DBG_INT;

typedef struct 
{
unsigned int     dbg_addr_m1:32;
}SC_WRAP_DBG_ADDR;

typedef struct 
{
unsigned int     reserved_0:20;
unsigned int     scpu_dbg_burst_length_m1:4;
unsigned int     reserved_1:1;
unsigned int     scpu_dbg_burst_size_m1:3;
unsigned int     scpu_dbg_burst_type_m1:2;
unsigned int     reserved_2:1;
unsigned int     scpu_dbg_write_m1:1;
}SC_WRAP_DBG_ADDR1;

#endif

#define SC_WRAP_SCW_CTRL                                                             0x9801D000
#define SC_WRAP_SCW_CTRL_reg_addr                                                    "0xD801D000"
#define SC_WRAP_SCW_CTRL_reg                                                         0xD801D000
#define set_SC_WRAP_SCW_CTRL_reg(data)   (*((volatile unsigned int*) SC_WRAP_SCW_CTRL_reg)=data)
#define get_SC_WRAP_SCW_CTRL_reg   (*((volatile unsigned int*) SC_WRAP_SCW_CTRL_reg))
#define SC_WRAP_SCW_CTRL_inst_adr                                                    "0x0000"
#define SC_WRAP_SCW_CTRL_inst                                                        0x0000
#define SC_WRAP_SCW_CTRL_dy_icg_en_top_shift                                         (31)
#define SC_WRAP_SCW_CTRL_dy_icg_en_top_mask                                          (0x80000000)
#define SC_WRAP_SCW_CTRL_dy_icg_en_top(data)                                         (0x80000000&((data)<<31))
#define SC_WRAP_SCW_CTRL_dy_icg_en_top_src(data)                                     ((0x80000000&(data))>>31)
#define SC_WRAP_SCW_CTRL_get_dy_icg_en_top(data)                                     ((0x80000000&(data))>>31)
#define SC_WRAP_SCW_CTRL_rbus_post_wr_en_shift                                       (17)
#define SC_WRAP_SCW_CTRL_rbus_post_wr_en_mask                                        (0x00020000)
#define SC_WRAP_SCW_CTRL_rbus_post_wr_en(data)                                       (0x00020000&((data)<<17))
#define SC_WRAP_SCW_CTRL_rbus_post_wr_en_src(data)                                   ((0x00020000&(data))>>17)
#define SC_WRAP_SCW_CTRL_get_rbus_post_wr_en(data)                                   ((0x00020000&(data))>>17)
#define SC_WRAP_SCW_CTRL_rbus1_sep_shift                                             (16)
#define SC_WRAP_SCW_CTRL_rbus1_sep_mask                                              (0x00010000)
#define SC_WRAP_SCW_CTRL_rbus1_sep(data)                                             (0x00010000&((data)<<16))
#define SC_WRAP_SCW_CTRL_rbus1_sep_src(data)                                         ((0x00010000&(data))>>16)
#define SC_WRAP_SCW_CTRL_get_rbus1_sep(data)                                         ((0x00010000&(data))>>16)
#define SC_WRAP_SCW_CTRL_wr_outstand_num_shift                                       (8)
#define SC_WRAP_SCW_CTRL_wr_outstand_num_mask                                        (0x00000F00)
#define SC_WRAP_SCW_CTRL_wr_outstand_num(data)                                       (0x00000F00&((data)<<8))
#define SC_WRAP_SCW_CTRL_wr_outstand_num_src(data)                                   ((0x00000F00&(data))>>8)
#define SC_WRAP_SCW_CTRL_get_wr_outstand_num(data)                                   ((0x00000F00&(data))>>8)
#define SC_WRAP_SCW_CTRL_rd_outstand_num_shift                                       (0)
#define SC_WRAP_SCW_CTRL_rd_outstand_num_mask                                        (0x0000001F)
#define SC_WRAP_SCW_CTRL_rd_outstand_num(data)                                       (0x0000001F&((data)<<0))
#define SC_WRAP_SCW_CTRL_rd_outstand_num_src(data)                                   ((0x0000001F&(data))>>0)
#define SC_WRAP_SCW_CTRL_get_rd_outstand_num(data)                                   ((0x0000001F&(data))>>0)


#define SC_WRAP_SCW_CTRL_DBUS                                                        0x9801D004
#define SC_WRAP_SCW_CTRL_DBUS_reg_addr                                               "0xD801D004"
#define SC_WRAP_SCW_CTRL_DBUS_reg                                                    0xD801D004
#define set_SC_WRAP_SCW_CTRL_DBUS_reg(data)   (*((volatile unsigned int*) SC_WRAP_SCW_CTRL_DBUS_reg)=data)
#define get_SC_WRAP_SCW_CTRL_DBUS_reg   (*((volatile unsigned int*) SC_WRAP_SCW_CTRL_DBUS_reg))
#define SC_WRAP_SCW_CTRL_DBUS_inst_adr                                               "0x0001"
#define SC_WRAP_SCW_CTRL_DBUS_inst                                                   0x0001
#define SC_WRAP_SCW_CTRL_DBUS_dc_remote_wdata_num_shift                              (24)
#define SC_WRAP_SCW_CTRL_DBUS_dc_remote_wdata_num_mask                               (0x3F000000)
#define SC_WRAP_SCW_CTRL_DBUS_dc_remote_wdata_num(data)                              (0x3F000000&((data)<<24))
#define SC_WRAP_SCW_CTRL_DBUS_dc_remote_wdata_num_src(data)                          ((0x3F000000&(data))>>24)
#define SC_WRAP_SCW_CTRL_DBUS_get_dc_remote_wdata_num(data)                          ((0x3F000000&(data))>>24)
#define SC_WRAP_SCW_CTRL_DBUS_dc_remote_cmd_num_shift                                (16)
#define SC_WRAP_SCW_CTRL_DBUS_dc_remote_cmd_num_mask                                 (0x001F0000)
#define SC_WRAP_SCW_CTRL_DBUS_dc_remote_cmd_num(data)                                (0x001F0000&((data)<<16))
#define SC_WRAP_SCW_CTRL_DBUS_dc_remote_cmd_num_src(data)                            ((0x001F0000&(data))>>16)
#define SC_WRAP_SCW_CTRL_DBUS_get_dc_remote_cmd_num(data)                            ((0x001F0000&(data))>>16)
#define SC_WRAP_SCW_CTRL_DBUS_dbus_wr_conti_thresh_shift                             (12)
#define SC_WRAP_SCW_CTRL_DBUS_dbus_wr_conti_thresh_mask                              (0x0000F000)
#define SC_WRAP_SCW_CTRL_DBUS_dbus_wr_conti_thresh(data)                             (0x0000F000&((data)<<12))
#define SC_WRAP_SCW_CTRL_DBUS_dbus_wr_conti_thresh_src(data)                         ((0x0000F000&(data))>>12)
#define SC_WRAP_SCW_CTRL_DBUS_get_dbus_wr_conti_thresh(data)                         ((0x0000F000&(data))>>12)
#define SC_WRAP_SCW_CTRL_DBUS_dbus_rd_conti_thresh_shift                             (8)
#define SC_WRAP_SCW_CTRL_DBUS_dbus_rd_conti_thresh_mask                              (0x00000F00)
#define SC_WRAP_SCW_CTRL_DBUS_dbus_rd_conti_thresh(data)                             (0x00000F00&((data)<<8))
#define SC_WRAP_SCW_CTRL_DBUS_dbus_rd_conti_thresh_src(data)                         ((0x00000F00&(data))>>8)
#define SC_WRAP_SCW_CTRL_DBUS_get_dbus_rd_conti_thresh(data)                         ((0x00000F00&(data))>>8)
#define SC_WRAP_SCW_CTRL_DBUS_dbus_rw_reorder_en_shift                               (4)
#define SC_WRAP_SCW_CTRL_DBUS_dbus_rw_reorder_en_mask                                (0x00000010)
#define SC_WRAP_SCW_CTRL_DBUS_dbus_rw_reorder_en(data)                               (0x00000010&((data)<<4))
#define SC_WRAP_SCW_CTRL_DBUS_dbus_rw_reorder_en_src(data)                           ((0x00000010&(data))>>4)
#define SC_WRAP_SCW_CTRL_DBUS_get_dbus_rw_reorder_en(data)                           ((0x00000010&(data))>>4)
#define SC_WRAP_SCW_CTRL_DBUS_wcmd_bufable_sel_shift                                 (0)
#define SC_WRAP_SCW_CTRL_DBUS_wcmd_bufable_sel_mask                                  (0x00000003)
#define SC_WRAP_SCW_CTRL_DBUS_wcmd_bufable_sel(data)                                 (0x00000003&((data)<<0))
#define SC_WRAP_SCW_CTRL_DBUS_wcmd_bufable_sel_src(data)                             ((0x00000003&(data))>>0)
#define SC_WRAP_SCW_CTRL_DBUS_get_wcmd_bufable_sel(data)                             ((0x00000003&(data))>>0)


#define SC_WRAP_SCW_TEST_LOOP_ENABLE                                                 0x9801D008
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_reg_addr                                        "0xD801D008"
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_reg                                             0xD801D008
#define set_SC_WRAP_SCW_TEST_LOOP_ENABLE_reg(data)   (*((volatile unsigned int*) SC_WRAP_SCW_TEST_LOOP_ENABLE_reg)=data)
#define get_SC_WRAP_SCW_TEST_LOOP_ENABLE_reg   (*((volatile unsigned int*) SC_WRAP_SCW_TEST_LOOP_ENABLE_reg))
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_inst_adr                                        "0x0002"
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_inst                                            0x0002
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_loop_en_sw_shift                                (1)
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_loop_en_sw_mask                                 (0x00000002)
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_loop_en_sw(data)                                (0x00000002&((data)<<1))
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_loop_en_sw_src(data)                            ((0x00000002&(data))>>1)
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_get_loop_en_sw(data)                            ((0x00000002&(data))>>1)
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_loop_en_src_shift                               (0)
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_loop_en_src_mask                                (0x00000001)
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_loop_en_src(data)                               (0x00000001&((data)<<0))
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_loop_en_src_src(data)                           ((0x00000001&(data))>>0)
#define SC_WRAP_SCW_TEST_LOOP_ENABLE_get_loop_en_src(data)                           ((0x00000001&(data))>>0)


#define SC_WRAP_SCW_DEBUG_CTRL                                                       0x9801D00C
#define SC_WRAP_SCW_DEBUG_CTRL_reg_addr                                              "0xD801D00C"
#define SC_WRAP_SCW_DEBUG_CTRL_reg                                                   0xD801D00C
#define set_SC_WRAP_SCW_DEBUG_CTRL_reg(data)   (*((volatile unsigned int*) SC_WRAP_SCW_DEBUG_CTRL_reg)=data)
#define get_SC_WRAP_SCW_DEBUG_CTRL_reg   (*((volatile unsigned int*) SC_WRAP_SCW_DEBUG_CTRL_reg))
#define SC_WRAP_SCW_DEBUG_CTRL_inst_adr                                              "0x0003"
#define SC_WRAP_SCW_DEBUG_CTRL_inst                                                  0x0003
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_mode_en_shift                                (31)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_mode_en_mask                                 (0x80000000)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_mode_en(data)                                (0x80000000&((data)<<31))
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_mode_en_src(data)                            ((0x80000000&(data))>>31)
#define SC_WRAP_SCW_DEBUG_CTRL_get_scpu_dbg_mode_en(data)                            ((0x80000000&(data))>>31)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_mode_sel_shift                               (24)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_mode_sel_mask                                (0x0F000000)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_mode_sel(data)                               (0x0F000000&((data)<<24))
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_mode_sel_src(data)                           ((0x0F000000&(data))>>24)
#define SC_WRAP_SCW_DEBUG_CTRL_get_scpu_dbg_mode_sel(data)                           ((0x0F000000&(data))>>24)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_peri_shift                               (20)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_peri_mask                                (0x00F00000)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_peri(data)                               (0x00F00000&((data)<<20))
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_peri_src(data)                           ((0x00F00000&(data))>>20)
#define SC_WRAP_SCW_DEBUG_CTRL_get_scpu_dbg_sel_peri(data)                           ((0x00F00000&(data))>>20)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_cp_shift                                 (16)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_cp_mask                                  (0x000F0000)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_cp(data)                                 (0x000F0000&((data)<<16))
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_cp_src(data)                             ((0x000F0000&(data))>>16)
#define SC_WRAP_SCW_DEBUG_CTRL_get_scpu_dbg_sel_cp(data)                             ((0x000F0000&(data))>>16)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_dc_shift                                 (12)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_dc_mask                                  (0x0000F000)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_dc(data)                                 (0x0000F000&((data)<<12))
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_dc_src(data)                             ((0x0000F000&(data))>>12)
#define SC_WRAP_SCW_DEBUG_CTRL_get_scpu_dbg_sel_dc(data)                             ((0x0000F000&(data))>>12)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_sb2_shift                                (8)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_sb2_mask                                 (0x00000F00)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_sb2(data)                                (0x00000F00&((data)<<8))
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_sb2_src(data)                            ((0x00000F00&(data))>>8)
#define SC_WRAP_SCW_DEBUG_CTRL_get_scpu_dbg_sel_sb2(data)                            ((0x00000F00&(data))>>8)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_axi_slave_shift                          (4)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_axi_slave_mask                           (0x000000F0)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_axi_slave(data)                          (0x000000F0&((data)<<4))
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_axi_slave_src(data)                      ((0x000000F0&(data))>>4)
#define SC_WRAP_SCW_DEBUG_CTRL_get_scpu_dbg_sel_axi_slave(data)                      ((0x000000F0&(data))>>4)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_top_shift                                (0)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_top_mask                                 (0x0000000F)
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_top(data)                                (0x0000000F&((data)<<0))
#define SC_WRAP_SCW_DEBUG_CTRL_scpu_dbg_sel_top_src(data)                            ((0x0000000F&(data))>>0)
#define SC_WRAP_SCW_DEBUG_CTRL_get_scpu_dbg_sel_top(data)                            ((0x0000000F&(data))>>0)


#define SC_WRAP_SCW_DUMMY_0_0                                                        0x9801D010
#define SC_WRAP_SCW_DUMMY_0_1                                                        0x9801D014
#define SC_WRAP_SCW_DUMMY_0_0_reg_addr                                               "0xD801D010"
#define SC_WRAP_SCW_DUMMY_0_1_reg_addr                                               "0xD801D014"
#define SC_WRAP_SCW_DUMMY_0_0_reg                                                    0xD801D010
#define SC_WRAP_SCW_DUMMY_0_1_reg                                                    0xD801D014
#define set_SC_WRAP_SCW_DUMMY_0_0_reg(data)   (*((volatile unsigned int*) SC_WRAP_SCW_DUMMY_0_0_reg)=data)
#define set_SC_WRAP_SCW_DUMMY_0_1_reg(data)   (*((volatile unsigned int*) SC_WRAP_SCW_DUMMY_0_1_reg)=data)
#define get_SC_WRAP_SCW_DUMMY_0_0_reg   (*((volatile unsigned int*) SC_WRAP_SCW_DUMMY_0_0_reg))
#define get_SC_WRAP_SCW_DUMMY_0_1_reg   (*((volatile unsigned int*) SC_WRAP_SCW_DUMMY_0_1_reg))
#define SC_WRAP_SCW_DUMMY_0_0_inst_adr                                               "0x0004"
#define SC_WRAP_SCW_DUMMY_0_1_inst_adr                                               "0x0005"
#define SC_WRAP_SCW_DUMMY_0_0_inst                                                   0x0004
#define SC_WRAP_SCW_DUMMY_0_1_inst                                                   0x0005
#define SC_WRAP_SCW_DUMMY_0_data_0_shift                                             (0)
#define SC_WRAP_SCW_DUMMY_0_data_0_mask                                              (0xFFFFFFFF)
#define SC_WRAP_SCW_DUMMY_0_data_0(data)                                             (0xFFFFFFFF&((data)<<0))
#define SC_WRAP_SCW_DUMMY_0_data_0_src(data)                                         ((0xFFFFFFFF&(data))>>0)
#define SC_WRAP_SCW_DUMMY_0_get_data_0(data)                                         ((0xFFFFFFFF&(data))>>0)


#define SC_WRAP_SCW_DUMMY_1_0                                                        0x9801D018
#define SC_WRAP_SCW_DUMMY_1_1                                                        0x9801D01C
#define SC_WRAP_SCW_DUMMY_1_0_reg_addr                                               "0xD801D018"
#define SC_WRAP_SCW_DUMMY_1_1_reg_addr                                               "0xD801D01C"
#define SC_WRAP_SCW_DUMMY_1_0_reg                                                    0xD801D018
#define SC_WRAP_SCW_DUMMY_1_1_reg                                                    0xD801D01C
#define set_SC_WRAP_SCW_DUMMY_1_0_reg(data)   (*((volatile unsigned int*) SC_WRAP_SCW_DUMMY_1_0_reg)=data)
#define set_SC_WRAP_SCW_DUMMY_1_1_reg(data)   (*((volatile unsigned int*) SC_WRAP_SCW_DUMMY_1_1_reg)=data)
#define get_SC_WRAP_SCW_DUMMY_1_0_reg   (*((volatile unsigned int*) SC_WRAP_SCW_DUMMY_1_0_reg))
#define get_SC_WRAP_SCW_DUMMY_1_1_reg   (*((volatile unsigned int*) SC_WRAP_SCW_DUMMY_1_1_reg))
#define SC_WRAP_SCW_DUMMY_1_0_inst_adr                                               "0x0006"
#define SC_WRAP_SCW_DUMMY_1_1_inst_adr                                               "0x0007"
#define SC_WRAP_SCW_DUMMY_1_0_inst                                                   0x0006
#define SC_WRAP_SCW_DUMMY_1_1_inst                                                   0x0007
#define SC_WRAP_SCW_DUMMY_1_data_1_shift                                             (0)
#define SC_WRAP_SCW_DUMMY_1_data_1_mask                                              (0xFFFFFFFF)
#define SC_WRAP_SCW_DUMMY_1_data_1(data)                                             (0xFFFFFFFF&((data)<<0))
#define SC_WRAP_SCW_DUMMY_1_data_1_src(data)                                         ((0xFFFFFFFF&(data))>>0)
#define SC_WRAP_SCW_DUMMY_1_get_data_1(data)                                         ((0xFFFFFFFF&(data))>>0)


#define SC_WRAP_SC_TRACKCLK_CTRL                                                     0x9801D020
#define SC_WRAP_SC_TRACKCLK_CTRL_reg_addr                                            "0xD801D020"
#define SC_WRAP_SC_TRACKCLK_CTRL_reg                                                 0xD801D020
#define set_SC_WRAP_SC_TRACKCLK_CTRL_reg(data)   (*((volatile unsigned int*) SC_WRAP_SC_TRACKCLK_CTRL_reg)=data)
#define get_SC_WRAP_SC_TRACKCLK_CTRL_reg   (*((volatile unsigned int*) SC_WRAP_SC_TRACKCLK_CTRL_reg))
#define SC_WRAP_SC_TRACKCLK_CTRL_inst_adr                                            "0x0008"
#define SC_WRAP_SC_TRACKCLK_CTRL_inst                                                0x0008
#define SC_WRAP_SC_TRACKCLK_CTRL_TRACKCLK_SEL_shift                                  (16)
#define SC_WRAP_SC_TRACKCLK_CTRL_TRACKCLK_SEL_mask                                   (0xFFFF0000)
#define SC_WRAP_SC_TRACKCLK_CTRL_TRACKCLK_SEL(data)                                  (0xFFFF0000&((data)<<16))
#define SC_WRAP_SC_TRACKCLK_CTRL_TRACKCLK_SEL_src(data)                              ((0xFFFF0000&(data))>>16)
#define SC_WRAP_SC_TRACKCLK_CTRL_get_TRACKCLK_SEL(data)                              ((0xFFFF0000&(data))>>16)
#define SC_WRAP_SC_TRACKCLK_CTRL_TRACKCLK_DCLK_SEL_shift                             (2)
#define SC_WRAP_SC_TRACKCLK_CTRL_TRACKCLK_DCLK_SEL_mask                              (0x00000004)
#define SC_WRAP_SC_TRACKCLK_CTRL_TRACKCLK_DCLK_SEL(data)                             (0x00000004&((data)<<2))
#define SC_WRAP_SC_TRACKCLK_CTRL_TRACKCLK_DCLK_SEL_src(data)                         ((0x00000004&(data))>>2)
#define SC_WRAP_SC_TRACKCLK_CTRL_get_TRACKCLK_DCLK_SEL(data)                         ((0x00000004&(data))>>2)


#define SC_WRAP_DBG_START_0                                                          0x9801D200
#define SC_WRAP_DBG_START_1                                                          0x9801D204
#define SC_WRAP_DBG_START_2                                                          0x9801D208
#define SC_WRAP_DBG_START_3                                                          0x9801D20C
#define SC_WRAP_DBG_START_0_reg_addr                                                 "0xD801D200"
#define SC_WRAP_DBG_START_1_reg_addr                                                 "0xD801D204"
#define SC_WRAP_DBG_START_2_reg_addr                                                 "0xD801D208"
#define SC_WRAP_DBG_START_3_reg_addr                                                 "0xD801D20C"
#define SC_WRAP_DBG_START_0_reg                                                      0xD801D200
#define SC_WRAP_DBG_START_1_reg                                                      0xD801D204
#define SC_WRAP_DBG_START_2_reg                                                      0xD801D208
#define SC_WRAP_DBG_START_3_reg                                                      0xD801D20C
#define set_SC_WRAP_DBG_START_0_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_START_0_reg)=data)
#define set_SC_WRAP_DBG_START_1_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_START_1_reg)=data)
#define set_SC_WRAP_DBG_START_2_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_START_2_reg)=data)
#define set_SC_WRAP_DBG_START_3_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_START_3_reg)=data)
#define get_SC_WRAP_DBG_START_0_reg   (*((volatile unsigned int*) SC_WRAP_DBG_START_0_reg))
#define get_SC_WRAP_DBG_START_1_reg   (*((volatile unsigned int*) SC_WRAP_DBG_START_1_reg))
#define get_SC_WRAP_DBG_START_2_reg   (*((volatile unsigned int*) SC_WRAP_DBG_START_2_reg))
#define get_SC_WRAP_DBG_START_3_reg   (*((volatile unsigned int*) SC_WRAP_DBG_START_3_reg))
#define SC_WRAP_DBG_START_0_inst_adr                                                 "0x0080"
#define SC_WRAP_DBG_START_1_inst_adr                                                 "0x0081"
#define SC_WRAP_DBG_START_2_inst_adr                                                 "0x0082"
#define SC_WRAP_DBG_START_3_inst_adr                                                 "0x0083"
#define SC_WRAP_DBG_START_0_inst                                                     0x0080
#define SC_WRAP_DBG_START_1_inst                                                     0x0081
#define SC_WRAP_DBG_START_2_inst                                                     0x0082
#define SC_WRAP_DBG_START_3_inst                                                     0x0083
#define SC_WRAP_DBG_START_dbg_start_addr_m1_shift                                    (6)
#define SC_WRAP_DBG_START_dbg_start_addr_m1_mask                                     (0xFFFFFFC0)
#define SC_WRAP_DBG_START_dbg_start_addr_m1(data)                                    (0xFFFFFFC0&((data)<<6))
#define SC_WRAP_DBG_START_dbg_start_addr_m1_src(data)                                ((0xFFFFFFC0&(data))>>6)
#define SC_WRAP_DBG_START_get_dbg_start_addr_m1(data)                                ((0xFFFFFFC0&(data))>>6)


#define SC_WRAP_DBG_END_0                                                            0x9801D210
#define SC_WRAP_DBG_END_1                                                            0x9801D214
#define SC_WRAP_DBG_END_2                                                            0x9801D218
#define SC_WRAP_DBG_END_3                                                            0x9801D21C
#define SC_WRAP_DBG_END_0_reg_addr                                                   "0xD801D210"
#define SC_WRAP_DBG_END_1_reg_addr                                                   "0xD801D214"
#define SC_WRAP_DBG_END_2_reg_addr                                                   "0xD801D218"
#define SC_WRAP_DBG_END_3_reg_addr                                                   "0xD801D21C"
#define SC_WRAP_DBG_END_0_reg                                                        0xD801D210
#define SC_WRAP_DBG_END_1_reg                                                        0xD801D214
#define SC_WRAP_DBG_END_2_reg                                                        0xD801D218
#define SC_WRAP_DBG_END_3_reg                                                        0xD801D21C
#define set_SC_WRAP_DBG_END_0_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_END_0_reg)=data)
#define set_SC_WRAP_DBG_END_1_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_END_1_reg)=data)
#define set_SC_WRAP_DBG_END_2_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_END_2_reg)=data)
#define set_SC_WRAP_DBG_END_3_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_END_3_reg)=data)
#define get_SC_WRAP_DBG_END_0_reg   (*((volatile unsigned int*) SC_WRAP_DBG_END_0_reg))
#define get_SC_WRAP_DBG_END_1_reg   (*((volatile unsigned int*) SC_WRAP_DBG_END_1_reg))
#define get_SC_WRAP_DBG_END_2_reg   (*((volatile unsigned int*) SC_WRAP_DBG_END_2_reg))
#define get_SC_WRAP_DBG_END_3_reg   (*((volatile unsigned int*) SC_WRAP_DBG_END_3_reg))
#define SC_WRAP_DBG_END_0_inst_adr                                                   "0x0084"
#define SC_WRAP_DBG_END_1_inst_adr                                                   "0x0085"
#define SC_WRAP_DBG_END_2_inst_adr                                                   "0x0086"
#define SC_WRAP_DBG_END_3_inst_adr                                                   "0x0087"
#define SC_WRAP_DBG_END_0_inst                                                       0x0084
#define SC_WRAP_DBG_END_1_inst                                                       0x0085
#define SC_WRAP_DBG_END_2_inst                                                       0x0086
#define SC_WRAP_DBG_END_3_inst                                                       0x0087
#define SC_WRAP_DBG_END_dbg_end_addr_m1_shift                                        (6)
#define SC_WRAP_DBG_END_dbg_end_addr_m1_mask                                         (0xFFFFFFC0)
#define SC_WRAP_DBG_END_dbg_end_addr_m1(data)                                        (0xFFFFFFC0&((data)<<6))
#define SC_WRAP_DBG_END_dbg_end_addr_m1_src(data)                                    ((0xFFFFFFC0&(data))>>6)
#define SC_WRAP_DBG_END_get_dbg_end_addr_m1(data)                                    ((0xFFFFFFC0&(data))>>6)


#define SC_WRAP_DBG_CTRL_0                                                           0x9801D220
#define SC_WRAP_DBG_CTRL_1                                                           0x9801D224
#define SC_WRAP_DBG_CTRL_2                                                           0x9801D228
#define SC_WRAP_DBG_CTRL_3                                                           0x9801D22C
#define SC_WRAP_DBG_CTRL_0_reg_addr                                                  "0xD801D220"
#define SC_WRAP_DBG_CTRL_1_reg_addr                                                  "0xD801D224"
#define SC_WRAP_DBG_CTRL_2_reg_addr                                                  "0xD801D228"
#define SC_WRAP_DBG_CTRL_3_reg_addr                                                  "0xD801D22C"
#define SC_WRAP_DBG_CTRL_0_reg                                                       0xD801D220
#define SC_WRAP_DBG_CTRL_1_reg                                                       0xD801D224
#define SC_WRAP_DBG_CTRL_2_reg                                                       0xD801D228
#define SC_WRAP_DBG_CTRL_3_reg                                                       0xD801D22C
#define set_SC_WRAP_DBG_CTRL_0_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_CTRL_0_reg)=data)
#define set_SC_WRAP_DBG_CTRL_1_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_CTRL_1_reg)=data)
#define set_SC_WRAP_DBG_CTRL_2_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_CTRL_2_reg)=data)
#define set_SC_WRAP_DBG_CTRL_3_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_CTRL_3_reg)=data)
#define get_SC_WRAP_DBG_CTRL_0_reg   (*((volatile unsigned int*) SC_WRAP_DBG_CTRL_0_reg))
#define get_SC_WRAP_DBG_CTRL_1_reg   (*((volatile unsigned int*) SC_WRAP_DBG_CTRL_1_reg))
#define get_SC_WRAP_DBG_CTRL_2_reg   (*((volatile unsigned int*) SC_WRAP_DBG_CTRL_2_reg))
#define get_SC_WRAP_DBG_CTRL_3_reg   (*((volatile unsigned int*) SC_WRAP_DBG_CTRL_3_reg))
#define SC_WRAP_DBG_CTRL_0_inst_adr                                                  "0x0088"
#define SC_WRAP_DBG_CTRL_1_inst_adr                                                  "0x0089"
#define SC_WRAP_DBG_CTRL_2_inst_adr                                                  "0x008A"
#define SC_WRAP_DBG_CTRL_3_inst_adr                                                  "0x008B"
#define SC_WRAP_DBG_CTRL_0_inst                                                      0x0088
#define SC_WRAP_DBG_CTRL_1_inst                                                      0x0089
#define SC_WRAP_DBG_CTRL_2_inst                                                      0x008A
#define SC_WRAP_DBG_CTRL_3_inst                                                      0x008B
#define SC_WRAP_DBG_CTRL_write_en2_shift                                             (4)
#define SC_WRAP_DBG_CTRL_write_en2_mask                                              (0x00000010)
#define SC_WRAP_DBG_CTRL_write_en2(data)                                             (0x00000010&((data)<<4))
#define SC_WRAP_DBG_CTRL_write_en2_src(data)                                         ((0x00000010&(data))>>4)
#define SC_WRAP_DBG_CTRL_get_write_en2(data)                                         ((0x00000010&(data))>>4)
#define SC_WRAP_DBG_CTRL_dbg_wr_chk_m1_shift                                         (2)
#define SC_WRAP_DBG_CTRL_dbg_wr_chk_m1_mask                                          (0x0000000C)
#define SC_WRAP_DBG_CTRL_dbg_wr_chk_m1(data)                                         (0x0000000C&((data)<<2))
#define SC_WRAP_DBG_CTRL_dbg_wr_chk_m1_src(data)                                     ((0x0000000C&(data))>>2)
#define SC_WRAP_DBG_CTRL_get_dbg_wr_chk_m1(data)                                     ((0x0000000C&(data))>>2)
#define SC_WRAP_DBG_CTRL_write_en1_shift                                             (1)
#define SC_WRAP_DBG_CTRL_write_en1_mask                                              (0x00000002)
#define SC_WRAP_DBG_CTRL_write_en1(data)                                             (0x00000002&((data)<<1))
#define SC_WRAP_DBG_CTRL_write_en1_src(data)                                         ((0x00000002&(data))>>1)
#define SC_WRAP_DBG_CTRL_get_write_en1(data)                                         ((0x00000002&(data))>>1)
#define SC_WRAP_DBG_CTRL_dbg_en_m1_shift                                             (0)
#define SC_WRAP_DBG_CTRL_dbg_en_m1_mask                                              (0x00000001)
#define SC_WRAP_DBG_CTRL_dbg_en_m1(data)                                             (0x00000001&((data)<<0))
#define SC_WRAP_DBG_CTRL_dbg_en_m1_src(data)                                         ((0x00000001&(data))>>0)
#define SC_WRAP_DBG_CTRL_get_dbg_en_m1(data)                                         ((0x00000001&(data))>>0)


#define SC_WRAP_DBG_INT                                                              0x9801D230
#define SC_WRAP_DBG_INT_reg_addr                                                     "0xD801D230"
#define SC_WRAP_DBG_INT_reg                                                          0xD801D230
#define set_SC_WRAP_DBG_INT_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_INT_reg)=data)
#define get_SC_WRAP_DBG_INT_reg   (*((volatile unsigned int*) SC_WRAP_DBG_INT_reg))
#define SC_WRAP_DBG_INT_inst_adr                                                     "0x008C"
#define SC_WRAP_DBG_INT_inst                                                         0x008C
#define SC_WRAP_DBG_INT_scpu_errcmd_int_m1_shift                                     (6)
#define SC_WRAP_DBG_INT_scpu_errcmd_int_m1_mask                                      (0x00000040)
#define SC_WRAP_DBG_INT_scpu_errcmd_int_m1(data)                                     (0x00000040&((data)<<6))
#define SC_WRAP_DBG_INT_scpu_errcmd_int_m1_src(data)                                 ((0x00000040&(data))>>6)
#define SC_WRAP_DBG_INT_get_scpu_errcmd_int_m1(data)                                 ((0x00000040&(data))>>6)
#define SC_WRAP_DBG_INT_scpu_errcmd_int_en_m1_shift                                  (5)
#define SC_WRAP_DBG_INT_scpu_errcmd_int_en_m1_mask                                   (0x00000020)
#define SC_WRAP_DBG_INT_scpu_errcmd_int_en_m1(data)                                  (0x00000020&((data)<<5))
#define SC_WRAP_DBG_INT_scpu_errcmd_int_en_m1_src(data)                              ((0x00000020&(data))>>5)
#define SC_WRAP_DBG_INT_get_scpu_errcmd_int_en_m1(data)                              ((0x00000020&(data))>>5)
#define SC_WRAP_DBG_INT_scpu_int_m1_shift                                            (4)
#define SC_WRAP_DBG_INT_scpu_int_m1_mask                                             (0x00000010)
#define SC_WRAP_DBG_INT_scpu_int_m1(data)                                            (0x00000010&((data)<<4))
#define SC_WRAP_DBG_INT_scpu_int_m1_src(data)                                        ((0x00000010&(data))>>4)
#define SC_WRAP_DBG_INT_get_scpu_int_m1(data)                                        ((0x00000010&(data))>>4)
#define SC_WRAP_DBG_INT_scpu_int_en_m1_shift                                         (3)
#define SC_WRAP_DBG_INT_scpu_int_en_m1_mask                                          (0x00000008)
#define SC_WRAP_DBG_INT_scpu_int_en_m1(data)                                         (0x00000008&((data)<<3))
#define SC_WRAP_DBG_INT_scpu_int_en_m1_src(data)                                     ((0x00000008&(data))>>3)
#define SC_WRAP_DBG_INT_get_scpu_int_en_m1(data)                                     ((0x00000008&(data))>>3)
#define SC_WRAP_DBG_INT_scpu_neg_int_m1_shift                                        (2)
#define SC_WRAP_DBG_INT_scpu_neg_int_m1_mask                                         (0x00000004)
#define SC_WRAP_DBG_INT_scpu_neg_int_m1(data)                                        (0x00000004&((data)<<2))
#define SC_WRAP_DBG_INT_scpu_neg_int_m1_src(data)                                    ((0x00000004&(data))>>2)
#define SC_WRAP_DBG_INT_get_scpu_neg_int_m1(data)                                    ((0x00000004&(data))>>2)
#define SC_WRAP_DBG_INT_scpu_neg_int_en_m1_shift                                     (1)
#define SC_WRAP_DBG_INT_scpu_neg_int_en_m1_mask                                      (0x00000002)
#define SC_WRAP_DBG_INT_scpu_neg_int_en_m1(data)                                     (0x00000002&((data)<<1))
#define SC_WRAP_DBG_INT_scpu_neg_int_en_m1_src(data)                                 ((0x00000002&(data))>>1)
#define SC_WRAP_DBG_INT_get_scpu_neg_int_en_m1(data)                                 ((0x00000002&(data))>>1)
#define SC_WRAP_DBG_INT_write_data_shift                                             (0)
#define SC_WRAP_DBG_INT_write_data_mask                                              (0x00000001)
#define SC_WRAP_DBG_INT_write_data(data)                                             (0x00000001&((data)<<0))
#define SC_WRAP_DBG_INT_write_data_src(data)                                         ((0x00000001&(data))>>0)
#define SC_WRAP_DBG_INT_get_write_data(data)                                         ((0x00000001&(data))>>0)


#define SC_WRAP_DBG_ADDR                                                             0x9801D234
#define SC_WRAP_DBG_ADDR_reg_addr                                                    "0xD801D234"
#define SC_WRAP_DBG_ADDR_reg                                                         0xD801D234
#define set_SC_WRAP_DBG_ADDR_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_ADDR_reg)=data)
#define get_SC_WRAP_DBG_ADDR_reg   (*((volatile unsigned int*) SC_WRAP_DBG_ADDR_reg))
#define SC_WRAP_DBG_ADDR_inst_adr                                                    "0x008D"
#define SC_WRAP_DBG_ADDR_inst                                                        0x008D
#define SC_WRAP_DBG_ADDR_dbg_addr_m1_shift                                           (0)
#define SC_WRAP_DBG_ADDR_dbg_addr_m1_mask                                            (0xFFFFFFFF)
#define SC_WRAP_DBG_ADDR_dbg_addr_m1(data)                                           (0xFFFFFFFF&((data)<<0))
#define SC_WRAP_DBG_ADDR_dbg_addr_m1_src(data)                                       ((0xFFFFFFFF&(data))>>0)
#define SC_WRAP_DBG_ADDR_get_dbg_addr_m1(data)                                       ((0xFFFFFFFF&(data))>>0)


#define SC_WRAP_DBG_ADDR1                                                            0x9801D238
#define SC_WRAP_DBG_ADDR1_reg_addr                                                   "0xD801D238"
#define SC_WRAP_DBG_ADDR1_reg                                                        0xD801D238
#define set_SC_WRAP_DBG_ADDR1_reg(data)   (*((volatile unsigned int*) SC_WRAP_DBG_ADDR1_reg)=data)
#define get_SC_WRAP_DBG_ADDR1_reg   (*((volatile unsigned int*) SC_WRAP_DBG_ADDR1_reg))
#define SC_WRAP_DBG_ADDR1_inst_adr                                                   "0x008E"
#define SC_WRAP_DBG_ADDR1_inst                                                       0x008E
#define SC_WRAP_DBG_ADDR1_scpu_dbg_burst_length_m1_shift                             (8)
#define SC_WRAP_DBG_ADDR1_scpu_dbg_burst_length_m1_mask                              (0x00000F00)
#define SC_WRAP_DBG_ADDR1_scpu_dbg_burst_length_m1(data)                             (0x00000F00&((data)<<8))
#define SC_WRAP_DBG_ADDR1_scpu_dbg_burst_length_m1_src(data)                         ((0x00000F00&(data))>>8)
#define SC_WRAP_DBG_ADDR1_get_scpu_dbg_burst_length_m1(data)                         ((0x00000F00&(data))>>8)
#define SC_WRAP_DBG_ADDR1_scpu_dbg_burst_size_m1_shift                               (4)
#define SC_WRAP_DBG_ADDR1_scpu_dbg_burst_size_m1_mask                                (0x00000070)
#define SC_WRAP_DBG_ADDR1_scpu_dbg_burst_size_m1(data)                               (0x00000070&((data)<<4))
#define SC_WRAP_DBG_ADDR1_scpu_dbg_burst_size_m1_src(data)                           ((0x00000070&(data))>>4)
#define SC_WRAP_DBG_ADDR1_get_scpu_dbg_burst_size_m1(data)                           ((0x00000070&(data))>>4)
#define SC_WRAP_DBG_ADDR1_scpu_dbg_burst_type_m1_shift                               (2)
#define SC_WRAP_DBG_ADDR1_scpu_dbg_burst_type_m1_mask                                (0x0000000C)
#define SC_WRAP_DBG_ADDR1_scpu_dbg_burst_type_m1(data)                               (0x0000000C&((data)<<2))
#define SC_WRAP_DBG_ADDR1_scpu_dbg_burst_type_m1_src(data)                           ((0x0000000C&(data))>>2)
#define SC_WRAP_DBG_ADDR1_get_scpu_dbg_burst_type_m1(data)                           ((0x0000000C&(data))>>2)
#define SC_WRAP_DBG_ADDR1_scpu_dbg_write_m1_shift                                    (0)
#define SC_WRAP_DBG_ADDR1_scpu_dbg_write_m1_mask                                     (0x00000001)
#define SC_WRAP_DBG_ADDR1_scpu_dbg_write_m1(data)                                    (0x00000001&((data)<<0))
#define SC_WRAP_DBG_ADDR1_scpu_dbg_write_m1_src(data)                                ((0x00000001&(data))>>0)
#define SC_WRAP_DBG_ADDR1_get_scpu_dbg_write_m1(data)                                ((0x00000001&(data))>>0)


#endif
