/*
��34�� ѧ���ļ�¼��ѧ�źͳɼ���ɣ�n��ѧ�������������������з���ṹ������s�У�
���д����fun�����Ĺ���ʹ���ѷ�����ߵ�ѧ�����ݷ���h��ָ�������У�
ע�⣺������ߵ�ѧ�����ܲ�ֹһ�����������ط�����ߵ�ѧ����������
*/

#include<stdio.h>
struct Student
{
	int id;
	float score;
};

int fun34(struct Student s[],struct Student h[],int n)
{//nΪѧ��������ֱ�������������򵥵�
	int max=0, k=0;
	for (int i = 0; i < n; i++)
	{
		if (s[i].score > max) max = s[i].score;
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i].score == max) h[k++] = s[i];
	}
	return k;
}

