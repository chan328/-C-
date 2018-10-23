#include <iostream>
using namespace std;

class AAA
{
private:
	int x;
	int y;
public:
	AAA()
	{}
};

class BBB : public AAA
{
private:
	int x;
	int y;

public:
	BBB(int x, int y) : x(this->x), y(this->y) // 부모 객체의 private에 들어있는 값을 접근하기 위해
											   // 멤버 이니셜라이저를 사용한다.
	{}
};