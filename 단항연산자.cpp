#include <iostream>
using namespace std;

class A
{
private:
	int x;
	int y;
public:
	A(int _x, int _y) : x(_x), y(_y)
	{}
	void ShowPosition();
	A & operator++();
	friend A & operator--(A & ref);
};

void A::ShowPosition()
{
	cout << x << ' ' << endl;
}

A& A::operator++()
{
	x++;
	y++;
}

A& operator-- (A & ref)
{
	ref.x++;
	ref.y++;
}

int main()
{
	A a1(1, 2);
	a1++;
	a1.ShowPosition();
	a1--;
	a1.ShowPosition();
}