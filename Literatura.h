#include <iostream>
#include <string>
#include "ObrasArte.h"

using namespace std;

#ifndef LITERATURA_H
#define LITERATURA_H
class Literatura: public ObrasArte{
    protected:
        string GeneroLiterario;
        string Epoca;
    public:
        Literatura(string,string,string,string,string,string);
        Literatura();
        string getGeneroLiterario();
        void setGeneroLiterario(string);

        string getEpoca();
        void setEpoca(string);

};
#endif
