#include<LiquidCrystal.h>

#define led 12         //first led
#define  ledd 11
#define interruptPin 2
int state = 0;
int a;

LiquidCrystal lcd (10,9,8,7,6,5);

void setup() 
{
  lcd.begin (16,2);
  Serial.begin (9600);
  pinMode (led, OUTPUT);
  pinMode (ledd, OUTPUT);
  pinMode(interruptPin, INPUT);
  attachInterrupt(digitalPinToInterrupt(interruptPin),function,RISING); // this is interrupt declared line: rising-- when the button press and release ,the interrupt function will be worked.
  
}


void function()
{
  lcd.clear();
  lcd.setCursor  (0,0);
  a = analogRead (A0);
  lcd.print (a);
  if(a>=500)
  {
    Serial.print("EMERGENCY");
  }
  
}

void loop() 
{
  digitalWrite (led,HIGH);
  delay(1000);
  digitalWrite (ledd,HIGH);
  delay(1000);
  digitalWrite (led,LOW);
  delay(1000);
  digitalWrite (ledd,LOW);
  delay(1000);
}

