/*
 * display7LED.c
 *
 *  Created on: Sep 12, 2023
 *      Author: hh.aof
 */
#include "main.h"
#include "display7SEG.h"

const uint8_t digitMask[] = {	//fetch bit by bit, small endian, first position -> final pin e.g Pin6
		0x40,//0
		0x79,//1
		0x24,//2
		0x30,//3
		0x19,//4
		0x12,//5
		0x02,//6
		0x78,//7
		0x00,//8
		0x10,//9
		0x7F//10 e.g blank
};
const int MAX_LED=4;
int index_led=3, hour = 15, minute = 8, second = 50;
int led_buffer[]={1,2,3,4};
uint8_t segOut,matOut;
uint16_t BRegOut;

void display7SEG(uint8_t number){
	//initialize
	//GPIOB->ODR = digitMask[10];
	//if(number>=0 && number<10) GPIOB->ODR = digitMask[number];
	if(number>=0 && number<10)segOut=digitMask[number];
}

void update7SEG(int index){
	display7SEG(led_buffer[index]);
	switch(index){
		case 0:
			HAL_GPIO_TogglePin(EN3_GPIO_Port, EN3_Pin);
			HAL_GPIO_TogglePin(EN0_GPIO_Port, EN0_Pin);
			break;
		case 1:
			HAL_GPIO_TogglePin(EN0_GPIO_Port, EN0_Pin);
			HAL_GPIO_TogglePin(EN1_GPIO_Port, EN1_Pin);
			break;
		case 2:
			HAL_GPIO_TogglePin(EN1_GPIO_Port, EN1_Pin);
			HAL_GPIO_TogglePin(EN2_GPIO_Port, EN2_Pin);
			break;
		case 3:
			HAL_GPIO_TogglePin(EN2_GPIO_Port, EN2_Pin);
			HAL_GPIO_TogglePin(EN3_GPIO_Port, EN3_Pin);
			break;
		default:
			break;
	}
}

void updateClockBuffer(){
	if(++second>=60){
		second=0;
		++minute;
	}
	if(minute>=60){
		minute=0;
		++hour;
	}
	if(hour>=24)hour=0;
	led_buffer[0]=hour/10;
	led_buffer[1]=hour%10;
	led_buffer[2]=minute/10;
	led_buffer[3]=minute%10;
}

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 7, index_mat_anim=MAX_LED_MATRIX*2-1;
/*uint8_t matrix_buffer[] = {
		0x3C,
		0x7E,
		0xDB,
		0x18,
		0x18,
		0x18,
		0x18,
		0x18,
		0
};*/

uint8_t matrix_buffer[] = {
		0x01,
		0x02,
		0x04,
		0x08,
		0x10,
		0x20,
		0x40,
		0x80,
		0
};
int animIndex;
void updateLEDMatrix(int index){
	animIndex=index+index_mat_anim>14?index+index_mat_anim-14:index+index_mat_anim<8?index+index_mat_anim:8;
	matOut=matrix_buffer[animIndex];
	switch(index){
		case 0:
			HAL_GPIO_TogglePin(ENM7_GPIO_Port, ENM7_Pin);
			HAL_GPIO_TogglePin(ENM0_GPIO_Port, ENM0_Pin);
			break;
		case 1:
			HAL_GPIO_TogglePin(ENM0_GPIO_Port, ENM0_Pin);
			HAL_GPIO_TogglePin(ENM1_GPIO_Port, ENM1_Pin);
			break;
		case 2:
			HAL_GPIO_TogglePin(ENM1_GPIO_Port, ENM1_Pin);
			HAL_GPIO_TogglePin(ENM2_GPIO_Port, ENM2_Pin);
			break;
		case 3:
			HAL_GPIO_TogglePin(ENM2_GPIO_Port, ENM2_Pin);
			HAL_GPIO_TogglePin(ENM3_GPIO_Port, ENM3_Pin);
			break;
		case 4:
			HAL_GPIO_TogglePin(ENM3_GPIO_Port, ENM3_Pin);
			HAL_GPIO_TogglePin(ENM4_GPIO_Port, ENM4_Pin);
			break;
		case 5:
			HAL_GPIO_TogglePin(ENM4_GPIO_Port, ENM4_Pin);
			HAL_GPIO_TogglePin(ENM5_GPIO_Port, ENM5_Pin);
			break;
		case 6:
			HAL_GPIO_TogglePin(ENM5_GPIO_Port, ENM5_Pin);
			HAL_GPIO_TogglePin(ENM6_GPIO_Port, ENM6_Pin);
			break;
		case 7:
			HAL_GPIO_TogglePin(ENM6_GPIO_Port, ENM6_Pin);
			HAL_GPIO_TogglePin(ENM7_GPIO_Port, ENM7_Pin);
			break;
		default:
			break;
	}
}

void displayAll(){
	BRegOut=((matOut)<<8)|(segOut);
	GPIOB->ODR=BRegOut;
}

void updateAnim(){
	index_mat_anim=index_mat_anim>=MAX_LED_MATRIX*2-1?0:index_mat_anim+1;
}

/*void display7SEG(uint32_t number){
	//initialize
	HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, SET);
	HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, SET);
	HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, SET);
	HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, SET);
	HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, SET);
	HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, SET);
	HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, SET);
	switch(number){
		case 0:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG2_Pin, RESET);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, RESET);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, RESET);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, RESET);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, RESET);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, RESET);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, RESET);
			break;
		default:
			break;
	}
}*/
