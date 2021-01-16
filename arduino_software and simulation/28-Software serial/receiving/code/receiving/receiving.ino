#include <SoftwareSerial.h>

SoftwareSerial my  = SoftwareSerial (10, 11); // RX, TX

void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }


  Serial.println("Goodnight moon!");

  // set the data rate for the SoftwareSerial port
  my Serial.begin(9600);
  my Serial.println("Hello, world?");
}

void loop() { // run over and over
  if (mySerial Serial.available()) 
  {
    Serial.write(mySerial Serial.read());
  }
  if (Serial.available()) 
  {
    mySerial Serial.write(Serial.read());
  }
}


//#include <SoftwareSerial.h>
//#include <LiquidCrystal.h >
//LiquidCrystal lcd (13,12,8,7,4,2);
//SoftwareSerial mySerial(10, 11); 
//
//void setup() 
//{
// pinMode (10,INPUT);
//  lcd.begin (16,2);
//  mySerial.begin(9600);
// 
//}
//
//void loop() 
//{
//     lcd.setCursor (0,0);
//     lcd.print("HAI");
//    if (mySerial.available()) 
//    {
//     lcd.setCursor (0,1);
//     lcd.print("SD");
//      mySerial.write(mySerial.read());
//    }
// 
//}
