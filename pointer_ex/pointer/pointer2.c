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


////void* ����ָ�벻�ܽ��н����ò�������Ҳ���ܽ���+-�����Ĳ�����
////void* ��������������������ݵĵ�ַ
// void*  �޾������͵�ָ��
//void qsort(void* base,  //����������ĵ�һ��Ԫ��
//			size_t num, //�����������Ԫ�ظ���
//			size_t size,//������������һ��Ԫ�صĴ�С
//			int (* cmp)(const void* e1,const void*e2))//����ָ��
//			//e1��e2�д�ŵ�����Ҫ�Ƚϵ�����Ԫ�صĵ�ַ
////�����������ݣ��������Ϳ���ֱ��ʹ��>�Ƚ�
////����ṹ�壬�����ṹ�����ݿ��ܲ���ֱ��ʹ��<>�Ƚ�
////Ҳ���ǲ�ͬ�������ݣ��Ƚϴ�С�������в���

//�������
void print_arr(int arr[], int sz)
{
	for (int i = 0; i < sz; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}

#include <stdlib.h>
int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void test1()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}
int main()
{
	test1();
	return 0;
}