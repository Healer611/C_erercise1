#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//	//printf("%d\n", __STDC__);//当前VS是不支持ANSI C
//	return 0;
//}

//#define Print(n) printf("the value of n is %d",n)

//#define Print(n,format) printf("the value of "#n" is " format "\n",n)
//int main()
//{
//	float f = 4.5f;
//	printf("the value of f is %f\n", f);
//	Print(f, "%f");
//	return 0;
//}


//#define CAT(x,y) x##y
//int main()
//{
//	int Class110 = 110;
//	printf("%d\n", Class110);
//	printf("%d\n", CAT(Class, 110));
//	return 0;
//}


#define MAX(a,b) ((a)>(b)?(a):(b))

//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 5;
//	int b = 6;
//	int c = MAX(a++, b++);
//	printf("a=%d\nb=%d\nc=%d\n", a, b, c);
//	return 0;
//}


//#define Malloc(num,type) (type*)malloc(num*sizeof(type))
//
//int main()
//{
//	int* p = (int*)malloc(126 * sizeof(int));
//	int* p = Malloc(126, int);
//	return 0;
//}

//#define INT_PTR int*
//typedef int* int_ptr;
//INT_PTR a, b;
//int_ptr c, d;


//#define Print(n,format) printf("the value of "#n" is " format "\n",n)
//int main()
//{
//	int a = 20;
//	printf("the value of a is %d\n", a);
//	Print(a,"%d");
//	return 0;
//}

//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int c = MAX(3, 5);
//	printf("%d\n", c);
//#undef MAX
//	c = MAX(5, -5);
//	printf("%d\n", c);
//	return 0;
//}

//#define WIN 1
//
//int main()
//{
////#if defined(WIN)
////	printf("windows\n");
////#endif
//
//#ifdef WIN
//	printf("windows\n");
//#endif
//
//	return 0;
//}


