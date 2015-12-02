#include <iostream>
#include <string>
#include "include/dolgozo.h"

using namespace std;


Dolgozo::Dolgozo(string tnev, string fnev) {
    teljesNev = tnev;
    felhasznalonev = fnev;
    jelszo = "init";
    jog = 0;
};

void setTeljesNev(string tnev) {
    teljesNev = tnev;
};

void setFelhasznalonev(string fnev) {
    felhasznalonev = fnev;
};

void setJelszo(string j) {
    jelszo = j;
};

void setJog(int j) {
    jog = j;
};

string getTeljesNev() {
    return teljesNev;
};

string getFelhasznalonev() {
    return felhasznalonev;
};

bool joJelszo(string j) {
    if (j == jelszo) {
        return true;
    }
    return false;
};

int getJog() {
    return jog;
};

void print() {
    cout << "------------------------------------------------------" << endl;
    cout << "Dolgozó neve: " << getTeljesNev() << endl;
    cout << "Felhasználó név: " << getFelhasznalonev() << endl;
    cout << "Jogosultság: " << getJog() << endl;
};
