/*
 * timer.h
 *
 *  Created on: Oct 7, 2024
 *      Author: dangk
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int flag1;
extern int flag2;

void setTimer1(int duration);
void setTimer2(int duration);
void setFlag1(int state);
void timerRun();

#endif /* INC_TIMER_H_ */
