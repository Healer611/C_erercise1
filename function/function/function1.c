#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�����������ֵ
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
//	puts("����������������");
//	printf("����1��");	scanf("%d", &n1);
//	printf("����2��");	scanf("%d", &n2);
//
//	printf("����������ֵ��%d��", max2(n1, n2));	//���ֺ���Ч��һ��
//	return 0;
//}


//�����������ֵ
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

//��ӡֱ��������
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

//6.2-û�з���ֵ�ĺ���
//int scan_pint(void)
//{
//	int tmp;
//	do {
//		printf("������һ����������");
//		scanf("%d", &tmp);
//		if (tmp <= 0)
//			printf("\a��������ȷ������");
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
//	printf("��������ת���ֵ%d��\n", rev_int(nx));
//	return 0;
//}

//ͨ����
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

//const:�������ı������յ������Ԫ�ص�ֵ
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


//���Բ��ң�˳����ң�
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
//	printf("Ҫ���ҵ�ֵ");
//	scanf("%d", &ky);
//	idx = search(vx, ky, NUMBER);
//	if (idx == FAILED)
//		printf("\a����ʧ��");
//	else
//		printf("%d������ĵ�%d��Ԫ��\n", ky, idx + 1);
//}















