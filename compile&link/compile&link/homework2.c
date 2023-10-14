#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。
//#define SWAP(num) (((num&0xAAAAAAAA)>>1)\
//				|((num&0x55555555)<<1))
//
//int main()
//{
//	int a = 5;//0x00000101
//	printf("%d\n", SWAP(a));//10 >> 0x00001010
//	return 0;
//}