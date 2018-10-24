#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2};

enum { NORMAL = 1, CREDIT = 2 };

class Account
{
private:
	int accID;
	int balance;
	char * cusName;
public:
	Account(int ID, int money, char * name);
	Account(const Account & ref);

	int GetAccID() const;
	virtual void Deposit(int money);
	int WithDraw(int money);
	void ShowAccInfo() const;
	~Account();
};

Account::Account(int ID, int money, char * name)
	:accID(ID), balance(money)
{
	cusName = new char[strlen(name) + 1];
	strcpy(cusName, name);
}

Account::Account(const Account & ref)
	:accID(ref.accID), balance(ref.balance)
{
	cusName = new char[strlen(ref.cusName) + 1];
	strcpy(cusName, ref.cusName);
}

int Account::GetAccID() const
{
	return accID;
}

void Account::Deposit(int money)
{
	balance += money;
}

int Account::WithDraw(int money)
{
	if (balance < money)
		return 0;

	balance -= money;
	return money;
}

void Account::ShowAccInfo() const
{
	cout << "°èÁÂID: " << accID <<endl;
	cout << "ÀÌ ¸§: " << cusName << endl;
	cout << "ÀÜ ¾×: " << balance << endl;

}