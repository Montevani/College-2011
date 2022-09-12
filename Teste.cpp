#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    float A, B, C, D;
    aqui1:;
    printf("\aEscreva A, B e C.\n");
    scanf("%f %f %f",&A, &B, &C);
    printf("Voce escreveu os numeros %f, %f e %f.\n", A, B, C);
    printf("Caso queira mudar os numeros pressione 0.\n");
    printf("Caso contrario coloque qualquer outro numero.\n");
    scanf("%f", &D);
    if( D == 0 )
    {
         system("cls");
         goto aqui1;
    }
    else
    {
        system("cls");
        goto aqui2;
    }
    aqui2:;
    printf("Funcionou.\n");
    system("pause");
}
