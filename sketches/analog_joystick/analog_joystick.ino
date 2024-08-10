// arduino pin numbers
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = A0; // analog pin connected to x output
const int Y_pin = A1; // analog pin connected to y output

void setup()
{
  pinMode(SW_pin, INPUT); // set switch pin as input
  pinMode(LED_BUILTIN, OUTPUT); // set built-in led pin as output
  digitalWrite(SW_pin, HIGH); // enable pull-up resistor on switch pin
  Serial.begin(9600); // initialize serial communication at 9600 bps
}

void loop()
{
  Serial.print("switch:  ");
  Serial.print(digitalRead(SW_pin)); // read and print switch state
  Serial.print("\n");
  Serial.print("x-axis: ");
  Serial.print(analogRead(X_pin)); // read and print x-axis value
  Serial.print("\n");
  Serial.print("y-axis: ");
  Serial.println(analogRead(Y_pin)); // read and print y-axis value
  Serial.print("\n\n");

  if ((analogRead(Y_pin) == 0))
    Serial.print("right!\n"); // print if joystick is moved right

  if ((analogRead(Y_pin) == 1023))
    Serial.print("left!\n"); // print if joystick is moved left

  if ((analogRead(X_pin) == 0))
    Serial.print("up!\n"); // print if joystick is moved up

  if ((analogRead(X_pin) == 1023))
    Serial.print("down!\n"); // print if joystick is moved down

  // check if switch is pressed or joystick is moved to any extreme
  if ((digitalRead(SW_pin) == 0) || (analogRead(X_pin) == 1023) || (analogRead(X_pin) == 0) || (analogRead(Y_pin) == 1023) || (analogRead(Y_pin) == 0))
    digitalWrite(LED_BUILTIN, LOW); // turn on led
  else
    digitalWrite(LED_BUILTIN, HIGH); // turn off led

  delay(250); // wait for 250 milliseconds
}