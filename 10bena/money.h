#ifndef MONEY_H
#define MONEY_H
class Money {
    public:
    Money(int, int);
    void setEuro(int);
    void setCent(int);
    int getEuro();
    int getCent();
    void print();
    
    private:
    int euro;
    int cent;
    
    protected:
};

Money operator+(Money, Money);

Money operator-(Money, Money);
#endif