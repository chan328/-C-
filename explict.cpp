#include <iostream>

class AAA
{
public:
	explicit AAA(int n) // ����� ����ȯ�� �ؾ���.
	{
		cout << "explicit AAA(int n)" << endl;
	}
};

class BBB
{
private:
	mutable int x; // const�� ���ܸ� �ش�.
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