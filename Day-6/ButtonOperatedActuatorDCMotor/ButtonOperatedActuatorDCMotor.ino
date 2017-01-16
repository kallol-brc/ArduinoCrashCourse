int motorPin = 3;
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
    digitalWrite(motorPin, HIGH);
    delay(1000);
    digitalWrite(motorPin, LOW);
  }
}
