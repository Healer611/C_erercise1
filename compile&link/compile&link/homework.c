#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//宏实现offsetof函数功能
//#include <stddef.h>
//typedef struct Student
//{
//	int year;
//	char name[10];
//}s;
//
//#define OFFSETOF(type,member) ((size_t) ( ( (type*)0 ) -> member) )
//
//int main()
//{
//	printf("%d\n", offsetof(s, name));
//	printf("%d\n", OFFSETOF(s, name));
//	return 0;
//}