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
	if (pc->sz == pc->capacity)//�ж��Ƿ���Ҫ����
	{
		PeoInfo* ptr=(PeoInfo*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PeoInfo));
		if (ptr == NULL) {
			perror("CheckCapacity");
			return 0;
		}
		else {
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("�ɹ�����\n");
			return 1;
		}
	}
	return 1;
}
void AddContact(Contact* pc)
{
	assert(pc);
	if (CheckCapacity(pc) == 0)//����ʧ�ܣ�ֹͣ�����ϵ��
		return;				
	/*���ݳɹ���ʾ����*/
	printf("����������:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("�������ַ:>");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("�ɹ������ϵ��\n");
}


void ShowContact(Contact* pc)
{
	assert(pc);
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", 
		"����", "����", "�Ա�", "�绰", "��ַ");
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
	char name[100] = { 0 };
	printf("������Ҫɾ�����˵����֣�");
	scanf("%s", name);
	int del = FindByName(pc, name);
	if (del = -1) {
		printf("Ҫɾ�����˲�����\n");
		return;
	}
	int i = 0;
	for (i = del; i < pc->sz - 1; i++) {
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("�ɹ�ɾ����ϵ��\n");
}

void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[100] = { 0 };
	printf("������Ҫ�����˵����֣�");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
		printf("Ҫ���ҵ��˲�����\n");
	else {
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
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
	printf("������Ҫ�޸��˵�����\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
		printf("Ҫ�޸ĵ��˲�����\n");
	else {
		printf("����������:>");
		scanf("%s", pc->data[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->data[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s", pc->data[pos].addr);
		printf("�޸����\n");
	}
}

void DestroyContact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
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
	printf("��������Ҫ�������Ŀ\n");
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
		printf("��Ч������ѡ��\n");
		return;
	}

	// ��������Ľ��
	printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
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