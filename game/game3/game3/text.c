#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void gameView()
{
    init();
    int x = 0, y = 0;
    int ret = 0;//辅助判断坐标是否合法
    while (1) {
        gameView_ShowMap();

        printf("请输入要下棋的坐标：");
        scanf("%d %d", &x, &y);

        if (playerMove(x, y) == 0) {
            printf("\n!!!该坐标已被占用!!!\n");
            Sleep(2000);
            continue;
        }
        else if (playerMove(x, y) == -1) {
            printf("\n!!!请输入合法坐标!!!\n");
            Sleep(2000);
            continue;
        }
        else {
            flag++;
        }

        if (isWin(x, y) == 0)
            printf("平局\n");
        else if (isWin(x, y) == 1)
            printf("黑子获胜\n");
        else if (isWin(x, y) == 2)
            printf("白子获胜\n");
        
    }

}
int main()
{
    int input = 0;
    do
    {
        menuView();
        printf("请选择：");
        scanf("%d", &input);
        switch (input) {
        case 1:
            gameView();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("输入错误，请重新选择.\n");
            break;
        }
    } while (input);
    return 0;
}

