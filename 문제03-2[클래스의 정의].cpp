#include<iostream>
using namespace std;

// ���� 1��

class Calculator
{
private:
	int AddNum = 0;
	int AddMin = 0;
	int AddDiv = 0;
	int AddMul = 0;
public:
	float Add(float a, float b)
	{
		AddNum++;
		return a + b;
	}
	float Div(float a, float b)
	{
		AddDiv++;
		return a / b;
	}
	float Min(float a, float b)
	{
		AddMin++;
		return a - b;
	}
	void ShowOpCount()
	{
		cout << "���� : " << AddNum << "���� : " << AddMin << "���� : " << AddMul << "������ : " << AddDiv;
	}
};
/*
int main(void)
{
	Calculator cal;
	cout << "3.2 + 2.4 = " << cal.Add(3.2f, 2.4f) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();

	return 0;
}
*/

// ���� 2��

class Printer
{
private:
	char savedLetter[100] = "";
	char inputLetter[100] = "";
public:
	void Save();
	void Print();
};

void Printer::Save()
{
	cin >> inputLetter;
	strcpy(savedLetter, inputLetter);
}

void Printer::Print()
{
	cout << savedLetter;
}

int main()
{
	Printer printer;
	int menu;
	while (1)
	{
		cout << "���ϴ� �޴��� �����ϼ���" << endl;
		cout << "1. ����" << endl << "2. ���" << endl << "else. ������" <<endl;
		cin >> menu; cout << endl;

		switch (menu)
		{
		case 1:
			printer.Save();
			break;
		case 2:
			printer.Print();
			break;
		default:
			return 0;
			break;
		}
	}
}