using namespace std;
#include <iostream>

class AAA
{
public:
	void A()
	{
		cout << "부모 클래스의 A()호출";
	}
};

class BBB : public AAA
{
public:
	void A()
	{
		cout << "자식 클래스의 A()호출";
	}
};

// 오버라이드를 이해할 때 재정의라고 이해하지 말고 자식클래스의 A함수가 부모 클래스의 B함수를 가린다고 봐야함.