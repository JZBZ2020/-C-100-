/*

��5�� ���дһ������void fun(int m,int k,int xx[]),�ú����Ĺ����ǣ�
����������m�ҽ���m��k����������xx��ָ��������
*/



void fun5(int m, int k, int xx[])
{
	int g = 0, i, j, flag = 1;
	for (i = m + 1; i<m*m; i++)//m+1~ (m*m-1)
	{
		for (j = 0; j<i; j++)
		{
			if (i%j != 0)
				flag = 1;
			else
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1 && j >= i)
		{
			if (k >= 0)
			{
				xx[g++] = i;
				k--;
			}
			else
				break;
		}
	}
}