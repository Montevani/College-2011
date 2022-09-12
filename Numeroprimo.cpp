#include <stdio.h>
#include <stdlib.h>
int main ()
{
   int N, R, V, cont, calc;
   char resposta[4];
   aqui2:;
   R=0;
   V=0;
   printf("Digite um numero inteiro.\n");
   aqui:;
   scanf("%d", &N);
   if (N==0)
   {
            printf("Voce digitou 0, escolha outro numero.\n");
            goto aqui;
   }
printf("\n%d e' divisivel por:\n",N);
   if (N<0)
   {
           N=N-N-N;
   }
   V=0-N;
   for (cont=V; cont<=N; cont++)
       {
       if (cont!=0)
          {
          calc=N%cont;
          if (calc==0)
             {
             R=R+1;
             printf("%d ", cont);
             }
          }
       }
   printf("\n\nNo total, ele e' divisivel por %d numeros, logo ",R);
   if (R==4)
      {
      printf("\aele e' um numero primo.\n\n");
      }
   else
       {
       printf("ele nao e' um numero primo.\n\n");
       }
system("pause");
system("cls");
goto aqui2;
}
