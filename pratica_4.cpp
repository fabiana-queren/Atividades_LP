#include <iostream>
#include <windows.h>
#include <conio.h>

int main() {
    POINT cursor_pos;
    while (true) {
        char ch;
        int x, y;
        int quadrante = -1;

        // Obtendo a posição do cursor
        if (GetCursorPos(&cursor_pos)) {
            x = cursor_pos.x;
            y = cursor_pos.y;

            // Verificando em qual quadrante o cursor está
            if (x >= 0 && x < 800 && y >= 0 && y < 450) {
                std::cout << "Quadrante A\n";
            } else if (x >= 800 && x < 1600 && y >= 0 && y < 450) {
                std::cout << "Quadrante B\n";
            } else if (x >= 0 && x < 800 && y >= 450 && y < 900) {
                std::cout << "Quadrante C\n";
            } else if (x >= 800 && x < 1600 && y >= 450 && y < 900) {
                std::cout << "Quadrante D\n";
            } else {
                std::cout << "Fora da área da tela\n";
            }

            // Imprimindo o quadrante correspondente
            switch (quadrante) {
                case 1:
                    std::cout << "Quadrante A\n";
                    break;
                case 2:
                    std::cout << "Quadrante B\n";
                    break;
                case 3:
                    std::cout << "Quadrante C\n";
                    break;
                case 4:
                    std::cout << "Quadrante D\n";
                    break;
                case 0:
                    std::cout << "Fora da área da tela\n";
                    break;
            }

            // Exibindo a posição do mouse
            std::cout << "Posição do Mouse: x=" << x << ", y=" << y << std::endl;
        }

        Sleep(800); // Atraso de 800 milissegundos para evitar um loop muito rápido

        // Verificando se o usuário pressionou a tecla ESC para sair
        if (_kbhit()) {
            ch = _getch();
            if (ch == 27) // Tecla ESC
                break;
        }
    }
    return 0;
}