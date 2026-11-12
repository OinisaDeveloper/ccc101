#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void main() {
    system("cls");
      for (int i = 0; i < 20; i++) {
        gotoxy(i, i);
        printf("Oin Tecson");
        Sleep(1);
      }
       