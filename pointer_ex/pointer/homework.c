#define _CRT_SECURE_NO_WARNINGS 1

//���Ͼ���
//��ҵ���ݣ�
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);

#include <stdio.h>
#define ROWS 4
#define COLS 4
int find(int(*p)[COLS], int target)
{
    int row = 0;
    int col = COLS - 1;
    while (row < ROWS && col >= 0) {
        if (p[row][col] == target)
            return 1;
        else if (p[row][col] < target)
            row++;
        else
            col--;
    }
    return 0;
}
int main()
{
    int arr[ROWS][COLS] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17} };
    int target = 9;
    if (find(arr, target)) {
        printf("Ŀ������ %d �����ھ����С�\n", target);
    }
    else {
        printf("Ŀ������ %d �������ھ����С�\n", target);
    }

    return 0;
}