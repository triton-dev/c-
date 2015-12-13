#include "bmi.h"

#include<iostream>
#include<string>
#include<cmath>


BMI::BMI() {

}

void BMI::setNev(string n) {
	nev = n;
}

void BMI::setDatum(string d) {
	datum = d;
}

void BMI::setMagassag(double m) {
	magassag = m;
}

void BMI::setTomeg(double t) {
	tomeg = t;
}

string BMI::getNev() {
	return nev;
}

string BMI::getDatum() {
	return datum;
}

double BMI::getMagassag() {
	return magassag;
}

double BMI::getTomeg() {
	return tomeg;
}

double BMI::getOrigBmi(double mag, double tom) {
	mag /= 100.0;
	double bmi = (tom)/((mag*mag)*1.0);
	return bmi;
}

double BMI::getModBmi(double mag, double tom) {
	mag /= 100.0;
	double bmi = (1.3*tom)/(pow(mag, 2.5)*1.0);
	return bmi;
}

string BMI::getSzoveges(double bmi) {
	return "Még nincs értékelve";
};

void BMI::print() {
	cout << getNev() << "\t";
	cout << getDatum() << "\t";
	cout << getModBmi(getMagassag(), getTomeg()) << "\t";
	cout << getSzoveges(getModBmi(getMagassag(), getTomeg())) << "\t";
	cout << getOrigBmi(getMagassag(), getTomeg()) << "\t";
	cout << getSzoveges(getOrigBmi(getMagassag(), getTomeg())) << "\t";
	cout << endl;
}


