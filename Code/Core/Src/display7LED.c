/*
 * display7LED.c
 *
 *  Created on: Sep 12, 2023
 *      Author: hh.aof
 */
#include "main.h"
const uint32_t digitMask[] = {	//fetch bit by bit, small endian, first position -> final pin e.g Pin6
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

void display7SEG(uint32_t number){
	//initialize
	//GPIOB->ODR = digitMask[10];
	if(number>=0 && number<10) GPIOB->ODR = digitMask[number];
}
