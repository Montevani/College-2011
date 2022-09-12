#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#define max 10
int main ()
{
    int vetor[max], i, j, temp;
    for(i=0;i<max;i++)
    {
        printf("Digite o seu %d numero favorito\n", (i+1));
        scanf("%d", &vetor[i]);
    }
    for(i=0;i<max;i++)
    {
        for(j=i;j<max;j++)
        {
            if(vetor[i]>vetor[j])
            {
                 temp=vetor[j];
                 vetor[j]=vetor[i];
                 vetor[i]=temp;
            }
        }
    }
    printf("O vetor certo e':\n");
    for(i=0; i<max; i++)               
	{
		printf("%d ",vetor[i]);
	}
	system("pause");
}

                 
