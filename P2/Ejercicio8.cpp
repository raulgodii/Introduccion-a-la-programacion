#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int cont, n, a, b, c;
a=0;
b=1;
c=0;
cont=0;

cout<<"Dime hasta que numero de la sucesion de Fibonacci quieres saber su valor"<<endl;
cin>>n;



do{

c=a + b;
cout<<c<< "  ";
a=b;
b=c;

cont++;
}while(cont<n);

cout<<endl;



    system("pause");
}

