/*

��18�� ��д����ʵ�־���(3��3��)��ת��(�����л���)��

*/


void fun(int array[3][3])
{
	int i, j, temp;
	for (i = 0; i<3; i++)
		for (j = 0; j < i; j++)
		{
			temp = array[i][j];
			array[i][j] = array[j][i];
			array[j][i] = temp;
		}
}