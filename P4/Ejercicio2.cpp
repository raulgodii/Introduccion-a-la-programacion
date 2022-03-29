#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

bool esprimo (int v){
		int n=0;
		int i;
		for (i=1 ; i<=v ; i++) {
		if(v%i==0){
		n++;
		}
		}
		
		if (n<=2){
		return true;
		}
		else{
		return false;
		}
}

int main(){

		int n;
		cout << "Introduzca un valor" << endl;
		cin >> n;
		bool ep=esprimo(n);
		if (ep==true){
		cout << "El numero es primo" << endl;
		}
		else{
		cout << "El numero no es primo" << endl;
		}
    system("pause");
}

