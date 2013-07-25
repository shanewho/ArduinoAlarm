#include <Arduino.h>
void setup();
void loop();
#line 1 "src/sketch.ino"
#include "App.h"
#include <VirtualWire.h>
App app;
 
void setup()
{
    Serial.begin(9600);          // Configure the serial connection to the computer
    vw_set_ptt_inverted(true);  // Required by the RF module
    vw_setup(2000);            // bps connection speed
    vw_set_rx_pin(3);         // Arduino pin to connect the receiver data pin
    vw_rx_start();           // Start the receiver
}
 
void loop()
{
  app.loop();
  
}

