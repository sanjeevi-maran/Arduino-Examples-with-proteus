
int led = 13;
String a;
void setup() 
{
  pinMode (led,OUTPUT);
  Serial.begin (9600);

}

void loop() 
{
   if(Serial.available())
    {
       a=Serial.readString();
       if(a=="abc")
       {
        digitalWrite(led,HIGH);
       }
      else
       {
         digitalWrite(led,LOW);
       }
      
    }
   
 
}
