/*
��41�� ���д����fun���ú����Ĺ����ǣ�
��m��n�еĶ�ά�����е��ַ����ݣ����е�˳�����ηŵ�һ���ַ����С�
*/

#define m  10
#define n  10

//method01
void fun41_1(char str[m][n], char *ch)
{
	/*      012
	    0   123
		1   456
		2   789

		147258369
	*/
	int k = 0;
	for (int j = 0; j < n; j++)
		for (int i = 0; i < m; j++)
		{
			ch[k++] = str[i][j];
		}
	ch[k] = '\0';//�����ԣ�str���鳤���޶�����
}


