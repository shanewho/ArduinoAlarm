#ifndef ALARM_H_
#define ALARM_H_ 

#include "DoorSensor.h"
#include "Siren.h"

class Alarm : public DoorSensorHandler {
public:
    Alarm();
    ~Alarm();
    void on_sensor_tripped(int zone);
private: 
    Siren siren_;
    DoorSensor door_sensor_;
};

#endif
