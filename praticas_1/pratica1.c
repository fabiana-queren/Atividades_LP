/*

Program: [C]

Author: [Fabiana Queren]

Date: [15/03/2025]

Description: [Calculo da area e contorno de um circulo e um retangulo]

License: [CC BY-NC-SA ]

*/

#include <stdio.h>
#define PI 3.14

void calcular_circulo(float raio, float *comprimento, float *area) {
    *comprimento = 2 * PI * raio;
    *area = PI * raio * raio;
}

void calcular_retangulo(float lado1, float lado2, float *perimetro, float *area) {
    *perimetro = 2 * (lado1 + lado2);
    *area = lado1 * lado2;
}

int main() {
    int opcao;
    float raio, comprimento, area, lado1, lado2, perimetro;

    printf("Escolha uma opcao:\n");
    printf("1 - Calcular a area e o comprimento de um circulo\n");
    printf("2 - Calcular a area e o perimetro de um retangulo\n");
    printf("Digite o numero da opcao desejada: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("\nCalculando a area e o comprimento de um circulo\n");
        printf("Informe o valor do raio: ");
        scanf("%f", &raio);

        calcular_circulo(raio, &comprimento, &area);

        printf("Comprimento: %.2f\n", comprimento);
        printf("Area: %.2f\n", area);
    } 
    else if (opcao == 2) {
        printf("\nCalculando a area e o perimetro de um retangulo\n");
        printf("Digite os lados do retangulo (Lado1, Lado2): ");
        scanf("%f, %f", &lado1, &lado2);

        calcular_retangulo(lado1, lado2, &perimetro, &area);

        printf("O perimetro do retangulo e: %.2f\n", perimetro);
        printf("A area do retangulo e: %.2f\n", area);
    } 
    else {
        printf("Opcao invalida. Escolha 1 ou 2.\n");
    }

    return 0;
}