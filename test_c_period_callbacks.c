#include "unity.h" // Single Unity Test Framework include
#include <stdio.h>

#include "c_period_callbacks.h"

//Mock the UART2 C header API
#include "Mockc_uart3.h"
#include "Mockio_led_display.h"
void setUp(void) {
}
void tearDown(void) {
}

void test_C_period_init(void) {
	
	uart3_init_ExpectAndReturn(9600,true);
	//uart3_putchar_IgnoreArg_byte();
	TEST_ASSERT_TRUE(C_period_init());
}

void test_C_period_1Hz(void) {
	//char ignore = 'S';
	uart3_putchar_IgnoreAndReturn(true);
	//TEST_ASSERT_TRUE(uart3_putchar('X',0));
    //uart3_putchar_ExpectAndReturn(ignore,0,true);
	//uart3_putchar_IgnoreArg_byte();
   
    C_period_1Hz(0);
}
