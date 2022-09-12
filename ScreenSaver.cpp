#include <iostream.h>
#include <iomanip.h>
#include <stdlib.h>

int main()
{
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
int i,j;
for(i=1;i>=0;i++)
{
for(j=1;j<=i;j++)
{
cout <<setw(i)<<"*";
}
cout <<"\n";
}
system("PAUSE");
}
