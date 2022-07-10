#include <asm/arch/io.h>
#include <config.h>

void test1_func()
{
    mt_printf("[%s]\n", __func__);

    return;
}

