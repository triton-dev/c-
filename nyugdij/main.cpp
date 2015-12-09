#include "ember.h"

#include <iostream>
#include <locale>


int main() {
    setlocale(LC_ALL,"");
    
    Ember a = Ember();
    Ember b = Ember();
    
    Ember::printFejlec();
       
    a.setNev("Gyuri");
    a.setAzonosito(12345);
    a.setAtlagfizetes(150000);
    a.setTeljesMunkaviszony(25);
    a.setLegFolytMunka(25);
    a.print();
    
    b.setNev("Andi");
    b.setAzonosito(54321);
    b.setAtlagfizetes(50000);
    b.setTeljesMunkaviszony(25);
    b.setLegFolytMunka(25);
    b.print();


return 0;
}