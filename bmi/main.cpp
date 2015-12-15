#include"bmi.h"

#include<iostream>
#include<string>
#include<locale>

using namespace std;

void start() {
    string nev;
	nev = "gyuri";
	string datum;
	datum ="20151213";
	double magassag;
	magassag = 195;
	double tomeg;
	tomeg = 140;
	
	BMI b = BMI();
	b.setNev(nev);
	b.setDatum(datum);
	b.setMagassag(magassag);
	b.setTomeg(tomeg);
	
	b.print();
    
    BMI::magassaghozTomeg(190);
    BMI::tomeghezMagassag(100);
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
