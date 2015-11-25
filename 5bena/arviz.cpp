#include <iostream>

using namespace std;

const int MIN_DARAB = 1;
const int MAX_DARAB = 10000;
const int MIN_ERTEK = 0;
const int MAX_ERTEK = 3000;
const int FOK_1 = 800;


int darab = 0;
int meres[MAX_DARAB];
int arviz = 0;
int pont[MAX_DARAB];
int k = 1;
int main() {
    cout << endl << endl << "*****     Árvíz!!!     *****" << endl << endl;
    do {
        cout << "Mérési pontok száma [1-10000]: ";
        cin >> darab;
    }
    while (darab < MIN_DARAB || darab > MAX_DARAB);
    cout << darab << " mérési pont beolvasása következik..." << endl;
    cout << "------------------------------------" << endl;
    for (int i=1; i<=darab; i++) {
        do {
            cout << i << ". méréi ponthoz tartozó adat [0-3000]: ";
            cin >> meres[i];
        }
        while (meres[i] < MIN_ERTEK || meres[i] > MAX_ERTEK);
    }
    cout << "------------------------------------" << endl;
    cout << "A beolvasott adatok:" << endl;
    for (int i=1; i<=darab; i++) {
        cout << i <<". mérési pont: " << meres[i] << endl;
    }

// Kiértékelés 
    bool nem_szakasz = true;
    for (int i=1; i<=darab; i++) {
        if (meres[i] > FOK_1 && nem_szakasz) {
            ++arviz;
            cout << meres[i] << " ";
            nem_szakasz = false;
            pont[k] = i;
            k++;
        }
        if(meres[i] <= FOK_1) {
            nem_szakasz = true;
            cout << endl;
            pont[k] = i-1;
            k++;
        }
    }
    if (meres[darab] > FOK_1 && !nem_szakasz) {
        pont[k] = darab;
    }

// Kimenet:
    cout << endl;
    cout << "=================================" << endl;
    cout << "     ***** Kiértékelés *****     " << endl;
    if (arviz == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    cout << arviz << endl;
    for (int i=1; i<=k; i++) {
        
        cout << pont[i] << " ";
    }
    cout << endl;

    for(int i=1 ; i<=darab ; i++) {
        if(meres[i] > FOK_1) {
            cout << "!";
        }
        else {
            cout << "_";
        }
    }
    cout << endl;
// main visszatérés
    return 0;
}