#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

 int add(int x, int y)
{
	int z = 0;

	z = x + y;

	return z;
}

int main()
{
	printf("���������ļӷ�����\n");

	while (true)
	{

	int num1 = 0;

	int num2 = 0;

	printf("�������һ������\n");

	scanf("%d", &num1);

	printf("������ڶ�������\n");

	scanf("%d", &num2);

	int sum3 = add(num1, num2);
	
	printf("������Ϊ:%d\n",sum3);
	}
	return 0;
}