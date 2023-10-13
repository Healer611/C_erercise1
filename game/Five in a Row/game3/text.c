#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void gameView()
{
    init();
    int x = 0, y = 0;
    int ret = 0;//�����ж������Ƿ�Ϸ�
    while (1) {
        gameView_ShowMap();

        printf("������Ҫ��������꣺");
        scanf("%d %d", &x, &y);

        if (playerMove(x, y) == 0) {
            printf("\n!!!�������ѱ�ռ��!!!\n");
            Sleep(2000);
            continue;
        }
        else if (playerMove(x, y) == -1) {
            printf("\n!!!������Ϸ�����!!!\n");
            Sleep(2000);
            continue;
        }
        else {
            flag++;//�л��غ�
        }

        if (isWin(x, y) == 0) {
            continue;
        }
           
        else if (isWin(x, y) == 1) {
            printf("���ӻ�ʤ\n");
            break;
        }

        else if (isWin(x, y) == 2) {
            printf("���ӻ�ʤ\n");
            break;
        }
    }

}

int main()
{
    int testflag = 0;
    //init���Դ���
    
    init();
    if (flag != 0) {
        printf("init()����");
        exit(0);
    }
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            if (map[i][j]) {
                printf("init()����");
                exit(0);
            }
        }
    }
    printf("init()���Գɹ�\n");
    testflag++;
    

    //playerMove���Դ���
    
    int result = 1;
    result &= playerMove(2, 2);
    result &= playerMove(2, 3);
    result &= playerMove(2, 4);
    result &= playerMove(2, 5);
    if (result != 1 || (map[2][2] && map[2][3] && map[2][4] && map[2][5]) != 1) {
        printf("playerMove()����");
        exit(0);
    }
    flag = 1;
    result &= playerMove(2, 5);
    if (result != 0 || map[2][5] != 1) {
        printf("playerMove()����");
        exit(0);
    }
    printf("playerMove()���Գɹ�\n");
    testflag++;
    

    //isWin���Դ���
    
    playerMove(2, 1);
    if (isWin(2, 1)) {
        printf("isWin()����");
        exit(0);
    }
    playerMove(1, 0);
    playerMove(3, 2);
    playerMove(4, 3);
    playerMove(5, 4);
    if (isWin(1, 0) != 2) {
        printf("isWin()����");
        exit(0);
    }
    printf("isWin()���Գɹ�\n");
    testflag++;
    

    if (testflag == 3) {
        printf("service������Գɹ�\n");
    }
    return 0;
}

//���˲���
//int main()
//{
//    int input = 0;
//    do
//    {
//        menuView();
//        printf("��ѡ��");
//        scanf("%d", &input);
//        switch (input) {
//        case 1:
//            gameView();
//            break;
//        case 0:
//            printf("�˳���Ϸ\n");
//            break;
//        default:
//            printf("�������������ѡ��.\n");
//            break;
//        }
//    } while (input);
//    return 0;
//}

