#ifndef DOORSENSOR_H_
#define DOORSENSOR_H_

#include "Loop.h"
#include <RCSwitch.h>

class DoorSensorHandler {
public:
   virtual void on_sensor_tripped(int zone) = 0;
};

class DoorSensor : public LoopHandler {

public:
    DoorSensor(DoorSensorHandler *handler);
    ~DoorSensor();
    void check();
    void enable();
    int checkold();
    void on_loop();
private:
    RCSwitch mySwitch;
    DoorSensorHandler *sensor_tripped_handler_;
    unsigned long last_trip_;

};

#endif
