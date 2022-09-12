#include <iostream.h>
#include <stdlib.h>
int main ()
{
    int V[3], *p1, *p2;
    p1=V;
    p2=&V[0];
    *p1=1;
    *(p1+1)=2;
    *(p1+2)=3;
    cout << *p1 << endl << *(p1+1) <<endl << *(p1+2) <<endl<<endl<<*p2 <<endl;;
    system("pause");
}
