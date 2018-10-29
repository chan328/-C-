#include <iostream>
using namespace std;

class Point
{
	int x;
	int y;
public:
	Point(int _x, int _y) : x(_x), y(_y)
	{}
	void ShowPosition();
	friend Point operator+(const Point &, const Point &);
};

void Point::ShowPosition()
{
	cout << x << ' ' << y << endl;
}

Point operator+(const Point & p1, const Point & p2)
{
	Point temp(p1.x + p2.x, p1.y + p1.y);
	return temp;
}

int main(void)
{
	Point p1(1, 2);
	Point p2(3, 4);
	Point p3 = p1 + p2;
	p3.ShowPosition();
	return 0;
}