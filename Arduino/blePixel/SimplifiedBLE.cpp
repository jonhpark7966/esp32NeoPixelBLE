#include "SimplifiedBLE.h"

#include <BLEDevice.h>
#include <BLEUtils.h>
#include <BLEServer.h>

#include "Arduino.h"


class SimplifiedBLECallbacks: public BLECharacteristicCallbacks {
    void onWrite(BLECharacteristic *pCharacteristic) {
      std::string value = pCharacteristic->getValue();

      if (value.length() > 0) {
        for (int i = 0; i < value.length(); i++)
          Serial.print(value[i]);
      }
    }
};

    SimplifiedBLE::SimplifiedBLE(char* service_name, char* service_uuid, char* characteristic_uuid, BLECharacteristicCallbacks* callbacks){
        BLEDevice::init(service_name);
        BLEServer *pServer = BLEDevice::createServer();

        BLEService *pService = pServer->createService(service_uuid);

        BLECharacteristic *pCharacteristic = pService->createCharacteristic(
                                               characteristic_uuid,
                                               BLECharacteristic::PROPERTY_READ |
                                               BLECharacteristic::PROPERTY_WRITE
                                             );

        if(callbacks == NULL) callbacks = new SimplifiedBLECallbacks();

        pCharacteristic->setCallbacks(callbacks);
        pService->start();

        BLEAdvertising *pAdvertising = pServer->getAdvertising();
        pAdvertising->start();
    }
