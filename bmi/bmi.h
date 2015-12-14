#ifndef BMI_H
#define BMI_H

#include<string>

using namespace std;

const double NORM_AH = 18.5;
const double NORM_FH = 24.99;
const double Q_TOM = 1.3;
const double E_MAG = 2.5;
const double RE_MAG = 1/E_MAG;

class BMI {
	private:
		string nev;
		string datum;
		int magassag;
		int tomeg;       
	
	public:
	// konstruktor
		BMI();
	// setter
		void setNev(string);
		void setDatum(string);
		void setMagassag(int);
		void setTomeg(int);
	// getter	
		string getNev();
		string getDatum();
		int getMagassag();
		int getTomeg();
		double getOrigBmi(double, double);
		double getModBmi(double, double);
		string getSzoveges(double);
		void print();
    // magassághoz ideális tömeg és tömeghez ideális magasság    
        static void magassaghozTomeg(double);
        static void tomeghezMagassag(double);
        	
};



#endif
