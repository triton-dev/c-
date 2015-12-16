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

void BMI::setMagassag(int m) {
	magassag = m;
}

void BMI::setTomeg(int t) {
	tomeg = t;
}

string BMI::getNev() {
	return nev;
}

string BMI::getDatum() {
	return datum;
}

int BMI::getMagassag() {
	return magassag;
}

int BMI::getTomeg() {
	return tomeg;
}

double BMI::getOrigBmi(double mag, double tom) {
	mag /= 100.0;
	double bmi = (tom)/((mag*mag)*1.0);
	return bmi;
}

double BMI::getModBmi(double mag, double tom) {
	mag /= 100.0;
	double bmi = (Q_TOM*tom)/(pow(mag, E_MAG)*1.0);
	return bmi;
}
                                 
string BMI::getSzoveges(double bmi) {
    if(bmi < 16) {return "\"súlyos soványság\"";}
    if(bmi >= 16 && bmi <= 16.99) {return "\"mérsékelt soványság\"";}
    if(bmi > 16.99 && bmi <= 18.49) {return "\"enyhe soványság\"";}
    if(bmi > 18.49 && bmi <= 24.99) {return "\"normális testsúly\"";}
    if(bmi > 25 && bmi <= 29.99) {return "\"túlsúlyos\"";}
    if(bmi > 30 && bmi <= 34.99) {return "\"1. fokú elhízás\"";}
    if(bmi > 35 && bmi <= 39.99) {return "\"2. fokú elhízás\"";}
    if(bmi >= 40) {return "\"3. fokú (súlyos) elhízás\"";}
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

void BMI::magassaghozTomeg(double mag) {
    double m = mag/100.0;
    double t1 = (NORM_AH*pow(m,E_MAG)) / Q_TOM;
    double t2 = (NORM_FH*pow(m,E_MAG)) / Q_TOM;
    double t3 = NORM_AH*m*m;
    double t4 = NORM_FH*m*m;
    cout << "A megadott magassághoz (" << mag << ")[cm] az ideális tömeg ";
    cout << "BMI-mod: " << t1 << " - " << t2;
    cout << " vagy BMI-orig: " << t3 << " - " << t4 << " [kg] közötti." << endl;
}

void BMI::tomeghezMagassag(double tom) {
    double m2 = 100*pow((Q_TOM*tom)/NORM_AH, RE_MAG);
    double m1 = 100*pow((Q_TOM*tom)/NORM_FH, RE_MAG);
    double m4 = 100*pow(tom/NORM_AH, .5);
    double m3 = 100*pow(tom/NORM_FH, .5);
    cout << "A megadott tömeghez (" << tom << ")[kg] az ideális magasság ";
    cout << "BMI-mod: " << m1 << " - " << m2;
    cout << " vagy BMI-orig: " << m3 << " - " << m4 << " [cm] közötti." << endl;
}
