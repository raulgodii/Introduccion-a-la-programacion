#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int dia;
cout<<"Dime un numero del 1 al 7 de tal manera que te dire el dia de la semana que le corresponda"<<endl;
cout<<"Lunes(1),Martes (2)..."<<endl;
  system("pause");
cout<<"Introducido el numero:"<<endl;
cin>>dia;

switch (dia) {
case 1: {
cout<<"Es lunes."<<endl;
}break;
case 2: {
cout<<"Es martes."<<endl;
}break;
case 3: {
cout<<"Es miercoles."<<endl;
}break;
case 4: {
cout<<"Es jueves"<<endl;
}break;
case 5: {
cout<<"Es viernes"<<endl;
}break;
case 6: {
cout<<"Es sabado"<<endl;
}break;
case 7: {
cout<<"Es domingo"<<endl;
}break;

default:{
cout<<"Error, el numero introducido no esta entre 1 y 7"<<endl;
}
}

    system("pause");
}

