#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr; //p�����������ĵ�ַ��p��������ָ��
//
//	char* arr2[5];
//	char* (*pc)[5] = &arr2;	//ָ��char*����
//
//	int arr3[] = { 1,2,3 };
//	int(*p3)[3] = &arr3;//����ָ��[]����Ϊ��
//	return 0;
//}


//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	//&�������ͺ��������Ǻ����ĵ�ַ
//	printf("%p\n%p\n\n", &Add, Add);
//
//	int (*pf1)(int, int) = Add;
//	int ret = (*pf1)(2, 3);//����pf1(2,3)
//	printf("%d\n", ret);
//	return 0;
//}


//������
//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int Sub(int a, int b)
//{
//	return a - b;
//}
//
//int Mul(int a, int b)
//{
//	return a * b;
//}
//
//int Div(int a, int b)
//{
//	return a / b;
//}
//void menu()
//{
//	printf("");
//}
//
//int main()
//{
//	int input = 0;
//	int x, y;
//	do {
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		int (*pfArr[])(int, int) = { NULL,Add,Sub,Mul,Div };
//		if (0 == input)
//			printf("�˳�������\n");
//		else if (input >= 1 && input <= 4) {
//			
//			int ret = pfArr[input](x, y);
//		}
//	} while (input);
//
//}

//*****  ð������  *****
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++) {
//		for (int j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}
//


//
//#include <stdlib.h>
//int cmp_(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}

