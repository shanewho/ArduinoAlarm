#include <stdint.h>
#include <VirtualWire.h>
#include "Alarm.h"
#include "DoorSensor.h"

class App {

public:

  App();
  ~App();
  void loop();

private:
  DoorSensor door_sensor_;
  Alarm alarm_;

};
