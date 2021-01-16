#include <LiquidCrystal.h>
LiquidCrystal lcd (13,12,4,5,6,7);
//13-rs,12-en,8-D4,7-D5,4-D6,2-D7

int PWM_out_pin = 9; // Must be one of 3, 5, 6, 9, 10, or 11
// for Arduino Uno
void setup() 
{
  lcd.begin (16,2); //16 char 2 row.16*2 lcd
  
pinMode(PWM_out_pin, OUTPUT);
}
void loop() 
{
  
//  lcd.setCursor(0,0);
  lcd.print("BOOST CONVERTER");
  byte PWM_out_level; 
  PWM_out_level = 200;
  analogWrite( PWM_out_pin, PWM_out_level);
  delay(3000);
}
