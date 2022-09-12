#include <stdio.h>

int main()
{
	int e;
	int i;
	int X;
	int Y;
	scanf("%d", &X);
	Y=X;
	for (i=1; i<=Y; i++)
	{
		X--;
		for (e=1;e<=X;e++)
		{
			printf(" ");
		}
		for (e=1;e<=2*i;e++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}