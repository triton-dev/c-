#include <iostream>

using namespace std;

char tabla[8][8];


void fejlec() {
    cout << "***************************" << endl;
    cout << "*  8 királynő problémája  *" << endl;
    cout << "***************************" << endl;
    
    for(int s=0; s<8; s++) {
        for (int o=0; o<8; o++) {
            tabla[s][o] = ' ';
        }
    }
}

void kiir_tabla() {
    cout << " 1 2 3 4 5 6 7 8 "<< endl;
    cout << "+-+-+-+-+-+-+-+-+" << endl;
    for(int s=0; s<8; s++) {
        for (int o=0; o<8; o++) {
            cout << "|" << tabla[s][o] ;
        }
        cout << "|" << s+1 << endl;
        cout << "+-+-+-+-+-+-+-+-+-" << endl;
    }
    cout << endl;
}




int main() {
    int lepes = 1;
    int koord;
    fejlec();
    kiir_tabla();
    while (lepes < 8) {
        cout << "Kérem a "<< lepes <<". királynő [sor][oszlop] koordinátáját: ";
        cin >> koord;
        
        tabla[koord/10-1][koord%10-1] = 'X';
        kiir_tabla();
        lepes++;
    }
// Kilépés a programból
    return 0;
}

