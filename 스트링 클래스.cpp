#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string str1 = "I Like ";
	string str2= "string class";
	string str3 = str1 + str2;

	cout << str1 << '\n';
	cout << str2 << '\n';
	cout << str3 << '\n';

	str1 += str2;
	if (str1 == str3)
		cout << "str1 == str3!" << '\n';
	else
		cout << "str1 != str3!" << '\n';

	string str4;
	cout << "���ڿ� �Է�: ";
	cin >> str4;
	cout << "�Է��� ���ڿ�: " << str4 << endl;
	return 0;
}