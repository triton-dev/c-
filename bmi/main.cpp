#include"bmi.h"

#include<iostream>
#include<string>

using namespace std;

int main() {
	
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
	
	
	
return 0;
}
