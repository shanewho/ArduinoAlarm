//#include "LinkedList.h"
#include "Loop.h"

void Loop::loop() {
    for(int i = 0; i < handler_count_; i++) {
        handlers_[i]->on_loop();
    }
}

void Loop::subscribe(LoopHandler *handler) {
    Serial.println("Subscribing LoopHandler");
    if(handler_count_ > sizeof(handlers_)) { 
        Serial.println("Loop overflow");
    }
    handlers_[handler_count_] = handler;
    handler_count_++;
}


int Loop::handler_count_ = 0;
LoopHandler* Loop::handlers_[3];
