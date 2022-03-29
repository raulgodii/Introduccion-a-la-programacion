#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(){

int n, i;

i=1;

		cout<<"Dime un numero y te dire sus divisores"<<endl;
		cin>>n;
		cout<<"Los divisores son:"<<endl;

		do{
		if (n%i==0){
		cout<<i<<endl;

		}


		i++;
		}while (i<=(n/2));

		cout<<n<<endl;


    system("pause");
}

