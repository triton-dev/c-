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


#endif
