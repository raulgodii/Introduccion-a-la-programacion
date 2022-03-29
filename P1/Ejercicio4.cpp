#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
int dia;
cout<<"Dime el numero del dia"<<endl;
cin>>dia;
 if ((dia >=1) && (dia<=5))
{cout<<"Es un dia laborable"<<endl;}
 
else {
if ((dia>5) && (dia<=7)) 
{cout<<"Es fin de semana"<<endl;}
else {cout<<"Error, el numero introducido debe comprenderse entre 1 y 7"<<endl;}
}

    system("pause");
}

