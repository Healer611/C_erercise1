#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//int Fit(int n)
//{
//	if (n > 2)
//		return(Fit(n - 1) + Fit(n - 2));
//	else
//		return 1;
//}
//
//int fit(int n)
//{
//	int a = 1, b = 1, c = 0;
//	while (n > 2) {
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", Fit(n));
//	printf("%d\n", fit(n));
//	return 0;
//}


//编写一个函数实现n的k次方，使用递归实现。
//int Fun(int n,int k)
//{
//	if (k == 0)
//		return 1;
//	else
//		return n * Fun(n, k - 1);
//}
//int main()
//{
//	int n, k;
//	scanf("%d %d", &n, &k);
//	int u = Fun(n, k);
//	printf("%d", u);
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//void DightSum(int n)
//{
//	if (n > 9)
//		DightSum(n / 10);
//	printf("%d", n);
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	DightSum(n);
//	return 0;
//}

//#include <stdio.h>
//
//int DigitSum(int n) {
//    // 基本情况：当n为个位数时，直接返回n
//    if (n < 10) {
//        return n;
//    }
//    // 递归情况：将n的最后一位数字与剩余部分相加
//    return n % 10 + DigitSum(n / 10);
//}
//
//int main() {
//    int n ;
//    scanf("%d", &n);
//    int sum = DigitSum(n);
//    printf("输入：%d，输出：%d\n", n, sum);
//    return 0;
//}

//void reverse_string(char* string) {
//    if (string == NULL || *string == '\0') {
//        return;
//    }
//    char temp = string[0];
//    int length = 0;
//    while (string[length] != '\0') {
//        length++;
//    }
//    string[0] = string[length - 1];
//    string[length - 1] = temp;
//
//    reverse_string(string + 1);
//}
//
//int main() {
//    char arr[] = "abcdef";
//    printf("原始字符串：%s\n", arr);
//    reverse_string(arr);
//    printf("反向排列后的字符串：%s\n", arr);
//    return 0;
//}


//递归和非递归分别实现strlen
//size_t strlen_t(char *str)
//{
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//size_t strlen_x(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + strlen(str + 1);
//}
//int main()
//{
//	char a[100];
//	scanf("%s", a);
//	printf("strlen_t = %zd\n",strlen_t(a));
//	printf("strlen_x = %zd\n", strlen_x(a));
//	return 0;
//}

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//int s(int n)
//{
//	int sum = 1;
//	for (int i = 1; i <= n; i++)
//		sum *= i;
//	return sum;
//}
//
//int ss(int n)
//{
//	if (n > 1)
//		return n * ss(n - 1);
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("s= %d\n", s(n));
//	printf("ss=%d\n", ss(n));
//	return 0;
//}


//递归方式实现打印一个整数的每一位
void Print(int n)
{
	if (n > 9)
	{
		Print(n/10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	Print(num);
	return 0;
}