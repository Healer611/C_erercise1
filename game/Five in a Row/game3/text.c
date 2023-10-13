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
            flag++;//切换回合
        }

        if (isWin(x, y) == 0) {
            continue;
        }
           
        else if (isWin(x, y) == 1) {
            printf("黑子获胜\n");
            break;
        }

        else if (isWin(x, y) == 2) {
            printf("白子获胜\n");
            break;
        }
    }

}

int main()
{
    int testflag = 0;
    //init测试代码
    
    init();
    if (flag != 0) {
        printf("init()错误");
        exit(0);
    }
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            if (map[i][j]) {
                printf("init()错误");
                exit(0);
            }
        }
    }
    printf("init()测试成功\n");
    testflag++;
    

    //playerMove测试代码
    
    int result = 1;
    result &= playerMove(2, 2);
    result &= playerMove(2, 3);
    result &= playerMove(2, 4);
    result &= playerMove(2, 5);
    if (result != 1 || (map[2][2] && map[2][3] && map[2][4] && map[2][5]) != 1) {
        printf("playerMove()错误");
        exit(0);
    }
    flag = 1;
    result &= playerMove(2, 5);
    if (result != 0 || map[2][5] != 1) {
        printf("playerMove()错误");
        exit(0);
    }
    printf("playerMove()测试成功\n");
    testflag++;
    

    //isWin测试代码
    
    playerMove(2, 1);
    if (isWin(2, 1)) {
        printf("isWin()错误");
        exit(0);
    }
    playerMove(1, 0);
    playerMove(3, 2);
    playerMove(4, 3);
    playerMove(5, 4);
    if (isWin(1, 0) != 2) {
        printf("isWin()错误");
        exit(0);
    }
    printf("isWin()测试成功\n");
    testflag++;
    

    if (testflag == 3) {
        printf("service代码测试成功\n");
    }
    return 0;
}


//int main()
//{
//    int input = 0;
//    do
//    {
//        menuView();
//        printf("请选择：");
//        scanf("%d", &input);
//        switch (input) {
//        case 1:
//            gameView();
//            break;
//        case 0:
//            printf("退出游戏\n");
//            break;
//        default:
//            printf("输入错误，请重新选择.\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}

