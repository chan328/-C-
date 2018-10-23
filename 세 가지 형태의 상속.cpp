#include <iostream>
using namespace std;

class Base
{
private:
	int pri; // 자신이 선언한 클래스 내에서만 사용가능
protected:
	int pro; // 자신과 자식 클래스 내에서만 사용가능
public:
	int pub; // 자유
};

class Derived : public Base
{
	// Empty
	// private -> x
	// protected -> protected
	// public -> public
};

class Derived2 : protected Base
{
	// Empty
	// private -> x 접근불가
	// protected -> protected
	// public -> protected
};

class Derived3 : private Base
{
	// Empty
	// private -> x 접근불가
	// protected -> private
	// public -> private
};