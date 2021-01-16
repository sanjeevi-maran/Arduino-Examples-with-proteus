#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 2, 4, 7, 8);

void setup()
{
lcd.begin(16, 2);  
Serial.begin(9600);
lcd.begin (16,2);

}

void loop() 
{
   
     delay(10000);
     Serial.print("AT");
     Serial.write(0X0D);
     Serial.write(0X0A);
     delay(500);

     Serial.print("AT+CMGF=1");
     Serial.write(0X0D);
     Serial.write(0X0A);
     delay(500);

     //Serial.print("AT+CSCS=\"");
     //Serial.print("GSM");
    // Serial.write(0X0D);
    // Serial.write(0X0A);
   //  delay(500);

     Serial.print("AT+CMGS=\"");
     Serial.print("8754090958");
     Serial.println("\"");
     Serial.write(0X0D);
     Serial.write(0X0A);
     delay(500);

     Serial.print("HAII");
     Serial.write(0X0A);
     delay(500);

     Serial.write(0x1A);
     Serial.write(0X0A); 
     delay(500);

        
}
