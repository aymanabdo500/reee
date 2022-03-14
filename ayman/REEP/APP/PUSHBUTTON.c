/*
 * PUSHBUTTON.c
 *
 *  Created on: Mar 12, 2022
 *      Author: ayman abdo
 */
#include"../MCAL/DIO/DIO_Types.h"
#include"../MCAL/DIO/DIO.h"

void BUSHBUTTON()
{
DIO_Set_Pin_Direction(groupA , PIN0 , OUTPUT);
DIO_Set_Pin_Direction(groupA , PIN1 , INPUT);

while (1)
{
	DIO_Value PIN_VALUE=DIO_Get_Pin_Value(groupA , PIN1);
	if(PIN_VALUE == HIGH)
	{
		DIO_Set_Pin_Value(groupA , PIN0 , HIGH);
	}
	else if (PIN_VALUE == LOW)
		DIO_Set_Pin_Value(groupA , PIN0 , LOW);
	}
}
