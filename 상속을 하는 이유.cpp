#include <iostream>
using namespace std;

// ��� ���ܿ� ���õ� Ŭ���� ����
// �ڵ���, ����, ����, ����� ���

class Airplane
{
	int pessnger;			// ž�� �ο�
	int baggage;			// ���Ϲ��� ����
	int crew_man;			// �¹����� �ο�
public:
	Airplane(int p = 0, int w = 0, int c = 0);
	void Ride(int person);	// ž���ϴ�
	void Load(int weight);	// ���� �ƴ�
	void TakeCrew(int crew);// �¹��� ž��
};

class Train
{
	int pessnger;			// ž�� �ο�
	int baggage;			// ���Ϲ��� ����
	int length;				// ������ ĭ��
public:
	Train(int p = 0, int w = 0, int c = 0);
	void Ride(int person);	   // ž���ϴ�
	void Load(int weight);	   // ���� �ƴ�
	void SetLength(int length);// ������ ĭ�� ����
};

// ����� ����ϸ�?
// ����Ǵ� �κ��� �θ�Ŭ������ ������ ���ϰ� ��������

class transport
{
	int pessnger;			// ž�� �ο�
	int baggage;			// ���Ϲ��� ����
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
	cout << person << " ���� ž���մϴ�." << endl;
}