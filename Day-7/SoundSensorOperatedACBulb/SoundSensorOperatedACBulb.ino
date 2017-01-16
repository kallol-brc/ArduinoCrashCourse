int relayPin = 7;
int soundPin = 2;
int soundSensorValue = 0;

void setup()
{
  pinMode(relayPin, OUTPUT);
  pinMode(soundPin, INPUT);       
}

void loop()
{
  soundSensorValue = analogRead(soundPin);

  if(soundSensorValue < 509)
  {
    //Switch ON the Relay
    digitalWrite(relayPin, 0);
    
    //Wait for 10 seconds
    delay(10000);
  
    //Switch OFF the Relay
    digitalWrite(relayPin, 1);
  }
}
