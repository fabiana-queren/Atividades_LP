#include <stdio.h>
#include <windows.h>
#include <conio.h>

int main() {
    POINT cursor_pos;
    while (1) {
        char ch;
        if (GetCursorPos(&cursor_pos)) {
            int x = cursor_pos.x;
            int y = cursor_pos.y;
            int quadrante = -1;


            if (x >= 0 && x < 800 && y >= 0 && y < 450) {
                printf("Quadrante A\n");
            } else if (x >= 800 && x < 1600 && y >= 0 && y < 450) {
                printf("Quadrante B\n");
            } else if (x >= 0 && x < 800 && y >= 450 && y < 900) {
                printf("Quadrante C\n");
            } else if (x >= 800 && x < 1600 && y >= 450 && y < 900) {
                printf("Quadrante D\n");
            } else {
                printf("Fora da área da tela\n");
            }
        }
    
            switch (quadrante) {
                case 1:
                    printf("Quadrante 1\n");
                    break;
                case 2:
                    printf("Quadrante 2\n");
                    break;
                case 3:
                    printf("Quadrante 3\n");
                    break;
                case 4:
                    printf("Quadrante 4\n");
                    break;
                case 0:
                    printf("Fora da área da tela\n");
                    break;
            }

            printf("Mouse Position: x=%d, y=%d\n", x, y);
        }

        Sleep(800); 
        if (kbhit()) {
            ch = getch();
            if (ch == 27) 
              break;

        }
    }
    return 0;
}
# Atividades_LP
