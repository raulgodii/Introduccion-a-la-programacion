#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int numero;
cout<<"Dime un numero cualquiera y te dire si es mayor, menor o igual que cero."<<endl;
cin>>numero;
if (numero>0)
{cout<<"El numero es mayor que cero."<<endl;}
else
{
if (numero<0)
{cout<<"El nmero es menor que cero"<<endl;
}
else {cout<<"El numero es cero."<<endl;
}


}
    system("pause");
}

