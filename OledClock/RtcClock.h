#ifndef RTC_CLOCK_H
#define RTC_CLOCK_H

#include "RTClib.h"

class RtcClock {
  public:
    RTC_DS1307 rtc;
    DateTime now;

    void begin(void);
    int hour(void);
    int minute(void);
};

#endif
