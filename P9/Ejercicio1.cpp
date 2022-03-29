#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <stdio.h>
using namespace std;

int main(int argc, char **argv){
		int cont=argc;
		if (cont==2){
						if(stoi(argv[1])>0){
									int n=stoi(argv[1]);
									cout<<"El resultado es: "<<sqrt(n)<<endl;
						} else {
							cout<<"Error, debe introduir un valor positivo"<<endl;
						}
		} else {
			cout<<"Error, debe introduir un unico valor"<<endl;
		}
    system("pause");
}

