#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

		bool esprimo (int v){
		int n=0, i;
		for (i=1 ; i<=v ; i++){
		if (v%i==0){
		n++;}
		}
		if (n<=2){
		return true;}
		else{
		return false;}
} 
		void primos (int n){
		int i, cont=1;
		for (i=1 ; cont<=n ; i++){
			if ( esprimo (i) ){
			cout << i << endl;
			cont++;
			}
		}
}
int main(){
		int n;
		cout  << "Introduzca un valor" << endl;
		cin >> n;
		primos (n);
    system("pause");
}

