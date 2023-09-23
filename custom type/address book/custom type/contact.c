#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

void InitContact(Contact* pc)
{
	assert(pc);
	memset(pc->data, 0, sizeof(pc->data));//��Ҫ����<stdlib.h>	
	pc->sz = 0;
}

void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX) {
		printf("ͨѶ¼�������޷����\n");
		return;
	}
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

void ShowContact(const Contact* pc)
{
	assert(pc);
	//��ӡ�б���
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

int FindByName(const Contact* pc, char name[])
{
	/*����֧�ֺ����ڲ��Ĳ��ҹ��ܣ�����Ҫ�ñ���֪����
	���Կ��Բ���ͷ�ļ���������������ļ��ں����ܵ��ü��ɣ�����staticҲ����*/
	int i;
	for (i = 0; i < pc->sz; i++)
	{
	//�Ƚ�char�����ַ���name��Ҫstrcmp
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
	printf("������Ҫɾ�����˵�����:>");
	scanf("%s", name);
	 
	int del = FindByName(pc, name);
	if (del == -1) {
		printf("Ҫɾ�����˲�����\n");
		return;
	}

	//ɾ������Ϊdel����ϵ��
	int i;
	for (i = del; i < pc->sz - 1; i++) {
		pc->data[i] = pc->data[i + 1];
	}
	/*�ú���ÿ��ֻɾ��һ��name�����磺����Ľṹ��ָ�������ʮ��name����sz=20��
	ɾ��һ�����name������Ԫ�ض�Ҫ��ǰ�ƶ�һλ�����һλԪ�ص��±�Ϊ19��
	��Ҫ�ƶ�sz-1�Σ��� i ҪС�� sz-1��
	��֤�±�Ϊdel�����һ��Ԫ���±�Ϊsz��ǰ�ƶ�һλ*/

	pc->sz--;
	printf("�ɹ�ɾ����ϵ��\n");
}


void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[MAX_NAME] = { 0 };
	printf("������Ҫ�����˵����֣�");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
		printf("Ҫ���ҵ��˲�����\n");
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-30s\t\n", 
			"����", "����", "�Ա�", "�绰", "��ַ");
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