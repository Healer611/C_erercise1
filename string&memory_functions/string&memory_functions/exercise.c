#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

#include <stdio.h>
#include <assert.h>
#include <string.h>
void left_move(char* str, int k)
{
	assert(str);
	int len = strlen(str);
	for (int j = 0; j < k; j++) {
		char tmp = *str;
		for (int i = 0; i < len - 1; i++) {
			*(str + i) = *(str + i + 1);
		}
		*(str + len - 1) = tmp;
	}
}

void reserve(char* left, char* right) 
{
	assert(left && right);
	while (left < right) {
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void left_movePro(char* str, int k)
{
	int len = strlen(str);
	reserve(str, str + k - 1);
	reserve(str + k, str + len - 1);
	reserve(str, str + len - 1);
}
//int main()
//{
//	char a[] = "ABCD";
//	int k;
//	scanf("%d", &k);
//	//left_move(a, k);
//	left_movePro(a, k);
//	printf("%s\n", a);
//	return 0;
//}