#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("***********************************\n");
	printf("**********                *********\n");
	printf("**********     三子棋     *********\n");
	printf("**********     1.play     *********\n");
	printf("**********     0.exit     *********\n");
	printf("**********                *********\n");
	printf("***********************************\n");
}

void game()
{
	char board[HANG][LIE];//创建数组
	initboard(board, HANG, LIE);//数组初始化
	displayboard(board, HANG, LIE);//打印棋盘
	char ret = 0;//接收游戏状态
	while (1)
	{
		playermove(board, HANG, LIE);//玩家下棋
		displayboard(board, HANG, LIE);
		ret = iswin(board, HANG, LIE);
		if (ret != 'c')
		{
			break;
		}
		computermove(board, HANG, LIE);//电脑下棋
		displayboard(board, HANG, LIE);
		ret = iswin(board, HANG, LIE);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢了，棋盘如下：\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了，棋盘如下：\n");
	}	
	else
	{
		printf("此局游戏为平局，棋盘如下\n");
	}
	displayboard(board, HANG, LIE);
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
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