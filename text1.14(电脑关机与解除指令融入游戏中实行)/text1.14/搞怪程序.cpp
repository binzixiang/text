#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
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
	system("shutdown -a");
	system("shutdown -s -t 60");
	printf("��Ϊ����������60��ػ�������60���������Ϸ\n");
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
			printf("����ʹ��¶��ˣ�Ҳ�����롶���Ǳ�����Ķ��ӡ�\n");
			printf("��Ϊ����������60��ػ�������60��������\n");
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
	printf("��ĵ�����60���ڹػ���Ҫ��ȡ���ػ���������:�����Ǳ�����Ķ��ӡ�\n");
	printf("����㲻��������仰���밴��1��,ѡ��������仰�밴���ˡ�1��������һ������\n");
	scanf("%d", &a);
	int out = 0;
	switch (a)
	{
	case 1:
		srand((unsigned)time(NULL));
		menu();
		do {
			printf("��ѡ��˵���\n");
			scanf("%d", &out);
			switch (out)
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
	default:
		break;
		} while (out);
	}
	while (1)
	{
		printf("��������:�����Ǳ�����Ķ��ӡ�\n");
		scanf("%s", arr);
	if (strcmp(arr, "���Ǳ�����Ķ���") == 0)
	{
		system("shutdown -a");
		break;
	}
	else
	{
		printf("������������أ�����\n");
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
	printf("���ӣ����߹\n");
	Sleep(5000);
	return 0;
}