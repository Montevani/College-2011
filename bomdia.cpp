#include <stdio.h>
void main()
{
 printf("hello world \n");
 float altura, peso;
 char nome[50];
 printf("Digite o seu nome \n");
 scanf("%s", &nome);
 printf("Digite a sua altura e peso \n");
 scanf("%f %f", &altura, &peso);
 printf("O seu nome e %s", nome);
 printf(" voce pesa %f quilos e tem %f de altura", peso, altura);
}
