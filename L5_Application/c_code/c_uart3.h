/*
 * c_uart3.h
 *
 *  Created on: 17-Feb-2019
 *      Author: scsap
 */

#ifndef C_UART3_H_
#define C_UART3_H_


#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdbool.h>

bool uart3_getchar(char *byte, uint32_t timeout_ms);
bool uart3_putchar(char byte, uint32_t timeout_ms);
bool uart3_init(unsigned int baudRate);
#ifdef __cplusplus
}
#endif


#endif /* C_UART3_H_ */

