#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char **argv){
		if (argc <= 2){
			cout<<"Error, se necesitan al menos dos numeros para calcular una media"<<endl;
			exit(0);
		}
		float n=0, media=0;
		for (int i; i<argc; i++){
			n += stof(argv[i]);
		}
		media=(n/(argc-1));
		cout<<"La media de los valores introducidos es: "<< media<<endl;
    system("pause");
}

