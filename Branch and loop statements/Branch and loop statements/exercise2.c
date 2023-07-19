#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1. 计算 n的阶乘。
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (i = 1; i <= n; i++) {
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//2. 计算 1!+2!+3!+……+10!
//int main()
//{
//	int sum = 0,ret = 1;
//	int n = 0;
//	for (n = 1; n <= 10; n++) {
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//3. 在一个有序数组中查找具体的某个数字n。
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int flag = 0;
//	for (int i = 0; i < 10; i++) {
//		if (k == arr[i]) {
//			printf("找到了，下标是：%d\n", i);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("找不到\n");
//	return 0;
//}

//折半查找（二分查找）
int main()
{
	int arr[] = { 1,2,3,4.5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int k = 0,flag=0;
	scanf("%d", &k);
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] < k)
			left = mid + 1;
		else if (arr[mid] > k)
			right = mid - 1;
		else
		{
			printf("找到了，下标是：%d\n", mid);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
		printf("找不到\n");
	return 0;
}


//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int a, b;
//	int sum = 0;
//	for (int i = 1; i <= 100; i++) {
//		a = i % 10;
//		b = i / 10;
//		if (a == 9 || b == 9)
//			sum += 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
//welcome to bit!!!!!!!
//*********************
//w*******************!
//we*****************!!
//wel***************!!!
//...
//welcome to bit!!!!!!!
//#include <windows.h>
//#include <string.h>
//#include <time.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "********************";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//#include <time.h>
//#include <stdio.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("******  1. play     ******\n");
//	printf("******  0. exit     ******\n");
//	printf("**************************\n");
//}
//
//
//void game()
//{
//	int ret = rand()%100+1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小了\n");
//		else if (guess > ret)
//			printf("猜大了\n");
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
