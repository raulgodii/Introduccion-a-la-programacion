#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int i, mayor, menor, n;

cout<<"Escribe valores hasta que el valor introducido sea menor que 0, entonces imprimire el mayor valor introducido hasta el momento"<<endl;
cout<<"Empieza a decirme numeros"<<endl;

		for(i=1; n>0; i++){
		cin>>n;
			if (i==1){
			mayor=n;
			menor=n;
			}
			else {
				if(n>mayor){
				mayor=n;
				}
				else{
				menor=n;
				}
			}
			}

		cout<<"Fin del programa, el mayor valor introducido ha sido: "<<mayor<<endl;

		
    system("pause");
}

