#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;

	printf("请输入一个值\n");

	scanf("%d", &a);

	printf("您输入的值为:%d\n",a);

	int* pa = &a;

	printf("%p\n", &a);

	return 0;
}