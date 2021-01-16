int PWM_out_pin = 9; // Must be one of 3, 5, 6, 9, 10, or 11
// for Arduino Uno
void setup() 
{
pinMode(PWM_out_pin, OUTPUT);
}
void loop() 
{
byte PWM_out_level;
PWM_out_level = 100;
analogWrite( PWM_out_pin, PWM_out_level);
delay(3000);
PWM_out_level = 150;
analogWrite( PWM_out_pin, PWM_out_level);
delay(3000);
PWM_out_level = 175;
analogWrite( PWM_out_pin, PWM_out_level);
delay(3000);
PWM_out_level = 200;
analogWrite( PWM_out_pin, PWM_out_level);
delay(3000);
PWM_out_level = 255;
analogWrite( PWM_out_pin, PWM_out_level);
delay(3000);
}

