#include "BSP_BLACK_F407VE.h"
#include "STemWin.h"
#include "textdisplay.h"

#define LED  LED_BUILTIN
#define LED1 LED1_BUILTIN


void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LED1, OUTPUT);
  BSP_LCD_Init();
  GUI_Init();
}

void loop() {
  digitalToggle(LED);    // turn the LED off by making the voltage LOW
  digitalToggle(LED1);    // turn the LED off by making the voltage LOW
  emwin_texttest();
  delay(1000);              // wait for a second
}
