#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()

{

    printf("�ӷ������밴1\n");

    printf("���������밴2\n");

    printf("�˷������밴3\n");

    printf("���������밴4\n");

    printf("ȡ�������밴5\n");

    while (1)

    {

        int xuanzhe = 0;

        scanf("%d", &xuanzhe);

        if (xuanzhe == 1)

        {

            printf("��ѡ����Ǽӷ�����\n");

            int a1 = 0;

            int a2 = 0;

            int a3 = 0;

            printf("���������һ������\n");

            scanf("%d", &a1);

            printf("��������ڶ�������\n");

            scanf("%d", &a2);

            a3 = a1 + a2;

            printf("������Ϊ:%d\n", a3);

        }

        else if (xuanzhe == 2)

        {

            printf("��ѡ����Ǽ�������\n");

            int b1 = 0;

            int b2 = 0;

            int b3 = 0;

            printf("���������һ������\n");

            scanf("%d", &b1);

            printf("��������ڶ�������\n");

            scanf("%d", &b2);

            b3 = b1 - b2;

            printf("������Ϊ:%d\n", b3);

        }

        else if (xuanzhe == 3)

        {

            printf("��ѡ����ǳ˷�����\n");

            int c1 = 0;

            int c2 = 0;

            int c3 = 0;

            printf("���������һ������\n");

            scanf("%d", &c1);

            printf("��������ڶ�������\n");

            scanf("%d", &c2);

            c3 = c1 * c2;

            printf("������Ϊ:%d\n", c3);

        }

        else if (xuanzhe == 4)

        {

            printf("��ѡ����ǳ�������\n");

            int d1 = 0;

            int d2 = 0;

            int d3 = 0;

            printf("���������һ������\n");

            scanf("%d", &d1);

            printf("��������ڶ�������\n");

            scanf("%d", &d2);

            d3 = d1 / d2;

            printf("������Ϊ:%d\n", d3);

        }

        else if (xuanzhe == 5)

        {

            printf("��ѡ�����ȡ������\n");

            int e1 = 0;

            int e2 = 0;

            int e3 = 0;

            printf("���������һ������\n");

            scanf("%d", &e1);

            printf("��������ڶ�������\n");

            scanf("%d", &e2);

            e3 = e1 % e2;

            printf("������Ϊ:%d\n", e3);

        }

        else

        {

            printf("������Ա̫�ˣ���δ�����������㹦��\n");

        }

    }

    return 0;
}