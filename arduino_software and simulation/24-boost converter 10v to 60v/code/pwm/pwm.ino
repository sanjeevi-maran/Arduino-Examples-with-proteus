int PWM_out_pin = 9; // Must be one of 3, 5, 6, 9, 10, or 11
// for Arduino Uno
void setup() 
{
pinMode(PWM_out_pin, OUTPUT);
}
void loop() 
{
byte PWM_out_level;

PWM_out_level = 150;
analogWrite( PWM_out_pin, PWM_out_level);
delay(3000);

}

