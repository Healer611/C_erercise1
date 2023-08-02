#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int a = 0x11223344;
//    char* pc = (char*)&a;
//    *pc = 0;
//    printf("%x\n", a);
//    return 0;
//}

//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++) {
//		printf("%d", p[i]);
//	}
//	return 0;
//}

//打印菱形
//int main()
//{
//	int i,j,k;
//	for (i = 1; i <= 7; i++) {
//		for (j = 7 - i; j >= 1; j--)
//			printf("%c", ' ');
//		for (k = 1; k <= 2*i-1; k++)
//			printf("%c", '*');
//		putchar('\n');
//	}
//	for (i = 6; i >= 1; i--) {
//		for (j = 6; j>= i; j--)
//			printf("%c", ' ');
//		for (k = 2*i-1; k >= 1; k--)
//			printf("%c", '*');
//		printf("\n");
//	}
//	return 0;
//}


//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//#include <math.h>
//int main()
//{
//	int i,p,s; 
//	int sum ,summ;
//	for (i = 100; i <= 100000; i++) {
//		sum = 0;
//		summ = 0;
//		p = i;
//		while (p != 0) {
//			sum++;
//			p /= 10;
//		}
//		p = i;
//		while (p != 0) {
//			s = p % 10;
//			summ += pow(s, sum);
//			p /= 10;
//		}
//		if (summ == i)
//			printf("%d ", i);
//
//	}
//	return 0;
//}


//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a,s=0;
//	scanf("%d", &a);
//	int sum = 0;
//	for (int i = 1; i <= 5; i++) {
//		s += a;
//		sum += s;
//		if (i != 5)
//			s *= 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}



//写一个函数，可以逆序一个字符串的内容。
//非函数：
//int main()
//{
//    char a[10000];
//    gets(a);
//    for (int i = strlen(a) - 1; i >= 0; i--)
//        printf("%c", a[i]);
//    return 0;
//}

//函数：
//void Reverse()


#include < stdio.h >
struct S
{
	int a;
	int b;
};
int main()
{
	struct S a, * p = &a;
	a.a = 99;
	printf("%d\n", (*p).a);
	return 0;
}