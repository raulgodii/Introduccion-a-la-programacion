#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
		
		bool esperfecto (int v){
		int i, sum=0;
		for (i=1 ; i<v ; i++){
			if(v%i==0) {
			sum=sum+i;
			}
		}
		if (sum == v){
		return true;}
		else {
		return false;}
}
int main(){
		int v;
		cout << "Introduce un valor" << endl;
		cin >> v;
		if (esperfecto (v)==true){
		cout << "El numero introducido es perfecto" << endl;
		}
		else {
		cout << "El numero introducido no es perfecto" <<endl;
		}
    system("pause");
}

