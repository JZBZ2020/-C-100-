/*
��21�� ���д����fun,�Գ���Ϊ7���ַ����ַ�����
����β�ַ��⣬������5���ַ���ascii�뽵�����С�

�޸ĺ󣺶����ⳤ�ȵ��ַ���������β�ַ������ఴascii�뽵������
*/
#include<string.h>
void fun(char *p) {
	int len = strlen(p);
	/*	a    dgcb   g
	1 2 3
	6-2 = 4
	*/
	int i, j;
	char temp;
	for (i = 1; i < len - 2; i++)
		for (j = 1; j < len - 1 - i; j++)
			if (p[j] < p[j + 1]) {
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
}