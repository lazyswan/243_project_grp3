/**
 * @file
 *
 * The purpose of this "C" callbacks is to provide the code to be able
 * to call pure C functions and unit-test it in C test framework
 */
#include <stdint.h>
#include <stdbool.h>
//#include "c_uart2.h"
#include "c_uart3.h"
#include <stdio.h>
#include "io_led_display.h"

bool C_period_init(void) {
   return uart3_init(9600);
    //return true;


}
bool C_period_reg_tlm(void) {
    return true;
}

void C_period_1Hz(uint32_t count) {
    //TX CODE
   (void) count;
   static char tx_data='E';
   while(tx_data>='A'){
       uart3_putchar(tx_data,0);
       tx_data--;
   }
   tx_data='E';


   /*//RX Code:
    char byte_rx = 0;
    uart3_getchar(&byte_rx,0);
    setNumber(byte_rx);*/
 }

void C_period_10Hz(uint32_t count) {
    (void) count;

}

void C_period_100Hz(uint32_t count) {
    (void) count;
}

void C_period_1000Hz(uint32_t count) {
    (void) count;
}
