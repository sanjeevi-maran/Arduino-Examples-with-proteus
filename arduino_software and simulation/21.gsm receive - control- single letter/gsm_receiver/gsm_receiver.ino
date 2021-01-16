#include<LiquidCrystal.h>
LiquidCrystal lcd (13,12,8,7,4,2);
char receive; //Will hold the incoming character from the Serial Port.
 void setup()
 {
 // prepare the digital output pins

  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print(" GSM");
   lcd.setCursor(0,1);
  lcd.print("RECEIVER ");
   delay(2000);
  lcd.clear();

  Serial.begin(9600);
   Gsm_initialize();


 }
 
 //Initialize GSM module serial port for communication. 
 
void Gsm_initialize()
{
       Serial.begin(9600);
       delay(3000);
       lcd.print('.');
       Serial.print("AT\r"); 
       delay(4000);      
       lcd.print('.');
       Serial.println("AT+CMGF=1\r"); // set SMS mode to text
       delay(4000);
       lcd.print('.');
//        // Serial.println("AT+CNMI=2,2,0,0,0"); // set module to send SMS data to serial out upon receipt 
//        // Serial.println("AT+CNMI=3,1,2,1,1");
     Serial.println("AT+CNMI=1,2,0,0,0\r");
     delay(4000);
     lcd.print('.');
     lcd.print("READY");
     delay(2000);
     lcd.clear();
}

 void loop() 
 {
     if(Serial.available() >0)
        {
            receive = Serial.read(); 
//          lcd.setCursor (0,0);
//          lcd.print (receive);
         if(receive == 't')
           { 
                        
             lcd.print("HE");
           }
           if(receive == 's')
           {
                     
            lcd.print("LLO");
           }
            if(receive == 'v')
           {
                      
            lcd.print("WORL");
           }
             if(receive == 'c')
           {
                      
            lcd.print("D");
           }
                                                   
        }
 }
