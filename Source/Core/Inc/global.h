/*
 * global.h
 *
 *  Created on: 16 Sep 2024
 *      Author: HPVictus
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
  extern int second;
  extern int minute;
  extern int hour;
  extern int prevSecond;
  extern int prevMinute;
  extern int prevHour;
void clearAllClock();
void setNumberOnClock(int num);
void clearNumberOnClock(int num);
void run();
#endif /* INC_GLOBAL_H_ */
