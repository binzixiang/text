#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include"�Ӽ��˳���׻�����.h"

void menu1()
{
	printf("1.�ӷ�����\n");
	printf("2.��������\n");
	printf("3.�˷�����\n");
	printf("4.��������\n");
	printf("5.ȡ������\n");
	printf("6.n�Ľ׳�\n");
	printf("7.���ƻ���\n");
	printf("8.�˳�������\n");
}
void menu2()
{
	printf("1.ʮ����ת������\n");
	printf("2.ʮ����ת�˽���\n");
	printf("3.������һ��\n");
	printf("4.�˳�������\n");
}
int main()
{
	again:
	while (1)
	{
		menu1();
		int input = 0; int x = 0; int y = 0; int a = 0;
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ҫ��ӵ���\n");
			scanf("%d %d", &x, &y);
			printf("�ӷ�������Ϊ��%d\n", add(x, y));
			break;
		case 2:
			printf("��������Ҫ�������\n");
			scanf("%d %d", &x, &y);
			printf("����������Ϊ��%d\n", subtract(x, y));
			break;
		case 3:
			printf("��������Ҫ��˵���\n");
			scanf("%d %d", &x, &y);
			printf("�˷�������Ϊ��%d\n", multiply(x, y));
		case 4:
			printf("��������Ҫ�������\n");
			scanf("%d %d", &x, &y);
			printf("����������Ϊ��%d\n", divide(x, y));
			break;
		case 5:
			printf("��������Ҫȡ�����\n");
			scanf("%d %d", &x, &y);
			printf("ȡ��������Ϊ��%d\n", mod(x, y));
			break;
		case 6:
			printf("��������Ҫ����Ľ׳�n\n");
			scanf("%d", &x);
			printf("�׳˼�����Ϊ��%d\n", factorial(x));
			break;
		case 7:
			while (1)
			{
				menu2();
				printf("��������Ҫ���еĽ��ƻ���\n");
				scanf("%d", &a);
				switch (a)
				{
				case 1:
					printf("������ʮ��������\n");
					scanf("%d", &x);
					printf("\nʮ����ת�����ƽ��Ϊ��%d\n", shier(x));
					break;
				case 2:
					printf("������ʮ��������\n");
					scanf("%d", &x);
					printf("\nʮ����ת�˽��ƽ��Ϊ��%d\n", shiba(x));
					break;
				case 3:
					goto again;
					break;
				case 4:
					return 0;
				default:
					printf("ѡ�����������ѡ��\n");
					break;
				}
			}
			break;
		case 8:
			return 0;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	}
	return 0;
}