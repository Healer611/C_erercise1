#define _CRT_SECURE_NO_WARNINGS 1

//���ַ����е����е��ʽ��е��š�
//
//˵����
//1�����ɵ��ʵ��ַ�ֻ��26����д��СдӢ����ĸ��
//2���ǹ��ɵ��ʵ��ַ�����Ϊ���ʼ������
//3��Ҫ���ź�ĵ��ʼ������һ���ո��ʾ�����ԭ�ַ��������ڵ��ʼ��ж�������ʱ������ת����Ҳֻ�������һ���ո�������
//4��ÿ�������20����ĸ��
//
//���ݷ�Χ���ַ�����������: 1��n��10000
//����������
//����һ�У���ʾ�������ŵľ���
//���������������ӵĵ��Ž��
//
//ʾ��1
//���룺I am a student
//�����student a am I
//ʾ��2
//���룺$bo * y gi!r#l
//�����l r gi y bo

#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main() {
    char s[10000];
    gets(s);
    int len = strlen(s);
    int a = len - 1;
    while (a >= 0) {
        while (a >= 0 && !isalpha(s[a]))
            a--;
        int b = a;
        while (a >= 0 && isalpha(s[a]))
            a--;
        for (int i = a + 1; i <= b; i++)
            printf("%c", s[i]);
        if (a > 0)
            printf(" ");
    }
    return 0;
}