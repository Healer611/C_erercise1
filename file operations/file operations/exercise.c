#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//struct S {
//	int a;
//	char b[10];
//}s;
//int main()
//{
//	FILE* p = fopen("data.txt", "r");
//	if (p == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	//fputc('h', p);
//	//int a = fget(p);
//	//char b[10] = { 0 };
//	//fgets(b, 3, p);
//	//printf("%s", b);
//	//fprintf(p, "%d\n%s", 5, "hello");
//	fscanf(p, "%d\n%s", &(s.a), &(s.b));
//	printf("%d\n%s\n", s.a, s.b);
//	fclose(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	int ch1 = fgetc(pf);
//	printf("%c\n", ch1);
//
//	int ch2 = fgetc(pf);
//	printf("%c\n", ch2);
//
//	fseek(pf, 3, SEEK_CUR);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	//int ch = ftell(pf);
//	//printf("%d\n", ch);
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL) {
//		perror("fopen");
//		return 1;
//	}
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fseek(pf, 3, SEEK_CUR);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main(void)
//{
//	int c; // ע�⣺int����char��Ҫ����EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) {
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc ����ȡʧ�ܵ�ʱ����������ļ�������ʱ�򣬶��᷵��EOF
//	while ((c = fgetc(fp)) != EOF) // ��׼C I/O��ȡ�ļ�ѭ��
//	{
//		putchar(c);
//	}
//	//�ж���ʲôԭ�������
//	if (ferror(fp))
//		puts("\nI/O error when reading");
//	else if (feof(fp))
//		puts("\nEnd of file reached successfully");
//	fclose(fp);
//	return 0;
//}


//#include <stdio.h>
//enum { SIZE = 5 };
//int main(void)
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // �����ö�����ģʽ
//	fwrite(a, sizeof * a, SIZE, fp); // д double ������
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // �� double ������
//	if (ret_code == SIZE) {
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else { // error handling
//		if (feof(fp))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(fp)) {
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(fp);
//}