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
int main()
{
	int a = 5;
	int b = 6;
	int c = MAX(a++, b++);
	printf("a=%d\nb=%d\nc=%d\n", a, b, c);
	return 0;
}