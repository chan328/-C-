#include <iostream>
using namespace std;

class A
{
public:
	virtual ~A() {}
};

class B : public A
{
public:
	virtual ~B() {}
};

// �Ҹ��ڿ� virtual�� ������� ������ �޸��� ������ �߻��ϰ� �ǹǷ� ��ü�� �Ҹ� ����������
// delete �����ڿ� ���� ������ ������ �ڷ����� ������� ��� �Ҹ��ڰ� ȣ��Ǿ�� �Ѵ�.