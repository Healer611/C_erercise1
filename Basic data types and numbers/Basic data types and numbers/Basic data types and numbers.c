#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;		//静态
//    c += 1;
//    b += 2;
//    return (a + b + c);
//}
//int main()
//{
//    int i;
//    int a = 2;
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d,", sum(a));
//    }
//}


//判断输入是否是字母
//int main()
//{
//    char ch;
//    while (scanf(" %c", &ch) != EOF)
//    {
//        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//    }
//	return 0;
//}


//判断char型有无符号
//#include <limits.h>
//int main()
//{
//	printf("这个编译器中的char型是");
//	if (CHAR_MIN)
//		puts("有符号的。");
//	else
//		puts("无符号的。");
//	return 0;
//}

//显示数据类型和变量长度
//int main()
//{
//	int na, nb;
//	double dx, dy;
//	printf("sizeof(int) = %u\n", (unsigned)sizeof(int));
//	printf("sizeof(double) = %u\n", (unsigned)sizeof(double));
//	printf("sizeof(na) = %u\n", (unsigned)sizeof(na));
//	printf("sizeof(nb) = %u\n", (unsigned)sizeof(nb));
//	printf("sizeof(na+nb) =%u\n", (unsigned)sizeof(na + nb));//int+int为int
//	printf("sizeof(dx+dy) =%u\n", (unsigned)sizeof(dx + dy));//int+double为double
//	printf("sizeof(na+dy) =%u\n", (unsigned)sizeof(na + dy));//double+double为double
//	return 0;
//}


//求数组a的元素个数的表达式：sizeof(a）/ sizeof(a[0])
//int main()
//{
//	int    vi[10];
//	double vd[25];
//	printf("数组vi的元素个数= %u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
//	printf("数组vd的元素个数= %u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));
//	return 0*/;
//}


/*
	按位运算
*/

//#include <stdio.h>
///*--- 返回整数x中设置的位数 ---*/
//int count_bits(unsigned x)
//{
//	int bits = 0;
//	while (x) {
//		if (x & 1U) bits++;
//		x >>= 1;
//	}
//	return bits;
//}
//
///*--- 返回unsigned型的位数 ---*/
//int int_bits(void)
//{
//	return count_bits(~0U);
//}
//
///*--- 返回unsigned型的位的内容 ---*/
//void print_bits(unsigned x)
//{
//	int i;
//	for (i = int_bits() - 1; i >= 0; i--)
//		putchar(((x >> i) & 1U) ? '1' : '0');
//}
//
//int main(void)
//{
//	unsigned a, b;
//
//	printf("请输入两个非负整数。\n");
//	printf("a : ");   scanf("%u", &a);
//	printf("b : ");   scanf("%u", &b);
//
//	printf("\na     = ");   print_bits(a);
//	printf("\nb     = ");   print_bits(b);
//	printf("\na & b = ");   print_bits(a & b);		/* a和b的逻辑与 */
//	printf("\na | b = ");   print_bits(a | b);		/* a和b的逻辑或 */
//	printf("\na ^ b = ");   print_bits(a ^ b);		/* a和b的逻辑异或 */
//	printf("\n~a    = ");   print_bits(~a);			/* a的反码 */
//	printf("\n~b    = ");   print_bits(~b);			/* b的反码 */
//	putchar('\n');
//
//	return 0;
//}



//int main()
//{
//	int num1 = 1;
//	int num2 = 2;
//	int z=num1 & num2;
//	int x=num1 | num2;
//	int s=num1^ num2;
//	return 0;
//
//}

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	return 0;
//}



//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
// 第一种
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数\n");
//	scanf("%d", &num);
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if (num & ( 1 << i))
//			count++;
//	}
//	printf("该数在二进制中1的个数 = %d\n", count);
//	return 0;
//}



//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main()
//{
//	int num = 3;
//	int i = 0;
//	printf("偶数位\n");
//	for (i = 0; i < sizeof(int) * 8; i+=2) {
//		if ((num & (1 << i)) != 0)
//			printf("%d", 1);
//		else
//			printf("%d", 0);
//	}
//	printf("\n");
//	printf("奇数位\n");
//	for (i = 1; i < sizeof(int) * 8; i+=2) {
//		if ((num & (1 << i)) != 0)
// 			printf("%d", 1);
//		else
//			printf("%d", 0);
//	}
//	return 0;
//}


//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 : 1999 2299
//输出例子 : 7
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int c = a ^ b;
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if ((c & (1 << i)))
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//    printf("ret = %d\n", ret);
//    return 0;
//}

