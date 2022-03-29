#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int num, suma, cont;

cout<<"Dime un numero y calculare la suma de sus componentes enteros"<<endl;
cin>>num;

cont=0;
suma=0;
		do{
		cont++;
		suma=cont+suma;
		}while(cont<num);

		
		cout<<"La suma es: "<<suma<<endl;


    system("pause");
}

