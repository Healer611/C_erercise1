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
            flag++;
        }

        if (isWin(x, y) == 0)
            printf("ƽ��\n");
        else if (isWin(x, y) == 1)
            printf("���ӻ�ʤ\n");
        else if (isWin(x, y) == 2)
            printf("���ӻ�ʤ\n");
        
    }

}
int main()
{
    int input = 0;
    do
    {
        menuView();
        printf("��ѡ��");
        scanf("%d", &input);
        switch (input) {
        case 1:
            gameView();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("�������������ѡ��.\n");
            break;
        }
    } while (input);
    return 0;
}

