#include <iostream>
using namespace std;

class A
{
	int n;
public:
	A(int n)
	{
		this->n = n;
	}
	void Add()
	{
		n++;
	}
};

int main()
{
	A a1 = 5;
	A a2 = 20;
	
	a1.Add();
	a2.Add();

	return 0;
}

// a1�� a2�� ���� ������ ����Լ� Add()�� ����Ѵ�.

/*
	Add(A * a)
	{
		a->n++;
	}
*/