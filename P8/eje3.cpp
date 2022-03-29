#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
#include  <cctype> //isdigit
using namespace std;
		void convierte_a_mayuscula(string& cad){
 			int n=cad.size();
				for(int i=0; i<n; i++){
					if(cad[i]!=toupper(cad[i])){
						cad[i]=toupper(cad[i]);

					}
				}
}
int main(){
    string cad="hola como estas";
    convierte_a_mayuscula(cad);
    if( cad!="HOLA COMO ESTAS"){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }

    cad="HOLA";
    convierte_a_mayuscula(cad);
    if( cad!="HOLA"){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
 

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}


