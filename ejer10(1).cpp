#include <iostream>
using namespace std;
int main()
{
      int n;
      int a=0;
      int b=1;
      int c=0;
      do{
        cout<<"Ingresar n para imprimir serie de fibonacci  :";
        cin>>n;
      }

      while(n<1);
      {
        cout<<'\n';
      for(int i=1;i<=n;i++)
      {
        c=a+b;
		    cout<<a<<'\t';
		    a=b;
		    b=c;

      }
      }
      return 0;
}
