#include <iostream>
using namespace std;

class Base
{
private:
	int pri; // �ڽ��� ������ Ŭ���� �������� ��밡��
protected:
	int pro; // �ڽŰ� �ڽ� Ŭ���� �������� ��밡��
public:
	int pub; // ����
};

class Derived : public Base
{
	// Empty
	// private -> x
	// protected -> protected
	// public -> public
};

class Derived2 : protected Base
{
	// Empty
	// private -> x ���ٺҰ�
	// protected -> protected
	// public -> protected
};

class Derived3 : private Base
{
	// Empty
	// private -> x ���ٺҰ�
	// protected -> private
	// public -> private
};