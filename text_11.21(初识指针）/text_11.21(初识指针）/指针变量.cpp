#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;

	printf("������һ��ֵ\n");

	scanf("%d", &a);

	printf("�������ֵΪ:%d\n",a);

	int* pa = &a;

	printf("%p\n", &a);

	return 0;
}