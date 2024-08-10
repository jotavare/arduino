int ledPin = 13; // pin for the led
int buttonApin = 9; // pin for button a
int buttonBpin = 8; // pin for button b

byte leds = 0; // variable to store led state

void setup()
{
  pinMode(ledPin, OUTPUT); // set led pin as output
  pinMode(buttonApin, INPUT_PULLUP); // set button a pin as input with pull-up resistor
  pinMode(buttonBpin, INPUT_PULLUP); // set button b pin as input with pull-up resistor
}

void loop()
{
  if (digitalRead(buttonApin) == LOW) // check if button a is pressed
  {
    digitalWrite(ledPin, HIGH); // turn on the led
  }
  if (digitalRead(buttonBpin) == LOW) // check if button b is pressed
  {
    digitalWrite(ledPin, LOW); // turn off the led
  }
}