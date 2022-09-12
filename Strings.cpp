#include <iostream.h>
int main ()
{
    char nome[25], nombre[26];
    gets(nome);
    gets(nombre);
    strcpy(nombre,nome);
    cout << nome <<endl <<nombre;
    if (strcmp(nome,"Jesus")==0)
    {
                                cout << "Elere" << nome << nombre;
    }
    system("pause");
}
