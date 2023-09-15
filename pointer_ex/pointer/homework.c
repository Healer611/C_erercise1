#define _CRT_SECURE_NO_WARNINGS 1

//杨氏矩阵
//作业内容：
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

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
//int main()
//{
//    int arr[ROWS][COLS] = {
//        {1, 4, 7, 11},
//        {2, 5, 8, 12},
//        {3, 6, 9, 16},
//        {10, 13, 14, 17} };
//    int target = 9;
//    if (find(arr, target)) {
//        printf("目标数字 %d 存在于矩阵中。\n", target);
//    }
//    else {
//        printf("目标数字 %d 不存在于矩阵中。\n", target);
//    }
//
//    return 0;
//}
