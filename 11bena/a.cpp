#include<iostream>

using namespace std;

int main() {

	int* p = 0;
	int  i = 10;
	int j =20;
	p = &i;

	int& k = i;
	


	cout << "i értéke: " << i << endl;
	cout << "i címe: " << p << "i &i cime: " << &i << endl;
	
	cout << "p: " << p << " p*: " << *p << endl; 
	
	p = &j;
	cout << "j értéke: " << j << endl;
	cout << "j címe: " << p << "j &j cime: " << &j << endl;
	cout << "p: " << p << " p*: " << *p << endl; 
	j++;
	cout << "j értéke: " << j << endl;
	cout << "j címe: " << p << "j &j cime: " << &j << endl;
	cout << "p: " << p << " p*: " << *p << endl; 
	cout << "k: " << k << " &k: "<< k << " k++: ";
	k++;k++;cout << k  << endl;
return 0; 

}
