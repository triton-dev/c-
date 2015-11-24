#include "h/matek.hpp"
#include <iostream>
#include <cmath>


using namespace std;


int main () {

	cout << "Kör területe r=4:\t"<< t_kor(4) << endl;
	cout << "Háromszög területe (3,4,5):\t" << t_haromszog(3,4,5) << endl;
	cout << "Rombusz e=3, f=5:\t" << t_rombusz(3,5) << endl;
	cout << "Rombusz e=3, f=5:\t" << t_rombusz(3,5,0) << endl;
	return 0;
}
