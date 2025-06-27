
/*

Program: [Controle Automático de Iluminação com Arduino e Sensor de Luz]

Author: [Fabiana Queren]

Date: [26/06/2025]

Description: [Este programa Arduino lê o nível de luz a partir de um sensor conectado ao pino A0 e controla um LED com base nesse nível de luz.
O brilho do LED é ajustado de forma inversamente proporcional ao nível de luz detectado, permitindo o controle automático da iluminação de acordo com as condições de luz ambiente.]

License: [CC-BY]

*/
#include <Arduino.h>
#include "sensor.h"
#include "led_control.h"

void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  initSensor();  
  initLED(9);
}

void loop() {
  int valor = lerLuz();  // Lê o sensor e imprime, usando o pino analógico A0

  Serial.print("Luz: ");
  Serial.println(valor);

  controlarLED(valor);  // Controla o LED com base na luz

  delay(1000); 
}
