#include <iostream>
using namespace std;

// ��ü �����Ͷ� ��ü�� �ּҰ��� ������ �� �ִ� �������̴�
// PersonŬ������ �����ʹ� PersonŬ�������� �ƴ϶� Student�� HighSchoolStd�� ������ �� �ִ�.

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