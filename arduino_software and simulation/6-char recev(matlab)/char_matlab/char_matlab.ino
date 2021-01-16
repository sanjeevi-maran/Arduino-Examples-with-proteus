int led = 13;
char a;
void setup() 
{
  Serial.begin(9600);
  pinMode (led,OUTPUT); 
}

void loop() 
{
 if(Serial.available())
    {
         a=Serial.read();
         if(a=='1')
          {
            digitalWrite (led,HIGH);
          }
         else
          {
            digitalWrite (led,LOW);
          }
    }
}
