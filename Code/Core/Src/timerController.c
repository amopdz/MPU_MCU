/*
 * timerController.c
 *
 *  Created on: Sep 26, 2023
 *      Author: hh.aof
 */
#include "timerController.h"

int timer1Flag=0,timer1=0,
	timer2Flag=0,timer2=0,
	timer3Flag=0,timer3=0,
	timer4Flag=0,timer4=0,
	timer5Flag=0,timer5=0,
	timer6Flag=0,timer6=0;

void setTimer1(int duration){
	timer1=duration;
	timer1Flag=0;
}

void setTimer2(int duration){
	timer2=duration;
	timer2Flag=0;
}

void setTimer3(int duration){
	timer3=duration;
	timer3Flag=0;
}

void setTimer4(int duration){
	timer4=duration;
	timer4Flag=0;
}

void setTimer5(int duration){
	timer5=duration;
	timer5Flag=0;
}

void setTimer6(int duration){
	timer6=duration;
	timer6Flag=0;
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
	if(timer3>0){
		timer3--;
		if(timer3<=0)timer3Flag=1;
	}
	if(timer4>0){
		timer4--;
		if(timer4<=0)timer4Flag=1;
	}
	if(timer5>0){
		timer5--;
		if(timer5<=0)timer5Flag=1;
	}
	if(timer6>0){
		timer6--;
		if(timer6<=0)timer6Flag=1;
	}
}
