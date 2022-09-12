#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main ()
{
    int dado1;
    printf("Voce ira competir com o computador girando um dado!\n");
    system("pause");
    hur:;
    system("cls");
    fflush(stdin);
    dado1=rand()%100;
    printf("O resultado e %d\n", dado1);
    fflush(stdin);
    system("pause");
    goto hur;
}
    
