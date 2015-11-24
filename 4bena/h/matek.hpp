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
double t_haromszog(double a, double m) {
    return (a*m)/2;
}
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

// másodfokú egyenlet megoldása
double * masodfoku(double a, double b, double c) {
    double res[3];
    res[0], res[1], res[2] = 0;
    double d = b*b-4*a*c;
    if (d < 0) {
        res[0] = 0;
        return res;
    };
    
    if (d == 0) {
        res[0] = 1;
        res[1] = -b/(2*a);
        return res;
    }
    
    if (d > 0) {
        res[0] = 2;
        res[1] = (-b)*(-sqrt(d))/(2*a);
        res[2] = (-b)*(sqrt(d))/(2*a);
        return res;
    }
}

#endif
