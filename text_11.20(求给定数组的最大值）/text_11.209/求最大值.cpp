#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	while (true)
	{
	printf("�������Ҫ�������\n");

	int a = 0;

	scanf("%d", &a);

	int arr[] = { 0 };

	printf("������������\n");

	int i = 0;

	for (i = 0; i < a ; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("�����������Ϊ:\n");

	for (i = 0; i < a ; i++)
	{
		printf("%d\n", arr[i]);
	}
	int max = 0;

	for (i = 0; i < a; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("���ֵΪ:%d\n", max);

	}
	return 0;
}