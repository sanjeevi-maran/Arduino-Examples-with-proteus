#include <LiquidCrystal.h>
LiquidCrystal lcd (13,12,8,7,4,2); //13-Rs,12-en,8-D4,7-D5,4-D6,2-D7
int adc ;


void setup()
{
  Serial.begin(9600);
  lcd.begin (16,2);  
}

void loop() 
{
  
adc = analogRead(A0);


lcd.setCursor(0,0);
lcd.print("ADC1:");
lcd.setCursor(5,0);
lcd.print (adc);
}
