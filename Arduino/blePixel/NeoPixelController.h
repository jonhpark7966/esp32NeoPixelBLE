
#ifndef NEOPIXELCONT_H
#define NEOPIXELCONT_H


class NeoPixelController{
  public:
    NeoPixelController();
    void setBright(int brightness); // 0 ~ 255
    void setColor(unsigned int color); // WRGB 32bit
    void setStaticPattern();
    void setDynamicPattern();
    
  private:
};

#endif
