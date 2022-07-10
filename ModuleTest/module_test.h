#ifndef _Kylin_MODULE_TEST_H_
#define _Kylin_MODULE_TEST_H_

#include <ft_test.h>

void test1_func(void);

typedef struct test_pattern {
    char name[16];
    void (*test_func)(void);
} TEST_PATTERN_T;

TEST_PATTERN_T test_items[] = {
    {"test1", test1_func},
    {"FTEST", ft_test_0},
    {NULL, NULL}
};

#endif
