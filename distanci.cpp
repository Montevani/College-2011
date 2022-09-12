#include <stdio.h>
#include <math.h>
void main ()
 {
	float X1, Y1, X2, Y2, D, Ano;
	printf ("Escreva o X e o Y do primeiro ponto:");
	scanf("%f %f", &X1, &Y1);
	printf ("\nEscreva o X e o Y do segundo ponto:");
	scanf("%f %f", &X2, &Y2);
	D=sqrt(pow((X2-X1),2)+pow((Y2-Y1),2));
	printf ("\nA distancia entre (%f,%f) e (%f,%f) e': %f", X1, Y1, X2, Y2, D);
	printf ("\nTambem digite o ano em que voce nasceu.");
	scanf("%f", &Ano);
	Ano=2011-Ano;
	printf ("Sua idade e' %f", Ano);
	float A, B, S, P, Q;
	printf ("\nDigite dois numeros != de zero:");
	scanf ("%f %f", &A, &B);
	printf ("\nVoce digitou %f e %f, o resultado das operaçoes e:\n", A, B);
	S=A+B;
	P=A*B;
	D=A-B;
	Q=A/B;
	printf ("Soma: %f\nMultiplicaçao: %f\nDivisao: %f\nDiferença: %f\n", S, P, Q, D);
	printf ("Agora, digite o raio de uma circunferencia:\n");
   scanf ("%f", &A);
	S=A+A;
	P=2*3.14159*A;
	D=3.14159*A*A;
	printf ("Uma circunferencia de raio %f tem diametro de %f, area de %f e perimetro de %f", A, S, D, P);

 }
