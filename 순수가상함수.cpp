#include <iostream>
using namespace std;

class Employee // <- ���� �����Լ��� ��� Ŭ������ �߻�Ŭ������ �ϰ� ��ü ������ �Ұ����ϴ�.
{
private:
	char name[100];
public:
	Employee(char * name) {}
	void ShowYourName() const {}
	virtual int GetPay() const = 0;
	virtual void ShowSalaryInfo() const = 0; // <- ���� �����Լ�
};