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

//����ͨѶ¼
void DestroyContact(Contact* pc);

//����ͨѶ¼��Ϣ���ļ�
void SaveContact(Contact* pc);