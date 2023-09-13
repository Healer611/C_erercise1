#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1   
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

/*AABCDAABCD*/
//使用字符串函数一步到位
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