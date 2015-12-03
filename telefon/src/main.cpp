#include <iostream>
#include <string>
#include "include/dolgozo.h"


using namespace std;

int main () {
    Dolgozo d = Dolgozo("Gizi", "Gizuska");
    
    d.setJog(10);
    d.setJelszo("piros alma");
    
    d.print();
   
   


// main vége
return 0;
}