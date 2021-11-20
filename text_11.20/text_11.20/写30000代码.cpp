#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	printf("写出三万行代码就是C语言热爱者");

	int line = 1;

	while (line < 30001)
	{
	printf("写代码第:%d行\n", line);

	line++;
	}
	if (line == 30001)
	{
		printf("您为C语言狂热者");

	}
	return 0;
}