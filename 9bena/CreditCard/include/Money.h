#ifndef MONEY_H
#define MONEY_H

class Money
{
	public:
		Money(int, int);

		void setEuro(int);

		void setCent(int);

		int getEuro();

		int getCent();

		void print();

		virtual ~Money();

	private:
		int euro;
		int cent;
};

#endif // MONEY_H
