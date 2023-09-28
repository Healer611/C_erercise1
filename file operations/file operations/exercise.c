#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	FILE* p = fopen("data.txt", "r");
	if (p == NULL) {
		perror("fopen");
		return 1;
	}
	//fputc('h', p);
	//int a = fget(p);
	//char b[10] = { 0 };
	//fgets(b, 3, p);
	//printf("%s", b);
	fprintf(p, "%d\n%s", 5, "hello");
	fscanf(stdout, "%d", p);
	fclose(p);
	p = NULL;
	return 0;
}