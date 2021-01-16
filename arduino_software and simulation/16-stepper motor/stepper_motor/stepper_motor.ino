#include <Stepper.h>
#include<LiquidCrystal.h>

LiquidCrystal lcd (7,6,5,4,3,2);
const int stepsPerRevolution = 200;  // initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 8, 9, 10, 11);



void setup() 
{
  lcd.begin(16,2);
}

void loop() 
{
    lcd.setCursor (0,1);  
  // read the sensor value:
  int sensorReading = analogRead(A0);
  lcd.print (sensorReading);
  // map it to a range from 0 to 100:
  int motorSpeed = sensorReading;
  // set the motor speed:
    if (motorSpeed > 0)
    {
      myStepper.setSpeed(motorSpeed);
      // step 1/100 of a revolution:
      myStepper.step(stepsPerRevolution /100);
    }
}
