/*
��8�� ��д����fun,�����ǣ��������¹��Ƽ���s,��������Ϊ����ֵ���أ�
nͨ���βδ��롣S=1+1/(1+2)+1/(1+2+3)+����.+1/(1+2+3+4+����+n)
*/
#include<stdio.h>

int add(int n) {
	//����1�ۼӵ�n
	int sum = 0, i;
	for (i = 1; i <= n; i++) {
		sum += i;
	}
	return sum;
}
// 1 + 1/3 + 1/6
float fun88(int n) {
	int i;
	float sum = 0;
	for (i = 1; i <= n; i++) 
		sum += (1 / (float)add(i) );
	return sum;
}


//�����Ǳ�׼�𰸣�ʱ�临�Ӷ�O(n)  ����ʱ�临�Ӷ�O(n)*O(1~n)
float fun8(int n)
{
	int i;
	float s = 1.0, t = 1.0;
	for (i = 2; i<= n; i++)
	{
		t += i;
		s += 1 / t;
	}
	return s;
}