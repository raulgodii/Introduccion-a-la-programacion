#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
float practica,parcial,final,media;

cout<<"Tu nota final se consigue en funcion de las siguientes caracteristicas: "<<endl;
cout<<"Nota de practica (25%)"<<endl;
cout<<"Nota de examen parcial (25%)"<<endl;
cout<<"Nota de examen final (50%)"<<endl;
cout<<"Pulsa intro si quieres saber tu nota final"<<endl;
    system("pause");
cout<<"Dime tu nota media en las practicas"<<endl;
cin>>practica;
cout<<"Dime tu nota en el examen parcial"<<endl;
cin>>parcial;
cout<<"Dime tu nota en el examen final"<<endl;
cin>>final;
media=(practica*0.25)+(parcial*0.25)+(final*0.5);
cout<<"Segun los valores dados, tu nota media final obtiene el valor de: "<<media<<endl;

    system("pause");
}

