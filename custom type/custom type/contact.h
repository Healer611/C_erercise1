#pragma once

#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

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


//���͵�����
typedef struct PeoInfo
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];
	char addr[30];
}PeoInfo;

//ͨѶ¼
typedef struct Contact
{
	PeoInfo data[100];
	int sz;
}Contact;


//��ʼ����������
void InitContact(Contact* pc);

//������ϵ��
void AddContact(Contact* pc);

//��ʾ������ϵ�˵���Ϣ
void ShowContact(const Contact* pc);//����Ҫ�޸ļ�const

//ɾ��ָ����ϵ��
void DelContact(Contact* pc);

//����ָ����ϵ��
void SearchContact(const Contact* pc);

//�޸�ָ����ϵ��
void ModifyContact(Contact* pc);

//����ָ����ϵ����Ϣ
void SortContact(Contact* pc);