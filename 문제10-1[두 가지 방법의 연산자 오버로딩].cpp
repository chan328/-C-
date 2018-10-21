#include <iostream>
using namespace std;

// ¹®Á¦ 1¹ø

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0)
		: xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << xpos << ", " << ypos << endl;
	}
	Point operator- (const Point &ref)
	{
		Point pos(xpos - ref.xpos, ypos - ref.ypos);
		return pos;
	}

	friend Point operator+(const Point &, const Point &);
	friend bool operator==(const Point &, const Point &);
	friend bool operator!= (const Point &, const Point &);
};

Point operator+(const Point &pos1, const Point &pos2)
{
	Point pos(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
	return pos;
}

bool operator==(const Point &pos1, const Point &pos2)
{
	if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
	{
		return true;
	}
	else
		return false;
}

bool operator!=(const Point &pos1, const Point &pos2)
{
	return !(pos1 == pos2);
}

int main(void)
{
	Point p1(1, 2);
	Point p2(4, 5);
	Point p3 = p1.operator-(p2);

	p3.ShowPosition();

	return 0;
} 