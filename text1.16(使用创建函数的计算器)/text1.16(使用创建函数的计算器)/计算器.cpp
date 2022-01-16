#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include"加减乘除余阶换函数.h"

void menu1()
{
	printf("1.加法运算\n");
	printf("2.减法运算\n");
	printf("3.乘法运算\n");
	printf("4.除法运算\n");
	printf("5.取余运算\n");
	printf("6.n的阶乘\n");
	printf("7.进制换算\n");
	printf("8.退出计算器\n");
}
void menu2()
{
	printf("1.十进制转二进制\n");
	printf("2.十进制转八进制\n");
	printf("3.返回上一级\n");
	printf("4.退出计算器\n");
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
			printf("请输入你要相加的数\n");
			scanf("%d %d", &x, &y);
			printf("加法运算结果为：%d\n", add(x, y));
			break;
		case 2:
			printf("请输入你要相减的数\n");
			scanf("%d %d", &x, &y);
			printf("减法运算结果为：%d\n", subtract(x, y));
			break;
		case 3:
			printf("请输入你要相乘的数\n");
			scanf("%d %d", &x, &y);
			printf("乘法运算结果为：%d\n", multiply(x, y));
		case 4:
			printf("请输入你要相除的数\n");
			scanf("%d %d", &x, &y);
			printf("除法运算结果为：%d\n", divide(x, y));
			break;
		case 5:
			printf("请输入你要取余的数\n");
			scanf("%d %d", &x, &y);
			printf("取余运算结果为：%d\n", mod(x, y));
			break;
		case 6:
			printf("请输入你要计算的阶乘n\n");
			scanf("%d", &x);
			printf("阶乘计算结果为：%d\n", factorial(x));
			break;
		case 7:
			while (1)
			{
				menu2();
				printf("请输入你要进行的进制换算\n");
				scanf("%d", &a);
				switch (a)
				{
				case 1:
					printf("请输入十进制数字\n");
					scanf("%d", &x);
					printf("\n十进制转二进制结果为：%d\n", shier(x));
					break;
				case 2:
					printf("请输入十进制数字\n");
					scanf("%d", &x);
					printf("\n十进制转八进制结果为：%d\n", shiba(x));
					break;
				case 3:
					goto again;
					break;
				case 4:
					return 0;
				default:
					printf("选择错误，请重新选择\n");
					break;
				}
			}
			break;
		case 8:
			return 0;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	}
	return 0;
}