/*
 * display7SEG.h
 *
 *  Created on: Sep 12, 2023
 *      Author: hh.aof
 */

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_

const uint32_t digitMask[];
extern const int MAX_LED;
extern int index_led, hour, minute, second;
int led_buffer[];

void display7SEG(uint32_t number);
void update7SEG(int index);

#endif /* INC_DISPLAY7SEG_H_ */
