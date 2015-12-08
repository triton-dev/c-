#include<iostream>

#define  csere(type, i, j){type t=i; i=j; j=t;}

int main() {
int *ip;
int *jp;

int i=1;
int j=2;
ip = &i;
jp = &j;

std::cout << "i és j változó értéke: " << i << " " << j << std::endl;
std::cout << "i és j változó címe  : " << &i << " " << &j << std::endl;
std::cout << "i és j pointere      : " << ip << " " << jp << std::endl;
std::cout << "i és j pointerben    : " << *ip << " " << *jp << std::endl;
std::cout << "*****     CSERE UTÁN     *****" << std::endl;
csere(int, i, j)
std::cout << i << " " << j << std::endl;
std::cout << &i << " " << &j << std::endl;
std::cout << ip << " " << jp << std::endl;
std::cout << *ip << " " << *jp << std::endl;
return 0;
}
