#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 
		void multiplica (float m[4][4], float m2 [4][4], float m3 [4][4]){
			for(int f1=0; f1<4; f1++){
				for(int c2=0; c2<4; c2++){
					int mult=0;
					for(int i=0; i<4; i++){
						mult=(m[f1][i])*(m2[i][c2])+mult;
					}
					m3[f1][c2]=mult;
				}
			}
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
bool iguales(float m[4][4],float m2[4][4]){
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				if (m[i][j]!=m2[i][j]) return false;
		return true;
}
int test(){
	
	float m[4][4]={ {1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
	float id[4][4]={ {1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
	float res[4][4];
	multiplica(m,id,res);
	assert(iguales(m,res));
	return 0;
}	


