#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int n, i;

cout<<"Dime un numero y te imprimire todos sus divisores en orden ascendente"<<endl;
cin>>n;
cout<<"Sus divisores son: "<<endl;

for (i=1; i<=n; i++){
if (n%i==0){
cout<<i<<endl;
}


}





    system("pause");
}

