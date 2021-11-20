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
	printf("创建函数的加法运算\n");

	while (true)
	{

	int num1 = 0;

	int num2 = 0;

	printf("请输入第一个整数\n");

	scanf("%d", &num1);

	printf("请输入第二个整数\n");

	scanf("%d", &num2);

	int sum3 = add(num1, num2);
	
	printf("计算结果为:%d\n",sum3);
	}
	return 0;
}