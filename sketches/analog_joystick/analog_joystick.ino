// Arduino pin numbers
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = A0; // analog pin connected to X output
const int Y_pin = A1; // analog pin connected to Y output

void setup()
{
  pinMode(SW_pin, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
}

void loop()
{
  Serial.print("Switch:  ");
  Serial.print(digitalRead(SW_pin));
  Serial.print("\n");
  Serial.print("X-axis: ");
  Serial.print(analogRead(X_pin));
  Serial.print("\n");
  Serial.print("Y-axis: ");
  Serial.println(analogRead(Y_pin));
  Serial.print("\n\n");

  if ((analogRead(Y_pin) == 0))
    Serial.print("Right!\n");

  if ((analogRead(Y_pin) == 1023))
    Serial.print("Left!\n");

  if ((analogRead(X_pin) == 0))
    Serial.print("Up!\n");

  if ((analogRead(X_pin) == 1023))
    Serial.print("Down!\n");

  if ((digitalRead(SW_pin) == 0) || (analogRead(X_pin) == 1023) || (analogRead(X_pin) == 0) || (analogRead(Y_pin) == 1023) || (analogRead(Y_pin) == 0))
    digitalWrite(LED_BUILTIN, LOW);
  else
    digitalWrite(LED_BUILTIN, HIGH);

  delay(250);
}
