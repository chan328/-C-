using namespace std;
#include <iostream>

class AAA
{
public:
	void A()
	{
		cout << "�θ� Ŭ������ A()ȣ��";
	}
};

class BBB : public AAA
{
public:
	void A()
	{
		cout << "�ڽ� Ŭ������ A()ȣ��";
	}
};

// �������̵带 ������ �� �����Ƕ�� �������� ���� �ڽ�Ŭ������ A�Լ��� �θ� Ŭ������ B�Լ��� �����ٰ� ������.