#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//
//	return 0;
//}

//
//int main()
//{
//	printf("%s\n", __FILE__);
//	printf("%d\n", __LINE__);
//	printf("%s\n", __DATE__);
//	printf("%s\n", __TIME__);
//
//	//printf("%d\n", __STDC__);//当前VS是不支持ANSI C
//
//
//	return 0;
//}
//
//


//#include <stdio.h>
//
//#define M 100
//#define STR "abc"
//#define FOR for(;;)
//
//int main()
//{
//	printf("%d\n", M);
//	printf("%s\n", STR);
//	FOR;
//	
//	return 0;
//}
//
//#define CASE break;case
//
//int main()
//{
//	int d = 0;
//	switch (d)
//	{
//	case 1:
//		break;
//	case 2:
//		break;
//	case 3:
//		break;
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int d = 0;
//	switch (d)
//	{
//	case 1:
//	CASE 2:
//	CASE 3:
//	}
//	return 0;
//}



//#define DEBUG_PRINT printf("file:%s\tline:%d\t date:%s\t time:%s\n",__FILE__,__LINE__,__DATE__,__TIME__)
//
//int main()
//{
//	DEBUG_PRINT;
//	return 0;
//}

//#define M 100
//
//int main()
//{
//	int a = M;
//	return 0;
//}


//int main()
//{
//	printf("hello world\n");
//	printf("hello ""world\n");
//
//	return 0;
//}

//#define PRINT(n, format) printf("the value of "#n" is " format "\n", n)
//
//
//int main()
//{
//	int a = 20;
//	//printf("the value of a is %d\n", a);
//	PRINT(a, "%d");
//
//	int b = 15;
//	//printf("the value of b is %d\n", b);
//	PRINT(b, "%d");
//
//	float f = 4.5f;
//	//printf("the value of f is %f\n", f);
//	PRINT(f, "%f");
//	return 0;
//}


//##

//#define CAT(x,y) x##y
//
//int main()
//{
//	int Class110 = 2024;
//	printf("%d\n", CAT(Class, 110));
//	printf("%d\n", Class110);
//	return 0;
//}

//
//int main()
//{
//	int a = 10;
//	//int b = a+1;//b=11, a=10
//	//int b = ++a;//b=11, a=11
//
//
//
//	return 0;
//}
//


//1
//#define MAX(x, y) ((x)>(y)?(x):(y))
//
////2
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 5;
//	int b = 6;
//	//int c = MAX(a, b);
//	int c = Max(a, b);
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("c = %d\n", c);
//
//	//a b c
//	//
//	return 0;
//}

//宏有些能力是函数绝对没有的

//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))
//
//
//int main()
//{
//	int* p = (int*)malloc(126 * sizeof(int));
//
//	//malloc(126, int);
//	int*p = MALLOC(126, int);
//
//	int* p = (int*)malloc(126 * sizeof(int));
//
//	return 0;
//}

//#define MAX(x, y) ((x)>(y)?(x):(y))

//2
//int Max(int x, int y)
//{       //5     6
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int c = MAX(2+3, 6);
//	//int c = ((2+3)>(6)?(2+3):(6))
//
//	c = Max(2 + 3, 6);
//	return 0;
//}

#include <stdio.h>

// int g_val = 2023;

// int Add(int x, int y)
// {
//     return x+y;
// }


// int main()
// {
//     int a = 10;
//     int b = 20;
//     int c = Add(a, b);
//     printf("%d\n", c);

//     printf("%d\n", g_val);

//     return 0;
// }
// #include <stdio.h>

// int main()
// {
// 	printf("%s\n", __FILE__);
// 	printf("%d\n", __LINE__);
// 	printf("%s\n", __DATE__);
// 	printf("%s\n", __TIME__);

// 	return 0;
// }


// #include <stdio.h>

// #define M 100
// #define STR "abc"
// #define FOR for(;;)

// int main()
// {
// 	printf("%d\n", M);
// 	printf("%s\n", STR);
// 	FOR;

// 	return 0;
// }

// #define M 100;

// int main()
// {
// 	int a = M;
// 	return 0;
// }



// #define M 100

// int main()
// {
//     int a = 0;
//     int b = 0;
//     if(a>5)
//         b = M;
//     else
//         b = -1;

//     return 0;
// }

// #define MAX(x,y)  ((x)>(y)?(x):(y))

// int main()
// {
//     int a = 2;
//     int b = -2;
//     int c = MAX(a, b);
//     printf("c=%d\n", c);

//     return 0;
// }


// #define SQUARE(x) ((x)*(x))

// int main()
// {
//     int a = 3;
//     int r = SQUARE(a+2);
//     printf("r = %d\n", r);
//     return 0;
// }


// #define DOUBLE(x) ((x)+(x))

// int main()
// {
//     int a = 3;
//     int r = 10*DOUBLE(a);
//     printf("r = %d\n", r);
//     return 0;
// }


// #define SQUARE(x) ((x)*(x))

// #define M 3
// int main()
// {
//     int a = 3;
//     int r = SQUARE(M+2);
//     printf("M=%d\n", M);

//     printf("r = %d\n", r);
//     return 0;
// }


// #define CAT(x,y) x##y

// int main()
// {
// 	int Class110 = 2024;
// 	printf("%d\n", CAT(Class, 110));
// 	printf("%d\n", Class110);
// 	return 0;
// }

//#define MAX(x, y) ((x)>(y)?(x):(y))
//
////2
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 5;
//	int b = 6;
//	int c = MAX(a, b);
//
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	printf("c = %d\n", c);
//
//	//a b c
//	//
//	return 0;
//}



//size_t my_strlen(const char* str)
//{
//	int num = 0;
//	while (*str++ != '\0')
//	{
//		num++;
//	}
//	return num;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int ret = my_strlen(arr);
//	printf("%s", arr);
//	return 0;
//}