#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//1. ���� n�Ľ׳ˡ�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	for (i = 1; i <= n; i++) {
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}


//2. ���� 1!+2!+3!+����+10!
//int main()
//{
//	int sum = 0,ret = 1;
//	int n = 0;
//	for (n = 1; n <= 10; n++) {
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//3. ��һ�����������в��Ҿ����ĳ������n��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d", &k);
//	int flag = 0;
//	for (int i = 0; i < 10; i++) {
//		if (k == arr[i]) {
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("�Ҳ���\n");
//	return 0;
//}

//�۰���ң����ֲ��ң�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int k = 0,flag=0;
//	scanf("%d", &k);
//	while (left <= right) {
//		int mid = (left + right) / 2;// mid = left + (right-left) / 2���ʺϽϴ�����ʱʹ��
//		if (arr[mid] < k)
//			left = mid + 1;
//		else if (arr[mid] > k)
//			right = mid - 1;
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//		printf("�Ҳ���\n");
//	return 0;
//}


//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int a, b;
//	int sum = 0;
//	for (int i = 1; i <= 100; i++) {
//		a = i % 10;
//		b = i / 10;
//		if (a == 9 || b == 9)
//			sum += 1;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//��д���룬��ʾ����ַ��������ƶ������м���
//welcome to bit!!!!!!!
//*********************
//w*******************!
//we*****************!!
//wel***************!!!
//...
//welcome to bit!!!!!!!
//#include <windows.h>
//#include <string.h>
//#include <time.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "********************";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ�ֻ����������������,
//���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����
//"123456"
//strcmp �����ǱȽ��ַ����Ĵ�С��,ͷ�ļ�string.h
//>   >0
//==  0
//<   <0
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("���������룺");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0) {
//			printf("����ɹ�\n");
//			break;
//		}
//		else
//			printf("�������\n");
//	}
//	if (i == 3)
//		printf("������������˳�����");
//	return 0;
//}


//#include <time.h>
//#include <stdio.h>
//void menu()
//{
//	printf("**************************\n");
//	printf("******  1. play     ******\n");
//	printf("******  0. exit     ******\n");
//	printf("**************************\n");
//}
//
//
//void game()
//{
//	int ret = rand()%100+1;
//	int guess = 0;
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//��������Ϸʵ��
//�����������һ��1~100֮�����
//���������ǲ�����
//�����С�ˣ��͸������С��
//����´��ˣ��͸�����´���
//����¶��ˣ��Ǿ͹�ϲ�㣬��Ϸ����
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("******************\n");
//	printf("*******1.play*****\n");
//	printf("*******0.exit*****\n");
//	printf("******************\n");
//}
//
//void game()
//{
	//	//1. ����1~100�������
	//	//rand����������α�����
	//	//rand����������������ķ�Χ�ǣ�0~RAND_MAX(32767)
	//	//rand���������������֮ǰ��Ҫʹ��srand���������������������
//	int guess = 0;
//	int ret = rand() % 100 + 1;
//	while (1) {
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("��С��\n");
//		else if (guess > ret)
//			printf("�´���\n");
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	/*do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case1:
//			game();
//			break;
//		case0:
//			printf("�˳���Ϸ\n");
//			break;
//		//default:
//		//	printf("ѡ�����������ѡ��\n");
//		//		break;
//		}
//	} while (input);*/
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//�ػ�����
//��������������1�����ڹػ�
//��������룺��������ȡ���ػ�
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1) {
//		printf("��ĵ�����һ�����ھͻ�ػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0) {
//			system("shutdown -a");
//			printf("�����ϣ��Ѿ�ȡ���ػ�");
//			break;
//		}
//	}
//	return 0;
//}