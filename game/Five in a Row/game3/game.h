#pragma once

#include <stdio.h>
#include <Windows.h>
int map[19][19];//棋盘
int flag;//回合数

//初始化
void init();

//游戏菜单
void menuView();

//打印棋盘
void gameView_ShowMap();

//玩家下棋
int playerMove(int x, int y);

//判断输赢
int isWin(int x, int y);
