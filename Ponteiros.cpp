#include <iostream.h>
#include <stdlib.h>
int main ()
{
    int i=5, *pi, *pi2;
    float f=7.3, *pf, *pf2;
    double d=6.66, *pd, *pd2;
    pi=&i;
    pf=&f;
    pd=&d;
    pi2=&i;
    pi2++;
    pf2=&f;
    pf2++;
    pd2=&d;
    pd2++;
    cout << *pi << " int = " << (pi2-pi) << endl;
    cout << *pf << " float = " << (pf2-pf) << endl;
    cout << *pd << " double = " << (pd2-pd) << endl;
    system("PAUSE");
}
