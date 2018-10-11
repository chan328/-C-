#include <iostream>
using namespace std;

// 문제 1번

/*
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
*/

// 문제 2번

/*
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
		cout << xpos << ypos << endl;
	}
	Point operator- ()
	{
		Point pos(-xpos, -ypos);
		return pos;
	}
	friend Point operator~ (const Point &);
};

Point operator~ (const Point &ref)
{
	Point pos(ref.ypos, ref.xpos);
	return pos;
}

int main(void)
{
	Point pos1(9, -7);
	pos1.ShowPosition();
	Point pos2 =- pos1;
	pos2.ShowPosition();
	(~pos2).ShowPosition();
	pos2.ShowPosition();

	return 0;
}
*/

// 문제 3번

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << xpos << ", " << ypos << endl;
	}
	friend ostream& operator<< (ostream&, const Point&);
	friend istream& operator>> (istream&, Point& pos);
};

ostream& operator<< (ostream& os, const Point& pos)
{
	os << pos.xpos << ", " << pos.ypos << endl;
	return os;
}

istream& operator>> (istream& is, Point& pos)
{
	is >> pos.xpos >> pos.ypos;
	return is;
}

int main(void)
{
	Point pos1;
	cout << "x, y 좌표 순으로 입력" << endl;
	cin >> pos1;
	cout << pos1;
}