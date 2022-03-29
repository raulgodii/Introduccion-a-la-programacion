#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int n, i, cont; 
i=1;
cont=0;

		cout<<"Dime un numero y te dire si es primo o no"<<endl;
		cin>>n;

		do {
		if (n%i==0){
		cont++;

		}
		
		i++;
		
		}while (i<=n);

		if(cont>2){
		cout<<"El numero no es primo"<<endl;
		}
		else{
		cout<<"El numero es primo"<<endl;

		}
	
    system("pause");
}

