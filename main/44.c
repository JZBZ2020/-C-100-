/*
��44�� ��дһ���������ú�������ͳ��һ������Ϊ2���ַ�������һ���ַ����г��ֵĴ�����
*/

int fun44(char *str, char *ch)
{
	//ͳ��str�� ch���ֵĸ���
	char *p = str;
	int k = 0;
	/*  fqefwqefaaqewf   aa
	p
	*/
	int len = strlen(str);
	for (char *p = str; p < str + len; p += 2)
		if (p[0] == ch[0])
			if (p[1] == ch[1]) {
				k++;
			}

	return k;
}