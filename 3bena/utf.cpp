#include <iostream>
using namespace std;


int main() {
	
	
	const int EXIT_SUCCESS = 0;
	char c = 'a';
	char ch = 'ű';
	wchar_t ct = L'é';

	char* str1 = "Ez egy szoveg...\n";
	wchar_t* str2 ="ŰÁÉŐÚŐÓÜÖ szöveg...\n"L;

	cout << c << endl;
	cout << ch << endl;
	cout << ct << endl;
	cout << "HElló" << endl;
	cout << str1 << *str2 << endl;

return EXIT_SUCCESS;
}
