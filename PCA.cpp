#include <iostream.h>
class figura
{
      private: 
              int b, h;
      
      public:
      void triangulo();
      void retangulo();
      void quadrado();
      void teste();
      figura (int A, int B);
};



void figura :: triangulo ()
{
     cout << "Qual a base do triangulo? ";
     cin >> b;
     cout << "Qual a altura do triangulo? ";
     cin >> h;
     cout << endl << "A area do triangulo e' " << ((b*h)/2) << endl;
}



void figura :: retangulo ()
{
     cout << "Qual a base do retangulo? ";
     cin >> b;
     cout << "Qual a altura do retangulo? ";
     cin >> h;
     cout << endl << "A area do retangulo e' " << (b*h) << endl;
}



void figura :: quadrado ()
{
     cout << "Qual a base do quadrado? ";
     cin >> b;
     cout << endl << "A area do quadrado e' " << (b*b) << endl;
}



void figura :: teste ()
{
     cout << " " << b << " " << h << endl;
}



figura :: figura (int A, int B)
{
       b=A;
       h=B;
}



int main ()
{
     figura X(5,6);
     int j;
     do
     {
         cout << "Pressione 1 para calcular a area de um triangulo.\n2 para retangulo.\n3 para quadrado.\n4 para sair." << endl;
         cin >> j;
         switch(j)
         {
                  case 1: X.triangulo();
                  break;
                  
                  case 2: X.retangulo();
                  break;
                  
                  case 3: X.quadrado();
                  break;
                  
                  case 4: cout << "Tchau";
                  break;
                  
                  case 5: X.teste();
                  break;
         }   
     }while(j!=4);
}
