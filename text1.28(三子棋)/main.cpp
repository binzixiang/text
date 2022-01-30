#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("***********************************\n");
	printf("**********                *********\n");
	printf("**********     ������     *********\n");
	printf("**********     1.play     *********\n");
	printf("**********     0.exit     *********\n");
	printf("**********                *********\n");
	printf("***********************************\n");
}

void game()
{
	char board[HANG][LIE];//��������
	initboard(board, HANG, LIE);//�����ʼ��
	displayboard(board, HANG, LIE);//��ӡ����
	char ret = 0;//������Ϸ״̬
	while (1)
	{
		playermove(board, HANG, LIE);//�������
		displayboard(board, HANG, LIE);
		ret = iswin(board, HANG, LIE);
		if (ret != 'c')
		{
			break;
		}
		computermove(board, HANG, LIE);//��������
		displayboard(board, HANG, LIE);
		ret = iswin(board, HANG, LIE);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("���Ӯ�ˣ��������£�\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ�ˣ��������£�\n");
	}	
	else
	{
		printf("�˾���ϷΪƽ�֣���������\n");
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
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}