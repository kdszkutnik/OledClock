#include "RtcClock.h"

void RtcClock::begin(void) {
  rtc.begin();
  //rtc.adjust(DateTime(F(__DATE__), F(__TIME__))); // uncomment this line to set a proper time
}

int RtcClock::hour(void) {
  now = rtc.now();
  return now.hour();
}

int RtcClock::minute(void) {
  now = rtc.now();
  return now.minute();
}
