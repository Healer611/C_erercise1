#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int sum(int a)
//{
//    int c = 0;
//    static int b = 3;		//��̬
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


//�ж������Ƿ�����ĸ
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


//�ж�char�����޷���
//#include <limits.h>
//int main()
//{
//	printf("����������е�char����");
//	if (CHAR_MIN)
//		puts("�з��ŵġ�");
//	else
//		puts("�޷��ŵġ�");
//	return 0;
//}

//��ʾ�������ͺͱ�������
//int main()
//{
//	int na, nb;
//	double dx, dy;
//	printf("sizeof(int) = %u\n", (unsigned)sizeof(int));
//	printf("sizeof(double) = %u\n", (unsigned)sizeof(double));
//	printf("sizeof(na) = %u\n", (unsigned)sizeof(na));
//	printf("sizeof(nb) = %u\n", (unsigned)sizeof(nb));
//	printf("sizeof(na+nb) =%u\n", (unsigned)sizeof(na + nb));//int+intΪint
//	printf("sizeof(dx+dy) =%u\n", (unsigned)sizeof(dx + dy));//int+doubleΪdouble
//	printf("sizeof(na+dy) =%u\n", (unsigned)sizeof(na + dy));//double+doubleΪdouble
//	return 0;
//}


//������a��Ԫ�ظ����ı��ʽ��sizeof(a��/ sizeof(a[0])
//int main()
//{
//	int    vi[10];
//	double vd[25];
//	printf("����vi��Ԫ�ظ���= %u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
//	printf("����vd��Ԫ�ظ���= %u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));
//	return 0*/;
//}


/*
	��λ����
*/

//#include <stdio.h>
///*--- ��������x�����õ�λ�� ---*/
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
///*--- ����unsigned�͵�λ�� ---*/
//int int_bits(void)
//{
//	return count_bits(~0U);
//}
//
///*--- ����unsigned�͵�λ������ ---*/
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
//	printf("�����������Ǹ�������\n");
//	printf("a : ");   scanf("%u", &a);
//	printf("b : ");   scanf("%u", &b);
//
//	printf("\na     = ");   print_bits(a);
//	printf("\nb     = ");   print_bits(b);
//	printf("\na & b = ");   print_bits(a & b);		/* a��b���߼��� */
//	printf("\na | b = ");   print_bits(a | b);		/* a��b���߼��� */
//	printf("\na ^ b = ");   print_bits(a ^ b);		/* a��b���߼���� */
//	printf("\n~a    = ");   print_bits(~a);			/* a�ķ��� */
//	printf("\n~b    = ");   print_bits(~b);			/* b�ķ��� */
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



//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
// ��һ��
//int main()
//{
//	int num = 0;
//	printf("������һ������\n");
//	scanf("%d", &num);
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if (num & ( 1 << i))
//			count++;
//	}
//	printf("�����ڶ�������1�ĸ��� = %d\n", count);
//	return 0;
//}



//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main()
//{
//	int num = 3;
//	int i = 0;
//	printf("ż��λ\n");
//	for (i = 0; i < sizeof(int) * 8; i+=2) {
//		if ((num & (1 << i)) != 0)
//			printf("%d", 1);
//		else
//			printf("%d", 0);
//	}
//	printf("\n");
//	printf("����λ\n");
//	for (i = 1; i < sizeof(int) * 8; i+=2) {
//		if ((num & (1 << i)) != 0)
// 			printf("%d", 1);
//		else
//			printf("%d", 0);
//	}
//	return 0;
//}


//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� : 1999 2299
//������� : 7
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



