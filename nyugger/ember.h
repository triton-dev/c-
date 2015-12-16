#ifndef EMBER_H
#define EMBER_H
#include <string>

using namespace std;


class Ember {
    public:
        // Konstruktor
        Ember();
        // set
        void setNev(string);
        void setAzonosito(int);
        void setAtlagfizetes(double);
        void setTeljesMunkaviszony(int);
        void setLegFolytMunka(int);
        // get
        string getNev();
        int getAzonosito();
        double getAtlagfizetes();
        int getTeljesMunkaviszony();
        int getLegFolytMunka();
        double getNyugdij(double, int);
        void print();
        static void printFejlec();
        // Destruktor
        virtual ~Ember();
        
    private:
        string nev;
        int azonosito;
        double atlagfizetes;
        int teljesMunkaviszony;
        int legFolytMunka;
        
        
};




#endif