#include <LiquidCrystal.h>
int tempPin = 0;
//                bs  e  d4 d5  d6 d7
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
void setup()
{
  lcd.begin(16, 2);
}
void loop()
{
  int tempReading = analogRead(tempPin);
  // this is ok
  double tempK = log(10000.0 * ((1024.0 / tempReading - 1)));
  tempK = 1 / (0.001129148 + (0.000234125 + (0.0000000876741 * tempK * tempK)) * tempK); // temp kelvin
  float tempC = tempK - 273.15;                                                          // convert kelvin to celsius
  float tempF = (tempC * 9.0) / 5.0 + 32.0;                                              // convert celsius to fahrenheit
  /*  replaced
    float tempVolts = tempReading * 5.0 / 1024.0;
    float tempC = (tempVolts - 0.5) * 10.0;
    float tempF = tempC * 9.0 / 5.0 + 32.0;
  */
  // display temperature in c
  lcd.setCursor(0, 0);
  lcd.print("temp         c  ");
  // display temperature in f
  // lcd.print("temp         f  ");
  lcd.setCursor(6, 0);
  // display temperature in c
  lcd.print(tempC);
  // display temperature in f
  // lcd.print(tempF);
  lcd.setCursor(0, 1);
  if (tempC > 30)
    lcd.print("very  hot!   ");
  else
    lcd.print("temp  normal");
  delay(500);
}