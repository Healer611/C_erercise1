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
	MODIFY,//修改
	SHOW,
	SORT  //排序
};


//类型的声明
typedef struct PeoInfo
{
	char name[20];
	int age;
	char sex[5];
	char tele[12];
	char addr[30];
}PeoInfo;

//通讯录
typedef struct Contact
{
	PeoInfo data[100];
	int sz;
}Contact;


//初始化函数声明
void InitContact(Contact* pc);

//增加联系人
void AddContact(Contact* pc);

//显示所有联系人的信息
void ShowContact(const Contact* pc);//不需要修改加const

//删除指定联系人
void DelContact(Contact* pc);

//查找指定联系人
void SearchContact(const Contact* pc);

//修改指定联系人
void ModifyContact(Contact* pc);