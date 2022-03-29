#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
int a,b,c;
cout<<"Dime 3 numeros y te dire el mayor"<<endl;
   system("pause");
cout<<"Dime el primero"<<endl;
cin>>a;
cout<<"Dime el segundo"<<endl;
cin>>b;
cout<<"Dime el tercero"<<endl;
cin>>c;

if ((a>b) && (a>c)) {
cout<<"El valor mas grande es: "<<a<<endl;
}
else {
if((a>b) && (a<c)) {
if (b>c) {cout<<"El valor mas grande es: "<<b<<endl;}
else {cout<<"El valor mas grande es: "<<c<<endl;}
}
else {
if (c>b) {cout<<"El valor mas grande es: "<<c<<endl;}
else {cout<<"El valor mas grande es: "<<b<<endl;}
}
}
    system("pause");
}

