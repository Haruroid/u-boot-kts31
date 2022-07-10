#include <asm/arch/io.h>
#include <config.h>
#include <asm-generic/global_data_flags.h>
#include "module_test.h"

extern char console_buffer[CONFIG_SYS_CBSIZE + 1];

void mt_loop(void)
{
    int len = 0;

    TEST_PATTERN_T *item;

    for (;;) {
        len = readline (CONFIG_SYS_MTPROMPT);
        //printf("console_buffer:[%s]\n", console_buffer);

        if(strcmp(console_buffer, "exit") == 0){
            break;
        }

        for(item = test_items; item->test_func; item++){
            if(strcmp(console_buffer, item->name) == 0){
                printf("\n[start %s test]\n", item->name);
                item->test_func();
                printf("[finish %s test]", item->name);
                break;
            }
        }
    }

    return;
}

static void mt_init_uart1()
{
    /* disable uart1 reset bits and uart1 clocl bits , then enable it */
    *(volatile unsigned int *)0x98000004 = (unsigned int)0xf840e01;
    *(volatile unsigned int *)0x98000010 = (unsigned int)0x4801e406;

    *(volatile unsigned int *)0x98000004 = (unsigned int)0x1f840e01;
    *(volatile unsigned int *)0x98000010 = (unsigned int)0x5801e406;

    serial_init_uart(UART1);

    switch_into_mtmode();

    return;
}

void module_test(void)
{
	printf("Start to do module test .....\n");

    mt_init_uart1();

    mt_printf("[IN MODULE TEST MODE]\n");
    mt_loop();
    mt_printf("[EXIT MODULE TEST MODE]\n");

    switch_exit_mtmode();

    printf("Finish module test .....\n");

    rtk_plat_do_bootr_after_mt();

    return;
}
