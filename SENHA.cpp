     char s1[11], s2[11], S1[11], S2[11];
     strcpy(S1, "Login");
     strcpy(S2, "Senha");
     aqui:;
     printf("Qual e' o seu login?\n");
     gets(s1);
     printf("Qual e' a sua senha?\n");
     gets(s2);
     if(strcmp(s1,S1)!=0 || strcmp(s2,S2)!=0)
                         {
                         printf("Erro.\n");
                         system("pause");
                         system("cls");
                         goto aqui;
                         }
     else
                         {
                         printf("Correto!\a\n");
                         system("pause");
                         }
