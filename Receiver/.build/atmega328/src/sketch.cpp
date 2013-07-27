#include <Arduino.h>
void setup();
void loop();
#line 1 "src/sketch.ino"
#include "App.h"
App *app;
 
void setup()
{
    Serial.begin(9600);          // Configure the serial connection to the computer
    while (!Serial) ;
    Serial.println("Booting...");
    app = new App();
}
 
void loop()
{
    app->loop();
}

