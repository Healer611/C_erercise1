#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//struct drink
//{
//	int price;
//	int empty;
//};
//int main()
//{
//	int money = 20;
//	struct drink a = { 1,0 };
//	int sum = 0;
//	while (money) {
//		money--;
//		sum++;
//		a.empty++;
//		if (a.empty % 2 == 0) {
//			sum++;
//			a.empty = 0;
//			a.empty += 1;
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}


int main()
{
    int i = 0;
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    for (i = 0; i <= 12; i++)
    {
        arr[i] = 0;
        printf("hello bit\n");
    }
    return 0;
}