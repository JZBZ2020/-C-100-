/*
��7�� ���дһ������int fun(int *s,int t,int *k),
���������������Ԫ���������е��±�,�������k��ָ�Ĵ��浥Ԫ
*/
#include<stdio.h>
int fun7(int *s, int t, int *k) {
	int i,max=s[0];
	for (i = 0; i < t; i++) 
		if (s[i] >= max) {
			max = s[i];
			*k = i+1;
		}
	return max;
}

