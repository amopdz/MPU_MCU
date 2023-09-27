/*
 * timerController.h
 *
 *  Created on: Sep 26, 2023
 *      Author: hh.aof
 */

#ifndef INC_TIMERCONTROLLER_H_
#define INC_TIMERCONTROLLER_H_

extern int timer1Flag,timer1,
		   timer2Flag,timer2,
		   timer3Flag,timer3;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void timerRun();

#endif /* INC_TIMERCONTROLLER_H_ */
