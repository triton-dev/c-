#include <iostream>

using namespace std;

const int MIN_MERES = 0;
const int MAX_MERES = 10000;

const int MIN_ERTEK = 0;
const int MAX_ERTEK = 3000;

const int FOK_1 = 800;
const int FOK_2 = 900;

int darab = 0;

int ertek[MAX_MERES];

int arviz = 0;
bool nem_szakasz = true;

int szakasz[MAX_MERES];
int szakaszszamlalo = 1;    
    
struct av {
    int eleje;
    int vege;
    int mennyi;
};   

av avsz[MAX_MERES]; 
int avsz_ct = 1;

void beolvas_darab() {
	cout << "*****************" << endl;
	cout << "*     Árvíz     *" << endl;
	cout << "*****************" << endl;
	
	do {
		cout << "Kérem a mérések számát: ";
		cin >> darab;
	} while (darab < MIN_MERES || darab > MAX_MERES);
	
}

void felsorol_meres() {
	cout << "Mérések száma: " << darab << endl;
	for (int i=1; i<=darab; i++) {
		cout << i << ". mérés értéke: " << ertek[i] << endl;
	}
	cout << endl << "Árvizek grafikusan..." << endl;
	for (int i=1; i<=darab; i++) {
		if (ertek[i] > FOK_1) {
			cout << "+";
		}
		else {
			cout << "_";
		}
	}
	cout << endl;
}

void beolvas_meres(int db) {
	if (db == 0) {
		darab = 9;
		ertek[1] = 801;
		ertek[2] = 750;
		ertek[3] = 850;
		ertek[4] = 910;
		ertek[5] = 850;
		ertek[6] = 900;
		ertek[7] = 600;
		ertek[8] = 810;
		ertek[9] = 820;
	}
	else {
		cout << db << " mérési adat beolvasása következik..." << endl;
		for(int i=1; i<=db; i++) {
			do {
				cout << i << ". adatot kérem: ";
				cin >> ertek[i];
			} while(ertek[i] < MIN_ERTEK || ertek[i] > MAX_ERTEK);
		}
	}
}


void kiir_szakasz() {
    for (int i=1; i<=darab; i++) {
        if(ertek[i] > FOK_1 && nem_szakasz) {
            arviz++;
            nem_szakasz = false;
        }
        if(ertek[i] <= FOK_1) {
            nem_szakasz = true;
        }
    }
    cout << "Szakaszok száma: " << arviz << endl;
}

void kiir_szakaszok() {
    nem_szakasz = true;
    for (int i=1; i<=darab; i++) {
        if(ertek[i] > FOK_1 && nem_szakasz) {
            arviz++;
            nem_szakasz = false;
            cout << i << "-";
            szakasz[szakaszszamlalo] = i;
            szakaszszamlalo++;
        }
        if(ertek[i] <= FOK_1) {
            nem_szakasz = true;
            cout << i-1 << " ";
            szakasz[szakaszszamlalo] = i-1;
            szakaszszamlalo++;
        }
    }
    if (ertek[darab] > FOK_1) {
        cout << darab;
        szakasz[szakaszszamlalo] = darab;
        szakaszszamlalo++;
        
    }
    cout << endl;

}


int main() {
	
	beolvas_darab();
	
	beolvas_meres(darab);
	
	felsorol_meres();
    
    kiir_szakasz();
	
    kiir_szakaszok();
    
    if(arviz ==0) {
        cout << endl << "************************" << endl;
        cout <<          "*****     VÉGE    *****" << endl;
        return 0;
    }
	

    
	
    for(int i=1; i<szakaszszamlalo; i = i+2) {
        int as=0;
        avsz[avsz_ct].eleje = szakasz[i]; 
        avsz[avsz_ct].vege = szakasz[i+1];
        for(int o=szakasz[i]; o<=szakasz[i+1]; o++) {
            
            if (ertek[o] > FOK_1 && ertek[o] < FOK_2) {
                as++;
            }
        }
        cout << as << " ";
        avsz[avsz_ct].mennyi = as;
        avsz_ct++;
    }
    cout << endl;
	
    for(int i= 1; i< avsz_ct; i++) {
        cout << avsz[avsz_ct].eleje << "-";
        cout << avsz[avsz_ct].vege <<  ":";
        cout << avsz[avsz_ct].mennyi << endl;
    }
    
    cout << "Strukt próba..." << endl;
    for (int i=1; i<MAX_MERES; i++) {
        avsz[i].eleje = i;
        avsz[i].vege = i+MAX_MERES;
        avsz[i].mennyi = i*MAX_MERES;
        cout << avsz[i].eleje << "\t" << avsz[i].vege << "\t" << avsz[i].mennyi << endl;
    }    
    
	
	
	
// main visszatérés
	return 0;
}
