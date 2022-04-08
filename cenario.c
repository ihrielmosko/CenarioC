#include <windows.h>
#include <stdio.h>


void gotoxy (int x, int y)
{

    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
int main (){

    //int i, i2;
    ///*
    int i, i2, x, y;
    
    system("cls");

    printf("digite o valor de x\n");
    scanf("%d", &x);
    printf("digite o valor de y\n");
    scanf("%d", &y);
    //*/
    /*
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
    for (i = 1; i <= 19; i++) {
        for (i2 = 1; i2 <= 9; i2++) {
            gotoxy(i,i2);
            printf("%c", 176);
        }
    }
    */
   ///*

   system("cls");
   
    for (i = 0; i <= x; i++) {
        gotoxy(i,0);
        printf("%c", 219);
    }
    for (i = 0; i <= y; i++) {
        gotoxy(0,i);
        printf("%c", 219);
    }
    for (i= 0; i <= x; i++) {
        gotoxy(i,y);
        printf("%c", 219);
    }
    for (i= 0; i <= y; i++) {
        gotoxy(x,i);
        printf("%c", 219);
    }
    //*/
    /*
    for (i = 1; i = x; i++) {
        for (i2 = 1; i2 = y; i2++) {
            gotoxy(i,i2);
            printf("%c", 176);
        }
    }
    */
    printf("\n\n");
    system ("pause");
    return 0;
}
//167 caracteres