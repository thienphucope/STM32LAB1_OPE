/*
 * fsm_traffic4.c
 *
 *  Created on: 12 Sep 2024
 *      Author: HPVictus
 */


#include "fsm_traffic4.h"

void run(){
	switch(status){
	case 0:
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);

		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);

		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, SET);

		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, SET);
		if (counter <= 0) { counter = 1; status = 1;}
		else counter--;
		break;
	case 1:
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, SET);
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);

		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, SET);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);

		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, RESET);
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, SET);
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);

		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, RESET);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, SET);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);

		if (counter <= 0) { counter = 2; status = 2;}
		else counter--;
		break;
	case 2:
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, RESET);
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, SET);

		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, RESET);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, SET);

		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);

		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);

		if (counter <= 0) { counter = 1; status = 3;}
		else counter--;
		break;
	case 3:
		HAL_GPIO_WritePin(LED_1_GPIO_Port, LED_1_Pin, RESET);
		HAL_GPIO_WritePin(LED_12_GPIO_Port, LED_12_Pin, SET);
		HAL_GPIO_WritePin(LED_11_GPIO_Port, LED_11_Pin, RESET);

		HAL_GPIO_WritePin(LED_7_GPIO_Port, LED_7_Pin, RESET);
		HAL_GPIO_WritePin(LED_6_GPIO_Port, LED_6_Pin, SET);
		HAL_GPIO_WritePin(LED_5_GPIO_Port, LED_5_Pin, RESET);

		HAL_GPIO_WritePin(LED_10_GPIO_Port, LED_10_Pin, SET);
		HAL_GPIO_WritePin(LED_9_GPIO_Port, LED_9_Pin, RESET);
		HAL_GPIO_WritePin(LED_8_GPIO_Port, LED_8_Pin, RESET);

		HAL_GPIO_WritePin(LED_4_GPIO_Port, LED_4_Pin, SET);
		HAL_GPIO_WritePin(LED_3_GPIO_Port, LED_3_Pin, RESET);
		HAL_GPIO_WritePin(LED_2_GPIO_Port, LED_2_Pin, RESET);

		if (counter <= 0) { counter = 2; status = 0;}
		else counter--;
		break;
	default:
		break;
	}
}
