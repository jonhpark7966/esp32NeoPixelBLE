#include "StateMachine.h"

#include "Arduino.h"




class StaticNeopixelBLECharacteristicCallbacks : public BLECharacteristicCallbacks {

public:
    NeoPixelController* pixelCon;
private:
    void onWrite(BLECharacteristic *pCharacteristic) {
      std::string value = pCharacteristic->getValue();

      if (value.length() > 0) {
        pixelCon->setColor((255<<16));

      }
    }

};


BLECharacteristicCallbacks* StaticNeopixelStateMachine::getBLECallbacks(){
  StaticNeopixelBLECharacteristicCallbacks* callbacks = new StaticNeopixelBLECharacteristicCallbacks();
  callbacks->pixelCon = _pixelCon;
  return callbacks;  
}
 
