#include <LiquidCrystal.h>
LiquidCrystal lcd (13,12,8,7,4,2);

//first L293D
int robomotor1 = 3;  //first motor  1st pin   (motors postive pin)
int robomotor2 = 5;  //first motor  2nd pin   (motors negative pin)
int robomotor3 = 6;  //second motor 1st pin
int robomotor4 = 9;  //second motor 2nd pin


void setup()
{
     lcd.begin (16,2);

      //first l293d
      pinMode (robomotor1,OUTPUT);
      pinMode (robomotor2,OUTPUT);
      pinMode (robomotor3,OUTPUT);
      pinMode (robomotor4,OUTPUT);

}
void loop()
{
   lcd.clear();
   lcd.setCursor (0,0);
   //FORWARD
   //first two motor
   lcd.print     ("Forward");
   digitalWrite (robomotor1,HIGH); //first motor 1 pin 
   digitalWrite (robomotor2,LOW);// first motor 2 pin
   digitalWrite (robomotor3,HIGH);// second motor 1 pin
   digitalWrite (robomotor4,LOW);//  second motor 2 pin
   delay(5000);
   lcd.clear();
   //REVERSE
   //first two motor
   lcd.print     ("Reverse");
   digitalWrite (robomotor1,LOW); //first motor 1 pin 
   digitalWrite (robomotor2,HIGH);//second motor 2 pin
   digitalWrite (robomotor3,LOW);//first motor 1 pin
   digitalWrite (robomotor4,HIGH);//second motor 2 pin

   delay(5000);
   lcd.clear();
   //RIGHT
   //first two motor
   lcd.print     ("RIGHT TURN");
   digitalWrite (robomotor1,HIGH); //first motor 1 pin 
   digitalWrite (robomotor2,LOW);//second motor 2 pin
   digitalWrite (robomotor3,LOW);//first motor 1 pin
   digitalWrite (robomotor4,LOW);//second motor 2 pin

   delay(5000);
   //LEFT
   //first two motor
   lcd.clear();
   lcd.print     ("LEFT TURN");
   digitalWrite (robomotor1,LOW); //first motor 1 pin 
   digitalWrite (robomotor2,LOW);//first motor 2 pin
   digitalWrite (robomotor3,LOW);//second motor 1 pin
   digitalWrite (robomotor4,HIGH);//second motor 2 pin

   delay(5000);
}
