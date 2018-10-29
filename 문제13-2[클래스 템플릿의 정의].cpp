#include <iostream>
using namespace std;

template <typename T>
T SmartPtr()
{
private:
	T * proptr;
public:
	SmartPtr(T * ptr) : proptr(ptr) {}
	T & operator*() const { return *proptr; }
	T* operator->() const { return posptr; }
	~SmartPtr() { delete proptr; }
}


class Point
{
private:
	int xpos, ypos;
public:
	Point(int x, int y) : xpos(x), ypos(y)
	{}
	void SetPos(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	void ShowPosition() const
	{
		cout << '[' << xpos << ',' << ypos << ']' << endl;
	}
};