#include "Alarm.h"
#include "arduino.h"

Alarm::Alarm(int speakerPin) :
    speakerPin(speakerPin) {
    pinMode(speakerPin, OUTPUT);
}

Alarm::~Alarm() {
}
  
void Alarm::chime() {
    for(int i = 0; i < 4; i++){
        tone(speakerPin, 3000, 120);
        delay(125);
    }
}
