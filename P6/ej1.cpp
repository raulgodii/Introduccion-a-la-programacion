#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cassert>
using namespace std; 
		int find(float m[4][4], float val){
			int nveces=0;
				for(int f=0; f<4; f++){
					for(int c=0; c<4; c++){
						if (m[f][c]==val){
							nveces++;
						}
					}
				}
	return nveces;
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
	
	float m[4][4]={ {1,2,3,4},{1,2,3,4},{1,2,3,4},{1,2,3,4}};
	assert(  find(m,1 )==4);
	assert(  find(m,2 )==4);
	assert(  find(m,-1 )==0);
	return 0;
}	


