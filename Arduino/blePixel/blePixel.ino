#include "SimplifiedBLE.h"

// See the following for generating UUIDs:
// https://www.uuidgenerator.net/
#define SERVICE_UUID        "4fafc201-1fb5-459e-8fcc-c5c9c331914b"
#define CHARACTERISTIC_UUID "beb5483e-36e1-4688-b7f5-ea07361b26a8"


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  SimplifiedBLE ble = SimplifiedBLE("jh_esp32", SERVICE_UUID, CHARACTERISTIC_UUID);
}

void loop() {
  // put your main code here, to run repeatedly:

}
