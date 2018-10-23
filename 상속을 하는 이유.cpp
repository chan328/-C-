#include <iostream>
using namespace std;

// 운송 수단에 관련된 클래스 정의
// 자동차, 열차, 선박, 비행기 등등

class Airplane
{
	int pessnger;			// 탑승 인원
	int baggage;			// 수하물의 무게
	int crew_man;			// 승무원의 인원
public:
	Airplane(int p = 0, int w = 0, int c = 0);
	void Ride(int person);	// 탑승하다
	void Load(int weight);	// 짐을 싣다
	void TakeCrew(int crew);// 승무원 탑승
};

class Train
{
	int pessnger;			// 탑승 인원
	int baggage;			// 수하물의 무게
	int length;				// 열차의 칸수
public:
	Train(int p = 0, int w = 0, int c = 0);
	void Ride(int person);	   // 탑승하다
	void Load(int weight);	   // 짐을 싣다
	void SetLength(int length);// 열차의 칸수 설정
};

// 상속을 사용하면?
// 공통되는 부분은 부모클래스에 넣으면 편하게 설정가능

class transport
{
	int pessnger;			// 탑승 인원
	int baggage;			// 수하물의 무게
public:
	transport(int person = 0, int weight = 0);
	void Ride(int person);
	void Load(int weight);
};

class bus : public transport
{
private:
	int bus_num;
	int money;

public:
	void fee(int money);
};

void Ride(int person)
{
	cout << person << " 명이 탑승합니다." << endl;
}