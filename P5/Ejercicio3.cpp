#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

		void fijaValorAleatorio(int v[], int n, int max){
		int secs=time(0);
		srand(secs);
		int i;
			for (i=0; i<n; i++){
			v[i]=rand()%max;
			
			}
}
		void imprime(int v[], int n, int max){
		int i;
		for(i=0; i<n; i++){
		cout<<"El elemento "<<i<<" = "<<v[i]<<endl;
		}
}
int main(){
		int n, max;
		cout<<"Introduce el numero de elementos del vector"<<endl;
		cin>>n;
		cout<<"Introduce el numero maximo de numeros los cuales se imprimiran"<<endl;
		cin>>max;
		int v[n];
		fijaValorAleatorio(v, n, max);
		imprime(v, n, max);
    system("pause");
}

