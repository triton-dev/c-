#include <iostream>
#include <string>

#include "Dolgozo.h"

using namespace std;

Dolgozo::Dolgozo(string n, string f) {
	teljnev = n;
	felhnev = f;
	jog = 0;
	aktiv = true;
}

void Dolgozo::setTeljesNev(string n){
	teljnev = n;
};

void Dolgozo::setFelhasznaloNev(string f){
	felhnev = f;
};

void Dolgozo::setJelszo(string j){
	jelszo = j;
};

void Dolgozo::setJog(int j){
	jog = j;
};

string Dolgozo::getTeljesNev(){
	return teljnev;
};

string Dolgozo::getFelhasznaloNev(){
	return felhnev;
};

string Dolgozo::b2s(bool j) {
	if(j) {
		return "igen";
	}
	return "nem";
}

bool Dolgozo::joJelszo(string j){
	if(j == jelszo){
		return true;
	}
	return false;
};

void Dolgozo::swapStatusz(){
	aktiv = !aktiv;
}

void Dolgozo::print() {
	cout << "+--------------------------------------" << endl;
	cout << "|-----     Felhasználó adatai     -----" << endl;
	cout << "|" << endl;
	cout << "| Teljes név______: " << teljnev << endl;
	cout << "| Felhasználó név_: " << felhnev << endl;
	cout << "| Jog_____________: " << jog << endl;
	cout << "| Aktív___________: " << b2s(aktiv) << endl;
	cout << "|" << endl;
	cout << "|----- Felhasználó adatainak vége -----" << endl;
	cout << "+--------------------------------------" << endl;

};

Dolgozo::~Dolgozo()
{
	//dtor
}
