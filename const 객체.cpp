#include <iostream>
using namespace std;

class AAA
{
	int num;
public:
	AAA(int _num) : num(_num)
	{}

	void ShowData()
	{
		cout << "ShowData함수 호출" << endl;
		cout << num << endl;
	}
	void ShowData () const
	{
		cout << "ShowData const함수 호출" << endl;
		cout << num << endl;
	}
};

int main()
{
	const AAA a(10);
	AAA a2(11);

	a.ShowData();
	a2.ShowData();

	return 0;
}