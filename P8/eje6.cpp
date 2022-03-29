#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;
		bool palindromo(string cad){ 
			int n=cad.size();
			int t=n;
			string cad2;
					for(int i=0; i<t; i++){
						if(isdigit(cad[i])){
							cad2.push_back(cad[n-1]);
							n--;
						}
					}

cout<<cad2<<endl;
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

