#include "DoorSensor.h"
#include <VirtualWire.h>

int DoorSensor::check() {
    uint8_t buf[VW_MAX_MESSAGE_LEN];
    uint8_t buflen = VW_MAX_MESSAGE_LEN;
    if (vw_get_message(buf, &buflen))      // We check if we have received data
    {
        buf[buflen] = 0;
        if(strcmp((char*)buf, "TRIGGERED") == 0) {
            return 1;
        }
        Serial.print((char*)buf);
        /*    int i;
        // Message with proper check    
        for (i = 0; i < buflen; i++)
        {
        Serial.write(buf[i]);  // The received data is stored in the buffer
        // and sent through the serial port to the computer
        }*/
        //Serial.println();
    }
}
