#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int num, suma, cont;

cout<<"Dime un numero para calcular la suma de sus componentes impares"<<endl;
cin>>num;
cont=-1;
suma=0;
do{

cont=cont+2;
suma=cont+suma;


}while(cont+1<num);

cout<<"La suma total es: "<<suma<<endl;







    system("pause");
}

