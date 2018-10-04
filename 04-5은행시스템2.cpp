#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum { MAKE = 1, DEPPSIT, WITHDRAW, INQUIRE, EXIT};

class Account
{
private:
	int accID;
	int balance;
	char * cusName;
	
public:
	Account(int id, int money, char * name)
		: accID(id), balance(money)
	{
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);
	}

	int GetAccID() { return accID; };

	int Deposit(int money)
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;
	}

	int Withdraw(int money)
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;
	}

	void ShowAccInfo()
	{
		cout << "����ID: " << accID << endl;
		cout << "�� ��: " << cusName << endl;
		cout << "�� ��: " << balance << endl;
	}
	~Account()
	{
		delete[] cusName;
	}
};

Account * accArr[100];
int accNum = 0;

int main(void)
{
	int choice;

	while (1)
	{
		ShowMenu();
		cout << "����: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;
		case DEPPSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:;
			ShowAllAccInfo();
			break;
		case EXIT:
			for (int i = 0; i < accNum; i++)
				delete accNum[i];
			return 0;
		default:
			cout << "Illegal selection.. " << endl;
		}
	}

	return 0;
}

void ShowMenu(void)
{
	cout << "==============MENU=============" << endl;
	cout << "1. ���°輳" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[���°輳]" << endl;
	cout << "���� ID: "; cin >> id;
	cout << "�� ��: "; cin >> name;
	cout << "�Աݾ�: "; cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);
}

void DepositMoney(void)
{
	int money;
	int id;
	cout << "[��  ��]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "�Աݾ�: "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "�ԱݿϷ�" << endl << endl;
			return;
		}
	}

	cout << "�������� ���� ���̵��Դϴ�.";
}

void WithdrawMoney(void)
{
	int money;
	int id;
	cout << "[��  ��]" << endl;
	cout << "����ID:  "; cin >> id;
	cout << "��ݾ�:  "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->Withdraw(money) == 0)
			{
				cout << "�ܾ� ����";
				return;
			}

			cout << "��� �Ϸ�";
			return;
		}
	}
}

void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}