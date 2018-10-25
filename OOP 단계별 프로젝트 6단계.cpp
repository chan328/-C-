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
	cout << "����ID: " << accID <<endl;
	cout << "�� ��: " << cusName << endl;
	cout << "�� ��: " << balance << endl;

}

Account::~Account()
{
	delete[] cusName;
}


class NormalAccount : public Account
{
private:
	int interRate;
public:
	NormalAccount(int ID, int money, char * name, int rate)
		: Account(ID, money, name), interRate(rate)
	{}
	virtual void Deposit(int money)
	{
		Account::Deposit(money);
		Account::Deposit(money*(interRate / 100.0));
	}
};

class HighCreditAccount : public NormalAccount
{
private:
	int specialRate;
public:
	HighCreditAccount(int ID, int money, char * name, int rate, int special)
		: NormalAccount(ID, money, name, rate), specialRate(special)
	{}

	virtual void Deposit(int money)
	{
		NormalAccount::Deposit(money);
		Account::Deposit(money * (specialRate / 100.0));
	}
};

class AccountHandler
{
private:
	Account * accArr[100];
	int accNum;
public:
	AccountHandler();
	void ShowMenu(void) const;
	void MakeAccount(void);
	void DepositMoney(void);
	void WithDrawMoney(void);
	void ShowAllAccInfo() const;
	~AccountHandler();

protected:
	void MakeNormalAccount(void);
	void MakeCreditAccount(void);
};

void AccountHandler::ShowMenu(void) const
{
	cout << "===========Menu=========" << endl;
	cout << "1. ���°輳" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void AccountHandler::MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;
	int interRate;

	cout << "[���뿹�ݰ��� �輳]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "�� ��:" ; cin >> name;
	cout << "�Աݾ�: "; cin >> balance;   
}

void AccountHandler::DepositMoney(void)
{

}

void AccountHandler::WithDrawMoney(void)
{

}

void AccountHandler::ShowAllAccInfo(void) const
{

}