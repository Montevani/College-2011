#include <stdio.h>
void main ()
 {
	float A, B, S, P, D, Q;
	printf ("Digite tres numeros != de zero.\n");
	scanf ("%f %f", &A, &B);
	printf ("Voce digitou %f e %f, o resultado das operaçoes e:\n", A, B);
	S=A+B;
	P=A*B;
	D=A-B;
	Q=A/B;
	printf ("Soma: %f, Multiplicaçao: %f, Divisao: %f, Diferença: %f\n", S, P, Q, D);
	printf ("Agora, considerando o primeiro numero digitado como o raio de uma circunferencia:\n");
	S=A+A;
	P=2*3.14159*A;
	D=3.14159*A*A;
	printf ("Uma circunferencia de raio %f tem diametro de %f, area de %f e perimetro de %f", A, S, D, P);

 }
