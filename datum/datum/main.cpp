#include <iostream>
#include <Datum.h>

using namespace std;

int main()
{
	Datum d;
	d = Datum(2015,12,06);
	cout << d.getEv() <<"."<<d.getHonap()<<"."<< d.getNap() << endl;

	d = Datum(2015,12,16);
	cout << d.getEv() <<"."<<d.getHonap()<<"."<< d.getNap() << endl;

	d = Datum(2015,06,26);
	cout << d.getEv() <<"."<<d.getHonap()<<"."<< d.getNap() << endl;

	d = Datum(2015,01,06);
	cout << d.getEv() <<"."<<d.getHonap()<<"."<< d.getNap() << endl;

	d = Datum(20160229);
	cout << d.getEv() <<"."<<d.getHonap()<<"."<< d.getNap() << endl;
	cout << "Jó dátum? (0 nem, 1 igen): " << d.joDatum(d) << endl;
	cout << d.toString() << endl;

	d = Datum(2015,02,29);
	cout << d.getEv() <<"."<<d.getHonap()<<"."<< d.getNap() << endl;
	cout << "Jó dátum? (0 nem, 1 igen): " << d.joDatum(d) << endl;
	cout << d.toString() << endl;
// return main()
    return 0;
}
