#include <string>
#include <iostream>

#include "ember.h"


using namespace std;

// Konstruktor
Ember::Ember() {
    // üres konstruktor
};

// Destruktor
Ember::~Ember() {
    // üres destruktor
}

void Ember::setNev(string n) {
    nev = n;
}

void Ember::setAzonosito(int a) {
    azonosito = a;
}

void Ember::setAtlagfizetes(double f) {
    atlagfizetes = f;
}

void Ember::setTeljesMunkaviszony(int m) {
    teljesMunkaviszony = m;
}

void Ember::setLegFolytMunka(int m) {
    legFolytMunka = m;
}

string Ember::getNev() {
    return nev;
}

int Ember::getAzonosito() {
    return azonosito;
}

double Ember::getAtlagfizetes() {
    return atlagfizetes;
}

int Ember::getTeljesMunkaviszony() {
    return teljesMunkaviszony;
}

int Ember::getLegFolytMunka() {
    return legFolytMunka;
}
double Ember::getNyugdij(double a_fiz, int legh_f_munkav) {
    double szazalek;
    double bonusz = 15;
    szazalek = (a_fiz < 80000 ? 60 : 50);
    szazalek = (legh_f_munkav > 15 ? szazalek + bonusz : szazalek);
    return (a_fiz*szazalek/100.0);
}

void Ember::print() {
    cout << getAzonosito() << "\t";
    cout << getNev() << "\t";
    cout << getNyugdij(getAtlagfizetes(), getLegFolytMunka());
    cout << endl;
}

void Ember::printFejlec() {
    cout << "azonosító" << "\t" << "név" << "\t" << "nyugdíj" << endl;
}

