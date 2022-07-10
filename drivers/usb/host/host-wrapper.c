
#include <common.h>
#include <errno.h>
#include <usb.h>
#include <asm/arch/usb.h>
#ifdef CONFIG_USB_EHCI
#include "ehci.h"
#endif
#ifdef CONFIG_USB_XHCI
#include "xhci.h"
#endif

#ifdef CONFIG_USB_EHCI
extern int ehci_lowlevel_init(int index, void **controller);
extern int ehci_lowlevel_stop(int index);
extern int ehci_submit_int_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
						int length, int interval);
extern int ehci_submit_bulk_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
								int length);
extern int ehci_submit_control_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
					int length, struct devrequest *setup);
#else
int ehci_lowlevel_init(int index, void **controller) {return 0;}
int ehci_lowlevel_stop(int index) {return 0;}
int ehci_submit_int_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
						int length, int interval) {return 0;}
int ehci_submit_bulk_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
								int length) {return 0;}
int ehci_submit_control_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
					int length, struct devrequest *setup) {return 0;}

#endif

#ifdef CONFIG_USB_XHCI
extern int xhci_lowlevel_init(int index, void **controller);
extern int xhci_lowlevel_stop(int index);
extern int xhci_submit_int_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
						int length, int interval);
extern int xhci_submit_bulk_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
								int length);
extern int xhci_submit_control_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
					int length, struct devrequest *setup);
extern int xhci_alloc_device(struct usb_device *udev);
#else
int xhci_lowlevel_init(int index, void **controller) {return 0;}
int xhci_lowlevel_stop(int index) {return 0;}
int xhci_submit_int_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
						int length, int interval) {return 0;}
int xhci_submit_bulk_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
								int length) {return 0;}
int xhci_submit_control_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
					int length, struct devrequest *setup) {return 0;}
int xhci_alloc_device(struct usb_device *udev) { return 0;}
#endif

int
submit_int_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
						int length, int interval)
{
	struct controller *ctrl= udev->controller;
	int ctrl_type = ctrl->ctrl_type;
	if (ctrl_type == CTRL_TYPE_EHCI) {
		return ehci_submit_int_msg(udev, pipe, buffer, length, interval);
	} else if (ctrl_type == CTRL_TYPE_XHCI) {
		return xhci_submit_int_msg(udev, pipe, buffer, length, interval);
	} else {
		return -EINVAL;
	}
}

int
submit_bulk_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
								int length)
{
	struct controller *ctrl= udev->controller;
	int ctrl_type = ctrl->ctrl_type;
	if (ctrl_type == CTRL_TYPE_EHCI) {
		return ehci_submit_bulk_msg(udev, pipe, buffer, length);
	} else if (ctrl_type == CTRL_TYPE_XHCI) {
		return xhci_submit_bulk_msg(udev, pipe, buffer, length);
	} else {
		return -EINVAL;
	}
}

int
submit_control_msg(struct usb_device *udev, unsigned long pipe, void *buffer,
					int length, struct devrequest *setup)
{
	struct controller *ctrl= udev->controller;
	int ctrl_type = ctrl->ctrl_type;
	if (ctrl_type == CTRL_TYPE_EHCI) {
		return ehci_submit_control_msg(udev, pipe, buffer, length, setup);
	} else if (ctrl_type == CTRL_TYPE_XHCI) {
		return xhci_submit_control_msg(udev, pipe, buffer, length, setup);
	} else {
		return -EINVAL;
	}
}

int usb_alloc_device(struct usb_device *udev) {
	struct controller *ctrl= udev->controller;
	int ctrl_type = ctrl->ctrl_type;
	if (ctrl_type == CTRL_TYPE_EHCI) {
		/*Note EHCI no use this function*/
		return 0;
	} else if (ctrl_type == CTRL_TYPE_XHCI) {
		return xhci_alloc_device(udev);
	} else {
		return -EINVAL;
	}

}

// CRT_SOFT_RESET1 usb part
#define rstn_usb_phy1 		(0x1 << 9)
#define rstn_usb_phy0 		(0x1 << 8)
#define rstn_usb 			(0x1 << 6)
#define rstn_usb3_p0_mdio 	(0x1 << 4)
#define rstn_usb3_phy0_pow 	(0x1 << 2)
// CRT_SOFT_RESET2 usb part
#define rstn_usb3_p1_mdio 	(0x1 << 5)
#define rstn_usb3_phy1_pow 	(0x1 << 4)
#define rstn_usb_phy2 		(0x1 << 3)
#define rstn_usb_phy3 		(0x1 << 2)
// CRT_CLOCK_ENABLE1 usb part
#define clk_en_usb 			(0x1 << 4)


static int usb_clk_enable(void) {
	static int enabled = 0;
	void *reset1 = RTD1295_CRT_BASE + 0x0;
	void *reset2 = RTD1295_CRT_BASE + 0x4;
	void *clk_en1 = RTD1295_CRT_BASE + 0xC;

	int reset1_pll_flag = rstn_usb_phy1 | rstn_usb_phy0 | rstn_usb3_phy0_pow;
	int reset2_pll_flag = rstn_usb_phy2;// | rstn_usb_phy3 | rstn_usb3_phy1_pow;
	int reset1_usb_flag = rstn_usb3_p0_mdio | rstn_usb;
	int reset2_usb_flag = 0;// rstn_usb3_p1_mdio;

	if (enabled == 1) {
		debug("Realtek-usb clock Enabled\n");
		return 0;
	}

	if (get_cpu_id() == RTK1296_CPU_ID) {
		debug("Realtek-usb 1296 u3host clock\n");
		if (get_rtd129x_cpu_revision() == RTD129x_CHIP_REVISION_A00) {
			__raw_writel(0x00000F05, 0x98007FA0);
			debug("Realtek-usb 1296 A00 enabled power\n");
		}
		reset2_pll_flag = rstn_usb_phy2 | rstn_usb_phy3 | rstn_usb3_phy1_pow;
		reset2_usb_flag = rstn_usb3_p1_mdio;
	}

	debug("Realtek-usb Start ....\n");
	debug("Realtek-usb init start soft_reset1=%x, soft_reset2=%x, clock_enable1=%x\n",
		(uint32_t)(__raw_readl((volatile u32*)reset1)),
		(uint32_t)(__raw_readl((volatile u32*)reset2)),
		(uint32_t)(__raw_readl((volatile u32*)clk_en1)));

	//Enable PLL
	__raw_writel(reset1_pll_flag | __raw_readl((volatile u32*)reset1), (volatile u32*) reset1);
	__raw_writel(reset2_pll_flag | __raw_readl((volatile u32*)reset2), (volatile u32*) reset2);

	mdelay(200);
	debug("Realtek-usb: Enable PLL soft_reset1=%x, soft_reset2=%x, clock_enable1=%x\n",
		(uint32_t)(__raw_readl((volatile u32*)reset1)),
		(uint32_t)(__raw_readl((volatile u32*)reset2)),
		(uint32_t)(__raw_readl((volatile u32*)clk_en1)));

	//Reset USB
	//__raw_writel(0x354 | __raw_readl((volatile u32*)reset1), (volatile u32*) reset1);
	//mdelay(10);

	//Turn on USB clk
	__raw_writel(clk_en_usb | __raw_readl((volatile u32*)clk_en1), (volatile u32*) clk_en1);
	__raw_writel(~clk_en_usb & __raw_readl((volatile u32*)clk_en1), (volatile u32*) clk_en1);
	mdelay(10);

	debug("Realtek-usb: trigger bit4 CLK_EN_USB soft_reset1=%x, soft_reset2=%x, clock_enable1=%x\n",
		(uint32_t)(__raw_readl((volatile u32*)reset1)),
		(uint32_t)(__raw_readl((volatile u32*)reset2)),
		(uint32_t)(__raw_readl((volatile u32*)clk_en1)));

	__raw_writel(reset1_usb_flag | __raw_readl((volatile u32*)reset1), (volatile u32*) reset1);
	__raw_writel(reset2_usb_flag | __raw_readl((volatile u32*)reset2), (volatile u32*) reset2);
	mdelay(10);
	debug("Realtek-usn: Turn on all RSTN_USB soft_reset1=%x, soft_reset2=%x, clock_enable1=%x\n",
		(uint32_t)(__raw_readl((volatile u32*)reset1)),
		(uint32_t)(__raw_readl((volatile u32*)reset2)),
		(uint32_t)(__raw_readl((volatile u32*)clk_en1)));

	__raw_writel(clk_en_usb | __raw_readl((volatile u32*)clk_en1), (volatile u32*) clk_en1);
	mdelay(10);
	debug("Realtek-usb: Turn on CLK_EN_USB soft_reset1=%x, soft_reset2=%x, clock_enable1=%x\n",
		(uint32_t)(__raw_readl((volatile u32*)reset1)),
		(uint32_t)(__raw_readl((volatile u32*)reset2)),
		(uint32_t)(__raw_readl((volatile u32*)clk_en1)));

	enabled = 1;
	return 0;
}

static int usb_power_enable(void) {
	int check, type_c_have_device = 0;

	if (get_cpu_id() == RTK1294_CPU_ID) {
		debug("Realtek-usb: Turn on 1294 usb port0 power\n");
		setISOGPIO(1, 1);
	} else {
		__raw_writel(0x00000003, (volatile u32*) RTD1295_USB_TYPEC_CTRL_CC1_0);
		__raw_writel(0x00000003, (volatile u32*) RTD1295_USB_TYPEC_CTRL_CC2_0);
		mdelay(1);

		check = __raw_readl((volatile u32*)RTD1295_USB_TYPEC_STS);
			debug("Realtek-usb: type_c cc status=0x%x\n", check);
		if ((check & 0x7) != 0x0) {
			debug("Realtek-usb: cc1 detect type_c have power\n");
			goto out;
		} else if ((check & 0x38) != 0x0) {
			debug("Realtek-usb: cc2 detect type_c have power\n");
			goto out;
		}

		__raw_writel(0x02400071, (volatile u32*) RTD1295_USB_TYPEC_CTRL_CC1_0);
		__raw_writel(0x00800071, (volatile u32*) RTD1295_USB_TYPEC_CTRL_CC2_0);

		/* set type c rd gpio */
		setISOGPIO(34, 1);

		mdelay(1);

		check = __raw_readl((volatile u32*)RTD1295_USB_TYPEC_STS);
		if ((check & 0x7) != 0x7) {
			debug("Realtek-usb: cc1 detect\n");
			type_c_have_device = 1;
		} else if ((check & 0x38) != 0x38) {
			debug("Realtek-usb: cc2 detect\n");
			type_c_have_device = 1;
		}

		//Type C 5V
		if (type_c_have_device) {
			debug("Realtek-usb: Turn on port 0 power\n");
			setISOGPIO(1, 1);
		} else {
			debug("Realtek-usb: Type C port no device, turn off port 0 power\n");
			setISOGPIO(1, 0);
		}
	}

out:
	//Usb2 5V
	// for 1294, 1295, 1296 QA board
	setGPIO(19, 1);

	if (get_cpu_id() == RTK1296_CPU_ID) {
		debug("Realtek-usb: Turn on 1296 usb port1 and port2 power\n");
		setISOGPIO(31, 1);
		debug("Realtek-usb: Turn on 1296 usb port3 power\n");
		setISOGPIO(32, 1);
	}
	return 0;

}

int usb_lowlevel_stop(int index)
{
	int ehci_count = USB_EHCI_CONTROLLER_COUNT;
	int xhci_count = USB_XHCI_CONTROLLER_COUNT;
	int max_count  = USB_MAX_CONTROLLER_COUNT;
	int ret = 0;
	if (index < ehci_count) {
		ret = ehci_lowlevel_stop(index);
	} else if (index < max_count) {
		ret = xhci_lowlevel_stop(index - ehci_count);
	} else {
		/* error case*/
		ret = -1;
	}
	return ret;
}

int usb_lowlevel_init(int index, void **controller)
{
	int ehci_count = USB_EHCI_CONTROLLER_COUNT;
	int xhci_count = USB_XHCI_CONTROLLER_COUNT;
	int max_count  = USB_MAX_CONTROLLER_COUNT;
	int ret = 0;

	ret = usb_clk_enable();

	ret = usb_power_enable();

	if (index < ehci_count) {
		ret = ehci_lowlevel_init(index, controller);
	} else if (index < max_count) {
		ret = xhci_lowlevel_init(index - ehci_count, controller);
	} else {
		/* error case*/
		ret = -1;
	}
	return ret;
}

