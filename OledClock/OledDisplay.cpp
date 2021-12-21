#include "OledDisplay.h"

OledDisplay::OledDisplay() {
  Adafruit_SSD1306(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);
}

void OledDisplay::showMyLove() {
  clearDisplay();
  setTextSize(1);
  setTextColor(WHITE);
  setCursor(0, 10);
  println("Kocham Cie");
  println("Karolinko!");
  display();
}
