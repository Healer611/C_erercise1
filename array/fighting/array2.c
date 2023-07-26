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
#include <string.h>
void reverse_string(char s[])
{
	size_t len = strlen(s);
	char tmp = s[0];
	s[0] = s[len - 1];
	s[len - 1] = '\0';
	if (strlen(s + 1) >= 2)
		reverse_string(s + 1);
	s[len - 1] = tmp;
}
int main()
{
	char arr[] = "asdfghgh";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}