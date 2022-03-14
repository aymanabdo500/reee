/*
 * DIO_Reg.h
 *
 *  Created on: Mar 12, 2022
 *      Author: ayman abdo
 */

#ifndef REEP_MCAL_DIO_DIO_REG_H_
#define REEP_MCAL_DIO_DIO_REG_H_



#define DDRA     *((volatile unsigned char*)58)
#define PORTA    *((volatile unsigned char*)0x3B)
#define PINA     *((volatile unsigned char*)0x39)

#define DDRB     *((volatile unsigned char*)0x37)
#define PORTB    *((volatile unsigned char*)0x38)
#define PINB     *((volatile unsigned char*)0x36)

#define DDRC     *((volatile unsigned char*)0x34)
#define PORTC    *((volatile unsigned char*)0x35)
#define PINC     *((volatile unsigned char*)0x33)

#define DDRD     *((volatile unsigned char*)0x31)
#define PORTD    *((volatile unsigned char*)0x32)
#define PIND     *((volatile unsigned char*)0x30)





#endif /* REEP_MCAL_DIO_DIO_REG_H_ */
