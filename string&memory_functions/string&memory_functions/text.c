#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//ģ��ʵ��atoi
// 
// by me:
//int my_atio(const char* str)
//{
//	int i = 0;
//	int sign = 1;
//	while (*(str + i) == ' ')
//		i++;
//	if (str[i] == '-') {
//		sign = -1;
//		i++;
//	}
//	else if (str[i] == '+') {
//		i++;
//	}
//	int result = 0;
//	while (str[i] >= '0' && str[i] <= '9') {
//		result = result * 10 + (str[i] - '0');
//		i++;
//	}
//	return result * sign;
//}


//�����棺

//#include<stdio.h>
//#include<assert.h>
//#include<ctype.h>
//#include <limits.h>
//
//
//int my_atoi(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	while (isspace(*str))
//	{
//		str++;
//	}
//	int flag = 1;
//	if (*str == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	else if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long ret = 0;
//	while (*str != '\0')
//	{
//		if (isdigit(*str))
//		{
//			ret = ret * 10 + flag * (*str - '0');//��ȥ�ַ�0����������0
//			if (ret > INT_MAX || ret < INT_MIN)
//				return 0;
//		}
//		str++;
//	}
//	return (int)ret;//ǿ������ת��Ϊint�������ķ���ֵ��int��
//	
//}
//int main()
//{
//	char s[100] = "    43";
//	printf("%d\n", my_atoi(s));
//	return 0;
//}


