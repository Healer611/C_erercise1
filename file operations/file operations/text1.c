#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
//int main()
//{
//	//相对路径
//	//FILE* pf = fopen("..\\Debug\\data.txt", "w");
//
//	//绝对路径
//	//C:\Users\Administrator\Desktop\data.txt
//	//FILE* pf = fopen("C:\\Users\\Administrator\\Desktop\\data.txt", "w");
//
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	//fputc('a', pf);
//	//fputc('b', pf);
//	//fputc('c', pf);
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		fputc('a'+i, stdout);
//	}
//
//	//关闭文件
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
//	//读文件
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//	ch = fgetc(stdin);
//	printf("%c\n", ch);
//
//	//关闭文件
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
//	//写文件 - 写一行
//	fputs("hello bit\n", pf);
//	fputs("hello xiaobite\n", pf);
//
//	//关闭文件
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
//	//读文件 - 读一行
//	char arr[10] = { 0 };
//	fgets(arr, 10, pf);
//	printf("%s\n", arr);
//	fgets(arr, 10, pf);
//	printf("%s", arr);
//
//	//关闭文件
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
//	//写文件
//	struct S s = { 100, 3.14f };
//	fprintf(pf, "%d %f", s.a, s.s);
//
//	//关闭文件
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
//	//写文件
//	struct S s = {0};
//	fscanf(pf, "%d %f", &(s.a), &(s.s));
//
//	fprintf(stdout, "%d %f", s.a, s.s);
//
//	//关闭文件
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
//	//写文件
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
//	//读文件
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
//	//读文件
//	//定位文件指针到f
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
//	//读文件
//	//定位文件指针到f
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
//	//读文件
//	//定位文件指针到f
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
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//拷贝文件
//拷贝data1.txt 文件，产生一个新的文件data2.txt
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
//	//读写文件
//	int ch = 0;
//	while ((ch = fgetc(pfRead)) != EOF)
//	{
//		fputc(ch, pfWrite);
//	}
//
//	//关闭文件
//	fclose(pfRead); 
//	pfRead = NULL;
//	fclose(pfWrite);
//	pfWrite = NULL;
//
//	return 0;
//}




#include <stdio.h>
#include <windows.h>
//VS2019 WIN11环境测试

//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}
//