#include<iostream>
#include<string>

using namespace std;

int main() {
	string a;
	string b;
	int n;
	int m;
	int *ptr;
  int val;

	n = 10;
	ptr  = &n;
	val = *ptr;

	a="Helló";
	b="Hello";

	
	if (a == b) {
		cout << "A string = B string." << endl;
	}
	else {
		cout << "A string != B string." << endl;
	}
	cout << "n értéke: " << n <<" , de n címe: " << &n << endl;
	cout << "De " << ptr << " címen taláható érték: " << val <<  endl;
	cout << &n << "\t" << &m << endl;	
	cout << "***********************************" << endl;
	
  string *sptr;
	sptr = &a;
	string sval;
	sval = *sptr;

	cout << "A string: " << sptr << " címen tárolva, a címen található érték: " << sval << endl;


}
