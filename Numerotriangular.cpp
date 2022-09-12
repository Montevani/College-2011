#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int N, cont;
    aqui:;
    printf("Digite N.\n");
    scanf("%d", &N);
    for (cont=1;cont*(cont+1)*(cont+2)<N;cont++);
    {
        printf("%d", cont);
    }
    if (cont*(cont+1)*(cont+2)==N)
    {
                printf("\nAoe! Mah esse numero e' triangular, hihi\n");
                printf("%d %d %d\n", cont, cont+1, cont+2);
    }
    else
    {
        printf("\nNAO E' TRIANGULAR!\a\n");
        printf("%d %d %d\n", cont, cont+1, cont+2);
    }
system("pause");
goto aqui;
}
