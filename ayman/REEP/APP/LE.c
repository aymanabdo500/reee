/*
 * LE.c
 *
 *  Created on: Mar 12, 2022
 *      Author: ayman abdo
 */
#include"../MCAL/DIO/DIO_Types.h"
#include"../MCAL/DIO/DIO.h"

void LE(){
	DIO_Set_Port_Direction(groupA,OUTPUT);
	DIO_Set_Port_Value(groupA,0xf0);
}
