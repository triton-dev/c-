#ifndef BMI_H
#define BMI_H

#include<string>

using namespace std;

class BMI {
	private:
		string nev;
		string datum;
		double magassag;
		double tomeg;
	
	public:
	// konstruktor
		BMI();
	// setter
		void setNev(string);
		void setDatum(string);
		void setMagassag(double);
		void setTomeg(double);
	// getter	
		string getNev();
		string getDatum();
		double getMagassag();
		double getTomeg();
		double getOrigBmi(double, double);
		double getModBmi(double, double);
		string getSzoveges(double);
		void print();
		
	
	
};



#endif
