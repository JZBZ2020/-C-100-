/*
��28�� ���дһ������fun�����Ĺ����ǣ�
�ҳ�һά��������Ԫ��������ֵ�������ڵ��±꣬����ֵ�������ڵ��±�ͨ���βδ��ء�
����Ԫ���е�ֵ�����������и��衣
��������x����������n ��x�е����ݸ�����max������ֵ��index������ֵ����Ԫ�ص��±ꡣ*/

void fun28(int x[], int n, int *max, int *index)
{
	int i;
	int imax = 0, iindex;
	for (i = 0; i < n; i++)
	{
		if (x[i]>imax)
		{
			imax = x[i];
			iindex = i;
		}
	}
	*(int*)max = imax;
	*(int*)index = iindex;
}