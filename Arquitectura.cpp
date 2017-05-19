#include "Arquitectura.h"

Arquitectura::Arquitectura(string ID,string Nombre,string Artista,string Fecha, string Tipo_Terreno){
	this->Tipo_Terreno=Tipo_Terreno;
	this->ID=ID;
    	this->Nombre=Nombre;
    	this->Artista=Artista;
    	this->Fecha=Fecha;

}
Arquitectura::Arquitectura(){

}void Arquitectura::setTipo_Terreno(string Tipo_Terreno){
   this-> Tipo_Terreno=Tipo_Terreno;
}
string Arquitectura::getTipo_Terreno(){
   return Tipo_Terreno;
}
