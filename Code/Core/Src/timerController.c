/*
 * timerController.c
 *
 *  Created on: Sep 26, 2023
 *      Author: hh.aof
 */
#include "timerController.h"

int timer1Flag=0,timer1=0,
	timer2Flag=0,timer2=0;

void setTimer1(int duration){
	timer1=duration;
	timer1Flag=0;
}

void setTimer2(int duration){
	timer2=duration;
	timer2Flag=0;
}

void timerRun(){
	if(timer1>0){
		timer1--;
		if(timer1<=0)timer1Flag=1;
	}
	if(timer2>0){
		timer2--;
		if(timer2<=0)timer2Flag=1;
	}
}
