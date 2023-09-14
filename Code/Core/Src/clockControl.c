/*
 * clockControl.c
 *
 *  Created on: Sep 14, 2023
 *      Author: hh.aof
 */

#include "main.h"

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
