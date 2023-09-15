#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <string.h>


//memcpy�÷�
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[20] = { 0 };
//
//	float arr3[] = { 1.0,2.0,3.0 };
//	float arr4[5] = { 0 };
//
//	memcpy(arr2, arr1, 40);
//	memcpy(arr4, arr3, 8);//8���ֽڣ���������Ԫ��
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



//ģ��ʵ��memcpy
//�������������󣬷���Ŀ��ռ����ʼ��ַ
void my_memcpy(void* dest, const void* src, size_t num)
//���ܿ���������Ԫ�أ����Զ���Ϊ�޷�������size_t����
{
	assert(dest && src);
	void* ret = dest;
	while (num--) {
		/*����ת��Ϊ(int*)���ͣ���Ϊ���������������޷�ʵ�ֺ������ܣ�
		����num�����7����ζ�ź���Ҫ7���ֽڣ���int*���ͼ�һ�����ĸ��ֽڣ�
		����ת����(char*)���ͣ�ÿ�μ�һ����һ���ֽ����������������*/
		*(char*)dest = *(char*)src;
		//ǿ��ת������ʱ�ģ�����д��(char*)dest++
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


//memmove�÷�
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

//ģ��ʵ��memmove
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


//memcmp�÷�
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
//	memset(arr + 1, 'x', 4);//���ֽ�Ϊ��λ���õ�,��arr+1��ʼ���ĸ��ֽڸ���'x'.
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
