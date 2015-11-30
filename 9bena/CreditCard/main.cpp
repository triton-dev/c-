#include <Money.cpp>
#include <iostream>

using namespace std;

int main() {

	Money m1 = Money(10,35);
	Money m2 = Money(4,71);

	m1.print();
	m2.print();
	(m1+m2).print();


return 0;
}
