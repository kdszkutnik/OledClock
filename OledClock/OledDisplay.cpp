#include "OledDisplay.h"

void OledDisplay::showTime(int hours, int minutes) {
  clearDisplay();
  setTextSize(4);
  setTextColor(WHITE);
  setCursor(4, 15);
  if(hours<10) {
    print(' ');
  }
  print(hours);
  print(showColon());
  if(minutes<10) {
    print(0);
  }
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
