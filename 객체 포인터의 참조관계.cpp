#include <iostream>
using namespace std;

// 객체 포인터란 객체의 주소값을 저장할 수 있는 포인터이다
// Person클래스의 포인터는 Person클래스만이 아니라 Student나 HighSchoolStd도 저장할 수 있다.

class Person
{
public:
	void Sleep()
	{
		cout << "Sleep" << endl;
	}
};

class Student : public Person
{
public:
	void Study()
	{
		cout << "Study" << endl;
	}
};

class HighSchoolStd : public Student
{
public:
	void Work()
	{
		cout << "Work" << endl;
	}
};

int main()
{
	Person * p1 = new Person;
	Person * p2 = new Student;
	Person * p3 = new HighSchoolStd;

	p1->Sleep();
	p2->Sleep();
	p3->Sleep();

	return 0;
}