#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv){
		int media=0;
		int sum=0;
		int n=argc;
			if(n<2){
				cout<<"Error, se necesitan al menos dos numeros para calcular su media"<<endl;
				exit(0);
			}
			for(int i=1; i<n; i++){
				sum=stoi(argv[i])+sum;
			}
		media=sum/(n-1);
		cout<<"El resultado es: "<<media<<endl;
    system("pause");
}

