/*
 * clockControl.c
 *
 *  Created on: Sep 14, 2023
 *      Author: hh.aof
 */

#include "main.h"

//struct LEDPoint{
//
//};

void clearAllClock(){
	  HAL_GPIO_WritePin(POINT0_GPIO_Port, POINT0_Pin, RESET);
	  HAL_GPIO_WritePin(POINT1_GPIO_Port, POINT1_Pin, RESET);
	  HAL_GPIO_WritePin(POINT2_GPIO_Port, POINT2_Pin, RESET);
	  HAL_GPIO_WritePin(POINT3_GPIO_Port, POINT3_Pin, RESET);
	  HAL_GPIO_WritePin(POINT4_GPIO_Port, POINT4_Pin, RESET);
	  HAL_GPIO_WritePin(POINT5_GPIO_Port, POINT5_Pin, RESET);
	  HAL_GPIO_WritePin(POINT6_GPIO_Port, POINT6_Pin, RESET);
	  HAL_GPIO_WritePin(POINT7_GPIO_Port, POINT7_Pin, RESET);
	  HAL_GPIO_WritePin(POINT8_GPIO_Port, POINT8_Pin, RESET);
	  HAL_GPIO_WritePin(POINT9_GPIO_Port, POINT9_Pin, RESET);
	  HAL_GPIO_WritePin(POINT10_GPIO_Port, POINT10_Pin, RESET);
	  HAL_GPIO_WritePin(POINT11_GPIO_Port, POINT11_Pin, RESET);
}

void setNumberOnClock(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(POINT0_GPIO_Port, POINT0_Pin, SET);
			break;
		case 1:
			HAL_GPIO_WritePin(POINT1_GPIO_Port, POINT1_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(POINT2_GPIO_Port, POINT2_Pin, SET);
			break;
		case 3:
			HAL_GPIO_WritePin(POINT3_GPIO_Port, POINT3_Pin, SET);
			break;
		case 4:
			HAL_GPIO_WritePin(POINT4_GPIO_Port, POINT4_Pin, SET);
			break;
		case 5:
			HAL_GPIO_WritePin(POINT5_GPIO_Port, POINT5_Pin, SET);
			break;
		case 6:
			HAL_GPIO_WritePin(POINT6_GPIO_Port, POINT6_Pin, SET);
			break;
		case 7:
			HAL_GPIO_WritePin(POINT7_GPIO_Port, POINT7_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(POINT8_GPIO_Port, POINT8_Pin, SET);
			break;
		case 9:
			HAL_GPIO_WritePin(POINT9_GPIO_Port, POINT9_Pin, SET);
			break;
		case 10:
			HAL_GPIO_WritePin(POINT10_GPIO_Port, POINT10_Pin, SET);
			break;
		case 11:
			HAL_GPIO_WritePin(POINT11_GPIO_Port, POINT11_Pin, SET);
			break;
		default:
			break;
	}
}

void clearNumberOnClock(int num){
	switch(num){
		case 0:
			HAL_GPIO_WritePin(POINT0_GPIO_Port, POINT0_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(POINT1_GPIO_Port, POINT1_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(POINT2_GPIO_Port, POINT2_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(POINT3_GPIO_Port, POINT3_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(POINT4_GPIO_Port, POINT4_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(POINT5_GPIO_Port, POINT5_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(POINT6_GPIO_Port, POINT6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(POINT7_GPIO_Port, POINT7_Pin, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(POINT8_GPIO_Port, POINT8_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(POINT9_GPIO_Port, POINT9_Pin, RESET);
			break;
		case 10:
			HAL_GPIO_WritePin(POINT10_GPIO_Port, POINT10_Pin, RESET);
			break;
		case 11:
			HAL_GPIO_WritePin(POINT11_GPIO_Port, POINT11_Pin, RESET);
			break;
		default:
			break;
	}
}
