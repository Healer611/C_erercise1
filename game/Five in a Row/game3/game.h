#pragma once

#include <stdio.h>
#include <Windows.h>
int map[19][19];//����
int flag;//�غ���

//��ʼ��
void init();

//��Ϸ�˵�
void menuView();

//��ӡ����
void gameView_ShowMap();

//�������
int playerMove(int x, int y);

//�ж���Ӯ
int isWin(int x, int y);
