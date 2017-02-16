// Step-1: No variables used in this sketch

//************************************************************/
// Step-2: INITIALIZE I/O PARAMETERS
//************************************************************/
// the setup function runs once
// upon pressing reset button or powering on the board
void setup()
{
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

//************************************************************/
// Step-3: MAIN PROGRAM
//************************************************************/
// the loop function runs over and over again forever
void loop()
{
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
