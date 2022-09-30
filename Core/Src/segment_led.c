/*
 * segment_led.c
 *
 *  Created on: Sep 30, 2022
 *      Author: lephu
 */

#include "segment_led.h"

string led_Pin[7] = {"SEG0_Pin", "SEG1_Pin", "SEG2_Pin"
					 "SEG3_Pin", "SEG4_Pin", "SEG5_Pin", "SEG6_Pin"};

void clear7SEG(){
	HAL_GPIO_WritePin(GPIOB, led_Pin[0] | led_Pin[1] | led_Pin[2] |
							 led_Pin[3] | led_Pin[4] | led_Pin[5] | led_Pin[6], 1);
}
void display7SEG(int num){
	if(num >= 0 && num < 10){
		switch (num) {
			case 0:
				HAL_GPIO_WritePin(GPIOB, led_Pin[0] | led_Pin[1] | led_Pin[2] |
										 led_Pin[3] | led_Pin[4] | led_Pin[5], 0);
				break;
			case 1:
				HAL_GPIO_WritePin(GPIOB, led_Pin[1] | led_Pin[2], 0);
				break;
			case 2:
				HAL_GPIO_WritePin(GPIOB, led_Pin[0] | led_Pin[1] | led_Pin[3] |
										 led_Pin[4] |led_Pin[6], 0);
				break;
			case 3:
				HAL_GPIO_WritePin(GPIOB, led_Pin[0] | led_Pin[1] | led_Pin[2] |
										 led_Pin[3] |led_Pin[6], 0);
				break;
			case 4:
				HAL_GPIO_WritePin(GPIOB, led_Pin[1] | led_Pin[2] |
										 led_Pin[5] | led_Pin[6], 0);
				break;
			case 5:
				HAL_GPIO_WritePin(GPIOB, led_Pin[0] |led_Pin[2] |
										 led_Pin[3] |led_Pin[5] | led_Pin[6], 0);
				break;
			case 6:
				HAL_GPIO_WritePin(GPIOB, led_Pin[0] |led_Pin[2] | led_Pin[3] |
										 led_Pin[4] | led_Pin[5] | led_Pin[6], 0);
				break;
			case 7:
				HAL_GPIO_WritePin(GPIOB, led_Pin[0] | led_Pin[1] | led_Pin[2], 0);
				break;
			case 8:
				HAL_GPIO_WritePin(GPIOB, led_Pin[0] | led_Pin[1] | led_Pin[2] |
										 led_Pin[3] | led_Pin[4] | led_Pin[5] | led_Pin[6], 0);
				break;
			case 9:
				HAL_GPIO_WritePin(GPIOB, led_Pin[0] | led_Pin[1] | led_Pin[2] |
										 led_Pin[3] | led_Pin[5] | led_Pin[6], 0);
				break;
		}
	}
}
