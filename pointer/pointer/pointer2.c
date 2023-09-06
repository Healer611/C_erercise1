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


int Add(int a, int b)
{
	return a + b;
}
int main()
{
	//&函数名和函数名都是函数的地址
	printf("%p\n%p\n\n", &Add, Add);

	int (*pf1)(int, int) = Add;
	int ret = (*pf1)(2, 3);//等于pf1(2,3)
	printf("%d\n", ret);
	return 0;
}