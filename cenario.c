#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void gotoxy (int x, int y)
{

    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
int main (){

//gotoxy(0,0);
//printf("%c", 219);
///*
int i;
for (i = 0; i <= 10; i++) {
    gotoxy(0,i);
    printf("%c", 219);
}
for (i = 0; i <= 20; i++) {
    gotoxy(i,0);
    printf("%c", 219);
}
for (i = 0; i <= 10; i++) {
    gotoxy(20,i);
    printf("%c", 219);
}
for (i = 0; i <= 20; i++) {
    gotoxy(i,10);
    printf("%c", 219);
}
//*/
printf("\n\n");
system ("pause"); //pausa o sistema



return 0;
}
