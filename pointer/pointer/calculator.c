#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("****************************\n");
	printf("***  1.add        2.sum  ***\n");
	printf("***  3.mul        4.div  ***\n");
	printf("***  0.exit              ***\n");
	printf("****************************\n");
}
int main()
{
	int input = 0;
	int x = 0,y = 0;
	do {
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		int (*pfArr[])(int, int) = { NULL,Add,Sub,Mul,Div };
		if (input == 0)
			printf("�˳�������\n");
		else if (input >= 1 && input <= 4) {
			printf("��������������\n");
			scanf("%d %d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("ret = %d\n", ret);
		}
		else
			printf("ѡ���������ѡ��\n");
	} while (input);
	return 0;
}