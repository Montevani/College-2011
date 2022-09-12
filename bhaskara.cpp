#include <stdio.h>
#include <math.h>
void main()
{
 float A, B, C, D, x1, x2;
 printf("Por favor insira os A, B e C da equacao. \n");
 printf("Este programa nao trabalha com numeros imaginarios \n");
 scanf("%f %f %f", &A, &B, &C);
 D=pow(B,2)-4*A*C;
 x2=(-B-sqrt(D))/(2*A);
 x1=(-B+sqrt(D))/(2*A);
 printf("O x1 da equacao e %f \n", x1);
 printf("O x2 da equacao e %f \n", x2);
 printf("O delta da equacao e %f \n", D);
 printf("os outros numeros sao A=%f B=%f e C=%f \n", A, B, C);
 printf("Obrigado.");
}
