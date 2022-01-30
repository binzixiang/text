#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//定义游戏属性
#define HANG 3
#define LIE 3

//游戏棋盘初始化
void initboard(char board[HANG][LIE], int hang, int lie);

//游戏棋盘打印
void displayboard(char board[HANG][LIE], int hang, int lie);

//玩家下棋
void playermove(char board[HANG][LIE], int hang, int lie);

//电脑下棋
void computermove(char board[HANG][LIE], int hang, int lie);

//判断输赢
char iswin(char board[HANG][LIE], int hang, int lie);

//判断是否下满棋
int isfull(char board[HANG][LIE], int hang, int lie);

