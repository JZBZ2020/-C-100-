/*
��17�� ���дһ������fun(char *s)���ú����Ĺ���ʹ���ַ����е��������á�
��ϰ���������ַ����ĺ���

���⣺��ô��ӡһ���ַ����ڽ�����ֻ��c��֪ʶ
*/
#include<stdio.h>
#include<string.h>

void fun(char *s)
{
	char ch;//9
	int len = strlen(s), i;//4

	for (i = 0; i < len / 2; i++) {
		ch = s[i];
		s[i] = s[len - i - 1];
		s[len - i] = ch;
	}

}