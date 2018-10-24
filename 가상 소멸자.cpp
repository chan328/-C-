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

// 소멸자에 virtual을 사용하지 않으면 메모리이 누수가 발생하게 되므로 객체의 소멸 과정에서는
// delete 연산자에 사용된 포인터 변수의 자료형에 상관없이 모든 소멸자가 호출되어야 한다.