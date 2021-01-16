
#include "pitches.h"

// notes in the melody:
int melody[] = {
  NOTE_G5, NOTE_FS5, NOTE_B5, NOTE_E5, NOTE_D5, NOTE_G5, NOTE_C5, NOTE_B4, NOTE_E5, NOTE_A4, NOTE_D5};
int duration[] = {4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 4};

void setup() {
}

void loop() {  
  for (int i = 0; i < 11; i++) {
    int length = 4000/duration[i];
    tone(8, melody[i], length);
    int pause = length*1.30;
    delay(pause);
  }
  // restart after two seconds 
  delay(2000);
}