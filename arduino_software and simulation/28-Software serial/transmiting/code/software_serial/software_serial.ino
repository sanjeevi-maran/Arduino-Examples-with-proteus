#include <SoftwareSerial.h>
#define rxpin 10
#define txpin 11
#define rxpin1 8
#define txpin1 9
#define rxpin2 5
#define txpin2 6
SoftwareSerial secondserial  (rxpin , txpin);
SoftwareSerial thirdserial  (rxpin1 , txpin1);
SoftwareSerial fourthserial  (rxpin2 , txpin2);

void setup() 
{
  // put your setup code here, to run once:
   secondserial.begin (9600);
   thirdserial.begin (9600);
   fourthserial.begin (9600);
}

void loop() 
{
  secondserial.print ("HELLO"); 
  thirdserial.print  ("WORLD"); 
  fourthserial.print ("SEND"); 

}
