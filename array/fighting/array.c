#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
/*int main()
{
	//����ı���
	//int p;
	//scanf("%d", &p);
	//switch (p) {
	//case 1	: puts("5");	break;
	//}
	//int i;
	//double x[7];
	//for (i = 0; i < 7; i++)
	//	x[i] = i;
	//for (i = 0; i < 7; i++)
	//	printf("x[%d]=%f\n", i, x[i]);
	//for (i = 6; i >= 0; i--)
	//	printf("x[%d]=%f\n", i, x[i]);

	//�����ʼ��
	//int i;
	//int v[5] = { 1,2,3,4,5 };//����int v[] = {1,2,3,4,5};
	//for (i = 0; i < 5; i++) printf("v[%d]=%d\n",i,v[i]);
	//printf("\n");
	//int j[5] = { 1,3 };//v[2]֮���ʼ��Ϊ��0��
	//for (i = 0; i < 5; i++) printf("j[%d]=%d\n",i, j[i]);
	//printf("\n");
	//int l[5] = { 0 };
	//for (i = 0; i < 5; i++) printf("l[%d]=%d\n", i, l[i]);
	//printf("\n");
	//int v[3]={1,2,3,4}; ���󣺳�ʼֵ����
	//int v[3]��v={1��2��3}��	���󣺲���ʹ�ø�ֵ�����г�ʼ��

	//����ĸ���
	//int i;
	//int a[5] = { 17,23,46 },b[5];
	//for (i = 0; i < 5; i++)
	//	b[i] = a[i];
	//puts("a	b");
	//for (i = 0; i < 5; i++)
	//	printf("%4d%4d\n", a[i], b[i]);

	//ͨ��������������Ԫ�ص�ֵ
	//int i, x[5];
	//for (i = 0; i < 5; i++)
	//	scanf("%d", &x[i]);
	//for (i = 0; i < 5; i++)
	//	printf("x[%d]=%d\n", i, x[i]);
	
	//������Ԫ�ص�������
	//int i,x[7];
	//for (i = 0; i < 7; i++){
	//	printf("x[%d]: ", i);
	//	scanf("%d", &x[i]);
	//}
	//for (i = 0; i < 3; i++) {
	//	int temp = x[i];
	//	x[i] = x[6 - i];
	//	x[6 - i] = temp;
	//}
	//for (i = 0; i < 7; i++)
	//	printf("x[%d]=%d\n", i, x[i]);

	//ʹ��������гɼ�����
	//int i, a[5], sum = 0;
	//for (i = 0; i < 5; i++) {
	//	scanf("%d", &a[i]);
	//	sum += a[i];
	//}
	//printf("�ܷ�:%5d\n", sum);
	//printf("ƽ����:.1f\n", (double)sum / 5);


//#define NUMBER 80	//��������
//	int i, j;
//	int num;	//ѧ������
//	int tensu[NUMBER];	//ѧ������
//	int bunpu[11] = {0};	//�����ֲ�ͼ
//
//	do {
//		scanf("%d", &num);
//		if (num<1 || num>NUMBER)
//			printf("������1-%d����:", NUMBER);
//	} while (num<1 || num>NUMBER);
//
//	printf("������%d�˵ķ�����\n", num);
//
//	for (i = 0; i < num; i++) {
//		printf("%d�ţ�",i+1);
//		do {
//			scanf("%d", &tensu[i]);
//			if (tensu[i] < 0 || tensu[i] > 100)
//				printf("\a������1-100����");
//		} while (tensu[i] < 0 || tensu[i]>100);
//		bunpu[tensu[i] / 10]++;
//	}
//	puts("\n---�ֲ�ͼ---");
//	printf("  100��");
//	for (j = 0; j < bunpu[10]; j++)
//		printf("%c",'*');
//	printf("\n");
//	
//	for (i = 9; i >= 0; i--) {
//		printf("%d-%d��", i * 10, i * 10 + 9);
//		for (j = 0; j < bunpu[i]; j++)
//			printf("*");
//		printf("\n");
//	}
	


	return 0;
}
*/


//ð������
//void sort(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz-1; i++) {
//		int j;
//		for (j = 0; j < sz - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr, sz);
//	int i;
//	for (i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	char str[] = "hello bit";
//	printf("%d %d\n", sizeof(str), strlen(str));
//	return 0;
//}


//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//void init(int arr[],int sz)
//{
//	for (int i = 0; i < sz; i++) {
//		arr[i] = 0;
//	}
//}
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[],int sz)
//{
//	for (int i = 0; i < sz / 2; i++) {
//		int temp = arr[i];
//		arr[i] = arr[sz - i - 1];
//		arr[sz - i - 1] = temp;
//	}
//}
//int main()
//{
//	int arr[10];
//	init(arr,10);
//	int sz;
//	printf("�����뼸�����֣�");
//	scanf("%d", &sz);
//	for (int i = 0; i < sz; i++)
//		scanf("%d", &arr[i]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}















