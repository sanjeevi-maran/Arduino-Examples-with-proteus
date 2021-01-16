

#define stepperpin1  3
#define stepperpin2  4
#define stepperpin3  5
#define stepperpin4  6


void setup()
{
  // put your setup code here, to run once:
     pinMode (stepperpin1,OUTPUT); 
     pinMode (stepperpin2,OUTPUT);
     pinMode (stepperpin3,OUTPUT);
     pinMode (stepperpin4,OUTPUT);

}

void loop()
{
      digitalWrite (stepperpin1,HIGH);//0deg
      digitalWrite (stepperpin2,LOW);
      digitalWrite (stepperpin3,LOW);
      digitalWrite (stepperpin4,LOW);
   delay(3000);
       digitalWrite (stepperpin1,HIGH);//45deg
       digitalWrite (stepperpin2,LOW);
       digitalWrite (stepperpin3,HIGH);
       digitalWrite (stepperpin4,LOW);
    delay(3000);
        digitalWrite (stepperpin1,HIGH); //90deg
        digitalWrite (stepperpin2,HIGH);
        digitalWrite (stepperpin3,HIGH);
        digitalWrite (stepperpin4,LOW);
    delay(3000);
         digitalWrite (stepperpin1,LOW);//135 deg
         digitalWrite(stepperpin2,HIGH);
         digitalWrite (stepperpin3,HIGH);
         digitalWrite (stepperpin4,LOW);
     delay(3000);
         digitalWrite (stepperpin1,LOW); //180 deg
         digitalWrite (stepperpin2,HIGH);
         digitalWrite (stepperpin3,HIGH);
         digitalWrite (stepperpin4,HIGH);
      delay(3000);
         digitalWrite (stepperpin1,LOW);//225 deg
         digitalWrite (stepperpin2,HIGH);
         digitalWrite (stepperpin3,LOW);
         digitalWrite (stepperpin4,HIGH);
       delay(3000);
         digitalWrite (stepperpin1,LOW);//270 deg
         digitalWrite (stepperpin2,LOW);
         digitalWrite (stepperpin3,LOW);
         digitalWrite (stepperpin4,HIGH);
       delay(3000);
         digitalWrite (stepperpin1,HIGH);//315 deg
         digitalWrite (stepperpin2,LOW);
         digitalWrite (stepperpin3,LOW);
         digitalWrite (stepperpin4,HIGH);
       delay(3000);                                                                                                                                                      
                      
}
