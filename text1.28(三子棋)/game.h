#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//������Ϸ����
#define HANG 3
#define LIE 3

//��Ϸ���̳�ʼ��
void initboard(char board[HANG][LIE], int hang, int lie);

//��Ϸ���̴�ӡ
void displayboard(char board[HANG][LIE], int hang, int lie);

//�������
void playermove(char board[HANG][LIE], int hang, int lie);

//��������
void computermove(char board[HANG][LIE], int hang, int lie);

//�ж���Ӯ
char iswin(char board[HANG][LIE], int hang, int lie);

//�ж��Ƿ�������
int isfull(char board[HANG][LIE], int hang, int lie);

