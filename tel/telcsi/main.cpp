#include<string>
#include<iostream>


#include "Dolgozo.h"

using namespace std;

int main()
{

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

//main vége
    return 0;
}
