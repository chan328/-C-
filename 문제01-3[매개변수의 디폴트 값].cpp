// ���� 1��

#include <iostream>
using namespace std;

int BoxVolume(int a, int b, int c)
{
	return a * b * c;
}

int BoxVolume(int a, int b)
{
	cout << "���ڰ� �Ѱ� ������";
	return 0;
}

int BoxVolume(int a)
{
	cout << "���ڰ� �� �� ������";
	return 0;
}

int BoxVolume()
{
	cout << "���ڰ� �� �� ������";
	return 0;
}

int main(void)
{
	cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << endl;
	cout << "[5, 5, D] : " << BoxVolume(5, 5) << endl;
	cout << "[7, D, D] : " << BoxVolume(7) << endl;
	cout << "[D, D, D] : " << BoxVolume() << endl;
}

// ���� 2��

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc(void) // �Ű������� void���� X
{
	return 10;
}