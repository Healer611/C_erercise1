#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i;
	for (i = 0; i < row; i++) {
		int j;
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i;
	int j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
	printf("\n");
}

void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	while (1) {
		printf("������Ҫ��������꣺");
		scanf("%d %d", &x, &y);
		if (x >= 0 && x <= row && y >= 0 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x-1][y-1] = '*';
				break;
			}
			else {
				printf("�����걻ռ��,��������������\n");
			}
			
		}
		else {
			printf("������Ƿ������������롣\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("��������\n");
	while (1) {
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ') {
			board[x][y] = '#';
			break;
		}
	}
}
static int IsFull(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char IsWin(char board[ROW][COL],int row,int col)
{
	for (int i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}

	for (int i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
		{
			return board[0][i];
		}
	}

	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	if (IsFull(board, row, col))
		return 'Q';

	return 'C';
}