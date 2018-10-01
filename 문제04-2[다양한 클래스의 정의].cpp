#include <iostream>
using namespace std;

// ¹®Á¦ 1¹ø

class Point
{ 
private:
	int xpos, ypos;
public:
	void Init(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPointInfo() const
	{
		cout << "[" << xpos << ", " << ypos << "]" << endl;
	}
};

int main()
{
	Point point;
	point.Init(2, 4);
	point.ShowPointInfo();
	return 0;
}