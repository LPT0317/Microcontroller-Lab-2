/*
 * segment_led.h
 *
 *  Created on: Sep 30, 2022
 *      Author: lephu
 */

#ifndef INC_SEGMENT_LED_H_
#define INC_SEGMENT_LED_H_

#include "main.h"
#include "string.h"

extern string led_Pin[7];

void clear7SEG();
void display7SEG(int num);

#endif /* INC_SEGMENT_LED_H_ */
