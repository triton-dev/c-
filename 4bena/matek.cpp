#include "h/matek.hpp"
#include <iostream>
#include <cmath>


using namespace std;


int main () {

	cout << "Kör területe r=5:\t"<< t_kor(5) << endl;
	cout << "Háromszög területe (3,4,5):\t" << t_haromszog(3,4,5) << endl;
	cout << "Rombusz e=3, f=5:\t" << t_rombusz(3,5) << endl;
	cout << "Rombusz a=3, m=5:\t" << t_rombusz(3,5,0) << endl;
    cout << "Háromszög területe (4,5):\t" << t_haromszog(4,5) << endl;
    cout << "Háromszög területe (3,4,5):\t" << t_haromszog(3,4,5) << endl;


// másodfokú megoldáshoz

	double a,b,c;
	cout << "===============================================\n";
	cout << "| 0-ra rendezett másodfokú egyenlet megoldása |\n";
	cout << "===============================================\n";
	cout << "Kérem az x^2 együtthatóját: ";
	cin >> a;
	cout << "Kérem x együthatóját: ";
	cin >> b;
	cout << "Kérem a konstanst: ";
	cin >> c;
	
	masodfoku(a,b,c);
    
	cout << "\n********************************************\n";

	double d[5] = {0,1,2,3,4};
	double *p[5];

	for(int i= 0; i<5; i++) {
		p[i] = &d[i];
		cout << &d[i] << " : " << d[i] << "->"  << *p[i] << endl;
	}
	cout << "---------------------------------------------\n";
	cout << p+0 << "\t" << *(p+0) << "\t" << *p[0] << endl;   
	cout << p+1 << "\t" << *(p+1) << "\t" << *p[1] << endl;   
	cout << p+2 << "\t" << *(p+2) << "\t" << *p[2] << endl;   
	cout << p+3 << "\t" << *(p+3) << "\t" << *p[3] << endl;   
	cout << p+4 << "\t" << *(p+4) << "\t" << *p[4] << endl;   
   
   
// main() visszatérés   
	return 0;
}
