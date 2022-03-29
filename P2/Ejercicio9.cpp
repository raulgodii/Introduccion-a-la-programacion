#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int n, cont, suma, a, b;
cont=1;
suma=0;
a=0;
b=0;

cout<<"Dime un numero y te dire la suma de todos los valores divisibles por 2 y 3 hasta ese numero:"<<endl;
cin>>n;

		do{

			if(cont%2==0){
			a=cont;
suma=a+suma;	
			cont++;
			}
				else {
					if(cont%3==0){
					b=cont;
suma=b+suma;
					cont++;
						}
						else{
						cont++;

						}
				}

		
		}while(cont<=n);

cout<<"La suma total es: "<<suma<<endl;


    system("pause");
}

