#define ledPin  13
#define led 12
#define  ledd 11
#define interruptPin 2
int state = 0;

void setup() 
{
  pinMode(led, OUTPUT);
  pinMode(ledPin, OUTPUT);
    pinMode(ledd, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink,LOW);
}

void loop() 
{
  digitalWrite (led,HIGH);
  delay(1000);
  digitalWrite (ledd,HIGH);
  delay(1000);
  digitalWrite (led,LOW);
  delay(1000);
  digitalWrite (ledd,LOW);
  delay(1000);
  digitalWrite(ledPin, state);
}

void blink()
{
  state = !state;
}
