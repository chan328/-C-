#include <iostream>
using namespace std;

// ���� 1��

namespace COMP_POS
{
	enum { CLERK, SENIOR, ASSIST, MANAGER };

	void ShowPositionInfo(int pos)
	{
		switch (pos)
		{
		case CLERK:
			cout << "���" << endl;
		case SENIOR:
			cout << "����" << endl;
		case ASSIST:
			cout << "�븮" << endl;
		case MANAGER:
			cout << "����" << endl;
		default:
			break;
		}
	}
}

class NameCard
{
private:
	char * name;
	char * company;
	char * phone;
	int position;
public:
	NameCard(char * name, char * company, char * phone, int pos)
		: position(pos)
	{
		this->name = new char[strlen(name) + 1];
		this->company = new char[strlen(company) + 1];
		this->phone = new char[strlen(phone) + 1];
		strcpy(this->name, name);
		strcpy(this->company, company);
		strcpy(this->phone, phone);

		position = pos;
	}
	void ShowNameCardInfo()
	{
		cout << "�̸�: " << name << endl;
		cout << "ȸ��: " << company << endl;
		cout << "��ȣ: " << phone << endl;
		cout << "����: "; COMP_POS::ShowPositionInfo(position);
		cout << endl;
	}
	NameCard(const NameCard & n) 
	{
		this->name = new char[strlen(n.name) + 1];
		name = strcpy(name, n.name);

		this->company = new char[strlen(company) + 1];
		company = strcpy(company, n.company);

		this->phone = new char[strlen(phone) + 1];
		phone = strcpy(phone, n.phone);

		this->position = n.position;
	}
	~NameCard()
	{
		delete[] name;
		delete[] company;
		delete[] phone;
	}
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
	NameCard manSENIOR("kim", "SomeStd", "010-9999-8888", COMP_POS::SENIOR);
	NameCard manAssist("Uh", "Strange", "010-2222-4444", COMP_POS::ASSIST);
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();
	return 0;
}