#include <iostream>
#include <string>
#include "ObrasArte.h"
#include <vector>
#include "Arquitectura.h"
#include "Escultura.h"
#include "Literatura.h"
#include "Pintura.h"
#include <stdlib.>

using namespace std;
string hexadecimal(vector<string>);

int main(){

	vector <string> hexa;
	vector <ObrasArte> Museum;
	vector <ObrasArte> Transferido;
		
	char resp ='s';


        int option;
        while(resp=='s'||resp=='S'){
                cout <<"Menu"<<endl;
                cout <<"1-Agregar Obras de Arte"<<endl;
                cout <<"2-Listar Obras de Arte/Reporte"<<endl;
                cout <<"3-Transferir a otro museo"<<endl;
                cout <<"4-Busqueda"<<endl;
		cout <<"5-Eliminar obra de Arte"<<endl;

                cin>> option;

                switch (option){
                        case 1:{
				int op;
                                cout<<"1-Literatura."<<endl;
                                cout<<"2-Escultura"<<endl;
                                cout<<"3-Pinturas"<<endl;
				cout<<"4-Diseño de Arquitectura"<<endl;
                                cin>>op;
                                                
                                
                                switch(op){
                                        case 1:{
                                               //agregar Literatura
                                                string nombre, id, artista, Fecha, genero, epoca;
                                                        
                                                cout<<"Ingrese ID de la obra: "<<endl;                                            
                                                cin>>id;
                                                cout<<"Ingrese nombre de la obra: "<<endl;
                                                cin>>nombre;
                                                cout<<"Ingrese artista de la Obra: "<<endl;
                                                cin>>artista;
                                                cout<<"Ingrese Fecha de ingreso de la obra: "<<endl;
                                                cin>>Fecha;
                                                cout<<"Ingrese el Genero de la Obra"<<endl;
                                                cin>>genero;
                                                cout<<"Ingrese Epoca de la Obra"<<endl;
                                                cin>>epoca;
                                                
                                                Literatura literatura(id,nombre,artista,Fecha,genero,epoca);
                                                Museum.push_back(literatura);

                                        	break;
                                        }
					case 2:{
						//agregar escultura
						string nombre, id, artista, Fecha, material;
						int peso;
                                                        
                                                cout<<"Ingrese ID de la Escultura: "<<endl;                                            
                                                cin>>id;
                                                cout<<"Ingrese nombre de la Escultura: "<<endl;
                                                cin>>nombre;
                                                cout<<"Ingrese artista de la Escultura: "<<endl;
                                                cin>>artista;
                                                cout<<"Ingrese Fecha de ingreso de la Escultura: "<<endl;
                                                cin>>Fecha;
                                                cout<<"Ingrese el peso de la Escultura"<<endl;
                                                cin>>peso;
                                                cout<<"Ingrese material de la Escultura"<<endl;
                                                cin>>material;

                                                Escultura escultura(id,nombre,artista,Fecha,peso,material);
                                                Museum.push_back(escultura);
										
			
						
					break;
					}

					case 3:{
						// Pintura
						string nombre, id, artista, Fecha, materialLienzo, tecnica;
                                                        
                                                cout<<"Ingrese ID de la obra: "<<endl;                                            
                                                cin>>id;
                                                cout<<"Ingrese nombre de la obra: "<<endl;
                                                cin>>nombre;
                                                cout<<"Ingrese artista de la Obra: "<<endl;
                                                cin>>artista;
                                                cout<<"Ingrese Fecha de ingreso de la obra: "<<endl;
                                                cin>>Fecha;
                                                cout<<"Ingrese el material del lienzo de la Obra"<<endl;
                                                cin>>materialLienzo;
                                                cout<<"Ingrese la tecnica de la obra"<<endl;
                                                cin>>tecnica;

                                                Pintura pintura(id,nombre,artista,Fecha,materialLienzo,tecnica);
                                                Museum.push_back(pintura);
												
						
					break;
					}
					
					case 4:{
						//Agregar diseños arquitectonicos
						
					 	string nombre, id, artista, Fecha, tipo_terreno;
                                                
                                                cout<<"Ingrese ID de la obra: "<<endl;                                            
                                                cin>>id;
                                                cout<<"Ingrese nombre de la obra: "<<endl;
                                                cin>>nombre;
                                                cout<<"Ingrese artista de la Obra: "<<endl;
                                                cin>>artista;
                                                cout<<"Ingrese Fecha de ingreso de la obra: "<<endl;
                                                cin>>Fecha;
                                                cout<<"Ingrese el tipo de terreno de la Obra"<<endl;
                                                cin>>tipo_terreno;

                                                Arquitectura arquitectura(id,nombre,artista,Fecha,tipo_terreno);
                                                Museum.push_back(arquitectura);		 	
						
					break;
					}
	
					cout <<"Agrego Exitosamente"<<endl;	
				
			
			   }
				break;
			}
	
			case 2:{
				//listar obras de arte	Reporte	
			
				cout<<"Obras de arte de Museum:  "<<endl;
					
				for(int i=0;i<Museum.size();i++){
                           		cout<< Museum[i].getNombre()<<", "<<Museum[i].getID()<<", "<<Museum[i].getArtista()<<", "<<Museum[i].getFecha()<<endl;
					cout<<endl;
                                }
				
				cout<<"Obras de arte Transferidas"<<endl;
					
				 for(int i=0;i<Transferido.size();i++){
                                        cout<< Transferido[i].getNombre()<<", "<<Transferido[i].getID()<<", "<<Transferido[i].getArtista()<<", "<<Transferido[i].getFecha()<<endl;
					cout<<endl;
                                }

				
			break;
			}

			case 3:{
				// transeferir
 			               	int n;
                                        cout<< "Mire las listas y seleccione la posicion que desea transferir"<<endl;
                                        cin>>n;
					
					Transferido.push_back(Museum[n]);
					
                                        Museum.erase(Museum.begin()+n);
					
			
			break;
			}

			case 4:{
				//busqueda
				string nombre;
				cout <<"Ingrese el nombre del artista para buscar sus obras"<<endl;
				cin>> nombre;
				
				for(int i = 0; i<Museum.size();i++){

					if (nombre==Museum[i].getArtista()){
							cout<<Museum[i].getNombre()<<endl;

					}
					cout <<endl;	
				}		
				



	
			break;
			}
			
			case 5:{
				//eliminar
				

                                        int n;
                                        cout<< "Mire las listas y seleccione la posicion que desea desaparecer de la faz de la tierra"<<endl;
                                        cin>>n;

                                        Museum.erase(Museum.begin()+n);
				
							
			break;
			}
		}
		cout<<"Desea continuar? S o N"<<endl;
            	cin >> resp;

            }
            

        cout<<"Bye";




     
     return 0;
}

string hexadecimal(vector<ObrasArte> a){
	int r;
	string acum;
	bool entrar=true;
	vector <string> pauta;
	pauta[0]="1";
	pauta[1]="2";
	pauta[2]="3";
	pauta[3]="4";
	pauta[4]="5";
	pauta[5]="6";
	pauta[6]="7";
	pauta[7]="8";
	pauta[8]="9";
	pauta[9]="A";
	pauta[10]="B";
	pauta[11]="C";
        pauta[12]="D";
        pauta[13]="E";
        pauta[14]="F";


	for(int i=0; i<6;i++){
		r=rand()%14;
		acum += pauta[1];
	}

	for(int j=0; j<a.size();j++){
		
		if(acum==a.getID){
			bool=false;		
			
		}
		
	}
	
}

































