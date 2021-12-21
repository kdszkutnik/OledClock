#include "OledDisplay.h"

void OledDisplay::showTime(int hours, int minutes) {
  setTextSize(4);
  setTextColor(WHITE);
  setCursor(4, 15);
  print(hours);
  print(showColon());
  print(minutes);
  display();
}

char OledDisplay::showColon(void) {
  unsigned long currentMillis = millis();
  
  if (currentMillis - previousMillis > interval) {
    previousMillis = currentMillis;

    if(showColonBool) {
      showColonBool = 0;
      return ':';
    } else {
      showColonBool = 1;
      return ' ';
    }
  }
}
