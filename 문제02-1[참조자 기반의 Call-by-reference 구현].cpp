#include<iostream>
using namespace std;

// 문제 1번

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
// 문제 2번

// 주소 값이 아닌 값을 넘겨주므로 call by reference가 아닌 call by value를 써줘야 컴파일 에러가 사라진다.

// 문제 3번
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