#include "LCD.h"

LiquidCrystal _lcd(12, 11, 5, 4, 3, 2);

LCD::LCD(){
}

void LCD::begin(int column, int line){
	_lcd.begin(column, line);
}

void LCD::print(char* str){
	_lcd.print(str);
}

void LCD::print(unsigned int number){
	_lcd.print(number);
}

void LCD::setCursor(int column, int line){
	_lcd.setCursor(column, line);
}