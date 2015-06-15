/*
  LCD.h - Library for control LCD.
  Created by Wu Junhong, June 15, 2015.
*/

#ifndef LCD_h
#define LCD_h

#include "Arduino.h"
#include "LiquidCrystal.h"

class LCD
{
  public:
    LCD();
    void firstLinePrint(char* str);
    void firstLinePrint(unsigned int number);
    void secondLinePrint(char* str);
    void secondLinePrint(unsigned int number);
};

#endif

