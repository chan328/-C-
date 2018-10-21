#include <iostream>
using namespace std;

class Count
{
private:
	int num;
public:
	Count(int _num) : num(_num)
	{}
	
	void Increase()
	{
		num++;
	}

	void Showdata() const
	{
		ShowIntro();
	}

	void ShowIntro() const
	{
		cout << "num is " << num << endl;
	}
};

int main(void)
{
	Count c(3);
	c.Increase();
	c.Showdata();
}