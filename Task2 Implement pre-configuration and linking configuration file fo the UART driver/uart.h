/*
 * uart.h
 *
 * Created: 4/29/2023 7:38:24 PM
 *  Author: Mohamed Abdelsalam
 */ 


#ifndef UART_H_
#define UART_H_
#include "../COMMON/memmap.h"

#define BAUDRATE 51
void UART_init(u16 baudrate);
void UART_get(u8 *data);
void UART_send(u8 data);


#endif /* UART_H_ */