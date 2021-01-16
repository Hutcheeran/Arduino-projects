
#include "pitches.h"

int pin = 8;

int melody[] = {
  NOTE_G5, NOTE_FS5, NOTE_B5, NOTE_E5, NOTE_D5, NOTE_G5, NOTE_C5, NOTE_B4, NOTE_E5, NOTE_A4, NOTE_D5};
int duration[] = {4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 4};
//tempo of 88bpm in seconds
int tempo = 2730;

void setup() {
}

void loop() {  
  for (int i = 0; i < 11; i++) {
    int length = tempo/duration[i];
    tone(pin, melody[i], length);

    int pause = length*1.30;
    delay(pause);
  }
  // restart after two seconds 
  delay(2000);
}