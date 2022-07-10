#include <common.h>
//#include <platform_lib/board/gpio.h>
#include <asm/arch/io.h>
#include <asm/arch/rbus/misc_reg.h>
#include <asm/arch/rbus/iso_reg.h>

#define gpio_assert(x)		printf("assert assert assert!!!! GPIO_NUM=%d\n", GPIO_NUM)
#define iso_gpio_assert(x)	printf("assert assert assert!!!! ISOGPIO_NUM=%d\n", ISOGPIO_NUM)

int getGPIO(int GPIO_NUM) {
	int bitOffset;
	volatile int regAddr;
	int regValue;

	if(GPIO_NUM <= 31) {
		bitOffset = GPIO_NUM;

		// Set Direction to Input
		regAddr = (MIS_GP0DIR_reg);
		regValue = rtd_inl(regAddr);
		regValue = regValue & (~(0x01 << bitOffset));
		rtd_outl(regAddr, regValue);

		// Get Value
		regAddr = (MIS_GP0DATI_reg);
		regValue = rtd_inl(regAddr);
		if(regValue & (0x01 << bitOffset))
			return 1;
		else
			return 0;
	}
	else if(GPIO_NUM >= 32 && GPIO_NUM <= 63) {
		bitOffset = GPIO_NUM - 32;

		// Set Direction to Input
		regAddr = (MIS_GP1DIR_reg);
		regValue = rtd_inl(regAddr);
		regValue = regValue & (~(0x01 << bitOffset));
		rtd_outl(regAddr, regValue);

		// Get Value
		regAddr = (MIS_GP1DATI_reg);
		regValue = rtd_inl(regAddr);
		if(regValue & (0x01 << bitOffset))
			return 1;
		else
			return 0;
	}
	else if(GPIO_NUM >= 64 && GPIO_NUM <= 95) {
		bitOffset = GPIO_NUM - 64;

		// Set Direction to Input
		regAddr = (MIS_GP2DIR_reg);
		regValue = rtd_inl(regAddr);
		regValue = regValue & (~(0x01 << bitOffset));
		rtd_outl(regAddr, regValue);

		// Get Value
		regAddr = (MIS_GP2DATI_reg);
		regValue = rtd_inl(regAddr);
		if(regValue & (0x01 << bitOffset))
			return 1;
		else
			return 0;
	}
	else if(GPIO_NUM >= 96 && GPIO_NUM <= 100) {
		bitOffset = GPIO_NUM - 96;

		// Set Direction to Input
		regAddr = (MIS_GP3DIR_reg);
		regValue = rtd_inl(regAddr);
		regValue = regValue & (~(0x01 << bitOffset));
		rtd_outl(regAddr, regValue);

		// Get Value
		regAddr = (MIS_GP3DATI_reg);
		regValue = rtd_inl(regAddr);
		if(regValue & (0x01 << bitOffset))
			return 1;
		else
			return 0;
	}
	else { // no such GPIO pin!
		printf("no GPIO#%d pin\n",GPIO_NUM);
		return -1;
	}
}

int setGPIO(int GPIO_NUM, int value) {
	int bitOffset;
	volatile int regAddr;
	int regValue;

	if(GPIO_NUM <= 31) {
		bitOffset = GPIO_NUM;

		// Set Direction to Ouput
		regAddr = (MIS_GP0DIR_reg);
		regValue = rtd_inl(regAddr);
		regValue = regValue | (0x01 << bitOffset);
		rtd_outl(regAddr, regValue);

		// Set Value
		regAddr = (MIS_GP0DATO_reg);
		regValue = rtd_inl(regAddr);

		if(value)
			regValue = regValue | (0x01 << bitOffset);	// set to 1
		else
			regValue = regValue & (~(0x01 << bitOffset)); // set to 0

		rtd_outl(regAddr, regValue);

		return 0;
	}
	else if(GPIO_NUM >= 32 && GPIO_NUM <= 63) {
		bitOffset = GPIO_NUM - 32;

		// Set Direction to Ouput
		regAddr = (MIS_GP1DIR_reg);
		regValue = rtd_inl(regAddr);
		regValue = regValue | (0x01 << bitOffset);
		rtd_outl(regAddr, regValue);

		// Set Value
		regAddr = (MIS_GP1DATO_reg);
		regValue = rtd_inl(regAddr);

		if(value)
			regValue = regValue | (0x01 << bitOffset);	// set to 1
		else
			regValue = regValue & (~(0x01 << bitOffset)); // set to 0

		rtd_outl(regAddr, regValue);

		return 0;
	}
	else if(GPIO_NUM >= 64 && GPIO_NUM <= 95) {
		bitOffset = GPIO_NUM - 64;

		// Set Direction to Ouput
		regAddr = (MIS_GP2DIR_reg);
		regValue = rtd_inl(regAddr);
		regValue = regValue | (0x01 << bitOffset);
		rtd_outl(regAddr, regValue);

		// Set Value
		regAddr = (MIS_GP2DATO_reg);
		regValue = rtd_inl(regAddr);

		if(value)
			regValue = regValue | (0x01 << bitOffset);	// set to 1
		else
			regValue = regValue & (~(0x01 << bitOffset)); // set to 0

		rtd_outl(regAddr, regValue);

		return 0;
	}
	else if(GPIO_NUM >= 96 && GPIO_NUM <= 100) {
		bitOffset = GPIO_NUM - 96;

		// Set Direction to Ouput
		regAddr = (MIS_GP3DIR_reg);
		regValue = rtd_inl(regAddr);
		regValue = regValue | (0x01 << bitOffset);
		rtd_outl(regAddr, regValue);

		// Set Value
		regAddr = (MIS_GP3DATO_reg);
		regValue = rtd_inl(regAddr);

		if(value)
			regValue = regValue | (0x01 << bitOffset);	// set to 1
		else
			regValue = regValue & (~(0x01 << bitOffset)); // set to 0

		rtd_outl(regAddr, regValue);

		return 0;
	}
	else { // no such GPIO pin!
		printf("no GPIO#%d pin\n",GPIO_NUM);
		return -1;
	}
}

int getISOGPIO(int ISOGPIO_NUM)
{
	int bitOffset;
	volatile int regAddr;
	int regValue;

	if(ISOGPIO_NUM <= 31) {
		bitOffset = ISOGPIO_NUM;

		// Set Direction to Input
		regAddr = (ISO_GPDIR_reg);
		regValue = rtd_inl(regAddr);
		regValue = regValue & (~(0x01 << bitOffset));
		rtd_outl(regAddr, regValue);

		// Get Value
		regAddr = (ISO_GPDATI_reg);
		regValue = rtd_inl(regAddr);
		if(regValue & (0x01 << bitOffset))
			return 1;
		else
			return 0;
	}
	else if(ISOGPIO_NUM >= 32 && ISOGPIO_NUM <= 34) {
		bitOffset = ISOGPIO_NUM - 32;

		// Set Direction to Input
		regAddr = (ISO_GPDIR_1_reg);
		regValue = rtd_inl(regAddr);
		regValue = regValue & (~(0x01 << bitOffset));
		rtd_outl(regAddr, regValue);

		// Get Value
		regAddr = (ISO_GPDATI_1_reg);
		regValue = rtd_inl(regAddr);
		if(regValue & (0x01 << bitOffset))
			return 1;
		else
			return 0;
	}
	else { // no such ISO GPIO pin!
		printf("no ISOGPIO#%d pin\n",ISOGPIO_NUM);
		return -1;
	}
}

int setISOGPIO(int ISOGPIO_NUM, int value)
{
	int bitOffset;
	volatile int regAddr;
	int regValue;

	if(ISOGPIO_NUM <= 31) {
		bitOffset = ISOGPIO_NUM;

		// Set Direction to Ouput
		regAddr = (ISO_GPDIR_reg);
		regValue = rtd_inl(regAddr);
		regValue = regValue | (0x01 << bitOffset);
		rtd_outl(regAddr, regValue);

		// Set Value
		regAddr = (ISO_GPDATO_reg);
		regValue = rtd_inl(regAddr);

		if(value)
			regValue = regValue | (0x01 << bitOffset);  // set to 1
		else
			regValue = regValue & (~(0x01 << bitOffset)); // set to 0

		rtd_outl(regAddr, regValue);

		return 0;
	}
	else if(ISOGPIO_NUM >= 32 && ISOGPIO_NUM <= 34) {
		bitOffset = ISOGPIO_NUM - 32;

		// Set Direction to Ouput
		regAddr = (ISO_GPDIR_1_reg);
		regValue = rtd_inl(regAddr);
		regValue = regValue | (0x01 << bitOffset);
		rtd_outl(regAddr, regValue);

		// Set Value
		regAddr = (ISO_GPDATO_1_reg);
		regValue = rtd_inl(regAddr);

		if(value)
			regValue = regValue | (0x01 << bitOffset);  // set to 1
		else
			regValue = regValue & (~(0x01 << bitOffset)); // set to 0

		rtd_outl(regAddr, regValue);

		return 0;
	}
	else { // no such ISO GPIO pin!
		printf("no ISOGPIO#%d pin\n",ISOGPIO_NUM);
		return -1;
	}
}

#define RTK_MISC_GPIO_BASE_NUM	0
#define RTK_MISC_GPIO_END_NUM	100
#define RTK_ISO_GPIO_BASE_NUM   101
#define RTK_ISO_GPIO_END_NUM   	135
#define GPIO_DIRECTION_INPUT	2

static uint8_t gpioState[RTK_ISO_GPIO_END_NUM+1];

int gpio_request(unsigned gpio, const char *label)
{
	if (gpio > RTK_ISO_GPIO_END_NUM)
		return -1;

	gpioState[gpio] = GPIO_DIRECTION_INPUT;

	return 0;
}

int gpio_direction_output(unsigned gpio, int value)
{
	int ret;

	if (gpio > RTK_ISO_GPIO_END_NUM)
		return -1;

	if (value != gpioState[gpio])
	{
		if (gpio >= RTK_ISO_GPIO_BASE_NUM)
			ret = setISOGPIO(gpio - RTK_ISO_GPIO_BASE_NUM, value);
		else
			ret = setGPIO(gpio, value);

		if (ret >= 0)
			gpioState[gpio] = value;
	}

	return ret;
}

int gpio_set_value(unsigned gpio, int value)
{
	if (gpio > RTK_ISO_GPIO_END_NUM)
		return -1;

	if (GPIO_DIRECTION_INPUT == gpioState[gpio])
		return -1;

	return gpio_direction_output(gpio, value);
}

int gpio_get_value(unsigned gpio)
{
	int ret;

	if (gpio > RTK_ISO_GPIO_END_NUM)
		return -1;

	if (GPIO_DIRECTION_INPUT == gpioState[gpio]) {
		if (gpio >= RTK_ISO_GPIO_BASE_NUM)
			ret = getISOGPIO(gpio - RTK_ISO_GPIO_BASE_NUM);
		else
			ret = getGPIO(gpio);
	} else {
		ret = gpioState[gpio];
	}

	return ret;
}

enum {
	RTKGPIO_CMD_OUTPUT,
	RTKGPIO_CMD_INPUT,
};

cmd_tbl_t cmd_rtkgpio[] = {
	U_BOOT_CMD_MKENT(output, 4, 0, (void *)RTKGPIO_CMD_OUTPUT, "", ""),
	U_BOOT_CMD_MKENT(input, 3, 0, (void *)RTKGPIO_CMD_INPUT, "", ""),
};

int do_rtkgpio(cmd_tbl_t *cmdtp, int flag, int argc, char * const argv[])
{
	int ret;
	ulong ul_arg2 = 0;
	ulong ul_arg3 = 0;
	cmd_tbl_t *c;

	c = find_cmd_tbl(argv[1], cmd_rtkgpio, ARRAY_SIZE(cmd_rtkgpio));

	/* All commands require 'maxargs' arguments */
	if (!c || !((argc == (c->maxargs)))) {
		return cmd_usage(cmdtp);
	}

	/* arg2 used as pin number */
	if (argc > 2)
		ul_arg2 = simple_strtoul(argv[2], NULL, 0);

	/* arg3 used as pin value */
	if (argc > 3)
		ul_arg3 = simple_strtoul(argv[3], NULL, 0) & 0x1;

	switch ((int)c->cmd) {
	case RTKGPIO_CMD_INPUT:
		if (ul_arg2 > RTK_ISO_GPIO_END_NUM)
			ret = -1;
		else if (ul_arg2 >= RTK_ISO_GPIO_BASE_NUM)
			ret = getISOGPIO(ul_arg2 - RTK_ISO_GPIO_BASE_NUM);
		else
			ret = getGPIO(ul_arg2);
		if (ret >= 0)
		printf("pin %lu = %d\n", ul_arg2, ret);
		return ret;
	case RTKGPIO_CMD_OUTPUT:
		if (ul_arg2 > RTK_ISO_GPIO_END_NUM)
			ret = -1;
		else if (ul_arg2 >= RTK_ISO_GPIO_BASE_NUM)
			ret = setISOGPIO(ul_arg2 - RTK_ISO_GPIO_BASE_NUM, ul_arg3);
		else
			ret = setGPIO(ul_arg2, ul_arg3);
		return ret;
	default:
		/* We should never get here */
		return 1;
	}
}

U_BOOT_CMD(
	rtkgpio,	5,	1,	do_rtkgpio,
	"rtk gpio access",
	"output pin 0|1\n"
	"	- set pin as output and drive low or high\n"
	"rtkgpio intput pin\n"
	"	- set pin as input and read value"
);
