/*
��9�� ��дһ������fun�����Ĺ����ǣ��������¹�ʽ��p��ֵ������ɺ���ֵ���ء�
M��nΪ��������������Ҫ��m>n�� p=m!/n!(m-n)!
54321
120/2*6
factorial   �׳ˣ�����
*/
#include<stdio.h>
#define cnm 0

int factorial(int n) {
	int y = 1;
	for (int i = 1; i <= n; i++) 
		y *= i;
	return y;
}

float fun9(int m,int n) {
	if (m > n) {
		float a = (float)factorial(m);
		float b = (float)factorial(n);
		float c = (float)factorial(m - n);
		return a / b*c;
	}
	else {
		return cnm;
	}

}

