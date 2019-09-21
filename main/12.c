/*
��12�� ���г�������n��n�Ķ�ά���飬�����������и�ֵ��
���д����fun, �����Ĺ���ʹ��������ܱ�Ԫ�ص�ƽ��ֵ����Ϊ����ֵ���ظ��������е�s��
*/
#define N 3
float fun12(int a[][N],int n) {
	//ʱ�临�Ӷ�O(n^2)
	int sum=0, i, j,k=0;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) 
			if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
				sum += a[i][j];
				k++;
			}
				
	return sum / k;
}


double fun(int w[][N])
{//ʱ�临�Ӷ�O(4n)
	int i, j, k = 0;
	double s = 0.0;

	for (j = 0; j<N; j++)
	{
		s += w[0][j];
		k++;
	}

	for (j = 0; j<N; j++)
	{
		s += w[N - 1][j];
		k++;
	}
	for (i = 1; i<= N - 2; i++)
	{
		s += w[i][0];
		k++;
	}
	for (i = 1; i<= N - 2; i++)
	{
		s += w[i][N - 1];
		k++;
	}
	return s /= k;
}
