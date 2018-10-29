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
	cout << "문자열 입력: ";
	cin >> str4;
	cout << "입력한 문자열: " << str4 << endl;
	return 0;
}