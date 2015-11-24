// Matek fejléc
#ifndef _MATEK_
#define _MATEK_

#include <cmath>


const double PI = 3.1415927;

// kör területe
double t_kor (double r) {
	return r*r*PI;
}

// kör kerülete
double k_kor (double r) {
	return 2*r*PI;
}

// négyzet területe
double t_negyzet (double a) {
	return a*a;
}

// négyzet kerülete
double k_negyzet (double a) {
	return 4*a;
}

// téglalap területe
double t_teglalap (double a, double b) {
	return a*b;
}

// téglalap kerülete
double k_teglalap (double a, double b) {
	return 2*(a+b);
}

// háromszög területe
double t_haromszog(double a, double b, double c) {
	double s = (a+b+c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

// háromszög kerülete
double k_haromszog(double a, double b, double c) {
	return a + b + c;
}

// trapéz területe
double t_trapez(double a, double c, double m) {
	return ((a+c)/2)*m;
}

// trepéz kerülete
double k_trapez(double a, double b, double c, double d) {
	return a+b+c+d;
}

// paralelogramma területe
double t_para (double a, double m) {
	return a*m;
}

// paralelogramma kerülete
double k_para (double a, double b) {
	return 2*(a+b);
}

// deltoid területe
double t_deltoid (double e, double f) {
	return (e*f)/2;
}

// deltoid kerülete
double k_deltoid (double a, double b) {
	return 2*(a+b);
}

// rombusz területe
double t_rombusz (double e, double f, int v=1) {
	switch (v) {
		case 1:
			return (e*f)/2;
			break;
		case 0:
		default:
			return e*f;
			break;		
	}
}

// rombusz kerülete
double k_rombusz (double a) {
	return 4*a;
}

#endif
