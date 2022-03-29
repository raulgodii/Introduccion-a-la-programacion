#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int factorial (int v){
		int i;
		int fact=1;
		for( i=1 ; i<=v ; i++){
		fact=fact*i;
		}
		return fact;
}
int main(){
		int n;
		cout << "Introduzca un valor" <<endl;
		cin >> n;
		int ep= factorial (n);
		cout << "El factorial de " << n << " es: " << ep <<endl;
    system("pause");
}

