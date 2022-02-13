#ifndef STATEMACHINE_H
#define STATEMACHINE_H

#include <BLECharacteristic.h>

#include "NeoPixelController.h"


class StateMachine{
  public:
    StateMachine(){ _pixelCon = new NeoPixelController(); }
    virtual BLECharacteristicCallbacks* getBLECallbacks() = 0;
    NeoPixelController* _pixelCon;
};

class StaticNeopixelStateMachine : public StateMachine{

  public:
    StaticNeopixelStateMachine(){}
    BLECharacteristicCallbacks* getBLECallbacks();
  
};

#endif
