/*
��13�� ���дһ������void fun(int tt[m][n],int pp[n]),ttָ��һ��m��n�еĶ�ά�����飬
�����ά������ÿ������СԪ�أ������η���pp��ָ��һά�����С���ά�����е��������������и��衣

*/
#include<stdio.h>
void fun13(int tt[4][4], int pp[4])
{
	int i, j, k = 0, z;
	for (j = 0; j < 4; j++) {
		z = tt[0][j];
		for (i = 0; i < 4; i++) {
			if (tt[i][j]<z) 	z = tt[i][j];	
		}
		pp[k++] = z;
	}
}

//int main(){
//	int tt[][4] = 
//	{
//		{1,2,8,9},
//		{89,85,3,6},
//		{71,56,32,4},
//		{65,21,6,7}
//	};
//	int pp[4];
//
//	fun13(tt, pp);
//
//	int i;
//	for (i = 0; i < 4; i++)	printf("%d\t", pp[i]);
//	
//	return 0;
//}


//void fun(int tt[M][N], int pp[N])
//{
//	int I, j, min;
//	for (j = 0; j��N; j++)
//	{
//		min = tt[0][j];
//		for (i = 0; i��M; i++)
//		{
//			if (tt[i][j]��min)
//				min = tt[i][j];
//		}
//		pp[j] = min;
//	}
//}
