#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("**********猜1到100的数字游戏*********\n");
	printf("*************************************\n");
	printf("************1.play*******************\n");
	printf("************0.exit*******************\n");
	printf("*************************************\n");
}
void games()
{
	int input = 0;
	int num = rand() % 100 + 1;
	
	while (1)
	{
		printf("请输入你要猜的数字\n");
		scanf("%d", &input);
		if (input < num)
		{
			printf("猜小了\n");
		}
		else if (input > num)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	menu(); 
	do {
		printf("请选择菜单：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			games();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}