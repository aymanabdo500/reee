/*
 * LEDDS.c
 *
 *  Created on: Mar 12, 2022
 *      Author: ayman abdo
 */

#include"../MCAL/DIO/DIO_Types.h"
#include"../MCAL/DIO/DIO.h"

void LEDDS()
{
DIO_Set_Pin_Direction(groupA ,PIN4 ,OUTPUT);
DIO_Set_Pin_Value(groupA,PIN4,HIGH);

DIO_Set_Pin_Direction(groupA ,PIN3 ,OUTPUT);
DIO_Set_Pin_Value(groupA,PIN3,HIGH);

}
