/*
 * uart_config.h
 *
 * Created: 4/29/2023 7:38:24 PM
 *  Author: Mohamed Abdelsalam
 */ 


#ifndef UART_CONFIG_H_
#define UART_CONFIG_H_
/*************************************************************************************************/
/*frequency set*/
/*************************************************************************************************/
#define F_MCU_ 8000000UL    // unsigned long 8MGHz
/*************************************************************************************************/
typedef enum {
	Normal,
	Double,
}uart_Transmission_en;
/*************************************************************************************************/
/*Transmision_speed setting*/
/*************************************************************************************************/

#define Transmision_speed_ Normal
/*************************************************************************************************/

typedef enum {
	Asynchronous,
	Synchronous
}uart_Mode_en;

typedef enum {
	Disabled,
	Even,
	Reserved,
	Odd
}uart_Parity_Mode_en;

typedef enum {
	1_bit,
	2_bit
}uart_Stop_Bit_en;

typedef enum {
	5_Bit,
	6_Bit,
	7_Bit,
	8_Bit,
	9_Bit
}Uart_Character_Size_en;

typedef enum {
	BR_2400 = ,
	BR_4800,
	BR_9600,
}uart_BaudRate_en;
/*************************************************************************************************/
/*baudrate selection accoriding to settings */
/*************************************************************************************************/
#if (F_MCU_== 8000000UL)
#if (Transmision_speed_== Normal)
typedef enum {
	BR_2400 = 207,
	BR_4800 = 103,
	BR_9600 = 51
}uart_BaudRate_en;
#elif (Transmision_speed_== Double)
typedef enum {
	BR_2400 = 416,
	BR_4800 = 207,
	BR_9600 = 103
}uart_BaudRate_en;
#endif

#elif (F_MCU_== 4000000UL)
#if (Transmision_speed_== Normal)
typedef enum {
	BR_2400 = 207,
	BR_4800 = 51,
	BR_9600 = 25
}uart_BaudRate_en;
#elif (Transmision_speed_== Double)
typedef enum {
	BR_2400 = 207,
	BR_4800 = 103,
	BR_9600 = 51
}uart_BaudRate_en;
#endif
#endif
/*************************************************************************************************/

#endif /* UART_CONFIG_H_ */