#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//打印3的倍数的数
//写一个代码打印1 - 100之间所有3的倍数的数字
//int main()
//{	
	//int i=1;
	//while (i <= 100) {
	//	if (i % 3 == 0)
	//		printf("%d ", i);
	//	i++;
	//}
//	return 0;
//}


	/*写代码将三个整数数按从大到小输出。
		例如：
		输入：2 3 1
		输出：3 2 1*/
//int main()	
//{
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
//	return 0;
//}



//打印100~200之间的素数
/*
思路：
素数：即质数，除了1和自己之外，再没有其他的约数，则该数据为素数，具体方式如下
*/

//方法一：试除法
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	// 外层循环用来获取100~200之间的所有数据，100肯定不是素数，因此i从101开始
//	for (i = 101; i <= 200; i++)
//	{
//		//判断i是否为素数：用[2, i)之间的每个数据去被i除，只要有一个可以被整除，则不是素数
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//
//		// 上述循环结束之后，如果j和i相等，说明[2, i）之间的所有数据都不能被i整除，则i为素数
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//
//
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//
//
//
//上述方法的缺陷：超过i一半的数据，肯定不是i的倍数，上述进行了许多没有意义的运算，因此可以采用如下
// 方式进行优化
// 方法二：每拿到一个数据，只需要检测其：[2, i/2]区间内是否有元素可以被2i整除即可，可以说明i不是素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//
//
//	for (i = 101; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//2->i-1
//		int j = 0;
//		for (j = 2; j <= i / 2; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		//...
//		if (j > i / 2)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
/*
方法二还是包含了一些重复的数据，再优化：
如果i能够被[2, sqrt(i)]之间的任意数据整除，则i不是素数
原因：如果 m 能被 2 ~ m-1 之间任一整数整除，其二个因子必定有一个小于或等于sqrt(m)，另一个大于或等于 sqrt(m)。
*/
//int main()
//{
	//int i = 0;
	//int count = 0;
	//for (i = 101; i <= 200; i++) {
	//	//判断i是否为素数
	//	//2->i-1
	//	int j = 0;
	//	for (j = 2; j <= sqrt(i); j++) {
	//		if (i % j == 0)
	//			break;
	//	}
	//	if (j > sqrt(i))
	//	{
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\ncount = %d\n", count);
//	return 0;
//}

//方法4
/*
继续对方法三优化，只要i不被[2, sqrt(i)]之间的任何数据整除，则i是素数，但是实际在操作时i不用从101逐渐递增到200，因为出了2和3之外，不会有两个连续相邻的数据同时为素数
*/
//int main()
//{	
	//int i = 0;
	//int count = 0;
	//for (i = 101; i <= 200; i += 2) {
	//	int j = 0;
	//	for (j = 2; j <= sqrt(i); j++) {
	//		if (i % j == 0)
	//			break;
	//	}
	//	if (j > sqrt(i))
	//	{
	//		count++;
	//		printf("%d ", i);
	//	}
	//}
	//printf("\ncount = %d\n",count);
//	return 0;
//}


//-------By Me--------
//int main()
//{
	//int i, n;
	//for (n = 100; n <= 200; n++) {
	//	for (i = 2; i < n; i++)
	//		if (n % i == 0)
	//			break;
	//	if (i >= n)
	//		printf("%-6d", n);
	//}
//	return 0;
//}




//打印1000年到2000年之间的闰年
/*思路：要求1000到2000之间的闰年，只需要知道求解闰年的方法即可。
闰年的条件：如果N能够被4整除，并且不能被100整除，则是闰年，或者N能被400整除也是闰年。*/
//int main()
//{
//	int year;
//	for (year = 1000; year <= 2000; year++) {
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			printf("%-5d", year);
//	}
//return 0;
//}



/*给定两个数，求这两个数的最大公约数
	例如：
	输入：20 40
	输出：20*/
//------------------------------------------------------------
	/*
	最大公约数：即两个数据中公共约数的最大者。
	求解的方式比较多，暴力穷举、辗转相除法、更相减损法、Stein算法算法
	此处主要介绍：辗转相除法


	思路：
	例子：18和24的最大公约数
	第一次：a = 18  b = 24  c = a%b = 18%24 = 18
		  循环中：a = 24   b=18
	第二次：a = 24   b = 18  c = a%b = 24%18 = 6
		  循环中：a = 18   b = 6


	第三次：a = 18   b = 6   c=a%b = 18%6 = 0
	  循环结束

	此时b中的内容即为两个数中的最大公约数。
	*/
i/*nt main()
{
	int m = 0;
	int n = 0;
	int tmp = 0;
	printf("请输入两个整数: ");
	scanf("%d %d", &m, &n);

	while (tmp = m % n)
	{
		m = n;
		n = tmp;
	}
	printf("最大公约数为:%d\n", n);
	return 0;
} */
//--------------------------------------------------------



//在屏幕上输出9 * 9乘法口诀表
//int main()
//{
	//int i,n;
	//for (i = 1; i <= 9; i++) {
	//	for (n = 1; n <= 9; n++) {
	//		printf("%d*%d=%d  ", n, i, i * n);
	//	}
	//	printf("\n");
	//}
//return 0;
//}



//求10 个整数中最大值
///int main()
//{
	//int a[10];
	//for (int i = 0; i < 10; i++)
	//	scanf("%d", &a[i]);
	//int max = a[0];
	//for (int i = 0; i < 10; i++) {
	//	if (a[i] > max)
	//		max = a[i];
	//}
	//printf("%d", max);
//return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
	//int i,a=1;
	//double t, sum = 0;
	//for (i = 1; i <= 100; i++) {
	//	t = 1.0 / i*a;
	//	sum += t;
	//	a *= -1;
	//}
	//printf("%lf", sum);
//return 0;
//}
	

//int main()
//{
	//int n = 0;
	//int i = 0;
	//long long ret = 1;
	//long long sum = 0;
	//scanf("%d", &n);
	//for (i = 1; i <= 10; i++) {
	//	for (i = 1; i <= n; i++)
	//		ret *= i;
	//	sum += ret;
	//}
	//printf("%ld", sum);
//	return 0;
//}

int main()
{
	int i = 0;
	int n = 0;
	scanf("%d", &n);
	int ret = 0;
	for (i = 1; i <= n; i++) {
		ret *= i;
	}
	printf("%d\n", ret);
	return 0;
}