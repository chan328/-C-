#include <iostream>
using namespace std;

class A
{
	int a;
	int b;
public:
	virtual void fct1() // �̿� ���� �����Լ��� �����ϰ� �Ǹ� '�����Լ� ���̺�'�̶�� ���� �����ǰ� �Ǵµ�,
						// ��κ��� �����Ϸ����� Ŭ������ ������ ��� ������ �߰��ϴµ�, �̰��� (����) �Լ��鿡 ����
						// �������� �迭���� ����Ų��. �� �����͵��� ���� ���߿� ��Ȯ�� �Լ��� ����Ű�� �Ǵµ�,
						// ������ Ÿ�ӿ��� � �Լ��� ����Ű���� �� �� ���� �����̴�.
						// virtual Ű���带 ����ϸ� �޸� ���Դ´� �ȳ�
	{
		cout << "fct1(...)" << endl;
	}
	virtual void fct2()
	{
		cout << "fct2(...)" << endl;
	}
};

class B : public A
{
	int c;
	int d;
public:
	virtual void fct1()
	{
		cout << "override fct1(...)" << endl;
	}
	void fct3()
	{
		cout << "fct3(...)" << endl;
	}
};