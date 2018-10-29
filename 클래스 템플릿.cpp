#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << '[' << xpos << ',' << ypos << ']' << endl;
	}
};

// 위 클래스를 클래스 템플릿으로 바꾸면

template <typename T>
class PPoint
{
private:
	T xpos, ypos;
public:
	PPoint(T x = 0, T y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << '[' < , xpos << ',' << ypos << ']' << endl;
	}
};

int main()
{
	PPoint<int> pos(3, 5);
	pos.ShowPosition();

	PPoint<double> pos2(2.3, 4.3);
	pos2.ShowPosition();

	PPoint<char> pos3('P', 'S');
	pos3.ShowPosition();
}