#include "OledDisplay.h"
#include "Arduino.h"

OledDisplay display(SCREEN_WIDTH, SCREEN_HEIGHT);

void setup() {
  Serial.begin(9600);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
}

void loop() {
  display.showTime(10, 15);
}
