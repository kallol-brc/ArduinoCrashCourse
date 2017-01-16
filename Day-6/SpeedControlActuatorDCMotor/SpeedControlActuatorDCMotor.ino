int motorPin = 3;       //this is a PWM capable pin
int buttonPin = 2;
int buttonState = 0;

void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  pinMode(buttonPin, INPUT);
} 
 
 
void loop() 
{ 
  buttonState = digitalRead(buttonPin);
  
  if(buttonState == HIGH)
  {
    analogWrite(motorPin, 255);   //run at full speed
    delay(1000);
    analogWrite(motorPin, 192);   //run at 75% speed
    delay(1000);
  }
}
