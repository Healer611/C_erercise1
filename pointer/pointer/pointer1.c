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

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	for (int i = 0; i < 5; i++) {
//		printf("%d", p[i]);
//	}
//	return 0;
//}

//��ӡ����
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


//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
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


//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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



//дһ����������������һ���ַ��������ݡ�
//�Ǻ�����
//int main()
//{
//    char a[10000];
//    gets(a);
//    for (int i = strlen(a) - 1; i >= 0; i--)
//        printf("%c", a[i]);
//    return 0;
//}

//������
//void Reverse()




