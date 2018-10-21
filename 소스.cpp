#include <iostream>
using namespace std;

class Person
{
private:
	char * name;
	char * phone;
	int age;
public:
	Person(char * _name, char * _phone, int _age);
	~Person();
	void ShowData();
	Person(const Person & p);
};

Person::Person(char * _name, char * _phone, int _age)
{
	name = new char[strlen(name) + 1];
	strcpy(name, _name);

	phone = new char[strlen(phone) + 1];
	strcpy(phone, _phone);

	age = _age;
}

Person::~Person()
{
	delete[] name;
	delete[] phone;
}

void Person::ShowData()
{
	cout << "name : " << name << endl;
	cout << "phone : " << phone << endl;
	cout << "age : " << age << endl;
}

Person::Person(const Person & p)
{
	name = p.name;
	phone = p.phone;
	age = p.age;
}

int main()
{
	Person person1("KIM", "010-1234-4321", 12);
	Person person2 = person1;

	return 0;
}