#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	while (true)
	{
	printf("请给出所要求的数组\n");

	int a = 0;

	scanf("%d", &a);

	int arr[] = { 0 };

	printf("请您输入数组\n");

	int i = 0;

	for (i = 0; i < a ; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("您输入的数组为:\n");

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
	printf("最大值为:%d\n", max);

	}
	return 0;
}