/*
 * DIO.h
 *
 *  Created on: Mar 12, 2022
 *      Author: ayman abdo
 */

#ifndef REEP_MCAL_DIO_DIO_H_
#define REEP_MCAL_DIO_DIO_H_

void DIO_Set_Port_Direction(DIO_Group_ID Group_ID , DIO_Group_Direction Direction );
void DIO_Set_Port_Value(DIO_Group_ID Group_ID , unsigned char Value );

void DIO_Set_Pin_Direction(DIO_Group_ID Group_ID , DIO_Pin_ID Pin_ID ,DIO_Group_Direction Direction );

void DIO_Set_Pin_Value(DIO_Group_ID Group_ID , DIO_Pin_ID Pin_ID , DIO_Value Value );
DIO_Value DIO_Get_Pin_Value(DIO_Group_ID Group_ID , DIO_Pin_ID Pin_ID  );

#endif /* REEP_MCAL_DIO_DIO_H_ */
