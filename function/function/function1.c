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


//��ά����Ĵ���
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
//	printf("�������й���Ԫ�ص�ֵ");
//	scanf("%d", &no);
//	fill(x, 2, no);
//	fill(y, 4, no);
//	mat_print(x, 2);
//	mat_print(y, 4);
//	return 0;
//}


//6.3 ������ʹ�����

//int fx = 0;						//��̬������+�ļ�������
//
//void func(void)
//{
//	static int sx = 0;			//��̬������+��������
//	int			ax = 0;			//�Զ�������+��������
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


//---------------��----ϰ----------------

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

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


//ʵ��һ�������������������������ݡ�
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


//ʵ�ֺ����ж�year�ǲ������ꡣ
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



//ʵ��һ������is_prime���ж�һ�����ǲ���������
//��������ʵ�ֵ�is_prime��������ӡ100��200֮���������
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


