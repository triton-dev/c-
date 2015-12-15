#include"bmi.h"

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
	double magassag;
	cout << "Kérem a magasságot egész centiméterben: ";
	cin >> magassag;
	double tomeg;
	cout << "Kérem a tömeget egész kilogramban: ";
	cin >> tomeg;
	string s;
	getline(cin, s);
	
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
