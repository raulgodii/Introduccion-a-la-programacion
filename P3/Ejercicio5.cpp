#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

float n, sum, cont, media;
media=0;
cont=1;
sum=0;
cout<<"Dime numero de tal manera que ire calculando su media hasta que el valor de la media sea mayor que 30"<<endl;


do{
cin>>n;

media=(n+sum)/cont;

cout<<"De momento la media es: "<<media<<endl;
sum=n+sum;
cont++;
}while(media<=30);


cout<<"Fin del programa"<<endl;

    system("pause");
}

