#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int n, i, cont;
cont=0;

		cout<<"Dime un numero y te dire si es primo o no"<<endl;
		cin>>n;

		for (i=1; i<=n; i++) {
		if (n%i==0){
		cont++;
		}
		}

	if(cont>2){
	cout<<"El numero no es primo"<<endl;

	}
	else {
	cout<<"El numero es primo"<<endl;

	}


    system("pause");
}

