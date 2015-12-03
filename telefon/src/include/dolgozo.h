#include <string>

#ifndef DOLGOZO_H
#define DOLGOZO_H

using namespace std;

/*
Dolgozó osztály
*/

class Dolgozo {

    private:
        string teljesNev;
        string felhasznalonev;
        string jelszo;
        int jog;
    public :
        Dolgozo(string, string);
        void setTeljesNev(string);
        void setFelhasznalonev(string);
        void setJelszo(string);
        void setJog(int);
        string getTeljesNev();
        string getFelhasznaloNev();
        bool joJelszo(string);
        int getJog();
        void print();
   
};

#endif