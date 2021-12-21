#ifndef OLED_DISPLAY_H
#define OLED_DISPLAY_H

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels

class OledDisplay : public Adafruit_SSD1306 {
  private:
    bool showColonBool = 0;
    unsigned long previousMillis = 0;
    unsigned long interval = 500;

  public:  
    using Adafruit_SSD1306::Adafruit_SSD1306;
    void showTime(int hours, int minutes);
    char showColon(void);
};

#endif
