#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1   
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

/*AABCDAABCD*/
//ʹ���ַ�������һ����λ
//int find(char* a, char* b)
//{
//	char tmp[200] = { 0 };
//	strcpy(tmp, a);
//	strcat(tmp, a);
//	return strstr(tmp, b);
//}

//int judge(char* a, char* b) {
//	char x[20] = { 0 };
//	strcpy(x, a);
//	strcat(x, a);
//	char* cp = x;
//	char* s1 = cp;
//	char* s2 = b;
//	while (*cp) {
//		s1 = cp;
//		s2 = b;
//		while (*s1 == *s2) {
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//			return 1;
//		cp++;
//	}
//	return 0;
//}
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	printf("%d\n", judge(s1, s2));
//	return 0;
//}