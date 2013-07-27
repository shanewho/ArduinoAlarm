#ifndef APP_H_
#define APP_H_

#include <stdint.h>
#include "Alarm.h"
#include "DoorSensor.h"

class App {

public:

  App();
  ~App();
  void loop();

private:
  Alarm alarm_;

};

#endif
