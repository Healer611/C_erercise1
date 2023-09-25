#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

size_t my_strlen(const char* str)
{
	int count = 0;
	while (*str++) {
		count++;
	}
	return count;
}

char* my_strcpy(char* dest, char* src)
{
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;
}

#include <assert.h>
char* my_strcat(char* dest, char* src)
{
	assert(dest && src);
	char* ret = dest;
	while (*dest)
		dest++;
	while (*dest++ = *src++);
	return ret;
}

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (*str1 == *str2) {
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return *str1 - *str2;
}

char* my_strstr(char* str1, char* str2)
{
	char* s1 = str1;
	char* cp = str1;
	char* s2 = str2;
	if (*str2 == '\0')
		return str1;
	while (*cp) {
		s1 = cp;
		s2 = str2;
		while (*s1 == *s2 && *s1 && *s2) {
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return cp;
		cp++;
	}
	return NULL;
}
//int main()
//{
//	//size_t sz = my_strlen("aasaad");
//	//printf("%d\n", sz);
//
//	//char arr1[] = "hello";
//	//char arr2[] = "haha";
//	//printf("%s\n", my_strcpy(arr1, arr2));
//
//	//char arr1[20] = "hello";
//	//char arr2[] = "haha";
//	//printf("%s\n", my_strcat(arr1, arr2));
//
//	//int ret = my_strcmp("bbq", "bbb");	
//	//if (ret > 0)
//	//	printf("大于\n");
//	//else if (ret < 0)
//	//	printf("小于\n");
//	//else
//	//	printf("等于\n");
//
//	char arr1[] = "abbbcdef";
//	char arr2[] = "bbc";
//
//	char* ret = my_strstr(arr1, arr2);
//	if (ret != NULL)
//		printf("%s\n", ret);
//	else
//		printf("找不到\n");
//	return 0;
//}



//模拟实现strncat
// 
char* my_strncat(char* d, const char* s, size_t num)
{
	char* ret = d;
	while (*d)
		d++;
	while (num) {
		*d++ = *s++;
		num--;
	}
	return ret;
}
//int main()
//{
//	char a[20] = "hello";
//	char b[20] = "my dog";
//	printf("%s\n", my_strncat(a, b, 2));
//	return 0;
//}
// 
//模拟实现strncpy

char* my_strncpy(char* d, const char* s, size_t num)
{
	char* ret = d;
	while (num) {
		*d++ = *s++;
		num--;
		if (num == 0)
			*d = '\0';
	}
	return ret;
}
//int main()
//{
//	char a[20] = "hello";
//	char b[20] = "my dog";
//	printf("%s\n", my_strncpy(a, b, 2));
//	return 0;
//}