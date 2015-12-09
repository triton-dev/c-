#include "ember.h"

#include <iostream>
#include <locale>
#include <vector>

using namespace std;

const int MAXDARAB = 10;
const int MINDARAB = 1;


vector <Ember> E;
string nev;
int azonosito;
double atlagfizu;
int munkaviszony;
int leghosszab;


int hanyember() {
	int e = 0;
	string s;
	while (e < MINDARAB || e > MAXDARAB) {
		cout << "Kérem az emberek számát (max 10): ";
		cin >> e; getline(cin, s);
	}
	return e;
}

void beolvasEmber(int i) {
	int db = 1;
	string s;
	while (db <= i) {
		Ember e = Ember();
		cout << db << ". Név: ";
		getline(cin,nev);
		cout << "Azonosító: ";
		cin>>azonosito; getline(cin, s);
		cout << "Átlagfizetés: ";
		cin >> atlagfizu; getline(cin, s);
		cout << "Munkaviszony (év): ";
		cin >> munkaviszony; getline(cin, s);
		cout << "Leghosszab munkaviszony (év): ";
		cin >> leghosszab;getline(cin, s);
		
		e.setNev(nev);
		e.setAzonosito(azonosito);
		e.setAtlagfizetes(atlagfizu);
		e.setTeljesMunkaviszony(munkaviszony);
		e.setLegFolytMunka(leghosszab);
		
		E.push_back(e);
				
		db++;
	}
}

void kiirEmber() {
	Ember::printFejlec();
	for(auto it=E.begin(); it!=E.end(); it++) {
		it->print();
	}
}

int main() {
    setlocale(LC_ALL,"");
    
    int db = hanyember();
    beolvasEmber(db);
    kiirEmber();    

return 0;
}
