#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	printf("д�������д������C�����Ȱ���");

	int line = 1;

	while (line < 30001)
	{
	printf("д�����:%d��\n", line);

	line++;
	}
	if (line == 30001)
	{
		printf("��ΪC���Կ�����");

	}
	return 0;
}