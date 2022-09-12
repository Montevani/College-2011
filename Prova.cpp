#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int A, B, C;
    for (A=1;A<=3;A++)
    {
        for(B=1;B<=4;B++)
        {
                         for(C=4;C>=B;C--)
                         {
                                         printf("@");
                         }
        printf("\n");
        }
    printf("\n\n");
    }
    system("pause");
}
                         
