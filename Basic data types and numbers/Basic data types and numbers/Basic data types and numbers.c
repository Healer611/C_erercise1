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


