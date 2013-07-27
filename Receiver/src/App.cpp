#include "App.h"

App::App() {
}

App::~App() {
}

void App::loop() {
    Loop::loop();
    //if(door_sensor_.check()) {
        //Serial.print("Door sensor tripped");
        ////alarm_.chime();
        //delay(200);
    //}
    return;
}
