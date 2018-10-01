#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>

void main()
{
	// 문제 1번

	char testString[20] = "아아테스트입니당";
	int stringLen = strlen(testString);
	strcat_s(testString, "덧붙여버리기");
	char strCpy[20];
	strcpy_s(strCpy, testString);
	strcmp(strCpy, testString);

	// 문제 2번

	srand((unsigned int)time(0));

	for (int i = 0; i < 5; i++)
	{
		std::cout << rand() % 101;
	}
}