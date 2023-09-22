#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("***************************************\n");
	printf("******** 1.add        2.del    ********\n");
	printf("******** 3.search     4.modify ********\n");
	printf("******** 5.show       6.sort   ********\n");
	printf("******** 0.exit                ********\n");
	printf("***************************************\n");
}

void test()
{
	int input = 0;
	//首先要有通讯录
	//PeoInfo data[100];
	//记录data内存放数据个数
	//int sz = 0; 
	//data和sz联动，将他们封装成一个通讯录结构体
	Contact con;
	InitContact(&con);
	//初始化通讯录，函数内部改变改变外部变量通讯录con，需要传递地址给初始化函数
	//结构体传参最好传地址
//	do {
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//			case 1:
//				AddContact(&con);
//				break;
//			case 2:
//				break;
//			case 3:
//				break;
//			case 4:
//				break;
//			case 5:
//				break;
//			case 6:
//				break;
//			case 0:
//				break;
//			default:
//				break;
//		}
//	} while (input);
//}

	do {
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			break;
		default:
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}


