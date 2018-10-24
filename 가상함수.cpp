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

// virtual 키워드를 사용하게 되면 포인터의 자료형을 기반으로 호출되는것이 아닌 포인터가 실제로 가리키는 대상의
// 함수를 호출하게 된다.