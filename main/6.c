/*
��6�� ���дһ������void fun(char a[],char[] b,int n),�书���ǣ�
ɾ�����ַ�����ָ���±��������ַ���
���У�aָ��ԭ�ַ�����ɾ������ַ��������b��ָ�������У�n�д��ָ�����±ꡣ

*/
#include<string.h>
#include<stdio.h>
void fun6(char a[], char b[], int n)
{
	int i, j = 0, len = strlen(a);

	for (i = 0; i<len; i++)
		if (i >= (n - 1)) {
			b[j++] = a[i];
		}
	a[n - 1] = '\0';
	b[j] = '\0';

}