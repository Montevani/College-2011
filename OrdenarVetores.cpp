#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 5               //diretiva que define max com o valor fixo de 5 nesse caso

int main()
{
	int vet1[max],temp,i,j;

	for(i=0; i<max; i++)         //leitura do vetor a ser escrito
	{
		printf("Entre com o valor do %d� elemento do vetor 1: ",(i+1));
		scanf("%d",&vet1[i]);
	}

	for(i=0; i<max; i++)                  //faz a coloca�ao em ordem crescente
	{
		for(j=i; j<max; j++)
		{
			if(vet1[i] > vet1[j])           //condi�ao para ordenar em ordem crescente
			{
				temp = vet1[j];              //eh aqui onde a troca eh feita!
				vet1[j] = vet1[i];           //NAO continue se vc nao entendeu essa parte
				vet1[i] = temp;
			}
		}
	}
	printf("\nO vetor crescente:\n");
	for(i=0; i<max; i++)                 //coloca na tela o vetor em ordem crescente
	{
		printf("%d ",vet1[i]);
	}
	system("pause");
}
