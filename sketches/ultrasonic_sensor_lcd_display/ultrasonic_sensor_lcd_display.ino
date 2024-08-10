#include <LiquidCrystal_I2C.h>
#include "SR04.h"

// initialize the lcd with i2c address 0x27, 20 columns, and 4 rows
LiquidCrystal_I2C lcd(0x27, 20, 4);

// define trig and echo pins
#define TRIG_PIN 2
#define ECHO_PIN 3

// initialize the sr04 ultrasonic sensor with the echo and trig pins
SR04 sr04 = SR04(ECHO_PIN, TRIG_PIN);

void setup()
{
  lcd.init();      // initialize the lcd
  lcd.backlight(); // turn on the lcd backlight
}

void loop()
{
  long distance = sr04.Distance(); // measure the distance

  lcd.clear();         // clear the lcd screen
  lcd.setCursor(0, 0); // position the cursor at the first line
  lcd.print("distance: ");
  lcd.print(distance); // display the measured distance
  lcd.print(" cm");

  delay(300); // delay for 300 ms before the next measurement
}