#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;
 		bool palindromo(string cad){
			int n=cad.size();
				for(int i=0; i<n; i++){
					if(cad[i]==' '){
						cad.erase(0);
					}
						for(int j=n; j>0; j--){
							if(cad[i]==cad[j-i-1]){
								return true;
							}
							else{
								return false;
							}
						}
				}
return (false);
}
int main(){
    if( palindromo("asddsa")==false){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( palindromo("xasddsa")==true){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( palindromo("acaso hubo buhos aca")==false){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}

