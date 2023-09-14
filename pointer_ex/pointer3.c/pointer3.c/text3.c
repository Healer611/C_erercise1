#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//模仿qsort的功能实现一个通用的冒泡排序
// 冒泡排序如下：
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++) {
//		for (int j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}

int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}
void Swap(char* buf1, char* buf2, int size)
{
	for (int i = 0; i < size; i++) {
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base,int num,int size,int (*cmp)(const void*,const void*))
{
	int i = 0;
	for (i = 0; i < num - 1; i++) {
		for (int j = 0; j < num - 1 - i; j++) {
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
				Swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
		}
	}
}
void Print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++) {
		printf("  %d", arr[i]);
	}
	printf("\n");
}
void test1()
{
	int arr[] = { 54,25,333,32,3 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	Print(arr, sz);
}
//int main()
//{
//	test1();
//	return 0;
//}