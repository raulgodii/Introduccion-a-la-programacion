#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
		int Ndivisores (int v){
		int i, n=0;
		for ( i=1 ;	i<=v ; i++){
			if (v%i==0){
			n++;
			}
		}
		return n;
}
int main(){
		int v;
		cout << "Introduce un valor" << endl;
		cin >> v;
		cout << "El numero de divisores es: "  << Ndivisores (v) << endl;
    system("pause");
}

