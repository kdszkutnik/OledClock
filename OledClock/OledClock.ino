#include "OledDisplay.h"
#include "Arduino.h"
#include "RTClib.h"

OledDisplay display(SCREEN_WIDTH, SCREEN_HEIGHT);
RTC_DS1307 rtc;
DateTime now;

void setup() {
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  rtc.begin();
  if (! rtc.isrunning()) {
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
}

void loop() {
  now = rtc.now();
  display.showTime(now.hour(), now.minute());
}
