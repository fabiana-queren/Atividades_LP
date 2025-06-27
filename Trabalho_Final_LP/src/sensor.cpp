#include "sensor.h"
#include <Arduino.h>

void initSensor() {
  pinMode(A0, INPUT);
}

int lerSensor() {
  return analogRead(A0);
}
int lerLuz() {
  int valor = analogRead(A0);
  Serial.print("Registrando luz: ");
  Serial.println(valor);
  return valor;
}
