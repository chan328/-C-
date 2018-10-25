#include <iostream>
using namespace std;

class A
{
	int a;
	int b;
public:
	virtual void fct1() // 이와 같이 가상함수를 정의하게 되면 '가상함수 테이블'이라는 것이 생성되게 되는데,
						// 대부분의 컴파일러들은 클래스에 숨겨진 멤버 변수를 추가하는데, 이것은 (가상) 함수들에 대한
						// 포인터의 배열들을 가리킨다. 이 포인터들은 실행 도중에 정확한 함수를 가리키게 되는데,
						// 컴파일 타임에는 어떤 함수를 가리키는지 알 수 없기 때문이다.
						// virtual 키워드를 사용하면 메모리 더먹는다 냠냠
	{
		cout << "fct1(...)" << endl;
	}
	virtual void fct2()
	{
		cout << "fct2(...)" << endl;
	}
};

class B : public A
{
	int c;
	int d;
public:
	virtual void fct1()
	{
		cout << "override fct1(...)" << endl;
	}
	void fct3()
	{
		cout << "fct3(...)" << endl;
	}
};