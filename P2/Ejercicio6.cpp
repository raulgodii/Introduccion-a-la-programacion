#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int n, i;
cout<<"Dime un numero y te dire sus divisores"<<endl;
cin>>n;
cout<<"Los divisores son: "<<endl;
i=n;

do{

if (n%i==0){

cout<<i<<endl;
}

i=i-1;
}while(i>0);






    system("pause");
}

