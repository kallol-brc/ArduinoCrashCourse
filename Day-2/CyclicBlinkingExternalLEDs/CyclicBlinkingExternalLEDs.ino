// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pins as an output.
  pinMode(2, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);

}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(2, HIGH);   // turn LED 1 on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(2, LOW);    // turn LED 1 off by making the voltage LOW
  delay(1000);              // wait for a second

  digitalWrite(4, HIGH);   // turn LED 2 on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(4, LOW);    // turn LED 2 off by making the voltage LOW
  delay(1000);              // wait for a second

  digitalWrite(7, HIGH);   // turn LED 3 on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(7, LOW);    // turn LED 3 off by making the voltage LOW
  delay(1000);              // wait for a second
}
