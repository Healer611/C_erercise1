#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1   
//����s1 = abcd��s2 = ACBD������0.
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

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