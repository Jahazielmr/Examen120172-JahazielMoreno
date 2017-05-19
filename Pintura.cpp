#include "Pintura.h"
#include "ObrasArte.h"
#include <string>
#include <iostream>

using namespace std;

Pintura::Pintura(string ID,string Nombre,string Artista,string Fecha, string MaterialLienzo,string Tecnica):ObrasArte(ID,Nombre,Artista,Fecha){
    	this->MaterialLienzo=MaterialLienzo;
   	this->Tecnica=Tecnica;

}
Pintura::Pintura(){

}
void Pintura::setMaterialLienzo(string MaterialLienzo){
   this-> MaterialLienzo=MaterialLienzo;
}
string Pintura::getMaterialLienzo(){
   return MaterialLienzo;
}
void Pintura::setTecnica(string Tecnica){
   this-> Tecnica=Tecnica;
}
string Pintura::getTecnica(){
   return Tecnica;
}
