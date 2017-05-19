#include "Literatura.h"

Literatura::Literatura(string GeneroLiterario,string Epoca){
    this->GeneroLiterario=GeneroLiterario;
    this->Epoca=Epoca;
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
