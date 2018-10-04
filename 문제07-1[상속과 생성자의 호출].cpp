using namespace std;
#include <iostream>

// ���� 1��

class Car
{
private:
	int gasolineGauge;
public:
	int GetGaasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	int GetElecGauge()
	{
		return electricGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;
public:
	void ShowCurrentGauge()
	{
		cout << "�ܿ� ���ָ�" << GetGaasGauge() << endl;
		cout << "�ܿ� ���ⷮ" << GetElecGauge() << endl;
		cout << "�ܿ� ���ͷ�" << waterGauge << endl;
	}
};
/*
int main()
{
	HybridWaterCar wCar(79, 65, 35);
	wCar.ShowCurrentGauge();
	return 0;
}
*/
// ���� 2��

class MyFriendInfo
{
private:
	char * name;
	int age;
public:
	MyFriendInfo(char * sname, int sage)
		: age(sage)
	{
		name = new char(strlen(sname) + 1);
		strcpy(name, sname);
	}
	void ShowMyFriendInfo()
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~MyFriendInfo()
	{ 
		delete[] name;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char * addr;
	char * phone;
public:
	MyFriendDetailInfo(char * sname, int sage, char * saddr, char * sphone)
		: MyFriendInfo(sname, sage)
	{
		saddr = new char(strlen(addr) + 1);
		phone = new char(strlen(sphone) + 1);
		strcpy(addr, saddr);
		strcpy(phone, sphone);
	}
	void ShowMyFriendDetailInfo()
	{
		ShowMyFriendInfo();
		cout << "�ּ�: " << addr << endl;
		cout << "��ȣ: " << phone << endl;
	}
	~MyFriendDetailInfo()
	{
		delete[] addr;
		delete[] phone;
	}
};

void main()
{
	MyFriendDetailInfo fren1("������", 22, "�泲 �ƻ�", "010-1234-00xx");
	MyFriendDetailInfo fren2("���ּ�", 19, "��� ��õ", "010-3333-00xx");
	fren1.ShowMyFriendDetailInfo();
	fren2.ShowMyFriendDetailInfo();
	return 0;
}