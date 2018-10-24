#include <iostream>
using namespace std;

class AAA
{
public:
	virtual void fct()
	{
		cout << "AAA의 fct함수 호출" << endl;
	}
};

class BBB : public AAA
{
public:
	virtual void fct()
	{
		AAA::fct(); // 방법 1번
		cout << "BBB의 fct함수 호출" << endl;
	}
};

int main(void)
{
	AAA * a = new BBB;
	cout << "첫 번째 시도" << endl;
	a->fct();

	cout << "두 번째 시도" << endl;
	a->AAA::fct(); // 방법 2번

	return 0;
}