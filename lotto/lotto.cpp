#include<iostream>
#include<cstdlib>
#include<ctime>


#include"lotto.h"

using namespace std;

string m; // menu válasz a main-ben



void solo() {
    int s;
    bool b = true;
    srand(time(NULL));
    cout << endl << "1 szelvény generálása..." << endl;
    for(int i=1; i<=5; i++) {
        
        while(b) {
            b = true;
            s = rand()%10 + 1;
            if(szam[s] == 1) {
                b = false;
            }
            else {
                szam[s] = 1;
            }
        }
        cout << i << ": "<< s << "\t";
    }
    cout << endl;
    for(int i=1; i<=90; i++) {
        //if(szam[i]) {
            cout << szam[i] ;
        //}
        
    }
    cout << endl;
    resetSzamok();
};

void full() {
    cout << endl << "18 szelvény generálása..." << endl;
};

void resetSzamok() {
    for(int i=1; i <= 90 ; i++) {
        szam[i] = 0;
        cout << szam[i];
    }
    cout << endl;
}

void printMenu() {
    resetSzamok();
    cout << endl;
    while (true) {
        int c;
        cout << "******************************************************" << endl;
        cout << "*            Lottó számok... 5 a 90-ből              *" << endl;
        cout << "*                                                    *" << endl;
        cout << "*  1. 1 szelvény generálás.                          *" << endl;
        cout << "*   2. 18 szelvény mind a 90 szám felhasználásával.  *" << endl;
    //    cout << "*                                                    *" << endl;
        cout << "*    0. Kilépés                                      *" << endl;
        cout << "*  Kérem válasszon [0 1 2]:                          *" << endl;
        cin >> c;
        switch (c) {
            case 1: solo(); break;
            case 2: full(); break;
            case 0: 
                getline(cin,m);
                cout << "Nyomj Entert...";
                getline(cin, m);
                exit(0); 
                break;
        }
    }
}




int main() {
    
    printMenu();
    
    
return 0;
}