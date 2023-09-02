#define _CRT_SECURE_NO_WARNINGS 1
//https://www.nowcoder.com/share/jump/1181516901693638262027
//两数之和
//描述
//给出一个整型数组 numbers 和一个目标值 target，请在数组中找出两个加起来等于目标值的数的下标，返回的下标按升序排列。
//（注：返回的数组下标从1开始算起，保证target一定可以由数组里面2个数字相加得到）
//
//数据范围：
//2≤len(numbers)≤10^5
//−10≤numbers≤10^9
//0≤target≤10^9
//
//示例1
//输入：[3, 2, 4], 6
//返回值：[2, 3]
//说明：因为 2 + 4 = 6 ，而 2的下标为2 ， 4的下标为3 ，又因为 下标2 < 下标3 ，所以返回[2, 3]
//
//示例2
//输入：[20, 70, 110, 150], 90
//返回值：[1, 2]
//说明：20 + 70 = 90

//********尝试第一次**************
/*
struct Hash {
    int value;
    int index;
};
int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
    struct Hash* hash = (struct Hash*)malloc(sizeof(struct Hash) * numbersLen);
    int* result = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < numbersLen; i++) {
        int temp = target - numbers[i];
        int found = 0;
        for (int j = 0; j < i; j++) {
            if (hash[j].value == temp) {
                result[0] = hash[j].index + 1;
                result[1] = i + 1;
                found = 1;
                break;
            }
        }
        if (found == 0) {
            hash[i].value = numbers[i];
            hash[i].index = i;
        }
        else {
            break;
        }
    }
    *returnSize = 2;
    free(hash);
    return result;
}
*/
//********尝试第二次成功**************
int* twoSum(int* numbers, int numbersLen, int target, int* returnSize) {
    int* x = (int*)malloc(sizeof(int) * 2);
    for (int i = 0; i < numbersLen; i++) {
        if (numbers[i] > target)
            continue;
        for (int j = i + 1; j < numbersLen; j++) {
            int sum = numbers[i] + numbers[j];
            if (sum == target) {
                x[0] = i + 1;
                x[1] = j + 1;
                *returnSize = 2;
                return x;
            }
        }
    }
    *returnSize = 0;
    return 0;
}