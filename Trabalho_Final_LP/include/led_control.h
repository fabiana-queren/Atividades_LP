/*

Program: [Controle Automático de Iluminação com Arduino e Sensor de Luz]

Author: [Fabiana Queren]

Date: [26/06/2025]

Description: [Este programa Arduino lê o nível de luz a partir de um sensor conectado ao pino A0 e controla um LED com base nesse nível de luz.
O brilho do LED é ajustado de forma inversamente proporcional ao nível de luz detectado, permitindo o controle automático da iluminação de acordo com as condições de luz ambiente.]

License: [CC-BY]

*/

#ifndef LED_CONTROL_H
#define LED_CONTROL_H

void initLED(int pino);
void controlarLED(int luz);

#endif
