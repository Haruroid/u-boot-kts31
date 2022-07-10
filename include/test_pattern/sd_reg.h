/**************************************************************
// Spec Version                  : 0.9
// Parser Version                : DVR_Parser_6.11(120105)
// CModelGen Version             : 5.1 2012.01.05
// Naming Rule                   :  Module_Register_Name
// Naming Rule                   : Module_Register_Name_reg
// Parse Option                  : Only Parse _op1
// Parse Address Region          : All Address Region 
// Decode bit number             : 12 bits
// Firmware Header Generate Date : 2015/6/10 11:50:54
***************************************************************/


#ifndef _SD_REG_H_INCLUDED_
#define _SD_REG_H_INCLUDED_
#ifdef  _SD_USE_STRUCT
typedef struct 
{
unsigned int     reserved_0:2;
unsigned int     dram_sa:30;
}SD_DMA_CTL1;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     dma_len:16;
}SD_DMA_CTL2;

typedef struct 
{
unsigned int     reserved_0:26;
unsigned int     dat64_sel:1;
unsigned int     rsp17_sel:1;
unsigned int     reserved_1:2;
unsigned int     ddr_wr:1;
unsigned int     dma_xfer:1;
}SD_DMA_CTL3;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     sys_clk_gate_ena:1;
unsigned int     reserved_1:1;
unsigned int     dma_sram_lp_ena:1;
unsigned int     dma_sram_rdy_num:4;
}SD_SYS_LOW_PWR;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     Dbus_endian_sel:1;
unsigned int     L4_gated_disable:1;
unsigned int     dma_rstn:1;
}SD_DMA_RST;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     Int4:1;
unsigned int     Int3:1;
unsigned int     Int2:1;
unsigned int     Int1:1;
unsigned int     write_data:1;
}SD_ISR;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     reserved_1:4;
unsigned int     Int4En:1;
unsigned int     Int3En:1;
unsigned int     Int2En:1;
unsigned int     Int1En:1;
unsigned int     write_data:1;
}SD_ISREN;

typedef struct 
{
unsigned int     dmy:32;
}SD_DUMMY_SYS;

typedef struct 
{
unsigned int     reserved_0:19;
unsigned int     write_enable4:1;
unsigned int     cr_dbg_sel:2;
unsigned int     write_enable3:1;
unsigned int     sel1:3;
unsigned int     write_enable2:1;
unsigned int     sel0:3;
unsigned int     write_enable1:1;
unsigned int     enable:1;
}SD_DBG;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     bist_cr_ppb_rme_1:1;
unsigned int     bist_cr_ppb_rm_1:4;
unsigned int     reserved_1:3;
unsigned int     bist_cr_ppb_rme_0:1;
unsigned int     bist_cr_ppb_rm_0:4;
unsigned int     bist_drf_test_resume:1;
unsigned int     bist_drf_mode:1;
unsigned int     bist_en:1;
unsigned int     bist_ls:1;
}SD_IP_BIST_CTL;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     bist_drf_start_pause:1;
unsigned int     bist_drf_fail_1:1;
unsigned int     bist_drf_fail_0:1;
unsigned int     bist_drf_done:1;
unsigned int     bist_1_fail:1;
unsigned int     bist_0_fail:1;
unsigned int     bist_done:1;
}SD_IP_BIST_STS;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     cr_bist2_rme_1:1;
unsigned int     cr_bist2_rm_1:4;
unsigned int     reserved_1:3;
unsigned int     cr_bist2_rme_0:1;
unsigned int     cr_bist2_rm_0:4;
unsigned int     cr_bist2_drf_test_resume:1;
unsigned int     cr_drf_bist2_mode:1;
unsigned int     cr_bist2_mode:1;
unsigned int     cr_bist2_ls:1;
}SD_BIST_CTL;

typedef struct 
{
unsigned int     reserved_0:10;
unsigned int     drf_bist2_fail_3:1;
unsigned int     drf_bist2_fail_2:1;
unsigned int     drf_bist2_fail_1:1;
unsigned int     drf_bist2_fail_0:1;
unsigned int     bist2_drf_start_pause:1;
unsigned int     drf_bist2_done:1;
unsigned int     reserved_1:11;
unsigned int     bist2_fail_3:1;
unsigned int     bist2_fail_2:1;
unsigned int     bist2_fail_1:1;
unsigned int     bist2_fail_0:1;
unsigned int     bist2_done:1;
}SD_BIST_STS;

typedef struct 
{
unsigned int     reserved_0:16;
unsigned int     asic_crc_dbgo_sel:8;
unsigned int     reserved_1:1;
unsigned int     crc_dbgo_sel:4;
unsigned int     ip_ea_flash:1;
unsigned int     crc_clk_disable_trig:1;
unsigned int     mcu_time_1_us:1;
}SD_IP_CTL;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     tune3318:1;
}SD_PAD_CTL;

typedef struct 
{
unsigned int     reserved_0:13;
unsigned int     sd30_sample_change:1;
unsigned int     sd30_push_change:1;
unsigned int     crc_clk_change:1;
unsigned int     reserved_1:2;
unsigned int     sd30_sample_clk_src:2;
unsigned int     reserved_2:2;
unsigned int     sd30_push_clk_src:2;
unsigned int     reserved_3:2;
unsigned int     crc_clk_src:2;
unsigned int     reserved_4:1;
unsigned int     clk_div:3;
}SD_CKGEN_CTL;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     bist_dbus_buf_rme:1;
unsigned int     bist_dbus_buf_rm:4;
unsigned int     bist_drf_test_resume:1;
unsigned int     bist_drf_mode:1;
unsigned int     bist_en:1;
unsigned int     bist_ls:1;
}SD_SDIO_BIST_CTL;

typedef struct 
{
unsigned int     reserved_0:25;
unsigned int     bist_drf_start_pause:1;
unsigned int     bist_drf_fail_1:1;
unsigned int     bist_drf_fail_0:1;
unsigned int     bist_drf_done:1;
unsigned int     bist_1_fail:1;
unsigned int     bist_0_fail:1;
unsigned int     bist_done:1;
}SD_SDIO_BIST_STS;

typedef struct 
{
unsigned int     reserved_0:23;
unsigned int     bist_ring_buf_rme_0:1;
unsigned int     bist_ring_buf_rm_0:4;
unsigned int     bist_drf_test_resume:1;
unsigned int     bist_drf_mode:1;
unsigned int     bist_en:1;
unsigned int     bist_ls:1;
}SD_SDIO_IP_BIST_CTL;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     bist_drf_start_pause:1;
unsigned int     bist_drf_fail:1;
unsigned int     bist_drf_done:1;
unsigned int     bist_fail:1;
unsigned int     bist_done:1;
}SD_SDIO_IP_BIST_STS;

typedef struct 
{
unsigned int     reserved_0:5;
unsigned int     sensor_clk_en:1;
unsigned int     speed_en:1;
unsigned int     daya_in:20;
unsigned int     wire_sel:1;
unsigned int     ro_sel:3;
unsigned int     rstn:1;
}SD_SPEED_SENSOR_CTRL;

typedef struct 
{
unsigned int     reserved_0:11;
unsigned int     count_out:20;
unsigned int     ready:1;
}SD_SPEED_SENSOR_OUT1;

typedef struct 
{
unsigned int     reserved_0:15;
unsigned int     dbgo:16;
unsigned int     wsort_go:1;
}SD_SPEED_SENSOR_OUT2;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     mcu_buf_access:2;
unsigned int     mcu_sel:1;
}SD_SRAM_CTL;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     Dbus_endian_sel:1;
unsigned int     L4_gated_disable:1;
unsigned int     suspend_n:1;
}SD_IP_CTL;

typedef struct 
{
unsigned int     reserved_0:22;
unsigned int     write_enable3:1;
unsigned int     sel1:3;
unsigned int     write_enable2:1;
unsigned int     sel0:3;
unsigned int     write_enable1:1;
unsigned int     enable:1;
}SD_DBG_1;

typedef struct 
{
unsigned int     reserved_0:29;
unsigned int     dbus_dbg_sel:3;
}SD_DBG_2;

typedef struct 
{
unsigned int     reserved_0:24;
unsigned int     ip_dbg_sel:8;
}SD_DBG_3;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     Int4:1;
unsigned int     Int3:1;
unsigned int     reserved_1:1;
unsigned int     Int1:1;
unsigned int     write_data:1;
}SD_ISR;

typedef struct 
{
unsigned int     reserved_0:27;
unsigned int     Int4En:1;
unsigned int     Int3En:1;
unsigned int     reserved_1:1;
unsigned int     Int1En:1;
unsigned int     write_data:1;
}SD_ISREN;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     tune3318:1;
}SD_PAD_CTL;

typedef struct 
{
unsigned int     reserved_0:13;
unsigned int     sd30_sample_change:1;
unsigned int     sd30_push_change:1;
unsigned int     crc_clk_change:1;
unsigned int     reserved_1:2;
unsigned int     sd30_sample_clk_src:2;
unsigned int     reserved_2:2;
unsigned int     sd30_push_clk_src:2;
unsigned int     reserved_3:2;
unsigned int     crc_clk_src:2;
unsigned int     reserved_4:1;
unsigned int     clk_div:3;
}SD_CKGEN_CTL;

typedef struct 
{
unsigned int     reserved_0:31;
unsigned int     dma_rstn:1;
}SD_DMA_RST;

typedef struct 
{
unsigned int     reserved_0:8;
unsigned int     dat_pad_pmos_drive:4;
unsigned int     dat_pad_nmos_drive:4;
unsigned int     cmd_pad_pmos_drive:4;
unsigned int     cmd_pad_nmos_drive:4;
unsigned int     clk_pad_pmos_drive:4;
unsigned int     clk_pad_nmos_drive:4;
}SD_PAD_DRIVE;

#endif

#define SD_DMA_CTL1                                                                  0x98010404
#define SD_DMA_CTL1_reg_addr                                                         "0xD8010404"
#define SD_DMA_CTL1_reg                                                              0xD8010404
#define set_SD_DMA_CTL1_reg(data)   (*((volatile unsigned int*) SD_DMA_CTL1_reg)=data)
#define get_SD_DMA_CTL1_reg   (*((volatile unsigned int*) SD_DMA_CTL1_reg))
#define SD_DMA_CTL1_inst_adr                                                         "0x0001"
#define SD_DMA_CTL1_inst                                                             0x0001
#define SD_DMA_CTL1_dram_sa_shift                                                    (0)
#define SD_DMA_CTL1_dram_sa_mask                                                     (0x3FFFFFFF)
#define SD_DMA_CTL1_dram_sa(data)                                                    (0x3FFFFFFF&((data)<<0))
#define SD_DMA_CTL1_dram_sa_src(data)                                                ((0x3FFFFFFF&(data))>>0)
#define SD_DMA_CTL1_get_dram_sa(data)                                                ((0x3FFFFFFF&(data))>>0)


#define SD_DMA_CTL2                                                                  0x98010408
#define SD_DMA_CTL2_reg_addr                                                         "0xD8010408"
#define SD_DMA_CTL2_reg                                                              0xD8010408
#define set_SD_DMA_CTL2_reg(data)   (*((volatile unsigned int*) SD_DMA_CTL2_reg)=data)
#define get_SD_DMA_CTL2_reg   (*((volatile unsigned int*) SD_DMA_CTL2_reg))
#define SD_DMA_CTL2_inst_adr                                                         "0x0002"
#define SD_DMA_CTL2_inst                                                             0x0002
#define SD_DMA_CTL2_dma_len_shift                                                    (0)
#define SD_DMA_CTL2_dma_len_mask                                                     (0x0000FFFF)
#define SD_DMA_CTL2_dma_len(data)                                                    (0x0000FFFF&((data)<<0))
#define SD_DMA_CTL2_dma_len_src(data)                                                ((0x0000FFFF&(data))>>0)
#define SD_DMA_CTL2_get_dma_len(data)                                                ((0x0000FFFF&(data))>>0)


#define SD_DMA_CTL3                                                                  0x9801040C
#define SD_DMA_CTL3_reg_addr                                                         "0xD801040C"
#define SD_DMA_CTL3_reg                                                              0xD801040C
#define set_SD_DMA_CTL3_reg(data)   (*((volatile unsigned int*) SD_DMA_CTL3_reg)=data)
#define get_SD_DMA_CTL3_reg   (*((volatile unsigned int*) SD_DMA_CTL3_reg))
#define SD_DMA_CTL3_inst_adr                                                         "0x0003"
#define SD_DMA_CTL3_inst                                                             0x0003
#define SD_DMA_CTL3_dat64_sel_shift                                                  (5)
#define SD_DMA_CTL3_dat64_sel_mask                                                   (0x00000020)
#define SD_DMA_CTL3_dat64_sel(data)                                                  (0x00000020&((data)<<5))
#define SD_DMA_CTL3_dat64_sel_src(data)                                              ((0x00000020&(data))>>5)
#define SD_DMA_CTL3_get_dat64_sel(data)                                              ((0x00000020&(data))>>5)
#define SD_DMA_CTL3_rsp17_sel_shift                                                  (4)
#define SD_DMA_CTL3_rsp17_sel_mask                                                   (0x00000010)
#define SD_DMA_CTL3_rsp17_sel(data)                                                  (0x00000010&((data)<<4))
#define SD_DMA_CTL3_rsp17_sel_src(data)                                              ((0x00000010&(data))>>4)
#define SD_DMA_CTL3_get_rsp17_sel(data)                                              ((0x00000010&(data))>>4)
#define SD_DMA_CTL3_ddr_wr_shift                                                     (1)
#define SD_DMA_CTL3_ddr_wr_mask                                                      (0x00000002)
#define SD_DMA_CTL3_ddr_wr(data)                                                     (0x00000002&((data)<<1))
#define SD_DMA_CTL3_ddr_wr_src(data)                                                 ((0x00000002&(data))>>1)
#define SD_DMA_CTL3_get_ddr_wr(data)                                                 ((0x00000002&(data))>>1)
#define SD_DMA_CTL3_dma_xfer_shift                                                   (0)
#define SD_DMA_CTL3_dma_xfer_mask                                                    (0x00000001)
#define SD_DMA_CTL3_dma_xfer(data)                                                   (0x00000001&((data)<<0))
#define SD_DMA_CTL3_dma_xfer_src(data)                                               ((0x00000001&(data))>>0)
#define SD_DMA_CTL3_get_dma_xfer(data)                                               ((0x00000001&(data))>>0)


#define SD_SYS_LOW_PWR                                                               0x98010410
#define SD_SYS_LOW_PWR_reg_addr                                                      "0xD8010410"
#define SD_SYS_LOW_PWR_reg                                                           0xD8010410
#define set_SD_SYS_LOW_PWR_reg(data)   (*((volatile unsigned int*) SD_SYS_LOW_PWR_reg)=data)
#define get_SD_SYS_LOW_PWR_reg   (*((volatile unsigned int*) SD_SYS_LOW_PWR_reg))
#define SD_SYS_LOW_PWR_inst_adr                                                      "0x0004"
#define SD_SYS_LOW_PWR_inst                                                          0x0004
#define SD_SYS_LOW_PWR_sys_clk_gate_ena_shift                                        (6)
#define SD_SYS_LOW_PWR_sys_clk_gate_ena_mask                                         (0x00000040)
#define SD_SYS_LOW_PWR_sys_clk_gate_ena(data)                                        (0x00000040&((data)<<6))
#define SD_SYS_LOW_PWR_sys_clk_gate_ena_src(data)                                    ((0x00000040&(data))>>6)
#define SD_SYS_LOW_PWR_get_sys_clk_gate_ena(data)                                    ((0x00000040&(data))>>6)
#define SD_SYS_LOW_PWR_dma_sram_lp_ena_shift                                         (4)
#define SD_SYS_LOW_PWR_dma_sram_lp_ena_mask                                          (0x00000010)
#define SD_SYS_LOW_PWR_dma_sram_lp_ena(data)                                         (0x00000010&((data)<<4))
#define SD_SYS_LOW_PWR_dma_sram_lp_ena_src(data)                                     ((0x00000010&(data))>>4)
#define SD_SYS_LOW_PWR_get_dma_sram_lp_ena(data)                                     ((0x00000010&(data))>>4)
#define SD_SYS_LOW_PWR_dma_sram_rdy_num_shift                                        (0)
#define SD_SYS_LOW_PWR_dma_sram_rdy_num_mask                                         (0x0000000F)
#define SD_SYS_LOW_PWR_dma_sram_rdy_num(data)                                        (0x0000000F&((data)<<0))
#define SD_SYS_LOW_PWR_dma_sram_rdy_num_src(data)                                    ((0x0000000F&(data))>>0)
#define SD_SYS_LOW_PWR_get_dma_sram_rdy_num(data)                                    ((0x0000000F&(data))>>0)


#define SD_DMA_RST                                                                   0x98010420
#define SD_DMA_RST_reg_addr                                                          "0xD8010420"
#define SD_DMA_RST_reg                                                               0xD8010420
#define set_SD_DMA_RST_reg(data)   (*((volatile unsigned int*) SD_DMA_RST_reg)=data)
#define get_SD_DMA_RST_reg   (*((volatile unsigned int*) SD_DMA_RST_reg))
#define SD_DMA_RST_inst_adr                                                          "0x0008"
#define SD_DMA_RST_inst                                                              0x0008
#define SD_DMA_RST_Dbus_endian_sel_shift                                             (2)
#define SD_DMA_RST_Dbus_endian_sel_mask                                              (0x00000004)
#define SD_DMA_RST_Dbus_endian_sel(data)                                             (0x00000004&((data)<<2))
#define SD_DMA_RST_Dbus_endian_sel_src(data)                                         ((0x00000004&(data))>>2)
#define SD_DMA_RST_get_Dbus_endian_sel(data)                                         ((0x00000004&(data))>>2)
#define SD_DMA_RST_L4_gated_disable_shift                                            (1)
#define SD_DMA_RST_L4_gated_disable_mask                                             (0x00000002)
#define SD_DMA_RST_L4_gated_disable(data)                                            (0x00000002&((data)<<1))
#define SD_DMA_RST_L4_gated_disable_src(data)                                        ((0x00000002&(data))>>1)
#define SD_DMA_RST_get_L4_gated_disable(data)                                        ((0x00000002&(data))>>1)
#define SD_DMA_RST_dma_rstn_shift                                                    (0)
#define SD_DMA_RST_dma_rstn_mask                                                     (0x00000001)
#define SD_DMA_RST_dma_rstn(data)                                                    (0x00000001&((data)<<0))
#define SD_DMA_RST_dma_rstn_src(data)                                                ((0x00000001&(data))>>0)
#define SD_DMA_RST_get_dma_rstn(data)                                                ((0x00000001&(data))>>0)


#define SD_ISR                                                                       0x98010424
#define SD_ISR_reg_addr                                                              "0xD8010424"
#define SD_ISR_reg                                                                   0xD8010424
#define set_SD_ISR_reg(data)   (*((volatile unsigned int*) SD_ISR_reg)=data)
#define get_SD_ISR_reg   (*((volatile unsigned int*) SD_ISR_reg))
#define SD_ISR_inst_adr                                                              "0x0009"
#define SD_ISR_inst                                                                  0x0009
#define SD_ISR_Int4_shift                                                            (4)
#define SD_ISR_Int4_mask                                                             (0x00000010)
#define SD_ISR_Int4(data)                                                            (0x00000010&((data)<<4))
#define SD_ISR_Int4_src(data)                                                        ((0x00000010&(data))>>4)
#define SD_ISR_get_Int4(data)                                                        ((0x00000010&(data))>>4)
#define SD_ISR_Int3_shift                                                            (3)
#define SD_ISR_Int3_mask                                                             (0x00000008)
#define SD_ISR_Int3(data)                                                            (0x00000008&((data)<<3))
#define SD_ISR_Int3_src(data)                                                        ((0x00000008&(data))>>3)
#define SD_ISR_get_Int3(data)                                                        ((0x00000008&(data))>>3)
#define SD_ISR_Int2_shift                                                            (2)
#define SD_ISR_Int2_mask                                                             (0x00000004)
#define SD_ISR_Int2(data)                                                            (0x00000004&((data)<<2))
#define SD_ISR_Int2_src(data)                                                        ((0x00000004&(data))>>2)
#define SD_ISR_get_Int2(data)                                                        ((0x00000004&(data))>>2)
#define SD_ISR_Int1_shift                                                            (1)
#define SD_ISR_Int1_mask                                                             (0x00000002)
#define SD_ISR_Int1(data)                                                            (0x00000002&((data)<<1))
#define SD_ISR_Int1_src(data)                                                        ((0x00000002&(data))>>1)
#define SD_ISR_get_Int1(data)                                                        ((0x00000002&(data))>>1)
#define SD_ISR_write_data_shift                                                      (0)
#define SD_ISR_write_data_mask                                                       (0x00000001)
#define SD_ISR_write_data(data)                                                      (0x00000001&((data)<<0))
#define SD_ISR_write_data_src(data)                                                  ((0x00000001&(data))>>0)
#define SD_ISR_get_write_data(data)                                                  ((0x00000001&(data))>>0)


#define SD_ISREN                                                                     0x98010428
#define SD_ISREN_reg_addr                                                            "0xD8010428"
#define SD_ISREN_reg                                                                 0xD8010428
#define set_SD_ISREN_reg(data)   (*((volatile unsigned int*) SD_ISREN_reg)=data)
#define get_SD_ISREN_reg   (*((volatile unsigned int*) SD_ISREN_reg))
#define SD_ISREN_inst_adr                                                            "0x000A"
#define SD_ISREN_inst                                                                0x000A
#define SD_ISREN_Int4En_shift                                                        (4)
#define SD_ISREN_Int4En_mask                                                         (0x00000010)
#define SD_ISREN_Int4En(data)                                                        (0x00000010&((data)<<4))
#define SD_ISREN_Int4En_src(data)                                                    ((0x00000010&(data))>>4)
#define SD_ISREN_get_Int4En(data)                                                    ((0x00000010&(data))>>4)
#define SD_ISREN_Int3En_shift                                                        (3)
#define SD_ISREN_Int3En_mask                                                         (0x00000008)
#define SD_ISREN_Int3En(data)                                                        (0x00000008&((data)<<3))
#define SD_ISREN_Int3En_src(data)                                                    ((0x00000008&(data))>>3)
#define SD_ISREN_get_Int3En(data)                                                    ((0x00000008&(data))>>3)
#define SD_ISREN_Int2En_shift                                                        (2)
#define SD_ISREN_Int2En_mask                                                         (0x00000004)
#define SD_ISREN_Int2En(data)                                                        (0x00000004&((data)<<2))
#define SD_ISREN_Int2En_src(data)                                                    ((0x00000004&(data))>>2)
#define SD_ISREN_get_Int2En(data)                                                    ((0x00000004&(data))>>2)
#define SD_ISREN_Int1En_shift                                                        (1)
#define SD_ISREN_Int1En_mask                                                         (0x00000002)
#define SD_ISREN_Int1En(data)                                                        (0x00000002&((data)<<1))
#define SD_ISREN_Int1En_src(data)                                                    ((0x00000002&(data))>>1)
#define SD_ISREN_get_Int1En(data)                                                    ((0x00000002&(data))>>1)
#define SD_ISREN_write_data_shift                                                    (0)
#define SD_ISREN_write_data_mask                                                     (0x00000001)
#define SD_ISREN_write_data(data)                                                    (0x00000001&((data)<<0))
#define SD_ISREN_write_data_src(data)                                                ((0x00000001&(data))>>0)
#define SD_ISREN_get_write_data(data)                                                ((0x00000001&(data))>>0)


#define SD_DUMMY_SYS                                                                 0x9801042C
#define SD_DUMMY_SYS_reg_addr                                                        "0xD801042C"
#define SD_DUMMY_SYS_reg                                                             0xD801042C
#define set_SD_DUMMY_SYS_reg(data)   (*((volatile unsigned int*) SD_DUMMY_SYS_reg)=data)
#define get_SD_DUMMY_SYS_reg   (*((volatile unsigned int*) SD_DUMMY_SYS_reg))
#define SD_DUMMY_SYS_inst_adr                                                        "0x000B"
#define SD_DUMMY_SYS_inst                                                            0x000B
#define SD_DUMMY_SYS_dmy_shift                                                       (0)
#define SD_DUMMY_SYS_dmy_mask                                                        (0xFFFFFFFF)
#define SD_DUMMY_SYS_dmy(data)                                                       (0xFFFFFFFF&((data)<<0))
#define SD_DUMMY_SYS_dmy_src(data)                                                   ((0xFFFFFFFF&(data))>>0)
#define SD_DUMMY_SYS_get_dmy(data)                                                   ((0xFFFFFFFF&(data))>>0)


#define SD_DBG                                                                       0x98010444
#define SD_DBG_reg_addr                                                              "0xD8010444"
#define SD_DBG_reg                                                                   0xD8010444
#define set_SD_DBG_reg(data)   (*((volatile unsigned int*) SD_DBG_reg)=data)
#define get_SD_DBG_reg   (*((volatile unsigned int*) SD_DBG_reg))
#define SD_DBG_inst_adr                                                              "0x0011"
#define SD_DBG_inst                                                                  0x0011
#define SD_DBG_write_enable4_shift                                                   (12)
#define SD_DBG_write_enable4_mask                                                    (0x00001000)
#define SD_DBG_write_enable4(data)                                                   (0x00001000&((data)<<12))
#define SD_DBG_write_enable4_src(data)                                               ((0x00001000&(data))>>12)
#define SD_DBG_get_write_enable4(data)                                               ((0x00001000&(data))>>12)
#define SD_DBG_cr_dbg_sel_shift                                                      (10)
#define SD_DBG_cr_dbg_sel_mask                                                       (0x00000C00)
#define SD_DBG_cr_dbg_sel(data)                                                      (0x00000C00&((data)<<10))
#define SD_DBG_cr_dbg_sel_src(data)                                                  ((0x00000C00&(data))>>10)
#define SD_DBG_get_cr_dbg_sel(data)                                                  ((0x00000C00&(data))>>10)
#define SD_DBG_write_enable3_shift                                                   (9)
#define SD_DBG_write_enable3_mask                                                    (0x00000200)
#define SD_DBG_write_enable3(data)                                                   (0x00000200&((data)<<9))
#define SD_DBG_write_enable3_src(data)                                               ((0x00000200&(data))>>9)
#define SD_DBG_get_write_enable3(data)                                               ((0x00000200&(data))>>9)
#define SD_DBG_sel1_shift                                                            (6)
#define SD_DBG_sel1_mask                                                             (0x000001C0)
#define SD_DBG_sel1(data)                                                            (0x000001C0&((data)<<6))
#define SD_DBG_sel1_src(data)                                                        ((0x000001C0&(data))>>6)
#define SD_DBG_get_sel1(data)                                                        ((0x000001C0&(data))>>6)
#define SD_DBG_write_enable2_shift                                                   (5)
#define SD_DBG_write_enable2_mask                                                    (0x00000020)
#define SD_DBG_write_enable2(data)                                                   (0x00000020&((data)<<5))
#define SD_DBG_write_enable2_src(data)                                               ((0x00000020&(data))>>5)
#define SD_DBG_get_write_enable2(data)                                               ((0x00000020&(data))>>5)
#define SD_DBG_sel0_shift                                                            (2)
#define SD_DBG_sel0_mask                                                             (0x0000001C)
#define SD_DBG_sel0(data)                                                            (0x0000001C&((data)<<2))
#define SD_DBG_sel0_src(data)                                                        ((0x0000001C&(data))>>2)
#define SD_DBG_get_sel0(data)                                                        ((0x0000001C&(data))>>2)
#define SD_DBG_write_enable1_shift                                                   (1)
#define SD_DBG_write_enable1_mask                                                    (0x00000002)
#define SD_DBG_write_enable1(data)                                                   (0x00000002&((data)<<1))
#define SD_DBG_write_enable1_src(data)                                               ((0x00000002&(data))>>1)
#define SD_DBG_get_write_enable1(data)                                               ((0x00000002&(data))>>1)
#define SD_DBG_enable_shift                                                          (0)
#define SD_DBG_enable_mask                                                           (0x00000001)
#define SD_DBG_enable(data)                                                          (0x00000001&((data)<<0))
#define SD_DBG_enable_src(data)                                                      ((0x00000001&(data))>>0)
#define SD_DBG_get_enable(data)                                                      ((0x00000001&(data))>>0)


#define SD_IP_BIST_CTL                                                               0x98010460
#define SD_IP_BIST_CTL_reg_addr                                                      "0xD8010460"
#define SD_IP_BIST_CTL_reg                                                           0xD8010460
#define set_SD_IP_BIST_CTL_reg(data)   (*((volatile unsigned int*) SD_IP_BIST_CTL_reg)=data)
#define get_SD_IP_BIST_CTL_reg   (*((volatile unsigned int*) SD_IP_BIST_CTL_reg))
#define SD_IP_BIST_CTL_inst_adr                                                      "0x0018"
#define SD_IP_BIST_CTL_inst                                                          0x0018
#define SD_IP_BIST_CTL_bist_cr_ppb_rme_1_shift                                       (16)
#define SD_IP_BIST_CTL_bist_cr_ppb_rme_1_mask                                        (0x00010000)
#define SD_IP_BIST_CTL_bist_cr_ppb_rme_1(data)                                       (0x00010000&((data)<<16))
#define SD_IP_BIST_CTL_bist_cr_ppb_rme_1_src(data)                                   ((0x00010000&(data))>>16)
#define SD_IP_BIST_CTL_get_bist_cr_ppb_rme_1(data)                                   ((0x00010000&(data))>>16)
#define SD_IP_BIST_CTL_bist_cr_ppb_rm_1_shift                                        (12)
#define SD_IP_BIST_CTL_bist_cr_ppb_rm_1_mask                                         (0x0000F000)
#define SD_IP_BIST_CTL_bist_cr_ppb_rm_1(data)                                        (0x0000F000&((data)<<12))
#define SD_IP_BIST_CTL_bist_cr_ppb_rm_1_src(data)                                    ((0x0000F000&(data))>>12)
#define SD_IP_BIST_CTL_get_bist_cr_ppb_rm_1(data)                                    ((0x0000F000&(data))>>12)
#define SD_IP_BIST_CTL_bist_cr_ppb_rme_0_shift                                       (8)
#define SD_IP_BIST_CTL_bist_cr_ppb_rme_0_mask                                        (0x00000100)
#define SD_IP_BIST_CTL_bist_cr_ppb_rme_0(data)                                       (0x00000100&((data)<<8))
#define SD_IP_BIST_CTL_bist_cr_ppb_rme_0_src(data)                                   ((0x00000100&(data))>>8)
#define SD_IP_BIST_CTL_get_bist_cr_ppb_rme_0(data)                                   ((0x00000100&(data))>>8)
#define SD_IP_BIST_CTL_bist_cr_ppb_rm_0_shift                                        (4)
#define SD_IP_BIST_CTL_bist_cr_ppb_rm_0_mask                                         (0x000000F0)
#define SD_IP_BIST_CTL_bist_cr_ppb_rm_0(data)                                        (0x000000F0&((data)<<4))
#define SD_IP_BIST_CTL_bist_cr_ppb_rm_0_src(data)                                    ((0x000000F0&(data))>>4)
#define SD_IP_BIST_CTL_get_bist_cr_ppb_rm_0(data)                                    ((0x000000F0&(data))>>4)
#define SD_IP_BIST_CTL_bist_drf_test_resume_shift                                    (3)
#define SD_IP_BIST_CTL_bist_drf_test_resume_mask                                     (0x00000008)
#define SD_IP_BIST_CTL_bist_drf_test_resume(data)                                    (0x00000008&((data)<<3))
#define SD_IP_BIST_CTL_bist_drf_test_resume_src(data)                                ((0x00000008&(data))>>3)
#define SD_IP_BIST_CTL_get_bist_drf_test_resume(data)                                ((0x00000008&(data))>>3)
#define SD_IP_BIST_CTL_bist_drf_mode_shift                                           (2)
#define SD_IP_BIST_CTL_bist_drf_mode_mask                                            (0x00000004)
#define SD_IP_BIST_CTL_bist_drf_mode(data)                                           (0x00000004&((data)<<2))
#define SD_IP_BIST_CTL_bist_drf_mode_src(data)                                       ((0x00000004&(data))>>2)
#define SD_IP_BIST_CTL_get_bist_drf_mode(data)                                       ((0x00000004&(data))>>2)
#define SD_IP_BIST_CTL_bist_en_shift                                                 (1)
#define SD_IP_BIST_CTL_bist_en_mask                                                  (0x00000002)
#define SD_IP_BIST_CTL_bist_en(data)                                                 (0x00000002&((data)<<1))
#define SD_IP_BIST_CTL_bist_en_src(data)                                             ((0x00000002&(data))>>1)
#define SD_IP_BIST_CTL_get_bist_en(data)                                             ((0x00000002&(data))>>1)
#define SD_IP_BIST_CTL_bist_ls_shift                                                 (0)
#define SD_IP_BIST_CTL_bist_ls_mask                                                  (0x00000001)
#define SD_IP_BIST_CTL_bist_ls(data)                                                 (0x00000001&((data)<<0))
#define SD_IP_BIST_CTL_bist_ls_src(data)                                             ((0x00000001&(data))>>0)
#define SD_IP_BIST_CTL_get_bist_ls(data)                                             ((0x00000001&(data))>>0)


#define SD_IP_BIST_STS                                                               0x98010464
#define SD_IP_BIST_STS_reg_addr                                                      "0xD8010464"
#define SD_IP_BIST_STS_reg                                                           0xD8010464
#define set_SD_IP_BIST_STS_reg(data)   (*((volatile unsigned int*) SD_IP_BIST_STS_reg)=data)
#define get_SD_IP_BIST_STS_reg   (*((volatile unsigned int*) SD_IP_BIST_STS_reg))
#define SD_IP_BIST_STS_inst_adr                                                      "0x0019"
#define SD_IP_BIST_STS_inst                                                          0x0019
#define SD_IP_BIST_STS_bist_drf_start_pause_shift                                    (6)
#define SD_IP_BIST_STS_bist_drf_start_pause_mask                                     (0x00000040)
#define SD_IP_BIST_STS_bist_drf_start_pause(data)                                    (0x00000040&((data)<<6))
#define SD_IP_BIST_STS_bist_drf_start_pause_src(data)                                ((0x00000040&(data))>>6)
#define SD_IP_BIST_STS_get_bist_drf_start_pause(data)                                ((0x00000040&(data))>>6)
#define SD_IP_BIST_STS_bist_drf_fail_1_shift                                         (5)
#define SD_IP_BIST_STS_bist_drf_fail_1_mask                                          (0x00000020)
#define SD_IP_BIST_STS_bist_drf_fail_1(data)                                         (0x00000020&((data)<<5))
#define SD_IP_BIST_STS_bist_drf_fail_1_src(data)                                     ((0x00000020&(data))>>5)
#define SD_IP_BIST_STS_get_bist_drf_fail_1(data)                                     ((0x00000020&(data))>>5)
#define SD_IP_BIST_STS_bist_drf_fail_0_shift                                         (4)
#define SD_IP_BIST_STS_bist_drf_fail_0_mask                                          (0x00000010)
#define SD_IP_BIST_STS_bist_drf_fail_0(data)                                         (0x00000010&((data)<<4))
#define SD_IP_BIST_STS_bist_drf_fail_0_src(data)                                     ((0x00000010&(data))>>4)
#define SD_IP_BIST_STS_get_bist_drf_fail_0(data)                                     ((0x00000010&(data))>>4)
#define SD_IP_BIST_STS_bist_drf_done_shift                                           (3)
#define SD_IP_BIST_STS_bist_drf_done_mask                                            (0x00000008)
#define SD_IP_BIST_STS_bist_drf_done(data)                                           (0x00000008&((data)<<3))
#define SD_IP_BIST_STS_bist_drf_done_src(data)                                       ((0x00000008&(data))>>3)
#define SD_IP_BIST_STS_get_bist_drf_done(data)                                       ((0x00000008&(data))>>3)
#define SD_IP_BIST_STS_bist_1_fail_shift                                             (2)
#define SD_IP_BIST_STS_bist_1_fail_mask                                              (0x00000004)
#define SD_IP_BIST_STS_bist_1_fail(data)                                             (0x00000004&((data)<<2))
#define SD_IP_BIST_STS_bist_1_fail_src(data)                                         ((0x00000004&(data))>>2)
#define SD_IP_BIST_STS_get_bist_1_fail(data)                                         ((0x00000004&(data))>>2)
#define SD_IP_BIST_STS_bist_0_fail_shift                                             (1)
#define SD_IP_BIST_STS_bist_0_fail_mask                                              (0x00000002)
#define SD_IP_BIST_STS_bist_0_fail(data)                                             (0x00000002&((data)<<1))
#define SD_IP_BIST_STS_bist_0_fail_src(data)                                         ((0x00000002&(data))>>1)
#define SD_IP_BIST_STS_get_bist_0_fail(data)                                         ((0x00000002&(data))>>1)
#define SD_IP_BIST_STS_bist_done_shift                                               (0)
#define SD_IP_BIST_STS_bist_done_mask                                                (0x00000001)
#define SD_IP_BIST_STS_bist_done(data)                                               (0x00000001&((data)<<0))
#define SD_IP_BIST_STS_bist_done_src(data)                                           ((0x00000001&(data))>>0)
#define SD_IP_BIST_STS_get_bist_done(data)                                           ((0x00000001&(data))>>0)


#define SD_BIST_CTL                                                                  0x98010468
#define SD_BIST_CTL_reg_addr                                                         "0xD8010468"
#define SD_BIST_CTL_reg                                                              0xD8010468
#define set_SD_BIST_CTL_reg(data)   (*((volatile unsigned int*) SD_BIST_CTL_reg)=data)
#define get_SD_BIST_CTL_reg   (*((volatile unsigned int*) SD_BIST_CTL_reg))
#define SD_BIST_CTL_inst_adr                                                         "0x001A"
#define SD_BIST_CTL_inst                                                             0x001A
#define SD_BIST_CTL_cr_bist2_rme_1_shift                                             (16)
#define SD_BIST_CTL_cr_bist2_rme_1_mask                                              (0x00010000)
#define SD_BIST_CTL_cr_bist2_rme_1(data)                                             (0x00010000&((data)<<16))
#define SD_BIST_CTL_cr_bist2_rme_1_src(data)                                         ((0x00010000&(data))>>16)
#define SD_BIST_CTL_get_cr_bist2_rme_1(data)                                         ((0x00010000&(data))>>16)
#define SD_BIST_CTL_cr_bist2_rm_1_shift                                              (12)
#define SD_BIST_CTL_cr_bist2_rm_1_mask                                               (0x0000F000)
#define SD_BIST_CTL_cr_bist2_rm_1(data)                                              (0x0000F000&((data)<<12))
#define SD_BIST_CTL_cr_bist2_rm_1_src(data)                                          ((0x0000F000&(data))>>12)
#define SD_BIST_CTL_get_cr_bist2_rm_1(data)                                          ((0x0000F000&(data))>>12)
#define SD_BIST_CTL_cr_bist2_rme_0_shift                                             (8)
#define SD_BIST_CTL_cr_bist2_rme_0_mask                                              (0x00000100)
#define SD_BIST_CTL_cr_bist2_rme_0(data)                                             (0x00000100&((data)<<8))
#define SD_BIST_CTL_cr_bist2_rme_0_src(data)                                         ((0x00000100&(data))>>8)
#define SD_BIST_CTL_get_cr_bist2_rme_0(data)                                         ((0x00000100&(data))>>8)
#define SD_BIST_CTL_cr_bist2_rm_0_shift                                              (4)
#define SD_BIST_CTL_cr_bist2_rm_0_mask                                               (0x000000F0)
#define SD_BIST_CTL_cr_bist2_rm_0(data)                                              (0x000000F0&((data)<<4))
#define SD_BIST_CTL_cr_bist2_rm_0_src(data)                                          ((0x000000F0&(data))>>4)
#define SD_BIST_CTL_get_cr_bist2_rm_0(data)                                          ((0x000000F0&(data))>>4)
#define SD_BIST_CTL_cr_bist2_drf_test_resume_shift                                   (3)
#define SD_BIST_CTL_cr_bist2_drf_test_resume_mask                                    (0x00000008)
#define SD_BIST_CTL_cr_bist2_drf_test_resume(data)                                   (0x00000008&((data)<<3))
#define SD_BIST_CTL_cr_bist2_drf_test_resume_src(data)                               ((0x00000008&(data))>>3)
#define SD_BIST_CTL_get_cr_bist2_drf_test_resume(data)                               ((0x00000008&(data))>>3)
#define SD_BIST_CTL_cr_drf_bist2_mode_shift                                          (2)
#define SD_BIST_CTL_cr_drf_bist2_mode_mask                                           (0x00000004)
#define SD_BIST_CTL_cr_drf_bist2_mode(data)                                          (0x00000004&((data)<<2))
#define SD_BIST_CTL_cr_drf_bist2_mode_src(data)                                      ((0x00000004&(data))>>2)
#define SD_BIST_CTL_get_cr_drf_bist2_mode(data)                                      ((0x00000004&(data))>>2)
#define SD_BIST_CTL_cr_bist2_mode_shift                                              (1)
#define SD_BIST_CTL_cr_bist2_mode_mask                                               (0x00000002)
#define SD_BIST_CTL_cr_bist2_mode(data)                                              (0x00000002&((data)<<1))
#define SD_BIST_CTL_cr_bist2_mode_src(data)                                          ((0x00000002&(data))>>1)
#define SD_BIST_CTL_get_cr_bist2_mode(data)                                          ((0x00000002&(data))>>1)
#define SD_BIST_CTL_cr_bist2_ls_shift                                                (0)
#define SD_BIST_CTL_cr_bist2_ls_mask                                                 (0x00000001)
#define SD_BIST_CTL_cr_bist2_ls(data)                                                (0x00000001&((data)<<0))
#define SD_BIST_CTL_cr_bist2_ls_src(data)                                            ((0x00000001&(data))>>0)
#define SD_BIST_CTL_get_cr_bist2_ls(data)                                            ((0x00000001&(data))>>0)


#define SD_BIST_STS                                                                  0x9801046C
#define SD_BIST_STS_reg_addr                                                         "0xD801046C"
#define SD_BIST_STS_reg                                                              0xD801046C
#define set_SD_BIST_STS_reg(data)   (*((volatile unsigned int*) SD_BIST_STS_reg)=data)
#define get_SD_BIST_STS_reg   (*((volatile unsigned int*) SD_BIST_STS_reg))
#define SD_BIST_STS_inst_adr                                                         "0x001B"
#define SD_BIST_STS_inst                                                             0x001B
#define SD_BIST_STS_drf_bist2_fail_3_shift                                           (21)
#define SD_BIST_STS_drf_bist2_fail_3_mask                                            (0x00200000)
#define SD_BIST_STS_drf_bist2_fail_3(data)                                           (0x00200000&((data)<<21))
#define SD_BIST_STS_drf_bist2_fail_3_src(data)                                       ((0x00200000&(data))>>21)
#define SD_BIST_STS_get_drf_bist2_fail_3(data)                                       ((0x00200000&(data))>>21)
#define SD_BIST_STS_drf_bist2_fail_2_shift                                           (20)
#define SD_BIST_STS_drf_bist2_fail_2_mask                                            (0x00100000)
#define SD_BIST_STS_drf_bist2_fail_2(data)                                           (0x00100000&((data)<<20))
#define SD_BIST_STS_drf_bist2_fail_2_src(data)                                       ((0x00100000&(data))>>20)
#define SD_BIST_STS_get_drf_bist2_fail_2(data)                                       ((0x00100000&(data))>>20)
#define SD_BIST_STS_drf_bist2_fail_1_shift                                           (19)
#define SD_BIST_STS_drf_bist2_fail_1_mask                                            (0x00080000)
#define SD_BIST_STS_drf_bist2_fail_1(data)                                           (0x00080000&((data)<<19))
#define SD_BIST_STS_drf_bist2_fail_1_src(data)                                       ((0x00080000&(data))>>19)
#define SD_BIST_STS_get_drf_bist2_fail_1(data)                                       ((0x00080000&(data))>>19)
#define SD_BIST_STS_drf_bist2_fail_0_shift                                           (18)
#define SD_BIST_STS_drf_bist2_fail_0_mask                                            (0x00040000)
#define SD_BIST_STS_drf_bist2_fail_0(data)                                           (0x00040000&((data)<<18))
#define SD_BIST_STS_drf_bist2_fail_0_src(data)                                       ((0x00040000&(data))>>18)
#define SD_BIST_STS_get_drf_bist2_fail_0(data)                                       ((0x00040000&(data))>>18)
#define SD_BIST_STS_bist2_drf_start_pause_shift                                      (17)
#define SD_BIST_STS_bist2_drf_start_pause_mask                                       (0x00020000)
#define SD_BIST_STS_bist2_drf_start_pause(data)                                      (0x00020000&((data)<<17))
#define SD_BIST_STS_bist2_drf_start_pause_src(data)                                  ((0x00020000&(data))>>17)
#define SD_BIST_STS_get_bist2_drf_start_pause(data)                                  ((0x00020000&(data))>>17)
#define SD_BIST_STS_drf_bist2_done_shift                                             (16)
#define SD_BIST_STS_drf_bist2_done_mask                                              (0x00010000)
#define SD_BIST_STS_drf_bist2_done(data)                                             (0x00010000&((data)<<16))
#define SD_BIST_STS_drf_bist2_done_src(data)                                         ((0x00010000&(data))>>16)
#define SD_BIST_STS_get_drf_bist2_done(data)                                         ((0x00010000&(data))>>16)
#define SD_BIST_STS_bist2_fail_3_shift                                               (4)
#define SD_BIST_STS_bist2_fail_3_mask                                                (0x00000010)
#define SD_BIST_STS_bist2_fail_3(data)                                               (0x00000010&((data)<<4))
#define SD_BIST_STS_bist2_fail_3_src(data)                                           ((0x00000010&(data))>>4)
#define SD_BIST_STS_get_bist2_fail_3(data)                                           ((0x00000010&(data))>>4)
#define SD_BIST_STS_bist2_fail_2_shift                                               (3)
#define SD_BIST_STS_bist2_fail_2_mask                                                (0x00000008)
#define SD_BIST_STS_bist2_fail_2(data)                                               (0x00000008&((data)<<3))
#define SD_BIST_STS_bist2_fail_2_src(data)                                           ((0x00000008&(data))>>3)
#define SD_BIST_STS_get_bist2_fail_2(data)                                           ((0x00000008&(data))>>3)
#define SD_BIST_STS_bist2_fail_1_shift                                               (2)
#define SD_BIST_STS_bist2_fail_1_mask                                                (0x00000004)
#define SD_BIST_STS_bist2_fail_1(data)                                               (0x00000004&((data)<<2))
#define SD_BIST_STS_bist2_fail_1_src(data)                                           ((0x00000004&(data))>>2)
#define SD_BIST_STS_get_bist2_fail_1(data)                                           ((0x00000004&(data))>>2)
#define SD_BIST_STS_bist2_fail_0_shift                                               (1)
#define SD_BIST_STS_bist2_fail_0_mask                                                (0x00000002)
#define SD_BIST_STS_bist2_fail_0(data)                                               (0x00000002&((data)<<1))
#define SD_BIST_STS_bist2_fail_0_src(data)                                           ((0x00000002&(data))>>1)
#define SD_BIST_STS_get_bist2_fail_0(data)                                           ((0x00000002&(data))>>1)
#define SD_BIST_STS_bist2_done_shift                                                 (0)
#define SD_BIST_STS_bist2_done_mask                                                  (0x00000001)
#define SD_BIST_STS_bist2_done(data)                                                 (0x00000001&((data)<<0))
#define SD_BIST_STS_bist2_done_src(data)                                             ((0x00000001&(data))>>0)
#define SD_BIST_STS_get_bist2_done(data)                                             ((0x00000001&(data))>>0)


#define SD_IP_CTL                                                                    0x98010470
#define SD_IP_CTL_reg_addr                                                           "0xD8010470"
#define SD_IP_CTL_reg                                                                0xD8010470
#define set_SD_IP_CTL_reg(data)   (*((volatile unsigned int*) SD_IP_CTL_reg)=data)
#define get_SD_IP_CTL_reg   (*((volatile unsigned int*) SD_IP_CTL_reg))
#define SD_IP_CTL_inst_adr                                                           "0x001C"
#define SD_IP_CTL_inst                                                               0x001C
#define SD_IP_CTL_asic_crc_dbgo_sel_shift                                            (8)
#define SD_IP_CTL_asic_crc_dbgo_sel_mask                                             (0x0000FF00)
#define SD_IP_CTL_asic_crc_dbgo_sel(data)                                            (0x0000FF00&((data)<<8))
#define SD_IP_CTL_asic_crc_dbgo_sel_src(data)                                        ((0x0000FF00&(data))>>8)
#define SD_IP_CTL_get_asic_crc_dbgo_sel(data)                                        ((0x0000FF00&(data))>>8)
#define SD_IP_CTL_crc_dbgo_sel_shift                                                 (3)
#define SD_IP_CTL_crc_dbgo_sel_mask                                                  (0x00000078)
#define SD_IP_CTL_crc_dbgo_sel(data)                                                 (0x00000078&((data)<<3))
#define SD_IP_CTL_crc_dbgo_sel_src(data)                                             ((0x00000078&(data))>>3)
#define SD_IP_CTL_get_crc_dbgo_sel(data)                                             ((0x00000078&(data))>>3)
#define SD_IP_CTL_ip_ea_flash_shift                                                  (2)
#define SD_IP_CTL_ip_ea_flash_mask                                                   (0x00000004)
#define SD_IP_CTL_ip_ea_flash(data)                                                  (0x00000004&((data)<<2))
#define SD_IP_CTL_ip_ea_flash_src(data)                                              ((0x00000004&(data))>>2)
#define SD_IP_CTL_get_ip_ea_flash(data)                                              ((0x00000004&(data))>>2)
#define SD_IP_CTL_crc_clk_disable_trig_shift                                         (1)
#define SD_IP_CTL_crc_clk_disable_trig_mask                                          (0x00000002)
#define SD_IP_CTL_crc_clk_disable_trig(data)                                         (0x00000002&((data)<<1))
#define SD_IP_CTL_crc_clk_disable_trig_src(data)                                     ((0x00000002&(data))>>1)
#define SD_IP_CTL_get_crc_clk_disable_trig(data)                                     ((0x00000002&(data))>>1)
#define SD_IP_CTL_mcu_time_1_us_shift                                                (0)
#define SD_IP_CTL_mcu_time_1_us_mask                                                 (0x00000001)
#define SD_IP_CTL_mcu_time_1_us(data)                                                (0x00000001&((data)<<0))
#define SD_IP_CTL_mcu_time_1_us_src(data)                                            ((0x00000001&(data))>>0)
#define SD_IP_CTL_get_mcu_time_1_us(data)                                            ((0x00000001&(data))>>0)


#define SD_PAD_CTL                                                                   0x98010474
#define SD_PAD_CTL_reg_addr                                                          "0xD8010474"
#define SD_PAD_CTL_reg                                                               0xD8010474
#define set_SD_PAD_CTL_reg(data)   (*((volatile unsigned int*) SD_PAD_CTL_reg)=data)
#define get_SD_PAD_CTL_reg   (*((volatile unsigned int*) SD_PAD_CTL_reg))
#define SD_PAD_CTL_inst_adr                                                          "0x001D"
#define SD_PAD_CTL_inst                                                              0x001D
#define SD_PAD_CTL_tune3318_shift                                                    (0)
#define SD_PAD_CTL_tune3318_mask                                                     (0x00000001)
#define SD_PAD_CTL_tune3318(data)                                                    (0x00000001&((data)<<0))
#define SD_PAD_CTL_tune3318_src(data)                                                ((0x00000001&(data))>>0)
#define SD_PAD_CTL_get_tune3318(data)                                                ((0x00000001&(data))>>0)


#define SD_CKGEN_CTL                                                                 0x98010478
#define SD_CKGEN_CTL_reg_addr                                                        "0xD8010478"
#define SD_CKGEN_CTL_reg                                                             0xD8010478
#define set_SD_CKGEN_CTL_reg(data)   (*((volatile unsigned int*) SD_CKGEN_CTL_reg)=data)
#define get_SD_CKGEN_CTL_reg   (*((volatile unsigned int*) SD_CKGEN_CTL_reg))
#define SD_CKGEN_CTL_inst_adr                                                        "0x001E"
#define SD_CKGEN_CTL_inst                                                            0x001E
#define SD_CKGEN_CTL_sd30_sample_change_shift                                        (18)
#define SD_CKGEN_CTL_sd30_sample_change_mask                                         (0x00040000)
#define SD_CKGEN_CTL_sd30_sample_change(data)                                        (0x00040000&((data)<<18))
#define SD_CKGEN_CTL_sd30_sample_change_src(data)                                    ((0x00040000&(data))>>18)
#define SD_CKGEN_CTL_get_sd30_sample_change(data)                                    ((0x00040000&(data))>>18)
#define SD_CKGEN_CTL_sd30_push_change_shift                                          (17)
#define SD_CKGEN_CTL_sd30_push_change_mask                                           (0x00020000)
#define SD_CKGEN_CTL_sd30_push_change(data)                                          (0x00020000&((data)<<17))
#define SD_CKGEN_CTL_sd30_push_change_src(data)                                      ((0x00020000&(data))>>17)
#define SD_CKGEN_CTL_get_sd30_push_change(data)                                      ((0x00020000&(data))>>17)
#define SD_CKGEN_CTL_crc_clk_change_shift                                            (16)
#define SD_CKGEN_CTL_crc_clk_change_mask                                             (0x00010000)
#define SD_CKGEN_CTL_crc_clk_change(data)                                            (0x00010000&((data)<<16))
#define SD_CKGEN_CTL_crc_clk_change_src(data)                                        ((0x00010000&(data))>>16)
#define SD_CKGEN_CTL_get_crc_clk_change(data)                                        ((0x00010000&(data))>>16)
#define SD_CKGEN_CTL_sd30_sample_clk_src_shift                                       (12)
#define SD_CKGEN_CTL_sd30_sample_clk_src_mask                                        (0x00003000)
#define SD_CKGEN_CTL_sd30_sample_clk_src(data)                                       (0x00003000&((data)<<12))
#define SD_CKGEN_CTL_sd30_sample_clk_src_src(data)                                   ((0x00003000&(data))>>12)
#define SD_CKGEN_CTL_get_sd30_sample_clk_src(data)                                   ((0x00003000&(data))>>12)
#define SD_CKGEN_CTL_sd30_push_clk_src_shift                                         (8)
#define SD_CKGEN_CTL_sd30_push_clk_src_mask                                          (0x00000300)
#define SD_CKGEN_CTL_sd30_push_clk_src(data)                                         (0x00000300&((data)<<8))
#define SD_CKGEN_CTL_sd30_push_clk_src_src(data)                                     ((0x00000300&(data))>>8)
#define SD_CKGEN_CTL_get_sd30_push_clk_src(data)                                     ((0x00000300&(data))>>8)
#define SD_CKGEN_CTL_crc_clk_src_shift                                               (4)
#define SD_CKGEN_CTL_crc_clk_src_mask                                                (0x00000030)
#define SD_CKGEN_CTL_crc_clk_src(data)                                               (0x00000030&((data)<<4))
#define SD_CKGEN_CTL_crc_clk_src_src(data)                                           ((0x00000030&(data))>>4)
#define SD_CKGEN_CTL_get_crc_clk_src(data)                                           ((0x00000030&(data))>>4)
#define SD_CKGEN_CTL_clk_div_shift                                                   (0)
#define SD_CKGEN_CTL_clk_div_mask                                                    (0x00000007)
#define SD_CKGEN_CTL_clk_div(data)                                                   (0x00000007&((data)<<0))
#define SD_CKGEN_CTL_clk_div_src(data)                                               ((0x00000007&(data))>>0)
#define SD_CKGEN_CTL_get_clk_div(data)                                               ((0x00000007&(data))>>0)


#define SD_SDIO_BIST_CTL                                                             0x98010480
#define SD_SDIO_BIST_CTL_reg_addr                                                    "0xD8010480"
#define SD_SDIO_BIST_CTL_reg                                                         0xD8010480
#define set_SD_SDIO_BIST_CTL_reg(data)   (*((volatile unsigned int*) SD_SDIO_BIST_CTL_reg)=data)
#define get_SD_SDIO_BIST_CTL_reg   (*((volatile unsigned int*) SD_SDIO_BIST_CTL_reg))
#define SD_SDIO_BIST_CTL_inst_adr                                                    "0x0020"
#define SD_SDIO_BIST_CTL_inst                                                        0x0020
#define SD_SDIO_BIST_CTL_bist_dbus_buf_rme_shift                                     (8)
#define SD_SDIO_BIST_CTL_bist_dbus_buf_rme_mask                                      (0x00000100)
#define SD_SDIO_BIST_CTL_bist_dbus_buf_rme(data)                                     (0x00000100&((data)<<8))
#define SD_SDIO_BIST_CTL_bist_dbus_buf_rme_src(data)                                 ((0x00000100&(data))>>8)
#define SD_SDIO_BIST_CTL_get_bist_dbus_buf_rme(data)                                 ((0x00000100&(data))>>8)
#define SD_SDIO_BIST_CTL_bist_dbus_buf_rm_shift                                      (4)
#define SD_SDIO_BIST_CTL_bist_dbus_buf_rm_mask                                       (0x000000F0)
#define SD_SDIO_BIST_CTL_bist_dbus_buf_rm(data)                                      (0x000000F0&((data)<<4))
#define SD_SDIO_BIST_CTL_bist_dbus_buf_rm_src(data)                                  ((0x000000F0&(data))>>4)
#define SD_SDIO_BIST_CTL_get_bist_dbus_buf_rm(data)                                  ((0x000000F0&(data))>>4)
#define SD_SDIO_BIST_CTL_bist_drf_test_resume_shift                                  (3)
#define SD_SDIO_BIST_CTL_bist_drf_test_resume_mask                                   (0x00000008)
#define SD_SDIO_BIST_CTL_bist_drf_test_resume(data)                                  (0x00000008&((data)<<3))
#define SD_SDIO_BIST_CTL_bist_drf_test_resume_src(data)                              ((0x00000008&(data))>>3)
#define SD_SDIO_BIST_CTL_get_bist_drf_test_resume(data)                              ((0x00000008&(data))>>3)
#define SD_SDIO_BIST_CTL_bist_drf_mode_shift                                         (2)
#define SD_SDIO_BIST_CTL_bist_drf_mode_mask                                          (0x00000004)
#define SD_SDIO_BIST_CTL_bist_drf_mode(data)                                         (0x00000004&((data)<<2))
#define SD_SDIO_BIST_CTL_bist_drf_mode_src(data)                                     ((0x00000004&(data))>>2)
#define SD_SDIO_BIST_CTL_get_bist_drf_mode(data)                                     ((0x00000004&(data))>>2)
#define SD_SDIO_BIST_CTL_bist_en_shift                                               (1)
#define SD_SDIO_BIST_CTL_bist_en_mask                                                (0x00000002)
#define SD_SDIO_BIST_CTL_bist_en(data)                                               (0x00000002&((data)<<1))
#define SD_SDIO_BIST_CTL_bist_en_src(data)                                           ((0x00000002&(data))>>1)
#define SD_SDIO_BIST_CTL_get_bist_en(data)                                           ((0x00000002&(data))>>1)
#define SD_SDIO_BIST_CTL_bist_ls_shift                                               (0)
#define SD_SDIO_BIST_CTL_bist_ls_mask                                                (0x00000001)
#define SD_SDIO_BIST_CTL_bist_ls(data)                                               (0x00000001&((data)<<0))
#define SD_SDIO_BIST_CTL_bist_ls_src(data)                                           ((0x00000001&(data))>>0)
#define SD_SDIO_BIST_CTL_get_bist_ls(data)                                           ((0x00000001&(data))>>0)


#define SD_SDIO_BIST_STS                                                             0x98010484
#define SD_SDIO_BIST_STS_reg_addr                                                    "0xD8010484"
#define SD_SDIO_BIST_STS_reg                                                         0xD8010484
#define set_SD_SDIO_BIST_STS_reg(data)   (*((volatile unsigned int*) SD_SDIO_BIST_STS_reg)=data)
#define get_SD_SDIO_BIST_STS_reg   (*((volatile unsigned int*) SD_SDIO_BIST_STS_reg))
#define SD_SDIO_BIST_STS_inst_adr                                                    "0x0021"
#define SD_SDIO_BIST_STS_inst                                                        0x0021
#define SD_SDIO_BIST_STS_bist_drf_start_pause_shift                                  (6)
#define SD_SDIO_BIST_STS_bist_drf_start_pause_mask                                   (0x00000040)
#define SD_SDIO_BIST_STS_bist_drf_start_pause(data)                                  (0x00000040&((data)<<6))
#define SD_SDIO_BIST_STS_bist_drf_start_pause_src(data)                              ((0x00000040&(data))>>6)
#define SD_SDIO_BIST_STS_get_bist_drf_start_pause(data)                              ((0x00000040&(data))>>6)
#define SD_SDIO_BIST_STS_bist_drf_fail_1_shift                                       (5)
#define SD_SDIO_BIST_STS_bist_drf_fail_1_mask                                        (0x00000020)
#define SD_SDIO_BIST_STS_bist_drf_fail_1(data)                                       (0x00000020&((data)<<5))
#define SD_SDIO_BIST_STS_bist_drf_fail_1_src(data)                                   ((0x00000020&(data))>>5)
#define SD_SDIO_BIST_STS_get_bist_drf_fail_1(data)                                   ((0x00000020&(data))>>5)
#define SD_SDIO_BIST_STS_bist_drf_fail_0_shift                                       (4)
#define SD_SDIO_BIST_STS_bist_drf_fail_0_mask                                        (0x00000010)
#define SD_SDIO_BIST_STS_bist_drf_fail_0(data)                                       (0x00000010&((data)<<4))
#define SD_SDIO_BIST_STS_bist_drf_fail_0_src(data)                                   ((0x00000010&(data))>>4)
#define SD_SDIO_BIST_STS_get_bist_drf_fail_0(data)                                   ((0x00000010&(data))>>4)
#define SD_SDIO_BIST_STS_bist_drf_done_shift                                         (3)
#define SD_SDIO_BIST_STS_bist_drf_done_mask                                          (0x00000008)
#define SD_SDIO_BIST_STS_bist_drf_done(data)                                         (0x00000008&((data)<<3))
#define SD_SDIO_BIST_STS_bist_drf_done_src(data)                                     ((0x00000008&(data))>>3)
#define SD_SDIO_BIST_STS_get_bist_drf_done(data)                                     ((0x00000008&(data))>>3)
#define SD_SDIO_BIST_STS_bist_1_fail_shift                                           (2)
#define SD_SDIO_BIST_STS_bist_1_fail_mask                                            (0x00000004)
#define SD_SDIO_BIST_STS_bist_1_fail(data)                                           (0x00000004&((data)<<2))
#define SD_SDIO_BIST_STS_bist_1_fail_src(data)                                       ((0x00000004&(data))>>2)
#define SD_SDIO_BIST_STS_get_bist_1_fail(data)                                       ((0x00000004&(data))>>2)
#define SD_SDIO_BIST_STS_bist_0_fail_shift                                           (1)
#define SD_SDIO_BIST_STS_bist_0_fail_mask                                            (0x00000002)
#define SD_SDIO_BIST_STS_bist_0_fail(data)                                           (0x00000002&((data)<<1))
#define SD_SDIO_BIST_STS_bist_0_fail_src(data)                                       ((0x00000002&(data))>>1)
#define SD_SDIO_BIST_STS_get_bist_0_fail(data)                                       ((0x00000002&(data))>>1)
#define SD_SDIO_BIST_STS_bist_done_shift                                             (0)
#define SD_SDIO_BIST_STS_bist_done_mask                                              (0x00000001)
#define SD_SDIO_BIST_STS_bist_done(data)                                             (0x00000001&((data)<<0))
#define SD_SDIO_BIST_STS_bist_done_src(data)                                         ((0x00000001&(data))>>0)
#define SD_SDIO_BIST_STS_get_bist_done(data)                                         ((0x00000001&(data))>>0)


#define SD_SDIO_IP_BIST_CTL                                                          0x98010488
#define SD_SDIO_IP_BIST_CTL_reg_addr                                                 "0xD8010488"
#define SD_SDIO_IP_BIST_CTL_reg                                                      0xD8010488
#define set_SD_SDIO_IP_BIST_CTL_reg(data)   (*((volatile unsigned int*) SD_SDIO_IP_BIST_CTL_reg)=data)
#define get_SD_SDIO_IP_BIST_CTL_reg   (*((volatile unsigned int*) SD_SDIO_IP_BIST_CTL_reg))
#define SD_SDIO_IP_BIST_CTL_inst_adr                                                 "0x0022"
#define SD_SDIO_IP_BIST_CTL_inst                                                     0x0022
#define SD_SDIO_IP_BIST_CTL_bist_ring_buf_rme_0_shift                                (8)
#define SD_SDIO_IP_BIST_CTL_bist_ring_buf_rme_0_mask                                 (0x00000100)
#define SD_SDIO_IP_BIST_CTL_bist_ring_buf_rme_0(data)                                (0x00000100&((data)<<8))
#define SD_SDIO_IP_BIST_CTL_bist_ring_buf_rme_0_src(data)                            ((0x00000100&(data))>>8)
#define SD_SDIO_IP_BIST_CTL_get_bist_ring_buf_rme_0(data)                            ((0x00000100&(data))>>8)
#define SD_SDIO_IP_BIST_CTL_bist_ring_buf_rm_0_shift                                 (4)
#define SD_SDIO_IP_BIST_CTL_bist_ring_buf_rm_0_mask                                  (0x000000F0)
#define SD_SDIO_IP_BIST_CTL_bist_ring_buf_rm_0(data)                                 (0x000000F0&((data)<<4))
#define SD_SDIO_IP_BIST_CTL_bist_ring_buf_rm_0_src(data)                             ((0x000000F0&(data))>>4)
#define SD_SDIO_IP_BIST_CTL_get_bist_ring_buf_rm_0(data)                             ((0x000000F0&(data))>>4)
#define SD_SDIO_IP_BIST_CTL_bist_drf_test_resume_shift                               (3)
#define SD_SDIO_IP_BIST_CTL_bist_drf_test_resume_mask                                (0x00000008)
#define SD_SDIO_IP_BIST_CTL_bist_drf_test_resume(data)                               (0x00000008&((data)<<3))
#define SD_SDIO_IP_BIST_CTL_bist_drf_test_resume_src(data)                           ((0x00000008&(data))>>3)
#define SD_SDIO_IP_BIST_CTL_get_bist_drf_test_resume(data)                           ((0x00000008&(data))>>3)
#define SD_SDIO_IP_BIST_CTL_bist_drf_mode_shift                                      (2)
#define SD_SDIO_IP_BIST_CTL_bist_drf_mode_mask                                       (0x00000004)
#define SD_SDIO_IP_BIST_CTL_bist_drf_mode(data)                                      (0x00000004&((data)<<2))
#define SD_SDIO_IP_BIST_CTL_bist_drf_mode_src(data)                                  ((0x00000004&(data))>>2)
#define SD_SDIO_IP_BIST_CTL_get_bist_drf_mode(data)                                  ((0x00000004&(data))>>2)
#define SD_SDIO_IP_BIST_CTL_bist_en_shift                                            (1)
#define SD_SDIO_IP_BIST_CTL_bist_en_mask                                             (0x00000002)
#define SD_SDIO_IP_BIST_CTL_bist_en(data)                                            (0x00000002&((data)<<1))
#define SD_SDIO_IP_BIST_CTL_bist_en_src(data)                                        ((0x00000002&(data))>>1)
#define SD_SDIO_IP_BIST_CTL_get_bist_en(data)                                        ((0x00000002&(data))>>1)
#define SD_SDIO_IP_BIST_CTL_bist_ls_shift                                            (0)
#define SD_SDIO_IP_BIST_CTL_bist_ls_mask                                             (0x00000001)
#define SD_SDIO_IP_BIST_CTL_bist_ls(data)                                            (0x00000001&((data)<<0))
#define SD_SDIO_IP_BIST_CTL_bist_ls_src(data)                                        ((0x00000001&(data))>>0)
#define SD_SDIO_IP_BIST_CTL_get_bist_ls(data)                                        ((0x00000001&(data))>>0)


#define SD_SDIO_IP_BIST_STS                                                          0x9801048C
#define SD_SDIO_IP_BIST_STS_reg_addr                                                 "0xD801048C"
#define SD_SDIO_IP_BIST_STS_reg                                                      0xD801048C
#define set_SD_SDIO_IP_BIST_STS_reg(data)   (*((volatile unsigned int*) SD_SDIO_IP_BIST_STS_reg)=data)
#define get_SD_SDIO_IP_BIST_STS_reg   (*((volatile unsigned int*) SD_SDIO_IP_BIST_STS_reg))
#define SD_SDIO_IP_BIST_STS_inst_adr                                                 "0x0023"
#define SD_SDIO_IP_BIST_STS_inst                                                     0x0023
#define SD_SDIO_IP_BIST_STS_bist_drf_start_pause_shift                               (4)
#define SD_SDIO_IP_BIST_STS_bist_drf_start_pause_mask                                (0x00000010)
#define SD_SDIO_IP_BIST_STS_bist_drf_start_pause(data)                               (0x00000010&((data)<<4))
#define SD_SDIO_IP_BIST_STS_bist_drf_start_pause_src(data)                           ((0x00000010&(data))>>4)
#define SD_SDIO_IP_BIST_STS_get_bist_drf_start_pause(data)                           ((0x00000010&(data))>>4)
#define SD_SDIO_IP_BIST_STS_bist_drf_fail_shift                                      (3)
#define SD_SDIO_IP_BIST_STS_bist_drf_fail_mask                                       (0x00000008)
#define SD_SDIO_IP_BIST_STS_bist_drf_fail(data)                                      (0x00000008&((data)<<3))
#define SD_SDIO_IP_BIST_STS_bist_drf_fail_src(data)                                  ((0x00000008&(data))>>3)
#define SD_SDIO_IP_BIST_STS_get_bist_drf_fail(data)                                  ((0x00000008&(data))>>3)
#define SD_SDIO_IP_BIST_STS_bist_drf_done_shift                                      (2)
#define SD_SDIO_IP_BIST_STS_bist_drf_done_mask                                       (0x00000004)
#define SD_SDIO_IP_BIST_STS_bist_drf_done(data)                                      (0x00000004&((data)<<2))
#define SD_SDIO_IP_BIST_STS_bist_drf_done_src(data)                                  ((0x00000004&(data))>>2)
#define SD_SDIO_IP_BIST_STS_get_bist_drf_done(data)                                  ((0x00000004&(data))>>2)
#define SD_SDIO_IP_BIST_STS_bist_fail_shift                                          (1)
#define SD_SDIO_IP_BIST_STS_bist_fail_mask                                           (0x00000002)
#define SD_SDIO_IP_BIST_STS_bist_fail(data)                                          (0x00000002&((data)<<1))
#define SD_SDIO_IP_BIST_STS_bist_fail_src(data)                                      ((0x00000002&(data))>>1)
#define SD_SDIO_IP_BIST_STS_get_bist_fail(data)                                      ((0x00000002&(data))>>1)
#define SD_SDIO_IP_BIST_STS_bist_done_shift                                          (0)
#define SD_SDIO_IP_BIST_STS_bist_done_mask                                           (0x00000001)
#define SD_SDIO_IP_BIST_STS_bist_done(data)                                          (0x00000001&((data)<<0))
#define SD_SDIO_IP_BIST_STS_bist_done_src(data)                                      ((0x00000001&(data))>>0)
#define SD_SDIO_IP_BIST_STS_get_bist_done(data)                                      ((0x00000001&(data))>>0)


#define SD_SPEED_SENSOR_CTRL_0                                                       0x98010490
#define SD_SPEED_SENSOR_CTRL_1                                                       0x98010494
#define SD_SPEED_SENSOR_CTRL_0_reg_addr                                              "0xD8010490"
#define SD_SPEED_SENSOR_CTRL_1_reg_addr                                              "0xD8010494"
#define SD_SPEED_SENSOR_CTRL_0_reg                                                   0xD8010490
#define SD_SPEED_SENSOR_CTRL_1_reg                                                   0xD8010494
#define set_SD_SPEED_SENSOR_CTRL_0_reg(data)   (*((volatile unsigned int*) SD_SPEED_SENSOR_CTRL_0_reg)=data)
#define set_SD_SPEED_SENSOR_CTRL_1_reg(data)   (*((volatile unsigned int*) SD_SPEED_SENSOR_CTRL_1_reg)=data)
#define get_SD_SPEED_SENSOR_CTRL_0_reg   (*((volatile unsigned int*) SD_SPEED_SENSOR_CTRL_0_reg))
#define get_SD_SPEED_SENSOR_CTRL_1_reg   (*((volatile unsigned int*) SD_SPEED_SENSOR_CTRL_1_reg))
#define SD_SPEED_SENSOR_CTRL_0_inst_adr                                              "0x0024"
#define SD_SPEED_SENSOR_CTRL_1_inst_adr                                              "0x0025"
#define SD_SPEED_SENSOR_CTRL_0_inst                                                  0x0024
#define SD_SPEED_SENSOR_CTRL_1_inst                                                  0x0025
#define SD_SPEED_SENSOR_CTRL_sensor_clk_en_shift                                     (26)
#define SD_SPEED_SENSOR_CTRL_sensor_clk_en_mask                                      (0x04000000)
#define SD_SPEED_SENSOR_CTRL_sensor_clk_en(data)                                     (0x04000000&((data)<<26))
#define SD_SPEED_SENSOR_CTRL_sensor_clk_en_src(data)                                 ((0x04000000&(data))>>26)
#define SD_SPEED_SENSOR_CTRL_get_sensor_clk_en(data)                                 ((0x04000000&(data))>>26)
#define SD_SPEED_SENSOR_CTRL_speed_en_shift                                          (25)
#define SD_SPEED_SENSOR_CTRL_speed_en_mask                                           (0x02000000)
#define SD_SPEED_SENSOR_CTRL_speed_en(data)                                          (0x02000000&((data)<<25))
#define SD_SPEED_SENSOR_CTRL_speed_en_src(data)                                      ((0x02000000&(data))>>25)
#define SD_SPEED_SENSOR_CTRL_get_speed_en(data)                                      ((0x02000000&(data))>>25)
#define SD_SPEED_SENSOR_CTRL_daya_in_shift                                           (5)
#define SD_SPEED_SENSOR_CTRL_daya_in_mask                                            (0x01FFFFE0)
#define SD_SPEED_SENSOR_CTRL_daya_in(data)                                           (0x01FFFFE0&((data)<<5))
#define SD_SPEED_SENSOR_CTRL_daya_in_src(data)                                       ((0x01FFFFE0&(data))>>5)
#define SD_SPEED_SENSOR_CTRL_get_daya_in(data)                                       ((0x01FFFFE0&(data))>>5)
#define SD_SPEED_SENSOR_CTRL_wire_sel_shift                                          (4)
#define SD_SPEED_SENSOR_CTRL_wire_sel_mask                                           (0x00000010)
#define SD_SPEED_SENSOR_CTRL_wire_sel(data)                                          (0x00000010&((data)<<4))
#define SD_SPEED_SENSOR_CTRL_wire_sel_src(data)                                      ((0x00000010&(data))>>4)
#define SD_SPEED_SENSOR_CTRL_get_wire_sel(data)                                      ((0x00000010&(data))>>4)
#define SD_SPEED_SENSOR_CTRL_ro_sel_shift                                            (1)
#define SD_SPEED_SENSOR_CTRL_ro_sel_mask                                             (0x0000000E)
#define SD_SPEED_SENSOR_CTRL_ro_sel(data)                                            (0x0000000E&((data)<<1))
#define SD_SPEED_SENSOR_CTRL_ro_sel_src(data)                                        ((0x0000000E&(data))>>1)
#define SD_SPEED_SENSOR_CTRL_get_ro_sel(data)                                        ((0x0000000E&(data))>>1)
#define SD_SPEED_SENSOR_CTRL_rstn_shift                                              (0)
#define SD_SPEED_SENSOR_CTRL_rstn_mask                                               (0x00000001)
#define SD_SPEED_SENSOR_CTRL_rstn(data)                                              (0x00000001&((data)<<0))
#define SD_SPEED_SENSOR_CTRL_rstn_src(data)                                          ((0x00000001&(data))>>0)
#define SD_SPEED_SENSOR_CTRL_get_rstn(data)                                          ((0x00000001&(data))>>0)


#define SD_SPEED_SENSOR_OUT1_0                                                       0x9801049C
#define SD_SPEED_SENSOR_OUT1_1                                                       0x980104A0
#define SD_SPEED_SENSOR_OUT1_0_reg_addr                                              "0xD801049C"
#define SD_SPEED_SENSOR_OUT1_1_reg_addr                                              "0xD80104A0"
#define SD_SPEED_SENSOR_OUT1_0_reg                                                   0xD801049C
#define SD_SPEED_SENSOR_OUT1_1_reg                                                   0xD80104A0
#define set_SD_SPEED_SENSOR_OUT1_0_reg(data)   (*((volatile unsigned int*) SD_SPEED_SENSOR_OUT1_0_reg)=data)
#define set_SD_SPEED_SENSOR_OUT1_1_reg(data)   (*((volatile unsigned int*) SD_SPEED_SENSOR_OUT1_1_reg)=data)
#define get_SD_SPEED_SENSOR_OUT1_0_reg   (*((volatile unsigned int*) SD_SPEED_SENSOR_OUT1_0_reg))
#define get_SD_SPEED_SENSOR_OUT1_1_reg   (*((volatile unsigned int*) SD_SPEED_SENSOR_OUT1_1_reg))
#define SD_SPEED_SENSOR_OUT1_0_inst_adr                                              "0x0027"
#define SD_SPEED_SENSOR_OUT1_1_inst_adr                                              "0x0028"
#define SD_SPEED_SENSOR_OUT1_0_inst                                                  0x0027
#define SD_SPEED_SENSOR_OUT1_1_inst                                                  0x0028
#define SD_SPEED_SENSOR_OUT1_count_out_shift                                         (1)
#define SD_SPEED_SENSOR_OUT1_count_out_mask                                          (0x001FFFFE)
#define SD_SPEED_SENSOR_OUT1_count_out(data)                                         (0x001FFFFE&((data)<<1))
#define SD_SPEED_SENSOR_OUT1_count_out_src(data)                                     ((0x001FFFFE&(data))>>1)
#define SD_SPEED_SENSOR_OUT1_get_count_out(data)                                     ((0x001FFFFE&(data))>>1)
#define SD_SPEED_SENSOR_OUT1_ready_shift                                             (0)
#define SD_SPEED_SENSOR_OUT1_ready_mask                                              (0x00000001)
#define SD_SPEED_SENSOR_OUT1_ready(data)                                             (0x00000001&((data)<<0))
#define SD_SPEED_SENSOR_OUT1_ready_src(data)                                         ((0x00000001&(data))>>0)
#define SD_SPEED_SENSOR_OUT1_get_ready(data)                                         ((0x00000001&(data))>>0)


#define SD_SPEED_SENSOR_OUT2_0                                                       0x980104A4
#define SD_SPEED_SENSOR_OUT2_1                                                       0x980104A8
#define SD_SPEED_SENSOR_OUT2_0_reg_addr                                              "0xD80104A4"
#define SD_SPEED_SENSOR_OUT2_1_reg_addr                                              "0xD80104A8"
#define SD_SPEED_SENSOR_OUT2_0_reg                                                   0xD80104A4
#define SD_SPEED_SENSOR_OUT2_1_reg                                                   0xD80104A8
#define set_SD_SPEED_SENSOR_OUT2_0_reg(data)   (*((volatile unsigned int*) SD_SPEED_SENSOR_OUT2_0_reg)=data)
#define set_SD_SPEED_SENSOR_OUT2_1_reg(data)   (*((volatile unsigned int*) SD_SPEED_SENSOR_OUT2_1_reg)=data)
#define get_SD_SPEED_SENSOR_OUT2_0_reg   (*((volatile unsigned int*) SD_SPEED_SENSOR_OUT2_0_reg))
#define get_SD_SPEED_SENSOR_OUT2_1_reg   (*((volatile unsigned int*) SD_SPEED_SENSOR_OUT2_1_reg))
#define SD_SPEED_SENSOR_OUT2_0_inst_adr                                              "0x0029"
#define SD_SPEED_SENSOR_OUT2_1_inst_adr                                              "0x002A"
#define SD_SPEED_SENSOR_OUT2_0_inst                                                  0x0029
#define SD_SPEED_SENSOR_OUT2_1_inst                                                  0x002A
#define SD_SPEED_SENSOR_OUT2_dbgo_shift                                              (1)
#define SD_SPEED_SENSOR_OUT2_dbgo_mask                                               (0x0001FFFE)
#define SD_SPEED_SENSOR_OUT2_dbgo(data)                                              (0x0001FFFE&((data)<<1))
#define SD_SPEED_SENSOR_OUT2_dbgo_src(data)                                          ((0x0001FFFE&(data))>>1)
#define SD_SPEED_SENSOR_OUT2_get_dbgo(data)                                          ((0x0001FFFE&(data))>>1)
#define SD_SPEED_SENSOR_OUT2_wsort_go_shift                                          (0)
#define SD_SPEED_SENSOR_OUT2_wsort_go_mask                                           (0x00000001)
#define SD_SPEED_SENSOR_OUT2_wsort_go(data)                                          (0x00000001&((data)<<0))
#define SD_SPEED_SENSOR_OUT2_wsort_go_src(data)                                      ((0x00000001&(data))>>0)
#define SD_SPEED_SENSOR_OUT2_get_wsort_go(data)                                      ((0x00000001&(data))>>0)


#define SD_SRAM_CTL                                                                  0x98010A00
#define SD_SRAM_CTL_reg_addr                                                         "0xD8010A00"
#define SD_SRAM_CTL_reg                                                              0xD8010A00
#define set_SD_SRAM_CTL_reg(data)   (*((volatile unsigned int*) SD_SRAM_CTL_reg)=data)
#define get_SD_SRAM_CTL_reg   (*((volatile unsigned int*) SD_SRAM_CTL_reg))
#define SD_SRAM_CTL_inst_adr                                                         "0x0080"
#define SD_SRAM_CTL_inst                                                             0x0080
#define SD_SRAM_CTL_mcu_buf_access_shift                                             (1)
#define SD_SRAM_CTL_mcu_buf_access_mask                                              (0x00000006)
#define SD_SRAM_CTL_mcu_buf_access(data)                                             (0x00000006&((data)<<1))
#define SD_SRAM_CTL_mcu_buf_access_src(data)                                         ((0x00000006&(data))>>1)
#define SD_SRAM_CTL_get_mcu_buf_access(data)                                         ((0x00000006&(data))>>1)
#define SD_SRAM_CTL_mcu_sel_shift                                                    (0)
#define SD_SRAM_CTL_mcu_sel_mask                                                     (0x00000001)
#define SD_SRAM_CTL_mcu_sel(data)                                                    (0x00000001&((data)<<0))
#define SD_SRAM_CTL_mcu_sel_src(data)                                                ((0x00000001&(data))>>0)
#define SD_SRAM_CTL_get_mcu_sel(data)                                                ((0x00000001&(data))>>0)


#define SD_IP_CTL                                                                    0x98010A10
#define SD_IP_CTL_reg_addr                                                           "0xD8010A10"
#define SD_IP_CTL_reg                                                                0xD8010A10
#define set_SD_IP_CTL_reg(data)   (*((volatile unsigned int*) SD_IP_CTL_reg)=data)
#define get_SD_IP_CTL_reg   (*((volatile unsigned int*) SD_IP_CTL_reg))
#define SD_IP_CTL_inst_adr                                                           "0x0084"
#define SD_IP_CTL_inst                                                               0x0084
#define SD_IP_CTL_Dbus_endian_sel_shift                                              (2)
#define SD_IP_CTL_Dbus_endian_sel_mask                                               (0x00000004)
#define SD_IP_CTL_Dbus_endian_sel(data)                                              (0x00000004&((data)<<2))
#define SD_IP_CTL_Dbus_endian_sel_src(data)                                          ((0x00000004&(data))>>2)
#define SD_IP_CTL_get_Dbus_endian_sel(data)                                          ((0x00000004&(data))>>2)
#define SD_IP_CTL_L4_gated_disable_shift                                             (1)
#define SD_IP_CTL_L4_gated_disable_mask                                              (0x00000002)
#define SD_IP_CTL_L4_gated_disable(data)                                             (0x00000002&((data)<<1))
#define SD_IP_CTL_L4_gated_disable_src(data)                                         ((0x00000002&(data))>>1)
#define SD_IP_CTL_get_L4_gated_disable(data)                                         ((0x00000002&(data))>>1)
#define SD_IP_CTL_suspend_n_shift                                                    (0)
#define SD_IP_CTL_suspend_n_mask                                                     (0x00000001)
#define SD_IP_CTL_suspend_n(data)                                                    (0x00000001&((data)<<0))
#define SD_IP_CTL_suspend_n_src(data)                                                ((0x00000001&(data))>>0)
#define SD_IP_CTL_get_suspend_n(data)                                                ((0x00000001&(data))>>0)


#define SD_DBG_1                                                                     0x98010A20
#define SD_DBG_1_reg_addr                                                            "0xD8010A20"
#define SD_DBG_1_reg                                                                 0xD8010A20
#define set_SD_DBG_1_reg(data)   (*((volatile unsigned int*) SD_DBG_1_reg)=data)
#define get_SD_DBG_1_reg   (*((volatile unsigned int*) SD_DBG_1_reg))
#define SD_DBG_1_inst_adr                                                            "0x0088"
#define SD_DBG_1_inst                                                                0x0088
#define SD_DBG_1_write_enable3_shift                                                 (9)
#define SD_DBG_1_write_enable3_mask                                                  (0x00000200)
#define SD_DBG_1_write_enable3(data)                                                 (0x00000200&((data)<<9))
#define SD_DBG_1_write_enable3_src(data)                                             ((0x00000200&(data))>>9)
#define SD_DBG_1_get_write_enable3(data)                                             ((0x00000200&(data))>>9)
#define SD_DBG_1_sel1_shift                                                          (6)
#define SD_DBG_1_sel1_mask                                                           (0x000001C0)
#define SD_DBG_1_sel1(data)                                                          (0x000001C0&((data)<<6))
#define SD_DBG_1_sel1_src(data)                                                      ((0x000001C0&(data))>>6)
#define SD_DBG_1_get_sel1(data)                                                      ((0x000001C0&(data))>>6)
#define SD_DBG_1_write_enable2_shift                                                 (5)
#define SD_DBG_1_write_enable2_mask                                                  (0x00000020)
#define SD_DBG_1_write_enable2(data)                                                 (0x00000020&((data)<<5))
#define SD_DBG_1_write_enable2_src(data)                                             ((0x00000020&(data))>>5)
#define SD_DBG_1_get_write_enable2(data)                                             ((0x00000020&(data))>>5)
#define SD_DBG_1_sel0_shift                                                          (2)
#define SD_DBG_1_sel0_mask                                                           (0x0000001C)
#define SD_DBG_1_sel0(data)                                                          (0x0000001C&((data)<<2))
#define SD_DBG_1_sel0_src(data)                                                      ((0x0000001C&(data))>>2)
#define SD_DBG_1_get_sel0(data)                                                      ((0x0000001C&(data))>>2)
#define SD_DBG_1_write_enable1_shift                                                 (1)
#define SD_DBG_1_write_enable1_mask                                                  (0x00000002)
#define SD_DBG_1_write_enable1(data)                                                 (0x00000002&((data)<<1))
#define SD_DBG_1_write_enable1_src(data)                                             ((0x00000002&(data))>>1)
#define SD_DBG_1_get_write_enable1(data)                                             ((0x00000002&(data))>>1)
#define SD_DBG_1_enable_shift                                                        (0)
#define SD_DBG_1_enable_mask                                                         (0x00000001)
#define SD_DBG_1_enable(data)                                                        (0x00000001&((data)<<0))
#define SD_DBG_1_enable_src(data)                                                    ((0x00000001&(data))>>0)
#define SD_DBG_1_get_enable(data)                                                    ((0x00000001&(data))>>0)


#define SD_DBG_2                                                                     0x98010A24
#define SD_DBG_2_reg_addr                                                            "0xD8010A24"
#define SD_DBG_2_reg                                                                 0xD8010A24
#define set_SD_DBG_2_reg(data)   (*((volatile unsigned int*) SD_DBG_2_reg)=data)
#define get_SD_DBG_2_reg   (*((volatile unsigned int*) SD_DBG_2_reg))
#define SD_DBG_2_inst_adr                                                            "0x0089"
#define SD_DBG_2_inst                                                                0x0089
#define SD_DBG_2_dbus_dbg_sel_shift                                                  (0)
#define SD_DBG_2_dbus_dbg_sel_mask                                                   (0x00000007)
#define SD_DBG_2_dbus_dbg_sel(data)                                                  (0x00000007&((data)<<0))
#define SD_DBG_2_dbus_dbg_sel_src(data)                                              ((0x00000007&(data))>>0)
#define SD_DBG_2_get_dbus_dbg_sel(data)                                              ((0x00000007&(data))>>0)


#define SD_DBG_3                                                                     0x98010A28
#define SD_DBG_3_reg_addr                                                            "0xD8010A28"
#define SD_DBG_3_reg                                                                 0xD8010A28
#define set_SD_DBG_3_reg(data)   (*((volatile unsigned int*) SD_DBG_3_reg)=data)
#define get_SD_DBG_3_reg   (*((volatile unsigned int*) SD_DBG_3_reg))
#define SD_DBG_3_inst_adr                                                            "0x008A"
#define SD_DBG_3_inst                                                                0x008A
#define SD_DBG_3_ip_dbg_sel_shift                                                    (0)
#define SD_DBG_3_ip_dbg_sel_mask                                                     (0x000000FF)
#define SD_DBG_3_ip_dbg_sel(data)                                                    (0x000000FF&((data)<<0))
#define SD_DBG_3_ip_dbg_sel_src(data)                                                ((0x000000FF&(data))>>0)
#define SD_DBG_3_get_ip_dbg_sel(data)                                                ((0x000000FF&(data))>>0)


#define SD_ISR                                                                       0x98010A30
#define SD_ISR_reg_addr                                                              "0xD8010A30"
#define SD_ISR_reg                                                                   0xD8010A30
#define set_SD_ISR_reg(data)   (*((volatile unsigned int*) SD_ISR_reg)=data)
#define get_SD_ISR_reg   (*((volatile unsigned int*) SD_ISR_reg))
#define SD_ISR_inst_adr                                                              "0x008C"
#define SD_ISR_inst                                                                  0x008C
#define SD_ISR_Int4_shift                                                            (4)
#define SD_ISR_Int4_mask                                                             (0x00000010)
#define SD_ISR_Int4(data)                                                            (0x00000010&((data)<<4))
#define SD_ISR_Int4_src(data)                                                        ((0x00000010&(data))>>4)
#define SD_ISR_get_Int4(data)                                                        ((0x00000010&(data))>>4)
#define SD_ISR_Int3_shift                                                            (3)
#define SD_ISR_Int3_mask                                                             (0x00000008)
#define SD_ISR_Int3(data)                                                            (0x00000008&((data)<<3))
#define SD_ISR_Int3_src(data)                                                        ((0x00000008&(data))>>3)
#define SD_ISR_get_Int3(data)                                                        ((0x00000008&(data))>>3)
#define SD_ISR_Int1_shift                                                            (1)
#define SD_ISR_Int1_mask                                                             (0x00000002)
#define SD_ISR_Int1(data)                                                            (0x00000002&((data)<<1))
#define SD_ISR_Int1_src(data)                                                        ((0x00000002&(data))>>1)
#define SD_ISR_get_Int1(data)                                                        ((0x00000002&(data))>>1)
#define SD_ISR_write_data_shift                                                      (0)
#define SD_ISR_write_data_mask                                                       (0x00000001)
#define SD_ISR_write_data(data)                                                      (0x00000001&((data)<<0))
#define SD_ISR_write_data_src(data)                                                  ((0x00000001&(data))>>0)
#define SD_ISR_get_write_data(data)                                                  ((0x00000001&(data))>>0)


#define SD_ISREN                                                                     0x98010A34
#define SD_ISREN_reg_addr                                                            "0xD8010A34"
#define SD_ISREN_reg                                                                 0xD8010A34
#define set_SD_ISREN_reg(data)   (*((volatile unsigned int*) SD_ISREN_reg)=data)
#define get_SD_ISREN_reg   (*((volatile unsigned int*) SD_ISREN_reg))
#define SD_ISREN_inst_adr                                                            "0x008D"
#define SD_ISREN_inst                                                                0x008D
#define SD_ISREN_Int4En_shift                                                        (4)
#define SD_ISREN_Int4En_mask                                                         (0x00000010)
#define SD_ISREN_Int4En(data)                                                        (0x00000010&((data)<<4))
#define SD_ISREN_Int4En_src(data)                                                    ((0x00000010&(data))>>4)
#define SD_ISREN_get_Int4En(data)                                                    ((0x00000010&(data))>>4)
#define SD_ISREN_Int3En_shift                                                        (3)
#define SD_ISREN_Int3En_mask                                                         (0x00000008)
#define SD_ISREN_Int3En(data)                                                        (0x00000008&((data)<<3))
#define SD_ISREN_Int3En_src(data)                                                    ((0x00000008&(data))>>3)
#define SD_ISREN_get_Int3En(data)                                                    ((0x00000008&(data))>>3)
#define SD_ISREN_Int1En_shift                                                        (1)
#define SD_ISREN_Int1En_mask                                                         (0x00000002)
#define SD_ISREN_Int1En(data)                                                        (0x00000002&((data)<<1))
#define SD_ISREN_Int1En_src(data)                                                    ((0x00000002&(data))>>1)
#define SD_ISREN_get_Int1En(data)                                                    ((0x00000002&(data))>>1)
#define SD_ISREN_write_data_shift                                                    (0)
#define SD_ISREN_write_data_mask                                                     (0x00000001)
#define SD_ISREN_write_data(data)                                                    (0x00000001&((data)<<0))
#define SD_ISREN_write_data_src(data)                                                ((0x00000001&(data))>>0)
#define SD_ISREN_get_write_data(data)                                                ((0x00000001&(data))>>0)


#define SD_PAD_CTL                                                                   0x98010A40
#define SD_PAD_CTL_reg_addr                                                          "0xD8010A40"
#define SD_PAD_CTL_reg                                                               0xD8010A40
#define set_SD_PAD_CTL_reg(data)   (*((volatile unsigned int*) SD_PAD_CTL_reg)=data)
#define get_SD_PAD_CTL_reg   (*((volatile unsigned int*) SD_PAD_CTL_reg))
#define SD_PAD_CTL_inst_adr                                                          "0x0090"
#define SD_PAD_CTL_inst                                                              0x0090
#define SD_PAD_CTL_tune3318_shift                                                    (0)
#define SD_PAD_CTL_tune3318_mask                                                     (0x00000001)
#define SD_PAD_CTL_tune3318(data)                                                    (0x00000001&((data)<<0))
#define SD_PAD_CTL_tune3318_src(data)                                                ((0x00000001&(data))>>0)
#define SD_PAD_CTL_get_tune3318(data)                                                ((0x00000001&(data))>>0)


#define SD_CKGEN_CTL                                                                 0x98010A44
#define SD_CKGEN_CTL_reg_addr                                                        "0xD8010A44"
#define SD_CKGEN_CTL_reg                                                             0xD8010A44
#define set_SD_CKGEN_CTL_reg(data)   (*((volatile unsigned int*) SD_CKGEN_CTL_reg)=data)
#define get_SD_CKGEN_CTL_reg   (*((volatile unsigned int*) SD_CKGEN_CTL_reg))
#define SD_CKGEN_CTL_inst_adr                                                        "0x0091"
#define SD_CKGEN_CTL_inst                                                            0x0091
#define SD_CKGEN_CTL_sd30_sample_change_shift                                        (18)
#define SD_CKGEN_CTL_sd30_sample_change_mask                                         (0x00040000)
#define SD_CKGEN_CTL_sd30_sample_change(data)                                        (0x00040000&((data)<<18))
#define SD_CKGEN_CTL_sd30_sample_change_src(data)                                    ((0x00040000&(data))>>18)
#define SD_CKGEN_CTL_get_sd30_sample_change(data)                                    ((0x00040000&(data))>>18)
#define SD_CKGEN_CTL_sd30_push_change_shift                                          (17)
#define SD_CKGEN_CTL_sd30_push_change_mask                                           (0x00020000)
#define SD_CKGEN_CTL_sd30_push_change(data)                                          (0x00020000&((data)<<17))
#define SD_CKGEN_CTL_sd30_push_change_src(data)                                      ((0x00020000&(data))>>17)
#define SD_CKGEN_CTL_get_sd30_push_change(data)                                      ((0x00020000&(data))>>17)
#define SD_CKGEN_CTL_crc_clk_change_shift                                            (16)
#define SD_CKGEN_CTL_crc_clk_change_mask                                             (0x00010000)
#define SD_CKGEN_CTL_crc_clk_change(data)                                            (0x00010000&((data)<<16))
#define SD_CKGEN_CTL_crc_clk_change_src(data)                                        ((0x00010000&(data))>>16)
#define SD_CKGEN_CTL_get_crc_clk_change(data)                                        ((0x00010000&(data))>>16)
#define SD_CKGEN_CTL_sd30_sample_clk_src_shift                                       (12)
#define SD_CKGEN_CTL_sd30_sample_clk_src_mask                                        (0x00003000)
#define SD_CKGEN_CTL_sd30_sample_clk_src(data)                                       (0x00003000&((data)<<12))
#define SD_CKGEN_CTL_sd30_sample_clk_src_src(data)                                   ((0x00003000&(data))>>12)
#define SD_CKGEN_CTL_get_sd30_sample_clk_src(data)                                   ((0x00003000&(data))>>12)
#define SD_CKGEN_CTL_sd30_push_clk_src_shift                                         (8)
#define SD_CKGEN_CTL_sd30_push_clk_src_mask                                          (0x00000300)
#define SD_CKGEN_CTL_sd30_push_clk_src(data)                                         (0x00000300&((data)<<8))
#define SD_CKGEN_CTL_sd30_push_clk_src_src(data)                                     ((0x00000300&(data))>>8)
#define SD_CKGEN_CTL_get_sd30_push_clk_src(data)                                     ((0x00000300&(data))>>8)
#define SD_CKGEN_CTL_crc_clk_src_shift                                               (4)
#define SD_CKGEN_CTL_crc_clk_src_mask                                                (0x00000030)
#define SD_CKGEN_CTL_crc_clk_src(data)                                               (0x00000030&((data)<<4))
#define SD_CKGEN_CTL_crc_clk_src_src(data)                                           ((0x00000030&(data))>>4)
#define SD_CKGEN_CTL_get_crc_clk_src(data)                                           ((0x00000030&(data))>>4)
#define SD_CKGEN_CTL_clk_div_shift                                                   (0)
#define SD_CKGEN_CTL_clk_div_mask                                                    (0x00000007)
#define SD_CKGEN_CTL_clk_div(data)                                                   (0x00000007&((data)<<0))
#define SD_CKGEN_CTL_clk_div_src(data)                                               ((0x00000007&(data))>>0)
#define SD_CKGEN_CTL_get_clk_div(data)                                               ((0x00000007&(data))>>0)


#define SD_DMA_RST                                                                   0x98010A50
#define SD_DMA_RST_reg_addr                                                          "0xD8010A50"
#define SD_DMA_RST_reg                                                               0xD8010A50
#define set_SD_DMA_RST_reg(data)   (*((volatile unsigned int*) SD_DMA_RST_reg)=data)
#define get_SD_DMA_RST_reg   (*((volatile unsigned int*) SD_DMA_RST_reg))
#define SD_DMA_RST_inst_adr                                                          "0x0094"
#define SD_DMA_RST_inst                                                              0x0094
#define SD_DMA_RST_dma_rstn_shift                                                    (0)
#define SD_DMA_RST_dma_rstn_mask                                                     (0x00000001)
#define SD_DMA_RST_dma_rstn(data)                                                    (0x00000001&((data)<<0))
#define SD_DMA_RST_dma_rstn_src(data)                                                ((0x00000001&(data))>>0)
#define SD_DMA_RST_get_dma_rstn(data)                                                ((0x00000001&(data))>>0)


#define SD_PAD_DRIVE                                                                 0x98010A54
#define SD_PAD_DRIVE_reg_addr                                                        "0xD8010A54"
#define SD_PAD_DRIVE_reg                                                             0xD8010A54
#define set_SD_PAD_DRIVE_reg(data)   (*((volatile unsigned int*) SD_PAD_DRIVE_reg)=data)
#define get_SD_PAD_DRIVE_reg   (*((volatile unsigned int*) SD_PAD_DRIVE_reg))
#define SD_PAD_DRIVE_inst_adr                                                        "0x0095"
#define SD_PAD_DRIVE_inst                                                            0x0095
#define SD_PAD_DRIVE_dat_pad_pmos_drive_shift                                        (20)
#define SD_PAD_DRIVE_dat_pad_pmos_drive_mask                                         (0x00F00000)
#define SD_PAD_DRIVE_dat_pad_pmos_drive(data)                                        (0x00F00000&((data)<<20))
#define SD_PAD_DRIVE_dat_pad_pmos_drive_src(data)                                    ((0x00F00000&(data))>>20)
#define SD_PAD_DRIVE_get_dat_pad_pmos_drive(data)                                    ((0x00F00000&(data))>>20)
#define SD_PAD_DRIVE_dat_pad_nmos_drive_shift                                        (16)
#define SD_PAD_DRIVE_dat_pad_nmos_drive_mask                                         (0x000F0000)
#define SD_PAD_DRIVE_dat_pad_nmos_drive(data)                                        (0x000F0000&((data)<<16))
#define SD_PAD_DRIVE_dat_pad_nmos_drive_src(data)                                    ((0x000F0000&(data))>>16)
#define SD_PAD_DRIVE_get_dat_pad_nmos_drive(data)                                    ((0x000F0000&(data))>>16)
#define SD_PAD_DRIVE_cmd_pad_pmos_drive_shift                                        (12)
#define SD_PAD_DRIVE_cmd_pad_pmos_drive_mask                                         (0x0000F000)
#define SD_PAD_DRIVE_cmd_pad_pmos_drive(data)                                        (0x0000F000&((data)<<12))
#define SD_PAD_DRIVE_cmd_pad_pmos_drive_src(data)                                    ((0x0000F000&(data))>>12)
#define SD_PAD_DRIVE_get_cmd_pad_pmos_drive(data)                                    ((0x0000F000&(data))>>12)
#define SD_PAD_DRIVE_cmd_pad_nmos_drive_shift                                        (8)
#define SD_PAD_DRIVE_cmd_pad_nmos_drive_mask                                         (0x00000F00)
#define SD_PAD_DRIVE_cmd_pad_nmos_drive(data)                                        (0x00000F00&((data)<<8))
#define SD_PAD_DRIVE_cmd_pad_nmos_drive_src(data)                                    ((0x00000F00&(data))>>8)
#define SD_PAD_DRIVE_get_cmd_pad_nmos_drive(data)                                    ((0x00000F00&(data))>>8)
#define SD_PAD_DRIVE_clk_pad_pmos_drive_shift                                        (4)
#define SD_PAD_DRIVE_clk_pad_pmos_drive_mask                                         (0x000000F0)
#define SD_PAD_DRIVE_clk_pad_pmos_drive(data)                                        (0x000000F0&((data)<<4))
#define SD_PAD_DRIVE_clk_pad_pmos_drive_src(data)                                    ((0x000000F0&(data))>>4)
#define SD_PAD_DRIVE_get_clk_pad_pmos_drive(data)                                    ((0x000000F0&(data))>>4)
#define SD_PAD_DRIVE_clk_pad_nmos_drive_shift                                        (0)
#define SD_PAD_DRIVE_clk_pad_nmos_drive_mask                                         (0x0000000F)
#define SD_PAD_DRIVE_clk_pad_nmos_drive(data)                                        (0x0000000F&((data)<<0))
#define SD_PAD_DRIVE_clk_pad_nmos_drive_src(data)                                    ((0x0000000F&(data))>>0)
#define SD_PAD_DRIVE_get_clk_pad_nmos_drive(data)                                    ((0x0000000F&(data))>>0)


#endif
