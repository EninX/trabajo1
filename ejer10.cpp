#include <iostream>
using namespace std;
int main()
{
      int n;
      cout<<"Ingresar n para imprimir serie de fibonacci  :";
      cin>>n;
      int i=0;
      int j=1;
      int f[1000];
      f[0]=i;
      f[1]=j;
      for(int i=2;i<n;i++)
      {
          f[i]=f[i-1]+f[i-2];
      }
      for(int i=0;i<n;i++)
      {
          cout<<f[i]<<'\t';
      }
      return 0;
}
