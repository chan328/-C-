#include <iostream>
using namespace std;

class First
{
public:
	void FirstFunc() { cout << "FirstFunc" << endl; }
};

class Second : public First
{
public:
	void SecondFunc() { cout << "SecondFunc" << endl; }
};

class Third : public Second
{
public:
	void ThirdFunc() { cout << "ThirdFunc" << endl; }
};

int main(void)
{
	Third * tptr = new Third;
	Second * sptr = tptr;
	First * fptr = sptr;

	tptr->FirstFunc();
	tptr->SecondFunc();
	tptr->ThirdFunc();

	sptr->FirstFunc();
	sptr->SecondFunc();

	fptr->FirstFunc();

	// 반면에 아래 코드는 오류가 발생한다.

	/*
	sptr->ThirdFunc();
	fptr->SecondFunc();
	fptr->ThirdFunc();
	*/
}

// 결론 : 포인터 형에 해당하는 클래스에 정의된 멤버만 접근이 가능하다.
// "C++ 컴파일러는 포인터를 이용한 연산의 가능여부를 포인터의 자료형으로 기준을 잡아서 판단한다."