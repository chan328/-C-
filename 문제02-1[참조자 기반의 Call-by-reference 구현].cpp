#include<iostream>
using namespace std;

// ���� 1��

void plusNum(int &num)
{
	num++;
}

void minusNum(int &num)
{
	num * -1;
}
/*
void main()
{
	int a = 2;
	plusNum(a);
	minusNum(a);
	cout << a;
}
*/
// ���� 2��

// �ּ� ���� �ƴ� ���� �Ѱ��ֹǷ� call by reference�� �ƴ� call by value�� ����� ������ ������ �������.

// ���� 3��
void SwapPointer(int ptr1, int ptr2)
{
	int temp;
	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
	cout << ptr1 << ' ' << ptr2;
}

int main()
{
	int num1 = 5;
	int *ptr1 = &num1;
	int num2 = 10;
	int *ptr2 = &num2;

	SwapPointer(*ptr1, *ptr2);
	
	// ....
}