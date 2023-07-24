#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//两个数中最大值
//int max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}
//
//int max1(int a, int b)
//{
//	int max = a;
//	if (b > a)
//		max = b;
//	return max;
//}
//
//int max2(int a,int b)
//{
//	return (a > b ? a : b);
//}
//
//int max3(int a, int b)
//{
//	int max;
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	return max;
//}
//int main()
//{
//	int n1, n2;
//	
//	puts("请输入两个整数。");
//	printf("整数1：");	scanf("%d", &n1);
//	printf("整数2：");	scanf("%d", &n2);
//
//	printf("两个数最大的值是%d。", max2(n1, n2));	//三种函数效果一样
//	return 0;
//}


//三个数中最大值
//int max4(int a, int b, int c)
//{
//	int max = a;
//	max= b > a ?  b : c > a ?  c :  a;
//	return max;
//}
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d", max4(a, b, c));
//	return 0;
//}

//打印直角三角形
//void put_char(int ch, int n)
//{
//	while (n-- > 0)
//	{
//		putchar(ch);
//	}
//}
//
//int main()
//{
//	int i,len;
//	scanf("%d", &len);
//	for (i = 1; i <= len; i++) {
//		put_char(' ', len - i);
//		put_char('*', i);
//		putchar('\n');
//	}
//}

//6.2-没有返回值的函数
//int scan_pint(void)
//{
//	int tmp;
//	do {
//		printf("请输入一个正整数：");
//		scanf("%d", &tmp);
//		if (tmp <= 0)
//			printf("\a请输入正确的数字");
//	} while (tmp <= 0);
//	return tmp;
//}
//
//int rev_int(int num)
//{
//	int tmp = 0;
//	if (num > 0) {
//		do {
//			tmp = tmp * 10 + num % 10;
//			num /= 10;
//		} while (num > 0);
//	}
//	return tmp;
//}
//int main()
//{
//	int nx = scan_pint();
//	printf("该整数倒转后的值%d。\n", rev_int(nx));
//	return 0;
//}

//通用性
//void put_char(int ch, int n)
//{
//	while (n-- > 0)
//		putchar(ch);
//}
//
//int main()
//{
//	int len;
//	scanf("%d", &len);
//	for (int i = 1; i <= len; i++) {
//		put_char(' ', len - i);
//		put_char('*', i);
//		puts("\n");
//	}
//}

//const:声明不改变所接收的数组的元素的值
//void set_zero(int v[],int n)
//{
//	for (int i = 0; i < n; i++)
//		v[i] = 0;
//}
//void print_array(const int v[], int n)
//{
//	for (int i = 0; i < n; i++)
//		printf("%3d", v[i]);
//}
//int main()
//{
//	int ary[] = { 1,2,3,4,5 };
//	set_zero(ary,5);
//	print_array(ary, 5);
//	return 0;
//}


//线性查找（顺序查找）
#define NUMBER 5
#define FAILED -1
//int search(const int v[], int key, int n)
//{
//	int i = 0;
//	while (1) {
//		if (i == n)
//			return FAILED;
//		if (v[i] == key)
//			return i;
//		i++;
//	}
//}
//
//int main()
//{
//	int ky,idx;
//	int vx[NUMBER];
//	for (int i = 0; i < NUMBER; i++) {
//		printf("vx[%d]:", i);
//		scanf("%d", &vx[i]);
//	}
//	printf("要查找的值");
//	scanf("%d", &ky);
//	idx = search(vx, ky, NUMBER);
//	if (idx == FAILED)
//		printf("\a查找失败");
//	else
//		printf("%d是数组的第%d号元素\n", ky, idx + 1);
//}


//多维数组的传递
//void fill(int m[][3], int n, int v)
//{
//	int i, j;
//	for (i = 0; i < n; i++)
//		for (j = 0; j < 3; j++)
//			m[i][j] = v;
//}
//
//void mat_print(const int m[][3], int n)
//{
//	int i, j;
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < 3; j++)
//			printf("%3d", m[i][j]);
//		putchar('\n');
//	}
//}
//int main()
//{
//	int no;
//	int x[2][3] = { 0 };
//	int y[4][3] = { 0 };
//	printf("赋给所有构成元素的值");
//	scanf("%d", &no);
//	fill(x, 2, no);
//	fill(y, 4, no);
//	mat_print(x, 2);
//	mat_print(y, 4);
//	return 0;
//}


//6.3 作用域和储存期

//int fx = 0;						//静态储存期+文件作用域
//
//void func(void)
//{
//	static int sx = 0;			//静态储存期+块作用域
//	int			ax = 0;			//自动储存期+块作用域
//	printf("%3d%3d%3d\n", ax++, sx++, fx++);
// }
//int main(void)
//{
//	int i;
//	puts(" ax sx fx");
//	puts("-----------");
//	for (i = 0; i < 10; i++)
//		func();
//	puts("-----------");
//	return 0;
//}


//int fx;
//int main(void)
//{
//	int i;
//	static int si;
//	static double sd;
//	static int sa[5];
//	printf("fx=%d\n", fx);
//	printf("si=%d\n", si);
//	printf("sd=%d]n", sd);
//	for (i = 0; i < 5; i++)
//		printf("sa[%d] = %d\n", i, sa[i]);
//	return 0;
//}


//---------------练----习----------------

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。

//void mul(int n)
//{
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++)
//			printf("%d*%d=%d ", i, j, i * j);
//		puts("");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	mul(n);
//	return 0;
//}


//实现一个函数来交换两个整数的内容。
//void change(int *a, int *b)
//{
//	int t;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	change(&a, &b);
//	printf("a=%d , b=%d", a, b);
//	return 0;
//}


//实现函数判断year是不是润年。
//void judge(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//		printf("%d is leap year", year);
//	else
//		printf("%d isn't leap year", year);
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	judge(year);
//	return 0;
//}



//实现一个函数is_prime，判断一个数是不是素数。
//利用上面实现的is_prime函数，打印100到200之间的素数。
//#include <math.h>
//#include <stdbool.h>
//bool is_prime(int num) 
//{
//    if (num <= 1) 
//        return false;
//
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//int main() {
//    int start = 100;
//    int end = 200;
//    for (int i = start; i <= end; i++) {
//        if (is_prime(i)) {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//    return 0;
//}

