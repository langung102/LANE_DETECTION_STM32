/*
 * input_reading.h
 *
 *  Created on: Dec 16, 2022
 *      Author: minhl
 */

#ifndef INC_INPUT_READING_H_
#define INC_INPUT_READING_H_

#include "software_timer.h"
#include "global.h"
#include "main.h"

int check_button_flag(int);
void button_reading(void);
unsigned char is_button_pressed(unsigned char);
unsigned char is_button_pressed_1s(unsigned char);

#endif /* INC_INPUT_READING_H_ */
