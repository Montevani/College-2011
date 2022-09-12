#include <iostream.h>
void mult( float M[][10], float k, float w, int m, int n );
void mult( float M[][10], float k, float w, int m, int n )
{
     int i,j;
     for(i=0;i<m;i++)
     {
                     for(j=0;j<n;j++)
                     {
                      if(M[i][j]<0)
                       {
                                     M[i][j]=M[i][j]*w;
                       }
                        else
                        {
                                  M[i][j]=M[i][j]*k;
                        }
                      }
     }
}

int main()
{

float matriz[10][10], k, w;
int i,j,m,n;

do
{
cout<<"Digite a proporçao mXn, n<10, da sua matriz: ";
cin>>m>>n;
}while(m<1 || n<1||n>10);

cout<<"Digite os valores de K(multiplicar em termos positivos) e W(multiplicar em termos negativos): ";
cin>>k>>w;

cout<<"Digite sua matriz: ";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>matriz[i][j];
}
}
cout<<"\nMatriz original: \n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<" "<<matriz[i][j];
}
cout<<"\n";
}
mult(matriz, k, w,m,n);
cout<<"\nNova Matriz: \n";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cout<<" "<<matriz[i][j];
}
cout<<"\n";
}
system("pause");
}
