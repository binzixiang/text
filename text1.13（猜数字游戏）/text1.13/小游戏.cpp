#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("**********��1��100��������Ϸ*********\n");
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
		printf("��������Ҫ�µ�����\n");
		scanf("%d", &input);
		if (input < num)
		{
			printf("��С��\n");
		}
		else if (input > num)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶���\n");
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
		printf("��ѡ��˵���\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			games();
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