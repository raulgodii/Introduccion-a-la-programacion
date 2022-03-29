#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
float numero;
cout<<"Dime un numero real y positivo para calcular su raiz"<<endl;
cin>>numero;
float raiz;
raiz=sqrt(numero);
if (numero >= 0)
{cout<<"El resultado es: "<<raiz<<endl;}
else 
{cout<<"Error, el numero dado no es mayor o igual que 0"<<endl;}

    system("pause");
}

