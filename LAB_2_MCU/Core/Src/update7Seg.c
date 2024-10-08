/*
 * update7Seg.c
 *
 *  Created on: Oct 8, 2024
 *      Author: dangk
 */

#include "update7Seg.h"

int led_Buffer[4] = {1, 2, 3, 4};
void update7SEG(int index)
{
	switch (index) {
		case 0:
			displayNumber(led_Buffer[0]);
			break;
		case 1:
			displayNumber(led_Buffer[1]);
		case 2:
			displayNumber(led_Buffer[2]);
		case 3:
			displayNumber(led_Buffer[3]);
		default:
			break;
	}
}
