#include <iostream>
using namespace std;

class AAA
{
private:
	int x;
	int y;
public:
	AAA()
	{}
};

class BBB : public AAA
{
private:
	int x;
	int y;

public:
	BBB(int x, int y) : x(this->x), y(this->y) // �θ� ��ü�� private�� ����ִ� ���� �����ϱ� ����
											   // ��� �̴ϼȶ������� ����Ѵ�.
	{}
};