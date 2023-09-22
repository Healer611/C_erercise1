#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#define DEFAULT_SZ 3 //Ĭ��ֵ3
#define INC_SZ 2  //ÿ�� ����������ϵ��

enum OPPION
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,//�޸�
	SHOW,
	SORT  //����
};

typedef struct PeoInfo
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];
	char addr[30];
}PeoInfo;

typedef struct Contact
{
	PeoInfo* data;
	int sz;//��ǰ��ŵ���ЧԪ�صĸ���
	int capacity;//ͨѶ¼��ǰ�������
}Contact;

void InitContact(Contact* pc);

void AddContact(Contact* pc);

void ShowContact(Contact* pc);

void DelContact(Contact* pc);

void SearchContact(const Contact* pc);

void ModifyContact(Contact* pc);

void SortContact(Contact* pc);

void DestroyContact(Contact* pc);