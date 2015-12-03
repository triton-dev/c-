#ifndef DOLGOZO_H
#define DOLGOZO_H

#include <string>

class Dolgozo
{
	private:
		std::string teljnev;
		std::string felhnev;
		std::string jelszo;
		int jog;
		bool aktiv;
		std::string b2s(bool);

	public:
		Dolgozo(std::string, std::string);
		void setTeljesNev(std::string);
		void setFelhasznaloNev(std::string);
		void setJelszo(std::string);
		void setJog(int);
		void swapStatusz();
		std::string getTeljesNev();
		std::string getFelhasznaloNev();
		bool joJelszo(std::string);
		void print();
		virtual ~Dolgozo();


};

#endif // DOLGOZO_H
