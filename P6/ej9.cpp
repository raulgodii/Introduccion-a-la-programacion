#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
#include <cmath>
using namespace std; 

			void stats(float m[4][4], float res[2]){
				float suma=0;
				for(int i=0; i<4; i++){
					for(int j=0; j<4; j++){
						suma=suma+m[i][j];
					}
				}
				float media=suma/16;
		res[0]=media;
				float desviacion=0;
				for(int i=0; i<4; i++){
					for(int j=0; j<4; j++){
						desviacion=desviacion+pow((m[i][j]-media),2);		
					}
				}
		res[1]=sqrt(desviacion/16);
}
//cree aqui su funcion
  
//// 
int test();//indica que la funcion test esta mas abajo
int main(){ 
		test();
		cout<<"Correcto"<<endl;
		system("pause");
		return 0;
}
//funcion de test
 
int test(){
	
	float m[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float st[2];
	stats(m,st);
	assert( fabs( st[0]-2.5)<1e-3  && fabs(st[1]-1.11803)<1e-3);
	return 0;
}	


