#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr; //p�����������ĵ�ַ��p��������ָ��
//
//	char* arr2[5];
//	char* (*pc)[5] = &arr2;	//ָ��char*����
//
//	int arr3[] = { 1,2,3 };
//	int(*p3)[3] = &arr3;//����ָ��[]����Ϊ��
//	return 0;
//}


//int Add(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	//&�������ͺ��������Ǻ����ĵ�ַ
//	printf("%p\n%p\n\n", &Add, Add);
//
//	int (*pf1)(int, int) = Add;
//	int ret = (*pf1)(2, 3);//����pf1(2,3)
//	printf("%d\n", ret);
//	return 0;
//}


//*****  ð������  *****
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++) {
//		for (int j = 0; j < sz - 1 - i; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//}


////void* ����ָ�벻�ܽ��н����ò�������Ҳ���ܽ���+-�����Ĳ�����
////void* ��������������������ݵĵ�ַ
// void*  �޾������͵�ָ��
//void qsort(void* base,  //����������ĵ�һ��Ԫ��
//			size_t num, //�����������Ԫ�ظ���
//			size_t size,//������������һ��Ԫ�صĴ�С
//			int (* cmp)(const void* e1,const void*e2))//����ָ��
//			//e1��e2�д�ŵ�����Ҫ�Ƚϵ�����Ԫ�صĵ�ַ
////�����������ݣ��������Ϳ���ֱ��ʹ��>�Ƚ�
////����ṹ�壬�����ṹ�����ݿ��ܲ���ֱ��ʹ��<>�Ƚ�
////Ҳ���ǲ�ͬ�������ݣ��Ƚϴ�С�������в���

////�������
//void print_arr(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++) {
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//}
//
//#include <stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
////�ṹ���������
//void print_arrr(struct Stu arr[], int sz)
//{
//	for (int i = 0; i < sz; i++) {
//		printf("%s: %d\n", arr[i].name, arr[i].age);
//	}
//}
//
// //��������Ƚ�
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//void test2()
//{
//	struct Stu arr1[] = { {"zhangsan",20},{"lisi",30},{"����",12} };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	qsort(arr1, sz, sizeof(arr1[0]), cmp_stu_by_age);
//	print_arrr(arr1, sz);
//}
// 
// //�������ֱȽ�
//#include <string.h>
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu arr1[] = { {"zhangsan", 20}, {"lisi", 30}, {"wangwu", 12} };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	qsort(arr1, sz, sizeof(arr1[0]), cmp_stu_by_name);
//	print_arrr(arr1, sz);
//}
//int main()
//{
//	test1();
//	test2();
//	test3();
//	return 0;
//}



//���Ͼ���
//��ҵ���ݣ�
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);
/*1 2 3 4 5
  2 3 4 5 6
  3 4 5 6 7
  4 5 6 7 8*/
//#define ROWS 4
//#define COLS 4
//#include <stdlib.h>
//int sort(const void* a, const void* b)
//{
//    return *(int*)a - *(int*)b;
//}
//int cmp(int (*p)[COLS],int sz)
//{
//    int* t = (int*)malloc(sz * sizeof(int));
//    int k = 0;
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//            t[k] = p[i][j];
//            k++;
//        }
//    }
//    qsort(t, ROWS * COLS, sizoef(t[0]), sort);
//    
//}
//int main()
//{
//    int arr[ROWS][COLS] = { {1, 4, 7, 11},
//                            {2, 5, 8, 12},
//                            {3, 6, 9, 16},
//                           {10, 13, 14, 17} };
//    int sz = sizeof(arr) / sizeof(arr[0][0]);
//	return 0;
//}

#define ROWS 4
#define COLS 4
int find(int(*p)[COLS], int target)
{
    int row = 0;
    int col = COLS - 1;
    while (row<ROWS&&col>=0) {
        if (p[row][col] == target)
            return 1;
        else if (p[row][col] < target)
            row++;
        else
            col--;
    }
    return 0;
}
int main() 
{
    int arr[ROWS][COLS] = {
        {1, 4, 7, 11},
        {2, 5, 8, 12},
        {3, 6, 9, 16},
        {10, 13, 14, 17}    };
    int target = 9;
    if (find(arr, target)) {
        printf("Ŀ������ %d �����ھ����С�\n", target);
    }
    else {
        printf("Ŀ������ %d �������ھ����С�\n", target);
    }

    return 0;
}