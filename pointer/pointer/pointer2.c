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


int Add(int a, int b)
{
	return a + b;
}
int main()
{
	//&�������ͺ��������Ǻ����ĵ�ַ
	printf("%p\n%p\n\n", &Add, Add);

	int (*pf1)(int, int) = Add;
	int ret = (*pf1)(2, 3);//����pf1(2,3)
	printf("%d\n", ret);
	return 0;
}