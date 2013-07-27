#include "Siren.h"
#include "arduino.h"

Siren::Siren(int speakerPin) :
    speakerPin(speakerPin) {
    pinMode(speakerPin, OUTPUT);
}

Siren::~Siren() {
}
  
void Siren::chime() {
    for(int i = 0; i < 4; i++){
        tone(speakerPin, 3500, 75);
        delay(125);
    }
}
