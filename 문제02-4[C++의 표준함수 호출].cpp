#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>

void main()
{
	// ���� 1��

	char testString[20] = "�ƾ��׽�Ʈ�Դϴ�";
	int stringLen = strlen(testString);
	strcat_s(testString, "���ٿ�������");
	char strCpy[20];
	strcpy_s(strCpy, testString);
	strcmp(strCpy, testString);

	// ���� 2��

	srand((unsigned int)time(0));

	for (int i = 0; i < 5; i++)
	{
		std::cout << rand() % 101;
	}
}