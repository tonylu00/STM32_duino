// blink all LEDs 
// STM32F4 Discovery ( STM32F407VG )

/*
#define LED_BUILTIN                 PD12 //18
#define LED_GREEN                   LED_BUILTIN
#define LED_BLUE                    PD15 //58
#define LED_RED                     PD13 //19
#define LED_ORANGE                  PD13 //57
#define LED_RED_OTG_OVERCURRENT     PD5
*/

#define NUMLEDS 5
const uint8_t Led[] = {LED_GREEN, LED_ORANGE, LED_RED, LED_BLUE, LED_RED_OTG_OVERCURRENT};

void setup()
{
  for (int n = 0; n < NUMLEDS; n++)  pinMode(Led[n], OUTPUT);
  //pinMode(REDLEDOTGOVERCURRENT,PULL_UP); // needed to protect STMPS2141 FAULT output from shortcutting PC5 on power fault
}

void setLed(uint8_t n, uint8_t state)
{
  if(n==4)digitalWrite(Led[n], !state);
  else digitalWrite(Led[n], state);
}

void loop()
{
  for (int n = 0; n < NUMLEDS; n++)
  {
    setLed(n, HIGH);
    delay(100);
    setLed(n, LOW);
    delay(100);
  }
}