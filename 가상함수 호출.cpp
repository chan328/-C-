#include <iostream>
using namespace std;

class AAA
{
public:
	virtual void fct()
	{
		cout << "AAA�� fct�Լ� ȣ��" << endl;
	}
};

class BBB : public AAA
{
public:
	virtual void fct()
	{
		AAA::fct(); // ��� 1��
		cout << "BBB�� fct�Լ� ȣ��" << endl;
	}
};

int main(void)
{
	AAA * a = new BBB;
	cout << "ù ��° �õ�" << endl;
	a->fct();

	cout << "�� ��° �õ�" << endl;
	a->AAA::fct(); // ��� 2��

	return 0;
}