/*
  LiquidCrystal Library - Hello World

 Demonstrates the use a 16x2 LCD display.  The LiquidCrystal
 library works with all LCD displays that are compatible with the
 Hitachi HD44780 driver. There are many of them out there, and you
 can usually tell them by the 16-pin interface.

 This sketch prints "Hello World!" to the LCD
 and shows the time.

  The circuit:
 * LCD RS pin to digital pin 12
 * LCD Enable pin to digital pin 11
 * LCD D4 pin to digital pin 5
 * LCD D5 pin to digital pin 4
 * LCD D6 pin to digital pin 3
 * LCD D7 pin to digital pin 2
 * LCD R/W pin to ground
 * LCD VSS pin to ground
 * LCD VCC pin to 5V
 * 10K resistor:
 * ends to +5V and ground
 * wiper to LCD VO pin (pin 3)

 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystal
 */

// include the library code:
#include <LCD.h>
#include <Wire.h>
#include <Rtc_Pcf8563.h>

// initialize the library with the numbers of the interface pins
LCD lcd;
Rtc_Pcf8563 clock;

void setup() {
  //day, weekday, month, century(1=1900, 0=2000), year(0-99)
  clock.setDate(16, 2, 6, 0, 15);
  //hr, min, sec
  clock.setTime(2, 25, 45);
  // Print a message to the LCD.
  lcd.firstLinePrint(clock.formatDate());
}

void loop() {
  // print the number of seconds since reset:
  lcd.secondLinePrint(clock.formatTime());
  delay(1000); 
}

