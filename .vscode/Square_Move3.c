#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    char name[] = "Oin Tecson";
    int len = 10;
    int color = 1;

    system("cls");                          // clear the screen once

    while (1) {                             // infinite loop
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);

        for (int y = 0; y < 100; y++) {
            for (int x = 0; x + len < 100; x += len + 1) {
                gotoxy(x, y);
                printf("%s", name);
                Sleep(20);
            }
        }

        color++;                            // new color for the next pass
        if (color > 15) color = 1;
    }

    return 0;
}