#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int n;

srand(time(0));
int secreto= rand() % 1001;

cout<<"Estoy pensando en un numero del 1 al 1000 dime numeros y te dire si es mayor, menor o igual que el que pienso"<<endl;

do{
cin>>n;
if(n<secreto){
cout<<"El numero introducido es menor"<<endl;
}
else {
if(n>secreto){
cout<<"El numero introducido es mayor"<<endl;
}
else {
cout<<"Enhorabuena! Has adivinado el numero!"<<endl;
}

}


}while(n!=secreto);




    system("pause");
}

