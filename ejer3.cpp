#include <iostream>
using namespace std;

int main()
{
  int a,b,c,p;
  cout<<"ingresar numero  :";
  cin>>a;
  cout<<"ingresar numero  :";
  cin>>b;
  cout<<"ingresar numero  :";
  cin>>c;
  p=(a+b+c)/3;

  cout<<"el promedio ea :"<<p;
  cout<<endl;

  if(a>b && a>c)
    cout<<"el mayor es:"<<a;
    cout<<endl;

  if(b>a &&b>c)
    cout<<"el mayor es:"<<b;
    cout<<endl;

  if(c>a && c>b)
    cout<<"el mayor es:"<<c;
    cout<<endl;

  if(a<b && a<c)
    cout<<"el menor es:"<<a;
    cout<<endl;

  if(b<a && b<c)
    cout<<"el menor es:"<<b;
    cout<<endl;

  if(c<a && c<b)
    cout<<"el menor es:"<<c;
    cout<<endl;
  return 0;
}

