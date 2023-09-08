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


////void* 类型指针不能进行解引用操作符，也不能进行+-整数的操作符
////void* 是用来存放任意类型数据的地址
// void*  无具体类型的指针
//void qsort(void* base,  //待排序数组的第一个元素
//			size_t num, //待排序数组的元素个数
//			size_t size,//待排序数组中一个元素的大小
//			int (* cmp)(const void* e1,const void*e2))//函数指针
//			//e1和e2中存放的是需要比较的两个元素的地址
////排序整型数据，两个整型可以直接使用>比较
////排序结构体，两个结构体数据可能不能直接使用<>比较
////也就是不同类型数据，比较大小，方法有差异

//输出函数
void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}

#include <stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
int main()
{
	test1();
	return 0;
}