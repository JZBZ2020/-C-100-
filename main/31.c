/*
��31�� ���д����fun���书���ǣ�
��s��ָ�ַ����г����±�Ϊż����ͬʱasciiֵҲΪż�����ַ��⣬�����ȫ��ɾ����
����ʣ���ַ����γɵ�һ���´�����t��ָ��һ�������С�
*/
#include<string.h>
void fun(char *ch, char t[])
{
	int len = strlen(ch),k=0;
	for (int i = 0; i < len; i++)
	{
		if (i % 2 == 0 || ch[i] % 2 == 0)
		{
			t[k++] = ch[i];
		}
	}
}