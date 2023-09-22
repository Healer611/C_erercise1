#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	pc->data = (PeoInfo*)malloc(DEFAULT_SZ * sizeof(PeoInfo));
	if (pc->data == NULL) {
		perror("InitContact");
		return;
	}
	pc->sz = 0;
	pc->capacity = DEFAULT_SZ;
}
int CheckCapacity(Contact* pc)
{
	if (pc->sz == pc->capacity)//判断是否需要增容
	{
		PeoInfo* ptr=(PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL) {
			perroe("CheckCapacity");
			return 0;
		}
		else {
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("成功增容\n");
			return 1;
		}
	}
	return 1;
}
void AddContact(Contact* pc)
{
	assert(pc);
	if (CheckCapacity(pc) == 0)//增容失败，停止添加联系人
		return;				
	/*增容成功提示输入*/
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


void ShowContact(Contact* pc)
{
	assert(pc);
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", 
		"名字", "年龄", "性别", "电话", "地址");
	for (int i = 0; i < pc->sz; i++) {
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
	for (int i = 0; i < pc->sz; i++) {
		if (strcmp(pc->data[i].name, name) == 0)
			return i;
	}
	return -1;
}

void DelContact(Contact* pc)
{
	assert(pc);
	int x = pc->capacity;
	char name[100]] = { 0 };
	printf("请输入要删除的人的名字：");
	scanf("%s", name);
	int del = FindName(pc, name);
	if (del = -1) {
		printf("要删除的人不存在\n");
		return;
	}
	int i = 0;
	for (i = del; i < pc->sz - 1; i++) {
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("成功删除联系人\n");
}

void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[100] = { 0 };
	printf("请输入要查找人的名字：");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
		printf("要查找的人不存在\n");
	else {
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
	char name[100] = { 0 };
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

void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}