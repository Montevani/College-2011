#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int D1, D2, D3, E, Erro, S, s, k, K, t1, t2;
    inserirk:;
    printf("Antes de tudo, insira um numero maior que 0.\n");
    scanf("%i", &K);
    if(K<1)
           {
           goto inserirk;
           }
    K=K+28;
    system("cls");
    Erro=0;
    printf("Isto e' um jogo de dados.\nVoce ira competir contra o computador.\nAquele que tirar o maior resultado ira vencer.\n");
    aqui:;
    printf("1-Girar um dado.\n2-Girar dois dados.\n3-Girar tres dados.\n");
    erro:;
    scanf("%i", &E);
    if (E==1)
    {
             system("cls");
             goto dado1;
    }
    if (E==2)
    {
             system("cls");
             goto dado2;
    }
    if (E==3)
    {
             system("cls");
             goto dado3;
    }
    else
    {
        Erro=Erro+1;
        if (Erro==5)
        {
            system("cls");
            printf("\aDerp!\n");
            printf("\a\7Derp!\n\a\7Derp!\n\a\7Derp!\n\a\7Derp!\n\a\7Derp!\n\a\7Derp!\n\a\7Derp!\n");
            system("pause");
            goto final;
        }
        else
        {
            printf("\aVoce colocou %i, porfavor insira um numero de 1 ate 3.\n", E);
            goto erro;
        }
    }
    dado1:;
    printf("Pan ran pan pan\n");
    printf("Voce tirou...\n");
    system("pause");
    k=K;
    while (k>0)
    {
          D1=rand() % 100;
          k=k-1;
    }
    S=D1;
    printf("\a%i!\nE o computador tirou...\n", S);
    system("pause");
    k=K;
    while (k>0)
    {
          D1=rand() % 100;
          k=k-2;
    }
    s=D1;
    K=K+12;
    printf("\a%i!\n", s);
    system("pause");
    if (s==S)
    {
       printf("Voce tirou exatamente o mesmo resultado do computador.");
       printf("\nVamos jogar novamente!");
       system("pause");
       system("cls");
       goto dado1;
    }
    if (S>s)
    {    
              ganhar:;
              printf("Parabens, voce ganhou o jogo!\nO que deseja fazer?\n");
              printf("1-Jogar novamente.\n2-Sair.\n");
              scanf("%i", &E);
              if (E==1)
              {
                      system ("cls");
                      goto aqui;
              }
              else
              {
                  if(E==2)
                  {
                         goto final;
                  }
                  else
                  {
                      printf("Digite um numero entre 1 e 2.");
                      goto ganhar;
                  }
              }
    }
    else
    {
        perder:;
        printf("Voce perdeu.\nO que deseja fazer?\n");
        printf("1-Jogar novamente.\n2-Sair.\n3-Recorrer na justica.\n");
        scanf("%i", &E);
        if (E==1)
        {
           system ("cls");
           goto aqui;
        }
        else
        {
            if(E==2)
            {
                   goto final;
            }
            else
            {
                if(E==3)
                {
                       goto advogado;
                }
                else
                {
                    printf("Digite um numero entre 1 e 3.");
                    goto perder;
                }
            }
        }
    }   
    dado2:;
    printf("Pan ran pan pan\n");
    printf("Voce tirou...\n");
    system("pause");
    k=K;
    while (k>0)
    {
          D1=rand() % 100;
          k=k-1;
    }
    printf("\a%i!\n", D1);
    K=K+23;
    k=K;
    while (k>0)
    {
          D2=rand() % 100;
          k=k-3;
    }
    K=K+50;
    S=D1+D2;
    printf("\a%i!\n", D2);
    printf("Dando um total de %i.\n", S);
    printf("E o computador tirou...\n");
    system("pause");
    k=K;
    while (k>0)
    {
          D1=rand() % 100;
          k=k-2;
    }
    printf("\a%i!\n", D1);
    K=K+80;
    k=K;
    while (k>0)
    {
          D2=rand() % 100;
          k=k-2;
    }
    printf("\a%i!\n", D2);
    K=K-5;
    s=D1+D2;
    printf("Dando um total de %i.\n", s);
    system("pause");
    if (s==S)
    {
       printf("Voce tirou exatamente o mesmo resultado do computador.");
       printf("\nVamos jogar novamente!");
       system("pause");
       system("cls");
       goto dado2;
    }
    if (S>s)
    {
            goto ganhar;
    }
    else
    {
            goto perder;
    }
    dado3:;
        printf("Pan ran pan pan\n");
    printf("Voce tirou...\n");
    system("pause");
    k=K;
    while (k>0)
    {
          D1=rand() % 100;
          k=k-1;
    }
    printf("\a%i!\n", D1);
    K=K+29;
    k=K;
    while (k>0)
    {
          D2=rand() % 100;
          k=k-2;
    }
    K=K+41;
    k=K;
    while (k>0)
    {
          D3=rand() % 100;
          k=k-1;
    }
    printf("\a%i!\n", D3);
    K=K+59;
    S=D1+D2+D3;
    printf("\a%i!\n", D2);
    printf("Dando um total de %i.\n", S);
    printf("E o computador tirou...\n");
    system("pause");
    k=K;
    while (k>0)
    {
          D1=rand() % 100;
          k=k-2;
    }
    printf("\a%i!\n", D1);
    K=K+82;
    k=K;
    while (k>0)
    {
          D2=rand() % 100;
          k=k-2;
    }
    printf("\a%i!\n", D2);
    K=K-6;
    k=K;
    while (k>0)
    {
          D3=rand() % 100;
          k=k-1;
    }
    printf("\a%i!\n", D3);
    K=K+59;
    s=D1+D2+D3;
    printf("Dando um total de %i.\n", s);
    system("pause");
    if (s==S)
    {
       printf("Voce tirou exatamente o mesmo resultado do computador.");
       printf("\nVamos jogar novamente!");
       system("pause");
       system("cls");
       goto dado3;
    }
    if (S>s)
    {
            goto ganhar;
    }
    else
    {
            goto perder;
    }
    advogado:;
    final:;
}
