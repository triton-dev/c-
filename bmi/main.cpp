#include"bmi.h"
#include"datum.h"

#include<iostream>
#include<string>
#include<locale>

using namespace std;

void start() {
    string nev;
    cout << "Kérem a nevet: ";
    getline(cin, nev);
	string datum;
	cout << "Kérem a dátumot: ";
	getline(cin, datum);
	int dt = stoi(datum);
	Datum d = Datum(dt);
	
	if(!d.joDatum(d)) {
		cout << "Rossz a dátum: "<<datum<< " helyettesítve: 19000101-gyel "<<endl;
		datum = "19000101";
	}
	double magassag;
	string a;
	cout << "Kérem a magasságot egész centiméterben: ";
	getline(cin, a); //cin >> magassag;
	magassag = stol(a);
	double tomeg;
	cout << "Kérem a tömeget egész kilogramban: ";
  getline(cin, a); //	cin >> tomeg;
	tomeg = stol(a);

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


void stop() {
    string a;
    cout << "Nyomjon [Enter]-t...";
    getline(cin, a);
    system("clear");
}

int main() {
	
    setlocale(LC_ALL,"");
    
    start();	
	
    stop();
    
return 0;
}
