#include <iostream>
using namespace std;
int factorial(int);
int main()
{
      int n;
      cout<<"Ingresar numero  :";
      cin>>n;
      cout<<"factorial del numero es :"<<factorial(n);
      return 0;

}
int factorial(int n)
{
    int fac=1;
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
