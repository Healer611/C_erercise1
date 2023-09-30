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

//排序指定联系人信息
void SortContact(Contact* pc);

//销毁通讯录
void DestroyContact(Contact* pc);

//保存通讯录信息到文件
void SaveContact(Contact* pc);