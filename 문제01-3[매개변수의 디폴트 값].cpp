// 문제 1번

#include <iostream>
using namespace std;

int BoxVolume(int a, int b, int c)
{
	return a * b * c;
}

int BoxVolume(int a, int b)
{
	cout << "인자가 한개 부족함";
	return 0;
}

int BoxVolume(int a)
{
	cout << "인자가 두 개 부족함";
	return 0;
}

int BoxVolume()
{
	cout << "인자가 세 개 부족함";
	return 0;
}

int main(void)
{
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
	cout << "[D, D, D] : " << BoxVolume() << endl;
}

// 문제 2번

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void) // 매개변수에 void값은 X
{
	return 10;
}