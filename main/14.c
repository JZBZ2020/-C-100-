/*
��14�� ���д����fun,�����Ĺ���ʹ�����ά�����ܱ�Ԫ��֮�ͣ�
��Ϊ����ֵ���ء���ά�����е�ֵ���������и���
*/

#include<stdio.h>
int fun14(int a[4][4]) {
	//ʱ�临�Ӷ�O(n^2)
	int sum = 0, i, j;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			if (i == 0 || j == 0 || i == 4 - 1 || j == 4 - 1)
				sum += a[i][j];
	return sum;
}

int mian() {
	int M = 4, N = 4;
	int fun_14(int a[M][N]);
	int a[][4] = {
		{ 1,1,1,1 },
		{ 2,2,2,2 },
		{ 3,3,3,3 },
		{ 4,4,4,4 }
	};//30
	int c = fun14(a);
	printf("%d\n", c);
	return 0;
}


int fun_14(int a[M][N])
{
	int i, j, s = 0;
	for (j = 0; j<N; j++)
	{
		s += a[0][j];
		s += a[M - 1][j];
	}
	for (i = 1; i<= M - 2; i++)
	{
		s += a[i][0];
		s += a[i][N - 1];
	}
	return s;
}