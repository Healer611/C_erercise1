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

//找问题通过调试
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//int main() {
//    int rows, coef = 1, space, i, j;
//    printf("请输入杨辉三角的行数：");
//    scanf("%d", &rows);
//    for (i = 0; i < rows; i++) {
//        for (space = 1; space <= rows - i; space++) {
//            printf("  ");
//        }
//        for (j = 0; j <= i; j++) {
//            if (j == 0 || i == 0) {
//                coef = 1;
//            }
//            else {
//                coef = coef * (i - j + 1) / j;
//            }
//            printf("%4d", coef);
//        }
//        printf("\n");
//    }
//    return 0;
//}

void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)
	{
		;
	}
}
int main()
{
	char arr1[20] = "xxxxxxxxxxxxxx";
	char arr2[] =   "hello bit";

	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}
