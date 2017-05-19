#include "ObrasArte.h"
#include <iostream>
#include <string>


ObrasArte::ObrasArte(string ID,string Nombre,string Artista,string Fecha){
    this->ID=ID;
    this->Nombre=Nombre;
    this->Artista=Artista;
    this->Fecha=Fecha;
}
ObrasArte::ObrasArte(){

}

void ObrasArte::setID(string ID){
   this-> ID=ID;
}
string ObrasArte::getID(){
   return ID;
}

void ObrasArte::setNombre(string Nombre){
   this-> Nombre=Nombre;
}
string ObrasArte::getNombre(){
   return Nombre;
}

void ObrasArte::setArtista(string Artista){
   this-> Artista=Artista;
}
string ObrasArte::getArtista(){
   return Artista;
}

void ObrasArte::setFecha(string Fecha){
   this-> Fecha=Fecha;
}
string ObrasArte::getFecha(){
   return Fecha;
}
