#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	memset(pc->data, 0, sizeof(pc->data));//需要包含<stdlib.h>	
	pc->sz = 0;
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX) {
		printf("通讯录已满，无法添加\n");
		return;
	}
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("成功添加联系人\n");
}

void ShowContact(const Contact* pc)
{
	assert(pc);
	//打印列标题
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "名字", "年龄", "性别", "电话", "地址");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\t\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}

int FindByName(const Contact* pc, char name[])
{
	/*用来支持函数内部的查找功能，不需要让别人知道，
	所以可以不在头文件里声明，在这个文件内函数能调用即可，加上static也可以*/
	int i;
	int flag = 0;//记录是否找到要删除的name
	for (i = 0; i < pc->sz; i++)
	{
	//比较char类型字符串name需要strcmp
		if (strcmp(pc->data[i].name, name) == 0) {
			return i;
		}
	}
	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要删除的人的名字:>");
	scanf("%s", name);

	//int del;//记录找到的name的下标
	//int i;
	//int flag = 0;//记录是否找到要删除的name
	//for (i = 0; i < pc->sz; i++)
	//{
	//	//比较char类型字符串name需要strcmp
	//	if (strcmp(pc->data[i].name, name) == 0) {
	//		del = i;
	//		flag = 1;//找到name赋值1
	//		break;
	//	}
	//}
	//if (flag == 0) {
	//	printf("要删除的人不存在\n");
	//	return;
	//}
	 
	int del = FindByName(pc, name);
	if (del == -1) {
		printf("要删除的人不存在\n");
		return;
	}

	//删除坐标为del的联系人
	int i;
	for (i = del; i < pc->sz - 1; i++) {
		pc->data[i] = pc->data[i + 1];
	}
	/*该函数每次只删除一个name，比如传入的结构体指针包含二十个name，即sz=20
		删除一个则该name后续的元素都要往前移动一位，
		最后一位元素的下标为19，则i要小于sz-1，
		保证下标为del到最后一个元素下标为sz-1向前移动一位*/

	pc->sz--;
	printf("成功删除联系人\n");
}


void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找人的名字\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
		printf("要查找的人不存在\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\t\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr);
	}
}

void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改人的名字\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
		printf("要修改的人不存在\n");
	else {
		printf("请输入名字:>");
		scanf("%s", pc->data[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->data[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s", pc->data[pos].addr);
		printf("修改完成\n");
	}
}


int CompareByName(const void* a, const void* b) {
	return strcmp(((PeoInfo*)a)->name, ((PeoInfo*)b)->name);
}

int CompareByAge(const void* a, const void* b) {
	return ((PeoInfo*)a)->age - ((PeoInfo*)b)->age;
}

int CompareByAddr(const void* a, const void* b) {
	return strcmp(((PeoInfo*)a)->addr, ((PeoInfo*)b)->addr);
}

void SortContact(Contact* pc)
{
	assert(pc);
	char del[10];
	printf("请输入想要排序的项目\n");
	scanf("%s", del);

	if (strcmp(del, "name") == 0)
	{
		qsort(pc->data, pc->sz, sizeof(PeoInfo), CompareByName);
	}
	else if (strcmp(del, "age") == 0)
	{
		qsort(pc->data, pc->sz, sizeof(PeoInfo), CompareByAge);
	}
	else if (strcmp(del, "addr") == 0)
	{
		qsort(pc->data, pc->sz, sizeof(PeoInfo), CompareByAddr);
	}
	else
	{
		printf("无效的排序选项\n");
		return;
	}

	// 输出排序后的结果
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "名字", "年龄", "性别", "电话", "地址");
	for (int i = 0; i < pc->sz; i++)
	{
		printf("%-20s\t%-4d\t%-5s\t%-12s\t%-30s\t\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tele,
			pc->data[i].addr);
	}
}