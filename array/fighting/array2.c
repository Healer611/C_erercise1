#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
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


/*
�ݹ鷽ʽ��
�����ַ�����abcdefg�����ݹ�ʵ�ֵĴ��ԭ��
  1. ����a��g��
  2. �Եݹ�ķ�ʽ����Դ�ַ�����ʣ�ಿ�֣�ʣ�ಿ�ֿ��Կ���һ����Ч���ַ������������Ƶķ�ʽ����
*/
//#include <string.h>
//void reverse_string(char s[])
//{
//	size_t len = strlen(s);
//	char tmp = s[0];
//	s[0] = s[len - 1];
//	s[len - 1] = '\0';
//	if (strlen(s + 1) >= 2)
//		reverse_string(s + 1);
//	s[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "asdfghgh";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}


//������A�е����ݺ�����B�е����ݽ��н�����������һ����
//void Change(char arr1[], char arr2[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		char tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("--------Finish Change-------\n");
//	printf("arr1 = %s\narr2 = %s\n", arr1, arr2);
//}
//int main()
//{
//	char arr1[10] = "aifbwswad";
//	char arr2[10] = "jeiwubefh";
//	printf("arr1 = %s\n", arr1);
//	printf("arr2 = %s\n", arr2);
//	Change(arr1, arr2);
//	return 0;
//}


#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;
	b = ++c, c++, ++a, a++;
	b += a++ + c;
	printf("a = %d b = %d c = %d\n:", a, b, c);
	return 0;
}