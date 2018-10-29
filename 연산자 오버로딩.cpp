#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y)
	{}
	void ShowPosition();
	Point operator+ (const Point & val);
};

void Point::ShowPosition()
{
	cout << x << " " << y << endl;
}

Point Point::operator+(const Point & val)
{
	Point pos(x + val.x, y + val.y);
	return pos;
}

int main()
{
	Point p(3, 4);
	Point p2(1, 2);
	Point p3 = p.operator+(p2);	

	p3.ShowPosition();

	return 0;
}