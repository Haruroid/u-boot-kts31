#ifndef __INTERRUPT_H_20130321
#define __INTERRUPT_H_20130321

#ifdef SCPU_ARM

#define	INTERRUPT_SCPU_GLOBAL_TIMER	27
#define	INTERRUPT_SCPU_LEGACY_FIQ 	28
#define	INTERRUPT_SCPU_PRIVATE_TIMER 29
#define	INTERRUPT_SCPU_WATCHDOG    	30
#define	INTERRUPT_SCPU_IRQ      	31
#define	INTERRUPT_SCPU_NMI      	32
#define	INTERRUPT_SCPU_TIMER2  	    33
#define	INTERRUPT_SCPU_CP_SWC       34
#define	INTERRUPT_SCPU_MD_SWC       35
#define	INTERRUPT_SCPU_NAND_SWC	    36
#define	INTERRUPT_SCPU_AVCPU_SWC    37
#define	INTERRUPT_SCPU_I2C  	    38
#define	INTERRUPT_SCPU_TP  	        48
#define	INTERRUPT_SCPU_TIMER0  	    49
#define	INTERRUPT_SCPU_TIMER1  	    50
#define	INTERRUPT_SCPU_MISC_TOP_HIGH    51
#define	INTERRUPT_SCPU_SE     	    52
#define	INTERRUPT_SCPU_USB     	    53
#define	INTERRUPT_SCPU_ETN          54
#define INTERRUPT_SCPU_MIPI_CSI     55

#define INTERRUPT_SCPU_NAT          56
#define INTERRUPT_SCPU_SRC          57
#define INTERRUPT_CBUS_RX           58
#define INTERRUPT_CBUS_TX           59

//#define INTERRUPT_SCPU_GPU_GP       56
//#define INTERRUPT_SCPU_GPU_MMU      57
//#define INTERRUPT_SCPU_GPU_PP0      58
//#define INTERRUPT_SCPU_GPU_PPMMU0   59


#define INTERRUPT_SCPU_SATA         60


#define INTERRUPT_SCPU_EDP_MAC      61


//#define INTERRUPT_SCPU_PCIE         61
#define INTERRUPT_SCPU_TVE          62
#define INTERRUPT_SCPU_HDMI_TX_HDCP 63 //changed @20150602
//#define INTERRUPT_SCPU_PIF          64
#define INTERRUPT_SCPU_LVDS_MAC     64
#define INTERRUPT_SCPU_AVCPU_NWC    65
#define INTERRUPT_SCPU_HDMI_TX_TM   66 //changed @20150602 
#define INTERRUPT_SCPU_DCU          67
#define INTERRUPT_SCPU_SB2          68
#define INTERRUPT_SCPU_CP_NWC       69
#define INTERRUPT_SCPU_MD_NWC       70
#define INTERRUPT_SCPU_RTC          71
#define INTERRUPT_SCPU_TOP          72
#define INTERRUPT_SCPU_ISO          73
#define INTERRUPT_SCPU_EMMC         74
#define INTERRUPT_SCPU_NAND_NWC     75
#define INTERRUPT_SCPU_CARDREADER   76
#define INTERRUPT_SCPU_SDIO         77
#define INTERRUPT_SCPU_MEM_TRASH    78
#define INTERRUPT_SCPU_AXI_ERR      79
#define INTERRUPT_SCPU_PMU0         80
//#define INTERRUPT_SCPU_PMU1          81 // reserve
#define INTERRUPT_SCPU_MEM_TRASH_NEG 82
//#define INTERRUPT_SCPU_VE            83
#define INTERRUPT_SCPU_VO           83
#define INTERRUPT_SCPU_JPEG         84
#define INTERRUPT_SCPU_VE1          85
#define INTERRUPT_SCPU_VE2          86
#define INTERRUPT_SCPU_VE3          87

//#define INTERRUPT_SCPU_RTC_NO_BUFFER 87
#define INTERRUPT_SCPU_AI            88
#define INTERRUPT_SCPU_AO            89
#define INTERRUPT_SCPU_RSA           90
#define INTERRUPT_SCPU_PWRCUT        91
#define INTERRUPT_SCPU_USB_TYPEC     92
#ifdef PCIE20                                   
#define INTERRUPT_SCPU_PCIE          94
#else
#define INTERRUPT_SCPU_PCIE          93
#endif
#define INTERRUPT_SCPU_PCIE1         94
#define INTERRUPT_SCPU_SMARTCARD     95
#define INTERRUPT_SCPU_NIRQO_GIC     96
#define INTERRUPT_SCPU_EDP_AUX       97
#define INTERRUPT_SCPU_GPU_IRQGPU    98
#define INTERRUPT_SCPU_GPU_IRQJOB    99
#define INTERRUPT_SCPU_GPU_IRQMMU   100
#define INTERRUPT_SCPU_ETN_V_DET    101
#define INTERRUPT_SCPU_DPI_0        102
#define INTERRUPT_SCPU_DPI_1        103
#define INTERRUPT_SCPU_RX310_0      104
#define INTERRUPT_SCPU_RX310_1      105


//#define IRQ_MAX_ID	           128


/*
const ULONG   INTERRUPT_SCPU_ATA0      = 0x00000004;
const ULONG   INTERRUPT_SCPU_ATA1      = 0x00000004;
const ULONG   INTERRUPT_SCPU_NAND      = INTERRUPT_SCPU_MCP;    //bit 25
const ULONG   INTERRUPT_SCPU_MCP       = 0x00000200;    //bit  9
const ULONG   INTERRUPT_SCPU_SE        = 0x00000100;    //bit  8
const ULONG   INTERRUPT_SCPU_ACPU      = 0x00000001;    //bit  1
const ULONG   INTERRUPT_SCPU_VCPU      = 0x00000002;    //bit  2
const ULONG   INTERRUPT_SCPU_SB2       = 0x00000010;    //bit  4

const ULONG   INTERRUPT_SCPU_1394      = 0x00000004;
const ULONG   INTERRUPT_SCPU_USB       = 0x20000000;    //bit 29
const ULONG   INTERRUPT_SCPU_ETN       = 0x10000000;    //bit 28
const ULONG   INTERRUPT_SCPU_MISC      = 0x00080000;    //bit 19
const ULONG   INTERRUPT_SCPU_MIS_TIMER = 0x00010000;    //bit 16
const ULONG   INTERRUPT_SCPU_MIS_TIMER1= 0x00020000;    //bit 17
const ULONG   INTERRUPT_SCPU_TIMER5    = 0x00000020;    //?????
const ULONG   INTERRUPT_SCPU_MISC_RTC  = 0x00040000;    //bit 18
const ULONG   INTERRUPT_SCPU_TP        = 0x40000000;    //bit 30
const ULONG   INTERRUPT_SCPU_SDE       = 0x00000008;
const ULONG   INTERRUPT_SCPU_MD        = 61;//0x00000400;		//INTERRUPT_MD_NWC;
const ULONG   INTERRUPT_SCPU_PCI       = 0x00000001; */
#else

const ULONG   INTERRUPT_SCPU_ATA0      = 0x0004;
const ULONG   INTERRUPT_SCPU_ATA1      = 0x0004;
const ULONG   INTERRUPT_SCPU_NAND      = 0x0004;
const ULONG   INTERRUPT_SCPU_MCP       = 0x0008;
const ULONG   INTERRUPT_SCPU_SE        = 0x0008;
const ULONG   INTERRUPT_SCPU_ACPU      = 0x0008;
const ULONG   INTERRUPT_SCPU_VCPU      = 0x0008;
const ULONG   INTERRUPT_SCPU_SB2       = 0x0008;

const ULONG   INTERRUPT_SCPU_1394      = 0x0004;
const ULONG   INTERRUPT_SCPU_USB       = 0x0001;
const ULONG   INTERRUPT_SCPU_ETN       = 0x0001;
const ULONG   INTERRUPT_SCPU_MISC      = 0x0002;
const ULONG   INTERRUPT_SCPU_MIS_TIMER = 0x0010;
const ULONG   INTERRUPT_SCPU_TIMER5    = 0x0020;
const ULONG   INTERRUPT_SCPU_MISC_RTC  = 0x0020;
const ULONG   INTERRUPT_SCPU_TP        = 0x0008;
const ULONG   INTERRUPT_SCPU_SDE       = 0x0008;
const ULONG   INTERRUPT_SCPU_MD        = 0x0008;
const ULONG   INTERRUPT_SCPU_PCI       = 0x0001;
#endif

#endif
