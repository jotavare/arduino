#include <LedControl.h>

/*
 Now we need a LedControl to work with.
 ***** These pin numbers will probably not work with your hardware *****
 pin 12 is connected to the DataIn
 pin 11 is connected to LOAD(CS)
 pin 10 is connected to the CLK
 We have only a single MAX72XX.
 */
LedControl lc = LedControl(12, 10, 11, 1);

/* we always wait a bit between updates of the display */
unsigned long delaytime1 = 1000;
unsigned long delaytime2 = 50;
void setup()
{
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0, false);
  /* Set the brightness to a medium values */
  lc.setIntensity(0, 1);
  /* and clear the display */
  lc.clearDisplay(0);
}

/*
 This method will display the characters for the
 word "Arduino" one after the other on the matrix.
 (you need at least 5x7 leds to see the whole chars)
 */
void writeArduinoOnMatrix()
{
  /* here is the data for the characters */
  byte H[8] = {B11000011, B11000011, B11000011, B11111111, B11111111, B11000011, B11000011, B11000011};
  byte E[8] = {B11111111, B11111111, B11000000, B11111000, B11111000, B11000000, B11111111, B11111111};
  byte L[8] = {B11000000, B11000000, B11000000, B11000000, B11000000, B11000000, B11111111, B11111111};
  byte O[8] = {B11111111, B11111111, B11000011, B11000011, B11000011, B11000011, B11111111, B11111111};
  byte hf[8] = {B00111100, B01000010, B10100101, B10000001, B10100101, B10011001, B01000010, B00111100};
  byte nf[8] = {B00111100, B01000010, B10100101, B10000001, B10111101, B10000001, B01000010, B00111100};
  byte sf[8] = {B00111100, B01000010, B10100101, B10000001, B10011001, B10100101, B01000010, B00111100};

  /* now display them one by one with a small delay */
  lc.setRow(0, 0, H[0]);
  lc.setRow(0, 1, H[1]);
  lc.setRow(0, 2, H[2]);
  lc.setRow(0, 3, H[3]);
  lc.setRow(0, 4, H[4]);
  lc.setRow(0, 5, H[5]);
  lc.setRow(0, 6, H[6]);
  lc.setRow(0, 7, H[7]);
  delay(delaytime1);
  lc.setRow(0, 0, E[0]);
  lc.setRow(0, 1, E[1]);
  lc.setRow(0, 2, E[2]);
  lc.setRow(0, 3, E[3]);
  lc.setRow(0, 4, E[4]);
  lc.setRow(0, 5, E[5]);
  lc.setRow(0, 6, E[6]);
  lc.setRow(0, 7, E[7]);
  delay(delaytime1);
  lc.setRow(0, 0, L[0]);
  lc.setRow(0, 1, L[1]);
  lc.setRow(0, 2, L[2]);
  lc.setRow(0, 3, L[3]);
  lc.setRow(0, 4, L[4]);
  lc.setRow(0, 5, L[5]);
  lc.setRow(0, 6, L[6]);
  lc.setRow(0, 7, L[7]);
  delay(delaytime1);
  lc.clearDisplay(0);
  delay(delaytime2);
  lc.setRow(0, 0, L[0]);
  lc.setRow(0, 1, L[1]);
  lc.setRow(0, 2, L[2]);
  lc.setRow(0, 3, L[3]);
  lc.setRow(0, 4, L[4]);
  lc.setRow(0, 5, L[5]);
  lc.setRow(0, 6, L[6]);
  lc.setRow(0, 7, L[7]);
  delay(delaytime1);
  lc.setRow(0, 0, O[0]);
  lc.setRow(0, 1, O[1]);
  lc.setRow(0, 2, O[2]);
  lc.setRow(0, 3, O[3]);
  lc.setRow(0, 4, O[4]);
  lc.setRow(0, 5, O[5]);
  lc.setRow(0, 6, O[6]);
  lc.setRow(0, 7, O[7]);
  delay(delaytime1);
  lc.setRow(0, 0, sf[0]);
  lc.setRow(0, 1, sf[1]);
  lc.setRow(0, 2, sf[2]);
  lc.setRow(0, 3, sf[3]);
  lc.setRow(0, 4, sf[4]);
  lc.setRow(0, 5, sf[5]);
  lc.setRow(0, 6, sf[6]);
  lc.setRow(0, 7, sf[7]);
  delay(delaytime1);
  lc.setRow(0, 0, nf[0]);
  lc.setRow(0, 1, nf[1]);
  lc.setRow(0, 2, nf[2]);
  lc.setRow(0, 3, nf[3]);
  lc.setRow(0, 4, nf[4]);
  lc.setRow(0, 5, nf[5]);
  lc.setRow(0, 6, nf[6]);
  lc.setRow(0, 7, nf[7]);
  delay(delaytime1);
  lc.setRow(0, 0, hf[0]);
  lc.setRow(0, 1, hf[1]);
  lc.setRow(0, 2, hf[2]);
  lc.setRow(0, 3, hf[3]);
  lc.setRow(0, 4, hf[4]);
  lc.setRow(0, 5, hf[5]);
  lc.setRow(0, 6, hf[6]);
  lc.setRow(0, 7, hf[7]);
  delay(delaytime1);
  lc.setRow(0, 0, 0);
  lc.setRow(0, 1, 0);
  lc.setRow(0, 2, 0);
  lc.setRow(0, 3, 0);
  lc.setRow(0, 4, 0);
  lc.setRow(0, 5, 0);
  lc.setRow(0, 6, 0);
  lc.setRow(0, 7, 0);
  delay(delaytime1);
}

/*
 This function will light up every Led on the matrix.
 The led will blink along with the row-number.
 row number 4 (index==3) will blink 4 times etc.
 */
void single()
{
  for (int row = 0; row < 8; row++)
  {
    for (int col = 0; col < 8; col++)
    {
      delay(delaytime2);
      lc.setLed(0, row, col, true);
      delay(delaytime2);
      for (int i = 0; i < col; i++)
      {
        lc.setLed(0, row, col, false);
        delay(delaytime2);
        lc.setLed(0, row, col, true);
        delay(delaytime2);
      }
    }
  }
}

void loop()
{
  writeArduinoOnMatrix();
  single();
}
