#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std; 
		int factorial(int i){
			int fact=1;
			for(int cont=1; cont<=i; cont++){
			fact=fact*cont;
			} 
return fact;
}
 		void factoriales(int fact[], int n){
			int i;
			for(i=0; i<=(n-1); i++){
			fact[i]=factorial(i);
			}
}
//// 
int test();
int main(){ 
		int nerrors=test();
		if (nerrors==0){
			cout<<"Correcto "<<endl;
		}
		else{
			cout<<"Hay "<<nerrors<<" errores en el test"<<endl;
		}
		system("pause");
}

int test(){
	int errors=0;
	//llama a la funcion para el valor 10 
	int fact[10]={0,0,0,0,0,0,0,0,0,0};//crea el vector
	factoriales( fact,1);	
	//comprueba validez del resultado y que no se ha escrito fuera de la zona esperada
	if ( fact[0]!=1  || fact[1]!=0 ||   fact[2]!=0 ||  fact[3]!=0 ||   fact[4]!=0 ||  fact[5]!=0 ||  fact[6]!=0 ||  fact[7]!=0 ||  fact[8]!=0 ||  fact[9]!=0   ) errors++;
	factoriales( fact,2);	
	//comprueba validez del resultado y que no se ha escrito fuera de la zona esperada
	if ( fact[0]!=1  || fact[1]!=1 ||   fact[2]!=0 ||  fact[3]!=0 ||   fact[4]!=0 ||  fact[5]!=0 ||  fact[6]!=0 ||  fact[7]!=0 ||  fact[8]!=0 ||  fact[9]!=0   ) errors++;
	factoriales( fact,3);	
	//comprueba validez del resultado y que no se ha escrito fuera de la zona esperada
	if ( fact[0]!=1  || fact[1]!=1 ||   fact[2]!=2 ||  fact[3]!=0 ||   fact[4]!=0 ||  fact[5]!=0 ||  fact[6]!=0 ||  fact[7]!=0 ||  fact[8]!=0 ||  fact[9]!=0   ) errors++;
	factoriales( fact,4);	
	//comprueba validez del resultado y que no se ha escrito fuera de la zona esperada
	if ( fact[0]!=1  || fact[1]!=1 ||   fact[2]!=2 ||  fact[3]!=6 ||   fact[4]!=0 ||  fact[5]!=0 ||  fact[6]!=0 ||  fact[7]!=0 ||  fact[8]!=0 ||  fact[9]!=0   ) errors++;
	factoriales( fact,5);	
	//comprueba validez del resultado y que no se ha escrito fuera de la zona esperada
	if ( fact[0]!=1  || fact[1]!=1 ||   fact[2]!=2 ||  fact[3]!=6 ||   fact[4]!=24 ||  fact[5]!=0 ||  fact[6]!=0 ||  fact[7]!=0 ||  fact[8]!=0 ||  fact[9]!=0   ) errors++;
	factoriales( fact,10);	
 	//comprueba validez del resultado y que no se ha escrito fuera de la zona esperada
	if ( fact[0]!=1  || fact[1]!=1 ||   fact[2]!=2 ||  fact[3]!=6 ||   fact[4]!=24 ||  fact[5]!=120 ||  fact[6]!=720 ||  fact[7]!=5040 ||  fact[8]!=40320 ||  fact[9]!=362880   ) errors++;
	 
 

 return errors;
}	


