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


int isWin(int x, int y) {
    int i, j;
    for (i = 0; i < 19; i++) {
        for (j = 0; j < 19; j++) {
            if (map[i][j] == 0) {
                continue;
            }
                
            //������������
            if (j < 15)
                if (map[i][j] == map[i][j + 1] && map[i][j] == map[i][j + 2]
                    && map[i][j] == map[i][j + 3] && map[i][j] == map[i][j + 4])
                    return map[i][j];

            //������������
            if (i < 15)
                if (map[i][j] == map[i + 1][j] && map[i][j] == map[i + 2][j]
                    && map[i][j] == map[i + 3][j] && map[i][j] == map[i + 4][j])
                    return map[i][j];

            //��б����������-> " \ "
            if (i < 15 && j < 15)
                if (map[i][j] == map[i + 1][j + 1] && map[i][j] == map[i + 2][j + 2]
                    && map[i][j] == map[i + 3][j + 3] && map[i][j] == map[i + 4][j + 4])
                    return map[i][j];

            //��б����������-> " / "
            if (i < 15 && j > 4)
                if (map[i][j] == map[i + 1][j - 1] && map[i][j] == map[i + 2][j - 2]
                    && map[i][j] == map[i + 3][j - 3] && map[i][j] == map[i + 4][j - 4])
                    return map[i][j];

            
        }
    }
    return 0;
}


int playerMove(int x, int y) {
    while (1) {
        if (x >= 0 && x <= 19 && y >= 0 && y <= 19) {
            if (map[x ][y ] == 0) {
                if (flag % 2 == 0)
                    map[x ][y ] = 1;//�º���
                else
                    map[x ][y ] = 2;//�°���
                //���ӳɹ�
                return 1;
            }
            else {
                //��λ����������
                return 0;
            }
        }
        else {
            //���겻�Ϸ�
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
        printf("%3d ",i);
    }
    printf("\n   ");
    for (i = 0; i < 19; i++) {
        printf("+---");
    }
    printf("+\n");

    for (i = 0; i < 19; i++) {
        
        printf("%2d |", i);

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
    printf("\n\a��ϲ��Ӯ�ˣ�\n");
}
