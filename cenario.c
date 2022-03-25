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

gotoxy(10,10);
printf("banana pacas");
system ("pause"); //pausar  na tela - somente



return 0;
}
