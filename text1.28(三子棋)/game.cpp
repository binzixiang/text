#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void initboard(char board[HANG][LIE], int hang, int lie)
{
	int i = 0;
	for (i = 0; i < hang; i++)
	{
		int j = 0;
		for (j = 0; j < lie; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void displayboard(char board[HANG][LIE], int hang, int lie)
{
	int i = 0;
	for (i = 0; i < hang; i++)
	{
		int j = 0;
		if (i == 0)
		{
			for (j = 0; j < lie; j++)
			{
				printf("|---");

				if (j == lie - 1)
				{
					printf("|\n");
				}
			}
		}
		for (j = 0; j < lie; j++)
		{
			printf("| %c ", board[i][j]);
			if (j == lie - 1)
			{
				printf("|\n");
			}
		}
		for (j = 0; j < lie; j++)
		{
			printf("|---");
			if (j == lie - 1)
			{
				printf("|\n");
			}
		}
	}
}

void playermove(char board[HANG][LIE], int hang, int lie)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家走>\n");
		printf("请输入坐标：(输入格式为《第几行|空格|第几列》)\n");
		scanf("%d %d", &x, &y);
		//判断坐标的合法性
		if (x >= 1 && x <= hang && y >= 0 && y <= lie)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标被占用，请重新输入\n");
			}
		}
		else
		{
			printf("你的坐标格式错误，请重新输入\n");
		}
	}
}

void computermove(char board[HANG][LIE], int hang, int lie)
{
	printf("电脑走>\n");
	while (1)
	{
		int x = rand() % hang;
		int y = rand() % lie;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}	
}

int isfull(char board[HANG][LIE], int hang, int lie)
{
	int i = 0;
	for (i = 0; i < hang; i++)
	{
		int j = 0;
		for (j = 0; j < lie; j++)
		{
			if (board[i][j] == ' ')
			{
				return 1;
			}
		}
	}
	return 0;
}

char iswin(char board[HANG][LIE], int hang, int lie)
{
	if (hang <= 3)
	{
		int i = 0;
		//判断是否玩家赢
		for (i = 0; i < hang; i++)
		{
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			{
				return board[i][0];
			}
		}
		for (i = 0; i < lie; i++)
		{
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			{
				return board[0][i];
			}
		}
		if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		{
			return board[0][0];
		}
		if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
		{
			return board[0][2];
		}
		//判断是否下满棋了
		int ret = isfull(board, HANG, LIE);
		if (ret == 1)
		{
			return 'c';
		}
		else
		{
			return 'e';
		}
	}
}
