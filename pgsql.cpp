#include<iostream>
#include<pqxx/pqxx>
#include<string>

using namespace std;
using namespace pqxx;

int main(int argc, char* argv[]) {
	try {
		connection C ("dbname=surget user=gyuri password=qaysew hostaddr=127.0.0.1 port=5432");
		if (C.is_open()) {
			cout << "Kapcsolat létrejött: " << C.dbname() << " adatbázissal." << endl;
		}
		else {
			cout << "Nincs kapcsolat az adatbázissal." << endl;
			return 1;
		}
// Create Select statement
  char const * sql;
	sql = "select * from _user_info";

// Create a non transactional object
	nontransaction N(C);

// Execute query
	result R(N.exec(sql));
    string s[5];
    char ph;
    int wide;
    wide=20;
    ph = ' ';

// Show result
	for (result::const_iterator i = R.begin(); i != R.end(); ++i) {
            for (int j=0; j<5;  j++) {
               s[j] = i[j].as<string>() ;
               s[j].insert(s[j].begin(), wide-s[j].length(), ph);
               cout << s[j] << "\t";
            }
            cout << endl;
//			cout << i[0].as<string>() << "\t" << i[1].as<string>() << "\t" << i[2].as<string>() << "\t" << i[3].as<string>() << "\t" << i[4].as<string>() << endl;
	}

// Disconnet
		C.disconnect();
	}
	catch (const std::exception &e) {
		cerr << e.what() << std::endl;
		return 1;
	}
}

