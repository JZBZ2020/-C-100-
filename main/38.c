/*
��38�� ���д����fun�����Ĺ����ǣ����ss��ָ�ַ�����ָ���ַ��ĸ����������ش�ֵ��

*/



int fun38(char *ch, char c)
{
	int count=0;
	char *p = ch;
	while (*p)
	{
		if (*p == c) count++;
		p++;
	}
	return count;
}