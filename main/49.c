/*
��49�� ���д����fun���书���ǣ�
��s��ָ�ַ������±� Ϊż��ͬʱasciiֵΪ�������ַ�ɾ����
s��ʣ����ַ��γɵ��´�����t��ָ�������С�
*/

void fun(char *str, char t[])
{
	int len = strlen(str);
	int k = 0;
	for (int i = 0; i<len; i++)
	{
		if (i % 2 == 0 && str[i] % 2 == 1) continue;
		t[k++] = str[i];
	}
	t[k] = '\0';
}