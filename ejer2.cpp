#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ingresar numero  :";
    cin>>n;
    for(int i=0; i<=n; i++)
        if(i==0)
            cout<<" "<<i;
        else
            cout<<";"<<i;
    return 0;
}
