#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>


//memcpy用法
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	float arr3[] = { 1.0,2.0,3.0 };
//	float arr4[5] = { 0 };
//
//	memcpy(arr2, arr1, 40);
//	memcpy(arr4, arr3, 8);//8个字节：拷贝两个元素
//
//	for (int i = 0; i < 20; i++)
//		printf("%d ", arr2[i]);
//
//	printf("\n");
//
//	for (int i = 0; i < 5; i++)
//		printf("%f ", arr4[i]);
//	return 0;
//}



//模拟实现memcpy
//函数拷贝结束后，返回目标空间的起始地址
void my_memcpy(void* dest, const void* src, size_t num)
//不能拷贝负数个元素，所以定义为无符号整型size_t类型
{
	assert(dest && src);
	void* ret = dest;
	while (num--) {
		/*不能转换为(int*)类型，因为传入其他类型则无法实现函数功能，
		比如num如果是7，意味着函数要7个字节，而int*类型加一拷贝四个字节，
		所以转换成(char*)类型，每次加一拷贝一个字节完美解决上述问题*/
		*(char*)dest = *(char*)src;
		//强制转换是临时的，不能写成(char*)dest++
		dest = (char*)dest + 1;
		src = (char*)src + 1;
	}
	return ret;
}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//01 00 00 00 02 00 00 00 03 00 00 00 04 00 00 00 05 00 00 00 06 00 00 00
//
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 21);
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//memmove用法
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//             1 2 1 2 3 4 5 8 9 10
//	memmove(arr1, arr1+2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//模拟实现memmove
void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src) {
		while (num--) {
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else {
		while (num--) {
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//             1 2 1 2 3 4 5 8 9 10
//	my_memmove(arr1, arr1+2, 20);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}


//memcmp用法
//int main()
//{
//	int arr1[] = { 1,2,1,4,5,6 };
//	int arr2[] = { 1,2,257 };
//	int ret = memcmp(arr1, arr2, 10);
//	printf("%d\n", ret);
//	return 0;
//}
//
//memset
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr + 1, 'x', 4);//以字节为单位设置的,从arr+1开始的四个字节赋成'x'.
//	printf("%s\n", arr);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//
//	return 0;
//}
