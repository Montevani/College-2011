#include <iostream.h>
#include <stdlib.h>

class Carro
{
 private:
        static int numCarros=0;
        char nome[0];
        int ano;
 public:
        Carro (char nome, int ano);
        void print() ;
        static int numeroVeiculosCriado ();
};

Carro::Carro (char nome, int ano)
{
 this->nome = nome;
 this->ano = ano;
 ++numCarros;
}

void Carro::print()
{
     cout << "Carro " << nome << " ano " << ano << endl;
}

static int Carro::numeroVeiculosCriado()
{
       return numCarros;
}

int main(int argc, char**argv) 
{ 
    Carro a("K",1983); 
    a.print(); 
    Carro b("C",2010); 
    b.print(); 
    cout << Carro::numeroVeiculosCriado(); 
    system("pause");
}
