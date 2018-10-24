#include <iostream>
using namespace std;

class Employee // <- 순수 가상함수를 담는 클래스를 추상클래스라 하고 객체 생성이 불가능하다.
{
private:
	char name[100];
public:
	Employee(char * name) {}
	void ShowYourName() const {}
	virtual int GetPay() const = 0;
	virtual void ShowSalaryInfo() const = 0; // <- 순수 가상함수
};