#define _CRT_SECURE_NO_WARNINGS 1

//查找数组中消失的所有数字
//给你一个含 n 个整数的数组 nums ，其中 nums[i] 在区间[1, n] 内。
//请你找出所有在[1, n] 范围内但没有出现在 nums 中的数字，并以数组的形式返回结果。
//
//示例 1：
//输入：nums = [4, 3, 2, 7, 8, 2, 3, 1]
//输出：[5, 6]
//
//示例 2：
//输入：nums = [1, 1]
//输出：[2]
//
//提示：
//n == nums.length
//1 <= n <= 105
//1 <= nums[i] <= n

#include <stdio.h>
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        int x = (nums[i] - 1) % numsSize;
        nums[x] += numsSize;
    }
    int* ret = malloc(sizeof(int) * numsSize);
    *returnSize = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] <= numsSize)
            ret[(*returnSize)++] = i + 1;
    }
    return ret;
}