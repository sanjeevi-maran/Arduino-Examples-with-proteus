#include <LiquidCrystal.h>
#define C1 11
#define C2 12
#define C3 13

#define R1 8
#define R2 9
#define R3 10


LiquidCrystal lcd (7,6,5,4,3,2);

void setup() 
{
lcd.begin (16,2);

pinMode ( C1 , INPUT);
pinMode ( C2 , INPUT);
pinMode ( C3 , INPUT);

pinMode (A0 , OUTPUT);
pinMode (A1 , OUTPUT);
pinMode (A2 , OUTPUT);
pinMode (A3 , OUTPUT);

 lcd.setCursor (0,0);
 lcd.print("SDPRO NUM DISPLY");
   
}

void keypad ()
{
  
digitalWrite (A0,LOW);
digitalWrite (A1,HIGH);
digitalWrite (A2,HIGH);
digitalWrite (A3,HIGH);

  if(digitalRead(C1)== 0)
   {
     while(digitalRead (C1)== 0);
     lcd.print('1');
   }
    if(digitalRead (C2)== 0)
   {
     while(digitalRead (C2)== 0);
    lcd.print('2');
   }
    if(digitalRead (C3)==0)
   {
     while(digitalRead (C3) == 0 );
     lcd.print('3');
   }


digitalWrite (A0,HIGH);
digitalWrite (A1,LOW );
digitalWrite (A2,HIGH);
digitalWrite (A3,HIGH);

 
  if(digitalRead(C1)== 0)
   {
     while(digitalRead (C1)== 0);
     lcd.print('4');
   }
    if(digitalRead (C2)== 0)
   {
     while(digitalRead (C2)== 0);
    lcd.print('5');
   }
    if(digitalRead (C3)==0)
   {
     while(digitalRead (C3) == 0 );
     lcd.print('6');
   }

digitalWrite (A0,HIGH );
digitalWrite (A1,HIGH );
digitalWrite (A2,LOW  );
digitalWrite (A3,HIGH );


  if(digitalRead(C1)== 0)
   {
     while(digitalRead (C1)== 0);
     lcd.print('7');
   }
    if(digitalRead (C2)== 0)
   {
     while(digitalRead (C2)== 0);
    lcd.print('8');
   }
    if(digitalRead (C3)==0)
   {
     while(digitalRead (C3) == 0 );
     lcd.print('9');
   }

digitalWrite (A0,HIGH );
digitalWrite (A1,HIGH );
digitalWrite (A2,HIGH );
digitalWrite (A3,LOW  );

  if(digitalRead(C1)== 0)
   {
     while(digitalRead (C1)== 0);
     lcd.print('*');
   }
    if(digitalRead (C2)== 0)
   {
     while(digitalRead (C2)== 0);
    lcd.print('0');
   }
    if(digitalRead (C3)==0)
   {
     while(digitalRead (C3) == 0 );
     lcd.print('#');
   }
}

void loop()
{
 lcd.setCursor (0,1); 
  keypad ();
}

