#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

	bool numero(string str){ //funcion para ver que es un numero
		bool aux=true;
		int size=str.size();
		for(int i=0; (i<size) && aux; i++){
			if(isdigit(str[i])){
				size=false;
			 }
		}
return aux;
 }

int main(int argc, char **argv){
	if(argc=1){
		cout<<"Error, debe escribir al menos un numero"<<endl;
		exit(0);
	}
	float n=stof(argv[1]);
	for(int i=2; i<argc; i++){
		string ope=argv[i];
		if(ope=="sum"){
			if(((i+1)>=argc) || (numero(argv[i+1]))){
				cout<<"Error, el parametro sum no es un numero"<<endl;
				exit(0);
			}else{
				float a=stoi(argv[i+1]);
				n+=a;
				i++;
			}
		}else if (ope=="mul"){
			if(((i+1)>=argc) || (numero(argv[i+1]))){
			cout<<"Error, el parametro mul no es un numero"<<endl;
			exit(0);
			} else {
				float a= stof(argv[i+1]);
				n*=a;
				i++;
			}
		}else if (ope=="div"){
			if(((i+1)>=argc) || (numero(argv[i+1]))){
				cout<<"Error, el parametro div no es un numero"<<endl;
				exit(0);
			}else{
				float a=stof(argv[i+1]);
					n/=a;
					i++;
			}
		}else if (ope=="sqrt"){
			n=sqrt(n);
		}
	}
	cout<<"El resultado es: "<<n<<endl;
    system("pause");
}

