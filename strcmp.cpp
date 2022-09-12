#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
int main()
{
 char SIM[10];
 printf("Digite 'sim':\n");
 gets(SIM);
 if(strcmp(SIM,"sim")==0)
    {
        printf("Igual\n");
    }
 else
 {
     printf("Diferente\n");
 }
system("pause");
} 
