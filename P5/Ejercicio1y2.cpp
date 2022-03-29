#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

		void lee(float v[], int n){
			int i;
			for (i=0; i<n; i++){
			cout<<"Dime el valor del elemento "<<i<<endl;
			cin>>v[i];
			}
		}
		void imprime(float v[], int n){
			int i;
			for (i=0;i<n ;i++){
			cout<<"Elemento "<<i<<" = "<<v[i]<<endl;
			}
		}

int main(){
		int n;
		cout<<"Introduce el numero de elementos que desea que tenga el vector"<<endl;
		cin>>n;
		float v[n];
		lee(v, n);
		imprime(v, n);
    system("pause");
}

