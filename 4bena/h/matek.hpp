// Matek fejléc
#ifndef _MATEK_
#define _MATEK_

#include <cmath>
#include <iostream>

using namespace std;

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
void masodfoku(double a, double b, double c) {
	cout << "--------------------------------------------------\n";
	struct X12 {
		int r = 0;
		double d = 0;
		double x1 = 0;
		double x2 = 0;
	} x12;
	
    x12.d = (b*b)-(4*a*c);
        
    if (x12.d < 0) {
        cout << "Nincs megoldás "<< a <<"x^2 + "<<b<<"x + "<<c<< "egyenltenek."<< endl;
    };
    
    if (x12.d == 0) {
        x12.r = 1;
        x12.x1 = -b/(2*a);
        x12.x2 = x12.x1;
        
    }
    
    if (x12.d > 0) {
        x12.r = 2;
        x12.x1 = (-b-sqrt(x12.d))/(2*a);
        x12.x2 = (-b+sqrt(x12.d))/(2*a);
        ;
    }
    cout.precision(12);
    cout << a <<"x^2 + "<< b <<"x + " << c << " = 0" << endl;
    cout << "Megoldások száma: " << x12.r << endl;
    cout << "Diszkrimináns:    " << x12.d << endl;
    cout << "x1 = "  << x12.x1 << endl;
    cout << "x2 = "  << x12.x2 << endl;
    cout << "--------------------------------------------------\n";
}

#endif
