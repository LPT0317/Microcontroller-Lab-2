/*
 * segment_led.c
 *
 *  Created on: Sep 30, 2022
 *      Author: lephu
 */

#include "segment_led.h"

void clear7SEG(){
	HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
			SEG3_Pin | SEG4_Pin | SEG5_Pin | SEG6_Pin, 1);
}
void display7SEG(int num){
	if(num >= 0 && num < 10){
		switch (num) {
			case 0:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
										 SEG3_Pin | SEG4_Pin | SEG5_Pin, 0);
				break;
			case 1:
				HAL_GPIO_WritePin(GPIOB, SEG1_Pin | SEG2_Pin, 0);
				break;
			case 2:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG3_Pin |
										 SEG4_Pin | SEG6_Pin, 0);
				break;
			case 3:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
										 SEG3_Pin | SEG6_Pin, 0);
				break;
			case 4:
				HAL_GPIO_WritePin(GPIOB, SEG1_Pin | SEG2_Pin |
										 SEG5_Pin | SEG6_Pin, 0);
				break;
			case 5:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG2_Pin |
										 SEG3_Pin | SEG5_Pin | SEG6_Pin, 0);
				break;
			case 6:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG2_Pin | SEG3_Pin |
										 SEG4_Pin | SEG5_Pin | SEG6_Pin, 0);
				break;
			case 7:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin, 0);
				break;
			case 8:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
										 SEG3_Pin | SEG4_Pin | SEG5_Pin | SEG6_Pin, 0);
				break;
			case 9:
				HAL_GPIO_WritePin(GPIOB, SEG0_Pin | SEG1_Pin | SEG2_Pin |
										 SEG3_Pin | SEG5_Pin | SEG6_Pin, 0);
				break;
		}
	}
}
