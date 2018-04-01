#include <iostream>
using namespace std;
int main()
{
      int n;
      cout<<"Ingresar el anio paraa verificar si es bisiesto :";
      cin>>n;
     if(n % 4 == 0 && (n % 100 != 0 || n % 400 == 0)){
         cout<<"El anio "<<n<<" Si es bisiesto ";
     }else{
         cout<<"El anio "<<n<<" No es bisiesto ";
     }
      return 0;
}
