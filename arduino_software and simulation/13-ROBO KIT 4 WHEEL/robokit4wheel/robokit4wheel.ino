#include <LiquidCrystal.h>
LiquidCrystal lcd (13,12,8,7,4,2);

//first L293D
int robomotor1 = 3;  //first motor 1st pin   (motors postive pin)
int robomotor3 = 6;  //second motor 1st pin
int robomotor5 = 10;  //Third motor 1st pin
int robomotor7 = A0;  //Fourth motor 1st pin
//second L293D
int robomotor2 = 5; //first motor second pin  (motors negative pin)
int robomotor4 = 9; //second motor second pin
int robomotor6 = 11; //Third motor second pin
int robomotor8 = A1; //fourth motor 2nd pin

void setup()
{
     lcd.begin (16,2);

      //first l293d
      pinMode (robomotor1,OUTPUT);
      pinMode (robomotor3,OUTPUT);
      pinMode (robomotor5,OUTPUT);
      pinMode (robomotor7,OUTPUT);
      //second l293d
      pinMode (robomotor2,OUTPUT);
      pinMode (robomotor4,OUTPUT);
      pinMode (robomotor6,OUTPUT);
      pinMode (robomotor8,OUTPUT);

}

void loop()
{
   lcd.clear();
   lcd.setCursor (0,0);
   //FORWARD
   //first two motor
   lcd.print     ("Forward");
   digitalWrite (robomotor1,HIGH); //first motor 1 pin 
   digitalWrite (robomotor3,HIGH);//second motor 1 pin
   digitalWrite (robomotor5,HIGH);//third motor 1 pin
   digitalWrite (robomotor7,HIGH);//fourth motor 1 pin
   //second two motor
   digitalWrite (robomotor2,LOW); //first motor 2 pin
   digitalWrite (robomotor4,LOW); //second motor 2 pin
   digitalWrite (robomotor6,LOW); //third motor 2 pin
   digitalWrite (robomotor8,LOW); //fourthmotor 2 pin
   delay(5000);
   lcd.clear();
   //REVERSE
   //first two motor
   lcd.print     ("Reverse");
   digitalWrite (robomotor1,LOW); //first motor 1 pin 
   digitalWrite (robomotor3,LOW);//second motor 1 pin
   digitalWrite (robomotor5,LOW);//third motor 1 pin
   digitalWrite (robomotor7,LOW);//fourth motor 1 pin
   //second two motor
   digitalWrite (robomotor2,HIGH); //first motor 2 pin
   digitalWrite (robomotor4,HIGH); //second motor 2 pin
   digitalWrite (robomotor6,HIGH); //third motor 2 pin
   digitalWrite (robomotor8,HIGH); //fourthmotor 2 pin
   delay(5000);
   lcd.clear();
   //RIGHT
   //first two motor
   lcd.print     ("RIGHT TURN");
   digitalWrite (robomotor1,HIGH); //first motor 1 pin 
   digitalWrite (robomotor3,LOW);//second motor 1 pin
   digitalWrite (robomotor5,HIGH);//third motor 1 pin
   digitalWrite (robomotor7,LOW);//fourth motor 1 pin
   //second two motor
   digitalWrite (robomotor2,LOW); //first motor 2 pin
   digitalWrite (robomotor4,LOW); //second motor 2 pin
   digitalWrite (robomotor6,LOW); //third motor 2 pin
   digitalWrite (robomotor8,LOW); //fourthmotor 2 pin
   delay(5000);
   //LEFT
   //first two motor
   lcd.clear();
   lcd.print     ("LEFT TURN");
   digitalWrite (robomotor1,LOW); //first motor 1 pin 
   digitalWrite (robomotor3,LOW);//second motor 1 pin
   digitalWrite (robomotor5,LOW);//third motor 1 pin
   digitalWrite (robomotor7,LOW);//fourth motor 1 pin
   //second two motor
   digitalWrite (robomotor2,LOW); //first motor 2 pin
   digitalWrite (robomotor4,HIGH);//second motor 2 pin
   digitalWrite (robomotor6,LOW); //third motor 2 pin
   digitalWrite (robomotor8,HIGH); //fourthmotor 2 pin
   delay(5000);
}
