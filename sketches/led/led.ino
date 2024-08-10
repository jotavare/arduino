// Constants
const int ledPin = 13; // Pin connected to the LED

void setup() {
  // Initialize the digital pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin, HIGH);
  // Wait for a second
  delay(1000);
  // Turn the LED off by making the voltage LOW
  digitalWrite(ledPin, LOW);
  // Wait for a second
  delay(1000);
}
