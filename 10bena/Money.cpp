#include <iostream>
#include "money.h"

Money::Money(int e=0, int c=0) {
    euro = e;
    cent = c;
};

void Money::setEuro(int e) {
    euro = e;
};

void Money::setCent(int c) {
    cent = c;
};

int Money::getEuro() {
    return euro;
};

int Money::getCent() {
    return cent;
};

void Money::print() {
    std::cout << euro << " Euro " << cent << " Cent" << std::endl;
};

Money operator+(Money m1, Money m2) {
    int e = m1.getEuro() + m2.getEuro();
    int c = m1.getCent() + m2.getCent();
    e += c/100;
    c %= 100;
    Money res(e,c);
    return res;
};

Money operator-(Money m1, Money m2) {
    int e = m1.getEuro() - m2.getEuro();
    int c = m1.getCent() - m2.getCent();
    if (c < 0) {
        e -= 1;
        c = 100+c;
    }
    Money res(e,c);
    return res;
};

