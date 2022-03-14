/*
 * DIO_Types.h
 *
 *  Created on: Mar 12, 2022
 *      Author: ayman abdo
 */

#ifndef REEP_MCAL_DIO_DIO_TYPES_H_
#define REEP_MCAL_DIO_DIO_TYPES_H_

typedef enum{
	groupA,
	groupB,
	groupC,
	groupD,
}DIO_Group_ID;

typedef enum{
	INPUT,
	OUTPUT,
}DIO_Group_Direction;

typedef enum{
	PIN0,
	PIN1,
	PIN2,
	PIN3,
	PIN4,
	PIN5,
	PIN6,
	PIN7,
}DIO_Pin_ID;

typedef enum{
	HIGH,
	LOW,
}DIO_Value;
#endif /* REEP_MCAL_DIO_DIO_TYPES_H_ */
