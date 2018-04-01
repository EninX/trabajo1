#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c,d,e;

    cout<<"ingresar numero ( 5 digitos) :";
    cin>>n;

    if(n>=10000){
        if(n<=99999)
        {
            a=n/10000;
            b=(n%10000)/1000;
            c=((n%10000)%1000)/100;
            d=(((n%10000)%1000)%100)/10;
            e=((((n%10000)%1000)%100)%10)/1;

        cout<<'\t'<<a<<'\t'<<b<<'\t'<<c<<'\t'<<d<<'\t'<<e;
        }
    }
    return 0;
}

