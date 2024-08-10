const int ledPin = 13; // the led attach to

void setup()
{
  pinMode(ledPin, OUTPUT); // initialize the ledPin as an output
  pinMode(2, INPUT); // set pin 2 as input
  digitalWrite(2, HIGH); // enable pull-up resistor on pin 2
}

void loop()
{
  int digitalVal = digitalRead(2); // read the value from pin 2
  if (HIGH == digitalVal)
  {
    digitalWrite(ledPin, LOW); // turn the led off
  }
  else
  {
    digitalWrite(ledPin, HIGH); // turn the led on
  }
}