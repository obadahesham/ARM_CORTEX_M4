/*
 * GPIO_interface.h
 *
 *  Created on: May 11, 2023
 *      Author: obada
 */

#ifndef MCAL_GPIO_GPIO_INTERFACE_H_
#define MCAL_GPIO_GPIO_INTERFACE_H_

/******microcontrollers port******/
#define GPIO_PORTA             1
#define GPIO_PORTB             2
#define GPIO_PORTC             3
/*********output pin modes******/
#define GPIO_PUSH_PULL         1
#define GPIO_OPEN_DRAIN        2
/****output pin speed**********/
#define GPIO_LOW_SPEED        0
#define GPIO_MED_SPEED        1
#define GPIO_HIGH_SPEED       2
#define GPIO_VERY_HIGH_SPEED  3
/**********output pin value*****/

#define GPIO_OUTPUT_HIGH      1
#define GPIO_OUTPUT_LOW       0


/*this function is to initialize any pin to be output pin*/
void GPIO_VoidInitOutputPin(u8 Copy_u8PortID,u8 Copy_u8PinID,u8 Copy_u8PinType,u8 Copy_u8PinSpeed );
/*this function is to initialize any pin to be input pin*/
void GPIO_VoidInitIntputPin(u8 Copy_u8PortID,u8 Copy_u8PintID,u8 Copy_u8PullMode );
/*this function is to set the value of any input[high-low]*/
void GPIO_VoidSetOutputPinValue(u8 Copy_u8PortID,u8 Copy_u8PintID,u8 Copy_u8Value);
/*this function is to get the value of any input pin*/
u8 GPIO_u8GetInputPinValue(u8 Copy_u8PortID,u8 Copy_u8PintID);



#endif /* MCAL_GPIO_GPIO_INTERFACE_H_ */
