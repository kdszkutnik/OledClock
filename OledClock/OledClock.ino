#include "OledDisplay.h"
#include <Arduino.h>

OledDisplay display;

void setup() {
  Serial.begin(9600);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.showMyLove();
}

void loop() {
  
}
