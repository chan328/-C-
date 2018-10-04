using namespace std;
#include <iostream>

// 문제 1번

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
		cout << "잔여 가솔린" << GetGaasGauge() << endl;
		cout << "잔여 전기량" << GetElecGauge() << endl;
		cout << "잔여 워터량" << waterGauge << endl;
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
// 문제 2번

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
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
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
		cout << "주소: " << addr << endl;
		cout << "번호: " << phone << endl;
	}
	~MyFriendDetailInfo()
	{
		delete[] addr;
		delete[] phone;
	}
};

void main()
{
	MyFriendDetailInfo fren1("김진성", 22, "충남 아산", "010-1234-00xx");
	MyFriendDetailInfo fren2("이주성", 19, "경기 인천", "010-3333-00xx");
	fren1.ShowMyFriendDetailInfo();
	fren2.ShowMyFriendDetailInfo();
	return 0;
}