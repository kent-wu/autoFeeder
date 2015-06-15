#include "LCD.h"

LiquidCrystal _lcd;

LCD::LCD(uint8_t rs, uint8_t enable, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7){
	_lcd = LiquidCrystal(rs, enable, d4, d5, d6, d7);	
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