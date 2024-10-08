/*
 * timer.c
 *
 *  Created on: Oct 7, 2024
 *      Author: dangk
 */

#include "timer.h"

int counter1 = 0;
int counter2 = 0;
int flag1 = 0;
int flag2 = 0;

void setTimer1(int duration)
{
	counter1 = duration;
	flag1 = 0;
}

void setTimer2(int duration)
{
	counter2 = duration;
	flag2 = 0;
}

void setFlag1(int state)
{
	flag1 = 4;
}

void timerRun()
{
	if (counter2 > 0)
	{
		counter2--;
		if (counter2 <= 0)
			flag2 = 1;
	}
	if (counter1 > 0)
	{
		counter1--;
		if (counter1 == 100)
			flag1 = 0;
		else if (counter1 == 75)
			flag1 = 1;
		else if (counter1 == 50)
			flag1 = 2;
		else if (counter1 == 25)
			flag1 = 3;
		if (counter1 <= 0)
			setTimer1(100);
	}
}
