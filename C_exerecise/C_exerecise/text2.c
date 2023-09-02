#define _CRT_SECURE_NO_WARNINGS 1

//������������ʧ����������
//����һ���� n ������������ nums ������ nums[i] ������[1, n] �ڡ�
//�����ҳ�������[1, n] ��Χ�ڵ�û�г����� nums �е����֣������������ʽ���ؽ����
//
//ʾ�� 1��
//���룺nums = [4, 3, 2, 7, 8, 2, 3, 1]
//�����[5, 6]
//
//ʾ�� 2��
//���룺nums = [1, 1]
//�����[2]
//
//��ʾ��
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