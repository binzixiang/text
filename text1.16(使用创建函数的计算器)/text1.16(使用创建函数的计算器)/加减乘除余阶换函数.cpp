#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int add(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int multiply(int x, int y)
{
	return x * y;
}

int divide(int x, int y)
{
	return x / y;
}

int mod(int x, int y)
{
	return x % y;
}

int factorial(int x)
{
	int i = 0; int n = 1;
	for (i = 1; i <= x; i++)
	{
		n *= i;
	}
	return n;
}

int shier(int x)
{
	if (x > 0)
	{
		shier(x / 2);
		printf("%d", x % 2);
	}
	return 0;
}

int shiba(int x)
{
	if (x > 0)
	{
		shiba(x / 8);
		printf("%d", x % 8);
	}
	return 0;
}