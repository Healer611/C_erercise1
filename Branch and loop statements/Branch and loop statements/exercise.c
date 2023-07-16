#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
//打印3的倍数的数
//写一个代码打印1 - 100之间所有3的倍数的数字
	//int i=1;
	//while (i <= 100) {
	//	if (i % 3 == 0)
	//		printf("%d ", i);
	//	i++;
	//}


	/*写代码将三个整数数按从大到小输出。
		例如：
		输入：2 3 1
		输出：3 2 1*/
	//int a, b, c, temp;
	//scanf("%d %d %d", &a, &b, &c);
	//if (a < b) {
	//	temp = a;
	//	a = b;
	//	b = temp;
	//}
	//if (a < c) {
	//	temp = a;
	//	a = c;
	//	c = temp;
	//}
	//if (b < c) {
	//	temp = b;
	//	b = c;
	//	c = temp;
	//	
	//}
	//printf("%d %d %d", a, b, c);


//打印100~200之间的素数
	//int i, n;
	//for (n = 100; n <= 200; n++) {
	//	for (i = 2; i < n; i++)
	//		if (n % i == 0)
	//			break;
	//	if (i >= n)
	//		printf("%-6d", n);
	//}


//打印1000年到2000年之间的闰年
	//int year;
	//for (year = 1000; year <= 2000; year++) {
	//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//		printf("%-5d", year);
	//}


/*给定两个数，求这两个数的最大公约数
	例如：
	输入：20 40
	输出：20*/
	//int m = 0;
	//int n = 0;
	//int tmp = 0;
	//printf("请输入两个整数: ");
	//scanf("%d %d", &m, &n);

	//while (tmp = m % n)
	//{
	//	m = n;
	//	n = tmp;
	//}
	//printf("最大公约数为:%d\n", n);


//在屏幕上输出9 * 9乘法口诀表
	//int i,n;
	//for (i = 1; i <= 9; i++) {
	//	for (n = 1; n <= 9; n++) {
	//		printf("%d*%d=%d  ", n, i, i * n);
	//	}
	//	printf("\n");
	//}


//求10 个整数中最大值
	//int a[10];
	//for (int i = 0; i < 10; i++)
	//	scanf("%d", &a[i]);
	//int max = a[0];
	//for (int i = 0; i < 10; i++) {
	//	if (a[i] > max)
	//		max = a[i];
	//}
	//printf("%d", max);


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
	//int i,a=1;
	//double t, sum = 0;
	//for (i = 1; i <= 100; i++) {
	//	t = 1.0 / i*a;
	//	sum += t;
	//	a *= -1;
	//}
	//printf("%lf", sum);
	return 0;
}