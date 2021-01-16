#include <LiquidCrystal.h>
LiquidCrystal lcd (13,12,8,7,4,2); //13-Rs,12-en,8-D4,7-D5,4-D6,2-D7
int adc0 ;
int adc1;
int adc2;
int adc3;
int motor = 3;
void setup()
{
  Serial.begin(9600);
  lcd.begin (16,2);  
  pinMode(3,OUTPUT);
}

void loop() 
{
  //motor on
  digitalWrite (motor,HIGH);
  
  //first sensor 
  adc0 = analogRead(A0);
  lcd.setCursor(0,0);
  lcd.print("FLAME");
  lcd.setCursor(5,0);
  lcd.print (adc0);
  
  //second sensor 
   adc1 = analogRead(A1);
   lcd.setCursor(0,1);
   lcd.print("LIGHT");
   lcd.setCursor(5,1);
   lcd.print (adc1);
   delay(2000);
   lcd.clear();
   //third sensor

   adc2 = analogRead(A2);
   lcd.setCursor(0,0);
   lcd.print("SMOKE");
   lcd.setCursor(5,0);
   lcd.print (adc2);
   
   //fourth sensor
   adc1 = analogRead(A3);
   lcd.setCursor(0,1);
   lcd.print("DHT11");
   lcd.setCursor(5,1);
   lcd.print (adc1);
   delay(2000);
   digitalWrite (motor,LOW);
   delay(2000); 
 
}
