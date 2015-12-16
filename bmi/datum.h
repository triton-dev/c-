#ifndef DATUM_H
#define DATUM_H

#include <string>


class Datum
{
	public:
		Datum(int,int,int);
		Datum(int);
		//Datum(char* d);
		Datum();
		virtual ~Datum();
		std::string getEv();
		std::string getHonap();
		std::string getNap();
		int getIntEv();
		int getIntHonap();
		int getIntNap();
		bool joDatum(Datum d);
		std::string toString();
	protected:
	private:
		int ev;
		int honap;
		int nap;

};

#endif // DATUM_H
