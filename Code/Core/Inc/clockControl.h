/*
 * clockControl.h
 *
 *  Created on: Sep 14, 2023
 *      Author: hh.aof
 */

#ifndef INC_CLOCKCONTROL_H_
#define INC_CLOCKCONTROL_H_

void clearAllClock();
void setNumberOnClock(int num);
void clearNumberOnClock(int num);
void initTime();
void trackSecond();
void trackMinute();
void trackHour();
void doTime();

#endif /* INC_CLOCKCONTROL_H_ */
