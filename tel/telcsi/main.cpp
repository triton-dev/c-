#include <string>
#include <iostream>
#include <vector>

#include <fstream>

#include "Dolgozo.h"
#include <crypt.h>
#include <ctime>


using namespace std;

vector<Dolgozo> dolg;




int main()
{

	//dolg.resize(10);


    Dolgozo d = Dolgozo ("Gőz Gizi","gizike");
    d.print();
    d.setJelszo("eperlevél");
    if(d.joJelszo("eperlevél")){
        cout << "\nJó a jelszó!\n";
    }
    else{
        cout << "\nNem jó a jelszó!\n";
    }
    d.setJelszo("eperlevel");
    if(d.joJelszo("eperlevél")){
        cout << "\nJó a jelszó!\n";
    }
    else{
        cout << "\nNem jó a jelszó!\n";
    }
    d.setJog(5);
    d.print();
    d.swapStatusz();
    d.print();
    d.swapStatusz();
    d.print();

	Dolgozo c = Dolgozo("Makk Marci","mikkamakka");
	Dolgozo b = Dolgozo("Pityke Panni","pankamanka");

	dolg.push_back(d);
	dolg.push_back(c);
	dolg.push_back(b);
    cout << "Dolgozo vektor mérete: " << dolg.size() << endl;
    cout << "Dolgozo vektor kapacitása: " << dolg.capacity() << endl;
    Dolgozo x = dolg[0];
    cout << x.getTeljesNev() << endl;
    x = dolg[1];
    cout << x.getTeljesNev() << endl;
	x = dolg.at(2);
	cout << x.getTeljesNev() << endl;
	dolg.at(2).setTeljesNev("Jankó Mankó");
	cout << dolg.at(2).getTeljesNev() << endl;

	for(unsigned int i=0; i < dolg.size(); i++) {
		dolg.at(i).print();
	}

	vector<Dolgozo>::iterator it;
	for(it=dolg.begin(); it !=dolg.end(); ++it) {
		it->setJelszo("almapaprika");

		it->print();
	}


	string password;
	string jsz = "gyurcika";
	password = crypt("gyurcika"," ");
	cout << "Password: " << password << " hossza:"<< password.length() << endl;
	char* pass;
	string encpass;
	cout << "Jelszó: ";
	cin >> pass;
	encpass = crypt(pass, " ");
	if (password == encpass) {
		cout << "Egyeznek\n";
	}
	else {
		cout << "NEM Egyeznek\n";
	}

	fstream fs;

	fs.open("/home/gyuri/c++/c-/tel/telcsi/naplo.txt",std::fstream::in | std::fstream::out | std::fstream::app);
	fs << "Napló (UNIX time): "<< "\t" << time(0) << endl;
	fs << d.getTeljesNev() << "\t" << d.getFelhasznaloNev() << password << endl;
	fs << c.getTeljesNev() << "\t" << c.getFelhasznaloNev() << encpass << endl;

	fs.close();





//main vége
    return EXIT_SUCCESS;
}
