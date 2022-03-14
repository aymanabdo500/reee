/*
 * Bit_Math.h
 *
 *  Created on: Mar 12, 2022
 *      Author: ayman abdo
 */

#ifndef REEP_MCAL_DIO_BIT_MATH_H_
#define REEP_MCAL_DIO_BIT_MATH_H_
#define Set_Bit(Group_ID,Pin_ID)       (Group_ID) |= ( 1<<(Pin_ID) )
#define Clear_Bit(Group_ID,Pin_ID)    (Group_ID) &=~ ( 1<<(Pin_ID) )
#define Toggle_Bit(Group_ID,Pin_ID)    (Group_ID) ^= ( 1<<(Pin_ID) )
#define Get_Bit(Group_ID,Pin_ID)       (((Group_ID) >> (Pin_ID)) & 0x01)


#endif /* REEP_MCAL_DIO_BIT_MATH_H_ */
