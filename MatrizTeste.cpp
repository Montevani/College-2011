#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#define max 10
int main ()
{
    int v[3][3],i, j;
    for(j=0;j<3;j++)
    {
    for(i=0;i<3;i++)
    {
        printf("HUR: ");
        scanf("%d", &v[i][j]);
    }
    }
    printf("\n");
    for(j=0;j<3;j++)
    {
    for(i=0;i<3;i++)
    {
        printf(" %d ", v[i][j]);
    }
    printf("\n");
    }
    
	system("pause");
}

                 
