#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//#define SWAP(num) (((num&0xAAAAAAAA)>>1)\
//				|((num&0x55555555)<<1))
//
//int main()
//{
//	int a = 5;//0x00000101
//	printf("%d\n", SWAP(a));//10 >> 0x00001010
//	return 0;
//}

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