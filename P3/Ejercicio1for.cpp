#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int n, i, mayor, menor;

cout<<"Dime 15 numeros de manera que imprimire por pantalla el mayor de ellos"<<endl;

		for (i=0; i<15; i++) {
				cin>>n;
		if (i==0){
		mayor=n;
		menor=n;
		}
		else {
		if (n>mayor) {
		mayor=n;

		}
		else {
		menor=n;

		}
		}
		}


cout<<"El numero mayor introducido es: "<<mayor<<endl;

    system("pause");
}

