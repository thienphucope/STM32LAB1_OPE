/*
 * fsm.c
 *
 *  Created on: 16 Sep 2024
 *      Author: HPVictus
 */


#include "fsm.h"



void run()
{
	switch(status){
	case 0:
		HAL_GPIO_WritePin(RED_LED_GPIO_Port, RED_LED_Pin, RESET); // RED ON
		HAL_GPIO_WritePin(YELLOW_LED_GPIO_Port, YELLOW_LED_Pin, SET); // YELLOW OFF
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port, GREEN_LED_Pin, SET); // GREEN OFF
		if (counter <= 0) { counter = 2; status = 1;}
		else counter--;
		break;
	case 1:
		HAL_GPIO_WritePin(RED_LED_GPIO_Port, RED_LED_Pin, SET); // RED OFF
		HAL_GPIO_WritePin(YELLOW_LED_GPIO_Port, YELLOW_LED_Pin, SET); // YELLOW OFF
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port, GREEN_LED_Pin, RESET); // GREEN ON
		if (counter <= 0) { counter = 1; status = 2;}
		else counter--;
		break;
	case 2:
		HAL_GPIO_WritePin(RED_LED_GPIO_Port, RED_LED_Pin, SET); // RED OFF
		HAL_GPIO_WritePin(YELLOW_LED_GPIO_Port, YELLOW_LED_Pin, RESET); // YELLOW ON
		HAL_GPIO_WritePin(GREEN_LED_GPIO_Port, GREEN_LED_Pin, SET); // GREEN OFF
		if (counter <= 0) { counter = 4; status = 0;}
		else counter--;
		break;
	default:
		break;
	}
}
