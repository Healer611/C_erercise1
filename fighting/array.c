#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//数组的遍历
	//int p;
	//scanf("%d", &p);
	//switch (p) {
	//case 1	: puts("5");	break;
	//}
	//int i;
	//double x[7];
	//for (i = 0; i < 7; i++)
	//	x[i] = i;
	//for (i = 0; i < 7; i++)
	//	printf("x[%d]=%f\n", i, x[i]);
	//for (i = 6; i >= 0; i--)
	//	printf("x[%d]=%f\n", i, x[i]);

	//数组初始化
	//int i;
	//int v[5] = { 1,2,3,4,5 };//等于int v[] = {1,2,3,4,5};
	//for (i = 0; i < 5; i++) printf("v[%d]=%d\n",i,v[i]);
	//printf("\n");
	//int j[5] = { 1,3 };//v[2]之后初始化为‘0’
	//for (i = 0; i < 5; i++) printf("j[%d]=%d\n",i, j[i]);
	//printf("\n");
	//int l[5] = { 0 };
	//for (i = 0; i < 5; i++) printf("l[%d]=%d\n", i, l[i]);
	//printf("\n");
	//int v[3]={1,2,3,4}; 错误：初始值过多
	//int v[3]；v={1，2，3}；	错误：不能使用赋值语句进行初始化

	//数组的复制
	//int i;
	//int a[5] = { 17,23,46 },b[5];
	//for (i = 0; i < 5; i++)
	//	b[i] = a[i];
	//puts("a	b");
	//for (i = 0; i < 5; i++)
	//	printf("%4d%4d\n", a[i], b[i]);

	//通过键盘输入数组元素的值
	//int i, x[5];
	//for (i = 0; i < 5; i++)
	//	scanf("%d", &x[i]);
	//for (i = 0; i < 5; i++)
	//	printf("x[%d]=%d\n", i, x[i]);
	
	//对数组元素倒序排列
	//int i,x[7];
	//for (i = 0; i < 7; i++){
	//	printf("x[%d]: ", i);
	//	scanf("%d", &x[i]);
	//}
	//for (i = 0; i < 3; i++) {
	//	int temp = x[i];
	//	x[i] = x[6 - i];
	//	x[6 - i] = temp;
	//}
	//for (i = 0; i < 7; i++)
	//	printf("x[%d]=%d\n", i, x[i]);

	//使用数组进行成绩处理
	//int i, a[5], sum = 0;
	//for (i = 0; i < 5; i++) {
	//	scanf("%d", &a[i]);
	//	sum += a[i];
	//}
	//printf("总分:%5d\n", sum);
	//printf("平均分:.1f\n", (double)sum / 5);


//#define NUMBER 80	//人数上限
//	int i, j;
//	int num;	//学生人数
//	int tensu[NUMBER];	//学生分数
//	int bunpu[11] = {0};	//分数分布图
//
//	do {
//		scanf("%d", &num);
//		if (num<1 || num>NUMBER)
//			printf("请输入1-%d的数:", NUMBER);
//	} while (num<1 || num>NUMBER);
//
//	printf("请输入%d人的分数。\n", num);
//
//	for (i = 0; i < num; i++) {
//		printf("%d号：",i+1);
//		do {
//			scanf("%d", &tensu[i]);
//			if (tensu[i] < 0 || tensu[i] > 100)
//				printf("\a请输入1-100的数");
//		} while (tensu[i] < 0 || tensu[i]>100);
//		bunpu[tensu[i] / 10]++;
//	}
//	puts("\n---分布图---");
//	printf("  100：");
//	for (j = 0; j < bunpu[10]; j++)
//		printf("%c",'*');
//	printf("\n");
//	
//	for (i = 9; i >= 0; i--) {
//		printf("%d-%d：", i * 10, i * 10 + 9);
//		for (j = 0; j < bunpu[i]; j++)
//			printf("*");
//		printf("\n");
//	}
	


	return 0;
}
















