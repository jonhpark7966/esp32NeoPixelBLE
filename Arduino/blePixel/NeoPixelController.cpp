#include "NeoPixelController.h"

#include <Adafruit_NeoPixel.h>

#define PIN        5
#define NUMPIXELS 60
Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

NeoPixelController::NeoPixelController(){
  pixels.begin();
}

void NeoPixelController::setBright(int brightness){
  pixels.setBrightness(brightness);
  pixels.show();
}

void NeoPixelController::setColor(unsigned int color){
  pixels.fill(color);
  pixels.show();
}
    
void NeoPixelController::setStaticPattern(){
  pixels.rainbow();
}

void NeoPixelController::setDynamicPattern(){}
