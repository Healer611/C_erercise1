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
	//����Ҫ��ͨѶ¼
	//PeoInfo data[100];
	//��¼data�ڴ�����ݸ���
	//int sz = 0; 
	//data��sz�����������Ƿ�װ��һ��ͨѶ¼�ṹ��
	Contact con;
	InitContact(&con);
	//��ʼ��ͨѶ¼�������ڲ��ı�ı��ⲿ����ͨѶ¼con����Ҫ���ݵ�ַ����ʼ������
	//�ṹ�崫����ô���ַ
//	do {
//		menu();
//		printf("��ѡ��:>");
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
		printf("��ѡ��:>");
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


