#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	//���·��
//	//FILE* pf = fopen("..\\Debug\\data.txt", "w");
//
//	//����·��
//	//C:\Users\Administrator\Desktop\data.txt
//	//FILE* pf = fopen("C:\\Users\\Administrator\\Desktop\\data.txt", "w");
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	//fputc('a', pf);
//	//fputc('b', pf);
//	//fputc('c', pf);
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a'+i, stdout);
//	}
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ� - дһ��
//	fputs("hello bit\n", pf);
//	fputs("hello xiaobite\n", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ� - ��һ��
//	char arr[10] = { 0 };
//	fgets(arr, 10, pf);
//	printf("%s\n", arr);
//	fgets(arr, 10, pf);
//	printf("%s", arr);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//struct S
//{
//	int a;
//	float s;
//};
//
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	struct S s = { 100, 3.14f };
//	fprintf(pf, "%d %f", s.a, s.s);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//
//struct S
//{
//	int a;
//	float s;
//};
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	struct S s = {0};
//	fscanf(pf, "%d %f", &(s.a), &(s.s));
//
//	fprintf(stdout, "%d %f", s.a, s.s);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//struct S
//{
//	int a;
//	float s;
//	char str[10];
//};
//
//int main()
//{
//	char arr[30] = { 0 };
//	struct S s = { 100, 3.14f, "hehe" };
//	struct S tmp = {0};
//
//	sprintf(arr, "%d %f %s", s.a, s.s, s.str);
//	//printf("%s\n", arr);
//	sscanf(arr, "%d %f %s", &(tmp.a), &(tmp.s), tmp.str);
//
//	printf("%d %f %s\n", tmp.a, tmp.s, tmp.str);
//
//	return 0;
//}

//
//struct S
//{
//	int a;
//	float s;
//	char str[10];
//};
//
//int main()
//{
//	struct S s = { 99, 6.18f, "bit" };
//
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//struct S
//{
//	int a;
//	float s;
//	char str[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	FILE* pf = fopen("data.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%d %f %s\n", s.a, s.s, s.str);
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//


//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	//��λ�ļ�ָ�뵽f
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//c
//
//
//	fseek(pf, -3, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	//��λ�ļ�ָ�뵽f
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//c
//
//
//	int pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	//��λ�ļ�ָ�뵽f
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//b
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//c
//
//	rewind(pf);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);//a
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//�����ļ�
//����data1.txt �ļ�������һ���µ��ļ�data2.txt
//
//int main()
//{
//	FILE* pfRead = fopen("data1.txt", "r");
//	if (pfRead == NULL)
//	{
//		perror("open file for read");
//		return 1;
//	}
//	FILE* pfWrite = fopen("data2.txt", "w");
//	if (pfWrite == NULL)
//	{
//		perror("open file for write");
//		fclose(pfRead);
//		pfRead = NULL;
//		return 1;
//	}
//	//��д�ļ�
//	int ch = 0;
//	while ((ch = fgetc(pfRead)) != EOF)
//	{
//		fputc(ch, pfWrite);
//	}
//
//	//�ر��ļ�
//	fclose(pfRead); 
//	pfRead = NULL;
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}




#include <stdio.h>
#include <windows.h>
//VS2019 WIN11��������

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//�Ƚ�����������������
//	printf("˯��10��-�Ѿ�д�����ˣ���test.txt�ļ��������ļ�û������\n");
//	Sleep(10000);
//	printf("ˢ�»�����\n");
//	fflush(pf);//ˢ�»�����ʱ���Ž����������������д���ļ������̣�
//	//ע��fflush �ڸ߰汾��VS�ϲ���ʹ����
//	printf("��˯��10��-��ʱ���ٴδ�test.txt�ļ����ļ���������\n");
//	Sleep(10000);
//	fclose(pf);
//	//ע��fclose�ڹر��ļ���ʱ��Ҳ��ˢ�»�����
//	pf = NULL;
//	return 0;
//}
//