#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()
	{
		cout << "AAA������ ȣ��"
	}
	AAA(int i)
	{
		
	}
};

class BBB : public AAA
{
public:
	BBB()
	{
		cout << "BBB������ ȣ��";
	}
};

// 1. �޸� ���� ����
// 2. AAA������ ����
// 3. BBB������ ����