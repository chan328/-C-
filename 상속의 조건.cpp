#include <iostream>
using namespace std;

// IS-A 관계
// public 상속은 IS-A관계가 성립되도록 하자.
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

// Gyuzun is Human 은 성립 Human is Gyuzun은 성립하지 않음
// 자식 클래스 is 부모 클래스, 부모 클래스 is not 자식 클래스


// HAS-A 관계

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

// 위 얘시는 Chan이 Hamburger를 소유하고 있는 것을 표현하고 있다.	
// Chan has a Hamburger 즉, HAS-A 관계도 상속으로 표현할 수 있다.
// 객체 멤버에 의한 포함 관계의 형성
// 객체 포인터 멤버에 대한 포함 관계의 형성

// 필요에 의해 떨어질 수 있으면 좋은 상속이다.