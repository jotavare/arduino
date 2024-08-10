// the setup function runs once when you press reset or power the board
void setup()
{
  // initialize digital pin led_builtin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(LED_BUILTIN, HIGH); // turn the led on (high is the voltage level)
  delay(1000);                     // wait for a second
  digitalWrite(LED_BUILTIN, LOW);  // turn the led off by making the voltage low
  delay(1000);                     // wait for a second
}