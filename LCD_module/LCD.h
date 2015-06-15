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
    void begin(int columns, int line);
    void print(char* str);
    void print(unsigned int number);
    void setCursor(int column, int line);
};

#endif

