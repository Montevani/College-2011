#include <iostream.h>
class venda
{
      private: 
               int npecas, preco;
      
      public:
             void ler (int n, int N);
             void imprimir ();
}

void venda :: ler (int n, int N)
{
     npecas=n;
     preco=N;
}

void venda :: imprimir ()
{
     cout << endl << "O valor total sera de " << (npecas*preco) << endl;
}

int main ()
{
    venda X[3];
    int i, k, j, K=0, J=0;
    for (i=0; i>=3; i++)
    {
        cout << endl << "Quantas pecas voce vai comprar? ";
        cin >> k;
        cout << "Qual o valor da peca? ";
        cin >> j;
        X[i].ler(int k, int j);
        X[i].imprimir();
        K=K+k;
        J=J+j;
        cout << endl << endl;
    }
cout << "O preco total e' " << J << " e o total de pecas e'" << K;
cin >> i;
}
