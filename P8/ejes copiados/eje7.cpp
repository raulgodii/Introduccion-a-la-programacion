#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;
		bool compruebadni(string dni){
			bool res=true;
			int n, nletra;
			char letra;
			string vector_letras="TRWAGMYFPDXBNJZSQVHLCKE";
 			string aux=dni;

			dni.resize(8);
				for(int i=0; i<8; i++){
					if(isdigit(dni[i])==false){
						res=false;
					}
				}
				
				if(res==true){
					n=stoi(dni);
					nletra=n%23;
					letra=vector_letras[nletra];
					n=aux.length();
					if(toupper(aux[n-1])!=letra||n!=9){
						res=false;
					}
				}
return res;
}
int main(){
    if( compruebadni("12345678")!=false){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("12345678Z")!=true){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("12345678z")!=true){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("12345678X")!=false){
        cout<<"Error 4"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("87654321X")!=true){
        cout<<"Error 5"<<endl;
        return EXIT_FAILURE;
    }
    if( compruebadni("87654321a")!=false){
        cout<<"Error 6"<<endl;
        return EXIT_FAILURE;
    }


    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}


