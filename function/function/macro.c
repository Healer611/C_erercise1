#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//#define sqr(x) ((x)*(x))
//#define change(type,a,b) {int t,t=a;a=b;b=t;}
//int main()
//{
//	printf("%d\n", sqr(5));
//	int a = 4, b = 5;
//	change(int, a, b);
//	printf("%d,%d\n", a, b);
//	return 0;
//}


//-------冒泡排序---------
void bsort(int* a, int n)
{
	for (int i = 0; i < n-1; i++) {
		//从前往后比较
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j+1] < a[j]) {
				int t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
		//从后往前比较
		//for (int j = n - 1; j > i; j--) {
		//	if (a[j - 1] > a[j]) {
		//		int t = a[j];
		//		a[j] = a[j - 1];
		//		a[j - 1] = t;
		//	}
		//}
	}
}
int main()
{
	int i;
	int height[5];
	for (i = 0; i < 5; i++) {
		scanf("%d", &height[i]);
	}
	bsort(height, 5);
	for (i = 0; i < 5; i++) {
		printf("%d\n", height[i]);
	}
	return 0;
}


//枚举类型
//enum animal{Dog, Cat, Monkey=0,Invalid};
//int main()
//{
//	enum animal a=Monkey;
//	if(a==Monkey)
//		printf("%%d\n");
//	if (a == Cat && a == Invalid)
//		printf("yes");
//	return 0;
//}


//int main()
//{
//	char str[] = "ABC\0ADDD";
//	char s[] = "";
//	printf("%u\n", sizeof(s));
//	printf("%s\n", str);
//	return 0;
//}
//返回字符串str的长度
int str_length(const char* s)
{
	int len = 0;
	while (s[len])
		len++;
	return len;
}
//显示字符串s
void put_string(const char s[])
{
	int i = 0;
	while (s[i])
		putchar(s[i++]);
}
void str_dcount(const char s[], int cnt[])
{
	int i = 0;
	while (s[i]) {
		if (s[i] >= '0' && s[i] <= '9')
			cnt[s[i] - '0']++;
		i++;
	}
}

#include <ctype.h>
void str_toupper(char s[])
{
	int i = 0;
	while (s[i]) {
		s[i] = toupper(s[i]);
		i++;
	}
}
//int main()
//{
//	char str[] = "67";
//	int cnt[10] = {0};
//	str_dcount(str, cnt);
//	for (int i = 0; i < 10; i++) {
//		printf("'%d':%d\n", i, cnt[i]);
//	}
//	return 0;
//}
