#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//冒泡排序
//void sort(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz-1; i++) {
//		int j;
//		for (j = 0; j < sz - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int i;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}


//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//void init(int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++) {
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int sz)
//{
//	for (int i = 0; i < sz / 2; i++) {
//		int temp = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = temp;
//	}
//}
//int main()
//{
//	int arr[10];
//	init(arr,10);
//	int sz;
//	printf("想输入几个数字：");
//	scanf("%d", &sz);
//	for (int i = 0; i < sz; i++)
//		scanf("%d", &arr[i]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}


/*
递归方式：
对于字符串“abcdefg”，递归实现的大概原理：
  1. 交换a和g，
  2. 以递归的方式逆置源字符串的剩余部分，剩余部分可以看成一个有效的字符串，再以类似的方式逆置
*/
//#include <string.h>
//void reverse_string(char s[])
//{
//	size_t len = strlen(s);
//	char tmp = s[0];
//	s[0] = s[len - 1];
//	s[len - 1] = '\0';
//	if (strlen(s + 1) >= 2)
//		reverse_string(s + 1);
//	s[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "asdfghgh";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void Change(char arr1[], char arr2[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		char tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("--------Finish Change-------\n");
//	printf("arr1 = %s\narr2 = %s\n", arr1, arr2);
//}
//int main()
//{
//	char arr1[10] = "aifbwswad";
//	char arr2[10] = "jeiwubefh";
//	printf("arr1 = %s\n", arr1);
//	printf("arr2 = %s\n", arr2);
//	Change(arr1, arr2);
//	return 0;
//}



//描述
//输入两个升序排列的序列，将两个序列合并为一个有序序列并输出。
//
//输入描述：
//输入包含三行，
//
//第一行包含两个正整数n, m，用空格分隔。n表示第二行第一个升序序列中数字的个数，m表示第三行第二个升序序列中数字的个数。
//
//第二行包含n个整数，用空格分隔。
//
//第三行包含m个整数，用空格分隔。
//输出描述：
//输出为一行，输出长度为n + m的升序序列，即长度为n的升序序列和长度为m的升序序列中的元素重新进行升序序列排列合并。
//输入：
//5 6
//1 3 7 9 22
//2 8 10 17 33 44
//输出：
//1 2 3 7 8 9 10 17 22 33 44

//int main() {
//    int n, m;
//    scanf("%d %d", &n, &m);
//    int a[10000];
//    for (int i = 0; i < n; i++)
//        scanf("%d", &a[i]);
//    int b[10000];
//    for (int i = 0; i < m; i++)
//        scanf("%d", &b[i]);
//    int c[10000];
//    int z = 0;
//    for (int i = 0; i < m + n; i++) {
//        if (i < n) {
//            c[i] = a[i];
//            z += 1;
//        }
//        else {
//            c[i] = b[i - z];
//        }
//    }
//    for (int i = 0; i < m + n - 1; i++) {
//        for (int x = 0; x < m + n - 1; x++) {
//            if (c[x] > c[x + 1]) {
//                int t = 0;
//                t = c[x];
//                c[x] = c[x + 1];
//                c[x + 1] = t;
//            }
//        }
//    }
//    for (int i = 0; i < m + n; i++) {
//        printf("%d ", c[i]);
//    }
//    return 0;
//}