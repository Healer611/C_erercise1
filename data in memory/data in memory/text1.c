#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>


//int main()
//{
//	//INT_MAX;
//	int num  = 10;//创建一个整型变量，叫num，这时num向内存申请4个字节来存放数据
//	//4个字节-32比特位
//	//00000000000000000000000000001010-原码
//	//00000000000000000000000000001010-反码
//	//00000000000000000000000000001010-补码
//
//	int num2 = -10;//
//	//10000000000000000000000000001010 - 原码
//	//11111111111111111111111111110101 - 反码
//	//11111111111111111111111111110110 - 补码
//	//
//
//
//	return 0;
//}

//计算1-1
//1+(-1)
// 00000000000000000000000000000001 --> 1的补码
// 11111111111111111111111111111111 --> -1的补码
// 00000000000000000000000000000000
// 
// 原码计算是错误的
//00000000000000000000000000000001
//10000000000000000000000000000001
//10000000000000000000000000000010---> -2
//

//
//0x11 22 33 44;
//



//
//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}
//
#include <stdio.h>


//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;//int*
//	if (*p == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//		return 1;
//	else
//		return 0;
//}

//小端返回1
//大端返回0
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if(ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//	char a = -1;
//	//10000000000000000000000000000001
//	//11111111111111111111111111111110
//	//11111111111111111111111111111111-截断
//	//11111111 -a
//	//11111111111111111111111111111111
//	//11111111111111111111111111111110
//	//10000000000000000000000000000001--> -1
//
//	signed char b = -1;
//	//11111111111111111111111111111111
//	//11111111 -b
//
//	unsigned char c = -1;
//	//11111111 -c
//	//00000000000000000000000011111111
//	//
//	printf("a=%d,b=%d,c=%d", a, b, c);
//	//%d - 十进制的形式打印有符号整型整数
//	//整型提升
//
//	return 0;
//}
//

//
//80%  80%
//

//#include <stdio.h>
//int main()
//{
//	char a = -128;
//	//-128
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000
//	//-128的补码
//	//10000000
//	//11111111111111111111111110000000
//	//
//	printf("%u\n", a);
//	return 0;
//}
//

//#include <stdio.h>
//int main()
//{
//	char a = 128;
//	//00000000000000000000000010000000
//	//10000000-a
//	//
//	printf("%u\n", a);
//	return 0;
//}
//

//int main()
//{
//	int i = -20;
//	//10000000000000000000000000010100
//	//11111111111111111111111111101011
//	//11111111111111111111111111101100
//	//
//	unsigned int j = 10;
//	//00000000000000000000000000001010
//	//11111111111111111111111111101100
//	//11111111111111111111111111110110
//	//11111111111111111111111111110101
//	//10000000000000000000000000001010 -10
//	//
//	//11111111111111111111111111110110
//	//10000000000000000000000000001001
//	//10000000000000000000000000001010
//	printf("%d\n", i + j);
//	return 0;
//}
//

//#include <windows.h>
//
//int main()
//{
//	unsigned int i;
//	for(i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//单位是毫秒
//	}
//
//	return 0;
//}

#include <string.h>
#include <stdio.h>
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//

//#include <stdio.h>
//
//unsigned char i = 0;//0~255
//
//
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}