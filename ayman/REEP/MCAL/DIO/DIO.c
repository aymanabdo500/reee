/*
 * DIO.c
 *
 *  Created on: Mar 12, 2022
 *      Author: ayman abdo
 */
#include "DIO_Reg.h"
#include "DIO_Types.h"
#include "Bit_Math.h"

void DIO_Set_Port_Direction(DIO_Group_ID Group_ID , DIO_Group_Direction Direction )
{

	if (Direction == OUTPUT){
		switch (Group_ID)
		{
		case groupA: DDRA=0xff   ;   break;
		case groupB: DDRB=0xff   ;   break;
		case groupC: DDRC=0xff   ;   break;
		case groupD: DDRD=0xff   ;  break;
		}

	}
	else if (Direction == INPUT){
			switch (Group_ID)
			{
			case groupA: DDRA=0x00  ;   break;
			case groupB: DDRB=0x00  ;   break;
			case groupC: DDRC=0x00  ;   break;
			case groupD: DDRD=0x00  ;   break;
			}

		}
}
void DIO_Set_Port_Value( DIO_Group_ID Group_ID , unsigned char Value ){

	switch (Group_ID)
	{
	case groupA: PORTA = Value ; break;
	case groupB: PORTB = Value ; break;
	case groupC: PORTC = Value ; break;
	case groupD: PORTD = Value ; break;
	}
}

void DIO_Set_Pin_Direction(DIO_Group_ID Group_ID , DIO_Pin_ID Pin_ID ,DIO_Group_Direction Direction )
{
	if (Group_ID <=groupD && Pin_ID <= PIN7)
	{
		if(Direction == OUTPUT)
		{
			switch(Group_ID)
			{
			case groupA:DDRA |=(1<<(Pin_ID))  ;       break;
			case groupB:DDRB |=(1<<(Pin_ID))  ;       break;
			case groupC:DDRC |=(1<<(Pin_ID))  ;       break;
			case groupD:DDRD |=(1<<(Pin_ID))  ;       break;
			}
		}
		else if(Direction == INPUT)
				{
					switch(Group_ID)
					{
					case groupA:DDRA &=~(1<<(Pin_ID))  ;       break;
					case groupB:DDRB &=~(1<<(Pin_ID))  ;       break;
					case groupC:DDRC &=~(1<<(Pin_ID))  ;       break;
					case groupD:DDRD &=~(1<<(Pin_ID))  ;       break;
					}
				}
	}
}

void DIO_Set_Pin_Value(DIO_Group_ID Group_ID , DIO_Pin_ID Pin_ID , DIO_Value Value )
{
	if (Group_ID <=groupD && Pin_ID <= PIN7)
		{
		if (Value==HIGH)
		{
		switch(Group_ID)
		{
		case groupA :Set_Bit(PORTA ,Pin_ID )     ; break;
		case groupB :Set_Bit(PORTB ,Pin_ID )     ; break;
		case groupC :Set_Bit(PORTC ,Pin_ID )     ; break;
		case groupD :Set_Bit(PORTD ,Pin_ID )     ; break;
		}
		}
		}
	else if (Value== LOW)
			{
			switch(Group_ID)
			{
			case groupA :Clear_Bit(PORTA ,Pin_ID )     ; break;
			case groupB :Clear_Bit(PORTB ,Pin_ID )     ; break;
			case groupC :Clear_Bit(PORTC ,Pin_ID )     ; break;
			case groupD :Clear_Bit(PORTD ,Pin_ID )     ; break;
			}
			}
}

DIO_Value DIO_Get_Pin_Value(DIO_Group_ID Group_ID , DIO_Pin_ID Pin_ID  )
{
	DIO_Value PIN_VALUE;

	if(Group_ID <=groupD && Pin_ID <= PIN7)
	{

		switch(Group_ID)
				{
				case groupA :PIN_VALUE = Get_Bit(PINA ,Pin_ID );     ; break;
				case groupB :PIN_VALUE = Get_Bit (PINB ,Pin_ID )     ; break;
				case groupC :PIN_VALUE = Get_Bit(PINC ,Pin_ID )      ; break;
				case groupD :PIN_VALUE = Get_Bit(PIND ,Pin_ID )      ; break;
				}
	}







	return PIN_VALUE;
}
