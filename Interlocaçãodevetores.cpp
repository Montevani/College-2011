#include<stdio.h>    //include para entrada/saida
#include<conio.h>    //include para comando de limpar a tela 'clrscr();'
#include<stdlib.h>
#define max 4        //variavel de controle pra ficar mais facil de mexer depois

int main()
{
	int i,j=0,k=0,vet[max],vet2[max],vet3[max+max];

	for(i=0; i<max; i++)                                         //for pra ler os 2 vetores
	{
		printf("Entre com o %d° elemento do vetor 1: ",(i+1));
		scanf("%d",&vet[i]);
		printf("Entre com o %d° elemento do vetor 2: ",(i+1));
		scanf("%d",&vet2[i]);
	}
	for(i=0; i<(2*max); i++)     //for que faz as contas
	{
		if(i%2 == 0)           //condiçao pra colocar os elemento na posiçoes pares do vetor
		{
			vet3[i] = vet[j];   //colocaçao do valor do vetor 1 em 3
			j++;               //variavel que controla o vetor 1 pra que ele nao pule os elementos de 2 em 2 assim como no vet3
		}
		if(i%2 != 0)
		{                      //mesmo raciocinio que a parte de cima aqui, porem com as posiçoes impares
			vet3[i] = vet2[k];
			k++;
		}
	}
	printf("\nO vetor interlocado:\n");        //os 3 fors so pra vc verificar os vetores
	for(i=0; i<(2*max); i++)
	{
		printf("%d ",vet3[i]);
	}
	printf("\n\nO vetor 1 e':\n");
	for(i=0; i<max; i++)
	{
		printf("%d ",vet[i]);
	}
	printf("\n\nO vetor 2 e':\n");
	for(i=0; i<max; i++)
	{
		printf("%d ",vet2[i]);
	}
system("pause");
}
