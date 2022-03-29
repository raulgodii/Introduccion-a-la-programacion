#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string>
using namespace std;

int main(int argc, char **argv){
	if(argc!=2){
		cout<<"Error, debe introducir un valor para calcular su raiz cuadrada"<<endl;
		exit(0);
	}
	if(stoi(argv[1])<0){
		cout<<"Error, debe introducir un valor positivo para poder calcular su raiz cuadrada"<<endl;
		exit(0);
	}
	float sol= sqrt(stoi(argv[1]));
	cout<<"La raiz cuadrada es: "<<sol<<endl;
    system("pause");
}

