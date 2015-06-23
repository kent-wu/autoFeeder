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
 */

// include the library code:
#include <LCD.h>
#include <Wire.h>
#include <Rtc_Pcf8563.h>
#include <Servo.h> 
#include <Time.h>


// initialize the library with the numbers of the interface pins
LCD lcd;
Rtc_Pcf8563 clock;
Servo myservo;

void setup() {
  Serial.begin(9600);

  //day, weekday, month, century(1=1900, 0=2000), year(0-99)
  clock.setDate(16, 2, 6, 0, 15);
  //hr, min, sec
  clock.setTime(2, 59, 45);
  // Print a message to the LCD.
  lcd.firstLinePrint("Hello, world!");
  // attaches the servo on pin 9 to the servo object
  myservo.attach(9); 
}

void loop() {
  // print the number of seconds since reset:
  lcd.secondLinePrint(clock.formatTime());
//  Serial.println(clock.formatTime());
  Serial.println(second()%10);
  String time(clock.formatTime());

  if(time == "03:00:00"){
    sweep();
  }

  if(second()%10 == 0){
    sweep();
  }

  delay(1000); 
}

void sweep(){
  // goes from 0 degrees to 180 degrees
  for(int pos = 0; pos <= 360; pos += 1)
  {
    // tell servo to go to position in variable 'pos'
    myservo.write(pos);
    // waits 15ms for the servo to reach the position
    delay(15);
  }
}
