#include <iostream>
using namespace std;

class father
{
public:
	void Say()
	{
		cout << "father" << endl;
	}
};

class Son : public father
{
	void Say()
	{
		cout << "Son" << endl;
	}
};

int main(void)
{
	father * f, Ff;
	Son s;
	f = &Ff;
	f->Say();
	f = &s;
	f->Say();
	return 0;
}