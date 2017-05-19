#include <iostream>
#include <string>
#include "ObrasArte.h"

using namespace std;

#ifndef ARQUITECTURA_H
#define ARQUITECTURA_H
class Arquitectura: public ObrasArte{
    protected:
        string Tipo_Terreno;
    public:
        Arquitectura(string,string,string,string,string);
        Arquitectura();
        string getTipo_Terreno();
        void setTipo_Terreno(string);

};
#endif


