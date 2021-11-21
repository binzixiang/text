#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()

{

    printf("加法运算请按1\n");

    printf("减法运算请按2\n");

    printf("乘法运算请按3\n");

    printf("除法运算请按4\n");

    printf("取余运算请按5\n");

    while (1)

    {

        int xuanzhe = 0;

        scanf("%d", &xuanzhe);

        if (xuanzhe == 1)

        {

            printf("您选择的是加法运算\n");

            int a1 = 0;

            int a2 = 0;

            int a3 = 0;

            printf("请您输入第一个整数\n");

            scanf("%d", &a1);

            printf("请您输入第二个整数\n");

            scanf("%d", &a2);

            a3 = a1 + a2;

            printf("计算结果为:%d\n", a3);

        }

        else if (xuanzhe == 2)

        {

            printf("您选择的是减法运算\n");

            int b1 = 0;

            int b2 = 0;

            int b3 = 0;

            printf("请您输入第一个整数\n");

            scanf("%d", &b1);

            printf("请您输入第二个整数\n");

            scanf("%d", &b2);

            b3 = b1 - b2;

            printf("计算结果为:%d\n", b3);

        }

        else if (xuanzhe == 3)

        {

            printf("您选择的是乘法运算\n");

            int c1 = 0;

            int c2 = 0;

            int c3 = 0;

            printf("请您输入第一个整数\n");

            scanf("%d", &c1);

            printf("请您输入第二个整数\n");

            scanf("%d", &c2);

            c3 = c1 * c2;

            printf("计算结果为:%d\n", c3);

        }

        else if (xuanzhe == 4)

        {

            printf("您选择的是除法运算\n");

            int d1 = 0;

            int d2 = 0;

            int d3 = 0;

            printf("请您输入第一个整数\n");

            scanf("%d", &d1);

            printf("请您输入第二个整数\n");

            scanf("%d", &d2);

            d3 = d1 / d2;

            printf("计算结果为:%d\n", d3);

        }

        else if (xuanzhe == 5)

        {

            printf("您选择的是取余运算\n");

            int e1 = 0;

            int e2 = 0;

            int e3 = 0;

            printf("请您输入第一个整数\n");

            scanf("%d", &e1);

            printf("请您输入第二个整数\n");

            scanf("%d", &e2);

            e3 = e1 % e2;

            printf("计算结果为:%d\n", e3);

        }

        else

        {

            printf("本程序员太菜，尚未开发其他运算功能\n");

        }

    }

    return 0;
}