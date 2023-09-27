/*
 * display7SEG.h
 *
 *  Created on: Sep 12, 2023
 *      Author: hh.aof
 */

#ifndef INC_DISPLAY7SEG_H_
#define INC_DISPLAY7SEG_H_

const uint8_t digitMask[11];
extern const int MAX_LED;
extern int index_led, hour, minute, second;
int led_buffer[4];

void display7SEG(uint8_t number);
void update7SEG(int index);
void updateClockBuffer();

extern const int MAX_LED_MATRIX;
extern int index_led_matrix;
uint8_t matrix_buffer[8];

void updateLEDMatrix(int index);
void displayAll();

#endif /* INC_DISPLAY7SEG_H_ */
