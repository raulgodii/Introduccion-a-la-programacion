#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
int i=0;
int mayor;
int menor;
int n;

cout<<"Escribe valores hasta que el valor introducido sea menor que 0 y entonces se parara el programa para imprimir el mayor valor introducido"<<endl;
cout<<"Escribe todos los valores: "<<endl;
do {
cin>>n;
if (i==0){
mayor=n;
menor=n;
}
else {
if (n>mayor){
mayor=n;

}
else {
menor=n;

}
}

i++;

}while (n>0);

cout<<"Fin del programa, el mayor valor introducido ha sido: "<<mayor<<endl;



    system("pause");
}

