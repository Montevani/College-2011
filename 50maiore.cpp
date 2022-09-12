#include<stdio.h>
#include<conio.h>
void main ()
{
	float ler, i, maior, menor;
	printf("Digite o 1º numero ");
	scanf("%f", &maior);
	menor=maior;
	for (i=2; i<=10; i++)
		{
		printf("\nDigite o %.0fº numero ", i);
		scanf("%f", &ler);
		if (ler>maior)
			{
			maior=ler;
			}
		if (ler<menor)
			{
			menor=ler;
			}
		}
	printf("\nO maior numero foi %.2f!", maior);
	printf("\nO menor numero foi %.2f!", menor);
}
