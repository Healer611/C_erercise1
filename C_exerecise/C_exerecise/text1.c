#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//void change(int a[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++) {
//		if (a[i] % 2 != 0) {
//			for (int j = 0; j < i ; j++) {
//				if (a[j] % 2 == 0) {
//					int t = a[i];
//					a[i] = a[j];
//					a[j] = t ;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	int a[] = { 32,42,34,30,25,33,48 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	change(a, sz);
//	for(int i=0;i<sz;i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strcpy
//#include <stdio.h>
//#include <assert.h>
//void s(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	s(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//ģ��ʵ�ֿ⺯��strlen
//#include <stdio.h>
//
//size_t strlen(const char* str) {
//    const char* ptr = str;
//    while (*ptr != '\0') {
//        ptr++;
//    }
//    return ptr - str;
//} 
//
//int main() {
//    const char* str = "Hello, World!";
//    size_t length = strlen(str);
//    printf("%zu\n", length);
//    return 0;
//}

//int main()
//{
//	int arr[10001] = { 0 };
//	gets(arr);
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//void change(char* a,int time)
//{
//	int len = strlen(a);
//	int i,j;
//	for (i = 0; i < time; i++)
//	{
//		int t = a[0];
//		for (j = 0; j < len; j++)
//		{
//			if (j == len - 1)
//				a[j] = t;
//			else
//				a[j] = a[j + 1];
//		}
//	}
//}
//int main()
//{
//	char a[] = "ABCD";
//	int time = 2;
//	change(a, time);
//	printf("time=%d, change=%s\n",time,a);
//	return 0;
//}


//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
//int find(const char* str, char* find)
//{
//	char t[100] = { 0 };
//	strcpy(t, str);
//	strcat(t, str);
//	return strstr(t, find) != NULL;
//}
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	printf("%d\n", find(s1, s2));
//	return 0;
//}
//int x = 5, y = 7;
//void swap()
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	//int x = 3, y = 8;
//	//swap();
//	//printf("%d,%d\n",x, y);
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int m;
//    scanf("%d", &m);
//
//    long long cube = (long long)m * m * m;  // ���� m ������
//
//    int start = m * m - (m - 1);  // ������ʼ����ֵ
//    long long sum = 0;  // ��ʼ���ۼӺ�
//
//    // ��� m �������������������ۼӺ�
//    for (int i = 0; i < m; i++) {
//        printf("%d", start + 2 * i);  // �����ǰ����
//        sum += start + 2 * i;  // �ۼӵ�ǰ����
//        if (i < m - 1) {
//            printf("+");  // ����Ӻţ��������һ����
//        }
//    }
//
//    printf("=%lld\n", sum);  // ����ۼӺ�
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    size_t size = 10;  // ����Ҫ������ֽ���
//    int* ptr = (int*)malloc(size);  // �����СΪ size ���ڴ�飬����ָ��ת��Ϊ int ����
//    if (ptr == NULL) {
//        printf("�ڴ����ʧ�ܣ�\n");
//        return 1;
//    }
//
//    // ʹ�÷�����ڴ�
//    for (size_t i = 0; i < size; i++) {
//        ptr[i] = i * 2;
//        printf("%d ", ptr[i]);
//    }
//
//    // �ͷ��ڴ�
//    free(ptr);
//
//    return 0;
//}