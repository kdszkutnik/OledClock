#include "OledDisplay.h"

void OledDisplay::showTime(int hours, int minutes) {
  clearDisplay();
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
    } else {
      showColonBool = 1;
    }
  }
  
  if(showColonBool) {
    return ':';
  } else {
    return ' ';
  }
}
