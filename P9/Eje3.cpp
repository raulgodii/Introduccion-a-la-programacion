#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;
	int nacimiento(string fecha){ //funcion para convertir el año en el char a un int
		char year[4];
		year[0]=fecha[6];
		year[1]=fecha[7];
		year[2]=fecha[8];
		year[3]=fecha[9];
		year[4]='\0';
		return stoi(year);
}
	bool esbisiesto(int year){
		bool bisiesto=false;
		if(((year%4==0) && (year%100!=0)) || (year%400==0)){
			bisiesto=true;
		}
		return bisiesto;
}

int main(int argc, char **argv){
	if(argc!=2){
		cout<<"Error, solo introducir la fecha"<<endl;
		exit(0);
	}
	string fecha = argv [1];
	if ((fecha[2]!= '/') && (fecha [5] != '/')){
		cout<<"Error, el formato de fecha tiene que ser dd/mm/aaaa"<<endl;
		exit(0);
	}
	int year=nacimiento(fecha);
	bool bisiesto= esbisiesto(year);
	if(bisiesto){
		cout<<"El año de nacimieno de esta persona fue bisiesto"<<endl;
	} else {
		cout<<"El año de nacimiento de esta persona no fue bisiesto"<<endl;
	}
    system("pause");
}

