#include<iostream>
#include<cstdlib>
#include<ctime>
 
#include"lotto.h"
    using namespace std;
 string m;			// menu válasz a main-ben
void solo()
{    	int s;
	bool b;
	srand(time(NULL));
	cout << endl << "1 szelvény generálása..." << endl;
	for (int i = 1; i <= 5; i++) {
		do {
			b = true;
			s = rand() % 90 + 1;
			if (szam[s] == 0) {
				szam[s] = 1;
				b = false;
			}		} while (b);
			}
	cout << "1. szelvény: \t";
	for (int i = 1; i <= 90; i++) {
		if (szam[i] == 1) {
			cout << i << "\t";				}	}	cout << endl;		resetSzamok();};

 void full() {	int t[] = { 0, 0, 0, 0, 0, 0 };   	cout << endl << "18 szelvény generálása..." << endl;	int s;	bool b;	srand(time(NULL));	int i, j, o, M;	for (o = 1; o <= 17; o++) {		cout << o << ". szelvény: \t";		for (i = 1; i <= 5; i++) {
			do {				b = true;				s = rand() % 90 + 1;				if (szam[s] == 0) {					szam[s] = 1;					b = false;				}			} while (b);	    			t[i] = s;		}
		do {	    			b = false;			for (j = 1; j <= 4; j++) {				if (t[j] > t[j + 1]) {					M = t[j];					t[j] = t[j + 1];   					t[j + 1] = M;					b = true;				}			}			} while (b);			for (i = 1; i <= 5; i++) {			cout << t[i] << "\t";		}		cout << endl;   	}	cout << o << ". szelvény: \t";   	for (int i = 1; i <= 90; i++) {		if (szam[i] == 0) {			cout << i << "\t";		}	}   	cout << endl;   	resetSzamok();};

 void resetSzamok() {	for (int i = 1; i <= 90; i++) {		szam[i] = 0;
		} 	cout << endl;}  void printMenu() {	resetSzamok();	cout << endl;	while (true) {		int c;		cout << "+---------------------------------------------------------------+" << endl;		cout << "|                 Lottó számok... 5 a 90-ből                    |" << endl;		cout << "+---------------------------------------------------------------+" << endl;		cout << "|  1. 1 szelvény generálás.                                     |" << endl;		cout << "|   2. 18 szelvény generálása mind a 90 szám felhasználásával.  |" << endl;		cout << "|    0. Kilépés                                                 |" << endl;		cout << "|  Kérem válasszon [0 1 2]:                                     |" << endl;
		cout << "+---------------------------------------------------------------+" << endl;		cin >> c;		switch (c) {			case 1:
					solo();
					break;			case 2:
					full();
					break;			case 0:			getline(cin, m); 			cout << "Nyomj Entert...";			getline(cin, m);			exit(0);			break;		}	}}

int main() { 	printMenu();
	return 0;}


