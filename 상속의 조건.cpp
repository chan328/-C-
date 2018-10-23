#include <iostream>
using namespace std;

// IS-A ����
// public ����� IS-A���谡 �����ǵ��� ����.
class Human
{
private:
	int age;
	int height;
	char * name;
public:
	void Eat();
	void Sleep();
	void Talk();
};

class Gyuzun : public Human
{
private:
	bool isHandsome;
	char * phoneNum;
public:
	void Dance();
	void Study();
};

// Gyuzun is Human �� ���� Human is Gyuzun�� �������� ����
// �ڽ� Ŭ���� is �θ� Ŭ����, �θ� Ŭ���� is not �ڽ� Ŭ����


// HAS-A ����

class Hamburger
{
private:
	int price;
	char * taste;
public:
	void Sell(int price);
};

class Chan : public Hamburger
{
private:
	Hamburger* burger;
	int money;
	bool isHungry;
public:
	Chan() { burger = new Hamburger; }
	void Eat(bool isHungry);
	void Happy(char * taste);
	void Buy(int price) : price(this->price)
	{
		burger.Sell();
	}
};

// �� ��ô� Chan�� Hamburger�� �����ϰ� �ִ� ���� ǥ���ϰ� �ִ�.	
// Chan has a Hamburger ��, HAS-A ���赵 ������� ǥ���� �� �ִ�.
// ��ü ����� ���� ���� ������ ����
// ��ü ������ ����� ���� ���� ������ ����

// �ʿ信 ���� ������ �� ������ ���� ����̴�.