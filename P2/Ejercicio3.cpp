#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int suma, cont, num;

cout<<"Dime un numero para calcular su factorial"<<endl;
cin>>num;
suma=1;
cont=0;

do{

		cont++;
		suma=cont*suma;

}while (cont<num);

cout<<"El factorial es: "<<suma<<endl;

    system("pause");
}

