#include <iostream>
using namespace std;

class First
{
public:
	virtual void MyFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First
{
public:
	virtual void MyFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public:
	virtual void MyFunc() { cout << "ThirdFunc" << endl; }
};
	
int main(void)
{
	Third * third = new Third;
	Second * second = third;
	second->MyFunc();
}

// virtual Ű���带 ����ϰ� �Ǹ� �������� �ڷ����� ������� ȣ��Ǵ°��� �ƴ� �����Ͱ� ������ ����Ű�� �����
// �Լ��� ȣ���ϰ� �ȴ�.