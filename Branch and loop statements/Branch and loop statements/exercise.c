#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
//��ӡ3�ı�������
//дһ�������ӡ1 - 100֮������3�ı���������
	//int i=1;
	//while (i <= 100) {
	//	if (i % 3 == 0)
	//		printf("%d ", i);
	//	i++;
	//}


	/*д���뽫�������������Ӵ�С�����
		���磺
		���룺2 3 1
		�����3 2 1*/
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


//��ӡ100~200֮�������
	//int i, n;
	//for (n = 100; n <= 200; n++) {
	//	for (i = 2; i < n; i++)
	//		if (n % i == 0)
	//			break;
	//	if (i >= n)
	//		printf("%-6d", n);
	//}


//��ӡ1000�굽2000��֮�������
	//int year;
	//for (year = 1000; year <= 2000; year++) {
	//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	//		printf("%-5d", year);
	//}


/*���������������������������Լ��
	���磺
	���룺20 40
	�����20*/
	//int m = 0;
	//int n = 0;
	//int tmp = 0;
	//printf("��������������: ");
	//scanf("%d %d", &m, &n);

	//while (tmp = m % n)
	//{
	//	m = n;
	//	n = tmp;
	//}
	//printf("���Լ��Ϊ:%d\n", n);


//����Ļ�����9 * 9�˷��ھ���
	//int i,n;
	//for (i = 1; i <= 9; i++) {
	//	for (n = 1; n <= 9; n++) {
	//		printf("%d*%d=%d  ", n, i, i * n);
	//	}
	//	printf("\n");
	//}


//��10 �����������ֵ
	//int a[10];
	//for (int i = 0; i < 10; i++)
	//	scanf("%d", &a[i]);
	//int max = a[0];
	//for (int i = 0; i < 10; i++) {
	//	if (a[i] > max)
	//		max = a[i];
	//}
	//printf("%d", max);


//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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