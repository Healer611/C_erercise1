#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"


void init() {
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            map[i][j] = 0;
        }
    }
    flag = 0;
}

static int IsFull()
{
    int i, j;
    for (i = 0; i < 19; i++) {
        for (j = 0; j < 19; j++) {
            if (map[i][j] == 0)
                return 0;
        }
    }
    return 1;
}

int isWin(int x, int y) {
    int player = map[x][y];
    int i,j, count;


    // 检查水平方向
    count = 0;
    for (i = 0; i < 19; i++) {
        count = (map[x][i] == player) ? count + 1 : 0;
        if (count >= 5) {
            if (flag % 2 == 0)
                return 1;
            else if (flag % 2 != 0)
                return 2;
        }
    }

    // 检查垂直方向
    count = 0;
    for (i = 0; i < 19; i++) {
        count = (map[i][y] == player) ? count + 1 : 0;
        if (count >= 5) {
            if (flag % 2 == 0)
                return 1;
            else if (flag % 2 != 0)
                return 2;
        }
    }

    // 检查正对角线方向
    count = 0;
    int start_x = x < y ? x : y;
    int start_y = y < x ? y : x;
    for (i = 0; i < 19 - start_x && i < 19 - start_y; i++) {
        count = (map[x - start_x + i][y - start_y + i] == player) ? count + 1 : 0;
        if (count >= 5) {
            if (flag % 2 == 0)
                return 1;
            else if (flag % 2 != 0)
                return 2;
        }
    }

    // 检查反对角线方向
    count = 0;
    start_x = x < 18 - y ? x : 18 - y;
    start_y = y < 18 - x ? y : 18 - x;
    for (i = 0; i <= start_x && i <= start_y; i++) {
        count = (map[x - start_x + i][y + start_y - i] == player) ? count + 1 : 0;
        if (count >= 5) {
            if (flag % 2 == 0)
                return 1;
            else if (flag % 2 != 0)
                return 2;
        }
    }
    if (IsFull())
        return 0;
    return -1;
}


int playerMove(int x, int y) {
    while (1) {
        if (x >= 0 && x <= 19 && y >= 0 && y <= 19) {
            if (map[x - 1][y - 1] == 0 ) {
                if (flag % 2 == 0)
                    map[x - 1][y - 1] = 1;//下黑子
                else
                    map[x - 1][y - 1] = 2;//下白子
                //落子成功
                return 1;
            }
            else {
                //该位置已有棋子
                return 0;
            }
        }
        else {
            //坐标不合法
            return -1;
        }
    }
}


void menuView() {
    printf("*************************\n");
    printf("*****   1. play    ******\n");
    printf("*****   0. exit    ******\n");
    printf("*************************\n");
}


void gameView_ShowMap() {
    int i, j;
    printf("   ");
    for (i = 0; i < 19; i++) {
        printf("%3d ",i+1);
    }
    printf("\n   ");
    for (i = 0; i < 19; i++) {
        printf("+---");
    }
    printf("+\n");

    for (i = 0; i < 19; i++) {
        
        printf("%2d |", i + 1);

        for (j = 0; j < 19; j++) {
            printf(" %d ", map[i][j]);
            if (j < 18)
                printf("|");
        }
        printf("|\n");

        if(i<18)
            printf("   |");
        if(i==18)
            printf("   +");
        for (j = 0; j < 19; j++) {
            printf("---");
            if (j < 18)
                printf("+");
        }
        printf("+\n");
    }
}



void winView() {
    printf("\n\a恭喜你赢了！\n");
}
