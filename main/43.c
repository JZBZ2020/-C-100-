/*
��43�� ��дһ���������Ӵ����num���ַ������ҳ�һ�����һ���ַ�����
��ͨ���β�ָ��max���ظô���ַ(��****��Ϊ��������ı�־)��

*/

char *fun(char (*a)[81], int num)
{
	int i;
	char *max;
	max = a[0];
	for (i = 0; i<num; i++)
		if (strlen(max)<strlen(a))
			max = a;
	return max;
}