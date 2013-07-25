#include "App.h"
#include <VirtualWire.h>

App::App() :
    alarm_(6) {
}

App::~App() {
}

void App::loop() {
    if(door_sensor_.check()) {
        Serial.print("Door sensor tripped");
        alarm_.chime();
        delay(200);
    }
    return;
}
