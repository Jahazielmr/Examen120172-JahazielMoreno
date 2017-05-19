#include "Escultura.h"
#include "ObrasArte.h"
#include <string>
#include <iostream>

using namespace std;

Escultura::Escultura(string ID,string Nombre,string Artista,string Fecha, double Peso,string Material){
    	this->Peso=Peso;
    	this->Material=Material;
	this->ID=ID;
    	this->Nombre=Nombre;
   	this->Artista=Artista;
    	this->Fecha=Fecha;
	
}

Escultura::Escultura(){

}

void Escultura::setPeso(double Peso){
   this-> Peso=Peso;
}

double Escultura::getPeso(){
   return Peso;
}
void Escultura::setMaterial(string Material){
   this-> Material=Material;
}
string Escultura::getMaterial(){
   return Material;
}
