#ifndef PINTURA_H
#define PINTURA_H

#include <iostream>
#include <string>
#include "ObrasArte.h"

using namespace std;

class Pintura: public ObrasArte{
    protected:
        string MaterialLienzo;
        string Tecnica;
    public:
        Pintura(string,string,string,string,string,string);
        Pintura();

        string getMaterialLienzo();
        void setMaterialLienzo(string);

        string getTecnica();
        void setTecnica(string);

};
#endif
