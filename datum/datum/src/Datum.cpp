#include <string>
#include "Datum.h"

using namespace std;

Datum::Datum() {
	//ctor
}
Datum::~Datum() {
	//dtor
}
Datum::Datum(int e, int h, int n) {
	ev = e;
	honap = h;
	nap = n;
}
Datum::Datum(int ehn) {
/*
* be: 20150801
*
* ki év: 2015
* ki hónap: 08
* ki nap  : 01
*/
	if (to_string(ehn).length() == 8) {
		int e = ehn/10000;
		ehn = ehn - (e*10000);
		int h = ehn/100;
		int n = ehn - (h*100);
		ev = e;
		honap = h;
		nap = n;
	}
	else {
		ev = 0;
		honap = 0;
		nap = 0;
	}
}
/*
Datum::Datum(char* ehn) {

}
*/

int Datum::getIntEv() {
	return ev;
}

int Datum::getIntHonap() {
	return honap;
}

int Datum::getIntNap() {
	return nap;
}

bool Datum::joDatum(Datum ehn) {
	bool szokoev = ((getIntEv() % 4 == 0) &&
	                (getIntEv() % 100 != 0) ||
	                (getIntEv() % 400 == 0));
	int h = getIntHonap();
	//          0 j  f  m  á  m  j  j  a  s  o  n  d
	int hn[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int n = getIntNap();
	// Nap<1?
	if(n < 1) {
		return false;
	}
	// Hónap 1-12 között?
	if(h<1 || h>12) {
		return false;
	}
	// Ha nem szökőév nap < hónap napjai?
	if (!szokoev && n > hn[h]){
		return false;
	}
	// Ha szökőév és hónap = 2 akkor is jó?
	if(szokoev) {
		hn[2] = 29;
	}
	if(n > hn[h]) {
		return false;
	}
	// Biztos hogy jó...
	return true;
}

string Datum::getEv() {
	return to_string(ev);
}

string Datum::getHonap() {
	string h;
	if(honap < 10) {
		h= "0"+to_string(honap);
	}
	else {
		h = to_string(honap);
	}
	return h;
}

string Datum::getNap() {
	string n;
	if(nap < 10) {
		n = "0"+to_string(nap);
	}
	else {
		n = to_string(nap);
	}
	return n;
}

string Datum::toString() {
	return "'"+getEv()+getHonap()+getNap()+"'";
}
