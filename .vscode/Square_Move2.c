#include <stdio.h>
#include <windows.h>

void gotoxy (int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void main (){
    char name = ("Oin Tecson");
    int width = 80;
    int height = 120;
    system ("cls");
    for (int i = 0; width < 80; i = width; i++){
    printf ("%c", name);
    Sleep (1);
    system("cls");
    }
    for (int i = 0; height < 120; i = height; i++){
    printf ("%c", name);
    Sleep (1);
    system("cls");
    }
}