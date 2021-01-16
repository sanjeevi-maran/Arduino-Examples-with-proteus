#include <SoftwareSerial.h>

//SoftwareSerial mySerial(10, 11); // RX, TX
SoftwareSerial mySerial =  SoftwareSerial(10, 11);
void setup()
{
  // Open serial communications and wait for port to open:
  
  pinMode(10, INPUT);
  pinMode(11, OUTPUT);
 
  mySerial.begin(9600);
  mySerial.println("Hello, world?");
}

void loop() // run over and over
{
      if (mySerial.available())
      {
      
        char someChar = mySerial.read();
    
        mySerial.print(someChar);
      }
}
