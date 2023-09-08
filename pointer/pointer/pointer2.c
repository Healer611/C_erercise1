#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr; //p用来存放数组的地址，p就是数组指针
//
//	char* arr2[5];
//	char* (*pc)[5] = &arr2;	//指向char*类型
//
//	int arr3[] = { 1,2,3 };
//	int(*p3)[3] = &arr3;//数组指针[]不能为空
//	return 0;
//}


//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	//&函数名和函数名都是函数的地址
//	printf("%p\n%p\n\n", &Add, Add);
//
//	int (*pf1)(int, int) = Add;
//	int ret = (*pf1)(2, 3);//等于pf1(2,3)
//	printf("%d\n", ret);
//	return 0;
//}


//计算器
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int Sub(int a, int b)
//{
//	return a - b;
//}
//
//int Mul(int a, int b)
//{
//	return a * b;
//}
//
//int Div(int a, int b)
//{
//	return a / b;
//}
//void menu()
//{
//	printf("");
//}
//
//int main()
//{
//	int input = 0;
//	int x, y;
//	do {
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		int (*pfArr[])(int, int) = { NULL,Add,Sub,Mul,Div };
//		if (0 == input)
//			printf("退出计算器\n");
//		else if (input >= 1 && input <= 4) {
//			
//			int ret = pfArr[input](x, y);
//		}
//	} while (input);
//
//}

//*****  冒泡排序  *****
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
//


//
//#include <stdlib.h>
//int cmp_(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}

