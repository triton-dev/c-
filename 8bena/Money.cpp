#include <iostream>
#include <string>

using namespace std;

// Money class

class Money {
	int euros;
	int centimes;

	public:

	Money(int e=0, int c=0) {
		euros = e;
		centimes = c;
	};

	int getEuros() {
		return euros;
	};
	int getCentimes() {
		return centimes;
	};
	void setEuros(int e) {
		euros = e;
	};
	void setCentimes(int c) {
		centimes = c;
	};
	void print() {
		cout << euros << "," << centimes << " Euros" << endl;
	};

// Money
};

Money operator+(Money m1, Money m2) {
	int e = m1.getEuros() + m2.getEuros();
	int c = m1.getCentimes() + m2.getCentimes();
	e += c/100;
	c %= 100;
	Money res(e,c);
	return res;
}

Money operator-(Money m1, Money m2) {
	int e = m1.getEuros() - m2.getEuros();
	int c = m1.getCentimes() - m2.getCentimes();
	if (c < 0) {
		e -= 1;
		c = 100 + c;
	}
	Money res(e,c);
	return res;
}

// Money class vége


// Tranzakciók láncolt listája
struct TNode {
	TNode *next;
	string itemName;
	Money price;
};

// Bankkártya osztály

class CreditCard {
	string ownerName;
	string number;
	struct Tnode *transactions;

	public:

	CreditCard(string o, string n) {
		ownerName = o;
		number = n;
	};
	~CreditCard();
	void print();
	void charge(string item, Money value);
	void charge(string item, int euros, int centimes);
};



CreditCard::~CreditCard() {
	while (transactions) {
		TNode *tmp = transactions->next;
		delete transactions;
		transactions = tmp;
	}
}
/*
void CreditCard::print() {
	cout << "Kártya tulajdonos: " << ownerName << endl;
	cout << "Kártya szám      : " << number << endl;
	cout << "Tranzakciók listája: " << endl;
	struct TNode *tmp = transactions;
	while (tmp) {
		cout << "Tétel: " << tmp->itemName << "\t" << "összeg: ";
		cout << tmp->price.print();
		tmp = tmp->next;
	}
	cout << "Tranzakciók listájának vége." << endl;
}

void CreditCard::charge(string item, Money value) {
	struct Tnode *newt = new TNode;
	newt->itemName = item;
	newt->price = value;
	newt->next = transactions;
	transactions = newt;
}

void CreditCard::charge(string item, int euros, int centimes) {
	Money m(euros, centimes);
	charge(item, m);
}


*/
int main() {
	Money m1 = Money(10,05);
	Money m2 = Money(7,90);

	m1.print();
	m2.print();

	Money sum = m1+m2;
	sum.print();
	(m1-m2).print();

	cout << "\n********************************\n";
/*
	CreditCard cb("Sziki Gigi", "12345 01234 56789");
	cb.charge("Pizza",9,99);
	cb.charge("Coffe",1,49);
	cb.charge("Dönner Kebab",5,10);
	cb.charge("Ticket",6,25);
	cb.print();

*/

// main vége
	return 0;
}
