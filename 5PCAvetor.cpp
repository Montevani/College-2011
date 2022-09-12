#include <iostream.h>
int main ()
{
    int meuVetor[4][4], ind1, ind2;
    for (ind1=0;ind1<4;ind1++)
    {
        for (ind2=0;ind2<4;ind2++)
        {
            meuVetor[ind1][ind2] = ind2;
        }
    }
    for (ind1=0;ind1<4;ind1++)
    {
        for (ind2=0;ind2<4;ind2++)
        {
            cout << " " << meuVetor[ind1][ind2];
        }
        cout << " \n";
    }
system("PAUSE");
}
