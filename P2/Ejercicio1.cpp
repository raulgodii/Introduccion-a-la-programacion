#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

float num, valores, media, cont;
cont=0;
valores=0;
		cout<<"Dime una serie de numeros para calcular su media, el programa pedir� numeros hasta que el valor introducido sea menor o igual que cero"<<endl;
		
		do{		
		cin>>num;
		valores=num+valores;
		cont++;
		}while(num>0);

		media=valores/cont;
		cout<<"La media es: "<<media<<endl;
		
    system("pause");
}

