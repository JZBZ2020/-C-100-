/*
��46�� ѧ���ļ�¼��ѧ�źͳɼ���Ƹ���n����ѧ�������������������з���ṹ������s�У�
���д����fun�����Ĺ���ʱ���������ĸߵ�����ѧ���ļ�¼���߷���ǰ
*/
#define N 10
struct student
{
	int id;
	float score;
};

struct student s[N];

void fun(struct student s[],int len)
{
	struct student temp;
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (s[j].score < s[j + 1].score)
			{
				temp = s[j];
				s[j] = s[j + 1];
				s[j + 1] = s[j];

			}
		}
	}
}
