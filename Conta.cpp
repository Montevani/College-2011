#include <iostream.h>
class contas
      {
       private: int agencia, conta, senha;
                float saldo;
                
                public: void cadastro(int cliente);
                        void impressao(int cliente);
                        contas();
      };
      
contas :: contas()
       {
        agencia = 00000;
        conta= 000000;
        senha= 00000000;
        saldo= 0;
       }

void contas :: cadastro(int cliente)
{
  do
     {
         cout<<"\nDigite a agencia do cliente "<<cliente+1<<" no formato XXXXX: ";
         cin>>agencia;
     } while( agencia <0 || agencia > 99999);
     
  do
    {
     cout<<"\nDigite a conta do cliente "<<cliente+1<<" no formato XXXXXX: ";
     cin>>conta;
    } while( conta <0 || conta> 999999);
    
  do
    {
     cout<<"\nDigite a senha de oito digitos do cliente "<<cliente+1<<" : ";
     cin>>senha;
    } while( senha <0 || senha> 99999999);
    
cout<<"\nDigite o saldo, em reais, do cliente "<<cliente+1<<" : ";
cin>>saldo;

}
void contas :: impressao(int cliente)
{
 cout<<"\n\n----Cliente "<<cliente+1<<"----";
 cout<<"\nAgencia: "<<agencia;
 cout<<"\nConta: "<<conta;
 cout<<"\nSenha: "<<senha;
 cout<<"\nSaldo: "<<saldo<<" reais.";
}

int main()
{
 contas cliente[10];
 int i, num;
 do
   {
   cout<<"Insira o numero de clientes, no maximo 10: ";
   cin>> num;
   } while (num<1 || num>10);
 for(i=0;i<num;i++)
   {
     cliente[i].cadastro(i);
   }
 for(i=0;i<num;i++)
 {
    cliente[i].impressao(i);
 }
cout<<endl;
system("pause");
return(0);
}
