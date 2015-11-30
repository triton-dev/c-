
#include "money.h"



int main() {

    Money p1 = Money(10,48);
    Money p2 = Money(3,73);
    
    p1.print();
    p2.print();
    Money sum = Money(0,0);
    sum.print();
    
    sum = (p1,p2);
    sum.print();


// int vége
return 0;
}