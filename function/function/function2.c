#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
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


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
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


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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
//    // �����������nΪ��λ��ʱ��ֱ�ӷ���n
//    if (n < 10) {
//        return n;
//    }
//    // �ݹ��������n�����һλ������ʣ�ಿ�����
//    return n % 10 + DigitSum(n / 10);
//}
//
//int main() {
//    int n ;
//    scanf("%d", &n);
//    int sum = DigitSum(n);
//    printf("���룺%d�������%d\n", n, sum);
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
//    printf("ԭʼ�ַ�����%s\n", arr);
//    reverse_string(arr);
//    printf("�������к���ַ�����%s\n", arr);
//    return 0;
//}


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
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


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
//void Print(int n)
//{
//	if (n > 9)
//	{
//		Print(n/10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}


//int main()
//{
//	int a[10]
//	for(int i=0;i<10;i++){
//		for (intj = 0; j < 10; j++) {
//			if (a[j] > a[i]) {
//				int tmp = arr[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//				
//		}
//	}
//}