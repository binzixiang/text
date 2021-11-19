#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


int main()
{
	while (true)
	{
	int a = 0;

	int b = 0;

	printf("加法运算\n");

	printf("请输入第一个整数\n");

	scanf("%d", &a);

	printf("请输入第二个整数\n");

	scanf("%d", &b);

	int c = 0;

	c = a + b;

	printf("计算结果为：%d\n",c);
	}
	return 0;
}