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
int main()
{
	int na, nb;
	double dx, dy;
	printf("sizeof(int) = %u\n", (unsigned)sizeof(int));
	printf("sizeof(double) = %u\n", (unsigned)sizeof(double));
	printf("sizeof(na) = %u\n", (unsigned)sizeof(na));
	printf("sizeof(nb) = %u\n", sizeof(nb));
	printf("sizeof(na+nb) =%u\n", (unsigned)sizeof(na + nb));//int+intΪint
	printf("sizeof(dx+dy) =%u\n", sizeof(dx + dy));//int+doubleΪdouble
	printf("sizeof(na+dy) =%u\n", (unsigned)sizeof(na + dy));//double+doubleΪdouble
	return 0;
}


//������a��Ԫ�ظ����ı��ʽ��sizeof(a��/ sizeof(a[0])
//int main()
//{
//	int    vi[10];
//	double vd[25];
//	printf("����vi��Ԫ�ظ���= %u\n", (unsigned)(sizeof(vi) / sizeof(vi[0])));
//	printf("����vd��Ԫ�ظ���= %u\n", (unsigned)(sizeof(vd) / sizeof(vd[0])));
//	return 0*/;
//}


