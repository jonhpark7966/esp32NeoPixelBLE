/*
    Based on Neil Kolban example for IDF: https://github.com/nkolban/esp32-snippets/blob/master/cpp_utils/tests/BLE%20Tests/SampleWrite.cpp
    Ported to Arduino ESP32 by Evandro Copercini
*/

#ifndef SIMPBLE_H
#define SIMPBLE_H

#include <BLECharacteristic.h>


class SimplifiedBLE{
  public:
    SimplifiedBLE(char* service_name, char* service_uuid, char* characteristic_uuid, BLECharacteristicCallbacks* callbacks);
};

#endif
