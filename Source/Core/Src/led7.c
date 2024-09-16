/*
 * led7.c
 *
 *  Created on: Sep 16, 2024
 *      Author: HPVictus
 */


#include "led7.h"

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
