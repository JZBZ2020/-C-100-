/*
��35�� ���дһ������������ɾ���ַ����е����пո�
*/
#include<string.h>
void fun(char *ch)
{
	int len = strlen(ch);
	char *chc = ch;
	int k=0;
	for (int i = 0; i < len; i++)
	{
		if (ch[i] != ' ') chc[k++] = ch[i];
	}
	chc[k] = '\0';
	ch = chc;
}