#include <iostream>

using namespace std;

const int MIN_MERES = 0;
const int MAX_MERES = 10000;

const int MIN_ERTEK = 0;
const int MAX_ERTEK = 3000;

const int FOK_1 = 800;

int darab = 0;

int ertek[MAX_MERES];

void beolvas_darab() {
	cout << "*****************" << endl;
	cout << "*     Árvíz     *" << endl;
	cout << "*****************" << endl;
	
	do {
		cout << "Kérem a mérések számát: ";
		cin >> darab;
	} while (darab < MIN_MERES || darab > MAX_MERES);
	
	if (darab == 0) {
		darab = 9;
		ertek[1] = 801;
		ertek[2] = 750;
		ertek[3] = 850;
		ertek[4] = 910;
		ertek[5] = 850;
		ertek[6] = 900;
		ertek[7] = 600;
		ertek[8] = 810;
		ertek[9] = 820;
	}
}

void felsorol_meres() {
	cout << "Mérések száma: " << darab << endl;
	for (int i=1; i<=darab; i++) {
		cout << i << ". mérés értéke: " << ertek[i] << endl;
	}
	cout << endl << "Árvizek grafikusan..." << endl;
	for (int i=1; i<=darab; i++) {
		if (ertek[i] > FOK_1) {
			cout << "+";
		}
		else {
			cout << "_";
		}
	}
	cout << endl;
}

void beolvas_meres(int db) {
	cout << db << " mérési adat beolvasása következik..." << endl;
	for(int i=1; i<=db; i++) {
		do {
			cout << i << ". adatot kérem: ";
			cin >> ertek[i];
		} while(ertek[i] < MIN_ERTEK || ertek[i] > MAX_ERTEK);
	}
}

int main() {
	
	beolvas_darab();
	if (darab != 0) {
		beolvas_meres(darab);
	}
	felsorol_meres();
	
	int arviz = 0;
	bool nem_szakasz = true;
	
	for (int i=1; i<=darab; i++) {
		if(ertek[i] > FOK_1 && nem_szakasz) {
			arviz = arviz+1;
			nem_szakasz = false;
		}
		if(ertek[i] <= FOK_1) {
			nem_szakasz = true;
		}
	}
	cout << "Szakaszok száma: " << arviz << endl;
	
	
	
	
// main visszatérés
	return 0;
}
