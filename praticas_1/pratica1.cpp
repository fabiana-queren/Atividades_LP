/*

Program: [C++]

Author: [Fabiana Queren]

Date: [15/03/2025]

Description: [Calculo da area e contorno de um circulo e um retangulo]

License: [CC BY-NC-SA ]

*/

#include <iostream>
#define PI 3.14  

using namespace std;

void calcular_circulo(float raio, float &comprimento, float &area) {
    comprimento = 2 * PI * raio;
    area = PI * raio * raio;
}

void calcular_retangulo(float lado1, float lado2, float &perimetro, float &area) {
    perimetro = 2 * (lado1 + lado2);
    area = lado1 * lado2;
}

int main() {
    int opcao;
    float raio, comprimento, area, lado1, lado2, perimetro;

    cout << "Escolha uma opcao:" << endl;
    cout << "1 - Calcular a area e o comprimento de um circulo" << endl;
    cout << "2 - Calcular a area e o perimetro de um retangulo" << endl;
    cout << "Digite o numero da opcao desejada: ";
    cin >> opcao;

    if (opcao == 1) {
        cout << "\nCalculando a area e o comprimento de um circulo" << endl;
        cout << "Informe o valor do raio: ";
        cin >> raio;

        calcular_circulo(raio, comprimento, area);

        cout << "Comprimento: " << fixed << comprimento << endl;
        cout << "Area: " << fixed << area << endl;
    } 
    else if (opcao == 2) {
        cout << "\nCalculando a area e o perimetro de um retangulo" << endl;
        cout << "Digite os lados do retangulo separados por vírgula e espaço (Lado1, Lado2): ";
        
        char separador;
        cin >> lado1 >> separador >> lado2;

        calcular_retangulo(lado1, lado2, perimetro, area);

        cout << "O perimetro do retangulo e: " << fixed << perimetro << endl;
        cout << "A area do retangulo e: " << fixed << area << endl;
    } 
    else {
        cout << "Opcao invalida. Escolha 1 ou 2." << endl;
    }

    return 0;
}