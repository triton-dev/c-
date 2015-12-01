#include <string>
#include <iostream>
#include "money.h"

using namespace std;

struct TNode {
    struct TNode *next;
    string itemName;
    Money price = Money(0,0);
};

class CreditCard {
        string ownerName;
        string number;
        struct TNode *transactions;
    
    public:
        CreditCard(string o, string n) {
            ownerName = o;
            number = n;
            transactions = 0;
        };
        
        ~CreditCard();
        
        void print();
        
        void charge(string item, Money value);
        
        void charge(string item, int euro, int cent);
};

CreditCard::~CreditCard() {
    while(transactions) {
        struct TNode *tmp = transactions->next;
        delete transactions;
        transactions = tmp;
    }
}

void CreditCard::print() {
    Money sum = Money(0,0);
    cout << "Tulajdonos: " << ownerName << endl;
    cout << "Kártyaszám: " << number << endl;
    cout << "Tranzakciók:" << endl;
    struct TNode *tmp = transactions;
    while(tmp) {
        cout << "Tétel: " << tmp->itemName << "; Ár: ";
        tmp->price.print();
        sum = (sum+tmp->price);
        tmp = tmp->next;
    }
    cout << "Tranzakciók vége." << endl;
    cout << "Tranzakciók egyenlege: ";
    sum.print();
}

void CreditCard::charge(string item, Money value) {
    struct TNode * newt = new TNode;
    newt->itemName = item;
    newt->price = value;
    newt->next = transactions;
    transactions = newt;
}

void CreditCard::charge(string item, int euro, int cent) {
    Money m(euro,cent);
    charge(item, m);
}



int main() {

    Money p1 = Money(10,48);
    Money p2 = Money(3,73);
    
    p1.print();
    p2.print();
    (p1+p2).print();
    (p1-p2).print();
    
    cout << "*****************************" << endl;
    cout << "*     Credit Card példa     *" << endl;
    
    string nev;
    string szam;
    string v;
    string tetel;
    int euro;
    int cent;
    cout << "Kérem a tulajdonos nevét: ";
    getline(cin,nev);
    cout << "Kérem a kártyaszámot: ";
    cin >> szam;
    CreditCard c((string)nev, (string)szam);
    cout << "Tranzakciók felvitele:" << endl;
    do {
        cout << "Megnevezés: ";
        cin >> tetel;
        cout << "Euro: ";
        cin >> euro;
        cout << "Cent: ";
        cin >> cent;
        c.charge((string)tetel, (int)euro, (int)cent);
        cout << "Új tranzakció? i/n ";
        cin >> v;
    } while ( v == "i");
    /*
    c.charge("Pizza", 9,99);
    c.charge("Ticket", 15,45);
    c.charge("Fare", 6,35);
    */
    c.print();


// int vége
return 0;
}
