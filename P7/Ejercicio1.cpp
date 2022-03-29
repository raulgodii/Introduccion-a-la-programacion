#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
			struct alumnos{		//Estructura alumnos
			int dni=0;
			int edad=0;
			float nota=0;
};

			int buscar_alumno(int dni, int na, alumnos alumno[]){		//Buscar alumnos
				for(int i=0; i<na; i++){
					if(alumno[i].dni==dni){
						return i;
					}
				}
			cout<<"///Alumno no encontrado///"<<endl;
}

			void imprime(int dni, int na, alumnos alumno[]){		//Imprimir alumnos
			int i=10;
			i = buscar_alumno(dni, na, alumno);
				if(i<10){
				cout<<"///Datos del alumno: "<<endl;
				cout<<"DNI: "<<alumno[i].dni<<endl;
				cout<<"Edad: "<<alumno[i].edad<<endl;
				cout<<"Nota: "<<alumno[i].nota<<endl;
				}
}
int main(){
			alumnos alumno[10];
			int na=0; //Indica el numero de elementos que se están usando en el vector;
			int opcion_menu=0; //variable para controlar el menú de usuario
			do{
					cout<<"-->Seleccione una opcion<--"<<endl;
					cout<<"1. Anadir alumno"<<endl;
					cout<<"2. Modificar alumno"<<endl;
					cout<<"3. Imprimir datos alumno"<<endl;
					cout<<"4. Imprimir datos todos alumnos"<<endl;
					cout<<"5. Eliminar alumno"<<endl;
					cout<<"6. Salir"<<endl;

					cin>>opcion_menu;
					switch(opcion_menu){

						case 1:{	//Añadir un nuevo alumno
						if(na<10){
							cout<<"Indica el DNI del alumno sin letra:"<<endl;
							cin>>alumno[na].dni;
							cout<<"Indica la edad del alumno:"<<endl;
							cin>>alumno[na].edad;
							cout<<"Indica la nota del alumno:"<<endl;
							cin>>alumno[na].nota;
							cout<<"///Alumno creado///"<<endl;
							na++;
						}
						else{
						cout<<"///No se pueden anadir nuevos alumnos, elimine o modifique otros alumnos///"<<endl;
						}
						}break;


						case 2:{	//Modificar datos del alumno (busqueda por dni)
					if(na>0){
						int dni;
						cout<<"Introduce el dni del alumno que desea modificar"<<endl;
						cin>>dni;
						int i=10;
						i=buscar_alumno(dni, na, alumno);
							if(i<10){
								cout<<"Indica la nueva edad del alumno:"<<endl;
								cin>>alumno[i].edad;
								cout<<"Indica la nueva nota del alumno:"<<endl;
								cin>>alumno[i].nota;
								cout<<"///Alumno modificado///"<<endl;
							}
					}
					else{
					cout<<"///No hay alumnos creados, crea uno nuevo///"<<endl;
					}
						}break;


						case 3:{	//Imprimir los datos del alumno (busqueda por dni)
					if(na>0){
						int dni;
						cout<<"Introduce el DNI del alumno"<<endl;
						cin>>dni;
						imprime(dni, na, alumno);
					}					
					else{
					cout<<"///No hay alumnos creados, crea uno nuevo///"<<endl;
					}
						}break;


						case 4:{	//Imprimir todos los datos de los alumnos
						if(na>0){
							for(int i=0; i<na; i++){
							cout<<"///Alumno "<<i<<": "<<endl;
							cout<<"DNI: "<<alumno[i].dni<<endl;
							cout<<"Edad: "<<alumno[i].edad<<endl;
							cout<<"Nota: "<<alumno[i].nota<<endl;
							}
						}
					else{
					cout<<"///No hay alumnos creados, crea uno nuevo///"<<endl;
					}
						}break;

						case 5:{	//Eliminar un alumno
					if (na>0){
						int dni;
							cout<<"Introduce el dni del alumno que desea eliminar:"<<endl;
							cin>>dni;
												int i=10;
						i=buscar_alumno(dni, na, alumno);
							if(i<10){
								alumno[i]=alumno[na-1];
								na--;
								cout<<"///Alumno borrado con exito///"<<endl;
							}
					}
					else{
					cout<<"///No hay alumnos creados, crea uno nuevo///"<<endl;
					}
						}break;
};
			}while(opcion_menu!=6);

    system("pause");
}

