#include <stdio.h>
void main ()
{
	float Pi, N, cont, lol;
	printf("Insira o numero N\n");
	scanf("%f", &N);
	Pi=4;
	lol=1;
	for(cont=3; cont<=N; cont=cont+2)
		{
		if (lol==1)
			{
         printf("%f wooo \n", cont);
			Pi=Pi-(4/cont);
			lol=0;
			}
		else
			{
			Pi=Pi+(4/cont);
			lol=1;
			}
		printf("Pi=%.10f\n", Pi);
		}
	printf("Pi = %f\n", Pi);
	printf("O valor de N foi %.10f", N);
}