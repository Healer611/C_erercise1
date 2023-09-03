#define _CRT_SECURE_NO_WARNINGS 1
//Ѱ�ҷ�ֵ
//https://www.nowcoder.com/share/jump/1181516901693455621949
//int findPeakElement(int* nums, int numsLen) {
//    int left = 0;
//    int right = numsLen - 1;
//    while (left < right) {
//        int mid = ((right - left) >> 1) + left;
//        if (nums[mid] < nums[mid + 1])
//            left = mid + 1;
//        else
//            right = mid;
//    }
//    return left;
//}