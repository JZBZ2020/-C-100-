#include<stdio.h>
#include<string.h>

/*
��20�� ��д����int fun(int lim,int aa[max]),
�ú����Ĺ��������С�ڻ����lim����������������aa�����У��ú�����������������ĸ�����
*/
int isPrime(int m) {
	int i;
	for (i = 2; i < m; i++)
		if (m%i == 0) return 0;
	return 1;
}
int fun(int lim, int aa[]) {
	int i;
	int k = 0;//���������
	for (i = 2; i <= lim; i++)
		if (isPrime(i)) {
			aa[k++] = i;
		}

	return k;
}

//int main() {
//	int aa[50];
//	int num = fun(100, aa);
//	printf("num=%d\n", num);
//	for (int *p = &aa[0]; p < aa + num; p++) {
//		printf("%d\n", *p);
//	}
//
//}