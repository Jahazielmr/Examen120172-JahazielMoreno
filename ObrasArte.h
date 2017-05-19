#include <iostream>
#include <string>

using namespace std;

#ifndef OBRASARTE_H
#define OBRASARTE_H
class ObrasArte{
    protected:
        string ID;
        string Nombre;
        string Artista;
        string Fecha;
    public:
        ObrasArte(string,string,string,string);
        ObrasArte();
        string getID();
        void setID(string);

        string getNombre();
        void setNombre(string);

        string getArtista();
        void setArtista(string);

        string getFecha();
        void setFecha(string);

};
#endif
