#include "LCD.h"

LiquidCrystal _lcd(12, 11, 5, 4, 3, 2);

LCD::LCD(){
	// set up the LCD's number of columns and rows:
	_lcd.begin(16, 2);
}

void LCD::firstLinePrint(char* str){
	// set the cursor to column 0, line 1
  	// (note: line 1 is the second row, since counting begins with 0):
	_lcd.setCursor(0, 0);
	_lcd.print(str);
}

void LCD::firstLinePrint(unsigned int number){
	_lcd.setCursor(0, 0);
	_lcd.print(number);
}

void LCD::secondLinePrint(char* str){
	_lcd.setCursor(0, 1);
	_lcd.print(str);
}

void LCD::secondLinePrint(unsigned int number){
	_lcd.setCursor(0, 1);
	_lcd.print(number);
}