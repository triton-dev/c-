#include"bmi.h"
#include"datum.h"

#include<iostream>
#include<string>
#include<locale>


using namespace std;

void start() {
	
	const int I_DATUM = 10000101;
	const string S_DATUM = "10000101"; 
	double magassag;
	string input;
	double tomeg;
	string nev;
	string datum;
    bool ok;
    
    cout << "Kérem a nevet: ";
    getline(cin, nev);
	
	cout << "Kérem a dátumot [ééééhhnn] formátumban: ";
	getline(cin, datum);
	
	int dt;
	try {
		dt = stoi(datum);
	}
	catch (...) {
		cout << "Ez nem dátum! Helyettesítve ezzel: "<< S_DATUM  << endl;
		dt = I_DATUM;
		datum = S_DATUM;
	}
	
	Datum d = Datum(dt);	
	if(!d.joDatum(d)) {
		cout << "Rossz a dátum: "<< datum << " helyettesítve ezzel: "<< S_DATUM << endl;
		datum = S_DATUM;
	}
	
	
	do {
		ok = true;
		cout << "Kérem a magasságot egész centiméterben: ";
		getline(cin, input); //cin >> magassag;
		try {
			magassag = stol(input);
		}
		catch (...) {
			cout << "Ez nem szám volt!" << endl;
			ok = false;
		}
		if (ok && (magassag <= 0 || magassag >= 400)) {
			cout << "Határértéken kívüli magasság! [0-400 cm]" << endl;
			ok = false;
		}
	} while (!ok);
	
	do {
		ok = true;
		cout << "Kérem a tömeget egész kilogramban: ";
		getline(cin, input); //	cin >> tomeg;
		try {
			tomeg = stol(input);
		}
		catch (...) {
			cout << "Ez nem szám volt!" << endl;
			ok = false;
		}
		if (ok && (tomeg <=0 || tomeg > 600)) {
			cout << "Határértéken kívüli testtömeg! [0-600 kg]" << endl;
			ok = false;
		}
	} while (!ok);

	// buffer alaphelyzetre:
	// getline(cin, a);
	
	BMI b = BMI();
	b.setNev(nev);
	b.setDatum(datum);
	b.setMagassag(magassag);
	b.setTomeg(tomeg);
	
	b.print();
    
    BMI::magassaghozTomeg(magassag);
    BMI::tomeghezMagassag(tomeg);
    
}


bool ujra() {
    string input;
    cout << "Új számítás? [i/n]";
    getline(cin,input);
    if (input[0] == 'I' || input[0] == 'i') {return true;}
    return false;
    
}

int main() {
	
    setlocale(LC_ALL,"");
    
    do {
		start();	
	} while(ujra());
	
    cout << endl;
    
    
return 0;
}
