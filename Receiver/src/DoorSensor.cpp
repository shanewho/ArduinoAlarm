#include "Loop.h"
#include "DoorSensor.h"

#define couloir 12449942
#define porte 13464924

DoorSensor::DoorSensor(DoorSensorHandler *handler) : 
    sensor_tripped_handler_(handler),
    last_trip_(0) {
}

DoorSensor::~DoorSensor() {
}

void DoorSensor::enable() {
    Loop::subscribe(this);
    mySwitch.enableReceive(0);
}

void DoorSensor::on_loop() {
    //Serial.print("l");
    check();
}

void DoorSensor::check() {

    if (mySwitch.available()) {
        int value = mySwitch.getReceivedValue();

        unsigned long last_millis = millis(); 
        bool duplicate = ((last_millis - last_trip_) < 1000);
        last_trip_ = last_millis;

        if(!duplicate) {
            sensor_tripped_handler_->on_sensor_tripped(value);
            //while (!Serial);

            switch (value) {
                case porte:
                    Serial.println("Door");
                    break;
                case couloir:
                    Serial.println("Hallway");
                    break;
                default:
                    Serial.print("Unknown zone");
                    Serial.println(value);
                    break;
            }
        }

        mySwitch.resetAvailable();
    }
}

