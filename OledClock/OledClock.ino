#include "Arduino.h"
#include "OledDisplay.h"
#include "RtcClock.h"

OledDisplay display(SCREEN_WIDTH, SCREEN_HEIGHT);
RtcClock rtcClock;

void setup() {
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  rtcClock.begin();
}

void loop() {
  display.showTime(rtcClock.hour(), rtcClock.minute());
}
