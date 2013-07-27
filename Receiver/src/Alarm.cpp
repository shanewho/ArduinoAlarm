#include "Alarm.h"

Alarm::Alarm() : 
    siren_(6),
    door_sensor_(this) {

    door_sensor_.enable();
}

Alarm::~Alarm() {
}

void Alarm::on_sensor_tripped(int zone) {
    Serial.println("Trigger SIREN");
    siren_.chime();
}
