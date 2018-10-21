#include <iostream>
using namespace std;

class Test
{
private:
	int num;
	char * name;

public:
	Test(int num, char * name);
	Test(const Test & t)
	{
		this->num = t.num;
		
		this->name = new char[strlen(t.name) + 1];
		strcpy(this->name, t.name);
	}
	~Test();
};

Test::Test(int num, char * name)
{
	this->num = num;

	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
}

Test::~Test()
{
	delete[] name;
}