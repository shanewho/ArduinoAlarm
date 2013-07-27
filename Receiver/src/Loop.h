#ifndef LOOP_H_
#define  LOOP_H_
//#include "Vector.h"
//#include "LinkedList.h"
#include <arduino.h>

class LoopHandler {
public:
   virtual void on_loop() = 0;
};

class Loop {
public: 
   static void loop(); 
   static void subscribe(LoopHandler *handler); 
private:
   //static Vector<LoopHandler> handler_;
   //static Node<LoopHandler>* first_node_;
   static LoopHandler* handlers_[3];
   static int handler_count_;
};

#endif
