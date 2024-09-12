/*
 * fsm_traffic4.c
 *
 *  Created on: 12 Sep 2024
 *      Author: HPVictus
 */


#include "fsm_traffic4.h"
void display7SEG(int num)
{
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, SET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, SET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	case 5:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	case 6:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, SET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, SET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, SET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, RESET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, RESET);
		HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, RESET);
		HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, RESET);
		HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, RESET);
		HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, SET);
		HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, RESET);
		HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, RESET);
		break;
	default:
		break;
	}
}
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


		display7SEG(counter);
		counter--;
		if (counter <= 2) status = 1;
		HAL_Delay(1000);
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


		display7SEG(counter);
		counter--;
		if (counter <0) {status = 2;counter = 2;}
		HAL_Delay(1000);
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


		display7SEG(counter);
		counter--;
		if (counter <0) {status = 3;counter = 1;}
		HAL_Delay(1000);
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


		display7SEG(counter);
		counter--;
		if (counter <0) {status = 0;counter = 4;}
		HAL_Delay(1000);
		break;
	default:
		break;
	}
}
