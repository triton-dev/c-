#include <string>
#include <iostream>
#include <vector>

#include "Dolgozo.h"

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

	for(int i=0; i < dolg.size(); i++) {
		dolg.at(i).print();
	}




//main vége
    return EXIT_SUCCESS;
}
