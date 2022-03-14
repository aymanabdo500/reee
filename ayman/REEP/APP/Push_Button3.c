/*
 * Push_Button3.c
 *
 *  Created on: Mar 13, 2022
 *      Author: ayman abdo
 */

#include <avr/delay.h>
#include"../MCAL/DIO/DIO_Types.h"
#include"../MCAL/DIO/DIO.h"

void Push_Button3()
{
	DIO_Set_Pin_Direction(groupA , PIN0 , OUTPUT);
	DIO_Set_Pin_Direction(groupA , PIN1 , OUTPUT);
	DIO_Set_Pin_Direction(groupA , PIN2 , OUTPUT);
	DIO_Set_Port_Direction(groupB , PIN0 , INPUT);
		DIO_Set_Port_Direction(groupB , PIN1 , INPUT);
		DIO_Set_Port_Direction(groupB , PIN2 , INPUT);
	while (1)
	{
		DIO_Value Putton0_Value=DIO_Get_Pin_Value(groupB , PIN0);
		DIO_Value Putton1_Value=DIO_Get_Pin_Value(groupB , PIN0);
		DIO_Value Putton2_Value=DIO_Get_Pin_Value(groupB , PIN0);

		if (Putton0_Value== HIGH && Putton1_Value==LOW && Putton2_Value== LOW)
		{
			DIO_Set_Pin_Value(groupA , PIN0 , HIGH);
			DIO_Set_Pin_Value(groupA , PIN1 , HIGH);
			DIO_Set_Pin_Value(groupA , PIN1 , HIGH);
		}
		else if (Putton0_Value== LOW && Putton1_Value==HIGH && Putton2_Value== LOW)
		{
			DIO_Set_Pin_Value(groupA , PIN0 , HIGH);
			DIO_Set_Pin_Value(groupA , PIN1 , LOW);
			DIO_Set_Pin_Value(groupA , PIN1 , LOW);
			_delay_ms(200);
			DIO_Set_Pin_Value(groupA , PIN0 , LOW);
			DIO_Set_Pin_Value(groupA , PIN1 , HIGH);
			DIO_Set_Pin_Value(groupA , PIN1 , LOW);
			_delay_ms(200);
			DIO_Set_Pin_Value(groupA , PIN0 , LOW);
			DIO_Set_Pin_Value(groupA , PIN1 , LOW);
			DIO_Set_Pin_Value(groupA , PIN1 , HIGH);

		}
		else if (Putton0_Value== LOW && Putton1_Value==LOW && Putton2_Value== HIGH)
		{
			DIO_Set_Pin_Value(groupA , PIN0 , LOW);
			DIO_Set_Pin_Value(groupA , PIN1 , LOW);
			DIO_Set_Pin_Value(groupA , PIN1 , LOW);
			_delay_ms(200);
			DIO_Set_Pin_Value(groupA , PIN0 , HIGH);
			DIO_Set_Pin_Value(groupA , PIN1 , LOW);
			DIO_Set_Pin_Value(groupA , PIN1 , LOW);
			_delay_ms(200);
			DIO_Set_Pin_Value(groupA , PIN0 , LOW);
			DIO_Set_Pin_Value(groupA , PIN1 , HIGH);
			DIO_Set_Pin_Value(groupA , PIN1 , LOW);

			DIO_Set_Pin_Value(groupA , PIN0 , HIGH);
			DIO_Set_Pin_Value(groupA , PIN1 , HIGH);
			DIO_Set_Pin_Value(groupA , PIN1 , LOW);
			_delay_ms(200);
			DIO_Set_Pin_Value(groupA , PIN0 , LOW);
			DIO_Set_Pin_Value(groupA , PIN1 , LOW);
			DIO_Set_Pin_Value(groupA , PIN1 , HIGH);
			_delay_ms(200);
			DIO_Set_Pin_Value(groupA , PIN0 , HIGH);
			DIO_Set_Pin_Value(groupA , PIN1 , LOW);
			DIO_Set_Pin_Value(groupA , PIN1 , HIGH);

		}
		else if (Putton0_Value== LOW && Putton1_Value==LOW && Putton2_Value== LOW)
				{
					DIO_Set_Pin_Value(groupA , PIN0 , LOW);
					DIO_Set_Pin_Value(groupA , PIN1 , LOW);
					DIO_Set_Pin_Value(groupA , PIN1 , LOW);
				}
	}

}
