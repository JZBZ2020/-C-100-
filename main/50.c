/*
��50�� ��֪ѧ���ļ�¼����ѧ�ź�ѧϰ�ɼ����ɣ�
n��ѧ���������Ѵ���a�ṹ�������С�
���д����fun���ú����Ĺ����ǣ��ҳ��ɼ���ߵ�ѧ����¼��ͨ���βη���������(�涨ֻ��һ����߷�)��

*/

#define N 10
struct student
{
	int id;
	float score;
};

struct student s[N];

struct student fun(struct student s[],int n)
{
	int max = 0;
	struct student temp;
	for (int i = 0; i < n; i++)
	{
		if (s[i].score > max)
			max = s[i].score;
			temp = s[i];
	}
	return temp;
}