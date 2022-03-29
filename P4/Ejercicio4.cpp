#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
		void divisores (int v){
		int i;
		for ( i=1 ; i<=v ; i++ ){
			if (v%i==0) {
			cout<<i<<endl;
			}
		}
}
int main(){
		int n;
		cout << "Introduzca un numero"  <<endl;
		cin>>n;
		cout << "Los divisores de " << n << " son: " << endl;
		divisores (n);
    system("pause");
}

