#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//void change(int a[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++) {
//		if (a[i] % 2 != 0) {
//			for (int j = 0; j < i ; j++) {
//				if (a[j] % 2 == 0) {
//					int t = a[i];
//					a[i] = a[j];
//					a[j] = t ;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	int a[] = { 32,42,34,30,25,33,48 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	change(a, sz);
//	for(int i=0;i<sz;i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//模拟实现库函数strcpy
//#include <stdio.h>
//#include <assert.h>
//void s(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	s(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//模拟实现库函数strlen
//#include <stdio.h>
//
//size_t strlen(const char* str) {
//    const char* ptr = str;
//    while (*ptr != '\0') {
//        ptr++;
//    }
//    return ptr - str;
//}
//
//int main() {
//    const char* str = "Hello, World!";
//    size_t length = strlen(str);
//    printf("%zu\n", length);
//    return 0;
//}