#include "Literatura.h"
#include "ObrasArte.h"
#include <string>
#include <iostream>

using namespace std;

Literatura::Literatura(string ID,string Nombre,string Artista,string Fecha,string GeneroLiterario,string Epoca){
    this->GeneroLiterario=GeneroLiterario;
    this->Epoca=Epoca;
    this->ID=ID;
    this->Nombre=Nombre;
    this->Artista=Artista;
    this->Fecha=Fecha;


}
Literatura::Literatura(){

}void Literatura::setGeneroLiterario(string GeneroLiterario){
   this-> GeneroLiterario=GeneroLiterario;
}
string Literatura::getGeneroLiterario(){
   return GeneroLiterario;
}
void Literatura::setEpoca(string Epoca){
   this-> Epoca=Epoca;
}
string Literatura::getEpoca(){
   return Epoca;
}
