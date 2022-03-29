#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;


bool espar (int v){

		if(v%2==0){
		return true;
		}
		else{
		return false;
		}
}

int main(){
		int n;
		cout<<"Introduzca un valor"<<endl;
		cin>>n;
		bool ep=espar (n);
		if (ep==true){
		cout<<"Es par"<<endl;
		}
		else{
		cout<<"No es par"<<endl;
		}
    system("pause");
}

