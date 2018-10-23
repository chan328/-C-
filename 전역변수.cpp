#include <iostream>
using namespace std;

static int counter;	// 모든 Test객체가 counter를 공유.
					// 객체 생성 이전에 메모리 공간에 올라간다.

class Test
{
public:
	Test()
	{
		counter++;
		cout << counter << " 번째 Test 객체가 호출됨" << endl;
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