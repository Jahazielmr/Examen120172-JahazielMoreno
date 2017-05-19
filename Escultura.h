#include <iostream>
#include <string>
#include "ObrasArte.h"

using namespace std;

#ifndef ESCULTURA_H
#define ESCULTURA_H
class Escultura: public ObrasArte{
    protected:
        double Peso;
        string Material;
    public:
        Escultura(string,string,string,string,double,string);
        Escultura();

        double getPeso();
        void setPeso(double);

        string getMaterial();
        void setMaterial(string);

};

#endif
