#include <cstdlib> //define EXIT_FAILURE,EXIT_SUCCESS
#include <iostream>//cout
#include <string>//string
using namespace std;
 		int find(string a, string b){
			int n=a.size();
			int t=b.size();
			int res=0;
			int cont=0;
			int pito=0;
			int p=0;

				for(int i=0; i<n; i++){
					cont=0;

					if(a[i]==b[0]){

						for(int h=i; h<n; h++){

							if(a[h]==b[p]){
								cont++;
								p++;
							}

							if(cont==t){
								res=i;
								pito++;
							}
						}
					}
				}

			if(pito==0){
				res=-1;
			}

return res;
}
int main(){
    if( find("12345678","123")!=0){
        cout<<"Error 1"<<endl;
        return EXIT_FAILURE;
    }
    if( find("12345678","hola")!=-1){
        cout<<"Error 2"<<endl;
        return EXIT_FAILURE;
    }
    if( find("Juan Perez","Perez")!=5){
        cout<<"Error 3"<<endl;
        return EXIT_FAILURE;
    }
    if( find("Juan Perez Perez","Perez")!=5){
        cout<<"Error 5"<<endl;
        return EXIT_FAILURE;
    }

    cout<<"Correcto"<<endl;
    return EXIT_SUCCESS;

}


