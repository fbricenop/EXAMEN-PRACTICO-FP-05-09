#include <iostream>
#include <string>
using namespace std;
int main(){
	string pais_nombre,el;
	int comparador=0,opcion;
	struct Atleta{
		string nombre;
		string pais;
		int medallas;

	};
	Atleta listaAtletas[6]={
		{"Carl Lewis", "EEUU", 10},
		{"Marit Bjorgen", "Noruega",15},
		{"Isabell Werth", "Alemania", 14},
		{"KATIE Ledecky", "EEUU",14},
		{"Michael Phelps", "EEUU",28},
		{"Birgit Fischer", "Alemania",12}	
	};
	do{
		cout<<"SELECCIONE SU OPCION: "<<endl;
		cout<<"1)VER LA LISTA DE ATLETAS"<<endl<<"2)MOSTRAR ATLETAS DE UN PAIS ESCRITO"<<endl<<"3)SALIR"<<endl;
		cin>>opcion;
		switch(opcion){
			case 1:{
				cout<<"LISTADO DE ATLETAS EN LA BASE DE DATOS"<<endl;
				for(int i=0; i<6;i++){
					cout<<listaAtletas[i].nombre<<endl;
				}
				break;
			}
			case 2:{
				cout<<"INGRESE EL NOMBRE DE UNO DE LOS SIGUIENTES PAISES:"<<endl;
				for(int i=0; i<6;i++){
					cout<<listaAtletas[i].pais<<endl;
				}
				cin>>pais_nombre;
				for(int i=0; i<6;i++){
					if(pais_nombre==listaAtletas[i].pais){
						if(listaAtletas[i].medallas>comparador){
							comparador=listaAtletas[i].medallas;
							el=listaAtletas[i].nombre;
						}
					}	
				}
				cout<<el<<": "<<comparador;	
				break;
			}
		}
	}while(opcion!=3);
	cout<<endl;
	return 0;
}