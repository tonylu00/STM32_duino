/*
 * STM32GENERIC arduino extension sample
 * bitband class BB_PIN functions high()/low() demo 
 * bitband for m3/4 位域操作仅 m3/4 支持, 直接对位域地址读写，这是最快的位操作；
 *          对 m0/m7，bitband class 调用 LL_PIN class 实现；
 * huaweiwx@sina.com 2017.12.26
 */
 
#include "util/bitband.h"

/*for F0/7 L0 BB_PIN use LL_PIN class*/
BB_PIN<LED_BUILTIN>led;

void setup() {
  // put your setup code here, to run once:
  led.mode(OUTPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  led.high();  /*ledpin set the fastest.*/
  delay(500);
  led.low();   /*ledpin reset the fastest.*/
  delay(500);  
}
