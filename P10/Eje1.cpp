#include <cstdio>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

		struct alumnos{
			string nombre, apellido1, apellido2;
			string dni;
			int edad;
			float nota;
		};

		void imprime_menu(){
			cout<<"-->Seleccione una opcion<--"<<endl;
			cout<<"1. Anadir alumno"<<endl;
			cout<<"2. Modificar alumno"<<endl;
			cout<<"3. Imprimir datos alumno"<<endl;
			cout<<"4. Imprimir datos de todos los alumnos"<<endl;
			cout<<"5. Eliminar alumno"<<endl;
			cout<<"6. Salir"<<endl;
		}

		bool guarda(string ruta_fichero, alumnos alumno[], int na){
			ofstream file;
			bool res = false;
			file.open(ruta_fichero);
			if(file.is_open()==false){
				cout<<"ERROR: El fichero no se pudo encontrar o abrir"<<endl;
			} else {
				for (int i=0; i<na; i++){
if(alumno[i].dni !=" "){
					file<<alumno[i].nombre<<endl;
					file<<alumno[i].apellido1<<endl;
					file<<alumno[i].apellido2<<endl;
					file<<alumno[i].dni<<endl;
					file<<alumno[i].edad<<endl;
					file<<alumno[i].nota<<endl;
}
				}
				file.close();
				res = true;
			}
return res;
		}

		int lee(string ruta_fichero, alumnos alumno[], int tam){
			ifstream file;
			file.open(ruta_fichero);
			if(!file.is_open()){
				cout<<"Fichero nuevo creado, cierre y abra de nuevo el programa"<<endl;
				return 0;
			} else {
					int na=0;
					alumnos aux;
					do{
					if(file>>aux.nombre){

						file>>aux.apellido1;
						file>>aux.apellido2;
						file>>aux.dni;
						file>>aux.edad;
						file>>aux.nota;
						alumno[na]=aux;
						na++;
					}
					} while (file.eof()==false);
				file.close();

				return na;	
			}
		}


		bool comprobar_dni(string dni, int na){
			int n = dni.size();
			string v = "TRWAGMYFPDXBNJZAQVHLCKE";
			string nd = dni;
			nd.resize(8);
			int ndni = stoi(nd);
			char letra = v [ndni%23];
			int cont = 0;
			bool res = false;

				if(n==9){
					for(int i=0; i<(n-1); i++){
						if(isdigit(dni[i])){
							cont++;
						}
					}
					if (cont==8){
						if(isalpha(dni[n-1])){
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


		void introducir_datos(alumnos alumno[], int na){
			cout<<"Introduce el nombre y los apellidos del alumno:"<<endl;
			cin>>alumno[na].nombre>>alumno[na].apellido1>>alumno[na].apellido2;
			cout<<"Introduce el DNI del alumno:"<<endl;
			string dni;
			cin>>dni;
			
			if(comprobar_dni(dni,na)==true){
				alumno[na].dni=dni;
			cout<<"Introduce la edad del alumno:"<<endl;
			cin>>alumno[na].edad;
			cout<<"Introduce la nota del alumno: "<<endl;
			cin>>alumno[na].nota;
			cout<<"Alumno creado con exito"<<endl;
			} else {
				cout<<"ERROR: El DNI introducido no es correcto"<<endl;			
				exit(0);
			}
		}

		int busca_alumno(alumnos alumno[], int na, string dni){
			int indice=-1;
						for(int i=0; i<na; i++){
							if(dni==alumno[i].dni){
								indice = i;
							}
						}
			return indice;
		}

		void imprimir_alumno(alumnos alumno[], int na){
			cout<<"Alumno: "<<alumno[na].nombre<<"  "<<alumno[na].apellido1<<"  "<<alumno[na].apellido2<<endl;
			cout<<"DNI: "<<alumno[na].dni<<endl;
			cout<<"Edad: "<<alumno[na].edad<<endl;
			cout<<"Nota: "<<alumno[na].nota<<endl;
		}


		void imprimir_todos(alumnos alumno[], int na){
			for(int i=0; i<na; i++){
		if(alumno[i].dni != " "){
			cout<<"Alumno: "<<alumno[i].nombre<<"  "<<alumno[i].apellido1<<"  "<<alumno[i].apellido2<<endl;
			cout<<"DNI: "<<alumno[i].dni<<endl; 
			cout<<"Edad: "<<alumno[i].edad<<endl;
			cout<<"Nota: "<<alumno[i].nota<<endl;
		}
			}
		}

int main(int argc, char **argv){
		
		alumnos alumno[100];
		int na=0;
		
		if (argc!=2){
			cout<<"ERROR: No se indico el nombre del fichero con el que desea trabajar"<<endl;
			exit(0); 
		}

		na=lee(argv[1], alumno, 100);

		int opcion=0;

		do{
			imprime_menu();
			int opcion;
			cin>>opcion;
			switch(opcion){
			
				case 1:{ //Añadir nuevo alumno
					if(na==100){
						cout<<"No es posible añadir más alumnos"<<endl;
					}
					else{
					introducir_datos(alumno, na);
					na++;
					}
				}break;
				
				case 2:{ //Modificar datos del alumno (busqueda por dni)
					string dni;
					if(na>0){
					cout<<"Introduce el DNI del alumno"<<endl;
					cin>>dni;
					int indice = busca_alumno(alumno, na, dni);
						if(indice==-1){
							cout<<"Alumno no encontrado"<<endl;
						} else {
							introducir_datos(alumno, indice);
						}
					} else {
						cout<<"No hay alumnos creados, crea uno nuevo"<<endl;
					}
				}break;

				case 3:{ //Imprimir los datos del alumno (busqueda por dni)
					if(na>0){
						string dni;
						cout<<"Introduce el DNI del alumno que desea imprimir:"<<endl;
						cin>>dni;
						int indice = busca_alumno(alumno, na, dni);
							if(indice==-1){
								cout<<"Alumno no encontrado"<<endl;
							} else {
								imprimir_alumno(alumno, indice);
							}
					} else {
						cout<<"No hay alumnos creados, crea uno nuevo"<<endl;
					}
				}break;
				
				case 4:{ //Imprimir datos de todo los alumnos
					if(na>0){
						imprimir_todos(alumno, na);
					} else {
						cout<<"No hay alumnos creados, crea uno nuevo"<<endl;
					}
				}break;

				case 5:{ //Eliminar un alumno
					if(na>0){
						string dni;
							cout<<"Introduce el DNI del alumno que desea eliminar:"<<endl;						
							cin>>dni;
						int indice = busca_alumno(alumno, na, dni);
							if(indice==-1){
								cout<<"Alumno no encontrado"<<endl;
							} else {
								alumno[indice]=alumno[na-1];
								na--;
								cout<<"Alumno borrado con exito."<<endl;
							}
					} else {
						cout<<"No hay alumnos creados, crea uno nuevo"<<endl;
					}
				}break;

				case 6: {
						guarda(argv[1], alumno, na); //guardar a fichero el vector
						system("pause");
						exit(0);
				}break;
			};
		} while (opcion<7);


    
}


