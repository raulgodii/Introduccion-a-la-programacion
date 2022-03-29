#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int a,b,c;

cout<<"Dime dos numeros (a y b) de tal modo que guardare el valor del primer numero en (A) y el del segundo en (B)."<<endl;

    system("pause");

cout<<"Dime el valor del primer numero"<<endl;
cin>>a;
cout<<"a="<<a<<endl;
cout<<"Dime el valor del segundo numero"<<endl;
cin>>b;
cout<<"b="<<b<<endl;

    system("pause");

cout<<"Ahora voy a intercambiar los valores dados de tal manera que en A dejare el de mayor valor y en B el de menor valor"<<endl;

    system("pause");

if (a<b) { 
c=a;
a=b;
b=c;
}
else {
a=a;
b=b;
}

cout<<"a="<<a<<endl;
cout<<"b="<<b<<endl;
    system("pause");
}

