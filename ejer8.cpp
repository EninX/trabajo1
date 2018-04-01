#include <iostream>
using namespace std;
main()
{
    int n;
    cout<<"ingrese un numero ";
    cin>>n;
    int temp=n;
    int e=0;
    int nu=0;
    int i=0;
    for(i=0;temp>0;i++)
    {
        e=temp%10;
        nu=(nu*10)+e;
        temp=temp/10;
    }


    if (n==nu)
    {
    cout<<"El Numero es Palindromo";
    }
    else
    {
    cout<<"El Numero no es Palindromo";
    }
    return 0;
}

