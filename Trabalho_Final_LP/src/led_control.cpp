#include "led_control.h"
#include <Arduino.h>

static int pinoLED;

void initLED(int pino) {
  pinoLED = pino;
  pinMode(pinoLED, OUTPUT);
}

void controlarLED(int luz) {
  // luz (0-1023), invertido para brilho (255-0) 
  int brilho = map(luz, 0, 1023, 255, 0); 
  analogWrite(pinoLED, brilho);
}
