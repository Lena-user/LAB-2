/*
 * timer.c
 *
 *  Created on: Oct 7, 2024
 *      Author: dangk
 */

#include "timer.h"

int counter1 = 0;
int counter2 = 0;
int cycle = 10;
int flag1 = 0;
int flag2 = 0;

void setTimer1(int duration)
{
	counter1 = duration / cycle;
	flag1 = 0;
}

void setTimer2(int duration)
{
	counter2 = duration / cycle;
	flag2 = 0;
}

void setFlag1(int state)
{
	flag1 = state;
}

void timerRun()
{
	if (counter2 > 0)
		counter2--;
	else
		flag2 = 1;
	if (counter1 > 0)
		counter1--;
	else
		setTimer1(1000);
	if (counter1 == 100)
		flag1 = 0;
	else if (counter1 == 75)
		flag1 = 1;
	else if (counter1 == 50)
		flag1 = 2;
	else if (counter1 == 25)
		flag1 = 3;

}
