#include <iostream>
using namespace std;

int main()
{
  int a,b;
  cout<<"ingresar numero  :";
  cin>>a;

  cout<<"ingresar numero  :";
  cin>>b;

  if(a%2==0)
   {
      cout<<a<<"  es multiplo de dos ";
    cout<<endl;
   }
  else
   {
       cout<<a<<" no es multiplo de dos ";
    cout<<endl;
   }

  if(b%2==0)
    {
        cout<<b<<"  es multiplo de dos ";
    cout<<endl;
    }

  else
    {
        cout<<b<<" no es multiplo de dos ";
    cout<<endl;
    }


  if(a%b==0)
    {
       cout<<a<<"  es multiplo de b ";
    cout<<endl;
    }

  else
    {
        cout<<a<<" no es multiplo de b ";
    cout<<endl;
    }


  if((a*a)==b)
    {
        cout<<a<<"  es igual  b elevandolo al cuadrado ";
    cout<<endl;
    }

  else
    {
        cout<<a<<" no es igual  b elevandolo al cuadrado ";
    cout<<endl;

    }
    return 0;
}

