#include <iostream>
using namespace std;

static int counter;	// ��� Test��ü�� counter�� ����.
					// ��ü ���� ������ �޸� ������ �ö󰣴�.

class Test
{
public:
	Test()
	{
		counter++;
		cout << counter << " ��° Test ��ü�� ȣ���" << endl;
	}
};

int main()
{
	Test test1;
	Test test2;
	Test test3 = test1;
	Test();

	return 0;
}