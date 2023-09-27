#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//int sort(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int tmp[100] = { 0 };
//	int s = 0;
//	qsort(arr, sz, sizeof(arr[0]), sort);
//	for (int i = 0; i < sz; i++) {
//		if (arr[i] != arr[i + 1]) {
//			tmp[s] = arr[i];
//			s++;
//		}
//		else if (arr[i] == arr[i + 1]) {
//			i++;
//		}
//	}
//
//	int szz = sizeof(tmp) / sizeof(tmp[0]);
//	for (int i = 0; i < szz; i++) {
//		if (tmp[i] == 0)
//			break;
//		printf("%d ", tmp[i]);
//	}
//	return 0;
//}