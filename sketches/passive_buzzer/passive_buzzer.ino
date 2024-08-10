#include "pitches.h"

// notes in the melody
int melody[] = {
    NOTE_C5, NOTE_D5, NOTE_E5, NOTE_F5, NOTE_G5, NOTE_A5, NOTE_B5, NOTE_C6};
int duration = 500; // 500 milliseconds

void setup()
{
}

void loop()
{
  for (int thisNote = 0; thisNote < 8; thisNote++)
  {
    // pin 8 outputs the sound, each note lasts 0.5 seconds
    tone(8, melody[thisNote], duration);

    // wait for a second before playing the next note
    delay(1000);
  }

  // restart after two seconds
  delay(2000);
}