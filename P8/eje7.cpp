#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;
		bool compruebadni(string dni){
		int n=dni.size();
		string v="TRWAGMYFPDXBNJZSQVHLCKE";
		string nd=dni;
		nd.resize(8);
		int ndni= stoi(nd);
		char letra=v[ndni%23];
		int cont=0; 	
		bool res=false;

			if(n==9){
				for(int i=0; i<n-1; i++){
					if (isdigit(dni[i])){
						cont++;
					}
				}
				if (cont==8){
					if (isalpha(dni[n-1])){
							if(toupper(dni[n-1])==letra){
								res=true;
							}
					} else {
						return res;
					}
				} else {
					return res;
				}
			} else {
				return res;
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


