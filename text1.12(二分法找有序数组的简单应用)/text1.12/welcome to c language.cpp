#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<Windows.h>

int main()
{
	//打印welcome to c language
	char arr1[] = "####hello world####";
	char arr2[] = "###################";
	int left = 0;
	int right = (sizeof(arr2) - 1) / sizeof(arr2[0]);
	//或者使用int right = strlen（arr2）-1
	while (left <= right)
	{
		arr2[left] = arr1[left];

		arr2[right] = arr1[right];

		left++;

		right--;

		printf("%s\n", arr2);

		Sleep(1000);

		system("cls");
	}
	printf("%s\n", arr2);

	return 0;
}