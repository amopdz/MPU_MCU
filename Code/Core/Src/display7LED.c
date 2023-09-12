/*
 * display7LED.c
 *
 *  Created on: Sep 12, 2023
 *      Author: hh.aof
 */
#include "main.h"
void display7SEG(uint32_t number){
	//initialize
	HAL_GPIO_WritePin(GATE0_GPIO_Port, GATE0_Pin, SET);
	HAL_GPIO_WritePin(GATE1_GPIO_Port, GATE1_Pin, SET);
	HAL_GPIO_WritePin(GATE2_GPIO_Port, GATE2_Pin, SET);
	HAL_GPIO_WritePin(GATE3_GPIO_Port, GATE3_Pin, SET);
	HAL_GPIO_WritePin(GATE4_GPIO_Port, GATE4_Pin, SET);
	HAL_GPIO_WritePin(GATE5_GPIO_Port, GATE5_Pin, SET);
	HAL_GPIO_WritePin(GATE6_GPIO_Port, GATE6_Pin, SET);
	switch(number){
		case 0:
			HAL_GPIO_WritePin(GATE0_GPIO_Port, GATE0_Pin, RESET);
			HAL_GPIO_WritePin(GATE1_GPIO_Port, GATE1_Pin, RESET);
			HAL_GPIO_WritePin(GATE2_GPIO_Port, GATE2_Pin, RESET);
			HAL_GPIO_WritePin(GATE3_GPIO_Port, GATE3_Pin, RESET);
			HAL_GPIO_WritePin(GATE4_GPIO_Port, GATE4_Pin, RESET);
			HAL_GPIO_WritePin(GATE5_GPIO_Port, GATE5_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(GATE0_GPIO_Port, GATE1_Pin, RESET);
			HAL_GPIO_WritePin(GATE1_GPIO_Port, GATE2_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(GATE0_GPIO_Port, GATE0_Pin, RESET);
			HAL_GPIO_WritePin(GATE1_GPIO_Port, GATE1_Pin, RESET);
			HAL_GPIO_WritePin(GATE3_GPIO_Port, GATE3_Pin, RESET);
			HAL_GPIO_WritePin(GATE4_GPIO_Port, GATE4_Pin, RESET);
			HAL_GPIO_WritePin(GATE6_GPIO_Port, GATE6_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(GATE0_GPIO_Port, GATE0_Pin, RESET);
			HAL_GPIO_WritePin(GATE1_GPIO_Port, GATE1_Pin, RESET);
			HAL_GPIO_WritePin(GATE2_GPIO_Port, GATE2_Pin, RESET);
			HAL_GPIO_WritePin(GATE3_GPIO_Port, GATE3_Pin, RESET);
			HAL_GPIO_WritePin(GATE6_GPIO_Port, GATE6_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(GATE1_GPIO_Port, GATE1_Pin, RESET);
			HAL_GPIO_WritePin(GATE2_GPIO_Port, GATE2_Pin, RESET);
			HAL_GPIO_WritePin(GATE5_GPIO_Port, GATE5_Pin, RESET);
			HAL_GPIO_WritePin(GATE6_GPIO_Port, GATE6_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(GATE0_GPIO_Port, GATE0_Pin, RESET);
			HAL_GPIO_WritePin(GATE2_GPIO_Port, GATE2_Pin, RESET);
			HAL_GPIO_WritePin(GATE3_GPIO_Port, GATE3_Pin, RESET);
			HAL_GPIO_WritePin(GATE5_GPIO_Port, GATE5_Pin, RESET);
			HAL_GPIO_WritePin(GATE6_GPIO_Port, GATE6_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(GATE0_GPIO_Port, GATE0_Pin, RESET);
			HAL_GPIO_WritePin(GATE2_GPIO_Port, GATE2_Pin, RESET);
			HAL_GPIO_WritePin(GATE3_GPIO_Port, GATE3_Pin, RESET);
			HAL_GPIO_WritePin(GATE4_GPIO_Port, GATE4_Pin, RESET);
			HAL_GPIO_WritePin(GATE5_GPIO_Port, GATE5_Pin, RESET);
			HAL_GPIO_WritePin(GATE6_GPIO_Port, GATE6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(GATE0_GPIO_Port, GATE0_Pin, RESET);
			HAL_GPIO_WritePin(GATE1_GPIO_Port, GATE1_Pin, RESET);
			HAL_GPIO_WritePin(GATE2_GPIO_Port, GATE2_Pin, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(GATE0_GPIO_Port, GATE0_Pin, RESET);
			HAL_GPIO_WritePin(GATE1_GPIO_Port, GATE1_Pin, RESET);
			HAL_GPIO_WritePin(GATE2_GPIO_Port, GATE2_Pin, RESET);
			HAL_GPIO_WritePin(GATE3_GPIO_Port, GATE3_Pin, RESET);
			HAL_GPIO_WritePin(GATE4_GPIO_Port, GATE4_Pin, RESET);
			HAL_GPIO_WritePin(GATE5_GPIO_Port, GATE5_Pin, RESET);
			HAL_GPIO_WritePin(GATE6_GPIO_Port, GATE6_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(GATE0_GPIO_Port, GATE0_Pin, RESET);
			HAL_GPIO_WritePin(GATE1_GPIO_Port, GATE1_Pin, RESET);
			HAL_GPIO_WritePin(GATE2_GPIO_Port, GATE2_Pin, RESET);
			HAL_GPIO_WritePin(GATE3_GPIO_Port, GATE3_Pin, RESET);
			HAL_GPIO_WritePin(GATE5_GPIO_Port, GATE5_Pin, RESET);
			HAL_GPIO_WritePin(GATE6_GPIO_Port, GATE6_Pin, RESET);
			break;
		default:
			break;
	}
}
