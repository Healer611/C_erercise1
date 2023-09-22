#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#define DEFAULT_SZ 3 //默认值3
#define INC_SZ 2  //每次 增加两个联系人

enum OPPION
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,//修改
	SHOW,
	SORT  //排序
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
	int sz;//当前存放的有效元素的个数
	int capacity;//通讯录当前最大容量
}Contact;

void InitContact(Contact* pc);

void AddContact(Contact* pc);

void ShowContact(Contact* pc);

void DelContact(Contact* pc);

void SearchContact(const Contact* pc);

void ModifyContact(Contact* pc);

void SortContact(Contact* pc);

void DestroyContact(Contact* pc);