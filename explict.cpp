#include <iostream>

class AAA
{
public:
	explicit AAA(int n) // 명시적 형변환을 해야함.
	{
		cout << "explicit AAA(int n)" << endl;
	}
};

class BBB
{
private:
	mutable int x; // const에 예외를 준다.
	int y;

public:
	void SetData(int x, int y) const()
	{
		this->x = x;
		this->y = y;
	}
};

int main()
{
	AAA a1 = 10;

	return 0;
}