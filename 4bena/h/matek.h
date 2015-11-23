// Matek fejléc
#include <cmath>


const double pi = 3.1415927;

// kör területe
double t_kor (double r) {
	return r*r*pi;
}

// kör kerülete
double k_kor (double r) {
	return 2*r*pi;
}

// négyzet területe
double t_negyzet (double a) {
	return a*a;
}

// négyzet kerülete
double k_negyzet (double a) {
	return a+a+a+a;
}

// téglalap területe
double t_teglalap (double a, double b) {
	return a*b;
}

// téglalap kerülete
double k_teglalap (double a, double b) {
	return a+a+b+b;
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
