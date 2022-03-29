#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
		int factorial (int v) {
		int i, fact=1;
		for (i=1 ; i<=v ; i++){
		fact = fact * i;
		}
		return fact;
}
		int combinaciones (int n, int k) {
		int comb;
		comb = factorial (n)/(factorial (k) * factorial (n-k));
		return comb;
}
int main(){
		int n, k;	
		cout << "Introduce el primer valor (n)" <<endl;
		cin >> n;
		cout << "Introduce el segundo valor (k)" <<endl;
		cin >> k;
		cout << "Las combinaciones son: " << combinaciones (n,k) <<endl;
		
    system("pause");
}

