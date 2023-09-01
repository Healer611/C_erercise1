#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//void change(int a[],int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++) {
//		if (a[i] % 2 != 0) {
//			for (int j = 0; j < i ; j++) {
//				if (a[j] % 2 == 0) {
//					int t = a[i];
//					a[i] = a[j];
//					a[j] = t ;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	int a[] = { 32,42,34,30,25,33,48 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	change(a, sz);
//	for(int i=0;i<sz;i++)
//		printf("%d ", a[i]);
//	return 0;
//}

//模拟实现库函数strcpy
//#include <stdio.h>
//#include <assert.h>
//void s(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello bit";
//	s(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}


//模拟实现库函数strlen
//#include <stdio.h>
//
//size_t strlen(const char* str) {
//    const char* ptr = str;
//    while (*ptr != '\0') {
//        ptr++;
//    }
//    return ptr - str;
//} 
//
//int main() {
//    const char* str = "Hello, World!";
//    size_t length = strlen(str);
//    printf("%zu\n", length);
//    return 0;
//}

//int main()
//{
//	int arr[10001] = { 0 };
//	gets(arr);
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	while (left < right) {
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//void change(char* a,int time)
//{
//	int len = strlen(a);
//	int i,j;
//	for (i = 0; i < time; i++)
//	{
//		int t = a[0];
//		for (j = 0; j < len; j++)
//		{
//			if (j == len - 1)
//				a[j] = t;
//			else
//				a[j] = a[j + 1];
//		}
//	}
//}
//int main()
//{
//	char a[] = "ABCD";
//	int time = 2;
//	change(a, time);
//	printf("time=%d, change=%s\n",time,a);
//	return 0;
//}


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//int find(const char* str, char* find)
//{
//	char t[100] = { 0 };
//	strcpy(t, str);
//	strcat(t, str);
//	return strstr(t, find) != NULL;
//}
//int main()
//{
//	char s1[] = "AABCD";
//	char s2[] = "BCDAA";
//	printf("%d\n", find(s1, s2));
//	return 0;
//}
//int x = 5, y = 7;
//void swap()
//{
//	int z;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	//int x = 3, y = 8;
//	//swap();
//	//printf("%d,%d\n",x, y);
//	char s[] = "\\123456\123456\t";
//	printf("%d\n", strlen(s));
//	return 0;
//}

//#include <stdio.h>
//
//int main() {
//    int m;
//    scanf("%d", &m);
//
//    long long cube = (long long)m * m * m;  // 计算 m 的立方
//
//    int start = m * m - (m - 1);  // 计算起始奇数值
//    long long sum = 0;  // 初始化累加和
//
//    // 输出 m 个连续奇数，并计算累加和
//    for (int i = 0; i < m; i++) {
//        printf("%d", start + 2 * i);  // 输出当前奇数
//        sum += start + 2 * i;  // 累加当前奇数
//        if (i < m - 1) {
//            printf("+");  // 输出加号，除了最后一个数
//        }
//    }
//
//    printf("=%lld\n", sum);  // 输出累加和
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    size_t size = 10;  // 你想要分配的字节数
//    int* ptr = (int*)malloc(size);  // 分配大小为 size 的内存块，并将指针转换为 int 类型
//    if (ptr == NULL) {
//        printf("内存分配失败！\n");
//        return 1;
//    }
//
//    // 使用分配的内存
//    for (size_t i = 0; i < size; i++) {
//        ptr[i] = i * 2;
//        printf("%d ", ptr[i]);
//    }
//
//    // 释放内存
//    free(ptr);
//
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//
//// 比较函数
//int compare(const void* a, const void* b) {
//    return (*(int*)a - *(int*)b);
//}
//
//int main() {
//    int arr[] = { 9, 3, 6, 1, 8, 2, 5, 7, 4 };
//
//    size_t length = sizeof(arr) / sizeof(arr[0]);
//
//    // 使用 qsort 对数组进行排序
//    qsort(arr, length, sizeof(int), compare);
//
//    printf("排序后的数组：");
//    for (size_t i = 0; i < length; i++) {
//        printf("%d ", arr[i]);
//    }
//
//    return 0;
//}


//int main()
//{
//	char str[] = "Geneius";
//	print(str);
//	return 0;
//}
//print(char* s)
//{
//	if (*s)
//	{
//		print(++s);
//		printf("%c", *s);
//	}
//}


//void swap(int* px, int* py)
//{
//	int temp = *px;
//	*px = *py;
//	*py = temp;
//}
//
///*--- 排列顺序为*n1≤*n2 ---*/
//void sort2(int* n1, int* n2)
//{
//	if (*n1 > *n2)
//		swap(n1, n2);
//}
//
//int main(void)
//{
//	int na, nb;
//
//	puts("请输入两个整数。");
//	printf("整数A：");   scanf("%d", &na);
//	printf("整数B：");   scanf("%d", &nb);
//
//	sort2(&na, &nb);
//
//	puts("将两数的值按升序排列。");
//	printf("整数A是%d。\n", na);
//	printf("整数B是%d。\n", nb);
//
//	return 0;
//}


//#include <stdio.h>
//int main() {
//    int rows, coef = 1, space, i, j;
//    printf("请输入杨辉三角的行数：");
//    scanf("%d", &rows);
//    for (i = 0; i < rows; i++) {
//        for (space = 1; space <= rows - i; space++) {
//            printf("  ");
//        }
//        for (j = 0; j <= i; j++) {
//            if (j == 0 || i == 0) {
//                coef = 1;
//            }
//            else {
//                coef = coef * (i - j + 1) / j;
//            }
//            printf("%4d", coef);
//        }
//        printf("\n");
//    }
//    return 0;
//}	

#include <stdio.h>
#include <stdlib.h>

int main() {
    char str[100][22];
    int i = 0;
    int x;

    while (1) {
        x = scanf("%21[a-zA-Z]", str[i]);
        if (x == EOF || x == 0) // Break on EOF or if no valid word is read
            break;

        i++;

        if (getchar() == '\n') // Break on newline
            break;
    }

    for (int j = i - 1; j >= 0; j--) {
        printf("%s ", str[j]);
    }

    return 0;
}