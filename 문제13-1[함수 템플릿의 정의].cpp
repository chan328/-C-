#include <iostream>
using namespace std;

// 문제 1번

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{}
	void ShowPosition() const
	{
		cout << "x: " << xpos << endl;
		cout << "y: " << ypos << endl;
	}

	int a1 = 10, a2 = 20;
};

template <class T>
T SwapData(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}

// 문제 2번

int SumArray(int arr[], int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template <typename R>
R SumArray(R arr[], R len)
{
	R sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
	}
	return sum;
}