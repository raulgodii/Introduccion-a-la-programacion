#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
int n;
int i=0;
int mayor;
int menor;

		cout<<"A continuacion debes teclear 15 numeros de manera que imprimire por pantalla el mayor de ellos "<<endl;
		do {
		cout<<"Teclea el numero"<<endl;
		cin>>n;
		if(i==0){
		mayor=n;
		menor=n;
		}
		else{
		if (n>=mayor){
		mayor=n;
		}
		else{
		menor=n;
		}
		}
		i++;
		}while(i<15);

		cout<<"El mayor numero tecleado ha sido: "<<mayor<<endl;

    system("pause");	

}

