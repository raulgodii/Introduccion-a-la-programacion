#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <ctype.h>
#include <cmath>
using namespace std;

			void comprobar(string pene2){
					int size=pene2.size();
								for(int i=0; i<size; i++){
												if(isalpha(pene2[i])){
												cout<<"Error, debes introducir un numero para poder operar"<<endl;
												exit(0);
												}
								}
}

			float stoint(string pene2){
					float n=stoi(pene2);
			return n;
}

int main(int argc , char **argv){
		float res;

			if(argc==1){
				cout<<"Error, debes introducir al menos un numero para poder operar"<<endl;
				exit(0);
			}

			if(argc>=2){
				string cad(argv[1]);
				int size=cad.size();

								for(int i=0; i<size; i++){
												if(isalpha(cad[i])){
												cout<<"Error, debes introducir en primer lugar un numero"<<endl;
												exit(0);
												}
								}
				float n=stoi(cad);
				res=n;

								for(int i=2; i<argc; i++){
										string pene = argv[i];
												if ( pene =="-sum"){
														string pene2 = argv[i+1];
														comprobar(pene2);
														float n=stoint(pene2);
														res=res + n;
												}
												if ( pene =="-div"){
														string pene2 = argv[i+1];
														comprobar(pene2);
														float n=stoint(pene2);
														res=res/n;
												}
												if ( pene =="-mult"){
														string pene2 = argv[i+1];
														comprobar(pene2);
														float n=stoint(pene2);
														res=res*n;
												}
												if ( pene =="-sqrt"){
														if(res<0){
															cout<<"Error, no se puede hacer la raiz de un numero negativo"<<endl;
															exit(0);
														}
														res=sqrt(res);
												}
								}
				cout<<"El resultado es: "<<res<<endl;
			}
    system("pause");
}

