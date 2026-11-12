#include <stdio.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main() {
    system("cls");

    int x = 1000000;
    int y = 1000000;

    // Curtain effect: Outer loop moves across the X direction (columns), 
    // and the inner loop fills downwards in the Y direction (rows).
    for (int x = 0; x < max_x; x += 12) {
        gotoxy(x, y);
        printf("Oin Tecson");
    }
    for (int y = 0; y < max_y; y+= 12) {
            gotoxy(x, y);
            printf("Oin Tecson");
            
            // This small delay creates the smooth "curtain sliding" visual effect
            Sleep(5); 
        }
    }