#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1   
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

/*AABCDAABCD*/
#include <string.h>
void judge(char* a, char* b) {
	char x[20] = { 0 };
	strcpy(x, a);
	strcat(x, a);
	while(s)
	printf("%s\n", x);
}
int main()
{
	char s1[] = "AABCD";
	char s2[] = "BCDAA";
	judge(s1, s2);
	return 0;
}