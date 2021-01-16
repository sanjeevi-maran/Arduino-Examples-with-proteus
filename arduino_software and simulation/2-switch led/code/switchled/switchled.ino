int led     = 13;    //pin
int button = 2; //pin
int buttonvalue; //readdigital
void setup() 
{
  pinMode ( led ,OUTPUT);
  pinMode ( button ,INPUT);

}

void loop()
{
 buttonvalue = digitalRead(button);
    while(buttonvalue == 0);
  if(buttonvalue == 0)
   {
 
 
      digitalWrite (led , HIGH);
      delay (1000);
      digitalWrite (led,LOW);
      delay (1000);
   }
}


