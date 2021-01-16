#include <LiquidCrystal.h>
LiquidCrystal lcd (13,12,4,5,6,7);
//13-rs,12-en,8-D4,7-D5,4-D6,2-D7



void setup()
{
  lcd.begin (16,2); //16 char 2 row.16*2 lcd
  lcd.print("I AM SDPRO solution");
}

void loop()
{
       
     

        for (int thisChar = 0; thisChar <1; thisChar++) 
        {    lcd.print(" ");
             delay(500);
        }

                 
        lcd.autoscroll();
         delay(100);
     
}
