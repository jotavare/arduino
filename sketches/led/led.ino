// constants
const int ledPin = 13; // pin connected to the led

void setup() {
  // initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // turn the led on (high is the voltage level)
  digitalWrite(ledPin, HIGH);
  // wait for a second
  delay(1000);
  // turn the led off by making the voltage low
  digitalWrite(ledPin, LOW);
  // wait for a second
  delay(1000);
}